#ifndef org_orekit_propagation_events_FieldElevationDetector_H
#define org_orekit_propagation_events_FieldElevationDetector_H

#include "org/orekit/propagation/events/FieldAbstractDetector.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace events {
        class FieldElevationDetector;
      }
      class FieldSpacecraftState;
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
  namespace hipparchus {
    class Field;
    class CalculusFieldElement;
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

        class FieldElevationDetector : public ::org::orekit::propagation::events::FieldAbstractDetector {
         public:
          enum {
            mid_init$_6ca81eaf03a89fb6,
            mid_init$_3630f374a349bed6,
            mid_g_cc79c2733879de35,
            mid_getElevationMask_5d6f826de9792bc8,
            mid_getMinElevation_456d9a2f64d6b28d,
            mid_getRefractionModel_92dfb2e76d975897,
            mid_getTopocentricFrame_52fc31c455206160,
            mid_withConstantElevation_4f3bd3b357cdeb54,
            mid_withElevationMask_576450d53fa897db,
            mid_withRefraction_bad8e6d8da75ecea,
            mid_create_b73e50e886d5c36f,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit FieldElevationDetector(jobject obj) : ::org::orekit::propagation::events::FieldAbstractDetector(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          FieldElevationDetector(const FieldElevationDetector& obj) : ::org::orekit::propagation::events::FieldAbstractDetector(obj) {}

          FieldElevationDetector(const ::org::hipparchus::Field &, const ::org::orekit::frames::TopocentricFrame &);
          FieldElevationDetector(const ::org::hipparchus::CalculusFieldElement &, const ::org::hipparchus::CalculusFieldElement &, const ::org::orekit::frames::TopocentricFrame &);

          ::org::hipparchus::CalculusFieldElement g(const ::org::orekit::propagation::FieldSpacecraftState &) const;
          ::org::orekit::utils::ElevationMask getElevationMask() const;
          jdouble getMinElevation() const;
          ::org::orekit::models::AtmosphericRefractionModel getRefractionModel() const;
          ::org::orekit::frames::TopocentricFrame getTopocentricFrame() const;
          FieldElevationDetector withConstantElevation(jdouble) const;
          FieldElevationDetector withElevationMask(const ::org::orekit::utils::ElevationMask &) const;
          FieldElevationDetector withRefraction(const ::org::orekit::models::AtmosphericRefractionModel &) const;
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
        extern PyType_Def PY_TYPE_DEF(FieldElevationDetector);
        extern PyTypeObject *PY_TYPE(FieldElevationDetector);

        class t_FieldElevationDetector {
        public:
          PyObject_HEAD
          FieldElevationDetector object;
          PyTypeObject *parameters[1];
          static PyTypeObject **parameters_(t_FieldElevationDetector *self)
          {
            return (PyTypeObject **) &(self->parameters);
          }
          static PyObject *wrap_Object(const FieldElevationDetector&);
          static PyObject *wrap_jobject(const jobject&);
          static PyObject *wrap_Object(const FieldElevationDetector&, PyTypeObject *);
          static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
