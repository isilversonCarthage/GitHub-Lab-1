

This lab asks you to get familiar using Git and GitHub together when working by yourself (the next lab will ask you to coordinate with others).

    Go to GitHub and create a new repository called nameRepo. In other words, do NOT use GitHub Desktop to create the repository, use the web interface. The new repository lives on GitHub's servers, not on your machine. You will get it on your machine in the next step.
    Clone the repository to your machine. A clone is a copy of a repository from GitHub's servers to your machine. The web interface has the option to clone and open using GitHub Desktop. Choose this option.
    Using VS Code, open the repository folder that got downloaded during the cloning process. Next, create a new file called main.cpp in the folder. Paste this code into it:

    #include <iostream>
    using namespace std;

    int main()
    {
        cout<<"GitHub Demo"<<endl;
        return 0;
    }

    Use a C++ IDE to run this code. Most IDE's allow you to create a project in one location and add external code files to it. Take this approach for this lab. You do not need to add the IDE specific project files or folders to the repository.
    Run the code to confirm that it works. Then, commit the changes to the main branch and push the changes to GitHub's servers. Pushing places a copy of the changes from your local machine on GitHub's servers. This is great for keeping a backup of your code.
    Add a function to the program that prints your first and last name. Call the new function from the main() function. Test the code and then commit it to the main branch. Finally, push the changes to GitHub's servers. For example, in my program the output should look like this:

    Mark Mahoney

    Using GitHub Desktop, create a new branch called middle_name_branch and check it out.
    Alter the function to print your middle name inbetween your first and last names. Test the code, commit it, and push it.

    Mark Robert Mahoney

    Switch back to the main branch (your middle name code should disappear from the file). Then, create a new branch called calculate_age and check it out.
    Change the function to accept a year number. Print the age that you will turn in that year after your name. Test the code by passing in the current year, commit it, and push it.

    Mark Mahoney (52)

    Switch back to the main branch and then merge the middle_name_branch into the main branch (this should be an automatic, fast-forward merge). Push the changes to GitHub. 
    Go to the GitHub repo page using your web browser and explore the history of the branches and commits. In particular look at the main and midlle_name_branch branches. 
    Next, merge the 'addAge' branch into the main branch. There may be some conflicts that need to be resolved manually. If there are, go to the editor and edit the code so that it has the right combination of changes from both branches. Then test the code and then commit it. Push the changes to GitHub.

    Mark Robert Mahoney (52)

    Go back to the GitHub website and look at the repo. Click on the button that lists all the commits. Click the button to switch branches and then look at the code files in the different branches.

Note: This approach does not use Pull Requests (PR) to manage accepting changes into the main branch. When working on a repo by yourself this is pretty typical. PR's are a good way for someone (lead dev or manager) to control which changes get added to the main branch and when they get added for a team of developers.  
