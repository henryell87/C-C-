using MySwoleMate.BLL;
using MySwoleMate.Models;
using System;
using System.Collections.Generic;
using System.Configuration;
using System.Linq;
using System.Web;
using System.Web.UI;
using System.Web.UI.WebControls;
namespace MySwoleMate
{
    public partial class EditWorkout : System.Web.UI.Page
    {
        //Create a new instance of the business logic class for Workout, we created the instance
        //here so that we can use it with both the Page_Load and Click event for WorkoutEditButton
        WorkoutBLL bll = new WorkoutBLL(ConfigurationManager.ConnectionStrings["MySwoleMateConnectionString"].ToString());
        /// <summary>
        /// Method for Load event to load values into the form for edit
        /// </summary>
        /// <param name="sender"></param>
        /// <param name="e"></param>
        protected void Page_Load(object sender, EventArgs e)
        {
            //Only load the values if the request is not a PostBack
            if (!IsPostBack)
            {
                //We pass the WorkoutID by a Query String from the GridView on Workout.aspx. See how we passed 
                //WorkoutID to this page from Workout.aspx by looking at HyperLinkField in the GridView control
                //on the Workout.aspx page for clarification
                WorkoutViewModel workout = bll.GetWorkoutById(Convert.ToInt32(Request.QueryString["WorkoutId"]));
                //We use the GetWorkoutById method to get the Workout from the database, which we use to 
                //populate the data into the form.
                Exercise1.Text = workout.Exercise1;
                Exercise1Reps.Text = workout.Exercise1Reps.ToString();
                Exercise1Sets.Text = workout.Exercise1Sets.ToString();
                Exercise1.Text = workout.Exercise2;
                Exercise1Reps.Text = workout.Exercise2Reps.ToString();
                Exercise1Sets.Text = workout.Exercise2Sets.ToString();
                Exercise1.Text = workout.Exercise3;
                Exercise1Reps.Text = workout.Exercise3Reps.ToString();
                Exercise1Sets.Text = workout.Exercise3Sets.ToString();
                Exercise1.Text = workout.Exercise4;
                Exercise1Reps.Text = workout.Exercise4Reps.ToString();
                Exercise1Sets.Text = workout.Exercise4Sets.ToString();
                Exercise1.Text = workout.Exercise5;
                Exercise1Reps.Text = workout.Exercise5Reps.ToString();
                Exercise1Sets.Text = workout.Exercise5Sets.ToString();
            }
        }

        protected void WorkoutEditButton_Click(object sender, EventArgs e)
        {
            //Check to see if all ValidationControls are valid
            if (Page.IsValid)
            {
                //Create new empty ViewModel to pass in the new values
                WorkoutViewModel workout = new WorkoutViewModel();
                //Use the same query string to fill the ID
                workout.WorkoutId = Convert.ToInt32(Request.QueryString["WorkoutId"]);
                workout.Exercise1 = Exercise1.Text;
                workout.Exercise1Reps = Convert.ToInt32(Exercise1Reps.Text);
                workout.Exercise1Sets = Convert.ToInt32(Exercise1Sets.Text);
                workout.Exercise2 = Exercise1.Text;
                workout.Exercise2Reps = Convert.ToInt32(Exercise1Reps.Text);
                workout.Exercise1Sets = Convert.ToInt32(Exercise1Sets.Text);
                workout.Exercise3 = Exercise1.Text;
                workout.Exercise3Reps = Convert.ToInt32(Exercise1Reps.Text);
                workout.Exercise3Sets = Convert.ToInt32(Exercise1Sets.Text);
                workout.Exercise4 = Exercise1.Text;
                workout.Exercise4Reps = Convert.ToInt32(Exercise1Reps.Text);
                workout.Exercise4Sets = Convert.ToInt32(Exercise1Sets.Text);
                workout.Exercise5 = Exercise1.Text;
                workout.Exercise5Reps = Convert.ToInt32(Exercise1Reps.Text);
                workout.Exercise5Sets = Convert.ToInt32(Exercise1Sets.Text);
                //Call the Editworkout() method passing in the new values
                bll.EditWorkout(workout);
                //Redirect to the Workout.aspx page
                Response.Redirect("~/Workout.aspx");
            }
        }
    }
}