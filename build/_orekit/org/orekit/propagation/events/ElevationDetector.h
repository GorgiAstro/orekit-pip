#ifndef org_orekit_propagation_events_ElevationDetector_H
#define org_orekit_propagation_events_ElevationDetector_H

#include "org/orekit/propagation/events/AbstractDetector.h"

namespace org {
  namespace orekit {
    namespace frames {
      class TopocentricFrame;
    }
    namespace propagation {
      namespace events {
        class ElevationDetector;
      }
      class SpacecraftState;
    }
    namespace models {
      class AtmosphericRefractionModel;
    }
    namespace utils {
      class ElevationMask;
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

        class ElevationDetector : public ::org::orekit::propagation::events::AbstractDetector {
         public:
          enum {
            mid_init$_359d9aed85301acb,
            mid_init$_0f402cc32c5bccb2,
            mid_g_432f3d328c15ec82,
            mid_getElevationMask_a2b53d9e5ddb8a2d,
            mid_getMinElevation_dff5885c2c873297,
            mid_getRefractionModel_d9410499a2583f14,
            mid_getTopocentricFrame_e17d4157ae504252,
            mid_withConstantElevation_3700314417fec14a,
            mid_withElevationMask_89c90a0821fff37b,
            mid_withRefraction_319adb60d2239e8e,
            mid_create_66b2a57911e02ec9,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit ElevationDetector(jobject obj) : ::org::orekit::propagation::events::AbstractDetector(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          ElevationDetector(const ElevationDetector& obj) : ::org::orekit::propagation::events::AbstractDetector(obj) {}

          ElevationDetector(const ::org::orekit::frames::TopocentricFrame &);
          ElevationDetector(jdouble, jdouble, const ::org::orekit::frames::TopocentricFrame &);

          jdouble g(const ::org::orekit::propagation::SpacecraftState &) const;
          ::org::orekit::utils::ElevationMask getElevationMask() const;
          jdouble getMinElevation() const;
          ::org::orekit::models::AtmosphericRefractionModel getRefractionModel() const;
          ::org::orekit::frames::TopocentricFrame getTopocentricFrame() const;
          ElevationDetector withConstantElevation(jdouble) const;
          ElevationDetector withElevationMask(const ::org::orekit::utils::ElevationMask &) const;
          ElevationDetector withRefraction(const ::org::orekit::models::AtmosphericRefractionModel &) const;
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
        extern PyType_Def PY_TYPE_DEF(ElevationDetector);
        extern PyTypeObject *PY_TYPE(ElevationDetector);

        class t_ElevationDetector {
        public:
          PyObject_HEAD
          ElevationDetector object;
          PyTypeObject *parameters[1];
          static PyTypeObject **parameters_(t_ElevationDetector *self)
          {
            return (PyTypeObject **) &(self->parameters);
          }
          static PyObject *wrap_Object(const ElevationDetector&);
          static PyObject *wrap_jobject(const jobject&);
          static PyObject *wrap_Object(const ElevationDetector&, PyTypeObject *);
          static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
