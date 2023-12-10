#ifndef org_orekit_propagation_semianalytical_dsst_utilities_FieldAuxiliaryElements_H
#define org_orekit_propagation_semianalytical_dsst_utilities_FieldAuxiliaryElements_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
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
    namespace orbits {
      class FieldOrbit;
    }
    namespace time {
      class FieldAbsoluteDate;
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
                mid_init$_9dc2a3e0d8e9fa60,
                mid_getAlpha_e6d4d3215c30992a,
                mid_getB_e6d4d3215c30992a,
                mid_getBeta_e6d4d3215c30992a,
                mid_getC_e6d4d3215c30992a,
                mid_getDate_09b0a926600dfc14,
                mid_getEcc_e6d4d3215c30992a,
                mid_getFrame_c8fe21bcdac65bf6,
                mid_getGamma_e6d4d3215c30992a,
                mid_getH_e6d4d3215c30992a,
                mid_getK_e6d4d3215c30992a,
                mid_getKeplerianPeriod_e6d4d3215c30992a,
                mid_getLM_e6d4d3215c30992a,
                mid_getLe_e6d4d3215c30992a,
                mid_getLv_e6d4d3215c30992a,
                mid_getMeanMotion_e6d4d3215c30992a,
                mid_getOrbit_2f26cad5f478f007,
                mid_getP_e6d4d3215c30992a,
                mid_getQ_e6d4d3215c30992a,
                mid_getRetrogradeFactor_f2f64475e4580546,
                mid_getSma_e6d4d3215c30992a,
                mid_getVectorF_5791f80683b5227e,
                mid_getVectorG_5791f80683b5227e,
                mid_getVectorW_5791f80683b5227e,
                mid_toAuxiliaryElements_24ab54193b574fe5,
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
