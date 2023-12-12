#ifndef org_orekit_frames_PythonFrames_H
#define org_orekit_frames_PythonFrames_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace frames {
      class Frames;
      class Frame;
      class Predefined;
      class ITRFVersion;
      class EOPHistory;
      class VersionedITRF;
      class FactoryManagedFrame;
    }
    namespace time {
      class UT1Scale;
    }
    namespace utils {
      class IERSConventions;
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
          mid_init$_0640e6acf969ed28,
          mid_buildUncachedITRF_d001272d652a2315,
          mid_finalize_0640e6acf969ed28,
          mid_getCIRF_af417399ee2f3e0d,
          mid_getEME2000_e96d0d85e78fc6bd,
          mid_getEOPHistory_9cf4a1ec2e53bbd3,
          mid_getEcliptic_bb61238dc14574bc,
          mid_getFrame_9103848bb456e582,
          mid_getGCRF_6c9bc0a928c56d4e,
          mid_getGTOD_a06a41ba6e4eb36a,
          mid_getGTOD_af417399ee2f3e0d,
          mid_getICRF_6c9bc0a928c56d4e,
          mid_getITRF_af417399ee2f3e0d,
          mid_getITRF_e7702de838b8de68,
          mid_getITRFEquinox_af417399ee2f3e0d,
          mid_getMOD_57509cacf2364dd9,
          mid_getMOD_a06a41ba6e4eb36a,
          mid_getPZ9011_af417399ee2f3e0d,
          mid_getTEME_e96d0d85e78fc6bd,
          mid_getTIRF_57509cacf2364dd9,
          mid_getTIRF_af417399ee2f3e0d,
          mid_getTOD_a06a41ba6e4eb36a,
          mid_getTOD_af417399ee2f3e0d,
          mid_getVeis1950_e96d0d85e78fc6bd,
          mid_pythonDecRef_0640e6acf969ed28,
          mid_pythonExtension_9e26256fb0d384a2,
          mid_pythonExtension_3cd6a6b354c6aa22,
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
