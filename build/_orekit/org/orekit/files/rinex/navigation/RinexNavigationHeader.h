#ifndef org_orekit_files_rinex_navigation_RinexNavigationHeader_H
#define org_orekit_files_rinex_navigation_RinexNavigationHeader_H

#include "org/orekit/files/rinex/section/RinexBaseHeader.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace rinex {
        namespace navigation {
          class TimeSystemCorrection;
          class IonosphericCorrectionType;
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
              mid_init$_ff7cb6c242604316,
              mid_addTimeSystemCorrections_678e8b1af536568c,
              mid_getIonosphericCorrectionType_cc9732312393a3cc,
              mid_getMergedFiles_d6ab429752e7c267,
              mid_getNumberOfLeapSeconds_d6ab429752e7c267,
              mid_getTimeSystemCorrections_d751c1a57012b438,
              mid_setIonosphericCorrectionType_7454a45741606645,
              mid_setMergedFiles_8fd427ab23829bf5,
              mid_setNumberOfLeapSeconds_8fd427ab23829bf5,
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
