#ifndef org_orekit_frames_FramesFactory_H
#define org_orekit_frames_FramesFactory_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace time {
      class UTCScale;
      class FieldAbsoluteDate;
      class AbsoluteDate;
    }
    namespace frames {
      class Frame;
      class LazyLoadedFrames;
      class FactoryManagedFrame;
      class Predefined;
      class EopHistoryLoader;
      class FieldTransform;
      class VersionedITRF;
      class ITRFVersion;
      class EOPHistory;
      class Transform;
    }
    namespace utils {
      class IERSConventions;
    }
  }
}
namespace java {
  namespace lang {
    class Class;
    class String;
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace frames {

      class FramesFactory : public ::java::lang::Object {
       public:
        enum {
          mid_addDefaultEOP1980HistoryLoaders_0ed06339391372ae,
          mid_addDefaultEOP2000HistoryLoaders_0ed06339391372ae,
          mid_addEOPHistoryLoader_e1571b88fce42eed,
          mid_buildUncachedITRF_296f2dfe44c24f3b,
          mid_clearEOPHistoryLoaders_7ae3461a92a43152,
          mid_findEOP_2bf5a2d03e3322a9,
          mid_getCIRF_7a43fbb334938fb6,
          mid_getEME2000_238e1a1a48ce9b9b,
          mid_getEOPHistory_7544a283da003d74,
          mid_getEcliptic_951ab15b750ec500,
          mid_getFrame_1d8cb946d8760b58,
          mid_getFrames_279cf148ff8a6939,
          mid_getGCRF_c8fe21bcdac65bf6,
          mid_getGTOD_e0bf161d9af50163,
          mid_getGTOD_7a43fbb334938fb6,
          mid_getICRF_c8fe21bcdac65bf6,
          mid_getITRF_7a43fbb334938fb6,
          mid_getITRF_604147dabe0b6681,
          mid_getITRFEquinox_7a43fbb334938fb6,
          mid_getMOD_f41281a5e34c0279,
          mid_getMOD_e0bf161d9af50163,
          mid_getNonInterpolatingTransform_209aefbcc00c6b9b,
          mid_getNonInterpolatingTransform_18e2b2bb1e74d830,
          mid_getPZ9011_7a43fbb334938fb6,
          mid_getTEME_238e1a1a48ce9b9b,
          mid_getTIRF_f41281a5e34c0279,
          mid_getTIRF_7a43fbb334938fb6,
          mid_getTOD_e0bf161d9af50163,
          mid_getTOD_7a43fbb334938fb6,
          mid_getVeis1950_238e1a1a48ce9b9b,
          mid_setEOPContinuityThreshold_77e0f9a1f260e2e5,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit FramesFactory(jobject obj) : ::java::lang::Object(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        FramesFactory(const FramesFactory& obj) : ::java::lang::Object(obj) {}

        static ::java::lang::String *BULLETINA_FILENAME;
        static ::java::lang::String *BULLETINB_1980_FILENAME;
        static ::java::lang::String *BULLETINB_2000_FILENAME;
        static ::java::lang::String *CSV_FILENAME;
        static ::java::lang::String *EOPC04_1980_FILENAME;
        static ::java::lang::String *EOPC04_2000_FILENAME;
        static ::java::lang::String *RAPID_DATA_PREDICTION_COLUMNS_1980_FILENAME;
        static ::java::lang::String *RAPID_DATA_PREDICTION_COLUMNS_2000_FILENAME;
        static ::java::lang::String *XML_1980_FILENAME;
        static ::java::lang::String *XML_2000_FILENAME;

        static void addDefaultEOP1980HistoryLoaders(const ::java::lang::String &, const ::java::lang::String &, const ::java::lang::String &, const ::java::lang::String &, const ::java::lang::String &, const ::java::lang::String &);
        static void addDefaultEOP2000HistoryLoaders(const ::java::lang::String &, const ::java::lang::String &, const ::java::lang::String &, const ::java::lang::String &, const ::java::lang::String &, const ::java::lang::String &);
        static void addEOPHistoryLoader(const ::org::orekit::utils::IERSConventions &, const ::org::orekit::frames::EopHistoryLoader &);
        static ::org::orekit::frames::Frame buildUncachedITRF(const ::org::orekit::frames::EOPHistory &, const ::org::orekit::time::UTCScale &);
        static void clearEOPHistoryLoaders();
        static ::org::orekit::frames::EOPHistory findEOP(const ::org::orekit::frames::Frame &);
        static ::org::orekit::frames::FactoryManagedFrame getCIRF(const ::org::orekit::utils::IERSConventions &, jboolean);
        static ::org::orekit::frames::FactoryManagedFrame getEME2000();
        static ::org::orekit::frames::EOPHistory getEOPHistory(const ::org::orekit::utils::IERSConventions &, jboolean);
        static ::org::orekit::frames::Frame getEcliptic(const ::org::orekit::utils::IERSConventions &);
        static ::org::orekit::frames::Frame getFrame(const ::org::orekit::frames::Predefined &);
        static ::org::orekit::frames::LazyLoadedFrames getFrames();
        static ::org::orekit::frames::Frame getGCRF();
        static ::org::orekit::frames::FactoryManagedFrame getGTOD(jboolean);
        static ::org::orekit::frames::FactoryManagedFrame getGTOD(const ::org::orekit::utils::IERSConventions &, jboolean);
        static ::org::orekit::frames::Frame getICRF();
        static ::org::orekit::frames::FactoryManagedFrame getITRF(const ::org::orekit::utils::IERSConventions &, jboolean);
        static ::org::orekit::frames::VersionedITRF getITRF(const ::org::orekit::frames::ITRFVersion &, const ::org::orekit::utils::IERSConventions &, jboolean);
        static ::org::orekit::frames::FactoryManagedFrame getITRFEquinox(const ::org::orekit::utils::IERSConventions &, jboolean);
        static ::org::orekit::frames::FactoryManagedFrame getMOD(const ::org::orekit::utils::IERSConventions &);
        static ::org::orekit::frames::FactoryManagedFrame getMOD(jboolean);
        static ::org::orekit::frames::Transform getNonInterpolatingTransform(const ::org::orekit::frames::Frame &, const ::org::orekit::frames::Frame &, const ::org::orekit::time::AbsoluteDate &);
        static ::org::orekit::frames::FieldTransform getNonInterpolatingTransform(const ::org::orekit::frames::Frame &, const ::org::orekit::frames::Frame &, const ::org::orekit::time::FieldAbsoluteDate &);
        static ::org::orekit::frames::FactoryManagedFrame getPZ9011(const ::org::orekit::utils::IERSConventions &, jboolean);
        static ::org::orekit::frames::FactoryManagedFrame getTEME();
        static ::org::orekit::frames::FactoryManagedFrame getTIRF(const ::org::orekit::utils::IERSConventions &);
        static ::org::orekit::frames::FactoryManagedFrame getTIRF(const ::org::orekit::utils::IERSConventions &, jboolean);
        static ::org::orekit::frames::FactoryManagedFrame getTOD(jboolean);
        static ::org::orekit::frames::FactoryManagedFrame getTOD(const ::org::orekit::utils::IERSConventions &, jboolean);
        static ::org::orekit::frames::FactoryManagedFrame getVeis1950();
        static void setEOPContinuityThreshold(jdouble);
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace frames {
      extern PyType_Def PY_TYPE_DEF(FramesFactory);
      extern PyTypeObject *PY_TYPE(FramesFactory);

      class t_FramesFactory {
      public:
        PyObject_HEAD
        FramesFactory object;
        static PyObject *wrap_Object(const FramesFactory&);
        static PyObject *wrap_jobject(const jobject&);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
