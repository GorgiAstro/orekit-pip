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
                  mid_init$_ff7cb6c242604316,
                  mid_getAGoM_9981f74b2d109da6,
                  mid_getBStar_9981f74b2d109da6,
                  mid_getBTerm_9981f74b2d109da6,
                  mid_getClassificationType_153df32fe8b51cb6,
                  mid_getElementSetNumber_d6ab429752e7c267,
                  mid_getEphemerisType_d6ab429752e7c267,
                  mid_getMeanMotionDot_9981f74b2d109da6,
                  mid_getMeanMotionDotDot_9981f74b2d109da6,
                  mid_getNoradID_d6ab429752e7c267,
                  mid_getRevAtEpoch_d6ab429752e7c267,
                  mid_setAGoM_1ad26e8c8c0cd65b,
                  mid_setBStar_1ad26e8c8c0cd65b,
                  mid_setBTerm_1ad26e8c8c0cd65b,
                  mid_setClassificationType_e8d07df586815a42,
                  mid_setElementSetNo_8fd427ab23829bf5,
                  mid_setEphemerisType_8fd427ab23829bf5,
                  mid_setMeanMotionDot_1ad26e8c8c0cd65b,
                  mid_setMeanMotionDotDot_1ad26e8c8c0cd65b,
                  mid_setNoradID_8fd427ab23829bf5,
                  mid_setRevAtEpoch_8fd427ab23829bf5,
                  mid_validate_1ad26e8c8c0cd65b,
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
