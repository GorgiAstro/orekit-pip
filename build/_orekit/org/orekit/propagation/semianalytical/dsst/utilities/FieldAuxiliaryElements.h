#ifndef org_orekit_propagation_semianalytical_dsst_utilities_FieldAuxiliaryElements_H
#define org_orekit_propagation_semianalytical_dsst_utilities_FieldAuxiliaryElements_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace time {
      class FieldAbsoluteDate;
    }
    namespace orbits {
      class FieldOrbit;
    }
    namespace frames {
      class Frame;
    }
    namespace propagation {
      namespace semianalytical {
        namespace dsst {
          namespace utilities {
            class AuxiliaryElements;
          }
        }
      }
    }
  }
  namespace hipparchus {
    namespace geometry {
      namespace euclidean {
        namespace threed {
          class FieldVector3D;
        }
      }
    }
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
      namespace semianalytical {
        namespace dsst {
          namespace utilities {

            class FieldAuxiliaryElements : public ::java::lang::Object {
             public:
              enum {
                mid_init$_4a0a7fa0526c4933,
                mid_getAlpha_81520b552cb3fa26,
                mid_getB_81520b552cb3fa26,
                mid_getBeta_81520b552cb3fa26,
                mid_getC_81520b552cb3fa26,
                mid_getDate_fa23a4301b9c83e7,
                mid_getEcc_81520b552cb3fa26,
                mid_getFrame_2c51111cc6894ba1,
                mid_getGamma_81520b552cb3fa26,
                mid_getH_81520b552cb3fa26,
                mid_getK_81520b552cb3fa26,
                mid_getKeplerianPeriod_81520b552cb3fa26,
                mid_getLM_81520b552cb3fa26,
                mid_getLe_81520b552cb3fa26,
                mid_getLv_81520b552cb3fa26,
                mid_getMeanMotion_81520b552cb3fa26,
                mid_getOrbit_52c9ebac01a11008,
                mid_getP_81520b552cb3fa26,
                mid_getQ_81520b552cb3fa26,
                mid_getRetrogradeFactor_55546ef6a647f39b,
                mid_getSma_81520b552cb3fa26,
                mid_getVectorF_ff5ac73a7b43eddd,
                mid_getVectorG_ff5ac73a7b43eddd,
                mid_getVectorW_ff5ac73a7b43eddd,
                mid_toAuxiliaryElements_bb7d61c7025dded3,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit FieldAuxiliaryElements(jobject obj) : ::java::lang::Object(obj) {
                if (obj != NULL && mids$ == NULL)
                  env->getClass(initializeClass);
              }
              FieldAuxiliaryElements(const FieldAuxiliaryElements& obj) : ::java::lang::Object(obj) {}

              FieldAuxiliaryElements(const ::org::orekit::orbits::FieldOrbit &, jint);

              ::org::hipparchus::CalculusFieldElement getAlpha() const;
              ::org::hipparchus::CalculusFieldElement getB() const;
              ::org::hipparchus::CalculusFieldElement getBeta() const;
              ::org::hipparchus::CalculusFieldElement getC() const;
              ::org::orekit::time::FieldAbsoluteDate getDate() const;
              ::org::hipparchus::CalculusFieldElement getEcc() const;
              ::org::orekit::frames::Frame getFrame() const;
              ::org::hipparchus::CalculusFieldElement getGamma() const;
              ::org::hipparchus::CalculusFieldElement getH() const;
              ::org::hipparchus::CalculusFieldElement getK() const;
              ::org::hipparchus::CalculusFieldElement getKeplerianPeriod() const;
              ::org::hipparchus::CalculusFieldElement getLM() const;
              ::org::hipparchus::CalculusFieldElement getLe() const;
              ::org::hipparchus::CalculusFieldElement getLv() const;
              ::org::hipparchus::CalculusFieldElement getMeanMotion() const;
              ::org::orekit::orbits::FieldOrbit getOrbit() const;
              ::org::hipparchus::CalculusFieldElement getP() const;
              ::org::hipparchus::CalculusFieldElement getQ() const;
              jint getRetrogradeFactor() const;
              ::org::hipparchus::CalculusFieldElement getSma() const;
              ::org::hipparchus::geometry::euclidean::threed::FieldVector3D getVectorF() const;
              ::org::hipparchus::geometry::euclidean::threed::FieldVector3D getVectorG() const;
              ::org::hipparchus::geometry::euclidean::threed::FieldVector3D getVectorW() const;
              ::org::orekit::propagation::semianalytical::dsst::utilities::AuxiliaryElements toAuxiliaryElements() const;
            };
          }
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
          namespace utilities {
            extern PyType_Def PY_TYPE_DEF(FieldAuxiliaryElements);
            extern PyTypeObject *PY_TYPE(FieldAuxiliaryElements);

            class t_FieldAuxiliaryElements {
            public:
              PyObject_HEAD
              FieldAuxiliaryElements object;
              PyTypeObject *parameters[1];
              static PyTypeObject **parameters_(t_FieldAuxiliaryElements *self)
              {
                return (PyTypeObject **) &(self->parameters);
              }
              static PyObject *wrap_Object(const FieldAuxiliaryElements&);
              static PyObject *wrap_jobject(const jobject&);
              static PyObject *wrap_Object(const FieldAuxiliaryElements&, PyTypeObject *);
              static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
              static void install(PyObject *module);
              static void initialize(PyObject *module);
            };
          }
        }
      }
    }
  }
}

#endif
