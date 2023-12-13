#ifndef org_orekit_propagation_semianalytical_dsst_DSSTHarvester_H
#define org_orekit_propagation_semianalytical_dsst_DSSTHarvester_H

#include "org/orekit/propagation/AbstractMatricesHarvester.h"

namespace java {
  namespace util {
    class List;
  }
  namespace lang {
    class Class;
    class String;
  }
}
namespace org {
  namespace orekit {
    namespace orbits {
      class PositionAngleType;
      class OrbitType;
    }
    namespace propagation {
      class SpacecraftState;
    }
  }
  namespace hipparchus {
    namespace linear {
      class RealMatrix;
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace propagation {
      namespace semianalytical {
        namespace dsst {

          class DSSTHarvester : public ::org::orekit::propagation::AbstractMatricesHarvester {
           public:
            enum {
              mid_freezeColumnsNames_a1fa5dae97ea5ed2,
              mid_getB1_f77d745f2128c391,
              mid_getB2_b7aa5791b069a41f,
              mid_getB3_b7aa5791b069a41f,
              mid_getB4_f77d745f2128c391,
              mid_getJacobiansColumnsNames_e62d3bb06d56d7e3,
              mid_getOrbitType_c7d4737d7afca612,
              mid_getParametersJacobian_b7aa5791b069a41f,
              mid_getPositionAngleType_c25055891f180348,
              mid_getStateTransitionMatrix_b7aa5791b069a41f,
              mid_initializeFieldShortPeriodTerms_280c3390961e0a50,
              mid_setReferenceState_280c3390961e0a50,
              mid_updateFieldShortPeriodTerms_280c3390961e0a50,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit DSSTHarvester(jobject obj) : ::org::orekit::propagation::AbstractMatricesHarvester(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            DSSTHarvester(const DSSTHarvester& obj) : ::org::orekit::propagation::AbstractMatricesHarvester(obj) {}

            void freezeColumnsNames() const;
            ::org::hipparchus::linear::RealMatrix getB1() const;
            ::org::hipparchus::linear::RealMatrix getB2(const ::org::orekit::propagation::SpacecraftState &) const;
            ::org::hipparchus::linear::RealMatrix getB3(const ::org::orekit::propagation::SpacecraftState &) const;
            ::org::hipparchus::linear::RealMatrix getB4() const;
            ::java::util::List getJacobiansColumnsNames() const;
            ::org::orekit::orbits::OrbitType getOrbitType() const;
            ::org::hipparchus::linear::RealMatrix getParametersJacobian(const ::org::orekit::propagation::SpacecraftState &) const;
            ::org::orekit::orbits::PositionAngleType getPositionAngleType() const;
            ::org::hipparchus::linear::RealMatrix getStateTransitionMatrix(const ::org::orekit::propagation::SpacecraftState &) const;
            void initializeFieldShortPeriodTerms(const ::org::orekit::propagation::SpacecraftState &) const;
            void setReferenceState(const ::org::orekit::propagation::SpacecraftState &) const;
            void updateFieldShortPeriodTerms(const ::org::orekit::propagation::SpacecraftState &) const;
          };
        }
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace propagation {
      namespace semianalytical {
        namespace dsst {
          extern PyType_Def PY_TYPE_DEF(DSSTHarvester);
          extern PyTypeObject *PY_TYPE(DSSTHarvester);

          class t_DSSTHarvester {
          public:
            PyObject_HEAD
            DSSTHarvester object;
            static PyObject *wrap_Object(const DSSTHarvester&);
            static PyObject *wrap_jobject(const jobject&);
            static void install(PyObject *module);
            static void initialize(PyObject *module);
          };
        }
      }
    }
  }
}

#endif
