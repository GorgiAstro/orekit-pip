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
                mid_init$_628d419054c752d8,
                mid_getAlpha_08d37e3f77b7239d,
                mid_getB_08d37e3f77b7239d,
                mid_getBeta_08d37e3f77b7239d,
                mid_getC_08d37e3f77b7239d,
                mid_getDate_1fea28374011eef5,
                mid_getEcc_08d37e3f77b7239d,
                mid_getFrame_cb151471db4570f0,
                mid_getGamma_08d37e3f77b7239d,
                mid_getH_08d37e3f77b7239d,
                mid_getK_08d37e3f77b7239d,
                mid_getKeplerianPeriod_08d37e3f77b7239d,
                mid_getLM_08d37e3f77b7239d,
                mid_getLe_08d37e3f77b7239d,
                mid_getLv_08d37e3f77b7239d,
                mid_getMeanMotion_08d37e3f77b7239d,
                mid_getOrbit_5b5bea4bdba413a2,
                mid_getP_08d37e3f77b7239d,
                mid_getQ_08d37e3f77b7239d,
                mid_getRetrogradeFactor_d6ab429752e7c267,
                mid_getSma_08d37e3f77b7239d,
                mid_getVectorF_d1b42a6748e907f9,
                mid_getVectorG_d1b42a6748e907f9,
                mid_getVectorW_d1b42a6748e907f9,
                mid_toAuxiliaryElements_cb6ec8282f1342d0,
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
