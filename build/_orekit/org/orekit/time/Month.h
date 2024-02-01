#ifndef org_orekit_time_Month_H
#define org_orekit_time_Month_H

#include "java/lang/Enum.h"

namespace org {
  namespace orekit {
    namespace time {
      class Month;
    }
  }
}
namespace java {
  namespace lang {
    class String;
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace time {

      class Month : public ::java::lang::Enum {
       public:
        enum {
          mid_getCapitalizedAbbreviation_d2c8eb4129821f0e,
          mid_getCapitalizedName_d2c8eb4129821f0e,
          mid_getLowerCaseAbbreviation_d2c8eb4129821f0e,
          mid_getLowerCaseName_d2c8eb4129821f0e,
          mid_getMonth_30e61ab36d9e0db0,
          mid_getNumber_d6ab429752e7c267,
          mid_getUpperCaseAbbreviation_d2c8eb4129821f0e,
          mid_getUpperCaseName_d2c8eb4129821f0e,
          mid_parseMonth_3656902fd95cab6b,
          mid_valueOf_3656902fd95cab6b,
          mid_values_0001050b6c96babc,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit Month(jobject obj) : ::java::lang::Enum(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        Month(const Month& obj) : ::java::lang::Enum(obj) {}

        static Month *APRIL;
        static Month *AUGUST;
        static Month *DECEMBER;
        static Month *FEBRUARY;
        static Month *JANUARY;
        static Month *JULY;
        static Month *JUNE;
        static Month *MARCH;
        static Month *MAY;
        static Month *NOVEMBER;
        static Month *OCTOBER;
        static Month *SEPTEMBER;

        ::java::lang::String getCapitalizedAbbreviation() const;
        ::java::lang::String getCapitalizedName() const;
        ::java::lang::String getLowerCaseAbbreviation() const;
        ::java::lang::String getLowerCaseName() const;
        static Month getMonth(jint);
        jint getNumber() const;
        ::java::lang::String getUpperCaseAbbreviation() const;
        ::java::lang::String getUpperCaseName() const;
        static Month parseMonth(const ::java::lang::String &);
        static Month valueOf(const ::java::lang::String &);
        static JArray< Month > values();
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace time {
      extern PyType_Def PY_TYPE_DEF(Month);
      extern PyTypeObject *PY_TYPE(Month);

      class t_Month {
      public:
        PyObject_HEAD
        Month object;
        PyTypeObject *parameters[1];
        static PyTypeObject **parameters_(t_Month *self)
        {
          return (PyTypeObject **) &(self->parameters);
        }
        static PyObject *wrap_Object(const Month&);
        static PyObject *wrap_jobject(const jobject&);
        static PyObject *wrap_Object(const Month&, PyTypeObject *);
        static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
