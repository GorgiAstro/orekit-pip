#ifndef org_orekit_propagation_events_ElevationDetector_H
#define org_orekit_propagation_events_ElevationDetector_H

#include "org/orekit/propagation/events/AbstractDetector.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace events {
        class ElevationDetector;
      }
      class SpacecraftState;
    }
    namespace frames {
      class TopocentricFrame;
    }
    namespace utils {
      class ElevationMask;
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
            mid_init$_f9eb40be2920d1a6,
            mid_init$_b7c2f9e5ae29d132,
            mid_g_66a2f071e6ed0c06,
            mid_getElevationMask_5d6f826de9792bc8,
            mid_getMinElevation_456d9a2f64d6b28d,
            mid_getRefractionModel_92dfb2e76d975897,
            mid_getTopocentricFrame_52fc31c455206160,
            mid_withConstantElevation_baeecf6061525086,
            mid_withElevationMask_78eba44b1cd20eb1,
            mid_withRefraction_422b0661514e96e6,
            mid_create_47415e8062f7f200,
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
