#ifndef org_orekit_propagation_events_NegateDetector_H
#define org_orekit_propagation_events_NegateDetector_H

#include "org/orekit/propagation/events/AbstractDetector.h"

namespace java {
  namespace lang {
    class Class;
  }
}
namespace org {
  namespace orekit {
    namespace propagation {
      namespace events {
        class EventDetector;
        class NegateDetector;
      }
      class SpacecraftState;
    }
    namespace time {
      class AbsoluteDate;
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace propagation {
      namespace events {

        class NegateDetector : public ::org::orekit::propagation::events::AbstractDetector {
         public:
          enum {
            mid_init$_8ef30a2ad40caceb,
            mid_g_66a2f071e6ed0c06,
            mid_getOriginal_27b528e7858202ed,
            mid_init_3d13474d79f5e7bc,
            mid_create_74218385cc515fe3,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit NegateDetector(jobject obj) : ::org::orekit::propagation::events::AbstractDetector(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          NegateDetector(const NegateDetector& obj) : ::org::orekit::propagation::events::AbstractDetector(obj) {}

          NegateDetector(const ::org::orekit::propagation::events::EventDetector &);

          jdouble g(const ::org::orekit::propagation::SpacecraftState &) const;
          ::org::orekit::propagation::events::EventDetector getOriginal() const;
          void init(const ::org::orekit::propagation::SpacecraftState &, const ::org::orekit::time::AbsoluteDate &) const;
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace propagation {
      namespace events {
        extern PyType_Def PY_TYPE_DEF(NegateDetector);
        extern PyTypeObject *PY_TYPE(NegateDetector);

        class t_NegateDetector {
        public:
          PyObject_HEAD
          NegateDetector object;
          PyTypeObject *parameters[1];
          static PyTypeObject **parameters_(t_NegateDetector *self)
          {
            return (PyTypeObject **) &(self->parameters);
          }
          static PyObject *wrap_Object(const NegateDetector&);
          static PyObject *wrap_jobject(const jobject&);
          static PyObject *wrap_Object(const NegateDetector&, PyTypeObject *);
          static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
