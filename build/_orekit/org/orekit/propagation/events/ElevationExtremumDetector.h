#ifndef org_orekit_propagation_events_ElevationExtremumDetector_H
#define org_orekit_propagation_events_ElevationExtremumDetector_H

#include "org/orekit/propagation/events/AbstractDetector.h"

namespace org {
  namespace orekit {
    namespace propagation {
      class SpacecraftState;
      namespace events {
        class ElevationExtremumDetector;
      }
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
            mid_init$_a649bdeaffd47ec2,
            mid_init$_279ef3a80970d2f4,
            mid_g_1bbf81d80c47ecdd,
            mid_getElevation_1bbf81d80c47ecdd,
            mid_getTopocentricFrame_2bb3e750d93d59cc,
            mid_create_8a272eda6b0256f6,
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
