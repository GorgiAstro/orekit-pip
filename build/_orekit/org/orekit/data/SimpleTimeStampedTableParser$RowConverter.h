#ifndef org_orekit_data_SimpleTimeStampedTableParser$RowConverter_H
#define org_orekit_data_SimpleTimeStampedTableParser$RowConverter_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class Class;
  }
}
namespace org {
  namespace orekit {
    namespace time {
      class TimeStamped;
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace data {

      class SimpleTimeStampedTableParser$RowConverter : public ::java::lang::Object {
       public:
        enum {
          mid_convert_a343645103cbfbac,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit SimpleTimeStampedTableParser$RowConverter(jobject obj) : ::java::lang::Object(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        SimpleTimeStampedTableParser$RowConverter(const SimpleTimeStampedTableParser$RowConverter& obj) : ::java::lang::Object(obj) {}

        ::org::orekit::time::TimeStamped convert(const JArray< jdouble > &) const;
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace data {
      extern PyType_Def PY_TYPE_DEF(SimpleTimeStampedTableParser$RowConverter);
      extern PyTypeObject *PY_TYPE(SimpleTimeStampedTableParser$RowConverter);

      class t_SimpleTimeStampedTableParser$RowConverter {
      public:
        PyObject_HEAD
        SimpleTimeStampedTableParser$RowConverter object;
        PyTypeObject *parameters[1];
        static PyTypeObject **parameters_(t_SimpleTimeStampedTableParser$RowConverter *self)
        {
          return (PyTypeObject **) &(self->parameters);
        }
        static PyObject *wrap_Object(const SimpleTimeStampedTableParser$RowConverter&);
        static PyObject *wrap_jobject(const jobject&);
        static PyObject *wrap_Object(const SimpleTimeStampedTableParser$RowConverter&, PyTypeObject *);
        static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
