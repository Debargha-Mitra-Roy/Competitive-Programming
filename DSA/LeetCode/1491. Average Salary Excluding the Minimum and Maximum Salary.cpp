class Solution {
public:
    double average(vector<int>& salary) {

        sort(salary.begin(), salary.end()); // sort the salary array

        salary.pop_back(); // delete the maximum salary

        reverse(salary.begin(), salary.end()); // reverse the salary array

        salary.pop_back(); // delete the minimum salary

        double sum = 0;

        for (int i = 0; i < salary.size(); i++)
        {
            sum = sum + salary[i]; // sum of the rest salaries
        }

        double avg = (sum / salary.size()); // avarage value of the rest salaries

        return avg;
    }
};