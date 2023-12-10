#ifndef org_orekit_propagation_BoundedPropagator_H
#define org_orekit_propagation_BoundedPropagator_H

#include "org/orekit/propagation/Propagator.h"

namespace java {
  namespace lang {
    class Class;
  }
}
namespace org {
  namespace orekit {
    namespace time {
      class AbsoluteDate;
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace propagation {

      class BoundedPropagator : public ::org::orekit::propagation::Propagator {
       public:
        enum {
          mid_getMaxDate_aaa854c403487cf3,
          mid_getMinDate_aaa854c403487cf3,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit BoundedPropagator(jobject obj) : ::org::orekit::propagation::Propagator(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        BoundedPropagator(const BoundedPropagator& obj) : ::org::orekit::propagation::Propagator(obj) {}

        ::org::orekit::time::AbsoluteDate getMaxDate() const;
        ::org::orekit::time::AbsoluteDate getMinDate() const;
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace propagation {
      extern PyType_Def PY_TYPE_DEF(BoundedPropagator);
      extern PyTypeObject *PY_TYPE(BoundedPropagator);

      class t_BoundedPropagator {
      public:
        PyObject_HEAD
        BoundedPropagator object;
        static PyObject *wrap_Object(const BoundedPropagator&);
        static PyObject *wrap_jobject(const jobject&);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
