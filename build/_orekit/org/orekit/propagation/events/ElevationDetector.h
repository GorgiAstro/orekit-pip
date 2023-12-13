#ifndef org_orekit_propagation_events_ElevationDetector_H
#define org_orekit_propagation_events_ElevationDetector_H

#include "org/orekit/propagation/events/AbstractDetector.h"

namespace org {
  namespace orekit {
    namespace models {
      class AtmosphericRefractionModel;
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
            mid_init$_153388b9c226b897,
            mid_init$_806761bd3bfad55b,
            mid_g_a17ea857ce74d258,
            mid_getElevationMask_ff9e909fac3867c7,
            mid_getMinElevation_b74f83833fdad017,
            mid_getRefractionModel_27f78fdf143ae88f,
            mid_getTopocentricFrame_c2b113ddceb69262,
            mid_withConstantElevation_a33625a3473d177c,
            mid_withElevationMask_c83b5cb465ef663a,
            mid_withRefraction_d093862b04ae3ff8,
            mid_create_b36e9f7ffbbbc784,
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
