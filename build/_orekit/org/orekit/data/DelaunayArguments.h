#ifndef org_orekit_data_DelaunayArguments_H
#define org_orekit_data_DelaunayArguments_H

#include "java/lang/Object.h"

namespace java {
  namespace io {
    class Serializable;
  }
  namespace lang {
    class Class;
  }
}
namespace org {
  namespace orekit {
    namespace time {
      class AbsoluteDate;
      class TimeStamped;
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace data {

      class DelaunayArguments : public ::java::lang::Object {
       public:
        enum {
          mid_init$_33f31e67f32dc013,
          mid_getD_9981f74b2d109da6,
          mid_getDDot_9981f74b2d109da6,
          mid_getDate_80e11148db499dda,
          mid_getF_9981f74b2d109da6,
          mid_getFDot_9981f74b2d109da6,
          mid_getGamma_9981f74b2d109da6,
          mid_getGammaDot_9981f74b2d109da6,
          mid_getL_9981f74b2d109da6,
          mid_getLDot_9981f74b2d109da6,
          mid_getLPrime_9981f74b2d109da6,
          mid_getLPrimeDot_9981f74b2d109da6,
          mid_getOmega_9981f74b2d109da6,
          mid_getOmegaDot_9981f74b2d109da6,
          mid_getTC_9981f74b2d109da6,
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
