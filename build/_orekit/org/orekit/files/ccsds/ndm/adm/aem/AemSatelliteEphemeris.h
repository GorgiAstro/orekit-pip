#ifndef org_orekit_files_ccsds_ndm_adm_aem_AemSatelliteEphemeris_H
#define org_orekit_files_ccsds_ndm_adm_aem_AemSatelliteEphemeris_H

#include "java/lang/Object.h"

namespace java {
  namespace util {
    class List;
  }
  namespace lang {
    class Class;
    class String;
  }
}
namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace adm {
            namespace aem {
              class AemSegment;
            }
          }
        }
      }
      namespace general {
        class AttitudeEphemerisFile$SatelliteAttitudeEphemeris;
      }
    }
    namespace utils {
      class TimeStampedAngularCoordinates;
    }
    namespace time {
      class AbsoluteDate;
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace adm {
            namespace aem {

              class AemSatelliteEphemeris : public ::java::lang::Object {
               public:
                enum {
                  mid_init$_6ea6ec8379c9f4a5,
                  mid_getId_0090f7797e403f43,
                  mid_getSegments_a6156df500549a58,
                  mid_getStart_aaa854c403487cf3,
                  mid_getStop_aaa854c403487cf3,
                  max_mid
                };

                static ::java::lang::Class *class$;
                static jmethodID *mids$;
                static bool live$;
                static jclass initializeClass(bool);

                explicit AemSatelliteEphemeris(jobject obj) : ::java::lang::Object(obj) {
                  if (obj != NULL && mids$ == NULL)
                    env->getClass(initializeClass);
                }
                AemSatelliteEphemeris(const AemSatelliteEphemeris& obj) : ::java::lang::Object(obj) {}

                AemSatelliteEphemeris(const ::java::lang::String &, const ::java::util::List &);

                ::java::lang::String getId() const;
                ::java::util::List getSegments() const;
                ::org::orekit::time::AbsoluteDate getStart() const;
                ::org::orekit::time::AbsoluteDate getStop() const;
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
          namespace adm {
            namespace aem {
              extern PyType_Def PY_TYPE_DEF(AemSatelliteEphemeris);
              extern PyTypeObject *PY_TYPE(AemSatelliteEphemeris);

              class t_AemSatelliteEphemeris {
              public:
                PyObject_HEAD
                AemSatelliteEphemeris object;
                static PyObject *wrap_Object(const AemSatelliteEphemeris&);
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