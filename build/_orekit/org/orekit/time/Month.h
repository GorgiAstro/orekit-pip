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
          mid_getCapitalizedAbbreviation_1c1fa1e935d6cdcf,
          mid_getCapitalizedName_1c1fa1e935d6cdcf,
          mid_getLowerCaseAbbreviation_1c1fa1e935d6cdcf,
          mid_getLowerCaseName_1c1fa1e935d6cdcf,
          mid_getMonth_fab8240f801e307f,
          mid_getNumber_55546ef6a647f39b,
          mid_getUpperCaseAbbreviation_1c1fa1e935d6cdcf,
          mid_getUpperCaseName_1c1fa1e935d6cdcf,
          mid_parseMonth_f4316336d73d53f1,
          mid_valueOf_f4316336d73d53f1,
          mid_values_8e4a97337a848d9f,
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
