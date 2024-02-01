#ifndef org_orekit_propagation_events_ElevationDetector_H
#define org_orekit_propagation_events_ElevationDetector_H

#include "org/orekit/propagation/events/AbstractDetector.h"

namespace org {
  namespace orekit {
    namespace models {
      class AtmosphericRefractionModel;
    }
    namespace utils {
      class ElevationMask;
    }
    namespace frames {
      class TopocentricFrame;
    }
    namespace propagation {
      namespace events {
        class ElevationDetector;
      }
      class SpacecraftState;
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
            mid_init$_2c9031d766545c51,
            mid_init$_aac1d9a67653fe60,
            mid_g_b443ba1cc794b916,
            mid_getElevationMask_6e01f84e52d7314a,
            mid_getMinElevation_9981f74b2d109da6,
            mid_getRefractionModel_426fe98fa4f4b893,
            mid_getTopocentricFrame_d0e5c3c9d5578806,
            mid_withConstantElevation_e262ce557a988cfd,
            mid_withElevationMask_273b44f02a77e4f8,
            mid_withRefraction_17c201afabf9e24a,
            mid_create_32f771b3ec62c778,
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
