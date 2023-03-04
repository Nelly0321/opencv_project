#pragma once

#include "opencv2/opencv.hpp"

enum Filter_type{
no_filter = 0,
first_filter,
second_filter,
third_filter
//...
};

class IFilter{
 IFilter();
 virtual ~IFilter() = 0;
 virtual void add_filter() = 0;
};


class First_filter : public IFilter{
    First_filter();
};
