#ifndef org_orekit_propagation_semianalytical_dsst_utilities_FieldAuxiliaryElements_H
#define org_orekit_propagation_semianalytical_dsst_utilities_FieldAuxiliaryElements_H

#include "java/lang/Object.h"

namespace org {
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
  namespace orekit {
    namespace propagation {
      namespace semianalytical {
        namespace dsst {
          namespace utilities {
            class AuxiliaryElements;
          }
        }
      }
    }
    namespace time {
      class FieldAbsoluteDate;
    }
    namespace frames {
      class Frame;
    }
    namespace orbits {
      class FieldOrbit;
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
      namespace semianalytical {
        namespace dsst {
          namespace utilities {

            class FieldAuxiliaryElements : public ::java::lang::Object {
             public:
              enum {
                mid_init$_252b7dc99f1400c7,
                mid_getAlpha_613c8f46c659f636,
                mid_getB_613c8f46c659f636,
                mid_getBeta_613c8f46c659f636,
                mid_getC_613c8f46c659f636,
                mid_getDate_f1fe4daf77c66560,
                mid_getEcc_613c8f46c659f636,
                mid_getFrame_6c9bc0a928c56d4e,
                mid_getGamma_613c8f46c659f636,
                mid_getH_613c8f46c659f636,
                mid_getK_613c8f46c659f636,
                mid_getKeplerianPeriod_613c8f46c659f636,
                mid_getLM_613c8f46c659f636,
                mid_getLe_613c8f46c659f636,
                mid_getLv_613c8f46c659f636,
                mid_getMeanMotion_613c8f46c659f636,
                mid_getOrbit_507d8b7ad2a799b5,
                mid_getP_613c8f46c659f636,
                mid_getQ_613c8f46c659f636,
                mid_getRetrogradeFactor_412668abc8d889e9,
                mid_getSma_613c8f46c659f636,
                mid_getVectorF_2d64addf4c3391d9,
                mid_getVectorG_2d64addf4c3391d9,
                mid_getVectorW_2d64addf4c3391d9,
                mid_toAuxiliaryElements_53e9e25baae02d2b,
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
