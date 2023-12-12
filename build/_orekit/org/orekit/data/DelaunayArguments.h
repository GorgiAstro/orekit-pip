#ifndef org_orekit_data_DelaunayArguments_H
#define org_orekit_data_DelaunayArguments_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace time {
      class AbsoluteDate;
      class TimeStamped;
    }
  }
}
namespace java {
  namespace lang {
    class Class;
  }
  namespace io {
    class Serializable;
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace data {

      class DelaunayArguments : public ::java::lang::Object {
       public:
        enum {
          mid_init$_93cd117b5bd418cf,
          mid_getD_557b8123390d8d0c,
          mid_getDDot_557b8123390d8d0c,
          mid_getDate_7a97f7e149e79afb,
          mid_getF_557b8123390d8d0c,
          mid_getFDot_557b8123390d8d0c,
          mid_getGamma_557b8123390d8d0c,
          mid_getGammaDot_557b8123390d8d0c,
          mid_getL_557b8123390d8d0c,
          mid_getLDot_557b8123390d8d0c,
          mid_getLPrime_557b8123390d8d0c,
          mid_getLPrimeDot_557b8123390d8d0c,
          mid_getOmega_557b8123390d8d0c,
          mid_getOmegaDot_557b8123390d8d0c,
          mid_getTC_557b8123390d8d0c,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit DelaunayArguments(jobject obj) : ::java::lang::Object(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        DelaunayArguments(const DelaunayArguments& obj) : ::java::lang::Object(obj) {}

        DelaunayArguments(const ::org::orekit::time::AbsoluteDate &, jdouble, jdouble, jdouble, jdouble, jdouble, jdouble, jdouble, jdouble, jdouble, jdouble, jdouble, jdouble, jdouble);

        jdouble getD() const;
        jdouble getDDot() const;
        ::org::orekit::time::AbsoluteDate getDate() const;
        jdouble getF() const;
        jdouble getFDot() const;
        jdouble getGamma() const;
        jdouble getGammaDot() const;
        jdouble getL() const;
        jdouble getLDot() const;
        jdouble getLPrime() const;
        jdouble getLPrimeDot() const;
        jdouble getOmega() const;
        jdouble getOmegaDot() const;
        jdouble getTC() const;
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace data {
      extern PyType_Def PY_TYPE_DEF(DelaunayArguments);
      extern PyTypeObject *PY_TYPE(DelaunayArguments);

      class t_DelaunayArguments {
      public:
        PyObject_HEAD
        DelaunayArguments object;
        static PyObject *wrap_Object(const DelaunayArguments&);
        static PyObject *wrap_jobject(const jobject&);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
