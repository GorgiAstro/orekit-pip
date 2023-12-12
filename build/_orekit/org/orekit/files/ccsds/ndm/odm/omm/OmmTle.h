#ifndef org_orekit_files_ccsds_ndm_odm_omm_OmmTle_H
#define org_orekit_files_ccsds_ndm_odm_omm_OmmTle_H

#include "org/orekit/files/ccsds/section/CommentsContainer.h"

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
            namespace omm {

              class OmmTle : public ::org::orekit::files::ccsds::section::CommentsContainer {
               public:
                enum {
                  mid_init$_0640e6acf969ed28,
                  mid_getAGoM_557b8123390d8d0c,
                  mid_getBStar_557b8123390d8d0c,
                  mid_getBTerm_557b8123390d8d0c,
                  mid_getClassificationType_d156d1ce330f6993,
                  mid_getElementSetNumber_412668abc8d889e9,
                  mid_getEphemerisType_412668abc8d889e9,
                  mid_getMeanMotionDot_557b8123390d8d0c,
                  mid_getMeanMotionDotDot_557b8123390d8d0c,
                  mid_getNoradID_412668abc8d889e9,
                  mid_getRevAtEpoch_412668abc8d889e9,
                  mid_setAGoM_10f281d777284cea,
                  mid_setBStar_10f281d777284cea,
                  mid_setBTerm_10f281d777284cea,
                  mid_setClassificationType_102587d250c3217b,
                  mid_setElementSetNo_a3da1a935cb37f7b,
                  mid_setEphemerisType_a3da1a935cb37f7b,
                  mid_setMeanMotionDot_10f281d777284cea,
                  mid_setMeanMotionDotDot_10f281d777284cea,
                  mid_setNoradID_a3da1a935cb37f7b,
                  mid_setRevAtEpoch_a3da1a935cb37f7b,
                  mid_validate_10f281d777284cea,
                  max_mid
                };

                static ::java::lang::Class *class$;
                static jmethodID *mids$;
                static bool live$;
                static jclass initializeClass(bool);

                explicit OmmTle(jobject obj) : ::org::orekit::files::ccsds::section::CommentsContainer(obj) {
                  if (obj != NULL && mids$ == NULL)
                    env->getClass(initializeClass);
                }
                OmmTle(const OmmTle& obj) : ::org::orekit::files::ccsds::section::CommentsContainer(obj) {}

                static jint EPHEMERIS_TYPE_PPT3;
                static jint EPHEMERIS_TYPE_SGP;
                static jint EPHEMERIS_TYPE_SGP4;
                static jint EPHEMERIS_TYPE_SGP4_XP;
                static jint EPHEMERIS_TYPE_SPECIAL_PERTURBATIONS;

                OmmTle();

                jdouble getAGoM() const;
                jdouble getBStar() const;
                jdouble getBTerm() const;
                jchar getClassificationType() const;
                jint getElementSetNumber() const;
                jint getEphemerisType() const;
                jdouble getMeanMotionDot() const;
                jdouble getMeanMotionDotDot() const;
                jint getNoradID() const;
                jint getRevAtEpoch() const;
                void setAGoM(jdouble) const;
                void setBStar(jdouble) const;
                void setBTerm(jdouble) const;
                void setClassificationType(jchar) const;
                void setElementSetNo(jint) const;
                void setEphemerisType(jint) const;
                void setMeanMotionDot(jdouble) const;
                void setMeanMotionDotDot(jdouble) const;
                void setNoradID(jint) const;
                void setRevAtEpoch(jint) const;
                void validate(jdouble) const;
              };
            }
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
            namespace omm {
              extern PyType_Def PY_TYPE_DEF(OmmTle);
              extern PyTypeObject *PY_TYPE(OmmTle);

              class t_OmmTle {
              public:
                PyObject_HEAD
                OmmTle object;
                static PyObject *wrap_Object(const OmmTle&);
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
}

#endif
