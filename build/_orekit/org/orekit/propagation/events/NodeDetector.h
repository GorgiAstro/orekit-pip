#ifndef org_orekit_propagation_events_NodeDetector_H
#define org_orekit_propagation_events_NodeDetector_H

#include "org/orekit/propagation/events/AbstractDetector.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace events {
        class NodeDetector;
      }
      class SpacecraftState;
    }
    namespace frames {
      class Frame;
    }
    namespace orbits {
      class Orbit;
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

        class NodeDetector : public ::org::orekit::propagation::events::AbstractDetector {
         public:
          enum {
            mid_init$_535d1f91a93c8b4d,
            mid_init$_1e7bd0ad52fbd83d,
            mid_init$_34e9e7d7cb5fe7ac,
            mid_g_1bbf81d80c47ecdd,
            mid_getFrame_6c9bc0a928c56d4e,
            mid_create_d9545ab0373921cb,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit NodeDetector(jobject obj) : ::org::orekit::propagation::events::AbstractDetector(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          NodeDetector(const NodeDetector& obj) : ::org::orekit::propagation::events::AbstractDetector(obj) {}

          NodeDetector(const ::org::orekit::frames::Frame &);
          NodeDetector(const ::org::orekit::orbits::Orbit &, const ::org::orekit::frames::Frame &);
          NodeDetector(jdouble, const ::org::orekit::orbits::Orbit &, const ::org::orekit::frames::Frame &);

          jdouble g(const ::org::orekit::propagation::SpacecraftState &) const;
          ::org::orekit::frames::Frame getFrame() const;
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
        extern PyType_Def PY_TYPE_DEF(NodeDetector);
        extern PyTypeObject *PY_TYPE(NodeDetector);

        class t_NodeDetector {
        public:
          PyObject_HEAD
          NodeDetector object;
          PyTypeObject *parameters[1];
          static PyTypeObject **parameters_(t_NodeDetector *self)
          {
            return (PyTypeObject **) &(self->parameters);
          }
          static PyObject *wrap_Object(const NodeDetector&);
          static PyObject *wrap_jobject(const jobject&);
          static PyObject *wrap_Object(const NodeDetector&, PyTypeObject *);
          static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
