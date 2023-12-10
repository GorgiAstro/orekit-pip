#ifndef org_orekit_propagation_events_ElevationExtremumDetector_H
#define org_orekit_propagation_events_ElevationExtremumDetector_H

#include "org/orekit/propagation/events/AbstractDetector.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace events {
        class ElevationExtremumDetector;
      }
      class SpacecraftState;
    }
    namespace frames {
      class TopocentricFrame;
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

        class ElevationExtremumDetector : public ::org::orekit::propagation::events::AbstractDetector {
         public:
          enum {
            mid_init$_359d9aed85301acb,
            mid_init$_0f402cc32c5bccb2,
            mid_g_432f3d328c15ec82,
            mid_getElevation_432f3d328c15ec82,
            mid_getTopocentricFrame_e17d4157ae504252,
            mid_create_4d12cf9fa078dc58,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit ElevationExtremumDetector(jobject obj) : ::org::orekit::propagation::events::AbstractDetector(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          ElevationExtremumDetector(const ElevationExtremumDetector& obj) : ::org::orekit::propagation::events::AbstractDetector(obj) {}

          ElevationExtremumDetector(const ::org::orekit::frames::TopocentricFrame &);
          ElevationExtremumDetector(jdouble, jdouble, const ::org::orekit::frames::TopocentricFrame &);

          jdouble g(const ::org::orekit::propagation::SpacecraftState &) const;
          jdouble getElevation(const ::org::orekit::propagation::SpacecraftState &) const;
          ::org::orekit::frames::TopocentricFrame getTopocentricFrame() const;
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
        extern PyType_Def PY_TYPE_DEF(ElevationExtremumDetector);
        extern PyTypeObject *PY_TYPE(ElevationExtremumDetector);

        class t_ElevationExtremumDetector {
        public:
          PyObject_HEAD
          ElevationExtremumDetector object;
          PyTypeObject *parameters[1];
          static PyTypeObject **parameters_(t_ElevationExtremumDetector *self)
          {
            return (PyTypeObject **) &(self->parameters);
          }
          static PyObject *wrap_Object(const ElevationExtremumDetector&);
          static PyObject *wrap_jobject(const jobject&);
          static PyObject *wrap_Object(const ElevationExtremumDetector&, PyTypeObject *);
          static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
