struct Element{
    int value;
    int index;
    Element(int value, int index){
        this->value=value, this->index=index;
    }
};

bool compare(const Element & e1, const Element & e2)
{
    return (e1.value < e2.value);
}

class Solution {
public:
    vector<int> twoSum(vector<int> &numbers, int target) {
        vector<Element> elements;
        for (int i=0; i<numbers.size(); i++)
            elements.push_back(Element(numbers[i],i+1));
        sort(elements.begin(), elements.end(), compare);
        vector<int> index;
        for (int i=0, j=elements.size()-1; i<j; )
        {
            int sum2 = elements[i].value+elements[j].value;
            if (sum2 == target)
            {
                index.push_back(min(elements[i].index, elements[j].index));
                index.push_back(max(elements[i].index, elements[j].index));
                break;
            }
            else if (sum2 < target)
                i++;
            else
                j--;
        }
        return index;
    }
};
