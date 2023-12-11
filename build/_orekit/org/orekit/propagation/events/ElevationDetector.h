#ifndef org_orekit_propagation_events_ElevationDetector_H
#define org_orekit_propagation_events_ElevationDetector_H

#include "org/orekit/propagation/events/AbstractDetector.h"

namespace org {
  namespace orekit {
    namespace utils {
      class ElevationMask;
    }
    namespace propagation {
      class SpacecraftState;
      namespace events {
        class ElevationDetector;
      }
    }
    namespace frames {
      class TopocentricFrame;
    }
    namespace models {
      class AtmosphericRefractionModel;
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
            mid_init$_a649bdeaffd47ec2,
            mid_init$_279ef3a80970d2f4,
            mid_g_1bbf81d80c47ecdd,
            mid_getElevationMask_d8e21ec66d7f6ed7,
            mid_getMinElevation_557b8123390d8d0c,
            mid_getRefractionModel_9124ab694682a769,
            mid_getTopocentricFrame_2bb3e750d93d59cc,
            mid_withConstantElevation_e771b1ba22883482,
            mid_withElevationMask_e0937b995cfaea28,
            mid_withRefraction_758a24a34365f671,
            mid_create_8306a8590affdb05,
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
