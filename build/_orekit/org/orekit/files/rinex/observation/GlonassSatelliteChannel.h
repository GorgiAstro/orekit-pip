#ifndef org_orekit_files_rinex_observation_GlonassSatelliteChannel_H
#define org_orekit_files_rinex_observation_GlonassSatelliteChannel_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace gnss {
      class SatInSystem;
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
      namespace rinex {
        namespace observation {

          class GlonassSatelliteChannel : public ::java::lang::Object {
           public:
            enum {
              mid_init$_f2b1548731a90166,
              mid_getK_d6ab429752e7c267,
              mid_getSatellite_25eb770be3a2890a,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit GlonassSatelliteChannel(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            GlonassSatelliteChannel(const GlonassSatelliteChannel& obj) : ::java::lang::Object(obj) {}

            GlonassSatelliteChannel(const ::org::orekit::gnss::SatInSystem &, jint);

            jint getK() const;
            ::org::orekit::gnss::SatInSystem getSatellite() const;
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
        namespace observation {
          extern PyType_Def PY_TYPE_DEF(GlonassSatelliteChannel);
          extern PyTypeObject *PY_TYPE(GlonassSatelliteChannel);

          class t_GlonassSatelliteChannel {
          public:
            PyObject_HEAD
            GlonassSatelliteChannel object;
            static PyObject *wrap_Object(const GlonassSatelliteChannel&);
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
