#ifndef org_orekit_data_PolynomialParser$Unit_H
#define org_orekit_data_PolynomialParser$Unit_H

#include "java/lang/Enum.h"

namespace java {
  namespace lang {
    class String;
    class Class;
  }
}
namespace org {
  namespace orekit {
    namespace data {
      class PolynomialParser$Unit;
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace data {

      class PolynomialParser$Unit : public ::java::lang::Enum {
       public:
        enum {
          mid_toSI_7e960cd6eee376d8,
          mid_valueOf_73c8890fd976f211,
          mid_values_72b4fa0a744ad31d,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit PolynomialParser$Unit(jobject obj) : ::java::lang::Enum(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        PolynomialParser$Unit(const PolynomialParser$Unit& obj) : ::java::lang::Enum(obj) {}

        static PolynomialParser$Unit *ARC_SECONDS;
        static PolynomialParser$Unit *DEGREES;
        static PolynomialParser$Unit *MICRO_ARC_SECONDS;
        static PolynomialParser$Unit *MILLI_ARC_SECONDS;
        static PolynomialParser$Unit *NO_UNITS;
        static PolynomialParser$Unit *RADIANS;

        jdouble toSI(jdouble) const;
        static PolynomialParser$Unit valueOf(const ::java::lang::String &);
        static JArray< PolynomialParser$Unit > values();
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace data {
      extern PyType_Def PY_TYPE_DEF(PolynomialParser$Unit);
      extern PyTypeObject *PY_TYPE(PolynomialParser$Unit);

      class t_PolynomialParser$Unit {
      public:
        PyObject_HEAD
        PolynomialParser$Unit object;
        PyTypeObject *parameters[1];
        static PyTypeObject **parameters_(t_PolynomialParser$Unit *self)
        {
          return (PyTypeObject **) &(self->parameters);
        }
        static PyObject *wrap_Object(const PolynomialParser$Unit&);
        static PyObject *wrap_jobject(const jobject&);
        static PyObject *wrap_Object(const PolynomialParser$Unit&, PyTypeObject *);
        static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
