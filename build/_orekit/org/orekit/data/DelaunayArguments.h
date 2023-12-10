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
          mid_init$_9ac7694849fc1cb8,
          mid_getD_dff5885c2c873297,
          mid_getDDot_dff5885c2c873297,
          mid_getDate_85703d13e302437e,
          mid_getF_dff5885c2c873297,
          mid_getFDot_dff5885c2c873297,
          mid_getGamma_dff5885c2c873297,
          mid_getGammaDot_dff5885c2c873297,
          mid_getL_dff5885c2c873297,
          mid_getLDot_dff5885c2c873297,
          mid_getLPrime_dff5885c2c873297,
          mid_getLPrimeDot_dff5885c2c873297,
          mid_getOmega_dff5885c2c873297,
          mid_getOmegaDot_dff5885c2c873297,
          mid_getTC_dff5885c2c873297,
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
