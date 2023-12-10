#ifndef org_orekit_propagation_semianalytical_dsst_utilities_FieldAuxiliaryElements_H
#define org_orekit_propagation_semianalytical_dsst_utilities_FieldAuxiliaryElements_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    class CalculusFieldElement;
    namespace geometry {
      namespace euclidean {
        namespace threed {
          class FieldVector3D;
        }
      }
    }
  }
  namespace orekit {
    namespace frames {
      class Frame;
    }
    namespace time {
      class FieldAbsoluteDate;
    }
    namespace orbits {
      class FieldOrbit;
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
                mid_init$_46c34a14776a1e1e,
                mid_getAlpha_eba8e72a22c984ac,
                mid_getB_eba8e72a22c984ac,
                mid_getBeta_eba8e72a22c984ac,
                mid_getC_eba8e72a22c984ac,
                mid_getDate_51da00d5b8a3b5df,
                mid_getEcc_eba8e72a22c984ac,
                mid_getFrame_b86f9f61d97a7244,
                mid_getGamma_eba8e72a22c984ac,
                mid_getH_eba8e72a22c984ac,
                mid_getK_eba8e72a22c984ac,
                mid_getKeplerianPeriod_eba8e72a22c984ac,
                mid_getLM_eba8e72a22c984ac,
                mid_getLe_eba8e72a22c984ac,
                mid_getLv_eba8e72a22c984ac,
                mid_getMeanMotion_eba8e72a22c984ac,
                mid_getOrbit_71338e41eb93eedd,
                mid_getP_eba8e72a22c984ac,
                mid_getQ_eba8e72a22c984ac,
                mid_getRetrogradeFactor_570ce0828f81a2c1,
                mid_getSma_eba8e72a22c984ac,
                mid_getVectorF_716f50c86ffc8da7,
                mid_getVectorG_716f50c86ffc8da7,
                mid_getVectorW_716f50c86ffc8da7,
                mid_toAuxiliaryElements_3e39de583cb99320,
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
