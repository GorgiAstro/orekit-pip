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
          mid_init$_9feca7a39f4fa032,
          mid_getD_b74f83833fdad017,
          mid_getDDot_b74f83833fdad017,
          mid_getDate_c325492395d89b24,
          mid_getF_b74f83833fdad017,
          mid_getFDot_b74f83833fdad017,
          mid_getGamma_b74f83833fdad017,
          mid_getGammaDot_b74f83833fdad017,
          mid_getL_b74f83833fdad017,
          mid_getLDot_b74f83833fdad017,
          mid_getLPrime_b74f83833fdad017,
          mid_getLPrimeDot_b74f83833fdad017,
          mid_getOmega_b74f83833fdad017,
          mid_getOmegaDot_b74f83833fdad017,
          mid_getTC_b74f83833fdad017,
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
