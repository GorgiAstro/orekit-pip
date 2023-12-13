#ifndef org_orekit_propagation_semianalytical_dsst_utilities_AuxiliaryElements_H
#define org_orekit_propagation_semianalytical_dsst_utilities_AuxiliaryElements_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace geometry {
      namespace euclidean {
        namespace threed {
          class Vector3D;
        }
      }
    }
  }
  namespace orekit {
    namespace orbits {
      class Orbit;
    }
    namespace frames {
      class Frame;
    }
    namespace time {
      class AbsoluteDate;
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

            class AuxiliaryElements : public ::java::lang::Object {
             public:
              enum {
                mid_init$_5580c8af98851969,
                mid_getAlpha_b74f83833fdad017,
                mid_getB_b74f83833fdad017,
                mid_getBeta_b74f83833fdad017,
                mid_getC_b74f83833fdad017,
                mid_getDate_c325492395d89b24,
                mid_getEcc_b74f83833fdad017,
                mid_getFrame_2c51111cc6894ba1,
                mid_getGamma_b74f83833fdad017,
                mid_getH_b74f83833fdad017,
                mid_getK_b74f83833fdad017,
                mid_getKeplerianPeriod_b74f83833fdad017,
                mid_getLM_b74f83833fdad017,
                mid_getLf_b74f83833fdad017,
                mid_getLv_b74f83833fdad017,
                mid_getMeanMotion_b74f83833fdad017,
                mid_getOrbit_b6e68c5f730fb347,
                mid_getP_b74f83833fdad017,
                mid_getQ_b74f83833fdad017,
                mid_getRetrogradeFactor_55546ef6a647f39b,
                mid_getSma_b74f83833fdad017,
                mid_getVectorF_8b724f8b4fdad1a2,
                mid_getVectorG_8b724f8b4fdad1a2,
                mid_getVectorW_8b724f8b4fdad1a2,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit AuxiliaryElements(jobject obj) : ::java::lang::Object(obj) {
                if (obj != NULL && mids$ == NULL)
                  env->getClass(initializeClass);
              }
              AuxiliaryElements(const AuxiliaryElements& obj) : ::java::lang::Object(obj) {}

              AuxiliaryElements(const ::org::orekit::orbits::Orbit &, jint);

              jdouble getAlpha() const;
              jdouble getB() const;
              jdouble getBeta() const;
              jdouble getC() const;
              ::org::orekit::time::AbsoluteDate getDate() const;
              jdouble getEcc() const;
              ::org::orekit::frames::Frame getFrame() const;
              jdouble getGamma() const;
              jdouble getH() const;
              jdouble getK() const;
              jdouble getKeplerianPeriod() const;
              jdouble getLM() const;
              jdouble getLf() const;
              jdouble getLv() const;
              jdouble getMeanMotion() const;
              ::org::orekit::orbits::Orbit getOrbit() const;
              jdouble getP() const;
              jdouble getQ() const;
              jint getRetrogradeFactor() const;
              jdouble getSma() const;
              ::org::hipparchus::geometry::euclidean::threed::Vector3D getVectorF() const;
              ::org::hipparchus::geometry::euclidean::threed::Vector3D getVectorG() const;
              ::org::hipparchus::geometry::euclidean::threed::Vector3D getVectorW() const;
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
            extern PyType_Def PY_TYPE_DEF(AuxiliaryElements);
            extern PyTypeObject *PY_TYPE(AuxiliaryElements);

            class t_AuxiliaryElements {
            public:
              PyObject_HEAD
              AuxiliaryElements object;
              static PyObject *wrap_Object(const AuxiliaryElements&);
              static PyObject *wrap_jobject(const jobject&);
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
