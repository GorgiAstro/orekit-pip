#ifndef org_orekit_propagation_PropagatorsParallelizer_H
#define org_orekit_propagation_PropagatorsParallelizer_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace sampling {
        class MultiSatFixedStepHandler;
        class MultiSatStepHandler;
      }
      class Propagator;
      class SpacecraftState;
    }
    namespace time {
      class AbsoluteDate;
    }
  }
}
namespace java {
  namespace util {
    class List;
  }
  namespace lang {
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace propagation {

      class PropagatorsParallelizer : public ::java::lang::Object {
       public:
        enum {
          mid_init$_9720e6d1873130df,
          mid_init$_43832b78aa0998e4,
          mid_getPropagators_0d9551367f7ecdef,
          mid_propagate_c5683b8e06424542,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit PropagatorsParallelizer(jobject obj) : ::java::lang::Object(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        PropagatorsParallelizer(const PropagatorsParallelizer& obj) : ::java::lang::Object(obj) {}

        PropagatorsParallelizer(const ::java::util::List &, const ::org::orekit::propagation::sampling::MultiSatStepHandler &);
        PropagatorsParallelizer(const ::java::util::List &, jdouble, const ::org::orekit::propagation::sampling::MultiSatFixedStepHandler &);

        ::java::util::List getPropagators() const;
        ::java::util::List propagate(const ::org::orekit::time::AbsoluteDate &, const ::org::orekit::time::AbsoluteDate &) const;
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace propagation {
      extern PyType_Def PY_TYPE_DEF(PropagatorsParallelizer);
      extern PyTypeObject *PY_TYPE(PropagatorsParallelizer);

      class t_PropagatorsParallelizer {
      public:
        PyObject_HEAD
        PropagatorsParallelizer object;
        static PyObject *wrap_Object(const PropagatorsParallelizer&);
        static PyObject *wrap_jobject(const jobject&);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
