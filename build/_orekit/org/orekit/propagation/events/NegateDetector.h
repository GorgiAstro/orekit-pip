#ifndef org_orekit_propagation_events_NegateDetector_H
#define org_orekit_propagation_events_NegateDetector_H

#include "org/orekit/propagation/events/AbstractDetector.h"

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
namespace java {
  namespace lang {
    class Class;
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
            mid_init$_efb7003d866d4523,
            mid_g_432f3d328c15ec82,
            mid_getOriginal_d73bb985ffde4156,
            mid_init_826b4eda94da4e78,
            mid_create_aa01ca731fd42f9b,
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
