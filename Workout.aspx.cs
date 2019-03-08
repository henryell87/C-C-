using MySwoleMate.BLL;
using System;
using System.Collections.Generic;
using System.Configuration;
using System.Linq;
using System.Web;
using System.Web.UI;
using System.Web.UI.WebControls;


namespace MySwoleMate
{
    public partial class Workout : System.Web.UI.Page
    {
        String connectionString = ConfigurationManager.ConnectionStrings["MySwoleMateConnectionString"].ToString();
        //MySwoleMateDataContext db = new MySwoleMateDataContext(ConfigurationManager.ConnectionStrings["MySwoleMateConnectionString"].ToString());
        //Page Load event is where you do most of your data binding for any controls. Below you will see the code
        //for Data Binding the GridView with the list of Workouts called WorkoutList.
        protected void Page_Load(object sender, EventArgs e)
        {
            if (!IsPostBack)
            {
                BindData();
            }
        }
        protected void WorkoutList_RowDeleting(object sender, GridViewDeleteEventArgs e)
        {
            int WorkoutID = Convert.ToInt32(WorkoutList.DataKeys[e.RowIndex].Value.ToString());
            WorkoutBLL bll = new WorkoutBLL(connectionString);
            bll.DeleteWorkout(WorkoutID);
            BindData();
        }

        private void BindData()
        {
            WorkoutBLL Workout = new WorkoutBLL(connectionString);
            WorkoutList.DataSource = Workout.GetAllWorkouts();
            WorkoutList.DataBind();
        }

        
    }
}