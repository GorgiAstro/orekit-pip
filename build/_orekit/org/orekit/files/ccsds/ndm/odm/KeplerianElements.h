#ifndef org_orekit_files_ccsds_ndm_odm_KeplerianElements_H
#define org_orekit_files_ccsds_ndm_odm_KeplerianElements_H

#include "org/orekit/files/ccsds/section/CommentsContainer.h"

namespace org {
  namespace orekit {
    namespace orbits {
      class KeplerianOrbit;
      class PositionAngleType;
    }
    namespace frames {
      class Frame;
    }
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
                mid_init$_0640e6acf969ed28,
                mid_generateKeplerianOrbit_b054b91b0896a3aa,
                mid_getA_557b8123390d8d0c,
                mid_getAnomaly_557b8123390d8d0c,
                mid_getAnomalyType_f4984aee71df4c19,
                mid_getE_557b8123390d8d0c,
                mid_getEpoch_7a97f7e149e79afb,
                mid_getI_557b8123390d8d0c,
                mid_getMeanMotion_557b8123390d8d0c,
                mid_getMu_557b8123390d8d0c,
                mid_getPa_557b8123390d8d0c,
                mid_getRaan_557b8123390d8d0c,
                mid_setA_10f281d777284cea,
                mid_setAnomaly_10f281d777284cea,
                mid_setAnomalyType_44c283653315b1a7,
                mid_setE_10f281d777284cea,
                mid_setEpoch_20affcbd28542333,
                mid_setI_10f281d777284cea,
                mid_setMeanMotion_10f281d777284cea,
                mid_setMu_10f281d777284cea,
                mid_setPa_10f281d777284cea,
                mid_setRaan_10f281d777284cea,
                mid_validate_10f281d777284cea,
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
