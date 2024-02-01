#ifndef org_orekit_files_ccsds_ndm_odm_KeplerianElements_H
#define org_orekit_files_ccsds_ndm_odm_KeplerianElements_H

#include "org/orekit/files/ccsds/section/CommentsContainer.h"

namespace org {
  namespace orekit {
    namespace time {
      class AbsoluteDate;
    }
    namespace files {
      namespace ccsds {
        namespace section {
          class Data;
        }
      }
    }
    namespace orbits {
      class PositionAngleType;
      class KeplerianOrbit;
    }
    namespace frames {
      class Frame;
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
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace odm {

            class KeplerianElements : public ::org::orekit::files::ccsds::section::CommentsContainer {
             public:
              enum {
                mid_init$_ff7cb6c242604316,
                mid_generateKeplerianOrbit_73126f4606780eb9,
                mid_getA_9981f74b2d109da6,
                mid_getAnomaly_9981f74b2d109da6,
                mid_getAnomalyType_a6db4e6edefda4be,
                mid_getE_9981f74b2d109da6,
                mid_getEpoch_80e11148db499dda,
                mid_getI_9981f74b2d109da6,
                mid_getMeanMotion_9981f74b2d109da6,
                mid_getMu_9981f74b2d109da6,
                mid_getPa_9981f74b2d109da6,
                mid_getRaan_9981f74b2d109da6,
                mid_setA_1ad26e8c8c0cd65b,
                mid_setAnomaly_1ad26e8c8c0cd65b,
                mid_setAnomalyType_266be23fd67cbce4,
                mid_setE_1ad26e8c8c0cd65b,
                mid_setEpoch_8497861b879c83f7,
                mid_setI_1ad26e8c8c0cd65b,
                mid_setMeanMotion_1ad26e8c8c0cd65b,
                mid_setMu_1ad26e8c8c0cd65b,
                mid_setPa_1ad26e8c8c0cd65b,
                mid_setRaan_1ad26e8c8c0cd65b,
                mid_validate_1ad26e8c8c0cd65b,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit KeplerianElements(jobject obj) : ::org::orekit::files::ccsds::section::CommentsContainer(obj) {
                if (obj != NULL && mids$ == NULL)
                  env->getClass(initializeClass);
              }
              KeplerianElements(const KeplerianElements& obj) : ::org::orekit::files::ccsds::section::CommentsContainer(obj) {}

              KeplerianElements();

              ::org::orekit::orbits::KeplerianOrbit generateKeplerianOrbit(const ::org::orekit::frames::Frame &) const;
              jdouble getA() const;
              jdouble getAnomaly() const;
              ::org::orekit::orbits::PositionAngleType getAnomalyType() const;
              jdouble getE() const;
              ::org::orekit::time::AbsoluteDate getEpoch() const;
              jdouble getI() const;
              jdouble getMeanMotion() const;
              jdouble getMu() const;
              jdouble getPa() const;
              jdouble getRaan() const;
              void setA(jdouble) const;
              void setAnomaly(jdouble) const;
              void setAnomalyType(const ::org::orekit::orbits::PositionAngleType &) const;
              void setE(jdouble) const;
              void setEpoch(const ::org::orekit::time::AbsoluteDate &) const;
              void setI(jdouble) const;
              void setMeanMotion(jdouble) const;
              void setMu(jdouble) const;
              void setPa(jdouble) const;
              void setRaan(jdouble) const;
              void validate(jdouble) const;
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
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace odm {
            extern PyType_Def PY_TYPE_DEF(KeplerianElements);
            extern PyTypeObject *PY_TYPE(KeplerianElements);

            class t_KeplerianElements {
            public:
              PyObject_HEAD
              KeplerianElements object;
              static PyObject *wrap_Object(const KeplerianElements&);
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
