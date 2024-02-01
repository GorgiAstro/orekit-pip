#ifndef org_orekit_frames_PythonFrames_H
#define org_orekit_frames_PythonFrames_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace frames {
      class Predefined;
      class VersionedITRF;
      class FactoryManagedFrame;
      class Frames;
      class ITRFVersion;
      class Frame;
      class EOPHistory;
    }
    namespace utils {
      class IERSConventions;
    }
    namespace time {
      class UT1Scale;
    }
  }
}
namespace java {
  namespace lang {
    class Throwable;
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace frames {

      class PythonFrames : public ::java::lang::Object {
       public:
        enum {
          mid_init$_ff7cb6c242604316,
          mid_buildUncachedITRF_b3c0898cffa17768,
          mid_finalize_ff7cb6c242604316,
          mid_getCIRF_84e014d661e18862,
          mid_getEME2000_449c13dc13254059,
          mid_getEOPHistory_5f3b1864e8a02d51,
          mid_getEcliptic_6c55c8e7e159d424,
          mid_getFrame_2914574e34e220d9,
          mid_getGCRF_cb151471db4570f0,
          mid_getGTOD_7aa0049260c7fcad,
          mid_getGTOD_84e014d661e18862,
          mid_getICRF_cb151471db4570f0,
          mid_getITRF_84e014d661e18862,
          mid_getITRF_8580ffa0332936c5,
          mid_getITRFEquinox_84e014d661e18862,
          mid_getMOD_d7c1cc155dc219ec,
          mid_getMOD_7aa0049260c7fcad,
          mid_getPZ9011_84e014d661e18862,
          mid_getTEME_449c13dc13254059,
          mid_getTIRF_d7c1cc155dc219ec,
          mid_getTIRF_84e014d661e18862,
          mid_getTOD_7aa0049260c7fcad,
          mid_getTOD_84e014d661e18862,
          mid_getVeis1950_449c13dc13254059,
          mid_pythonDecRef_ff7cb6c242604316,
          mid_pythonExtension_42c72b98e3c2e08a,
          mid_pythonExtension_f5bbab7e97879358,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit PythonFrames(jobject obj) : ::java::lang::Object(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        PythonFrames(const PythonFrames& obj) : ::java::lang::Object(obj) {}

        PythonFrames();

        ::org::orekit::frames::Frame buildUncachedITRF(const ::org::orekit::time::UT1Scale &) const;
        void finalize() const;
        ::org::orekit::frames::FactoryManagedFrame getCIRF(const ::org::orekit::utils::IERSConventions &, jboolean) const;
        ::org::orekit::frames::FactoryManagedFrame getEME2000() const;
        ::org::orekit::frames::EOPHistory getEOPHistory(const ::org::orekit::utils::IERSConventions &, jboolean) const;
        ::org::orekit::frames::Frame getEcliptic(const ::org::orekit::utils::IERSConventions &) const;
        ::org::orekit::frames::Frame getFrame(const ::org::orekit::frames::Predefined &) const;
        ::org::orekit::frames::Frame getGCRF() const;
        ::org::orekit::frames::FactoryManagedFrame getGTOD(jboolean) const;
        ::org::orekit::frames::FactoryManagedFrame getGTOD(const ::org::orekit::utils::IERSConventions &, jboolean) const;
        ::org::orekit::frames::Frame getICRF() const;
        ::org::orekit::frames::FactoryManagedFrame getITRF(const ::org::orekit::utils::IERSConventions &, jboolean) const;
        ::org::orekit::frames::VersionedITRF getITRF(const ::org::orekit::frames::ITRFVersion &, const ::org::orekit::utils::IERSConventions &, jboolean) const;
        ::org::orekit::frames::FactoryManagedFrame getITRFEquinox(const ::org::orekit::utils::IERSConventions &, jboolean) const;
        ::org::orekit::frames::FactoryManagedFrame getMOD(const ::org::orekit::utils::IERSConventions &) const;
        ::org::orekit::frames::FactoryManagedFrame getMOD(jboolean) const;
        ::org::orekit::frames::FactoryManagedFrame getPZ9011(const ::org::orekit::utils::IERSConventions &, jboolean) const;
        ::org::orekit::frames::FactoryManagedFrame getTEME() const;
        ::org::orekit::frames::FactoryManagedFrame getTIRF(const ::org::orekit::utils::IERSConventions &) const;
        ::org::orekit::frames::FactoryManagedFrame getTIRF(const ::org::orekit::utils::IERSConventions &, jboolean) const;
        ::org::orekit::frames::FactoryManagedFrame getTOD(jboolean) const;
        ::org::orekit::frames::FactoryManagedFrame getTOD(const ::org::orekit::utils::IERSConventions &, jboolean) const;
        ::org::orekit::frames::FactoryManagedFrame getVeis1950() const;
        void pythonDecRef() const;
        jlong pythonExtension() const;
        void pythonExtension(jlong) const;
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace frames {
      extern PyType_Def PY_TYPE_DEF(PythonFrames);
      extern PyTypeObject *PY_TYPE(PythonFrames);

      class t_PythonFrames {
      public:
        PyObject_HEAD
        PythonFrames object;
        static PyObject *wrap_Object(const PythonFrames&);
        static PyObject *wrap_jobject(const jobject&);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
