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
  namespace hipparchus {
    namespace linear {
      class RealMatrix;
    }
  }
  namespace orekit {
    namespace propagation {
      class SpacecraftState;
    }
    namespace orbits {
      class PositionAngleType;
      class OrbitType;
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
              mid_freezeColumnsNames_7ae3461a92a43152,
              mid_getB1_7116bbecdd8ceb21,
              mid_getB2_63aee3ce1e412e46,
              mid_getB3_63aee3ce1e412e46,
              mid_getB4_7116bbecdd8ceb21,
              mid_getJacobiansColumnsNames_a6156df500549a58,
              mid_getOrbitType_63ea5cd020bf7bf1,
              mid_getParametersJacobian_63aee3ce1e412e46,
              mid_getPositionAngleType_2571e8fe1cede425,
              mid_getStateTransitionMatrix_63aee3ce1e412e46,
              mid_initializeFieldShortPeriodTerms_2b88003f931f70a7,
              mid_setReferenceState_2b88003f931f70a7,
              mid_updateFieldShortPeriodTerms_2b88003f931f70a7,
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
