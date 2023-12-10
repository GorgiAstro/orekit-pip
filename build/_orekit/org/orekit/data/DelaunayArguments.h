#ifndef org_orekit_data_DelaunayArguments_H
#define org_orekit_data_DelaunayArguments_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace time {
      class TimeStamped;
      class AbsoluteDate;
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
          mid_init$_bec04ff0873f7666,
          mid_getD_456d9a2f64d6b28d,
          mid_getDDot_456d9a2f64d6b28d,
          mid_getDate_aaa854c403487cf3,
          mid_getF_456d9a2f64d6b28d,
          mid_getFDot_456d9a2f64d6b28d,
          mid_getGamma_456d9a2f64d6b28d,
          mid_getGammaDot_456d9a2f64d6b28d,
          mid_getL_456d9a2f64d6b28d,
          mid_getLDot_456d9a2f64d6b28d,
          mid_getLPrime_456d9a2f64d6b28d,
          mid_getLPrimeDot_456d9a2f64d6b28d,
          mid_getOmega_456d9a2f64d6b28d,
          mid_getOmegaDot_456d9a2f64d6b28d,
          mid_getTC_456d9a2f64d6b28d,
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
