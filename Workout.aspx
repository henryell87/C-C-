<%@ Page Title="" Language="C#" MasterPageFile="~/MasterPages/MySwoleMate.Master" AutoEventWireup="true" CodeBehind="Workout.aspx.cs" Inherits="MySwoleMate.Workout" %>

<asp:Content ID="Content1" ContentPlaceHolderID="head" runat="server">
</asp:Content>
<asp:Content ID="Content2" ContentPlaceHolderID="ContentPlaceHolder1" runat="server">
    <section class="first">
        <div class="container">
            <div class="row">
                <div class="col-xs-10">
                    <h1>Workout List</h1>
                </div>
                <div class="col-xs-2">
                    <a href="~/AddWorkout.aspx" runat="server" class="btn btn-success">Add New Workout</a>
                </div>
            </div>
            <div class="row">
                <div class="col-lg-12 text-center">
                    <asp:GridView ID="WorkoutList" runat="server" CssClass="table table-bordered text-left"
                        AutoGenerateColumns="False" OnRowDeleting="WorkoutList_RowDeleting" DataKeyNames="WorkoutID">
                         <Columns>
                            <%--We use HyperLinkField in order to create an Edit button which passes the WorkoutID as a Query String
                                You can see the query string after the "?" in the DataNavigateUrlFormatString property.
                                Anything after the "?" is considered a query string, which you can use to pass information to one
                                page to another. We use the Query String to pass the WorkoutID to the EditWorkout Page.
                                The DataNavigateUrlFormatString replaces the {0} with the DataNavigateUrlFields property, which in 
                                our case is the WorkoutID--%>
                            <asp:HyperLinkField Text="Edit" DataNavigateUrlFields="WorkoutID"
                                DataNavigateUrlFormatString="~/EditWorkout.aspx?WorkoutID={0}" ControlStyle-CssClass="btn btn-success btn-xs"
                                ItemStyle-CssClass="text-center" />
                            <asp:TemplateField ItemStyle-CssClass="text-center">
                                <ItemTemplate>
                                    <%--The Delete functionality is --%>
                                    <asp:Button runat="server" ID="DeleteButton" CommandName="Delete"
                                        CssClass="btn btn-xs btn-default" Text="Delete"
                                        OnClientClick="if(!confirm('Are you sure you wish to delete this Workout?')) return false;" />
                                </ItemTemplate>
                            </asp:TemplateField>
                            <asp:BoundField DataField="Exercise1" HeaderText="Exercise1" />
                            <asp:BoundField DataField="Exercise1Reps" HeaderText="Exercise1Reps" />
                            <asp:BoundField DataField="Exercise1Sets" HeaderText="Exercise1Sets" />
                            <asp:BoundField DataField="Exercise2" HeaderText="Exercise2" />
                            <asp:BoundField DataField="Exercise2Reps" HeaderText="Exercise2Reps" />
                            <asp:BoundField DataField="Exercise2Sets" HeaderText="Exercise2Sets" />
                            <asp:BoundField DataField="Exercise3" HeaderText="Exercise3" />
                            <asp:BoundField DataField="Exercise3Reps" HeaderText="Exercise3Reps" />
                            <asp:BoundField DataField="Exercise3Sets" HeaderText="Exercise3Sets" />
                            <asp:BoundField DataField="Exercise4" HeaderText="Exercise4" />
                            <asp:BoundField DataField="Exercise4Reps" HeaderText="Exercise4Reps" />
                            <asp:BoundField DataField="Exercise4Sets" HeaderText="Exercise4Sets" />
                            <asp:BoundField DataField="Exercise5" HeaderText="Exercise5" />
                            <asp:BoundField DataField="Exercise5Reps" HeaderText="Exercise5Reps" />
                            <asp:BoundField DataField="Exercise5Sets" HeaderText="Exercise5Sets" />
                        </Columns>
                    </asp:GridView>
                </div>
            </div>
        </div>
    </section>
</asp:Content>