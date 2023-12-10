#ifndef org_orekit_files_ilrs_StreamingCpfWriter$Segment_H
#define org_orekit_files_ilrs_StreamingCpfWriter$Segment_H

#include "java/lang/Object.h"

namespace java {
  namespace io {
    class IOException;
  }
  namespace lang {
    class Class;
  }
}
namespace org {
  namespace orekit {
    namespace propagation {
      namespace sampling {
        class OrekitFixedStepHandler;
      }
      class SpacecraftState;
    }
    namespace utils {
      class TimeStampedPVCoordinates;
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace files {
      namespace ilrs {

        class StreamingCpfWriter$Segment : public ::java::lang::Object {
         public:
          enum {
            mid_finish_0ee5c56004643a2e,
            mid_handleStep_0ee5c56004643a2e,
            mid_writeEphemerisLine_48579a0bdefdceaf,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit StreamingCpfWriter$Segment(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          StreamingCpfWriter$Segment(const StreamingCpfWriter$Segment& obj) : ::java::lang::Object(obj) {}

          void finish(const ::org::orekit::propagation::SpacecraftState &) const;
          void handleStep(const ::org::orekit::propagation::SpacecraftState &) const;
          void writeEphemerisLine(const ::org::orekit::utils::TimeStampedPVCoordinates &) const;
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace files {
      namespace ilrs {
        extern PyType_Def PY_TYPE_DEF(StreamingCpfWriter$Segment);
        extern PyTypeObject *PY_TYPE(StreamingCpfWriter$Segment);

        class t_StreamingCpfWriter$Segment {
        public:
          PyObject_HEAD
          StreamingCpfWriter$Segment object;
          static PyObject *wrap_Object(const StreamingCpfWriter$Segment&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
