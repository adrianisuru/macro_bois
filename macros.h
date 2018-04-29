#ifndef MACROS_H_
#define MACROS_H_

#define GETTER(type, field, fieldname)         \
    const type& fieldname() const {            \
        return field;                          \
    }                                          \



#define SETTER(type, field, fieldname)          \
    void fieldname(type fieldname) {            \
        this->field = fieldname;                \
    }                                           \






#define RULE_OF_THREE(type, copy, clear)            \
    type(const type& other) {                       \
        copy(other);                                \
    }                                               \
                                                    \
    ~type() {                                       \
        clear();                                    \
    }                                               \
                                                    \
    type& operator=(const type& other) {            \
        clear();                                    \
        copy(other);                                \
        return *this;                               \
    }                                               \


#endif
