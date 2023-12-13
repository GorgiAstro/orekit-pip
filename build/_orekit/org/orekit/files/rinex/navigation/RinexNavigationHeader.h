#ifndef org_orekit_files_rinex_navigation_RinexNavigationHeader_H
#define org_orekit_files_rinex_navigation_RinexNavigationHeader_H

#include "org/orekit/files/rinex/section/RinexBaseHeader.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace rinex {
        namespace navigation {
          class IonosphericCorrectionType;
          class TimeSystemCorrection;
        }
      }
    }
  }
}
namespace java {
  namespace util {
    class List;
  }
  namespace lang {
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace files {
      namespace rinex {
        namespace navigation {

          class RinexNavigationHeader : public ::org::orekit::files::rinex::section::RinexBaseHeader {
           public:
            enum {
              mid_init$_a1fa5dae97ea5ed2,
              mid_addTimeSystemCorrections_29ed96c27f0f2439,
              mid_getIonosphericCorrectionType_1b135730fc8e8e35,
              mid_getMergedFiles_55546ef6a647f39b,
              mid_getNumberOfLeapSeconds_55546ef6a647f39b,
              mid_getTimeSystemCorrections_e62d3bb06d56d7e3,
              mid_setIonosphericCorrectionType_6012e3da3fe0033b,
              mid_setMergedFiles_44ed599e93e8a30c,
              mid_setNumberOfLeapSeconds_44ed599e93e8a30c,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit RinexNavigationHeader(jobject obj) : ::org::orekit::files::rinex::section::RinexBaseHeader(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            RinexNavigationHeader(const RinexNavigationHeader& obj) : ::org::orekit::files::rinex::section::RinexBaseHeader(obj) {}

            RinexNavigationHeader();

            void addTimeSystemCorrections(const ::org::orekit::files::rinex::navigation::TimeSystemCorrection &) const;
            ::org::orekit::files::rinex::navigation::IonosphericCorrectionType getIonosphericCorrectionType() const;
            jint getMergedFiles() const;
            jint getNumberOfLeapSeconds() const;
            ::java::util::List getTimeSystemCorrections() const;
            void setIonosphericCorrectionType(const ::org::orekit::files::rinex::navigation::IonosphericCorrectionType &) const;
            void setMergedFiles(jint) const;
            void setNumberOfLeapSeconds(jint) const;
          };
        }
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace files {
      namespace rinex {
        namespace navigation {
          extern PyType_Def PY_TYPE_DEF(RinexNavigationHeader);
          extern PyTypeObject *PY_TYPE(RinexNavigationHeader);

          class t_RinexNavigationHeader {
          public:
            PyObject_HEAD
            RinexNavigationHeader object;
            static PyObject *wrap_Object(const RinexNavigationHeader&);
            static PyObject *wrap_jobject(const jobject&);
            static void install(PyObject *module);
            static void initialize(PyObject *module);
          };
        }
      }
    }
  }
}

#endif
