#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/utils/OccultationEngine.h"
#include "org/orekit/utils/ExtendedPVCoordinatesProvider.h"
#include "org/orekit/bodies/OneAxisEllipsoid.h"
#include "org/orekit/utils/OccultationEngine$OccultationAngles.h"
#include "java/lang/Class.h"
#include "org/orekit/utils/OccultationEngine$FieldOccultationAngles.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace utils {

      ::java::lang::Class *OccultationEngine::class$ = NULL;
      jmethodID *OccultationEngine::mids$ = NULL;
      bool OccultationEngine::live$ = false;

      jclass OccultationEngine::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/utils/OccultationEngine");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_f54f987ffc77d8f9] = env->getMethodID(cls, "<init>", "(Lorg/orekit/utils/ExtendedPVCoordinatesProvider;DLorg/orekit/bodies/OneAxisEllipsoid;)V");
          mids$[mid_angles_e920f121ba24a681] = env->getMethodID(cls, "angles", "(Lorg/orekit/propagation/FieldSpacecraftState;)Lorg/orekit/utils/OccultationEngine$FieldOccultationAngles;");
          mids$[mid_angles_23fc243eaa8e2588] = env->getMethodID(cls, "angles", "(Lorg/orekit/propagation/SpacecraftState;)Lorg/orekit/utils/OccultationEngine$OccultationAngles;");
          mids$[mid_getOcculted_59b14a9bb85bbba5] = env->getMethodID(cls, "getOcculted", "()Lorg/orekit/utils/ExtendedPVCoordinatesProvider;");
          mids$[mid_getOccultedRadius_b74f83833fdad017] = env->getMethodID(cls, "getOccultedRadius", "()D");
          mids$[mid_getOcculting_dd5c4288aa5a3dd8] = env->getMethodID(cls, "getOcculting", "()Lorg/orekit/bodies/OneAxisEllipsoid;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      OccultationEngine::OccultationEngine(const ::org::orekit::utils::ExtendedPVCoordinatesProvider & a0, jdouble a1, const ::org::orekit::bodies::OneAxisEllipsoid & a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_f54f987ffc77d8f9, a0.this$, a1, a2.this$)) {}

      ::org::orekit::utils::OccultationEngine$FieldOccultationAngles OccultationEngine::angles(const ::org::orekit::propagation::FieldSpacecraftState & a0) const
      {
        return ::org::orekit::utils::OccultationEngine$FieldOccultationAngles(env->callObjectMethod(this$, mids$[mid_angles_e920f121ba24a681], a0.this$));
      }

      ::org::orekit::utils::OccultationEngine$OccultationAngles OccultationEngine::angles(const ::org::orekit::propagation::SpacecraftState & a0) const
      {
        return ::org::orekit::utils::OccultationEngine$OccultationAngles(env->callObjectMethod(this$, mids$[mid_angles_23fc243eaa8e2588], a0.this$));
      }

      ::org::orekit::utils::ExtendedPVCoordinatesProvider OccultationEngine::getOcculted() const
      {
        return ::org::orekit::utils::ExtendedPVCoordinatesProvider(env->callObjectMethod(this$, mids$[mid_getOcculted_59b14a9bb85bbba5]));
      }

      jdouble OccultationEngine::getOccultedRadius() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getOccultedRadius_b74f83833fdad017]);
      }

      ::org::orekit::bodies::OneAxisEllipsoid OccultationEngine::getOcculting() const
      {
        return ::org::orekit::bodies::OneAxisEllipsoid(env->callObjectMethod(this$, mids$[mid_getOcculting_dd5c4288aa5a3dd8]));
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace utils {
      static PyObject *t_OccultationEngine_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_OccultationEngine_instance_(PyTypeObject *type, PyObject *arg);
      static int t_OccultationEngine_init_(t_OccultationEngine *self, PyObject *args, PyObject *kwds);
      static PyObject *t_OccultationEngine_angles(t_OccultationEngine *self, PyObject *args);
      static PyObject *t_OccultationEngine_getOcculted(t_OccultationEngine *self);
      static PyObject *t_OccultationEngine_getOccultedRadius(t_OccultationEngine *self);
      static PyObject *t_OccultationEngine_getOcculting(t_OccultationEngine *self);
      static PyObject *t_OccultationEngine_get__occulted(t_OccultationEngine *self, void *data);
      static PyObject *t_OccultationEngine_get__occultedRadius(t_OccultationEngine *self, void *data);
      static PyObject *t_OccultationEngine_get__occulting(t_OccultationEngine *self, void *data);
      static PyGetSetDef t_OccultationEngine__fields_[] = {
        DECLARE_GET_FIELD(t_OccultationEngine, occulted),
        DECLARE_GET_FIELD(t_OccultationEngine, occultedRadius),
        DECLARE_GET_FIELD(t_OccultationEngine, occulting),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_OccultationEngine__methods_[] = {
        DECLARE_METHOD(t_OccultationEngine, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_OccultationEngine, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_OccultationEngine, angles, METH_VARARGS),
        DECLARE_METHOD(t_OccultationEngine, getOcculted, METH_NOARGS),
        DECLARE_METHOD(t_OccultationEngine, getOccultedRadius, METH_NOARGS),
        DECLARE_METHOD(t_OccultationEngine, getOcculting, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(OccultationEngine)[] = {
        { Py_tp_methods, t_OccultationEngine__methods_ },
        { Py_tp_init, (void *) t_OccultationEngine_init_ },
        { Py_tp_getset, t_OccultationEngine__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(OccultationEngine)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(OccultationEngine, t_OccultationEngine, OccultationEngine);

      void t_OccultationEngine::install(PyObject *module)
      {
        installType(&PY_TYPE(OccultationEngine), &PY_TYPE_DEF(OccultationEngine), module, "OccultationEngine", 0);
        PyObject_SetAttrString((PyObject *) PY_TYPE(OccultationEngine), "OccultationAngles", make_descriptor(&PY_TYPE_DEF(OccultationEngine$OccultationAngles)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OccultationEngine), "FieldOccultationAngles", make_descriptor(&PY_TYPE_DEF(OccultationEngine$FieldOccultationAngles)));
      }

      void t_OccultationEngine::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(OccultationEngine), "class_", make_descriptor(OccultationEngine::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OccultationEngine), "wrapfn_", make_descriptor(t_OccultationEngine::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OccultationEngine), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_OccultationEngine_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, OccultationEngine::initializeClass, 1)))
          return NULL;
        return t_OccultationEngine::wrap_Object(OccultationEngine(((t_OccultationEngine *) arg)->object.this$));
      }
      static PyObject *t_OccultationEngine_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, OccultationEngine::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_OccultationEngine_init_(t_OccultationEngine *self, PyObject *args, PyObject *kwds)
      {
        ::org::orekit::utils::ExtendedPVCoordinatesProvider a0((jobject) NULL);
        jdouble a1;
        ::org::orekit::bodies::OneAxisEllipsoid a2((jobject) NULL);
        OccultationEngine object((jobject) NULL);

        if (!parseArgs(args, "kDk", ::org::orekit::utils::ExtendedPVCoordinatesProvider::initializeClass, ::org::orekit::bodies::OneAxisEllipsoid::initializeClass, &a0, &a1, &a2))
        {
          INT_CALL(object = OccultationEngine(a0, a1, a2));
          self->object = object;
        }
        else
        {
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_OccultationEngine_angles(t_OccultationEngine *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::orekit::propagation::FieldSpacecraftState a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::utils::OccultationEngine$FieldOccultationAngles result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::orekit::propagation::FieldSpacecraftState::initializeClass, &a0, &p0, ::org::orekit::propagation::t_FieldSpacecraftState::parameters_))
            {
              OBJ_CALL(result = self->object.angles(a0));
              return ::org::orekit::utils::t_OccultationEngine$FieldOccultationAngles::wrap_Object(result);
            }
          }
          {
            ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
            ::org::orekit::utils::OccultationEngine$OccultationAngles result((jobject) NULL);

            if (!parseArgs(args, "k", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.angles(a0));
              return ::org::orekit::utils::t_OccultationEngine$OccultationAngles::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "angles", args);
        return NULL;
      }

      static PyObject *t_OccultationEngine_getOcculted(t_OccultationEngine *self)
      {
        ::org::orekit::utils::ExtendedPVCoordinatesProvider result((jobject) NULL);
        OBJ_CALL(result = self->object.getOcculted());
        return ::org::orekit::utils::t_ExtendedPVCoordinatesProvider::wrap_Object(result);
      }

      static PyObject *t_OccultationEngine_getOccultedRadius(t_OccultationEngine *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getOccultedRadius());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_OccultationEngine_getOcculting(t_OccultationEngine *self)
      {
        ::org::orekit::bodies::OneAxisEllipsoid result((jobject) NULL);
        OBJ_CALL(result = self->object.getOcculting());
        return ::org::orekit::bodies::t_OneAxisEllipsoid::wrap_Object(result);
      }

      static PyObject *t_OccultationEngine_get__occulted(t_OccultationEngine *self, void *data)
      {
        ::org::orekit::utils::ExtendedPVCoordinatesProvider value((jobject) NULL);
        OBJ_CALL(value = self->object.getOcculted());
        return ::org::orekit::utils::t_ExtendedPVCoordinatesProvider::wrap_Object(value);
      }

      static PyObject *t_OccultationEngine_get__occultedRadius(t_OccultationEngine *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getOccultedRadius());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_OccultationEngine_get__occulting(t_OccultationEngine *self, void *data)
      {
        ::org::orekit::bodies::OneAxisEllipsoid value((jobject) NULL);
        OBJ_CALL(value = self->object.getOcculting());
        return ::org::orekit::bodies::t_OneAxisEllipsoid::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/ndm/odm/omm/OmmTle.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace odm {
            namespace omm {

              ::java::lang::Class *OmmTle::class$ = NULL;
              jmethodID *OmmTle::mids$ = NULL;
              bool OmmTle::live$ = false;
              jint OmmTle::EPHEMERIS_TYPE_PPT3 = (jint) 0;
              jint OmmTle::EPHEMERIS_TYPE_SGP = (jint) 0;
              jint OmmTle::EPHEMERIS_TYPE_SGP4 = (jint) 0;
              jint OmmTle::EPHEMERIS_TYPE_SGP4_XP = (jint) 0;
              jint OmmTle::EPHEMERIS_TYPE_SPECIAL_PERTURBATIONS = (jint) 0;

              jclass OmmTle::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/odm/omm/OmmTle");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_init$_a1fa5dae97ea5ed2] = env->getMethodID(cls, "<init>", "()V");
                  mids$[mid_getAGoM_b74f83833fdad017] = env->getMethodID(cls, "getAGoM", "()D");
                  mids$[mid_getBStar_b74f83833fdad017] = env->getMethodID(cls, "getBStar", "()D");
                  mids$[mid_getBTerm_b74f83833fdad017] = env->getMethodID(cls, "getBTerm", "()D");
                  mids$[mid_getClassificationType_5e2f8fc4d7c03fbd] = env->getMethodID(cls, "getClassificationType", "()C");
                  mids$[mid_getElementSetNumber_55546ef6a647f39b] = env->getMethodID(cls, "getElementSetNumber", "()I");
                  mids$[mid_getEphemerisType_55546ef6a647f39b] = env->getMethodID(cls, "getEphemerisType", "()I");
                  mids$[mid_getMeanMotionDot_b74f83833fdad017] = env->getMethodID(cls, "getMeanMotionDot", "()D");
                  mids$[mid_getMeanMotionDotDot_b74f83833fdad017] = env->getMethodID(cls, "getMeanMotionDotDot", "()D");
                  mids$[mid_getNoradID_55546ef6a647f39b] = env->getMethodID(cls, "getNoradID", "()I");
                  mids$[mid_getRevAtEpoch_55546ef6a647f39b] = env->getMethodID(cls, "getRevAtEpoch", "()I");
                  mids$[mid_setAGoM_8ba9fe7a847cecad] = env->getMethodID(cls, "setAGoM", "(D)V");
                  mids$[mid_setBStar_8ba9fe7a847cecad] = env->getMethodID(cls, "setBStar", "(D)V");
                  mids$[mid_setBTerm_8ba9fe7a847cecad] = env->getMethodID(cls, "setBTerm", "(D)V");
                  mids$[mid_setClassificationType_df95ad02f5b4acd9] = env->getMethodID(cls, "setClassificationType", "(C)V");
                  mids$[mid_setElementSetNo_44ed599e93e8a30c] = env->getMethodID(cls, "setElementSetNo", "(I)V");
                  mids$[mid_setEphemerisType_44ed599e93e8a30c] = env->getMethodID(cls, "setEphemerisType", "(I)V");
                  mids$[mid_setMeanMotionDot_8ba9fe7a847cecad] = env->getMethodID(cls, "setMeanMotionDot", "(D)V");
                  mids$[mid_setMeanMotionDotDot_8ba9fe7a847cecad] = env->getMethodID(cls, "setMeanMotionDotDot", "(D)V");
                  mids$[mid_setNoradID_44ed599e93e8a30c] = env->getMethodID(cls, "setNoradID", "(I)V");
                  mids$[mid_setRevAtEpoch_44ed599e93e8a30c] = env->getMethodID(cls, "setRevAtEpoch", "(I)V");
                  mids$[mid_validate_8ba9fe7a847cecad] = env->getMethodID(cls, "validate", "(D)V");

                  class$ = new ::java::lang::Class(cls);
                  cls = (jclass) class$->this$;

                  EPHEMERIS_TYPE_PPT3 = env->getStaticIntField(cls, "EPHEMERIS_TYPE_PPT3");
                  EPHEMERIS_TYPE_SGP = env->getStaticIntField(cls, "EPHEMERIS_TYPE_SGP");
                  EPHEMERIS_TYPE_SGP4 = env->getStaticIntField(cls, "EPHEMERIS_TYPE_SGP4");
                  EPHEMERIS_TYPE_SGP4_XP = env->getStaticIntField(cls, "EPHEMERIS_TYPE_SGP4_XP");
                  EPHEMERIS_TYPE_SPECIAL_PERTURBATIONS = env->getStaticIntField(cls, "EPHEMERIS_TYPE_SPECIAL_PERTURBATIONS");
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              OmmTle::OmmTle() : ::org::orekit::files::ccsds::section::CommentsContainer(env->newObject(initializeClass, &mids$, mid_init$_a1fa5dae97ea5ed2)) {}

              jdouble OmmTle::getAGoM() const
              {
                return env->callDoubleMethod(this$, mids$[mid_getAGoM_b74f83833fdad017]);
              }

              jdouble OmmTle::getBStar() const
              {
                return env->callDoubleMethod(this$, mids$[mid_getBStar_b74f83833fdad017]);
              }

              jdouble OmmTle::getBTerm() const
              {
                return env->callDoubleMethod(this$, mids$[mid_getBTerm_b74f83833fdad017]);
              }

              jchar OmmTle::getClassificationType() const
              {
                return env->callCharMethod(this$, mids$[mid_getClassificationType_5e2f8fc4d7c03fbd]);
              }

              jint OmmTle::getElementSetNumber() const
              {
                return env->callIntMethod(this$, mids$[mid_getElementSetNumber_55546ef6a647f39b]);
              }

              jint OmmTle::getEphemerisType() const
              {
                return env->callIntMethod(this$, mids$[mid_getEphemerisType_55546ef6a647f39b]);
              }

              jdouble OmmTle::getMeanMotionDot() const
              {
                return env->callDoubleMethod(this$, mids$[mid_getMeanMotionDot_b74f83833fdad017]);
              }

              jdouble OmmTle::getMeanMotionDotDot() const
              {
                return env->callDoubleMethod(this$, mids$[mid_getMeanMotionDotDot_b74f83833fdad017]);
              }

              jint OmmTle::getNoradID() const
              {
                return env->callIntMethod(this$, mids$[mid_getNoradID_55546ef6a647f39b]);
              }

              jint OmmTle::getRevAtEpoch() const
              {
                return env->callIntMethod(this$, mids$[mid_getRevAtEpoch_55546ef6a647f39b]);
              }

              void OmmTle::setAGoM(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setAGoM_8ba9fe7a847cecad], a0);
              }

              void OmmTle::setBStar(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setBStar_8ba9fe7a847cecad], a0);
              }

              void OmmTle::setBTerm(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setBTerm_8ba9fe7a847cecad], a0);
              }

              void OmmTle::setClassificationType(jchar a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setClassificationType_df95ad02f5b4acd9], a0);
              }

              void OmmTle::setElementSetNo(jint a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setElementSetNo_44ed599e93e8a30c], a0);
              }

              void OmmTle::setEphemerisType(jint a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setEphemerisType_44ed599e93e8a30c], a0);
              }

              void OmmTle::setMeanMotionDot(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setMeanMotionDot_8ba9fe7a847cecad], a0);
              }

              void OmmTle::setMeanMotionDotDot(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setMeanMotionDotDot_8ba9fe7a847cecad], a0);
              }

              void OmmTle::setNoradID(jint a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setNoradID_44ed599e93e8a30c], a0);
              }

              void OmmTle::setRevAtEpoch(jint a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setRevAtEpoch_44ed599e93e8a30c], a0);
              }

              void OmmTle::validate(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_validate_8ba9fe7a847cecad], a0);
              }
            }
          }
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace odm {
            namespace omm {
              static PyObject *t_OmmTle_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_OmmTle_instance_(PyTypeObject *type, PyObject *arg);
              static int t_OmmTle_init_(t_OmmTle *self, PyObject *args, PyObject *kwds);
              static PyObject *t_OmmTle_getAGoM(t_OmmTle *self);
              static PyObject *t_OmmTle_getBStar(t_OmmTle *self);
              static PyObject *t_OmmTle_getBTerm(t_OmmTle *self);
              static PyObject *t_OmmTle_getClassificationType(t_OmmTle *self);
              static PyObject *t_OmmTle_getElementSetNumber(t_OmmTle *self);
              static PyObject *t_OmmTle_getEphemerisType(t_OmmTle *self);
              static PyObject *t_OmmTle_getMeanMotionDot(t_OmmTle *self);
              static PyObject *t_OmmTle_getMeanMotionDotDot(t_OmmTle *self);
              static PyObject *t_OmmTle_getNoradID(t_OmmTle *self);
              static PyObject *t_OmmTle_getRevAtEpoch(t_OmmTle *self);
              static PyObject *t_OmmTle_setAGoM(t_OmmTle *self, PyObject *arg);
              static PyObject *t_OmmTle_setBStar(t_OmmTle *self, PyObject *arg);
              static PyObject *t_OmmTle_setBTerm(t_OmmTle *self, PyObject *arg);
              static PyObject *t_OmmTle_setClassificationType(t_OmmTle *self, PyObject *arg);
              static PyObject *t_OmmTle_setElementSetNo(t_OmmTle *self, PyObject *arg);
              static PyObject *t_OmmTle_setEphemerisType(t_OmmTle *self, PyObject *arg);
              static PyObject *t_OmmTle_setMeanMotionDot(t_OmmTle *self, PyObject *arg);
              static PyObject *t_OmmTle_setMeanMotionDotDot(t_OmmTle *self, PyObject *arg);
              static PyObject *t_OmmTle_setNoradID(t_OmmTle *self, PyObject *arg);
              static PyObject *t_OmmTle_setRevAtEpoch(t_OmmTle *self, PyObject *arg);
              static PyObject *t_OmmTle_validate(t_OmmTle *self, PyObject *args);
              static PyObject *t_OmmTle_get__aGoM(t_OmmTle *self, void *data);
              static int t_OmmTle_set__aGoM(t_OmmTle *self, PyObject *arg, void *data);
              static PyObject *t_OmmTle_get__bStar(t_OmmTle *self, void *data);
              static int t_OmmTle_set__bStar(t_OmmTle *self, PyObject *arg, void *data);
              static PyObject *t_OmmTle_get__bTerm(t_OmmTle *self, void *data);
              static int t_OmmTle_set__bTerm(t_OmmTle *self, PyObject *arg, void *data);
              static PyObject *t_OmmTle_get__classificationType(t_OmmTle *self, void *data);
              static int t_OmmTle_set__classificationType(t_OmmTle *self, PyObject *arg, void *data);
              static int t_OmmTle_set__elementSetNo(t_OmmTle *self, PyObject *arg, void *data);
              static PyObject *t_OmmTle_get__elementSetNumber(t_OmmTle *self, void *data);
              static PyObject *t_OmmTle_get__ephemerisType(t_OmmTle *self, void *data);
              static int t_OmmTle_set__ephemerisType(t_OmmTle *self, PyObject *arg, void *data);
              static PyObject *t_OmmTle_get__meanMotionDot(t_OmmTle *self, void *data);
              static int t_OmmTle_set__meanMotionDot(t_OmmTle *self, PyObject *arg, void *data);
              static PyObject *t_OmmTle_get__meanMotionDotDot(t_OmmTle *self, void *data);
              static int t_OmmTle_set__meanMotionDotDot(t_OmmTle *self, PyObject *arg, void *data);
              static PyObject *t_OmmTle_get__noradID(t_OmmTle *self, void *data);
              static int t_OmmTle_set__noradID(t_OmmTle *self, PyObject *arg, void *data);
              static PyObject *t_OmmTle_get__revAtEpoch(t_OmmTle *self, void *data);
              static int t_OmmTle_set__revAtEpoch(t_OmmTle *self, PyObject *arg, void *data);
              static PyGetSetDef t_OmmTle__fields_[] = {
                DECLARE_GETSET_FIELD(t_OmmTle, aGoM),
                DECLARE_GETSET_FIELD(t_OmmTle, bStar),
                DECLARE_GETSET_FIELD(t_OmmTle, bTerm),
                DECLARE_GETSET_FIELD(t_OmmTle, classificationType),
                DECLARE_SET_FIELD(t_OmmTle, elementSetNo),
                DECLARE_GET_FIELD(t_OmmTle, elementSetNumber),
                DECLARE_GETSET_FIELD(t_OmmTle, ephemerisType),
                DECLARE_GETSET_FIELD(t_OmmTle, meanMotionDot),
                DECLARE_GETSET_FIELD(t_OmmTle, meanMotionDotDot),
                DECLARE_GETSET_FIELD(t_OmmTle, noradID),
                DECLARE_GETSET_FIELD(t_OmmTle, revAtEpoch),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_OmmTle__methods_[] = {
                DECLARE_METHOD(t_OmmTle, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_OmmTle, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_OmmTle, getAGoM, METH_NOARGS),
                DECLARE_METHOD(t_OmmTle, getBStar, METH_NOARGS),
                DECLARE_METHOD(t_OmmTle, getBTerm, METH_NOARGS),
                DECLARE_METHOD(t_OmmTle, getClassificationType, METH_NOARGS),
                DECLARE_METHOD(t_OmmTle, getElementSetNumber, METH_NOARGS),
                DECLARE_METHOD(t_OmmTle, getEphemerisType, METH_NOARGS),
                DECLARE_METHOD(t_OmmTle, getMeanMotionDot, METH_NOARGS),
                DECLARE_METHOD(t_OmmTle, getMeanMotionDotDot, METH_NOARGS),
                DECLARE_METHOD(t_OmmTle, getNoradID, METH_NOARGS),
                DECLARE_METHOD(t_OmmTle, getRevAtEpoch, METH_NOARGS),
                DECLARE_METHOD(t_OmmTle, setAGoM, METH_O),
                DECLARE_METHOD(t_OmmTle, setBStar, METH_O),
                DECLARE_METHOD(t_OmmTle, setBTerm, METH_O),
                DECLARE_METHOD(t_OmmTle, setClassificationType, METH_O),
                DECLARE_METHOD(t_OmmTle, setElementSetNo, METH_O),
                DECLARE_METHOD(t_OmmTle, setEphemerisType, METH_O),
                DECLARE_METHOD(t_OmmTle, setMeanMotionDot, METH_O),
                DECLARE_METHOD(t_OmmTle, setMeanMotionDotDot, METH_O),
                DECLARE_METHOD(t_OmmTle, setNoradID, METH_O),
                DECLARE_METHOD(t_OmmTle, setRevAtEpoch, METH_O),
                DECLARE_METHOD(t_OmmTle, validate, METH_VARARGS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(OmmTle)[] = {
                { Py_tp_methods, t_OmmTle__methods_ },
                { Py_tp_init, (void *) t_OmmTle_init_ },
                { Py_tp_getset, t_OmmTle__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(OmmTle)[] = {
                &PY_TYPE_DEF(::org::orekit::files::ccsds::section::CommentsContainer),
                NULL
              };

              DEFINE_TYPE(OmmTle, t_OmmTle, OmmTle);

              void t_OmmTle::install(PyObject *module)
              {
                installType(&PY_TYPE(OmmTle), &PY_TYPE_DEF(OmmTle), module, "OmmTle", 0);
              }

              void t_OmmTle::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(OmmTle), "class_", make_descriptor(OmmTle::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OmmTle), "wrapfn_", make_descriptor(t_OmmTle::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OmmTle), "boxfn_", make_descriptor(boxObject));
                env->getClass(OmmTle::initializeClass);
                PyObject_SetAttrString((PyObject *) PY_TYPE(OmmTle), "EPHEMERIS_TYPE_PPT3", make_descriptor(OmmTle::EPHEMERIS_TYPE_PPT3));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OmmTle), "EPHEMERIS_TYPE_SGP", make_descriptor(OmmTle::EPHEMERIS_TYPE_SGP));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OmmTle), "EPHEMERIS_TYPE_SGP4", make_descriptor(OmmTle::EPHEMERIS_TYPE_SGP4));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OmmTle), "EPHEMERIS_TYPE_SGP4_XP", make_descriptor(OmmTle::EPHEMERIS_TYPE_SGP4_XP));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OmmTle), "EPHEMERIS_TYPE_SPECIAL_PERTURBATIONS", make_descriptor(OmmTle::EPHEMERIS_TYPE_SPECIAL_PERTURBATIONS));
              }

              static PyObject *t_OmmTle_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, OmmTle::initializeClass, 1)))
                  return NULL;
                return t_OmmTle::wrap_Object(OmmTle(((t_OmmTle *) arg)->object.this$));
              }
              static PyObject *t_OmmTle_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, OmmTle::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static int t_OmmTle_init_(t_OmmTle *self, PyObject *args, PyObject *kwds)
              {
                OmmTle object((jobject) NULL);

                INT_CALL(object = OmmTle());
                self->object = object;

                return 0;
              }

              static PyObject *t_OmmTle_getAGoM(t_OmmTle *self)
              {
                jdouble result;
                OBJ_CALL(result = self->object.getAGoM());
                return PyFloat_FromDouble((double) result);
              }

              static PyObject *t_OmmTle_getBStar(t_OmmTle *self)
              {
                jdouble result;
                OBJ_CALL(result = self->object.getBStar());
                return PyFloat_FromDouble((double) result);
              }

              static PyObject *t_OmmTle_getBTerm(t_OmmTle *self)
              {
                jdouble result;
                OBJ_CALL(result = self->object.getBTerm());
                return PyFloat_FromDouble((double) result);
              }

              static PyObject *t_OmmTle_getClassificationType(t_OmmTle *self)
              {
                jchar result;
                OBJ_CALL(result = self->object.getClassificationType());
                return c2p(result);
              }

              static PyObject *t_OmmTle_getElementSetNumber(t_OmmTle *self)
              {
                jint result;
                OBJ_CALL(result = self->object.getElementSetNumber());
                return PyLong_FromLong((long) result);
              }

              static PyObject *t_OmmTle_getEphemerisType(t_OmmTle *self)
              {
                jint result;
                OBJ_CALL(result = self->object.getEphemerisType());
                return PyLong_FromLong((long) result);
              }

              static PyObject *t_OmmTle_getMeanMotionDot(t_OmmTle *self)
              {
                jdouble result;
                OBJ_CALL(result = self->object.getMeanMotionDot());
                return PyFloat_FromDouble((double) result);
              }

              static PyObject *t_OmmTle_getMeanMotionDotDot(t_OmmTle *self)
              {
                jdouble result;
                OBJ_CALL(result = self->object.getMeanMotionDotDot());
                return PyFloat_FromDouble((double) result);
              }

              static PyObject *t_OmmTle_getNoradID(t_OmmTle *self)
              {
                jint result;
                OBJ_CALL(result = self->object.getNoradID());
                return PyLong_FromLong((long) result);
              }

              static PyObject *t_OmmTle_getRevAtEpoch(t_OmmTle *self)
              {
                jint result;
                OBJ_CALL(result = self->object.getRevAtEpoch());
                return PyLong_FromLong((long) result);
              }

              static PyObject *t_OmmTle_setAGoM(t_OmmTle *self, PyObject *arg)
              {
                jdouble a0;

                if (!parseArg(arg, "D", &a0))
                {
                  OBJ_CALL(self->object.setAGoM(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setAGoM", arg);
                return NULL;
              }

              static PyObject *t_OmmTle_setBStar(t_OmmTle *self, PyObject *arg)
              {
                jdouble a0;

                if (!parseArg(arg, "D", &a0))
                {
                  OBJ_CALL(self->object.setBStar(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setBStar", arg);
                return NULL;
              }

              static PyObject *t_OmmTle_setBTerm(t_OmmTle *self, PyObject *arg)
              {
                jdouble a0;

                if (!parseArg(arg, "D", &a0))
                {
                  OBJ_CALL(self->object.setBTerm(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setBTerm", arg);
                return NULL;
              }

              static PyObject *t_OmmTle_setClassificationType(t_OmmTle *self, PyObject *arg)
              {
                jchar a0;

                if (!parseArg(arg, "C", &a0))
                {
                  OBJ_CALL(self->object.setClassificationType(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setClassificationType", arg);
                return NULL;
              }

              static PyObject *t_OmmTle_setElementSetNo(t_OmmTle *self, PyObject *arg)
              {
                jint a0;

                if (!parseArg(arg, "I", &a0))
                {
                  OBJ_CALL(self->object.setElementSetNo(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setElementSetNo", arg);
                return NULL;
              }

              static PyObject *t_OmmTle_setEphemerisType(t_OmmTle *self, PyObject *arg)
              {
                jint a0;

                if (!parseArg(arg, "I", &a0))
                {
                  OBJ_CALL(self->object.setEphemerisType(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setEphemerisType", arg);
                return NULL;
              }

              static PyObject *t_OmmTle_setMeanMotionDot(t_OmmTle *self, PyObject *arg)
              {
                jdouble a0;

                if (!parseArg(arg, "D", &a0))
                {
                  OBJ_CALL(self->object.setMeanMotionDot(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setMeanMotionDot", arg);
                return NULL;
              }

              static PyObject *t_OmmTle_setMeanMotionDotDot(t_OmmTle *self, PyObject *arg)
              {
                jdouble a0;

                if (!parseArg(arg, "D", &a0))
                {
                  OBJ_CALL(self->object.setMeanMotionDotDot(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setMeanMotionDotDot", arg);
                return NULL;
              }

              static PyObject *t_OmmTle_setNoradID(t_OmmTle *self, PyObject *arg)
              {
                jint a0;

                if (!parseArg(arg, "I", &a0))
                {
                  OBJ_CALL(self->object.setNoradID(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setNoradID", arg);
                return NULL;
              }

              static PyObject *t_OmmTle_setRevAtEpoch(t_OmmTle *self, PyObject *arg)
              {
                jint a0;

                if (!parseArg(arg, "I", &a0))
                {
                  OBJ_CALL(self->object.setRevAtEpoch(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setRevAtEpoch", arg);
                return NULL;
              }

              static PyObject *t_OmmTle_validate(t_OmmTle *self, PyObject *args)
              {
                jdouble a0;

                if (!parseArgs(args, "D", &a0))
                {
                  OBJ_CALL(self->object.validate(a0));
                  Py_RETURN_NONE;
                }

                return callSuper(PY_TYPE(OmmTle), (PyObject *) self, "validate", args, 2);
              }

              static PyObject *t_OmmTle_get__aGoM(t_OmmTle *self, void *data)
              {
                jdouble value;
                OBJ_CALL(value = self->object.getAGoM());
                return PyFloat_FromDouble((double) value);
              }
              static int t_OmmTle_set__aGoM(t_OmmTle *self, PyObject *arg, void *data)
              {
                {
                  jdouble value;
                  if (!parseArg(arg, "D", &value))
                  {
                    INT_CALL(self->object.setAGoM(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "aGoM", arg);
                return -1;
              }

              static PyObject *t_OmmTle_get__bStar(t_OmmTle *self, void *data)
              {
                jdouble value;
                OBJ_CALL(value = self->object.getBStar());
                return PyFloat_FromDouble((double) value);
              }
              static int t_OmmTle_set__bStar(t_OmmTle *self, PyObject *arg, void *data)
              {
                {
                  jdouble value;
                  if (!parseArg(arg, "D", &value))
                  {
                    INT_CALL(self->object.setBStar(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "bStar", arg);
                return -1;
              }

              static PyObject *t_OmmTle_get__bTerm(t_OmmTle *self, void *data)
              {
                jdouble value;
                OBJ_CALL(value = self->object.getBTerm());
                return PyFloat_FromDouble((double) value);
              }
              static int t_OmmTle_set__bTerm(t_OmmTle *self, PyObject *arg, void *data)
              {
                {
                  jdouble value;
                  if (!parseArg(arg, "D", &value))
                  {
                    INT_CALL(self->object.setBTerm(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "bTerm", arg);
                return -1;
              }

              static PyObject *t_OmmTle_get__classificationType(t_OmmTle *self, void *data)
              {
                jchar value;
                OBJ_CALL(value = self->object.getClassificationType());
                return c2p(value);
              }
              static int t_OmmTle_set__classificationType(t_OmmTle *self, PyObject *arg, void *data)
              {
                {
                  jchar value;
                  if (!parseArg(arg, "C", &value))
                  {
                    INT_CALL(self->object.setClassificationType(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "classificationType", arg);
                return -1;
              }

              static int t_OmmTle_set__elementSetNo(t_OmmTle *self, PyObject *arg, void *data)
              {
                {
                  jint value;
                  if (!parseArg(arg, "I", &value))
                  {
                    INT_CALL(self->object.setElementSetNo(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "elementSetNo", arg);
                return -1;
              }

              static PyObject *t_OmmTle_get__elementSetNumber(t_OmmTle *self, void *data)
              {
                jint value;
                OBJ_CALL(value = self->object.getElementSetNumber());
                return PyLong_FromLong((long) value);
              }

              static PyObject *t_OmmTle_get__ephemerisType(t_OmmTle *self, void *data)
              {
                jint value;
                OBJ_CALL(value = self->object.getEphemerisType());
                return PyLong_FromLong((long) value);
              }
              static int t_OmmTle_set__ephemerisType(t_OmmTle *self, PyObject *arg, void *data)
              {
                {
                  jint value;
                  if (!parseArg(arg, "I", &value))
                  {
                    INT_CALL(self->object.setEphemerisType(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "ephemerisType", arg);
                return -1;
              }

              static PyObject *t_OmmTle_get__meanMotionDot(t_OmmTle *self, void *data)
              {
                jdouble value;
                OBJ_CALL(value = self->object.getMeanMotionDot());
                return PyFloat_FromDouble((double) value);
              }
              static int t_OmmTle_set__meanMotionDot(t_OmmTle *self, PyObject *arg, void *data)
              {
                {
                  jdouble value;
                  if (!parseArg(arg, "D", &value))
                  {
                    INT_CALL(self->object.setMeanMotionDot(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "meanMotionDot", arg);
                return -1;
              }

              static PyObject *t_OmmTle_get__meanMotionDotDot(t_OmmTle *self, void *data)
              {
                jdouble value;
                OBJ_CALL(value = self->object.getMeanMotionDotDot());
                return PyFloat_FromDouble((double) value);
              }
              static int t_OmmTle_set__meanMotionDotDot(t_OmmTle *self, PyObject *arg, void *data)
              {
                {
                  jdouble value;
                  if (!parseArg(arg, "D", &value))
                  {
                    INT_CALL(self->object.setMeanMotionDotDot(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "meanMotionDotDot", arg);
                return -1;
              }

              static PyObject *t_OmmTle_get__noradID(t_OmmTle *self, void *data)
              {
                jint value;
                OBJ_CALL(value = self->object.getNoradID());
                return PyLong_FromLong((long) value);
              }
              static int t_OmmTle_set__noradID(t_OmmTle *self, PyObject *arg, void *data)
              {
                {
                  jint value;
                  if (!parseArg(arg, "I", &value))
                  {
                    INT_CALL(self->object.setNoradID(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "noradID", arg);
                return -1;
              }

              static PyObject *t_OmmTle_get__revAtEpoch(t_OmmTle *self, void *data)
              {
                jint value;
                OBJ_CALL(value = self->object.getRevAtEpoch());
                return PyLong_FromLong((long) value);
              }
              static int t_OmmTle_set__revAtEpoch(t_OmmTle *self, PyObject *arg, void *data)
              {
                {
                  jint value;
                  if (!parseArg(arg, "I", &value))
                  {
                    INT_CALL(self->object.setRevAtEpoch(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "revAtEpoch", arg);
                return -1;
              }
            }
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/orbits/PositionAngleType.h"
#include "org/orekit/orbits/PositionAngleType.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace orbits {

      ::java::lang::Class *PositionAngleType::class$ = NULL;
      jmethodID *PositionAngleType::mids$ = NULL;
      bool PositionAngleType::live$ = false;
      PositionAngleType *PositionAngleType::ECCENTRIC = NULL;
      PositionAngleType *PositionAngleType::MEAN = NULL;
      PositionAngleType *PositionAngleType::TRUE = NULL;

      jclass PositionAngleType::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/orbits/PositionAngleType");

          mids$ = new jmethodID[max_mid];
          mids$[mid_valueOf_095278a04a4b5edf] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/orbits/PositionAngleType;");
          mids$[mid_values_4d2487389e53dd3a] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/orbits/PositionAngleType;");

          class$ = new ::java::lang::Class(cls);
          cls = (jclass) class$->this$;

          ECCENTRIC = new PositionAngleType(env->getStaticObjectField(cls, "ECCENTRIC", "Lorg/orekit/orbits/PositionAngleType;"));
          MEAN = new PositionAngleType(env->getStaticObjectField(cls, "MEAN", "Lorg/orekit/orbits/PositionAngleType;"));
          TRUE = new PositionAngleType(env->getStaticObjectField(cls, "TRUE", "Lorg/orekit/orbits/PositionAngleType;"));
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      PositionAngleType PositionAngleType::valueOf(const ::java::lang::String & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return PositionAngleType(env->callStaticObjectMethod(cls, mids$[mid_valueOf_095278a04a4b5edf], a0.this$));
      }

      JArray< PositionAngleType > PositionAngleType::values()
      {
        jclass cls = env->getClass(initializeClass);
        return JArray< PositionAngleType >(env->callStaticObjectMethod(cls, mids$[mid_values_4d2487389e53dd3a]));
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace orbits {
      static PyObject *t_PositionAngleType_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_PositionAngleType_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_PositionAngleType_of_(t_PositionAngleType *self, PyObject *args);
      static PyObject *t_PositionAngleType_valueOf(PyTypeObject *type, PyObject *args);
      static PyObject *t_PositionAngleType_values(PyTypeObject *type);
      static PyObject *t_PositionAngleType_get__parameters_(t_PositionAngleType *self, void *data);
      static PyGetSetDef t_PositionAngleType__fields_[] = {
        DECLARE_GET_FIELD(t_PositionAngleType, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_PositionAngleType__methods_[] = {
        DECLARE_METHOD(t_PositionAngleType, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PositionAngleType, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PositionAngleType, of_, METH_VARARGS),
        DECLARE_METHOD(t_PositionAngleType, valueOf, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_PositionAngleType, values, METH_NOARGS | METH_CLASS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(PositionAngleType)[] = {
        { Py_tp_methods, t_PositionAngleType__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_PositionAngleType__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(PositionAngleType)[] = {
        &PY_TYPE_DEF(::java::lang::Enum),
        NULL
      };

      DEFINE_TYPE(PositionAngleType, t_PositionAngleType, PositionAngleType);
      PyObject *t_PositionAngleType::wrap_Object(const PositionAngleType& object, PyTypeObject *p0)
      {
        PyObject *obj = t_PositionAngleType::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_PositionAngleType *self = (t_PositionAngleType *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_PositionAngleType::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_PositionAngleType::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_PositionAngleType *self = (t_PositionAngleType *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_PositionAngleType::install(PyObject *module)
      {
        installType(&PY_TYPE(PositionAngleType), &PY_TYPE_DEF(PositionAngleType), module, "PositionAngleType", 0);
      }

      void t_PositionAngleType::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(PositionAngleType), "class_", make_descriptor(PositionAngleType::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PositionAngleType), "wrapfn_", make_descriptor(t_PositionAngleType::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PositionAngleType), "boxfn_", make_descriptor(boxObject));
        env->getClass(PositionAngleType::initializeClass);
        PyObject_SetAttrString((PyObject *) PY_TYPE(PositionAngleType), "ECCENTRIC", make_descriptor(t_PositionAngleType::wrap_Object(*PositionAngleType::ECCENTRIC)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PositionAngleType), "MEAN", make_descriptor(t_PositionAngleType::wrap_Object(*PositionAngleType::MEAN)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PositionAngleType), "TRUE", make_descriptor(t_PositionAngleType::wrap_Object(*PositionAngleType::TRUE)));
      }

      static PyObject *t_PositionAngleType_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, PositionAngleType::initializeClass, 1)))
          return NULL;
        return t_PositionAngleType::wrap_Object(PositionAngleType(((t_PositionAngleType *) arg)->object.this$));
      }
      static PyObject *t_PositionAngleType_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, PositionAngleType::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_PositionAngleType_of_(t_PositionAngleType *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static PyObject *t_PositionAngleType_valueOf(PyTypeObject *type, PyObject *args)
      {
        ::java::lang::String a0((jobject) NULL);
        PositionAngleType result((jobject) NULL);

        if (!parseArgs(args, "s", &a0))
        {
          OBJ_CALL(result = ::org::orekit::orbits::PositionAngleType::valueOf(a0));
          return t_PositionAngleType::wrap_Object(result);
        }

        return callSuper(type, "valueOf", args, 2);
      }

      static PyObject *t_PositionAngleType_values(PyTypeObject *type)
      {
        JArray< PositionAngleType > result((jobject) NULL);
        OBJ_CALL(result = ::org::orekit::orbits::PositionAngleType::values());
        return JArray<jobject>(result.this$).wrap(t_PositionAngleType::wrap_jobject);
      }
      static PyObject *t_PositionAngleType_get__parameters_(t_PositionAngleType *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/analysis/differentiation/GradientField.h"
#include "org/hipparchus/Field.h"
#include "org/hipparchus/analysis/differentiation/GradientField.h"
#include "org/hipparchus/analysis/differentiation/Gradient.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace differentiation {

        ::java::lang::Class *GradientField::class$ = NULL;
        jmethodID *GradientField::mids$ = NULL;
        bool GradientField::live$ = false;

        jclass GradientField::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/differentiation/GradientField");

            mids$ = new jmethodID[max_mid];
            mids$[mid_equals_460c5e2d9d51c6cc] = env->getMethodID(cls, "equals", "(Ljava/lang/Object;)Z");
            mids$[mid_getField_650ef0858157ebd9] = env->getStaticMethodID(cls, "getField", "(I)Lorg/hipparchus/analysis/differentiation/GradientField;");
            mids$[mid_getOne_9ebd7c8cd097159e] = env->getMethodID(cls, "getOne", "()Lorg/hipparchus/analysis/differentiation/Gradient;");
            mids$[mid_getRuntimeClass_1aeb0737a960d371] = env->getMethodID(cls, "getRuntimeClass", "()Ljava/lang/Class;");
            mids$[mid_getZero_9ebd7c8cd097159e] = env->getMethodID(cls, "getZero", "()Lorg/hipparchus/analysis/differentiation/Gradient;");
            mids$[mid_hashCode_55546ef6a647f39b] = env->getMethodID(cls, "hashCode", "()I");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        jboolean GradientField::equals(const ::java::lang::Object & a0) const
        {
          return env->callBooleanMethod(this$, mids$[mid_equals_460c5e2d9d51c6cc], a0.this$);
        }

        GradientField GradientField::getField(jint a0)
        {
          jclass cls = env->getClass(initializeClass);
          return GradientField(env->callStaticObjectMethod(cls, mids$[mid_getField_650ef0858157ebd9], a0));
        }

        ::org::hipparchus::analysis::differentiation::Gradient GradientField::getOne() const
        {
          return ::org::hipparchus::analysis::differentiation::Gradient(env->callObjectMethod(this$, mids$[mid_getOne_9ebd7c8cd097159e]));
        }

        ::java::lang::Class GradientField::getRuntimeClass() const
        {
          return ::java::lang::Class(env->callObjectMethod(this$, mids$[mid_getRuntimeClass_1aeb0737a960d371]));
        }

        ::org::hipparchus::analysis::differentiation::Gradient GradientField::getZero() const
        {
          return ::org::hipparchus::analysis::differentiation::Gradient(env->callObjectMethod(this$, mids$[mid_getZero_9ebd7c8cd097159e]));
        }

        jint GradientField::hashCode() const
        {
          return env->callIntMethod(this$, mids$[mid_hashCode_55546ef6a647f39b]);
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace differentiation {
        static PyObject *t_GradientField_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_GradientField_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_GradientField_equals(t_GradientField *self, PyObject *args);
        static PyObject *t_GradientField_getField(PyTypeObject *type, PyObject *arg);
        static PyObject *t_GradientField_getOne(t_GradientField *self);
        static PyObject *t_GradientField_getRuntimeClass(t_GradientField *self);
        static PyObject *t_GradientField_getZero(t_GradientField *self);
        static PyObject *t_GradientField_hashCode(t_GradientField *self, PyObject *args);
        static PyObject *t_GradientField_get__one(t_GradientField *self, void *data);
        static PyObject *t_GradientField_get__runtimeClass(t_GradientField *self, void *data);
        static PyObject *t_GradientField_get__zero(t_GradientField *self, void *data);
        static PyGetSetDef t_GradientField__fields_[] = {
          DECLARE_GET_FIELD(t_GradientField, one),
          DECLARE_GET_FIELD(t_GradientField, runtimeClass),
          DECLARE_GET_FIELD(t_GradientField, zero),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_GradientField__methods_[] = {
          DECLARE_METHOD(t_GradientField, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_GradientField, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_GradientField, equals, METH_VARARGS),
          DECLARE_METHOD(t_GradientField, getField, METH_O | METH_CLASS),
          DECLARE_METHOD(t_GradientField, getOne, METH_NOARGS),
          DECLARE_METHOD(t_GradientField, getRuntimeClass, METH_NOARGS),
          DECLARE_METHOD(t_GradientField, getZero, METH_NOARGS),
          DECLARE_METHOD(t_GradientField, hashCode, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(GradientField)[] = {
          { Py_tp_methods, t_GradientField__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_GradientField__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(GradientField)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(GradientField, t_GradientField, GradientField);

        void t_GradientField::install(PyObject *module)
        {
          installType(&PY_TYPE(GradientField), &PY_TYPE_DEF(GradientField), module, "GradientField", 0);
        }

        void t_GradientField::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(GradientField), "class_", make_descriptor(GradientField::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(GradientField), "wrapfn_", make_descriptor(t_GradientField::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(GradientField), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_GradientField_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, GradientField::initializeClass, 1)))
            return NULL;
          return t_GradientField::wrap_Object(GradientField(((t_GradientField *) arg)->object.this$));
        }
        static PyObject *t_GradientField_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, GradientField::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_GradientField_equals(t_GradientField *self, PyObject *args)
        {
          ::java::lang::Object a0((jobject) NULL);
          jboolean result;

          if (!parseArgs(args, "o", &a0))
          {
            OBJ_CALL(result = self->object.equals(a0));
            Py_RETURN_BOOL(result);
          }

          return callSuper(PY_TYPE(GradientField), (PyObject *) self, "equals", args, 2);
        }

        static PyObject *t_GradientField_getField(PyTypeObject *type, PyObject *arg)
        {
          jint a0;
          GradientField result((jobject) NULL);

          if (!parseArg(arg, "I", &a0))
          {
            OBJ_CALL(result = ::org::hipparchus::analysis::differentiation::GradientField::getField(a0));
            return t_GradientField::wrap_Object(result);
          }

          PyErr_SetArgsError(type, "getField", arg);
          return NULL;
        }

        static PyObject *t_GradientField_getOne(t_GradientField *self)
        {
          ::org::hipparchus::analysis::differentiation::Gradient result((jobject) NULL);
          OBJ_CALL(result = self->object.getOne());
          return ::org::hipparchus::analysis::differentiation::t_Gradient::wrap_Object(result);
        }

        static PyObject *t_GradientField_getRuntimeClass(t_GradientField *self)
        {
          ::java::lang::Class result((jobject) NULL);
          OBJ_CALL(result = self->object.getRuntimeClass());
          return ::java::lang::t_Class::wrap_Object(result, ::org::hipparchus::analysis::differentiation::PY_TYPE(Gradient));
        }

        static PyObject *t_GradientField_getZero(t_GradientField *self)
        {
          ::org::hipparchus::analysis::differentiation::Gradient result((jobject) NULL);
          OBJ_CALL(result = self->object.getZero());
          return ::org::hipparchus::analysis::differentiation::t_Gradient::wrap_Object(result);
        }

        static PyObject *t_GradientField_hashCode(t_GradientField *self, PyObject *args)
        {
          jint result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.hashCode());
            return PyLong_FromLong((long) result);
          }

          return callSuper(PY_TYPE(GradientField), (PyObject *) self, "hashCode", args, 2);
        }

        static PyObject *t_GradientField_get__one(t_GradientField *self, void *data)
        {
          ::org::hipparchus::analysis::differentiation::Gradient value((jobject) NULL);
          OBJ_CALL(value = self->object.getOne());
          return ::org::hipparchus::analysis::differentiation::t_Gradient::wrap_Object(value);
        }

        static PyObject *t_GradientField_get__runtimeClass(t_GradientField *self, void *data)
        {
          ::java::lang::Class value((jobject) NULL);
          OBJ_CALL(value = self->object.getRuntimeClass());
          return ::java::lang::t_Class::wrap_Object(value);
        }

        static PyObject *t_GradientField_get__zero(t_GradientField *self, void *data)
        {
          ::org::hipparchus::analysis::differentiation::Gradient value((jobject) NULL);
          OBJ_CALL(value = self->object.getZero());
          return ::org::hipparchus::analysis::differentiation::t_Gradient::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/forces/maneuvers/jacobians/TriggerDate.h"
#include "org/orekit/propagation/AdditionalStateProvider.h"
#include "org/orekit/forces/maneuvers/Maneuver.h"
#include "org/orekit/forces/maneuvers/trigger/ManeuverTriggersResetter.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "java/lang/Class.h"
#include "org/orekit/forces/maneuvers/jacobians/MassDepletionDelay.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace forces {
      namespace maneuvers {
        namespace jacobians {

          ::java::lang::Class *TriggerDate::class$ = NULL;
          jmethodID *TriggerDate::mids$ = NULL;
          bool TriggerDate::live$ = false;

          jclass TriggerDate::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/forces/maneuvers/jacobians/TriggerDate");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_5e483594d266cbbc] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;Ljava/lang/String;ZLorg/orekit/forces/maneuvers/Maneuver;D)V");
              mids$[mid_getAdditionalState_f227e5f48720b798] = env->getMethodID(cls, "getAdditionalState", "(Lorg/orekit/propagation/SpacecraftState;)[D");
              mids$[mid_getMassDepletionDelay_317d678e51746add] = env->getMethodID(cls, "getMassDepletionDelay", "()Lorg/orekit/forces/maneuvers/jacobians/MassDepletionDelay;");
              mids$[mid_getName_1c1fa1e935d6cdcf] = env->getMethodID(cls, "getName", "()Ljava/lang/String;");
              mids$[mid_init_2d7f9a496c7e9781] = env->getMethodID(cls, "init", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/time/AbsoluteDate;)V");
              mids$[mid_maneuverTriggered_1c47c97cdbc7e206] = env->getMethodID(cls, "maneuverTriggered", "(Lorg/orekit/propagation/SpacecraftState;Z)V");
              mids$[mid_resetState_c3c52b1257139045] = env->getMethodID(cls, "resetState", "(Lorg/orekit/propagation/SpacecraftState;)Lorg/orekit/propagation/SpacecraftState;");
              mids$[mid_yields_97df9017614a1945] = env->getMethodID(cls, "yields", "(Lorg/orekit/propagation/SpacecraftState;)Z");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          TriggerDate::TriggerDate(const ::java::lang::String & a0, const ::java::lang::String & a1, jboolean a2, const ::org::orekit::forces::maneuvers::Maneuver & a3, jdouble a4) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_5e483594d266cbbc, a0.this$, a1.this$, a2, a3.this$, a4)) {}

          JArray< jdouble > TriggerDate::getAdditionalState(const ::org::orekit::propagation::SpacecraftState & a0) const
          {
            return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getAdditionalState_f227e5f48720b798], a0.this$));
          }

          ::org::orekit::forces::maneuvers::jacobians::MassDepletionDelay TriggerDate::getMassDepletionDelay() const
          {
            return ::org::orekit::forces::maneuvers::jacobians::MassDepletionDelay(env->callObjectMethod(this$, mids$[mid_getMassDepletionDelay_317d678e51746add]));
          }

          ::java::lang::String TriggerDate::getName() const
          {
            return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getName_1c1fa1e935d6cdcf]));
          }

          void TriggerDate::init(const ::org::orekit::propagation::SpacecraftState & a0, const ::org::orekit::time::AbsoluteDate & a1) const
          {
            env->callVoidMethod(this$, mids$[mid_init_2d7f9a496c7e9781], a0.this$, a1.this$);
          }

          void TriggerDate::maneuverTriggered(const ::org::orekit::propagation::SpacecraftState & a0, jboolean a1) const
          {
            env->callVoidMethod(this$, mids$[mid_maneuverTriggered_1c47c97cdbc7e206], a0.this$, a1);
          }

          ::org::orekit::propagation::SpacecraftState TriggerDate::resetState(const ::org::orekit::propagation::SpacecraftState & a0) const
          {
            return ::org::orekit::propagation::SpacecraftState(env->callObjectMethod(this$, mids$[mid_resetState_c3c52b1257139045], a0.this$));
          }

          jboolean TriggerDate::yields(const ::org::orekit::propagation::SpacecraftState & a0) const
          {
            return env->callBooleanMethod(this$, mids$[mid_yields_97df9017614a1945], a0.this$);
          }
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace forces {
      namespace maneuvers {
        namespace jacobians {
          static PyObject *t_TriggerDate_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_TriggerDate_instance_(PyTypeObject *type, PyObject *arg);
          static int t_TriggerDate_init_(t_TriggerDate *self, PyObject *args, PyObject *kwds);
          static PyObject *t_TriggerDate_getAdditionalState(t_TriggerDate *self, PyObject *arg);
          static PyObject *t_TriggerDate_getMassDepletionDelay(t_TriggerDate *self);
          static PyObject *t_TriggerDate_getName(t_TriggerDate *self);
          static PyObject *t_TriggerDate_init(t_TriggerDate *self, PyObject *args);
          static PyObject *t_TriggerDate_maneuverTriggered(t_TriggerDate *self, PyObject *args);
          static PyObject *t_TriggerDate_resetState(t_TriggerDate *self, PyObject *arg);
          static PyObject *t_TriggerDate_yields(t_TriggerDate *self, PyObject *arg);
          static PyObject *t_TriggerDate_get__massDepletionDelay(t_TriggerDate *self, void *data);
          static PyObject *t_TriggerDate_get__name(t_TriggerDate *self, void *data);
          static PyGetSetDef t_TriggerDate__fields_[] = {
            DECLARE_GET_FIELD(t_TriggerDate, massDepletionDelay),
            DECLARE_GET_FIELD(t_TriggerDate, name),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_TriggerDate__methods_[] = {
            DECLARE_METHOD(t_TriggerDate, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_TriggerDate, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_TriggerDate, getAdditionalState, METH_O),
            DECLARE_METHOD(t_TriggerDate, getMassDepletionDelay, METH_NOARGS),
            DECLARE_METHOD(t_TriggerDate, getName, METH_NOARGS),
            DECLARE_METHOD(t_TriggerDate, init, METH_VARARGS),
            DECLARE_METHOD(t_TriggerDate, maneuverTriggered, METH_VARARGS),
            DECLARE_METHOD(t_TriggerDate, resetState, METH_O),
            DECLARE_METHOD(t_TriggerDate, yields, METH_O),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(TriggerDate)[] = {
            { Py_tp_methods, t_TriggerDate__methods_ },
            { Py_tp_init, (void *) t_TriggerDate_init_ },
            { Py_tp_getset, t_TriggerDate__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(TriggerDate)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(TriggerDate, t_TriggerDate, TriggerDate);

          void t_TriggerDate::install(PyObject *module)
          {
            installType(&PY_TYPE(TriggerDate), &PY_TYPE_DEF(TriggerDate), module, "TriggerDate", 0);
          }

          void t_TriggerDate::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(TriggerDate), "class_", make_descriptor(TriggerDate::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(TriggerDate), "wrapfn_", make_descriptor(t_TriggerDate::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(TriggerDate), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_TriggerDate_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, TriggerDate::initializeClass, 1)))
              return NULL;
            return t_TriggerDate::wrap_Object(TriggerDate(((t_TriggerDate *) arg)->object.this$));
          }
          static PyObject *t_TriggerDate_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, TriggerDate::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_TriggerDate_init_(t_TriggerDate *self, PyObject *args, PyObject *kwds)
          {
            ::java::lang::String a0((jobject) NULL);
            ::java::lang::String a1((jobject) NULL);
            jboolean a2;
            ::org::orekit::forces::maneuvers::Maneuver a3((jobject) NULL);
            jdouble a4;
            TriggerDate object((jobject) NULL);

            if (!parseArgs(args, "ssZkD", ::org::orekit::forces::maneuvers::Maneuver::initializeClass, &a0, &a1, &a2, &a3, &a4))
            {
              INT_CALL(object = TriggerDate(a0, a1, a2, a3, a4));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_TriggerDate_getAdditionalState(t_TriggerDate *self, PyObject *arg)
          {
            ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
            JArray< jdouble > result((jobject) NULL);

            if (!parseArg(arg, "k", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.getAdditionalState(a0));
              return result.wrap();
            }

            PyErr_SetArgsError((PyObject *) self, "getAdditionalState", arg);
            return NULL;
          }

          static PyObject *t_TriggerDate_getMassDepletionDelay(t_TriggerDate *self)
          {
            ::org::orekit::forces::maneuvers::jacobians::MassDepletionDelay result((jobject) NULL);
            OBJ_CALL(result = self->object.getMassDepletionDelay());
            return ::org::orekit::forces::maneuvers::jacobians::t_MassDepletionDelay::wrap_Object(result);
          }

          static PyObject *t_TriggerDate_getName(t_TriggerDate *self)
          {
            ::java::lang::String result((jobject) NULL);
            OBJ_CALL(result = self->object.getName());
            return j2p(result);
          }

          static PyObject *t_TriggerDate_init(t_TriggerDate *self, PyObject *args)
          {
            ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
            ::org::orekit::time::AbsoluteDate a1((jobject) NULL);

            if (!parseArgs(args, "kk", ::org::orekit::propagation::SpacecraftState::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1))
            {
              OBJ_CALL(self->object.init(a0, a1));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "init", args);
            return NULL;
          }

          static PyObject *t_TriggerDate_maneuverTriggered(t_TriggerDate *self, PyObject *args)
          {
            ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
            jboolean a1;

            if (!parseArgs(args, "kZ", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0, &a1))
            {
              OBJ_CALL(self->object.maneuverTriggered(a0, a1));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "maneuverTriggered", args);
            return NULL;
          }

          static PyObject *t_TriggerDate_resetState(t_TriggerDate *self, PyObject *arg)
          {
            ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
            ::org::orekit::propagation::SpacecraftState result((jobject) NULL);

            if (!parseArg(arg, "k", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.resetState(a0));
              return ::org::orekit::propagation::t_SpacecraftState::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "resetState", arg);
            return NULL;
          }

          static PyObject *t_TriggerDate_yields(t_TriggerDate *self, PyObject *arg)
          {
            ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
            jboolean result;

            if (!parseArg(arg, "k", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.yields(a0));
              Py_RETURN_BOOL(result);
            }

            PyErr_SetArgsError((PyObject *) self, "yields", arg);
            return NULL;
          }

          static PyObject *t_TriggerDate_get__massDepletionDelay(t_TriggerDate *self, void *data)
          {
            ::org::orekit::forces::maneuvers::jacobians::MassDepletionDelay value((jobject) NULL);
            OBJ_CALL(value = self->object.getMassDepletionDelay());
            return ::org::orekit::forces::maneuvers::jacobians::t_MassDepletionDelay::wrap_Object(value);
          }

          static PyObject *t_TriggerDate_get__name(t_TriggerDate *self, void *data)
          {
            ::java::lang::String value((jobject) NULL);
            OBJ_CALL(value = self->object.getName());
            return j2p(value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/sampling/OrekitStepHandler.h"
#include "org/orekit/propagation/sampling/OrekitStepInterpolator.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "java/lang/Class.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace sampling {

        ::java::lang::Class *OrekitStepHandler::class$ = NULL;
        jmethodID *OrekitStepHandler::mids$ = NULL;
        bool OrekitStepHandler::live$ = false;

        jclass OrekitStepHandler::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/sampling/OrekitStepHandler");

            mids$ = new jmethodID[max_mid];
            mids$[mid_finish_280c3390961e0a50] = env->getMethodID(cls, "finish", "(Lorg/orekit/propagation/SpacecraftState;)V");
            mids$[mid_handleStep_13c351c10f00bcd7] = env->getMethodID(cls, "handleStep", "(Lorg/orekit/propagation/sampling/OrekitStepInterpolator;)V");
            mids$[mid_init_2d7f9a496c7e9781] = env->getMethodID(cls, "init", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/time/AbsoluteDate;)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        void OrekitStepHandler::finish(const ::org::orekit::propagation::SpacecraftState & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_finish_280c3390961e0a50], a0.this$);
        }

        void OrekitStepHandler::handleStep(const ::org::orekit::propagation::sampling::OrekitStepInterpolator & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_handleStep_13c351c10f00bcd7], a0.this$);
        }

        void OrekitStepHandler::init(const ::org::orekit::propagation::SpacecraftState & a0, const ::org::orekit::time::AbsoluteDate & a1) const
        {
          env->callVoidMethod(this$, mids$[mid_init_2d7f9a496c7e9781], a0.this$, a1.this$);
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace sampling {
        static PyObject *t_OrekitStepHandler_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_OrekitStepHandler_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_OrekitStepHandler_finish(t_OrekitStepHandler *self, PyObject *arg);
        static PyObject *t_OrekitStepHandler_handleStep(t_OrekitStepHandler *self, PyObject *arg);
        static PyObject *t_OrekitStepHandler_init(t_OrekitStepHandler *self, PyObject *args);

        static PyMethodDef t_OrekitStepHandler__methods_[] = {
          DECLARE_METHOD(t_OrekitStepHandler, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_OrekitStepHandler, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_OrekitStepHandler, finish, METH_O),
          DECLARE_METHOD(t_OrekitStepHandler, handleStep, METH_O),
          DECLARE_METHOD(t_OrekitStepHandler, init, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(OrekitStepHandler)[] = {
          { Py_tp_methods, t_OrekitStepHandler__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(OrekitStepHandler)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(OrekitStepHandler, t_OrekitStepHandler, OrekitStepHandler);

        void t_OrekitStepHandler::install(PyObject *module)
        {
          installType(&PY_TYPE(OrekitStepHandler), &PY_TYPE_DEF(OrekitStepHandler), module, "OrekitStepHandler", 0);
        }

        void t_OrekitStepHandler::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitStepHandler), "class_", make_descriptor(OrekitStepHandler::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitStepHandler), "wrapfn_", make_descriptor(t_OrekitStepHandler::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitStepHandler), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_OrekitStepHandler_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, OrekitStepHandler::initializeClass, 1)))
            return NULL;
          return t_OrekitStepHandler::wrap_Object(OrekitStepHandler(((t_OrekitStepHandler *) arg)->object.this$));
        }
        static PyObject *t_OrekitStepHandler_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, OrekitStepHandler::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_OrekitStepHandler_finish(t_OrekitStepHandler *self, PyObject *arg)
        {
          ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);

          if (!parseArg(arg, "k", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0))
          {
            OBJ_CALL(self->object.finish(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "finish", arg);
          return NULL;
        }

        static PyObject *t_OrekitStepHandler_handleStep(t_OrekitStepHandler *self, PyObject *arg)
        {
          ::org::orekit::propagation::sampling::OrekitStepInterpolator a0((jobject) NULL);

          if (!parseArg(arg, "k", ::org::orekit::propagation::sampling::OrekitStepInterpolator::initializeClass, &a0))
          {
            OBJ_CALL(self->object.handleStep(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "handleStep", arg);
          return NULL;
        }

        static PyObject *t_OrekitStepHandler_init(t_OrekitStepHandler *self, PyObject *args)
        {
          ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
          ::org::orekit::time::AbsoluteDate a1((jobject) NULL);

          if (!parseArgs(args, "kk", ::org::orekit::propagation::SpacecraftState::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1))
          {
            OBJ_CALL(self->object.init(a0, a1));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "init", args);
          return NULL;
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/stat/descriptive/UnivariateStatistic.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "org/hipparchus/stat/descriptive/UnivariateStatistic.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace stat {
      namespace descriptive {

        ::java::lang::Class *UnivariateStatistic::class$ = NULL;
        jmethodID *UnivariateStatistic::mids$ = NULL;
        bool UnivariateStatistic::live$ = false;

        jclass UnivariateStatistic::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/stat/descriptive/UnivariateStatistic");

            mids$ = new jmethodID[max_mid];
            mids$[mid_copy_04f2e677f90ab735] = env->getMethodID(cls, "copy", "()Lorg/hipparchus/stat/descriptive/UnivariateStatistic;");
            mids$[mid_evaluate_b060e4326765ccf1] = env->getMethodID(cls, "evaluate", "([D)D");
            mids$[mid_evaluate_1567a80062adb31b] = env->getMethodID(cls, "evaluate", "([DII)D");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        UnivariateStatistic UnivariateStatistic::copy() const
        {
          return UnivariateStatistic(env->callObjectMethod(this$, mids$[mid_copy_04f2e677f90ab735]));
        }

        jdouble UnivariateStatistic::evaluate(const JArray< jdouble > & a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_evaluate_b060e4326765ccf1], a0.this$);
        }

        jdouble UnivariateStatistic::evaluate(const JArray< jdouble > & a0, jint a1, jint a2) const
        {
          return env->callDoubleMethod(this$, mids$[mid_evaluate_1567a80062adb31b], a0.this$, a1, a2);
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace hipparchus {
    namespace stat {
      namespace descriptive {
        static PyObject *t_UnivariateStatistic_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_UnivariateStatistic_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_UnivariateStatistic_copy(t_UnivariateStatistic *self);
        static PyObject *t_UnivariateStatistic_evaluate(t_UnivariateStatistic *self, PyObject *args);

        static PyMethodDef t_UnivariateStatistic__methods_[] = {
          DECLARE_METHOD(t_UnivariateStatistic, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_UnivariateStatistic, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_UnivariateStatistic, copy, METH_NOARGS),
          DECLARE_METHOD(t_UnivariateStatistic, evaluate, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(UnivariateStatistic)[] = {
          { Py_tp_methods, t_UnivariateStatistic__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(UnivariateStatistic)[] = {
          &PY_TYPE_DEF(::org::hipparchus::util::MathArrays$Function),
          NULL
        };

        DEFINE_TYPE(UnivariateStatistic, t_UnivariateStatistic, UnivariateStatistic);

        void t_UnivariateStatistic::install(PyObject *module)
        {
          installType(&PY_TYPE(UnivariateStatistic), &PY_TYPE_DEF(UnivariateStatistic), module, "UnivariateStatistic", 0);
        }

        void t_UnivariateStatistic::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(UnivariateStatistic), "class_", make_descriptor(UnivariateStatistic::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(UnivariateStatistic), "wrapfn_", make_descriptor(t_UnivariateStatistic::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(UnivariateStatistic), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_UnivariateStatistic_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, UnivariateStatistic::initializeClass, 1)))
            return NULL;
          return t_UnivariateStatistic::wrap_Object(UnivariateStatistic(((t_UnivariateStatistic *) arg)->object.this$));
        }
        static PyObject *t_UnivariateStatistic_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, UnivariateStatistic::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_UnivariateStatistic_copy(t_UnivariateStatistic *self)
        {
          UnivariateStatistic result((jobject) NULL);
          OBJ_CALL(result = self->object.copy());
          return t_UnivariateStatistic::wrap_Object(result);
        }

        static PyObject *t_UnivariateStatistic_evaluate(t_UnivariateStatistic *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              JArray< jdouble > a0((jobject) NULL);
              jdouble result;

              if (!parseArgs(args, "[D", &a0))
              {
                OBJ_CALL(result = self->object.evaluate(a0));
                return PyFloat_FromDouble((double) result);
              }
            }
            break;
           case 3:
            {
              JArray< jdouble > a0((jobject) NULL);
              jint a1;
              jint a2;
              jdouble result;

              if (!parseArgs(args, "[DII", &a0, &a1, &a2))
              {
                OBJ_CALL(result = self->object.evaluate(a0, a1, a2));
                return PyFloat_FromDouble((double) result);
              }
            }
          }

          return callSuper(PY_TYPE(UnivariateStatistic), (PyObject *) self, "evaluate", args, 2);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/analysis/function/Sin.h"
#include "org/hipparchus/analysis/differentiation/UnivariateDifferentiableFunction.h"
#include "org/hipparchus/analysis/differentiation/Derivative.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace function {

        ::java::lang::Class *Sin::class$ = NULL;
        jmethodID *Sin::mids$ = NULL;
        bool Sin::live$ = false;

        jclass Sin::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/function/Sin");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_a1fa5dae97ea5ed2] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_value_04fd0666b613d2ab] = env->getMethodID(cls, "value", "(D)D");
            mids$[mid_value_a5332de4d4d64b08] = env->getMethodID(cls, "value", "(Lorg/hipparchus/analysis/differentiation/Derivative;)Lorg/hipparchus/analysis/differentiation/Derivative;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        Sin::Sin() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_a1fa5dae97ea5ed2)) {}

        jdouble Sin::value(jdouble a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_value_04fd0666b613d2ab], a0);
        }

        ::org::hipparchus::analysis::differentiation::Derivative Sin::value(const ::org::hipparchus::analysis::differentiation::Derivative & a0) const
        {
          return ::org::hipparchus::analysis::differentiation::Derivative(env->callObjectMethod(this$, mids$[mid_value_a5332de4d4d64b08], a0.this$));
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace function {
        static PyObject *t_Sin_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_Sin_instance_(PyTypeObject *type, PyObject *arg);
        static int t_Sin_init_(t_Sin *self, PyObject *args, PyObject *kwds);
        static PyObject *t_Sin_value(t_Sin *self, PyObject *args);

        static PyMethodDef t_Sin__methods_[] = {
          DECLARE_METHOD(t_Sin, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Sin, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Sin, value, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(Sin)[] = {
          { Py_tp_methods, t_Sin__methods_ },
          { Py_tp_init, (void *) t_Sin_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(Sin)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(Sin, t_Sin, Sin);

        void t_Sin::install(PyObject *module)
        {
          installType(&PY_TYPE(Sin), &PY_TYPE_DEF(Sin), module, "Sin", 0);
        }

        void t_Sin::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(Sin), "class_", make_descriptor(Sin::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Sin), "wrapfn_", make_descriptor(t_Sin::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Sin), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_Sin_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, Sin::initializeClass, 1)))
            return NULL;
          return t_Sin::wrap_Object(Sin(((t_Sin *) arg)->object.this$));
        }
        static PyObject *t_Sin_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, Sin::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_Sin_init_(t_Sin *self, PyObject *args, PyObject *kwds)
        {
          Sin object((jobject) NULL);

          INT_CALL(object = Sin());
          self->object = object;

          return 0;
        }

        static PyObject *t_Sin_value(t_Sin *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              jdouble a0;
              jdouble result;

              if (!parseArgs(args, "D", &a0))
              {
                OBJ_CALL(result = self->object.value(a0));
                return PyFloat_FromDouble((double) result);
              }
            }
            {
              ::org::hipparchus::analysis::differentiation::Derivative a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::hipparchus::analysis::differentiation::Derivative result((jobject) NULL);

              if (!parseArgs(args, "K", ::org::hipparchus::analysis::differentiation::Derivative::initializeClass, &a0, &p0, ::org::hipparchus::analysis::differentiation::t_Derivative::parameters_))
              {
                OBJ_CALL(result = self->object.value(a0));
                return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::analysis::differentiation::t_Derivative::wrap_Object(result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "value", args);
          return NULL;
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/measurements/modifiers/PythonParametricModelEffectGradient.h"
#include "java/lang/Throwable.h"
#include "org/orekit/estimation/measurements/GroundStation.h"
#include "org/hipparchus/analysis/differentiation/Gradient.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace modifiers {

          ::java::lang::Class *PythonParametricModelEffectGradient::class$ = NULL;
          jmethodID *PythonParametricModelEffectGradient::mids$ = NULL;
          bool PythonParametricModelEffectGradient::live$ = false;

          jclass PythonParametricModelEffectGradient::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/modifiers/PythonParametricModelEffectGradient");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_a1fa5dae97ea5ed2] = env->getMethodID(cls, "<init>", "()V");
              mids$[mid_evaluate_5f24ed772b01edad] = env->getMethodID(cls, "evaluate", "(Lorg/orekit/estimation/measurements/GroundStation;Lorg/orekit/propagation/FieldSpacecraftState;[Lorg/hipparchus/analysis/differentiation/Gradient;)Lorg/hipparchus/analysis/differentiation/Gradient;");
              mids$[mid_finalize_a1fa5dae97ea5ed2] = env->getMethodID(cls, "finalize", "()V");
              mids$[mid_pythonDecRef_a1fa5dae97ea5ed2] = env->getMethodID(cls, "pythonDecRef", "()V");
              mids$[mid_pythonExtension_6c0ce7e438e5ded4] = env->getMethodID(cls, "pythonExtension", "()J");
              mids$[mid_pythonExtension_3d7dd2314a0dd456] = env->getMethodID(cls, "pythonExtension", "(J)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          PythonParametricModelEffectGradient::PythonParametricModelEffectGradient() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_a1fa5dae97ea5ed2)) {}

          void PythonParametricModelEffectGradient::finalize() const
          {
            env->callVoidMethod(this$, mids$[mid_finalize_a1fa5dae97ea5ed2]);
          }

          jlong PythonParametricModelEffectGradient::pythonExtension() const
          {
            return env->callLongMethod(this$, mids$[mid_pythonExtension_6c0ce7e438e5ded4]);
          }

          void PythonParametricModelEffectGradient::pythonExtension(jlong a0) const
          {
            env->callVoidMethod(this$, mids$[mid_pythonExtension_3d7dd2314a0dd456], a0);
          }
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace modifiers {
          static PyObject *t_PythonParametricModelEffectGradient_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_PythonParametricModelEffectGradient_instance_(PyTypeObject *type, PyObject *arg);
          static int t_PythonParametricModelEffectGradient_init_(t_PythonParametricModelEffectGradient *self, PyObject *args, PyObject *kwds);
          static PyObject *t_PythonParametricModelEffectGradient_finalize(t_PythonParametricModelEffectGradient *self);
          static PyObject *t_PythonParametricModelEffectGradient_pythonExtension(t_PythonParametricModelEffectGradient *self, PyObject *args);
          static jobject JNICALL t_PythonParametricModelEffectGradient_evaluate0(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jobject a2);
          static void JNICALL t_PythonParametricModelEffectGradient_pythonDecRef1(JNIEnv *jenv, jobject jobj);
          static PyObject *t_PythonParametricModelEffectGradient_get__self(t_PythonParametricModelEffectGradient *self, void *data);
          static PyGetSetDef t_PythonParametricModelEffectGradient__fields_[] = {
            DECLARE_GET_FIELD(t_PythonParametricModelEffectGradient, self),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_PythonParametricModelEffectGradient__methods_[] = {
            DECLARE_METHOD(t_PythonParametricModelEffectGradient, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PythonParametricModelEffectGradient, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PythonParametricModelEffectGradient, finalize, METH_NOARGS),
            DECLARE_METHOD(t_PythonParametricModelEffectGradient, pythonExtension, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(PythonParametricModelEffectGradient)[] = {
            { Py_tp_methods, t_PythonParametricModelEffectGradient__methods_ },
            { Py_tp_init, (void *) t_PythonParametricModelEffectGradient_init_ },
            { Py_tp_getset, t_PythonParametricModelEffectGradient__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(PythonParametricModelEffectGradient)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(PythonParametricModelEffectGradient, t_PythonParametricModelEffectGradient, PythonParametricModelEffectGradient);

          void t_PythonParametricModelEffectGradient::install(PyObject *module)
          {
            installType(&PY_TYPE(PythonParametricModelEffectGradient), &PY_TYPE_DEF(PythonParametricModelEffectGradient), module, "PythonParametricModelEffectGradient", 1);
          }

          void t_PythonParametricModelEffectGradient::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonParametricModelEffectGradient), "class_", make_descriptor(PythonParametricModelEffectGradient::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonParametricModelEffectGradient), "wrapfn_", make_descriptor(t_PythonParametricModelEffectGradient::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonParametricModelEffectGradient), "boxfn_", make_descriptor(boxObject));
            jclass cls = env->getClass(PythonParametricModelEffectGradient::initializeClass);
            JNINativeMethod methods[] = {
              { "evaluate", "(Lorg/orekit/estimation/measurements/GroundStation;Lorg/orekit/propagation/FieldSpacecraftState;[Lorg/hipparchus/analysis/differentiation/Gradient;)Lorg/hipparchus/analysis/differentiation/Gradient;", (void *) t_PythonParametricModelEffectGradient_evaluate0 },
              { "pythonDecRef", "()V", (void *) t_PythonParametricModelEffectGradient_pythonDecRef1 },
            };
            env->registerNatives(cls, methods, 2);
          }

          static PyObject *t_PythonParametricModelEffectGradient_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, PythonParametricModelEffectGradient::initializeClass, 1)))
              return NULL;
            return t_PythonParametricModelEffectGradient::wrap_Object(PythonParametricModelEffectGradient(((t_PythonParametricModelEffectGradient *) arg)->object.this$));
          }
          static PyObject *t_PythonParametricModelEffectGradient_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, PythonParametricModelEffectGradient::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_PythonParametricModelEffectGradient_init_(t_PythonParametricModelEffectGradient *self, PyObject *args, PyObject *kwds)
          {
            PythonParametricModelEffectGradient object((jobject) NULL);

            INT_CALL(object = PythonParametricModelEffectGradient());
            self->object = object;

            Py_INCREF((PyObject *) self);
            self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

            return 0;
          }

          static PyObject *t_PythonParametricModelEffectGradient_finalize(t_PythonParametricModelEffectGradient *self)
          {
            OBJ_CALL(self->object.finalize());
            Py_RETURN_NONE;
          }

          static PyObject *t_PythonParametricModelEffectGradient_pythonExtension(t_PythonParametricModelEffectGradient *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 0:
              {
                jlong result;
                OBJ_CALL(result = self->object.pythonExtension());
                return PyLong_FromLongLong((PY_LONG_LONG) result);
              }
              break;
             case 1:
              {
                jlong a0;

                if (!parseArgs(args, "J", &a0))
                {
                  OBJ_CALL(self->object.pythonExtension(a0));
                  Py_RETURN_NONE;
                }
              }
            }

            PyErr_SetArgsError((PyObject *) self, "pythonExtension", args);
            return NULL;
          }

          static jobject JNICALL t_PythonParametricModelEffectGradient_evaluate0(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jobject a2)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonParametricModelEffectGradient::mids$[PythonParametricModelEffectGradient::mid_pythonExtension_6c0ce7e438e5ded4]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            ::org::hipparchus::analysis::differentiation::Gradient value((jobject) NULL);
            PyObject *o0 = ::org::orekit::estimation::measurements::t_GroundStation::wrap_Object(::org::orekit::estimation::measurements::GroundStation(a0));
            PyObject *o1 = ::org::orekit::propagation::t_FieldSpacecraftState::wrap_Object(::org::orekit::propagation::FieldSpacecraftState(a1));
            PyObject *o2 = JArray<jobject>(a2).wrap(::org::hipparchus::analysis::differentiation::t_Gradient::wrap_jobject);
            PyObject *result = PyObject_CallMethod(obj, "evaluate", "OOO", o0, o1, o2);
            Py_DECREF(o0);
            Py_DECREF(o1);
            Py_DECREF(o2);
            if (!result)
              throwPythonError();
            else if (parseArg(result, "k", ::org::hipparchus::analysis::differentiation::Gradient::initializeClass, &value))
            {
              throwTypeError("evaluate", result);
              Py_DECREF(result);
            }
            else
            {
              jobj = jenv->NewLocalRef(value.this$);
              Py_DECREF(result);
              return jobj;
            }

            return (jobject) NULL;
          }

          static void JNICALL t_PythonParametricModelEffectGradient_pythonDecRef1(JNIEnv *jenv, jobject jobj)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonParametricModelEffectGradient::mids$[PythonParametricModelEffectGradient::mid_pythonExtension_6c0ce7e438e5ded4]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

            if (obj != NULL)
            {
              jenv->CallVoidMethod(jobj, PythonParametricModelEffectGradient::mids$[PythonParametricModelEffectGradient::mid_pythonExtension_3d7dd2314a0dd456], (jlong) 0);
              env->finalizeObject(jenv, obj);
            }
          }

          static PyObject *t_PythonParametricModelEffectGradient_get__self(t_PythonParametricModelEffectGradient *self, void *data)
          {
            jlong ptr;
            OBJ_CALL(ptr = self->object.pythonExtension());
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

            if (obj != NULL)
            {
              Py_INCREF(obj);
              return obj;
            }
            else
              Py_RETURN_NONE;
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/data/SimpleTimeStampedTableParser.h"
#include "java/util/List.h"
#include "org/orekit/data/SimpleTimeStampedTableParser$RowConverter.h"
#include "java/io/InputStream.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace data {

      ::java::lang::Class *SimpleTimeStampedTableParser::class$ = NULL;
      jmethodID *SimpleTimeStampedTableParser::mids$ = NULL;
      bool SimpleTimeStampedTableParser::live$ = false;

      jclass SimpleTimeStampedTableParser::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/data/SimpleTimeStampedTableParser");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_5ecbee45ad4075cb] = env->getMethodID(cls, "<init>", "(ILorg/orekit/data/SimpleTimeStampedTableParser$RowConverter;)V");
          mids$[mid_parse_7b8887374449b257] = env->getMethodID(cls, "parse", "(Ljava/io/InputStream;Ljava/lang/String;)Ljava/util/List;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      SimpleTimeStampedTableParser::SimpleTimeStampedTableParser(jint a0, const ::org::orekit::data::SimpleTimeStampedTableParser$RowConverter & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_5ecbee45ad4075cb, a0, a1.this$)) {}

      ::java::util::List SimpleTimeStampedTableParser::parse(const ::java::io::InputStream & a0, const ::java::lang::String & a1) const
      {
        return ::java::util::List(env->callObjectMethod(this$, mids$[mid_parse_7b8887374449b257], a0.this$, a1.this$));
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace data {
      static PyObject *t_SimpleTimeStampedTableParser_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_SimpleTimeStampedTableParser_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_SimpleTimeStampedTableParser_of_(t_SimpleTimeStampedTableParser *self, PyObject *args);
      static int t_SimpleTimeStampedTableParser_init_(t_SimpleTimeStampedTableParser *self, PyObject *args, PyObject *kwds);
      static PyObject *t_SimpleTimeStampedTableParser_parse(t_SimpleTimeStampedTableParser *self, PyObject *args);
      static PyObject *t_SimpleTimeStampedTableParser_get__parameters_(t_SimpleTimeStampedTableParser *self, void *data);
      static PyGetSetDef t_SimpleTimeStampedTableParser__fields_[] = {
        DECLARE_GET_FIELD(t_SimpleTimeStampedTableParser, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_SimpleTimeStampedTableParser__methods_[] = {
        DECLARE_METHOD(t_SimpleTimeStampedTableParser, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_SimpleTimeStampedTableParser, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_SimpleTimeStampedTableParser, of_, METH_VARARGS),
        DECLARE_METHOD(t_SimpleTimeStampedTableParser, parse, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(SimpleTimeStampedTableParser)[] = {
        { Py_tp_methods, t_SimpleTimeStampedTableParser__methods_ },
        { Py_tp_init, (void *) t_SimpleTimeStampedTableParser_init_ },
        { Py_tp_getset, t_SimpleTimeStampedTableParser__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(SimpleTimeStampedTableParser)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(SimpleTimeStampedTableParser, t_SimpleTimeStampedTableParser, SimpleTimeStampedTableParser);
      PyObject *t_SimpleTimeStampedTableParser::wrap_Object(const SimpleTimeStampedTableParser& object, PyTypeObject *p0)
      {
        PyObject *obj = t_SimpleTimeStampedTableParser::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_SimpleTimeStampedTableParser *self = (t_SimpleTimeStampedTableParser *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_SimpleTimeStampedTableParser::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_SimpleTimeStampedTableParser::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_SimpleTimeStampedTableParser *self = (t_SimpleTimeStampedTableParser *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_SimpleTimeStampedTableParser::install(PyObject *module)
      {
        installType(&PY_TYPE(SimpleTimeStampedTableParser), &PY_TYPE_DEF(SimpleTimeStampedTableParser), module, "SimpleTimeStampedTableParser", 0);
        PyObject_SetAttrString((PyObject *) PY_TYPE(SimpleTimeStampedTableParser), "RowConverter", make_descriptor(&PY_TYPE_DEF(SimpleTimeStampedTableParser$RowConverter)));
      }

      void t_SimpleTimeStampedTableParser::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(SimpleTimeStampedTableParser), "class_", make_descriptor(SimpleTimeStampedTableParser::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(SimpleTimeStampedTableParser), "wrapfn_", make_descriptor(t_SimpleTimeStampedTableParser::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(SimpleTimeStampedTableParser), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_SimpleTimeStampedTableParser_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, SimpleTimeStampedTableParser::initializeClass, 1)))
          return NULL;
        return t_SimpleTimeStampedTableParser::wrap_Object(SimpleTimeStampedTableParser(((t_SimpleTimeStampedTableParser *) arg)->object.this$));
      }
      static PyObject *t_SimpleTimeStampedTableParser_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, SimpleTimeStampedTableParser::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_SimpleTimeStampedTableParser_of_(t_SimpleTimeStampedTableParser *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static int t_SimpleTimeStampedTableParser_init_(t_SimpleTimeStampedTableParser *self, PyObject *args, PyObject *kwds)
      {
        jint a0;
        ::org::orekit::data::SimpleTimeStampedTableParser$RowConverter a1((jobject) NULL);
        PyTypeObject **p1;
        SimpleTimeStampedTableParser object((jobject) NULL);

        if (!parseArgs(args, "IK", ::org::orekit::data::SimpleTimeStampedTableParser$RowConverter::initializeClass, &a0, &a1, &p1, ::org::orekit::data::t_SimpleTimeStampedTableParser$RowConverter::parameters_))
        {
          INT_CALL(object = SimpleTimeStampedTableParser(a0, a1));
          self->object = object;
        }
        else
        {
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_SimpleTimeStampedTableParser_parse(t_SimpleTimeStampedTableParser *self, PyObject *args)
      {
        ::java::io::InputStream a0((jobject) NULL);
        ::java::lang::String a1((jobject) NULL);
        ::java::util::List result((jobject) NULL);

        if (!parseArgs(args, "ks", ::java::io::InputStream::initializeClass, &a0, &a1))
        {
          OBJ_CALL(result = self->object.parse(a0, a1));
          return ::java::util::t_List::wrap_Object(result, self->parameters[0]);
        }

        PyErr_SetArgsError((PyObject *) self, "parse", args);
        return NULL;
      }
      static PyObject *t_SimpleTimeStampedTableParser_get__parameters_(t_SimpleTimeStampedTableParser *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/errors/OrekitMessages.h"
#include "java/util/Locale.h"
#include "org/orekit/errors/OrekitMessages.h"
#include "java/lang/Class.h"
#include "org/hipparchus/exception/Localizable.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace errors {

      ::java::lang::Class *OrekitMessages::class$ = NULL;
      jmethodID *OrekitMessages::mids$ = NULL;
      bool OrekitMessages::live$ = false;
      OrekitMessages *OrekitMessages::ADDITIONAL_STATE_NAME_ALREADY_IN_USE = NULL;
      OrekitMessages *OrekitMessages::ALMOST_CRITICALLY_INCLINED_ORBIT = NULL;
      OrekitMessages *OrekitMessages::ALMOST_EQUATORIAL_ORBIT = NULL;
      OrekitMessages *OrekitMessages::ALTITUDE_BELOW_ALLOWED_THRESHOLD = NULL;
      OrekitMessages *OrekitMessages::ANGLE_TYPE_NOT_SUPPORTED = NULL;
      OrekitMessages *OrekitMessages::ATTEMPT_TO_GENERATE_MALFORMED_FILE = NULL;
      OrekitMessages *OrekitMessages::ATTITUDE_POINTING_LAW_DOES_NOT_POINT_TO_GROUND = NULL;
      OrekitMessages *OrekitMessages::CANNOT_CHANGE_COVARIANCE_TYPE_IF_DEFINED_IN_LOF = NULL;
      OrekitMessages *OrekitMessages::CANNOT_CHANGE_COVARIANCE_TYPE_IF_DEFINED_IN_NON_INERTIAL_FRAME = NULL;
      OrekitMessages *OrekitMessages::CANNOT_COMPUTE_AIMING_AT_SINGULAR_POINT = NULL;
      OrekitMessages *OrekitMessages::CANNOT_COMPUTE_LAGRANGIAN = NULL;
      OrekitMessages *OrekitMessages::CANNOT_ESTIMATE_PRECESSION_WITHOUT_PROPER_DERIVATIVES = NULL;
      OrekitMessages *OrekitMessages::CANNOT_FIND_SATELLITE_IN_SYSTEM = NULL;
      OrekitMessages *OrekitMessages::CANNOT_PARSE_BOTH_TAU_AND_GAMMA = NULL;
      OrekitMessages *OrekitMessages::CANNOT_PARSE_GNSS_DATA = NULL;
      OrekitMessages *OrekitMessages::CANNOT_PARSE_SOURCETABLE = NULL;
      OrekitMessages *OrekitMessages::CANNOT_START_PROPAGATION_FROM_INFINITY = NULL;
      OrekitMessages *OrekitMessages::CCSDS_DATE_INVALID_LENGTH_TIME_FIELD = NULL;
      OrekitMessages *OrekitMessages::CCSDS_DATE_INVALID_PREAMBLE_FIELD = NULL;
      OrekitMessages *OrekitMessages::CCSDS_DATE_MISSING_AGENCY_EPOCH = NULL;
      OrekitMessages *OrekitMessages::CCSDS_DIFFERENT_LVLH_DEFINITION = NULL;
      OrekitMessages *OrekitMessages::CCSDS_INCOMPATIBLE_KEYS_BOTH_USED = NULL;
      OrekitMessages *OrekitMessages::CCSDS_INCOMPLETE_DATA = NULL;
      OrekitMessages *OrekitMessages::CCSDS_INCONSISTENT_NUMBER_OF_ATTITUDE_STATES = NULL;
      OrekitMessages *OrekitMessages::CCSDS_INCONSISTENT_TIME_SYSTEMS = NULL;
      OrekitMessages *OrekitMessages::CCSDS_INVALID_FRAME = NULL;
      OrekitMessages *OrekitMessages::CCSDS_INVALID_ROTATION_SEQUENCE = NULL;
      OrekitMessages *OrekitMessages::CCSDS_KEYWORD_NOT_ALLOWED_IN_VERSION = NULL;
      OrekitMessages *OrekitMessages::CCSDS_MANEUVER_MISSING_TIME = NULL;
      OrekitMessages *OrekitMessages::CCSDS_MANEUVER_UNITS_WRONG_NB_COMPONENTS = NULL;
      OrekitMessages *OrekitMessages::CCSDS_MISSING_KEYWORD = NULL;
      OrekitMessages *OrekitMessages::CCSDS_MISSING_SENSOR_INDEX = NULL;
      OrekitMessages *OrekitMessages::CCSDS_SENSOR_INDEX_ALREADY_USED = NULL;
      OrekitMessages *OrekitMessages::CCSDS_TDM_KEYWORD_NOT_FOUND = NULL;
      OrekitMessages *OrekitMessages::CCSDS_TDM_MISSING_RANGE_UNITS_CONVERTER = NULL;
      OrekitMessages *OrekitMessages::CCSDS_TIME_SYSTEM_NOT_IMPLEMENTED = NULL;
      OrekitMessages *OrekitMessages::CCSDS_TIME_SYSTEM_NOT_READ_YET = NULL;
      OrekitMessages *OrekitMessages::CCSDS_UNEXPECTED_KEYWORD = NULL;
      OrekitMessages *OrekitMessages::CCSDS_UNKNOWN_ATTITUDE_TYPE = NULL;
      OrekitMessages *OrekitMessages::CCSDS_UNKNOWN_CONVENTIONS = NULL;
      OrekitMessages *OrekitMessages::CCSDS_UNKNOWN_GM = NULL;
      OrekitMessages *OrekitMessages::CCSDS_UNKNOWN_SPACECRAFT_MASS = NULL;
      OrekitMessages *OrekitMessages::CCSDS_UNSUPPORTED_ELEMENT_SET_TYPE = NULL;
      OrekitMessages *OrekitMessages::CCSDS_UNSUPPORTED_RETROGRADE_EQUINOCTIAL = NULL;
      OrekitMessages *OrekitMessages::CLOCK_FILE_UNSUPPORTED_VERSION = NULL;
      OrekitMessages *OrekitMessages::CONNECTION_ERROR = NULL;
      OrekitMessages *OrekitMessages::CORRUPTED_FILE = NULL;
      OrekitMessages *OrekitMessages::CPF_UNEXPECTED_END_OF_FILE = NULL;
      OrekitMessages *OrekitMessages::CRD_UNEXPECTED_END_OF_FILE = NULL;
      OrekitMessages *OrekitMessages::DATA_ROOT_DIRECTORY_DOES_NOT_EXIST = NULL;
      OrekitMessages *OrekitMessages::DATES_MISMATCH = NULL;
      OrekitMessages *OrekitMessages::DIFFERENT_STATE_DEFINITION = NULL;
      OrekitMessages *OrekitMessages::DIFFERENT_TIME_OF_CLOSEST_APPROACH = NULL;
      OrekitMessages *OrekitMessages::DIMENSION_INCONSISTENT_WITH_PARAMETERS = NULL;
      OrekitMessages *OrekitMessages::DSST_ECC_NO_NUMERICAL_AVERAGING_METHOD = NULL;
      OrekitMessages *OrekitMessages::DSST_NEWCOMB_OPERATORS_COMPUTATION = NULL;
      OrekitMessages *OrekitMessages::DSST_SPR_SHADOW_INCONSISTENT = NULL;
      OrekitMessages *OrekitMessages::DSST_VMNS_COEFFICIENT_ERROR_MS = NULL;
      OrekitMessages *OrekitMessages::DUPLICATED_GRAVITY_FIELD_COEFFICIENT_IN_FILE = NULL;
      OrekitMessages *OrekitMessages::END_OF_ENCODED_MESSAGE = NULL;
      OrekitMessages *OrekitMessages::EVENT_DATE_TOO_CLOSE = NULL;
      OrekitMessages *OrekitMessages::EXCEPTIONAL_DATA_CONTEXT = NULL;
      OrekitMessages *OrekitMessages::FAILED_AUTHENTICATION = NULL;
      OrekitMessages *OrekitMessages::FIND_ROOT = NULL;
      OrekitMessages *OrekitMessages::FRAMES_MISMATCH = NULL;
      OrekitMessages *OrekitMessages::FRAME_ALREADY_ATTACHED = NULL;
      OrekitMessages *OrekitMessages::FRAME_ANCESTOR_OF_BOTH_FRAMES = NULL;
      OrekitMessages *OrekitMessages::FRAME_ANCESTOR_OF_NEITHER_FRAME = NULL;
      OrekitMessages *OrekitMessages::FRAME_NOT_ATTACHED = NULL;
      OrekitMessages *OrekitMessages::FRAME_NO_NTH_ANCESTOR = NULL;
      OrekitMessages *OrekitMessages::FUNCTION_NOT_IMPLEMENTED = NULL;
      OrekitMessages *OrekitMessages::GNSS_PARITY_ERROR = NULL;
      OrekitMessages *OrekitMessages::GRAVITY_FIELD_NORMALIZATION_UNDERFLOW = NULL;
      OrekitMessages *OrekitMessages::HEADER_ALREADY_WRITTEN = NULL;
      OrekitMessages *OrekitMessages::HEADER_NOT_WRITTEN = NULL;
      OrekitMessages *OrekitMessages::HYPERBOLIC_ORBIT_NOT_HANDLED_AS = NULL;
      OrekitMessages *OrekitMessages::INCOMPATIBLE_FRAMES = NULL;
      OrekitMessages *OrekitMessages::INCOMPATIBLE_FREQUENCIES_FOR_COMBINATION_OF_MEASUREMENTS = NULL;
      OrekitMessages *OrekitMessages::INCOMPATIBLE_UNITS = NULL;
      OrekitMessages *OrekitMessages::INCOMPLETE_HEADER = NULL;
      OrekitMessages *OrekitMessages::INCONSISTENT_ASTRONOMICAL_UNIT_IN_FILES = NULL;
      OrekitMessages *OrekitMessages::INCONSISTENT_DATES_IN_IERS_FILE = NULL;
      OrekitMessages *OrekitMessages::INCONSISTENT_EARTH_MOON_RATIO_IN_FILES = NULL;
      OrekitMessages *OrekitMessages::INCONSISTENT_NUMBER_OF_ELEMENTS = NULL;
      OrekitMessages *OrekitMessages::INCONSISTENT_NUMBER_OF_SATS = NULL;
      OrekitMessages *OrekitMessages::INCONSISTENT_NUMBER_OF_TEC_MAPS_IN_FILE = NULL;
      OrekitMessages *OrekitMessages::INCONSISTENT_SAMPLING_DATE = NULL;
      OrekitMessages *OrekitMessages::INCONSISTENT_SATELLITE_SYSTEM = NULL;
      OrekitMessages *OrekitMessages::INCONSISTENT_SELECTION = NULL;
      OrekitMessages *OrekitMessages::INERTIAL_FORCE_MODEL_MISSING = NULL;
      OrekitMessages *OrekitMessages::INITIAL_MATRIX_AND_PARAMETERS_NUMBER_MISMATCH = NULL;
      OrekitMessages *OrekitMessages::INITIAL_STATE_NOT_SPECIFIED_FOR_ORBIT_PROPAGATION = NULL;
      OrekitMessages *OrekitMessages::INTERNAL_ERROR = NULL;
      OrekitMessages *OrekitMessages::INVALID_GNSS_DATA = NULL;
      OrekitMessages *OrekitMessages::INVALID_MEASUREMENT_TYPES_FOR_COMBINATION_OF_MEASUREMENTS = NULL;
      OrekitMessages *OrekitMessages::INVALID_PARAMETER_RANGE = NULL;
      OrekitMessages *OrekitMessages::INVALID_RANGE_INDICATOR_IN_CRD_FILE = NULL;
      OrekitMessages *OrekitMessages::INVALID_SATELLITE_ID = NULL;
      OrekitMessages *OrekitMessages::INVALID_SATELLITE_SYSTEM = NULL;
      OrekitMessages *OrekitMessages::INVALID_TYPE_FOR_FUNCTION = NULL;
      OrekitMessages *OrekitMessages::IRREGULAR_OR_INCOMPLETE_GRID = NULL;
      OrekitMessages *OrekitMessages::ITRF_VERSIONS_PREFIX_ONLY = NULL;
      OrekitMessages *OrekitMessages::KLOBUCHAR_ALPHA_BETA_NOT_AVAILABLE_FOR_DATE = NULL;
      OrekitMessages *OrekitMessages::KLOBUCHAR_ALPHA_BETA_NOT_LOADED = NULL;
      OrekitMessages *OrekitMessages::METHOD_NOT_AVAILABLE_WITHOUT_CENTRAL_BODY = NULL;
      OrekitMessages *OrekitMessages::MISMATCHED_FREQUENCIES = NULL;
      OrekitMessages *OrekitMessages::MISSING_EARTH_ORIENTATION_PARAMETERS_BETWEEN_DATES = NULL;
      OrekitMessages *OrekitMessages::MISSING_EARTH_ORIENTATION_PARAMETERS_BETWEEN_DATES_GAP = NULL;
      OrekitMessages *OrekitMessages::MISSING_GRAVITY_FIELD_COEFFICIENT_IN_FILE = NULL;
      OrekitMessages *OrekitMessages::MISSING_HEADER = NULL;
      OrekitMessages *OrekitMessages::MISSING_SECOND_TLE_LINE = NULL;
      OrekitMessages *OrekitMessages::MISSING_SERIE_J_IN_FILE = NULL;
      OrekitMessages *OrekitMessages::MISSING_STATION_DATA_FOR_EPOCH = NULL;
      OrekitMessages *OrekitMessages::MISSING_VELOCITY = NULL;
      OrekitMessages *OrekitMessages::MODIP_GRID_NOT_LOADED = NULL;
      OrekitMessages *OrekitMessages::MOUNPOINT_ALREADY_CONNECTED = NULL;
      OrekitMessages *OrekitMessages::MULTIPLE_INTERPOLATOR_USED = NULL;
      OrekitMessages *OrekitMessages::MULTIPLE_SHOOTING_UNDERCONSTRAINED = NULL;
      OrekitMessages *OrekitMessages::NEITHER_DIRECTORY_NOR_ZIP_OR_JAR = NULL;
      OrekitMessages *OrekitMessages::NEQUICK_F2_FM3_NOT_LOADED = NULL;
      OrekitMessages *OrekitMessages::NON_CHRONOLOGICALLY_SORTED_ENTRIES = NULL;
      OrekitMessages *OrekitMessages::NON_CHRONOLOGICAL_DATES_FOR_OBSERVATIONS = NULL;
      OrekitMessages *OrekitMessages::NON_CHRONOLOGICAL_DATES_IN_FILE = NULL;
      OrekitMessages *OrekitMessages::NON_COPLANAR_POINTS = NULL;
      OrekitMessages *OrekitMessages::NON_DIFFERENT_DATES_FOR_OBSERVATIONS = NULL;
      OrekitMessages *OrekitMessages::NON_EXISTENT_DATE = NULL;
      OrekitMessages *OrekitMessages::NON_EXISTENT_DAY_NUMBER_IN_YEAR = NULL;
      OrekitMessages *OrekitMessages::NON_EXISTENT_GEOMAGNETIC_MODEL = NULL;
      OrekitMessages *OrekitMessages::NON_EXISTENT_HMS_TIME = NULL;
      OrekitMessages *OrekitMessages::NON_EXISTENT_MONTH = NULL;
      OrekitMessages *OrekitMessages::NON_EXISTENT_TIME = NULL;
      OrekitMessages *OrekitMessages::NON_EXISTENT_WEEK_DATE = NULL;
      OrekitMessages *OrekitMessages::NON_EXISTENT_YEAR_MONTH_DAY = NULL;
      OrekitMessages *OrekitMessages::NON_PSEUDO_INERTIAL_FRAME = NULL;
      OrekitMessages *OrekitMessages::NON_PSEUDO_INERTIAL_FRAME_NOT_SUITABLE_AS_REFERENCE_FOR_INERTIAL_FORCES = NULL;
      OrekitMessages *OrekitMessages::NON_RESETABLE_STATE = NULL;
      OrekitMessages *OrekitMessages::NOT_A_DIRECTORY = NULL;
      OrekitMessages *OrekitMessages::NOT_A_JPL_EPHEMERIDES_BINARY_FILE = NULL;
      OrekitMessages *OrekitMessages::NOT_A_MARSHALL_SOLAR_ACTIVITY_FUTURE_ESTIMATION_FILE = NULL;
      OrekitMessages *OrekitMessages::NOT_A_SUPPORTED_HATANAKA_COMPRESSED_FILE = NULL;
      OrekitMessages *OrekitMessages::NOT_A_SUPPORTED_IERS_DATA_FILE = NULL;
      OrekitMessages *OrekitMessages::NOT_A_SUPPORTED_SEM_ALMANAC_FILE = NULL;
      OrekitMessages *OrekitMessages::NOT_A_SUPPORTED_UNIX_COMPRESSED_FILE = NULL;
      OrekitMessages *OrekitMessages::NOT_A_SUPPORTED_YUMA_ALMANAC_FILE = NULL;
      OrekitMessages *OrekitMessages::NOT_ENOUGH_ATTITUDE_PROVIDERS = NULL;
      OrekitMessages *OrekitMessages::NOT_ENOUGH_CACHED_NEIGHBORS = NULL;
      OrekitMessages *OrekitMessages::NOT_ENOUGH_DATA = NULL;
      OrekitMessages *OrekitMessages::NOT_ENOUGH_GNSS_FOR_DOP = NULL;
      OrekitMessages *OrekitMessages::NOT_ENOUGH_PROPAGATORS = NULL;
      OrekitMessages *OrekitMessages::NOT_POSITIVE_SPACECRAFT_MASS = NULL;
      OrekitMessages *OrekitMessages::NOT_STRICTLY_POSITIVE = NULL;
      OrekitMessages *OrekitMessages::NOT_TLE_LINES = NULL;
      OrekitMessages *OrekitMessages::NOT_VALID_INTERNATIONAL_DESIGNATOR = NULL;
      OrekitMessages *OrekitMessages::NO_CACHED_ENTRIES = NULL;
      OrekitMessages *OrekitMessages::NO_DATA_GENERATED = NULL;
      OrekitMessages *OrekitMessages::NO_DATA_IN_FILE = NULL;
      OrekitMessages *OrekitMessages::NO_DATA_LOADED_FOR_CELESTIAL_BODY = NULL;
      OrekitMessages *OrekitMessages::NO_EARTH_ORIENTATION_PARAMETERS = NULL;
      OrekitMessages *OrekitMessages::NO_EARTH_ORIENTATION_PARAMETERS_LOADED = NULL;
      OrekitMessages *OrekitMessages::NO_ENTRIES_IN_IERS_UTC_TAI_HISTORY_FILE = NULL;
      OrekitMessages *OrekitMessages::NO_EPOCH_IN_IONEX_HEADER = NULL;
      OrekitMessages *OrekitMessages::NO_GRAVITY_FIELD_DATA_LOADED = NULL;
      OrekitMessages *OrekitMessages::NO_IERS_UTC_TAI_HISTORY_DATA_LOADED = NULL;
      OrekitMessages *OrekitMessages::NO_INTERPOLATOR_FOR_STATE_DEFINITION = NULL;
      OrekitMessages *OrekitMessages::NO_JPL_EPHEMERIDES_BINARY_FILES_FOUND = NULL;
      OrekitMessages *OrekitMessages::NO_KLOBUCHAR_ALPHA_BETA_IN_FILE = NULL;
      OrekitMessages *OrekitMessages::NO_LATITUDE_LONGITUDE_BONDARIES_IN_IONEX_HEADER = NULL;
      OrekitMessages *OrekitMessages::NO_OCEAN_TIDE_DATA_LOADED = NULL;
      OrekitMessages *OrekitMessages::NO_PROPAGATOR_CONFIGURED = NULL;
      OrekitMessages *OrekitMessages::NO_REFERENCE_DATE_FOR_PARAMETER = NULL;
      OrekitMessages *OrekitMessages::NO_SEM_ALMANAC_AVAILABLE = NULL;
      OrekitMessages *OrekitMessages::NO_SOLAR_ACTIVITY_AT_DATE = NULL;
      OrekitMessages *OrekitMessages::NO_SUCH_ITRF_FRAME = NULL;
      OrekitMessages *OrekitMessages::NO_TEC_DATA_IN_FILES_FOR_DATE = NULL;
      OrekitMessages *OrekitMessages::NO_TLE_DATA_AVAILABLE = NULL;
      OrekitMessages *OrekitMessages::NO_TLE_FOR_LAUNCH_YEAR_NUMBER_PIECE = NULL;
      OrekitMessages *OrekitMessages::NO_TLE_FOR_OBJECT = NULL;
      OrekitMessages *OrekitMessages::NO_UNSCENTED_TRANSFORM_CONFIGURED = NULL;
      OrekitMessages *OrekitMessages::NO_VIENNA_ACOEF_OR_ZENITH_DELAY_IN_FILE = NULL;
      OrekitMessages *OrekitMessages::NO_YUMA_ALMANAC_AVAILABLE = NULL;
      OrekitMessages *OrekitMessages::NULL_ARGUMENT = NULL;
      OrekitMessages *OrekitMessages::NULL_PARENT_FOR_FRAME = NULL;
      OrekitMessages *OrekitMessages::OCEAN_TIDE_DATA_DEGREE_ORDER_LIMITS = NULL;
      OrekitMessages *OrekitMessages::OCEAN_TIDE_LOAD_DEFORMATION_LIMITS = NULL;
      OrekitMessages *OrekitMessages::ORBITS_MUS_MISMATCH = NULL;
      OrekitMessages *OrekitMessages::ORBIT_AND_ATTITUDE_DATES_MISMATCH = NULL;
      OrekitMessages *OrekitMessages::ORBIT_ANOMALY_OUT_OF_HYPERBOLIC_RANGE = NULL;
      OrekitMessages *OrekitMessages::ORBIT_A_E_MISMATCH_WITH_CONIC_TYPE = NULL;
      OrekitMessages *OrekitMessages::ORBIT_TYPE_NOT_ALLOWED = NULL;
      OrekitMessages *OrekitMessages::OUT_OF_RANGE_BODY_EPHEMERIDES_DATE = NULL;
      OrekitMessages *OrekitMessages::OUT_OF_RANGE_DATE = NULL;
      OrekitMessages *OrekitMessages::OUT_OF_RANGE_DERIVATION_ORDER = NULL;
      OrekitMessages *OrekitMessages::OUT_OF_RANGE_EPHEMERIDES_DATE_AFTER = NULL;
      OrekitMessages *OrekitMessages::OUT_OF_RANGE_EPHEMERIDES_DATE_BEFORE = NULL;
      OrekitMessages *OrekitMessages::OUT_OF_RANGE_SECONDS_NUMBER = NULL;
      OrekitMessages *OrekitMessages::OUT_OF_RANGE_SECONDS_NUMBER_DETAIL = NULL;
      OrekitMessages *OrekitMessages::OUT_OF_RANGE_TIME_TRANSFORM = NULL;
      OrekitMessages *OrekitMessages::PARAMETER_NOT_SET = NULL;
      OrekitMessages *OrekitMessages::PARAMETER_PERIODS_HAS_ALREADY_BEEN_SET = NULL;
      OrekitMessages *OrekitMessages::PARAMETER_WITH_SEVERAL_ESTIMATED_VALUES = NULL;
      OrekitMessages *OrekitMessages::POINT_INSIDE_ELLIPSOID = NULL;
      OrekitMessages *OrekitMessages::POLAR_TRAJECTORY = NULL;
      OrekitMessages *OrekitMessages::POSITIVE_FLOW_RATE = NULL;
      OrekitMessages *OrekitMessages::SATELLITE_COLLIDED_WITH_TARGET = NULL;
      OrekitMessages *OrekitMessages::SEVERAL_REFERENCE_DATES_IN_GRAVITY_FIELD = NULL;
      OrekitMessages *OrekitMessages::SINGULAR_JACOBIAN_FOR_ORBIT_TYPE = NULL;
      OrekitMessages *OrekitMessages::SOURCETABLE_PARSE_ERROR = NULL;
      OrekitMessages *OrekitMessages::SP3_INCOMPATIBLE_FILE_METADATA = NULL;
      OrekitMessages *OrekitMessages::SP3_INCOMPATIBLE_SATELLITE_MEDATADA = NULL;
      OrekitMessages *OrekitMessages::SP3_INVALID_HEADER_ENTRY = NULL;
      OrekitMessages *OrekitMessages::SP3_NUMBER_OF_EPOCH_MISMATCH = NULL;
      OrekitMessages *OrekitMessages::SP3_TOO_MANY_SATELLITES_FOR_VERSION = NULL;
      OrekitMessages *OrekitMessages::SP3_UNSUPPORTED_VERSION = NULL;
      OrekitMessages *OrekitMessages::STATE_AND_COVARIANCE_DATES_MISMATCH = NULL;
      OrekitMessages *OrekitMessages::STATE_AND_PARAMETERS_JACOBIANS_ROWS_MISMATCH = NULL;
      OrekitMessages *OrekitMessages::STATE_JACOBIAN_NOT_6X6 = NULL;
      OrekitMessages *OrekitMessages::STATE_JACOBIAN_NOT_INITIALIZED = NULL;
      OrekitMessages *OrekitMessages::STATION_NOT_FOUND = NULL;
      OrekitMessages *OrekitMessages::STEC_INTEGRATION_DID_NOT_CONVERGE = NULL;
      OrekitMessages *OrekitMessages::STK_INVALID_OR_UNSUPPORTED_COORDINATE_SYSTEM = NULL;
      OrekitMessages *OrekitMessages::STK_UNEXPECTED_END_OF_FILE = NULL;
      OrekitMessages *OrekitMessages::STK_UNMAPPED_COORDINATE_SYSTEM = NULL;
      OrekitMessages *OrekitMessages::STREAM_REQUIRES_NMEA_FIX = NULL;
      OrekitMessages *OrekitMessages::TLE_CHECKSUM_ERROR = NULL;
      OrekitMessages *OrekitMessages::TLE_INVALID_PARAMETER = NULL;
      OrekitMessages *OrekitMessages::TLE_LINES_DO_NOT_REFER_TO_SAME_OBJECT = NULL;
      OrekitMessages *OrekitMessages::TOO_LARGE_DATA_TYPE = NULL;
      OrekitMessages *OrekitMessages::TOO_LARGE_DEGREE_FOR_GRAVITY_FIELD = NULL;
      OrekitMessages *OrekitMessages::TOO_LARGE_ECCENTRICITY_FOR_PROPAGATION_MODEL = NULL;
      OrekitMessages *OrekitMessages::TOO_LARGE_ORDER_FOR_GRAVITY_FIELD = NULL;
      OrekitMessages *OrekitMessages::TOO_SHORT_TRANSITION_TIME_FOR_ATTITUDES_SWITCH = NULL;
      OrekitMessages *OrekitMessages::TOO_SMALL_SCALE_FOR_PARAMETER = NULL;
      OrekitMessages *OrekitMessages::TRAJECTORY_INSIDE_BRILLOUIN_SPHERE = NULL;
      OrekitMessages *OrekitMessages::TRAJECTORY_NOT_CROSSING_XZPLANE = NULL;
      OrekitMessages *OrekitMessages::UNABLE_TO_COMPUTE_BROUWER_LYDDANE_MEAN_PARAMETERS = NULL;
      OrekitMessages *OrekitMessages::UNABLE_TO_COMPUTE_DSST_MEAN_PARAMETERS = NULL;
      OrekitMessages *OrekitMessages::UNABLE_TO_COMPUTE_ECKSTEIN_HECHLER_MEAN_PARAMETERS = NULL;
      OrekitMessages *OrekitMessages::UNABLE_TO_COMPUTE_HYPERBOLIC_ECCENTRIC_ANOMALY = NULL;
      OrekitMessages *OrekitMessages::UNABLE_TO_COMPUTE_TLE = NULL;
      OrekitMessages *OrekitMessages::UNABLE_TO_FIND_FILE = NULL;
      OrekitMessages *OrekitMessages::UNABLE_TO_FIND_RESOURCE = NULL;
      OrekitMessages *OrekitMessages::UNABLE_TO_GENERATE_NEW_DATA_AFTER = NULL;
      OrekitMessages *OrekitMessages::UNABLE_TO_GENERATE_NEW_DATA_BEFORE = NULL;
      OrekitMessages *OrekitMessages::UNABLE_TO_PARSE_ELEMENT_IN_FILE = NULL;
      OrekitMessages *OrekitMessages::UNABLE_TO_PARSE_LINE_IN_FILE = NULL;
      OrekitMessages *OrekitMessages::UNABLE_TO_READ_JPL_HEADER = NULL;
      OrekitMessages *OrekitMessages::UNDEFINED_ABSOLUTE_PVCOORDINATES = NULL;
      OrekitMessages *OrekitMessages::UNDEFINED_ORBIT = NULL;
      OrekitMessages *OrekitMessages::UNEXPECTED_CONTENT_TYPE = NULL;
      OrekitMessages *OrekitMessages::UNEXPECTED_DATA_AFTER_LINE_IN_FILE = NULL;
      OrekitMessages *OrekitMessages::UNEXPECTED_DATA_AT_LINE_IN_FILE = NULL;
      OrekitMessages *OrekitMessages::UNEXPECTED_END_OF_FILE = NULL;
      OrekitMessages *OrekitMessages::UNEXPECTED_END_OF_FILE_AFTER_LINE = NULL;
      OrekitMessages *OrekitMessages::UNEXPECTED_FILE_FORMAT_ERROR_FOR_LOADER = NULL;
      OrekitMessages *OrekitMessages::UNEXPECTED_FORMAT_FOR_ILRS_FILE = NULL;
      OrekitMessages *OrekitMessages::UNEXPECTED_TWO_ELEVATION_VALUES_FOR_ONE_AZIMUTH = NULL;
      OrekitMessages *OrekitMessages::UNINITIALIZED_VALUE_FOR_KEY = NULL;
      OrekitMessages *OrekitMessages::UNKNOWN_ADDITIONAL_STATE = NULL;
      OrekitMessages *OrekitMessages::UNKNOWN_AUTHENTICATION_METHOD = NULL;
      OrekitMessages *OrekitMessages::UNKNOWN_CARRIER_PHASE_CODE = NULL;
      OrekitMessages *OrekitMessages::UNKNOWN_CLOCK_DATA_TYPE = NULL;
      OrekitMessages *OrekitMessages::UNKNOWN_DATA_FORMAT = NULL;
      OrekitMessages *OrekitMessages::UNKNOWN_ENCODED_MESSAGE_NUMBER = NULL;
      OrekitMessages *OrekitMessages::UNKNOWN_HOST = NULL;
      OrekitMessages *OrekitMessages::UNKNOWN_MONTH = NULL;
      OrekitMessages *OrekitMessages::UNKNOWN_NAVIGATION_SYSTEM = NULL;
      OrekitMessages *OrekitMessages::UNKNOWN_RINEX_FREQUENCY = NULL;
      OrekitMessages *OrekitMessages::UNKNOWN_SATELLITE_ANTENNA_CODE = NULL;
      OrekitMessages *OrekitMessages::UNKNOWN_SATELLITE_SYSTEM = NULL;
      OrekitMessages *OrekitMessages::UNKNOWN_TIME_SYSTEM = NULL;
      OrekitMessages *OrekitMessages::UNKNOWN_UNIT = NULL;
      OrekitMessages *OrekitMessages::UNKNOWN_UTC_ID = NULL;
      OrekitMessages *OrekitMessages::UNSUPPORTED_FILE_FORMAT = NULL;
      OrekitMessages *OrekitMessages::UNSUPPORTED_FILE_FORMAT_VERSION = NULL;
      OrekitMessages *OrekitMessages::UNSUPPORTED_FREQUENCY_FOR_ANTENNA = NULL;
      OrekitMessages *OrekitMessages::UNSUPPORTED_LOCAL_ORBITAL_FRAME = NULL;
      OrekitMessages *OrekitMessages::UNSUPPORTED_PARAMETER_NAME = NULL;
      OrekitMessages *OrekitMessages::UNSUPPORTED_TIME_TRANSFORM = NULL;
      OrekitMessages *OrekitMessages::UNSUPPORTED_TRANSFORM = NULL;
      OrekitMessages *OrekitMessages::VALUE_NOT_FOUND = NULL;
      OrekitMessages *OrekitMessages::VIENNA_ACOEF_OR_ZENITH_DELAY_NOT_AVAILABLE_FOR_DATE = NULL;
      OrekitMessages *OrekitMessages::VIENNA_ACOEF_OR_ZENITH_DELAY_NOT_LOADED = NULL;
      OrekitMessages *OrekitMessages::WRONG_COLUMNS_NUMBER = NULL;
      OrekitMessages *OrekitMessages::WRONG_DEGREE_OR_ORDER = NULL;
      OrekitMessages *OrekitMessages::WRONG_EOP_INTERPOLATION_DEGREE = NULL;
      OrekitMessages *OrekitMessages::WRONG_INTERPOLATOR_DEFINED_FOR_STATE_INTERPOLATION = NULL;
      OrekitMessages *OrekitMessages::WRONG_NB_COMPONENTS = NULL;
      OrekitMessages *OrekitMessages::WRONG_ORBIT_PARAMETERS_TYPE = NULL;
      OrekitMessages *OrekitMessages::WRONG_PARSING_TYPE = NULL;

      jclass OrekitMessages::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/errors/OrekitMessages");

          mids$ = new jmethodID[max_mid];
          mids$[mid_getLocalizedString_26070c28e6ea354d] = env->getMethodID(cls, "getLocalizedString", "(Ljava/util/Locale;)Ljava/lang/String;");
          mids$[mid_getSourceString_1c1fa1e935d6cdcf] = env->getMethodID(cls, "getSourceString", "()Ljava/lang/String;");
          mids$[mid_valueOf_43a6a332bae68a73] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/errors/OrekitMessages;");
          mids$[mid_values_3489d3ecfa550bc0] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/errors/OrekitMessages;");

          class$ = new ::java::lang::Class(cls);
          cls = (jclass) class$->this$;

          ADDITIONAL_STATE_NAME_ALREADY_IN_USE = new OrekitMessages(env->getStaticObjectField(cls, "ADDITIONAL_STATE_NAME_ALREADY_IN_USE", "Lorg/orekit/errors/OrekitMessages;"));
          ALMOST_CRITICALLY_INCLINED_ORBIT = new OrekitMessages(env->getStaticObjectField(cls, "ALMOST_CRITICALLY_INCLINED_ORBIT", "Lorg/orekit/errors/OrekitMessages;"));
          ALMOST_EQUATORIAL_ORBIT = new OrekitMessages(env->getStaticObjectField(cls, "ALMOST_EQUATORIAL_ORBIT", "Lorg/orekit/errors/OrekitMessages;"));
          ALTITUDE_BELOW_ALLOWED_THRESHOLD = new OrekitMessages(env->getStaticObjectField(cls, "ALTITUDE_BELOW_ALLOWED_THRESHOLD", "Lorg/orekit/errors/OrekitMessages;"));
          ANGLE_TYPE_NOT_SUPPORTED = new OrekitMessages(env->getStaticObjectField(cls, "ANGLE_TYPE_NOT_SUPPORTED", "Lorg/orekit/errors/OrekitMessages;"));
          ATTEMPT_TO_GENERATE_MALFORMED_FILE = new OrekitMessages(env->getStaticObjectField(cls, "ATTEMPT_TO_GENERATE_MALFORMED_FILE", "Lorg/orekit/errors/OrekitMessages;"));
          ATTITUDE_POINTING_LAW_DOES_NOT_POINT_TO_GROUND = new OrekitMessages(env->getStaticObjectField(cls, "ATTITUDE_POINTING_LAW_DOES_NOT_POINT_TO_GROUND", "Lorg/orekit/errors/OrekitMessages;"));
          CANNOT_CHANGE_COVARIANCE_TYPE_IF_DEFINED_IN_LOF = new OrekitMessages(env->getStaticObjectField(cls, "CANNOT_CHANGE_COVARIANCE_TYPE_IF_DEFINED_IN_LOF", "Lorg/orekit/errors/OrekitMessages;"));
          CANNOT_CHANGE_COVARIANCE_TYPE_IF_DEFINED_IN_NON_INERTIAL_FRAME = new OrekitMessages(env->getStaticObjectField(cls, "CANNOT_CHANGE_COVARIANCE_TYPE_IF_DEFINED_IN_NON_INERTIAL_FRAME", "Lorg/orekit/errors/OrekitMessages;"));
          CANNOT_COMPUTE_AIMING_AT_SINGULAR_POINT = new OrekitMessages(env->getStaticObjectField(cls, "CANNOT_COMPUTE_AIMING_AT_SINGULAR_POINT", "Lorg/orekit/errors/OrekitMessages;"));
          CANNOT_COMPUTE_LAGRANGIAN = new OrekitMessages(env->getStaticObjectField(cls, "CANNOT_COMPUTE_LAGRANGIAN", "Lorg/orekit/errors/OrekitMessages;"));
          CANNOT_ESTIMATE_PRECESSION_WITHOUT_PROPER_DERIVATIVES = new OrekitMessages(env->getStaticObjectField(cls, "CANNOT_ESTIMATE_PRECESSION_WITHOUT_PROPER_DERIVATIVES", "Lorg/orekit/errors/OrekitMessages;"));
          CANNOT_FIND_SATELLITE_IN_SYSTEM = new OrekitMessages(env->getStaticObjectField(cls, "CANNOT_FIND_SATELLITE_IN_SYSTEM", "Lorg/orekit/errors/OrekitMessages;"));
          CANNOT_PARSE_BOTH_TAU_AND_GAMMA = new OrekitMessages(env->getStaticObjectField(cls, "CANNOT_PARSE_BOTH_TAU_AND_GAMMA", "Lorg/orekit/errors/OrekitMessages;"));
          CANNOT_PARSE_GNSS_DATA = new OrekitMessages(env->getStaticObjectField(cls, "CANNOT_PARSE_GNSS_DATA", "Lorg/orekit/errors/OrekitMessages;"));
          CANNOT_PARSE_SOURCETABLE = new OrekitMessages(env->getStaticObjectField(cls, "CANNOT_PARSE_SOURCETABLE", "Lorg/orekit/errors/OrekitMessages;"));
          CANNOT_START_PROPAGATION_FROM_INFINITY = new OrekitMessages(env->getStaticObjectField(cls, "CANNOT_START_PROPAGATION_FROM_INFINITY", "Lorg/orekit/errors/OrekitMessages;"));
          CCSDS_DATE_INVALID_LENGTH_TIME_FIELD = new OrekitMessages(env->getStaticObjectField(cls, "CCSDS_DATE_INVALID_LENGTH_TIME_FIELD", "Lorg/orekit/errors/OrekitMessages;"));
          CCSDS_DATE_INVALID_PREAMBLE_FIELD = new OrekitMessages(env->getStaticObjectField(cls, "CCSDS_DATE_INVALID_PREAMBLE_FIELD", "Lorg/orekit/errors/OrekitMessages;"));
          CCSDS_DATE_MISSING_AGENCY_EPOCH = new OrekitMessages(env->getStaticObjectField(cls, "CCSDS_DATE_MISSING_AGENCY_EPOCH", "Lorg/orekit/errors/OrekitMessages;"));
          CCSDS_DIFFERENT_LVLH_DEFINITION = new OrekitMessages(env->getStaticObjectField(cls, "CCSDS_DIFFERENT_LVLH_DEFINITION", "Lorg/orekit/errors/OrekitMessages;"));
          CCSDS_INCOMPATIBLE_KEYS_BOTH_USED = new OrekitMessages(env->getStaticObjectField(cls, "CCSDS_INCOMPATIBLE_KEYS_BOTH_USED", "Lorg/orekit/errors/OrekitMessages;"));
          CCSDS_INCOMPLETE_DATA = new OrekitMessages(env->getStaticObjectField(cls, "CCSDS_INCOMPLETE_DATA", "Lorg/orekit/errors/OrekitMessages;"));
          CCSDS_INCONSISTENT_NUMBER_OF_ATTITUDE_STATES = new OrekitMessages(env->getStaticObjectField(cls, "CCSDS_INCONSISTENT_NUMBER_OF_ATTITUDE_STATES", "Lorg/orekit/errors/OrekitMessages;"));
          CCSDS_INCONSISTENT_TIME_SYSTEMS = new OrekitMessages(env->getStaticObjectField(cls, "CCSDS_INCONSISTENT_TIME_SYSTEMS", "Lorg/orekit/errors/OrekitMessages;"));
          CCSDS_INVALID_FRAME = new OrekitMessages(env->getStaticObjectField(cls, "CCSDS_INVALID_FRAME", "Lorg/orekit/errors/OrekitMessages;"));
          CCSDS_INVALID_ROTATION_SEQUENCE = new OrekitMessages(env->getStaticObjectField(cls, "CCSDS_INVALID_ROTATION_SEQUENCE", "Lorg/orekit/errors/OrekitMessages;"));
          CCSDS_KEYWORD_NOT_ALLOWED_IN_VERSION = new OrekitMessages(env->getStaticObjectField(cls, "CCSDS_KEYWORD_NOT_ALLOWED_IN_VERSION", "Lorg/orekit/errors/OrekitMessages;"));
          CCSDS_MANEUVER_MISSING_TIME = new OrekitMessages(env->getStaticObjectField(cls, "CCSDS_MANEUVER_MISSING_TIME", "Lorg/orekit/errors/OrekitMessages;"));
          CCSDS_MANEUVER_UNITS_WRONG_NB_COMPONENTS = new OrekitMessages(env->getStaticObjectField(cls, "CCSDS_MANEUVER_UNITS_WRONG_NB_COMPONENTS", "Lorg/orekit/errors/OrekitMessages;"));
          CCSDS_MISSING_KEYWORD = new OrekitMessages(env->getStaticObjectField(cls, "CCSDS_MISSING_KEYWORD", "Lorg/orekit/errors/OrekitMessages;"));
          CCSDS_MISSING_SENSOR_INDEX = new OrekitMessages(env->getStaticObjectField(cls, "CCSDS_MISSING_SENSOR_INDEX", "Lorg/orekit/errors/OrekitMessages;"));
          CCSDS_SENSOR_INDEX_ALREADY_USED = new OrekitMessages(env->getStaticObjectField(cls, "CCSDS_SENSOR_INDEX_ALREADY_USED", "Lorg/orekit/errors/OrekitMessages;"));
          CCSDS_TDM_KEYWORD_NOT_FOUND = new OrekitMessages(env->getStaticObjectField(cls, "CCSDS_TDM_KEYWORD_NOT_FOUND", "Lorg/orekit/errors/OrekitMessages;"));
          CCSDS_TDM_MISSING_RANGE_UNITS_CONVERTER = new OrekitMessages(env->getStaticObjectField(cls, "CCSDS_TDM_MISSING_RANGE_UNITS_CONVERTER", "Lorg/orekit/errors/OrekitMessages;"));
          CCSDS_TIME_SYSTEM_NOT_IMPLEMENTED = new OrekitMessages(env->getStaticObjectField(cls, "CCSDS_TIME_SYSTEM_NOT_IMPLEMENTED", "Lorg/orekit/errors/OrekitMessages;"));
          CCSDS_TIME_SYSTEM_NOT_READ_YET = new OrekitMessages(env->getStaticObjectField(cls, "CCSDS_TIME_SYSTEM_NOT_READ_YET", "Lorg/orekit/errors/OrekitMessages;"));
          CCSDS_UNEXPECTED_KEYWORD = new OrekitMessages(env->getStaticObjectField(cls, "CCSDS_UNEXPECTED_KEYWORD", "Lorg/orekit/errors/OrekitMessages;"));
          CCSDS_UNKNOWN_ATTITUDE_TYPE = new OrekitMessages(env->getStaticObjectField(cls, "CCSDS_UNKNOWN_ATTITUDE_TYPE", "Lorg/orekit/errors/OrekitMessages;"));
          CCSDS_UNKNOWN_CONVENTIONS = new OrekitMessages(env->getStaticObjectField(cls, "CCSDS_UNKNOWN_CONVENTIONS", "Lorg/orekit/errors/OrekitMessages;"));
          CCSDS_UNKNOWN_GM = new OrekitMessages(env->getStaticObjectField(cls, "CCSDS_UNKNOWN_GM", "Lorg/orekit/errors/OrekitMessages;"));
          CCSDS_UNKNOWN_SPACECRAFT_MASS = new OrekitMessages(env->getStaticObjectField(cls, "CCSDS_UNKNOWN_SPACECRAFT_MASS", "Lorg/orekit/errors/OrekitMessages;"));
          CCSDS_UNSUPPORTED_ELEMENT_SET_TYPE = new OrekitMessages(env->getStaticObjectField(cls, "CCSDS_UNSUPPORTED_ELEMENT_SET_TYPE", "Lorg/orekit/errors/OrekitMessages;"));
          CCSDS_UNSUPPORTED_RETROGRADE_EQUINOCTIAL = new OrekitMessages(env->getStaticObjectField(cls, "CCSDS_UNSUPPORTED_RETROGRADE_EQUINOCTIAL", "Lorg/orekit/errors/OrekitMessages;"));
          CLOCK_FILE_UNSUPPORTED_VERSION = new OrekitMessages(env->getStaticObjectField(cls, "CLOCK_FILE_UNSUPPORTED_VERSION", "Lorg/orekit/errors/OrekitMessages;"));
          CONNECTION_ERROR = new OrekitMessages(env->getStaticObjectField(cls, "CONNECTION_ERROR", "Lorg/orekit/errors/OrekitMessages;"));
          CORRUPTED_FILE = new OrekitMessages(env->getStaticObjectField(cls, "CORRUPTED_FILE", "Lorg/orekit/errors/OrekitMessages;"));
          CPF_UNEXPECTED_END_OF_FILE = new OrekitMessages(env->getStaticObjectField(cls, "CPF_UNEXPECTED_END_OF_FILE", "Lorg/orekit/errors/OrekitMessages;"));
          CRD_UNEXPECTED_END_OF_FILE = new OrekitMessages(env->getStaticObjectField(cls, "CRD_UNEXPECTED_END_OF_FILE", "Lorg/orekit/errors/OrekitMessages;"));
          DATA_ROOT_DIRECTORY_DOES_NOT_EXIST = new OrekitMessages(env->getStaticObjectField(cls, "DATA_ROOT_DIRECTORY_DOES_NOT_EXIST", "Lorg/orekit/errors/OrekitMessages;"));
          DATES_MISMATCH = new OrekitMessages(env->getStaticObjectField(cls, "DATES_MISMATCH", "Lorg/orekit/errors/OrekitMessages;"));
          DIFFERENT_STATE_DEFINITION = new OrekitMessages(env->getStaticObjectField(cls, "DIFFERENT_STATE_DEFINITION", "Lorg/orekit/errors/OrekitMessages;"));
          DIFFERENT_TIME_OF_CLOSEST_APPROACH = new OrekitMessages(env->getStaticObjectField(cls, "DIFFERENT_TIME_OF_CLOSEST_APPROACH", "Lorg/orekit/errors/OrekitMessages;"));
          DIMENSION_INCONSISTENT_WITH_PARAMETERS = new OrekitMessages(env->getStaticObjectField(cls, "DIMENSION_INCONSISTENT_WITH_PARAMETERS", "Lorg/orekit/errors/OrekitMessages;"));
          DSST_ECC_NO_NUMERICAL_AVERAGING_METHOD = new OrekitMessages(env->getStaticObjectField(cls, "DSST_ECC_NO_NUMERICAL_AVERAGING_METHOD", "Lorg/orekit/errors/OrekitMessages;"));
          DSST_NEWCOMB_OPERATORS_COMPUTATION = new OrekitMessages(env->getStaticObjectField(cls, "DSST_NEWCOMB_OPERATORS_COMPUTATION", "Lorg/orekit/errors/OrekitMessages;"));
          DSST_SPR_SHADOW_INCONSISTENT = new OrekitMessages(env->getStaticObjectField(cls, "DSST_SPR_SHADOW_INCONSISTENT", "Lorg/orekit/errors/OrekitMessages;"));
          DSST_VMNS_COEFFICIENT_ERROR_MS = new OrekitMessages(env->getStaticObjectField(cls, "DSST_VMNS_COEFFICIENT_ERROR_MS", "Lorg/orekit/errors/OrekitMessages;"));
          DUPLICATED_GRAVITY_FIELD_COEFFICIENT_IN_FILE = new OrekitMessages(env->getStaticObjectField(cls, "DUPLICATED_GRAVITY_FIELD_COEFFICIENT_IN_FILE", "Lorg/orekit/errors/OrekitMessages;"));
          END_OF_ENCODED_MESSAGE = new OrekitMessages(env->getStaticObjectField(cls, "END_OF_ENCODED_MESSAGE", "Lorg/orekit/errors/OrekitMessages;"));
          EVENT_DATE_TOO_CLOSE = new OrekitMessages(env->getStaticObjectField(cls, "EVENT_DATE_TOO_CLOSE", "Lorg/orekit/errors/OrekitMessages;"));
          EXCEPTIONAL_DATA_CONTEXT = new OrekitMessages(env->getStaticObjectField(cls, "EXCEPTIONAL_DATA_CONTEXT", "Lorg/orekit/errors/OrekitMessages;"));
          FAILED_AUTHENTICATION = new OrekitMessages(env->getStaticObjectField(cls, "FAILED_AUTHENTICATION", "Lorg/orekit/errors/OrekitMessages;"));
          FIND_ROOT = new OrekitMessages(env->getStaticObjectField(cls, "FIND_ROOT", "Lorg/orekit/errors/OrekitMessages;"));
          FRAMES_MISMATCH = new OrekitMessages(env->getStaticObjectField(cls, "FRAMES_MISMATCH", "Lorg/orekit/errors/OrekitMessages;"));
          FRAME_ALREADY_ATTACHED = new OrekitMessages(env->getStaticObjectField(cls, "FRAME_ALREADY_ATTACHED", "Lorg/orekit/errors/OrekitMessages;"));
          FRAME_ANCESTOR_OF_BOTH_FRAMES = new OrekitMessages(env->getStaticObjectField(cls, "FRAME_ANCESTOR_OF_BOTH_FRAMES", "Lorg/orekit/errors/OrekitMessages;"));
          FRAME_ANCESTOR_OF_NEITHER_FRAME = new OrekitMessages(env->getStaticObjectField(cls, "FRAME_ANCESTOR_OF_NEITHER_FRAME", "Lorg/orekit/errors/OrekitMessages;"));
          FRAME_NOT_ATTACHED = new OrekitMessages(env->getStaticObjectField(cls, "FRAME_NOT_ATTACHED", "Lorg/orekit/errors/OrekitMessages;"));
          FRAME_NO_NTH_ANCESTOR = new OrekitMessages(env->getStaticObjectField(cls, "FRAME_NO_NTH_ANCESTOR", "Lorg/orekit/errors/OrekitMessages;"));
          FUNCTION_NOT_IMPLEMENTED = new OrekitMessages(env->getStaticObjectField(cls, "FUNCTION_NOT_IMPLEMENTED", "Lorg/orekit/errors/OrekitMessages;"));
          GNSS_PARITY_ERROR = new OrekitMessages(env->getStaticObjectField(cls, "GNSS_PARITY_ERROR", "Lorg/orekit/errors/OrekitMessages;"));
          GRAVITY_FIELD_NORMALIZATION_UNDERFLOW = new OrekitMessages(env->getStaticObjectField(cls, "GRAVITY_FIELD_NORMALIZATION_UNDERFLOW", "Lorg/orekit/errors/OrekitMessages;"));
          HEADER_ALREADY_WRITTEN = new OrekitMessages(env->getStaticObjectField(cls, "HEADER_ALREADY_WRITTEN", "Lorg/orekit/errors/OrekitMessages;"));
          HEADER_NOT_WRITTEN = new OrekitMessages(env->getStaticObjectField(cls, "HEADER_NOT_WRITTEN", "Lorg/orekit/errors/OrekitMessages;"));
          HYPERBOLIC_ORBIT_NOT_HANDLED_AS = new OrekitMessages(env->getStaticObjectField(cls, "HYPERBOLIC_ORBIT_NOT_HANDLED_AS", "Lorg/orekit/errors/OrekitMessages;"));
          INCOMPATIBLE_FRAMES = new OrekitMessages(env->getStaticObjectField(cls, "INCOMPATIBLE_FRAMES", "Lorg/orekit/errors/OrekitMessages;"));
          INCOMPATIBLE_FREQUENCIES_FOR_COMBINATION_OF_MEASUREMENTS = new OrekitMessages(env->getStaticObjectField(cls, "INCOMPATIBLE_FREQUENCIES_FOR_COMBINATION_OF_MEASUREMENTS", "Lorg/orekit/errors/OrekitMessages;"));
          INCOMPATIBLE_UNITS = new OrekitMessages(env->getStaticObjectField(cls, "INCOMPATIBLE_UNITS", "Lorg/orekit/errors/OrekitMessages;"));
          INCOMPLETE_HEADER = new OrekitMessages(env->getStaticObjectField(cls, "INCOMPLETE_HEADER", "Lorg/orekit/errors/OrekitMessages;"));
          INCONSISTENT_ASTRONOMICAL_UNIT_IN_FILES = new OrekitMessages(env->getStaticObjectField(cls, "INCONSISTENT_ASTRONOMICAL_UNIT_IN_FILES", "Lorg/orekit/errors/OrekitMessages;"));
          INCONSISTENT_DATES_IN_IERS_FILE = new OrekitMessages(env->getStaticObjectField(cls, "INCONSISTENT_DATES_IN_IERS_FILE", "Lorg/orekit/errors/OrekitMessages;"));
          INCONSISTENT_EARTH_MOON_RATIO_IN_FILES = new OrekitMessages(env->getStaticObjectField(cls, "INCONSISTENT_EARTH_MOON_RATIO_IN_FILES", "Lorg/orekit/errors/OrekitMessages;"));
          INCONSISTENT_NUMBER_OF_ELEMENTS = new OrekitMessages(env->getStaticObjectField(cls, "INCONSISTENT_NUMBER_OF_ELEMENTS", "Lorg/orekit/errors/OrekitMessages;"));
          INCONSISTENT_NUMBER_OF_SATS = new OrekitMessages(env->getStaticObjectField(cls, "INCONSISTENT_NUMBER_OF_SATS", "Lorg/orekit/errors/OrekitMessages;"));
          INCONSISTENT_NUMBER_OF_TEC_MAPS_IN_FILE = new OrekitMessages(env->getStaticObjectField(cls, "INCONSISTENT_NUMBER_OF_TEC_MAPS_IN_FILE", "Lorg/orekit/errors/OrekitMessages;"));
          INCONSISTENT_SAMPLING_DATE = new OrekitMessages(env->getStaticObjectField(cls, "INCONSISTENT_SAMPLING_DATE", "Lorg/orekit/errors/OrekitMessages;"));
          INCONSISTENT_SATELLITE_SYSTEM = new OrekitMessages(env->getStaticObjectField(cls, "INCONSISTENT_SATELLITE_SYSTEM", "Lorg/orekit/errors/OrekitMessages;"));
          INCONSISTENT_SELECTION = new OrekitMessages(env->getStaticObjectField(cls, "INCONSISTENT_SELECTION", "Lorg/orekit/errors/OrekitMessages;"));
          INERTIAL_FORCE_MODEL_MISSING = new OrekitMessages(env->getStaticObjectField(cls, "INERTIAL_FORCE_MODEL_MISSING", "Lorg/orekit/errors/OrekitMessages;"));
          INITIAL_MATRIX_AND_PARAMETERS_NUMBER_MISMATCH = new OrekitMessages(env->getStaticObjectField(cls, "INITIAL_MATRIX_AND_PARAMETERS_NUMBER_MISMATCH", "Lorg/orekit/errors/OrekitMessages;"));
          INITIAL_STATE_NOT_SPECIFIED_FOR_ORBIT_PROPAGATION = new OrekitMessages(env->getStaticObjectField(cls, "INITIAL_STATE_NOT_SPECIFIED_FOR_ORBIT_PROPAGATION", "Lorg/orekit/errors/OrekitMessages;"));
          INTERNAL_ERROR = new OrekitMessages(env->getStaticObjectField(cls, "INTERNAL_ERROR", "Lorg/orekit/errors/OrekitMessages;"));
          INVALID_GNSS_DATA = new OrekitMessages(env->getStaticObjectField(cls, "INVALID_GNSS_DATA", "Lorg/orekit/errors/OrekitMessages;"));
          INVALID_MEASUREMENT_TYPES_FOR_COMBINATION_OF_MEASUREMENTS = new OrekitMessages(env->getStaticObjectField(cls, "INVALID_MEASUREMENT_TYPES_FOR_COMBINATION_OF_MEASUREMENTS", "Lorg/orekit/errors/OrekitMessages;"));
          INVALID_PARAMETER_RANGE = new OrekitMessages(env->getStaticObjectField(cls, "INVALID_PARAMETER_RANGE", "Lorg/orekit/errors/OrekitMessages;"));
          INVALID_RANGE_INDICATOR_IN_CRD_FILE = new OrekitMessages(env->getStaticObjectField(cls, "INVALID_RANGE_INDICATOR_IN_CRD_FILE", "Lorg/orekit/errors/OrekitMessages;"));
          INVALID_SATELLITE_ID = new OrekitMessages(env->getStaticObjectField(cls, "INVALID_SATELLITE_ID", "Lorg/orekit/errors/OrekitMessages;"));
          INVALID_SATELLITE_SYSTEM = new OrekitMessages(env->getStaticObjectField(cls, "INVALID_SATELLITE_SYSTEM", "Lorg/orekit/errors/OrekitMessages;"));
          INVALID_TYPE_FOR_FUNCTION = new OrekitMessages(env->getStaticObjectField(cls, "INVALID_TYPE_FOR_FUNCTION", "Lorg/orekit/errors/OrekitMessages;"));
          IRREGULAR_OR_INCOMPLETE_GRID = new OrekitMessages(env->getStaticObjectField(cls, "IRREGULAR_OR_INCOMPLETE_GRID", "Lorg/orekit/errors/OrekitMessages;"));
          ITRF_VERSIONS_PREFIX_ONLY = new OrekitMessages(env->getStaticObjectField(cls, "ITRF_VERSIONS_PREFIX_ONLY", "Lorg/orekit/errors/OrekitMessages;"));
          KLOBUCHAR_ALPHA_BETA_NOT_AVAILABLE_FOR_DATE = new OrekitMessages(env->getStaticObjectField(cls, "KLOBUCHAR_ALPHA_BETA_NOT_AVAILABLE_FOR_DATE", "Lorg/orekit/errors/OrekitMessages;"));
          KLOBUCHAR_ALPHA_BETA_NOT_LOADED = new OrekitMessages(env->getStaticObjectField(cls, "KLOBUCHAR_ALPHA_BETA_NOT_LOADED", "Lorg/orekit/errors/OrekitMessages;"));
          METHOD_NOT_AVAILABLE_WITHOUT_CENTRAL_BODY = new OrekitMessages(env->getStaticObjectField(cls, "METHOD_NOT_AVAILABLE_WITHOUT_CENTRAL_BODY", "Lorg/orekit/errors/OrekitMessages;"));
          MISMATCHED_FREQUENCIES = new OrekitMessages(env->getStaticObjectField(cls, "MISMATCHED_FREQUENCIES", "Lorg/orekit/errors/OrekitMessages;"));
          MISSING_EARTH_ORIENTATION_PARAMETERS_BETWEEN_DATES = new OrekitMessages(env->getStaticObjectField(cls, "MISSING_EARTH_ORIENTATION_PARAMETERS_BETWEEN_DATES", "Lorg/orekit/errors/OrekitMessages;"));
          MISSING_EARTH_ORIENTATION_PARAMETERS_BETWEEN_DATES_GAP = new OrekitMessages(env->getStaticObjectField(cls, "MISSING_EARTH_ORIENTATION_PARAMETERS_BETWEEN_DATES_GAP", "Lorg/orekit/errors/OrekitMessages;"));
          MISSING_GRAVITY_FIELD_COEFFICIENT_IN_FILE = new OrekitMessages(env->getStaticObjectField(cls, "MISSING_GRAVITY_FIELD_COEFFICIENT_IN_FILE", "Lorg/orekit/errors/OrekitMessages;"));
          MISSING_HEADER = new OrekitMessages(env->getStaticObjectField(cls, "MISSING_HEADER", "Lorg/orekit/errors/OrekitMessages;"));
          MISSING_SECOND_TLE_LINE = new OrekitMessages(env->getStaticObjectField(cls, "MISSING_SECOND_TLE_LINE", "Lorg/orekit/errors/OrekitMessages;"));
          MISSING_SERIE_J_IN_FILE = new OrekitMessages(env->getStaticObjectField(cls, "MISSING_SERIE_J_IN_FILE", "Lorg/orekit/errors/OrekitMessages;"));
          MISSING_STATION_DATA_FOR_EPOCH = new OrekitMessages(env->getStaticObjectField(cls, "MISSING_STATION_DATA_FOR_EPOCH", "Lorg/orekit/errors/OrekitMessages;"));
          MISSING_VELOCITY = new OrekitMessages(env->getStaticObjectField(cls, "MISSING_VELOCITY", "Lorg/orekit/errors/OrekitMessages;"));
          MODIP_GRID_NOT_LOADED = new OrekitMessages(env->getStaticObjectField(cls, "MODIP_GRID_NOT_LOADED", "Lorg/orekit/errors/OrekitMessages;"));
          MOUNPOINT_ALREADY_CONNECTED = new OrekitMessages(env->getStaticObjectField(cls, "MOUNPOINT_ALREADY_CONNECTED", "Lorg/orekit/errors/OrekitMessages;"));
          MULTIPLE_INTERPOLATOR_USED = new OrekitMessages(env->getStaticObjectField(cls, "MULTIPLE_INTERPOLATOR_USED", "Lorg/orekit/errors/OrekitMessages;"));
          MULTIPLE_SHOOTING_UNDERCONSTRAINED = new OrekitMessages(env->getStaticObjectField(cls, "MULTIPLE_SHOOTING_UNDERCONSTRAINED", "Lorg/orekit/errors/OrekitMessages;"));
          NEITHER_DIRECTORY_NOR_ZIP_OR_JAR = new OrekitMessages(env->getStaticObjectField(cls, "NEITHER_DIRECTORY_NOR_ZIP_OR_JAR", "Lorg/orekit/errors/OrekitMessages;"));
          NEQUICK_F2_FM3_NOT_LOADED = new OrekitMessages(env->getStaticObjectField(cls, "NEQUICK_F2_FM3_NOT_LOADED", "Lorg/orekit/errors/OrekitMessages;"));
          NON_CHRONOLOGICALLY_SORTED_ENTRIES = new OrekitMessages(env->getStaticObjectField(cls, "NON_CHRONOLOGICALLY_SORTED_ENTRIES", "Lorg/orekit/errors/OrekitMessages;"));
          NON_CHRONOLOGICAL_DATES_FOR_OBSERVATIONS = new OrekitMessages(env->getStaticObjectField(cls, "NON_CHRONOLOGICAL_DATES_FOR_OBSERVATIONS", "Lorg/orekit/errors/OrekitMessages;"));
          NON_CHRONOLOGICAL_DATES_IN_FILE = new OrekitMessages(env->getStaticObjectField(cls, "NON_CHRONOLOGICAL_DATES_IN_FILE", "Lorg/orekit/errors/OrekitMessages;"));
          NON_COPLANAR_POINTS = new OrekitMessages(env->getStaticObjectField(cls, "NON_COPLANAR_POINTS", "Lorg/orekit/errors/OrekitMessages;"));
          NON_DIFFERENT_DATES_FOR_OBSERVATIONS = new OrekitMessages(env->getStaticObjectField(cls, "NON_DIFFERENT_DATES_FOR_OBSERVATIONS", "Lorg/orekit/errors/OrekitMessages;"));
          NON_EXISTENT_DATE = new OrekitMessages(env->getStaticObjectField(cls, "NON_EXISTENT_DATE", "Lorg/orekit/errors/OrekitMessages;"));
          NON_EXISTENT_DAY_NUMBER_IN_YEAR = new OrekitMessages(env->getStaticObjectField(cls, "NON_EXISTENT_DAY_NUMBER_IN_YEAR", "Lorg/orekit/errors/OrekitMessages;"));
          NON_EXISTENT_GEOMAGNETIC_MODEL = new OrekitMessages(env->getStaticObjectField(cls, "NON_EXISTENT_GEOMAGNETIC_MODEL", "Lorg/orekit/errors/OrekitMessages;"));
          NON_EXISTENT_HMS_TIME = new OrekitMessages(env->getStaticObjectField(cls, "NON_EXISTENT_HMS_TIME", "Lorg/orekit/errors/OrekitMessages;"));
          NON_EXISTENT_MONTH = new OrekitMessages(env->getStaticObjectField(cls, "NON_EXISTENT_MONTH", "Lorg/orekit/errors/OrekitMessages;"));
          NON_EXISTENT_TIME = new OrekitMessages(env->getStaticObjectField(cls, "NON_EXISTENT_TIME", "Lorg/orekit/errors/OrekitMessages;"));
          NON_EXISTENT_WEEK_DATE = new OrekitMessages(env->getStaticObjectField(cls, "NON_EXISTENT_WEEK_DATE", "Lorg/orekit/errors/OrekitMessages;"));
          NON_EXISTENT_YEAR_MONTH_DAY = new OrekitMessages(env->getStaticObjectField(cls, "NON_EXISTENT_YEAR_MONTH_DAY", "Lorg/orekit/errors/OrekitMessages;"));
          NON_PSEUDO_INERTIAL_FRAME = new OrekitMessages(env->getStaticObjectField(cls, "NON_PSEUDO_INERTIAL_FRAME", "Lorg/orekit/errors/OrekitMessages;"));
          NON_PSEUDO_INERTIAL_FRAME_NOT_SUITABLE_AS_REFERENCE_FOR_INERTIAL_FORCES = new OrekitMessages(env->getStaticObjectField(cls, "NON_PSEUDO_INERTIAL_FRAME_NOT_SUITABLE_AS_REFERENCE_FOR_INERTIAL_FORCES", "Lorg/orekit/errors/OrekitMessages;"));
          NON_RESETABLE_STATE = new OrekitMessages(env->getStaticObjectField(cls, "NON_RESETABLE_STATE", "Lorg/orekit/errors/OrekitMessages;"));
          NOT_A_DIRECTORY = new OrekitMessages(env->getStaticObjectField(cls, "NOT_A_DIRECTORY", "Lorg/orekit/errors/OrekitMessages;"));
          NOT_A_JPL_EPHEMERIDES_BINARY_FILE = new OrekitMessages(env->getStaticObjectField(cls, "NOT_A_JPL_EPHEMERIDES_BINARY_FILE", "Lorg/orekit/errors/OrekitMessages;"));
          NOT_A_MARSHALL_SOLAR_ACTIVITY_FUTURE_ESTIMATION_FILE = new OrekitMessages(env->getStaticObjectField(cls, "NOT_A_MARSHALL_SOLAR_ACTIVITY_FUTURE_ESTIMATION_FILE", "Lorg/orekit/errors/OrekitMessages;"));
          NOT_A_SUPPORTED_HATANAKA_COMPRESSED_FILE = new OrekitMessages(env->getStaticObjectField(cls, "NOT_A_SUPPORTED_HATANAKA_COMPRESSED_FILE", "Lorg/orekit/errors/OrekitMessages;"));
          NOT_A_SUPPORTED_IERS_DATA_FILE = new OrekitMessages(env->getStaticObjectField(cls, "NOT_A_SUPPORTED_IERS_DATA_FILE", "Lorg/orekit/errors/OrekitMessages;"));
          NOT_A_SUPPORTED_SEM_ALMANAC_FILE = new OrekitMessages(env->getStaticObjectField(cls, "NOT_A_SUPPORTED_SEM_ALMANAC_FILE", "Lorg/orekit/errors/OrekitMessages;"));
          NOT_A_SUPPORTED_UNIX_COMPRESSED_FILE = new OrekitMessages(env->getStaticObjectField(cls, "NOT_A_SUPPORTED_UNIX_COMPRESSED_FILE", "Lorg/orekit/errors/OrekitMessages;"));
          NOT_A_SUPPORTED_YUMA_ALMANAC_FILE = new OrekitMessages(env->getStaticObjectField(cls, "NOT_A_SUPPORTED_YUMA_ALMANAC_FILE", "Lorg/orekit/errors/OrekitMessages;"));
          NOT_ENOUGH_ATTITUDE_PROVIDERS = new OrekitMessages(env->getStaticObjectField(cls, "NOT_ENOUGH_ATTITUDE_PROVIDERS", "Lorg/orekit/errors/OrekitMessages;"));
          NOT_ENOUGH_CACHED_NEIGHBORS = new OrekitMessages(env->getStaticObjectField(cls, "NOT_ENOUGH_CACHED_NEIGHBORS", "Lorg/orekit/errors/OrekitMessages;"));
          NOT_ENOUGH_DATA = new OrekitMessages(env->getStaticObjectField(cls, "NOT_ENOUGH_DATA", "Lorg/orekit/errors/OrekitMessages;"));
          NOT_ENOUGH_GNSS_FOR_DOP = new OrekitMessages(env->getStaticObjectField(cls, "NOT_ENOUGH_GNSS_FOR_DOP", "Lorg/orekit/errors/OrekitMessages;"));
          NOT_ENOUGH_PROPAGATORS = new OrekitMessages(env->getStaticObjectField(cls, "NOT_ENOUGH_PROPAGATORS", "Lorg/orekit/errors/OrekitMessages;"));
          NOT_POSITIVE_SPACECRAFT_MASS = new OrekitMessages(env->getStaticObjectField(cls, "NOT_POSITIVE_SPACECRAFT_MASS", "Lorg/orekit/errors/OrekitMessages;"));
          NOT_STRICTLY_POSITIVE = new OrekitMessages(env->getStaticObjectField(cls, "NOT_STRICTLY_POSITIVE", "Lorg/orekit/errors/OrekitMessages;"));
          NOT_TLE_LINES = new OrekitMessages(env->getStaticObjectField(cls, "NOT_TLE_LINES", "Lorg/orekit/errors/OrekitMessages;"));
          NOT_VALID_INTERNATIONAL_DESIGNATOR = new OrekitMessages(env->getStaticObjectField(cls, "NOT_VALID_INTERNATIONAL_DESIGNATOR", "Lorg/orekit/errors/OrekitMessages;"));
          NO_CACHED_ENTRIES = new OrekitMessages(env->getStaticObjectField(cls, "NO_CACHED_ENTRIES", "Lorg/orekit/errors/OrekitMessages;"));
          NO_DATA_GENERATED = new OrekitMessages(env->getStaticObjectField(cls, "NO_DATA_GENERATED", "Lorg/orekit/errors/OrekitMessages;"));
          NO_DATA_IN_FILE = new OrekitMessages(env->getStaticObjectField(cls, "NO_DATA_IN_FILE", "Lorg/orekit/errors/OrekitMessages;"));
          NO_DATA_LOADED_FOR_CELESTIAL_BODY = new OrekitMessages(env->getStaticObjectField(cls, "NO_DATA_LOADED_FOR_CELESTIAL_BODY", "Lorg/orekit/errors/OrekitMessages;"));
          NO_EARTH_ORIENTATION_PARAMETERS = new OrekitMessages(env->getStaticObjectField(cls, "NO_EARTH_ORIENTATION_PARAMETERS", "Lorg/orekit/errors/OrekitMessages;"));
          NO_EARTH_ORIENTATION_PARAMETERS_LOADED = new OrekitMessages(env->getStaticObjectField(cls, "NO_EARTH_ORIENTATION_PARAMETERS_LOADED", "Lorg/orekit/errors/OrekitMessages;"));
          NO_ENTRIES_IN_IERS_UTC_TAI_HISTORY_FILE = new OrekitMessages(env->getStaticObjectField(cls, "NO_ENTRIES_IN_IERS_UTC_TAI_HISTORY_FILE", "Lorg/orekit/errors/OrekitMessages;"));
          NO_EPOCH_IN_IONEX_HEADER = new OrekitMessages(env->getStaticObjectField(cls, "NO_EPOCH_IN_IONEX_HEADER", "Lorg/orekit/errors/OrekitMessages;"));
          NO_GRAVITY_FIELD_DATA_LOADED = new OrekitMessages(env->getStaticObjectField(cls, "NO_GRAVITY_FIELD_DATA_LOADED", "Lorg/orekit/errors/OrekitMessages;"));
          NO_IERS_UTC_TAI_HISTORY_DATA_LOADED = new OrekitMessages(env->getStaticObjectField(cls, "NO_IERS_UTC_TAI_HISTORY_DATA_LOADED", "Lorg/orekit/errors/OrekitMessages;"));
          NO_INTERPOLATOR_FOR_STATE_DEFINITION = new OrekitMessages(env->getStaticObjectField(cls, "NO_INTERPOLATOR_FOR_STATE_DEFINITION", "Lorg/orekit/errors/OrekitMessages;"));
          NO_JPL_EPHEMERIDES_BINARY_FILES_FOUND = new OrekitMessages(env->getStaticObjectField(cls, "NO_JPL_EPHEMERIDES_BINARY_FILES_FOUND", "Lorg/orekit/errors/OrekitMessages;"));
          NO_KLOBUCHAR_ALPHA_BETA_IN_FILE = new OrekitMessages(env->getStaticObjectField(cls, "NO_KLOBUCHAR_ALPHA_BETA_IN_FILE", "Lorg/orekit/errors/OrekitMessages;"));
          NO_LATITUDE_LONGITUDE_BONDARIES_IN_IONEX_HEADER = new OrekitMessages(env->getStaticObjectField(cls, "NO_LATITUDE_LONGITUDE_BONDARIES_IN_IONEX_HEADER", "Lorg/orekit/errors/OrekitMessages;"));
          NO_OCEAN_TIDE_DATA_LOADED = new OrekitMessages(env->getStaticObjectField(cls, "NO_OCEAN_TIDE_DATA_LOADED", "Lorg/orekit/errors/OrekitMessages;"));
          NO_PROPAGATOR_CONFIGURED = new OrekitMessages(env->getStaticObjectField(cls, "NO_PROPAGATOR_CONFIGURED", "Lorg/orekit/errors/OrekitMessages;"));
          NO_REFERENCE_DATE_FOR_PARAMETER = new OrekitMessages(env->getStaticObjectField(cls, "NO_REFERENCE_DATE_FOR_PARAMETER", "Lorg/orekit/errors/OrekitMessages;"));
          NO_SEM_ALMANAC_AVAILABLE = new OrekitMessages(env->getStaticObjectField(cls, "NO_SEM_ALMANAC_AVAILABLE", "Lorg/orekit/errors/OrekitMessages;"));
          NO_SOLAR_ACTIVITY_AT_DATE = new OrekitMessages(env->getStaticObjectField(cls, "NO_SOLAR_ACTIVITY_AT_DATE", "Lorg/orekit/errors/OrekitMessages;"));
          NO_SUCH_ITRF_FRAME = new OrekitMessages(env->getStaticObjectField(cls, "NO_SUCH_ITRF_FRAME", "Lorg/orekit/errors/OrekitMessages;"));
          NO_TEC_DATA_IN_FILES_FOR_DATE = new OrekitMessages(env->getStaticObjectField(cls, "NO_TEC_DATA_IN_FILES_FOR_DATE", "Lorg/orekit/errors/OrekitMessages;"));
          NO_TLE_DATA_AVAILABLE = new OrekitMessages(env->getStaticObjectField(cls, "NO_TLE_DATA_AVAILABLE", "Lorg/orekit/errors/OrekitMessages;"));
          NO_TLE_FOR_LAUNCH_YEAR_NUMBER_PIECE = new OrekitMessages(env->getStaticObjectField(cls, "NO_TLE_FOR_LAUNCH_YEAR_NUMBER_PIECE", "Lorg/orekit/errors/OrekitMessages;"));
          NO_TLE_FOR_OBJECT = new OrekitMessages(env->getStaticObjectField(cls, "NO_TLE_FOR_OBJECT", "Lorg/orekit/errors/OrekitMessages;"));
          NO_UNSCENTED_TRANSFORM_CONFIGURED = new OrekitMessages(env->getStaticObjectField(cls, "NO_UNSCENTED_TRANSFORM_CONFIGURED", "Lorg/orekit/errors/OrekitMessages;"));
          NO_VIENNA_ACOEF_OR_ZENITH_DELAY_IN_FILE = new OrekitMessages(env->getStaticObjectField(cls, "NO_VIENNA_ACOEF_OR_ZENITH_DELAY_IN_FILE", "Lorg/orekit/errors/OrekitMessages;"));
          NO_YUMA_ALMANAC_AVAILABLE = new OrekitMessages(env->getStaticObjectField(cls, "NO_YUMA_ALMANAC_AVAILABLE", "Lorg/orekit/errors/OrekitMessages;"));
          NULL_ARGUMENT = new OrekitMessages(env->getStaticObjectField(cls, "NULL_ARGUMENT", "Lorg/orekit/errors/OrekitMessages;"));
          NULL_PARENT_FOR_FRAME = new OrekitMessages(env->getStaticObjectField(cls, "NULL_PARENT_FOR_FRAME", "Lorg/orekit/errors/OrekitMessages;"));
          OCEAN_TIDE_DATA_DEGREE_ORDER_LIMITS = new OrekitMessages(env->getStaticObjectField(cls, "OCEAN_TIDE_DATA_DEGREE_ORDER_LIMITS", "Lorg/orekit/errors/OrekitMessages;"));
          OCEAN_TIDE_LOAD_DEFORMATION_LIMITS = new OrekitMessages(env->getStaticObjectField(cls, "OCEAN_TIDE_LOAD_DEFORMATION_LIMITS", "Lorg/orekit/errors/OrekitMessages;"));
          ORBITS_MUS_MISMATCH = new OrekitMessages(env->getStaticObjectField(cls, "ORBITS_MUS_MISMATCH", "Lorg/orekit/errors/OrekitMessages;"));
          ORBIT_AND_ATTITUDE_DATES_MISMATCH = new OrekitMessages(env->getStaticObjectField(cls, "ORBIT_AND_ATTITUDE_DATES_MISMATCH", "Lorg/orekit/errors/OrekitMessages;"));
          ORBIT_ANOMALY_OUT_OF_HYPERBOLIC_RANGE = new OrekitMessages(env->getStaticObjectField(cls, "ORBIT_ANOMALY_OUT_OF_HYPERBOLIC_RANGE", "Lorg/orekit/errors/OrekitMessages;"));
          ORBIT_A_E_MISMATCH_WITH_CONIC_TYPE = new OrekitMessages(env->getStaticObjectField(cls, "ORBIT_A_E_MISMATCH_WITH_CONIC_TYPE", "Lorg/orekit/errors/OrekitMessages;"));
          ORBIT_TYPE_NOT_ALLOWED = new OrekitMessages(env->getStaticObjectField(cls, "ORBIT_TYPE_NOT_ALLOWED", "Lorg/orekit/errors/OrekitMessages;"));
          OUT_OF_RANGE_BODY_EPHEMERIDES_DATE = new OrekitMessages(env->getStaticObjectField(cls, "OUT_OF_RANGE_BODY_EPHEMERIDES_DATE", "Lorg/orekit/errors/OrekitMessages;"));
          OUT_OF_RANGE_DATE = new OrekitMessages(env->getStaticObjectField(cls, "OUT_OF_RANGE_DATE", "Lorg/orekit/errors/OrekitMessages;"));
          OUT_OF_RANGE_DERIVATION_ORDER = new OrekitMessages(env->getStaticObjectField(cls, "OUT_OF_RANGE_DERIVATION_ORDER", "Lorg/orekit/errors/OrekitMessages;"));
          OUT_OF_RANGE_EPHEMERIDES_DATE_AFTER = new OrekitMessages(env->getStaticObjectField(cls, "OUT_OF_RANGE_EPHEMERIDES_DATE_AFTER", "Lorg/orekit/errors/OrekitMessages;"));
          OUT_OF_RANGE_EPHEMERIDES_DATE_BEFORE = new OrekitMessages(env->getStaticObjectField(cls, "OUT_OF_RANGE_EPHEMERIDES_DATE_BEFORE", "Lorg/orekit/errors/OrekitMessages;"));
          OUT_OF_RANGE_SECONDS_NUMBER = new OrekitMessages(env->getStaticObjectField(cls, "OUT_OF_RANGE_SECONDS_NUMBER", "Lorg/orekit/errors/OrekitMessages;"));
          OUT_OF_RANGE_SECONDS_NUMBER_DETAIL = new OrekitMessages(env->getStaticObjectField(cls, "OUT_OF_RANGE_SECONDS_NUMBER_DETAIL", "Lorg/orekit/errors/OrekitMessages;"));
          OUT_OF_RANGE_TIME_TRANSFORM = new OrekitMessages(env->getStaticObjectField(cls, "OUT_OF_RANGE_TIME_TRANSFORM", "Lorg/orekit/errors/OrekitMessages;"));
          PARAMETER_NOT_SET = new OrekitMessages(env->getStaticObjectField(cls, "PARAMETER_NOT_SET", "Lorg/orekit/errors/OrekitMessages;"));
          PARAMETER_PERIODS_HAS_ALREADY_BEEN_SET = new OrekitMessages(env->getStaticObjectField(cls, "PARAMETER_PERIODS_HAS_ALREADY_BEEN_SET", "Lorg/orekit/errors/OrekitMessages;"));
          PARAMETER_WITH_SEVERAL_ESTIMATED_VALUES = new OrekitMessages(env->getStaticObjectField(cls, "PARAMETER_WITH_SEVERAL_ESTIMATED_VALUES", "Lorg/orekit/errors/OrekitMessages;"));
          POINT_INSIDE_ELLIPSOID = new OrekitMessages(env->getStaticObjectField(cls, "POINT_INSIDE_ELLIPSOID", "Lorg/orekit/errors/OrekitMessages;"));
          POLAR_TRAJECTORY = new OrekitMessages(env->getStaticObjectField(cls, "POLAR_TRAJECTORY", "Lorg/orekit/errors/OrekitMessages;"));
          POSITIVE_FLOW_RATE = new OrekitMessages(env->getStaticObjectField(cls, "POSITIVE_FLOW_RATE", "Lorg/orekit/errors/OrekitMessages;"));
          SATELLITE_COLLIDED_WITH_TARGET = new OrekitMessages(env->getStaticObjectField(cls, "SATELLITE_COLLIDED_WITH_TARGET", "Lorg/orekit/errors/OrekitMessages;"));
          SEVERAL_REFERENCE_DATES_IN_GRAVITY_FIELD = new OrekitMessages(env->getStaticObjectField(cls, "SEVERAL_REFERENCE_DATES_IN_GRAVITY_FIELD", "Lorg/orekit/errors/OrekitMessages;"));
          SINGULAR_JACOBIAN_FOR_ORBIT_TYPE = new OrekitMessages(env->getStaticObjectField(cls, "SINGULAR_JACOBIAN_FOR_ORBIT_TYPE", "Lorg/orekit/errors/OrekitMessages;"));
          SOURCETABLE_PARSE_ERROR = new OrekitMessages(env->getStaticObjectField(cls, "SOURCETABLE_PARSE_ERROR", "Lorg/orekit/errors/OrekitMessages;"));
          SP3_INCOMPATIBLE_FILE_METADATA = new OrekitMessages(env->getStaticObjectField(cls, "SP3_INCOMPATIBLE_FILE_METADATA", "Lorg/orekit/errors/OrekitMessages;"));
          SP3_INCOMPATIBLE_SATELLITE_MEDATADA = new OrekitMessages(env->getStaticObjectField(cls, "SP3_INCOMPATIBLE_SATELLITE_MEDATADA", "Lorg/orekit/errors/OrekitMessages;"));
          SP3_INVALID_HEADER_ENTRY = new OrekitMessages(env->getStaticObjectField(cls, "SP3_INVALID_HEADER_ENTRY", "Lorg/orekit/errors/OrekitMessages;"));
          SP3_NUMBER_OF_EPOCH_MISMATCH = new OrekitMessages(env->getStaticObjectField(cls, "SP3_NUMBER_OF_EPOCH_MISMATCH", "Lorg/orekit/errors/OrekitMessages;"));
          SP3_TOO_MANY_SATELLITES_FOR_VERSION = new OrekitMessages(env->getStaticObjectField(cls, "SP3_TOO_MANY_SATELLITES_FOR_VERSION", "Lorg/orekit/errors/OrekitMessages;"));
          SP3_UNSUPPORTED_VERSION = new OrekitMessages(env->getStaticObjectField(cls, "SP3_UNSUPPORTED_VERSION", "Lorg/orekit/errors/OrekitMessages;"));
          STATE_AND_COVARIANCE_DATES_MISMATCH = new OrekitMessages(env->getStaticObjectField(cls, "STATE_AND_COVARIANCE_DATES_MISMATCH", "Lorg/orekit/errors/OrekitMessages;"));
          STATE_AND_PARAMETERS_JACOBIANS_ROWS_MISMATCH = new OrekitMessages(env->getStaticObjectField(cls, "STATE_AND_PARAMETERS_JACOBIANS_ROWS_MISMATCH", "Lorg/orekit/errors/OrekitMessages;"));
          STATE_JACOBIAN_NOT_6X6 = new OrekitMessages(env->getStaticObjectField(cls, "STATE_JACOBIAN_NOT_6X6", "Lorg/orekit/errors/OrekitMessages;"));
          STATE_JACOBIAN_NOT_INITIALIZED = new OrekitMessages(env->getStaticObjectField(cls, "STATE_JACOBIAN_NOT_INITIALIZED", "Lorg/orekit/errors/OrekitMessages;"));
          STATION_NOT_FOUND = new OrekitMessages(env->getStaticObjectField(cls, "STATION_NOT_FOUND", "Lorg/orekit/errors/OrekitMessages;"));
          STEC_INTEGRATION_DID_NOT_CONVERGE = new OrekitMessages(env->getStaticObjectField(cls, "STEC_INTEGRATION_DID_NOT_CONVERGE", "Lorg/orekit/errors/OrekitMessages;"));
          STK_INVALID_OR_UNSUPPORTED_COORDINATE_SYSTEM = new OrekitMessages(env->getStaticObjectField(cls, "STK_INVALID_OR_UNSUPPORTED_COORDINATE_SYSTEM", "Lorg/orekit/errors/OrekitMessages;"));
          STK_UNEXPECTED_END_OF_FILE = new OrekitMessages(env->getStaticObjectField(cls, "STK_UNEXPECTED_END_OF_FILE", "Lorg/orekit/errors/OrekitMessages;"));
          STK_UNMAPPED_COORDINATE_SYSTEM = new OrekitMessages(env->getStaticObjectField(cls, "STK_UNMAPPED_COORDINATE_SYSTEM", "Lorg/orekit/errors/OrekitMessages;"));
          STREAM_REQUIRES_NMEA_FIX = new OrekitMessages(env->getStaticObjectField(cls, "STREAM_REQUIRES_NMEA_FIX", "Lorg/orekit/errors/OrekitMessages;"));
          TLE_CHECKSUM_ERROR = new OrekitMessages(env->getStaticObjectField(cls, "TLE_CHECKSUM_ERROR", "Lorg/orekit/errors/OrekitMessages;"));
          TLE_INVALID_PARAMETER = new OrekitMessages(env->getStaticObjectField(cls, "TLE_INVALID_PARAMETER", "Lorg/orekit/errors/OrekitMessages;"));
          TLE_LINES_DO_NOT_REFER_TO_SAME_OBJECT = new OrekitMessages(env->getStaticObjectField(cls, "TLE_LINES_DO_NOT_REFER_TO_SAME_OBJECT", "Lorg/orekit/errors/OrekitMessages;"));
          TOO_LARGE_DATA_TYPE = new OrekitMessages(env->getStaticObjectField(cls, "TOO_LARGE_DATA_TYPE", "Lorg/orekit/errors/OrekitMessages;"));
          TOO_LARGE_DEGREE_FOR_GRAVITY_FIELD = new OrekitMessages(env->getStaticObjectField(cls, "TOO_LARGE_DEGREE_FOR_GRAVITY_FIELD", "Lorg/orekit/errors/OrekitMessages;"));
          TOO_LARGE_ECCENTRICITY_FOR_PROPAGATION_MODEL = new OrekitMessages(env->getStaticObjectField(cls, "TOO_LARGE_ECCENTRICITY_FOR_PROPAGATION_MODEL", "Lorg/orekit/errors/OrekitMessages;"));
          TOO_LARGE_ORDER_FOR_GRAVITY_FIELD = new OrekitMessages(env->getStaticObjectField(cls, "TOO_LARGE_ORDER_FOR_GRAVITY_FIELD", "Lorg/orekit/errors/OrekitMessages;"));
          TOO_SHORT_TRANSITION_TIME_FOR_ATTITUDES_SWITCH = new OrekitMessages(env->getStaticObjectField(cls, "TOO_SHORT_TRANSITION_TIME_FOR_ATTITUDES_SWITCH", "Lorg/orekit/errors/OrekitMessages;"));
          TOO_SMALL_SCALE_FOR_PARAMETER = new OrekitMessages(env->getStaticObjectField(cls, "TOO_SMALL_SCALE_FOR_PARAMETER", "Lorg/orekit/errors/OrekitMessages;"));
          TRAJECTORY_INSIDE_BRILLOUIN_SPHERE = new OrekitMessages(env->getStaticObjectField(cls, "TRAJECTORY_INSIDE_BRILLOUIN_SPHERE", "Lorg/orekit/errors/OrekitMessages;"));
          TRAJECTORY_NOT_CROSSING_XZPLANE = new OrekitMessages(env->getStaticObjectField(cls, "TRAJECTORY_NOT_CROSSING_XZPLANE", "Lorg/orekit/errors/OrekitMessages;"));
          UNABLE_TO_COMPUTE_BROUWER_LYDDANE_MEAN_PARAMETERS = new OrekitMessages(env->getStaticObjectField(cls, "UNABLE_TO_COMPUTE_BROUWER_LYDDANE_MEAN_PARAMETERS", "Lorg/orekit/errors/OrekitMessages;"));
          UNABLE_TO_COMPUTE_DSST_MEAN_PARAMETERS = new OrekitMessages(env->getStaticObjectField(cls, "UNABLE_TO_COMPUTE_DSST_MEAN_PARAMETERS", "Lorg/orekit/errors/OrekitMessages;"));
          UNABLE_TO_COMPUTE_ECKSTEIN_HECHLER_MEAN_PARAMETERS = new OrekitMessages(env->getStaticObjectField(cls, "UNABLE_TO_COMPUTE_ECKSTEIN_HECHLER_MEAN_PARAMETERS", "Lorg/orekit/errors/OrekitMessages;"));
          UNABLE_TO_COMPUTE_HYPERBOLIC_ECCENTRIC_ANOMALY = new OrekitMessages(env->getStaticObjectField(cls, "UNABLE_TO_COMPUTE_HYPERBOLIC_ECCENTRIC_ANOMALY", "Lorg/orekit/errors/OrekitMessages;"));
          UNABLE_TO_COMPUTE_TLE = new OrekitMessages(env->getStaticObjectField(cls, "UNABLE_TO_COMPUTE_TLE", "Lorg/orekit/errors/OrekitMessages;"));
          UNABLE_TO_FIND_FILE = new OrekitMessages(env->getStaticObjectField(cls, "UNABLE_TO_FIND_FILE", "Lorg/orekit/errors/OrekitMessages;"));
          UNABLE_TO_FIND_RESOURCE = new OrekitMessages(env->getStaticObjectField(cls, "UNABLE_TO_FIND_RESOURCE", "Lorg/orekit/errors/OrekitMessages;"));
          UNABLE_TO_GENERATE_NEW_DATA_AFTER = new OrekitMessages(env->getStaticObjectField(cls, "UNABLE_TO_GENERATE_NEW_DATA_AFTER", "Lorg/orekit/errors/OrekitMessages;"));
          UNABLE_TO_GENERATE_NEW_DATA_BEFORE = new OrekitMessages(env->getStaticObjectField(cls, "UNABLE_TO_GENERATE_NEW_DATA_BEFORE", "Lorg/orekit/errors/OrekitMessages;"));
          UNABLE_TO_PARSE_ELEMENT_IN_FILE = new OrekitMessages(env->getStaticObjectField(cls, "UNABLE_TO_PARSE_ELEMENT_IN_FILE", "Lorg/orekit/errors/OrekitMessages;"));
          UNABLE_TO_PARSE_LINE_IN_FILE = new OrekitMessages(env->getStaticObjectField(cls, "UNABLE_TO_PARSE_LINE_IN_FILE", "Lorg/orekit/errors/OrekitMessages;"));
          UNABLE_TO_READ_JPL_HEADER = new OrekitMessages(env->getStaticObjectField(cls, "UNABLE_TO_READ_JPL_HEADER", "Lorg/orekit/errors/OrekitMessages;"));
          UNDEFINED_ABSOLUTE_PVCOORDINATES = new OrekitMessages(env->getStaticObjectField(cls, "UNDEFINED_ABSOLUTE_PVCOORDINATES", "Lorg/orekit/errors/OrekitMessages;"));
          UNDEFINED_ORBIT = new OrekitMessages(env->getStaticObjectField(cls, "UNDEFINED_ORBIT", "Lorg/orekit/errors/OrekitMessages;"));
          UNEXPECTED_CONTENT_TYPE = new OrekitMessages(env->getStaticObjectField(cls, "UNEXPECTED_CONTENT_TYPE", "Lorg/orekit/errors/OrekitMessages;"));
          UNEXPECTED_DATA_AFTER_LINE_IN_FILE = new OrekitMessages(env->getStaticObjectField(cls, "UNEXPECTED_DATA_AFTER_LINE_IN_FILE", "Lorg/orekit/errors/OrekitMessages;"));
          UNEXPECTED_DATA_AT_LINE_IN_FILE = new OrekitMessages(env->getStaticObjectField(cls, "UNEXPECTED_DATA_AT_LINE_IN_FILE", "Lorg/orekit/errors/OrekitMessages;"));
          UNEXPECTED_END_OF_FILE = new OrekitMessages(env->getStaticObjectField(cls, "UNEXPECTED_END_OF_FILE", "Lorg/orekit/errors/OrekitMessages;"));
          UNEXPECTED_END_OF_FILE_AFTER_LINE = new OrekitMessages(env->getStaticObjectField(cls, "UNEXPECTED_END_OF_FILE_AFTER_LINE", "Lorg/orekit/errors/OrekitMessages;"));
          UNEXPECTED_FILE_FORMAT_ERROR_FOR_LOADER = new OrekitMessages(env->getStaticObjectField(cls, "UNEXPECTED_FILE_FORMAT_ERROR_FOR_LOADER", "Lorg/orekit/errors/OrekitMessages;"));
          UNEXPECTED_FORMAT_FOR_ILRS_FILE = new OrekitMessages(env->getStaticObjectField(cls, "UNEXPECTED_FORMAT_FOR_ILRS_FILE", "Lorg/orekit/errors/OrekitMessages;"));
          UNEXPECTED_TWO_ELEVATION_VALUES_FOR_ONE_AZIMUTH = new OrekitMessages(env->getStaticObjectField(cls, "UNEXPECTED_TWO_ELEVATION_VALUES_FOR_ONE_AZIMUTH", "Lorg/orekit/errors/OrekitMessages;"));
          UNINITIALIZED_VALUE_FOR_KEY = new OrekitMessages(env->getStaticObjectField(cls, "UNINITIALIZED_VALUE_FOR_KEY", "Lorg/orekit/errors/OrekitMessages;"));
          UNKNOWN_ADDITIONAL_STATE = new OrekitMessages(env->getStaticObjectField(cls, "UNKNOWN_ADDITIONAL_STATE", "Lorg/orekit/errors/OrekitMessages;"));
          UNKNOWN_AUTHENTICATION_METHOD = new OrekitMessages(env->getStaticObjectField(cls, "UNKNOWN_AUTHENTICATION_METHOD", "Lorg/orekit/errors/OrekitMessages;"));
          UNKNOWN_CARRIER_PHASE_CODE = new OrekitMessages(env->getStaticObjectField(cls, "UNKNOWN_CARRIER_PHASE_CODE", "Lorg/orekit/errors/OrekitMessages;"));
          UNKNOWN_CLOCK_DATA_TYPE = new OrekitMessages(env->getStaticObjectField(cls, "UNKNOWN_CLOCK_DATA_TYPE", "Lorg/orekit/errors/OrekitMessages;"));
          UNKNOWN_DATA_FORMAT = new OrekitMessages(env->getStaticObjectField(cls, "UNKNOWN_DATA_FORMAT", "Lorg/orekit/errors/OrekitMessages;"));
          UNKNOWN_ENCODED_MESSAGE_NUMBER = new OrekitMessages(env->getStaticObjectField(cls, "UNKNOWN_ENCODED_MESSAGE_NUMBER", "Lorg/orekit/errors/OrekitMessages;"));
          UNKNOWN_HOST = new OrekitMessages(env->getStaticObjectField(cls, "UNKNOWN_HOST", "Lorg/orekit/errors/OrekitMessages;"));
          UNKNOWN_MONTH = new OrekitMessages(env->getStaticObjectField(cls, "UNKNOWN_MONTH", "Lorg/orekit/errors/OrekitMessages;"));
          UNKNOWN_NAVIGATION_SYSTEM = new OrekitMessages(env->getStaticObjectField(cls, "UNKNOWN_NAVIGATION_SYSTEM", "Lorg/orekit/errors/OrekitMessages;"));
          UNKNOWN_RINEX_FREQUENCY = new OrekitMessages(env->getStaticObjectField(cls, "UNKNOWN_RINEX_FREQUENCY", "Lorg/orekit/errors/OrekitMessages;"));
          UNKNOWN_SATELLITE_ANTENNA_CODE = new OrekitMessages(env->getStaticObjectField(cls, "UNKNOWN_SATELLITE_ANTENNA_CODE", "Lorg/orekit/errors/OrekitMessages;"));
          UNKNOWN_SATELLITE_SYSTEM = new OrekitMessages(env->getStaticObjectField(cls, "UNKNOWN_SATELLITE_SYSTEM", "Lorg/orekit/errors/OrekitMessages;"));
          UNKNOWN_TIME_SYSTEM = new OrekitMessages(env->getStaticObjectField(cls, "UNKNOWN_TIME_SYSTEM", "Lorg/orekit/errors/OrekitMessages;"));
          UNKNOWN_UNIT = new OrekitMessages(env->getStaticObjectField(cls, "UNKNOWN_UNIT", "Lorg/orekit/errors/OrekitMessages;"));
          UNKNOWN_UTC_ID = new OrekitMessages(env->getStaticObjectField(cls, "UNKNOWN_UTC_ID", "Lorg/orekit/errors/OrekitMessages;"));
          UNSUPPORTED_FILE_FORMAT = new OrekitMessages(env->getStaticObjectField(cls, "UNSUPPORTED_FILE_FORMAT", "Lorg/orekit/errors/OrekitMessages;"));
          UNSUPPORTED_FILE_FORMAT_VERSION = new OrekitMessages(env->getStaticObjectField(cls, "UNSUPPORTED_FILE_FORMAT_VERSION", "Lorg/orekit/errors/OrekitMessages;"));
          UNSUPPORTED_FREQUENCY_FOR_ANTENNA = new OrekitMessages(env->getStaticObjectField(cls, "UNSUPPORTED_FREQUENCY_FOR_ANTENNA", "Lorg/orekit/errors/OrekitMessages;"));
          UNSUPPORTED_LOCAL_ORBITAL_FRAME = new OrekitMessages(env->getStaticObjectField(cls, "UNSUPPORTED_LOCAL_ORBITAL_FRAME", "Lorg/orekit/errors/OrekitMessages;"));
          UNSUPPORTED_PARAMETER_NAME = new OrekitMessages(env->getStaticObjectField(cls, "UNSUPPORTED_PARAMETER_NAME", "Lorg/orekit/errors/OrekitMessages;"));
          UNSUPPORTED_TIME_TRANSFORM = new OrekitMessages(env->getStaticObjectField(cls, "UNSUPPORTED_TIME_TRANSFORM", "Lorg/orekit/errors/OrekitMessages;"));
          UNSUPPORTED_TRANSFORM = new OrekitMessages(env->getStaticObjectField(cls, "UNSUPPORTED_TRANSFORM", "Lorg/orekit/errors/OrekitMessages;"));
          VALUE_NOT_FOUND = new OrekitMessages(env->getStaticObjectField(cls, "VALUE_NOT_FOUND", "Lorg/orekit/errors/OrekitMessages;"));
          VIENNA_ACOEF_OR_ZENITH_DELAY_NOT_AVAILABLE_FOR_DATE = new OrekitMessages(env->getStaticObjectField(cls, "VIENNA_ACOEF_OR_ZENITH_DELAY_NOT_AVAILABLE_FOR_DATE", "Lorg/orekit/errors/OrekitMessages;"));
          VIENNA_ACOEF_OR_ZENITH_DELAY_NOT_LOADED = new OrekitMessages(env->getStaticObjectField(cls, "VIENNA_ACOEF_OR_ZENITH_DELAY_NOT_LOADED", "Lorg/orekit/errors/OrekitMessages;"));
          WRONG_COLUMNS_NUMBER = new OrekitMessages(env->getStaticObjectField(cls, "WRONG_COLUMNS_NUMBER", "Lorg/orekit/errors/OrekitMessages;"));
          WRONG_DEGREE_OR_ORDER = new OrekitMessages(env->getStaticObjectField(cls, "WRONG_DEGREE_OR_ORDER", "Lorg/orekit/errors/OrekitMessages;"));
          WRONG_EOP_INTERPOLATION_DEGREE = new OrekitMessages(env->getStaticObjectField(cls, "WRONG_EOP_INTERPOLATION_DEGREE", "Lorg/orekit/errors/OrekitMessages;"));
          WRONG_INTERPOLATOR_DEFINED_FOR_STATE_INTERPOLATION = new OrekitMessages(env->getStaticObjectField(cls, "WRONG_INTERPOLATOR_DEFINED_FOR_STATE_INTERPOLATION", "Lorg/orekit/errors/OrekitMessages;"));
          WRONG_NB_COMPONENTS = new OrekitMessages(env->getStaticObjectField(cls, "WRONG_NB_COMPONENTS", "Lorg/orekit/errors/OrekitMessages;"));
          WRONG_ORBIT_PARAMETERS_TYPE = new OrekitMessages(env->getStaticObjectField(cls, "WRONG_ORBIT_PARAMETERS_TYPE", "Lorg/orekit/errors/OrekitMessages;"));
          WRONG_PARSING_TYPE = new OrekitMessages(env->getStaticObjectField(cls, "WRONG_PARSING_TYPE", "Lorg/orekit/errors/OrekitMessages;"));
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ::java::lang::String OrekitMessages::getLocalizedString(const ::java::util::Locale & a0) const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getLocalizedString_26070c28e6ea354d], a0.this$));
      }

      ::java::lang::String OrekitMessages::getSourceString() const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getSourceString_1c1fa1e935d6cdcf]));
      }

      OrekitMessages OrekitMessages::valueOf(const ::java::lang::String & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return OrekitMessages(env->callStaticObjectMethod(cls, mids$[mid_valueOf_43a6a332bae68a73], a0.this$));
      }

      JArray< OrekitMessages > OrekitMessages::values()
      {
        jclass cls = env->getClass(initializeClass);
        return JArray< OrekitMessages >(env->callStaticObjectMethod(cls, mids$[mid_values_3489d3ecfa550bc0]));
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"
#include "org/orekit/errors/OrekitMessages$UTF8Control.h"

namespace org {
  namespace orekit {
    namespace errors {
      static PyObject *t_OrekitMessages_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_OrekitMessages_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_OrekitMessages_of_(t_OrekitMessages *self, PyObject *args);
      static PyObject *t_OrekitMessages_getLocalizedString(t_OrekitMessages *self, PyObject *arg);
      static PyObject *t_OrekitMessages_getSourceString(t_OrekitMessages *self);
      static PyObject *t_OrekitMessages_valueOf(PyTypeObject *type, PyObject *args);
      static PyObject *t_OrekitMessages_values(PyTypeObject *type);
      static PyObject *t_OrekitMessages_get__sourceString(t_OrekitMessages *self, void *data);
      static PyObject *t_OrekitMessages_get__parameters_(t_OrekitMessages *self, void *data);
      static PyGetSetDef t_OrekitMessages__fields_[] = {
        DECLARE_GET_FIELD(t_OrekitMessages, sourceString),
        DECLARE_GET_FIELD(t_OrekitMessages, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_OrekitMessages__methods_[] = {
        DECLARE_METHOD(t_OrekitMessages, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_OrekitMessages, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_OrekitMessages, of_, METH_VARARGS),
        DECLARE_METHOD(t_OrekitMessages, getLocalizedString, METH_O),
        DECLARE_METHOD(t_OrekitMessages, getSourceString, METH_NOARGS),
        DECLARE_METHOD(t_OrekitMessages, valueOf, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_OrekitMessages, values, METH_NOARGS | METH_CLASS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(OrekitMessages)[] = {
        { Py_tp_methods, t_OrekitMessages__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_OrekitMessages__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(OrekitMessages)[] = {
        &PY_TYPE_DEF(::java::lang::Enum),
        NULL
      };

      DEFINE_TYPE(OrekitMessages, t_OrekitMessages, OrekitMessages);
      PyObject *t_OrekitMessages::wrap_Object(const OrekitMessages& object, PyTypeObject *p0)
      {
        PyObject *obj = t_OrekitMessages::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_OrekitMessages *self = (t_OrekitMessages *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_OrekitMessages::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_OrekitMessages::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_OrekitMessages *self = (t_OrekitMessages *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_OrekitMessages::install(PyObject *module)
      {
        installType(&PY_TYPE(OrekitMessages), &PY_TYPE_DEF(OrekitMessages), module, "OrekitMessages", 0);
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "UTF8Control", make_descriptor(&PY_TYPE_DEF(OrekitMessages$UTF8Control)));
      }

      void t_OrekitMessages::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "class_", make_descriptor(OrekitMessages::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "wrapfn_", make_descriptor(t_OrekitMessages::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "boxfn_", make_descriptor(boxObject));
        env->getClass(OrekitMessages::initializeClass);
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "ADDITIONAL_STATE_NAME_ALREADY_IN_USE", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::ADDITIONAL_STATE_NAME_ALREADY_IN_USE)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "ALMOST_CRITICALLY_INCLINED_ORBIT", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::ALMOST_CRITICALLY_INCLINED_ORBIT)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "ALMOST_EQUATORIAL_ORBIT", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::ALMOST_EQUATORIAL_ORBIT)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "ALTITUDE_BELOW_ALLOWED_THRESHOLD", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::ALTITUDE_BELOW_ALLOWED_THRESHOLD)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "ANGLE_TYPE_NOT_SUPPORTED", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::ANGLE_TYPE_NOT_SUPPORTED)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "ATTEMPT_TO_GENERATE_MALFORMED_FILE", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::ATTEMPT_TO_GENERATE_MALFORMED_FILE)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "ATTITUDE_POINTING_LAW_DOES_NOT_POINT_TO_GROUND", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::ATTITUDE_POINTING_LAW_DOES_NOT_POINT_TO_GROUND)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "CANNOT_CHANGE_COVARIANCE_TYPE_IF_DEFINED_IN_LOF", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::CANNOT_CHANGE_COVARIANCE_TYPE_IF_DEFINED_IN_LOF)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "CANNOT_CHANGE_COVARIANCE_TYPE_IF_DEFINED_IN_NON_INERTIAL_FRAME", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::CANNOT_CHANGE_COVARIANCE_TYPE_IF_DEFINED_IN_NON_INERTIAL_FRAME)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "CANNOT_COMPUTE_AIMING_AT_SINGULAR_POINT", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::CANNOT_COMPUTE_AIMING_AT_SINGULAR_POINT)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "CANNOT_COMPUTE_LAGRANGIAN", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::CANNOT_COMPUTE_LAGRANGIAN)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "CANNOT_ESTIMATE_PRECESSION_WITHOUT_PROPER_DERIVATIVES", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::CANNOT_ESTIMATE_PRECESSION_WITHOUT_PROPER_DERIVATIVES)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "CANNOT_FIND_SATELLITE_IN_SYSTEM", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::CANNOT_FIND_SATELLITE_IN_SYSTEM)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "CANNOT_PARSE_BOTH_TAU_AND_GAMMA", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::CANNOT_PARSE_BOTH_TAU_AND_GAMMA)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "CANNOT_PARSE_GNSS_DATA", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::CANNOT_PARSE_GNSS_DATA)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "CANNOT_PARSE_SOURCETABLE", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::CANNOT_PARSE_SOURCETABLE)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "CANNOT_START_PROPAGATION_FROM_INFINITY", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::CANNOT_START_PROPAGATION_FROM_INFINITY)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "CCSDS_DATE_INVALID_LENGTH_TIME_FIELD", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::CCSDS_DATE_INVALID_LENGTH_TIME_FIELD)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "CCSDS_DATE_INVALID_PREAMBLE_FIELD", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::CCSDS_DATE_INVALID_PREAMBLE_FIELD)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "CCSDS_DATE_MISSING_AGENCY_EPOCH", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::CCSDS_DATE_MISSING_AGENCY_EPOCH)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "CCSDS_DIFFERENT_LVLH_DEFINITION", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::CCSDS_DIFFERENT_LVLH_DEFINITION)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "CCSDS_INCOMPATIBLE_KEYS_BOTH_USED", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::CCSDS_INCOMPATIBLE_KEYS_BOTH_USED)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "CCSDS_INCOMPLETE_DATA", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::CCSDS_INCOMPLETE_DATA)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "CCSDS_INCONSISTENT_NUMBER_OF_ATTITUDE_STATES", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::CCSDS_INCONSISTENT_NUMBER_OF_ATTITUDE_STATES)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "CCSDS_INCONSISTENT_TIME_SYSTEMS", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::CCSDS_INCONSISTENT_TIME_SYSTEMS)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "CCSDS_INVALID_FRAME", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::CCSDS_INVALID_FRAME)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "CCSDS_INVALID_ROTATION_SEQUENCE", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::CCSDS_INVALID_ROTATION_SEQUENCE)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "CCSDS_KEYWORD_NOT_ALLOWED_IN_VERSION", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::CCSDS_KEYWORD_NOT_ALLOWED_IN_VERSION)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "CCSDS_MANEUVER_MISSING_TIME", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::CCSDS_MANEUVER_MISSING_TIME)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "CCSDS_MANEUVER_UNITS_WRONG_NB_COMPONENTS", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::CCSDS_MANEUVER_UNITS_WRONG_NB_COMPONENTS)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "CCSDS_MISSING_KEYWORD", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::CCSDS_MISSING_KEYWORD)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "CCSDS_MISSING_SENSOR_INDEX", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::CCSDS_MISSING_SENSOR_INDEX)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "CCSDS_SENSOR_INDEX_ALREADY_USED", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::CCSDS_SENSOR_INDEX_ALREADY_USED)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "CCSDS_TDM_KEYWORD_NOT_FOUND", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::CCSDS_TDM_KEYWORD_NOT_FOUND)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "CCSDS_TDM_MISSING_RANGE_UNITS_CONVERTER", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::CCSDS_TDM_MISSING_RANGE_UNITS_CONVERTER)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "CCSDS_TIME_SYSTEM_NOT_IMPLEMENTED", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::CCSDS_TIME_SYSTEM_NOT_IMPLEMENTED)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "CCSDS_TIME_SYSTEM_NOT_READ_YET", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::CCSDS_TIME_SYSTEM_NOT_READ_YET)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "CCSDS_UNEXPECTED_KEYWORD", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::CCSDS_UNEXPECTED_KEYWORD)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "CCSDS_UNKNOWN_ATTITUDE_TYPE", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::CCSDS_UNKNOWN_ATTITUDE_TYPE)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "CCSDS_UNKNOWN_CONVENTIONS", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::CCSDS_UNKNOWN_CONVENTIONS)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "CCSDS_UNKNOWN_GM", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::CCSDS_UNKNOWN_GM)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "CCSDS_UNKNOWN_SPACECRAFT_MASS", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::CCSDS_UNKNOWN_SPACECRAFT_MASS)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "CCSDS_UNSUPPORTED_ELEMENT_SET_TYPE", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::CCSDS_UNSUPPORTED_ELEMENT_SET_TYPE)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "CCSDS_UNSUPPORTED_RETROGRADE_EQUINOCTIAL", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::CCSDS_UNSUPPORTED_RETROGRADE_EQUINOCTIAL)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "CLOCK_FILE_UNSUPPORTED_VERSION", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::CLOCK_FILE_UNSUPPORTED_VERSION)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "CONNECTION_ERROR", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::CONNECTION_ERROR)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "CORRUPTED_FILE", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::CORRUPTED_FILE)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "CPF_UNEXPECTED_END_OF_FILE", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::CPF_UNEXPECTED_END_OF_FILE)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "CRD_UNEXPECTED_END_OF_FILE", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::CRD_UNEXPECTED_END_OF_FILE)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "DATA_ROOT_DIRECTORY_DOES_NOT_EXIST", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::DATA_ROOT_DIRECTORY_DOES_NOT_EXIST)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "DATES_MISMATCH", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::DATES_MISMATCH)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "DIFFERENT_STATE_DEFINITION", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::DIFFERENT_STATE_DEFINITION)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "DIFFERENT_TIME_OF_CLOSEST_APPROACH", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::DIFFERENT_TIME_OF_CLOSEST_APPROACH)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "DIMENSION_INCONSISTENT_WITH_PARAMETERS", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::DIMENSION_INCONSISTENT_WITH_PARAMETERS)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "DSST_ECC_NO_NUMERICAL_AVERAGING_METHOD", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::DSST_ECC_NO_NUMERICAL_AVERAGING_METHOD)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "DSST_NEWCOMB_OPERATORS_COMPUTATION", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::DSST_NEWCOMB_OPERATORS_COMPUTATION)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "DSST_SPR_SHADOW_INCONSISTENT", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::DSST_SPR_SHADOW_INCONSISTENT)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "DSST_VMNS_COEFFICIENT_ERROR_MS", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::DSST_VMNS_COEFFICIENT_ERROR_MS)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "DUPLICATED_GRAVITY_FIELD_COEFFICIENT_IN_FILE", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::DUPLICATED_GRAVITY_FIELD_COEFFICIENT_IN_FILE)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "END_OF_ENCODED_MESSAGE", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::END_OF_ENCODED_MESSAGE)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "EVENT_DATE_TOO_CLOSE", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::EVENT_DATE_TOO_CLOSE)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "EXCEPTIONAL_DATA_CONTEXT", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::EXCEPTIONAL_DATA_CONTEXT)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "FAILED_AUTHENTICATION", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::FAILED_AUTHENTICATION)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "FIND_ROOT", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::FIND_ROOT)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "FRAMES_MISMATCH", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::FRAMES_MISMATCH)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "FRAME_ALREADY_ATTACHED", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::FRAME_ALREADY_ATTACHED)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "FRAME_ANCESTOR_OF_BOTH_FRAMES", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::FRAME_ANCESTOR_OF_BOTH_FRAMES)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "FRAME_ANCESTOR_OF_NEITHER_FRAME", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::FRAME_ANCESTOR_OF_NEITHER_FRAME)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "FRAME_NOT_ATTACHED", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::FRAME_NOT_ATTACHED)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "FRAME_NO_NTH_ANCESTOR", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::FRAME_NO_NTH_ANCESTOR)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "FUNCTION_NOT_IMPLEMENTED", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::FUNCTION_NOT_IMPLEMENTED)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "GNSS_PARITY_ERROR", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::GNSS_PARITY_ERROR)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "GRAVITY_FIELD_NORMALIZATION_UNDERFLOW", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::GRAVITY_FIELD_NORMALIZATION_UNDERFLOW)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "HEADER_ALREADY_WRITTEN", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::HEADER_ALREADY_WRITTEN)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "HEADER_NOT_WRITTEN", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::HEADER_NOT_WRITTEN)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "HYPERBOLIC_ORBIT_NOT_HANDLED_AS", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::HYPERBOLIC_ORBIT_NOT_HANDLED_AS)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "INCOMPATIBLE_FRAMES", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::INCOMPATIBLE_FRAMES)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "INCOMPATIBLE_FREQUENCIES_FOR_COMBINATION_OF_MEASUREMENTS", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::INCOMPATIBLE_FREQUENCIES_FOR_COMBINATION_OF_MEASUREMENTS)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "INCOMPATIBLE_UNITS", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::INCOMPATIBLE_UNITS)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "INCOMPLETE_HEADER", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::INCOMPLETE_HEADER)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "INCONSISTENT_ASTRONOMICAL_UNIT_IN_FILES", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::INCONSISTENT_ASTRONOMICAL_UNIT_IN_FILES)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "INCONSISTENT_DATES_IN_IERS_FILE", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::INCONSISTENT_DATES_IN_IERS_FILE)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "INCONSISTENT_EARTH_MOON_RATIO_IN_FILES", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::INCONSISTENT_EARTH_MOON_RATIO_IN_FILES)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "INCONSISTENT_NUMBER_OF_ELEMENTS", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::INCONSISTENT_NUMBER_OF_ELEMENTS)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "INCONSISTENT_NUMBER_OF_SATS", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::INCONSISTENT_NUMBER_OF_SATS)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "INCONSISTENT_NUMBER_OF_TEC_MAPS_IN_FILE", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::INCONSISTENT_NUMBER_OF_TEC_MAPS_IN_FILE)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "INCONSISTENT_SAMPLING_DATE", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::INCONSISTENT_SAMPLING_DATE)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "INCONSISTENT_SATELLITE_SYSTEM", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::INCONSISTENT_SATELLITE_SYSTEM)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "INCONSISTENT_SELECTION", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::INCONSISTENT_SELECTION)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "INERTIAL_FORCE_MODEL_MISSING", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::INERTIAL_FORCE_MODEL_MISSING)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "INITIAL_MATRIX_AND_PARAMETERS_NUMBER_MISMATCH", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::INITIAL_MATRIX_AND_PARAMETERS_NUMBER_MISMATCH)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "INITIAL_STATE_NOT_SPECIFIED_FOR_ORBIT_PROPAGATION", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::INITIAL_STATE_NOT_SPECIFIED_FOR_ORBIT_PROPAGATION)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "INTERNAL_ERROR", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::INTERNAL_ERROR)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "INVALID_GNSS_DATA", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::INVALID_GNSS_DATA)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "INVALID_MEASUREMENT_TYPES_FOR_COMBINATION_OF_MEASUREMENTS", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::INVALID_MEASUREMENT_TYPES_FOR_COMBINATION_OF_MEASUREMENTS)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "INVALID_PARAMETER_RANGE", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::INVALID_PARAMETER_RANGE)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "INVALID_RANGE_INDICATOR_IN_CRD_FILE", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::INVALID_RANGE_INDICATOR_IN_CRD_FILE)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "INVALID_SATELLITE_ID", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::INVALID_SATELLITE_ID)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "INVALID_SATELLITE_SYSTEM", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::INVALID_SATELLITE_SYSTEM)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "INVALID_TYPE_FOR_FUNCTION", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::INVALID_TYPE_FOR_FUNCTION)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "IRREGULAR_OR_INCOMPLETE_GRID", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::IRREGULAR_OR_INCOMPLETE_GRID)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "ITRF_VERSIONS_PREFIX_ONLY", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::ITRF_VERSIONS_PREFIX_ONLY)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "KLOBUCHAR_ALPHA_BETA_NOT_AVAILABLE_FOR_DATE", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::KLOBUCHAR_ALPHA_BETA_NOT_AVAILABLE_FOR_DATE)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "KLOBUCHAR_ALPHA_BETA_NOT_LOADED", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::KLOBUCHAR_ALPHA_BETA_NOT_LOADED)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "METHOD_NOT_AVAILABLE_WITHOUT_CENTRAL_BODY", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::METHOD_NOT_AVAILABLE_WITHOUT_CENTRAL_BODY)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "MISMATCHED_FREQUENCIES", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::MISMATCHED_FREQUENCIES)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "MISSING_EARTH_ORIENTATION_PARAMETERS_BETWEEN_DATES", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::MISSING_EARTH_ORIENTATION_PARAMETERS_BETWEEN_DATES)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "MISSING_EARTH_ORIENTATION_PARAMETERS_BETWEEN_DATES_GAP", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::MISSING_EARTH_ORIENTATION_PARAMETERS_BETWEEN_DATES_GAP)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "MISSING_GRAVITY_FIELD_COEFFICIENT_IN_FILE", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::MISSING_GRAVITY_FIELD_COEFFICIENT_IN_FILE)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "MISSING_HEADER", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::MISSING_HEADER)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "MISSING_SECOND_TLE_LINE", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::MISSING_SECOND_TLE_LINE)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "MISSING_SERIE_J_IN_FILE", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::MISSING_SERIE_J_IN_FILE)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "MISSING_STATION_DATA_FOR_EPOCH", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::MISSING_STATION_DATA_FOR_EPOCH)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "MISSING_VELOCITY", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::MISSING_VELOCITY)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "MODIP_GRID_NOT_LOADED", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::MODIP_GRID_NOT_LOADED)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "MOUNPOINT_ALREADY_CONNECTED", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::MOUNPOINT_ALREADY_CONNECTED)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "MULTIPLE_INTERPOLATOR_USED", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::MULTIPLE_INTERPOLATOR_USED)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "MULTIPLE_SHOOTING_UNDERCONSTRAINED", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::MULTIPLE_SHOOTING_UNDERCONSTRAINED)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "NEITHER_DIRECTORY_NOR_ZIP_OR_JAR", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::NEITHER_DIRECTORY_NOR_ZIP_OR_JAR)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "NEQUICK_F2_FM3_NOT_LOADED", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::NEQUICK_F2_FM3_NOT_LOADED)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "NON_CHRONOLOGICALLY_SORTED_ENTRIES", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::NON_CHRONOLOGICALLY_SORTED_ENTRIES)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "NON_CHRONOLOGICAL_DATES_FOR_OBSERVATIONS", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::NON_CHRONOLOGICAL_DATES_FOR_OBSERVATIONS)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "NON_CHRONOLOGICAL_DATES_IN_FILE", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::NON_CHRONOLOGICAL_DATES_IN_FILE)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "NON_COPLANAR_POINTS", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::NON_COPLANAR_POINTS)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "NON_DIFFERENT_DATES_FOR_OBSERVATIONS", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::NON_DIFFERENT_DATES_FOR_OBSERVATIONS)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "NON_EXISTENT_DATE", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::NON_EXISTENT_DATE)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "NON_EXISTENT_DAY_NUMBER_IN_YEAR", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::NON_EXISTENT_DAY_NUMBER_IN_YEAR)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "NON_EXISTENT_GEOMAGNETIC_MODEL", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::NON_EXISTENT_GEOMAGNETIC_MODEL)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "NON_EXISTENT_HMS_TIME", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::NON_EXISTENT_HMS_TIME)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "NON_EXISTENT_MONTH", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::NON_EXISTENT_MONTH)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "NON_EXISTENT_TIME", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::NON_EXISTENT_TIME)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "NON_EXISTENT_WEEK_DATE", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::NON_EXISTENT_WEEK_DATE)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "NON_EXISTENT_YEAR_MONTH_DAY", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::NON_EXISTENT_YEAR_MONTH_DAY)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "NON_PSEUDO_INERTIAL_FRAME", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::NON_PSEUDO_INERTIAL_FRAME)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "NON_PSEUDO_INERTIAL_FRAME_NOT_SUITABLE_AS_REFERENCE_FOR_INERTIAL_FORCES", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::NON_PSEUDO_INERTIAL_FRAME_NOT_SUITABLE_AS_REFERENCE_FOR_INERTIAL_FORCES)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "NON_RESETABLE_STATE", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::NON_RESETABLE_STATE)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "NOT_A_DIRECTORY", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::NOT_A_DIRECTORY)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "NOT_A_JPL_EPHEMERIDES_BINARY_FILE", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::NOT_A_JPL_EPHEMERIDES_BINARY_FILE)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "NOT_A_MARSHALL_SOLAR_ACTIVITY_FUTURE_ESTIMATION_FILE", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::NOT_A_MARSHALL_SOLAR_ACTIVITY_FUTURE_ESTIMATION_FILE)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "NOT_A_SUPPORTED_HATANAKA_COMPRESSED_FILE", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::NOT_A_SUPPORTED_HATANAKA_COMPRESSED_FILE)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "NOT_A_SUPPORTED_IERS_DATA_FILE", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::NOT_A_SUPPORTED_IERS_DATA_FILE)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "NOT_A_SUPPORTED_SEM_ALMANAC_FILE", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::NOT_A_SUPPORTED_SEM_ALMANAC_FILE)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "NOT_A_SUPPORTED_UNIX_COMPRESSED_FILE", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::NOT_A_SUPPORTED_UNIX_COMPRESSED_FILE)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "NOT_A_SUPPORTED_YUMA_ALMANAC_FILE", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::NOT_A_SUPPORTED_YUMA_ALMANAC_FILE)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "NOT_ENOUGH_ATTITUDE_PROVIDERS", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::NOT_ENOUGH_ATTITUDE_PROVIDERS)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "NOT_ENOUGH_CACHED_NEIGHBORS", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::NOT_ENOUGH_CACHED_NEIGHBORS)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "NOT_ENOUGH_DATA", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::NOT_ENOUGH_DATA)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "NOT_ENOUGH_GNSS_FOR_DOP", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::NOT_ENOUGH_GNSS_FOR_DOP)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "NOT_ENOUGH_PROPAGATORS", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::NOT_ENOUGH_PROPAGATORS)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "NOT_POSITIVE_SPACECRAFT_MASS", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::NOT_POSITIVE_SPACECRAFT_MASS)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "NOT_STRICTLY_POSITIVE", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::NOT_STRICTLY_POSITIVE)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "NOT_TLE_LINES", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::NOT_TLE_LINES)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "NOT_VALID_INTERNATIONAL_DESIGNATOR", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::NOT_VALID_INTERNATIONAL_DESIGNATOR)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "NO_CACHED_ENTRIES", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::NO_CACHED_ENTRIES)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "NO_DATA_GENERATED", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::NO_DATA_GENERATED)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "NO_DATA_IN_FILE", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::NO_DATA_IN_FILE)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "NO_DATA_LOADED_FOR_CELESTIAL_BODY", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::NO_DATA_LOADED_FOR_CELESTIAL_BODY)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "NO_EARTH_ORIENTATION_PARAMETERS", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::NO_EARTH_ORIENTATION_PARAMETERS)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "NO_EARTH_ORIENTATION_PARAMETERS_LOADED", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::NO_EARTH_ORIENTATION_PARAMETERS_LOADED)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "NO_ENTRIES_IN_IERS_UTC_TAI_HISTORY_FILE", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::NO_ENTRIES_IN_IERS_UTC_TAI_HISTORY_FILE)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "NO_EPOCH_IN_IONEX_HEADER", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::NO_EPOCH_IN_IONEX_HEADER)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "NO_GRAVITY_FIELD_DATA_LOADED", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::NO_GRAVITY_FIELD_DATA_LOADED)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "NO_IERS_UTC_TAI_HISTORY_DATA_LOADED", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::NO_IERS_UTC_TAI_HISTORY_DATA_LOADED)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "NO_INTERPOLATOR_FOR_STATE_DEFINITION", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::NO_INTERPOLATOR_FOR_STATE_DEFINITION)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "NO_JPL_EPHEMERIDES_BINARY_FILES_FOUND", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::NO_JPL_EPHEMERIDES_BINARY_FILES_FOUND)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "NO_KLOBUCHAR_ALPHA_BETA_IN_FILE", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::NO_KLOBUCHAR_ALPHA_BETA_IN_FILE)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "NO_LATITUDE_LONGITUDE_BONDARIES_IN_IONEX_HEADER", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::NO_LATITUDE_LONGITUDE_BONDARIES_IN_IONEX_HEADER)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "NO_OCEAN_TIDE_DATA_LOADED", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::NO_OCEAN_TIDE_DATA_LOADED)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "NO_PROPAGATOR_CONFIGURED", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::NO_PROPAGATOR_CONFIGURED)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "NO_REFERENCE_DATE_FOR_PARAMETER", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::NO_REFERENCE_DATE_FOR_PARAMETER)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "NO_SEM_ALMANAC_AVAILABLE", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::NO_SEM_ALMANAC_AVAILABLE)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "NO_SOLAR_ACTIVITY_AT_DATE", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::NO_SOLAR_ACTIVITY_AT_DATE)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "NO_SUCH_ITRF_FRAME", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::NO_SUCH_ITRF_FRAME)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "NO_TEC_DATA_IN_FILES_FOR_DATE", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::NO_TEC_DATA_IN_FILES_FOR_DATE)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "NO_TLE_DATA_AVAILABLE", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::NO_TLE_DATA_AVAILABLE)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "NO_TLE_FOR_LAUNCH_YEAR_NUMBER_PIECE", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::NO_TLE_FOR_LAUNCH_YEAR_NUMBER_PIECE)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "NO_TLE_FOR_OBJECT", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::NO_TLE_FOR_OBJECT)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "NO_UNSCENTED_TRANSFORM_CONFIGURED", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::NO_UNSCENTED_TRANSFORM_CONFIGURED)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "NO_VIENNA_ACOEF_OR_ZENITH_DELAY_IN_FILE", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::NO_VIENNA_ACOEF_OR_ZENITH_DELAY_IN_FILE)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "NO_YUMA_ALMANAC_AVAILABLE", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::NO_YUMA_ALMANAC_AVAILABLE)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "NULL_ARGUMENT", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::NULL_ARGUMENT)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "NULL_PARENT_FOR_FRAME", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::NULL_PARENT_FOR_FRAME)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "OCEAN_TIDE_DATA_DEGREE_ORDER_LIMITS", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::OCEAN_TIDE_DATA_DEGREE_ORDER_LIMITS)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "OCEAN_TIDE_LOAD_DEFORMATION_LIMITS", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::OCEAN_TIDE_LOAD_DEFORMATION_LIMITS)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "ORBITS_MUS_MISMATCH", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::ORBITS_MUS_MISMATCH)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "ORBIT_AND_ATTITUDE_DATES_MISMATCH", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::ORBIT_AND_ATTITUDE_DATES_MISMATCH)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "ORBIT_ANOMALY_OUT_OF_HYPERBOLIC_RANGE", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::ORBIT_ANOMALY_OUT_OF_HYPERBOLIC_RANGE)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "ORBIT_A_E_MISMATCH_WITH_CONIC_TYPE", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::ORBIT_A_E_MISMATCH_WITH_CONIC_TYPE)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "ORBIT_TYPE_NOT_ALLOWED", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::ORBIT_TYPE_NOT_ALLOWED)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "OUT_OF_RANGE_BODY_EPHEMERIDES_DATE", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::OUT_OF_RANGE_BODY_EPHEMERIDES_DATE)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "OUT_OF_RANGE_DATE", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::OUT_OF_RANGE_DATE)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "OUT_OF_RANGE_DERIVATION_ORDER", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::OUT_OF_RANGE_DERIVATION_ORDER)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "OUT_OF_RANGE_EPHEMERIDES_DATE_AFTER", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::OUT_OF_RANGE_EPHEMERIDES_DATE_AFTER)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "OUT_OF_RANGE_EPHEMERIDES_DATE_BEFORE", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::OUT_OF_RANGE_EPHEMERIDES_DATE_BEFORE)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "OUT_OF_RANGE_SECONDS_NUMBER", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::OUT_OF_RANGE_SECONDS_NUMBER)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "OUT_OF_RANGE_SECONDS_NUMBER_DETAIL", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::OUT_OF_RANGE_SECONDS_NUMBER_DETAIL)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "OUT_OF_RANGE_TIME_TRANSFORM", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::OUT_OF_RANGE_TIME_TRANSFORM)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "PARAMETER_NOT_SET", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::PARAMETER_NOT_SET)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "PARAMETER_PERIODS_HAS_ALREADY_BEEN_SET", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::PARAMETER_PERIODS_HAS_ALREADY_BEEN_SET)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "PARAMETER_WITH_SEVERAL_ESTIMATED_VALUES", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::PARAMETER_WITH_SEVERAL_ESTIMATED_VALUES)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "POINT_INSIDE_ELLIPSOID", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::POINT_INSIDE_ELLIPSOID)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "POLAR_TRAJECTORY", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::POLAR_TRAJECTORY)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "POSITIVE_FLOW_RATE", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::POSITIVE_FLOW_RATE)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "SATELLITE_COLLIDED_WITH_TARGET", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::SATELLITE_COLLIDED_WITH_TARGET)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "SEVERAL_REFERENCE_DATES_IN_GRAVITY_FIELD", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::SEVERAL_REFERENCE_DATES_IN_GRAVITY_FIELD)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "SINGULAR_JACOBIAN_FOR_ORBIT_TYPE", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::SINGULAR_JACOBIAN_FOR_ORBIT_TYPE)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "SOURCETABLE_PARSE_ERROR", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::SOURCETABLE_PARSE_ERROR)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "SP3_INCOMPATIBLE_FILE_METADATA", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::SP3_INCOMPATIBLE_FILE_METADATA)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "SP3_INCOMPATIBLE_SATELLITE_MEDATADA", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::SP3_INCOMPATIBLE_SATELLITE_MEDATADA)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "SP3_INVALID_HEADER_ENTRY", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::SP3_INVALID_HEADER_ENTRY)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "SP3_NUMBER_OF_EPOCH_MISMATCH", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::SP3_NUMBER_OF_EPOCH_MISMATCH)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "SP3_TOO_MANY_SATELLITES_FOR_VERSION", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::SP3_TOO_MANY_SATELLITES_FOR_VERSION)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "SP3_UNSUPPORTED_VERSION", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::SP3_UNSUPPORTED_VERSION)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "STATE_AND_COVARIANCE_DATES_MISMATCH", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::STATE_AND_COVARIANCE_DATES_MISMATCH)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "STATE_AND_PARAMETERS_JACOBIANS_ROWS_MISMATCH", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::STATE_AND_PARAMETERS_JACOBIANS_ROWS_MISMATCH)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "STATE_JACOBIAN_NOT_6X6", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::STATE_JACOBIAN_NOT_6X6)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "STATE_JACOBIAN_NOT_INITIALIZED", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::STATE_JACOBIAN_NOT_INITIALIZED)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "STATION_NOT_FOUND", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::STATION_NOT_FOUND)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "STEC_INTEGRATION_DID_NOT_CONVERGE", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::STEC_INTEGRATION_DID_NOT_CONVERGE)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "STK_INVALID_OR_UNSUPPORTED_COORDINATE_SYSTEM", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::STK_INVALID_OR_UNSUPPORTED_COORDINATE_SYSTEM)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "STK_UNEXPECTED_END_OF_FILE", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::STK_UNEXPECTED_END_OF_FILE)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "STK_UNMAPPED_COORDINATE_SYSTEM", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::STK_UNMAPPED_COORDINATE_SYSTEM)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "STREAM_REQUIRES_NMEA_FIX", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::STREAM_REQUIRES_NMEA_FIX)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "TLE_CHECKSUM_ERROR", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::TLE_CHECKSUM_ERROR)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "TLE_INVALID_PARAMETER", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::TLE_INVALID_PARAMETER)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "TLE_LINES_DO_NOT_REFER_TO_SAME_OBJECT", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::TLE_LINES_DO_NOT_REFER_TO_SAME_OBJECT)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "TOO_LARGE_DATA_TYPE", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::TOO_LARGE_DATA_TYPE)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "TOO_LARGE_DEGREE_FOR_GRAVITY_FIELD", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::TOO_LARGE_DEGREE_FOR_GRAVITY_FIELD)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "TOO_LARGE_ECCENTRICITY_FOR_PROPAGATION_MODEL", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::TOO_LARGE_ECCENTRICITY_FOR_PROPAGATION_MODEL)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "TOO_LARGE_ORDER_FOR_GRAVITY_FIELD", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::TOO_LARGE_ORDER_FOR_GRAVITY_FIELD)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "TOO_SHORT_TRANSITION_TIME_FOR_ATTITUDES_SWITCH", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::TOO_SHORT_TRANSITION_TIME_FOR_ATTITUDES_SWITCH)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "TOO_SMALL_SCALE_FOR_PARAMETER", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::TOO_SMALL_SCALE_FOR_PARAMETER)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "TRAJECTORY_INSIDE_BRILLOUIN_SPHERE", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::TRAJECTORY_INSIDE_BRILLOUIN_SPHERE)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "TRAJECTORY_NOT_CROSSING_XZPLANE", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::TRAJECTORY_NOT_CROSSING_XZPLANE)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "UNABLE_TO_COMPUTE_BROUWER_LYDDANE_MEAN_PARAMETERS", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::UNABLE_TO_COMPUTE_BROUWER_LYDDANE_MEAN_PARAMETERS)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "UNABLE_TO_COMPUTE_DSST_MEAN_PARAMETERS", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::UNABLE_TO_COMPUTE_DSST_MEAN_PARAMETERS)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "UNABLE_TO_COMPUTE_ECKSTEIN_HECHLER_MEAN_PARAMETERS", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::UNABLE_TO_COMPUTE_ECKSTEIN_HECHLER_MEAN_PARAMETERS)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "UNABLE_TO_COMPUTE_HYPERBOLIC_ECCENTRIC_ANOMALY", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::UNABLE_TO_COMPUTE_HYPERBOLIC_ECCENTRIC_ANOMALY)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "UNABLE_TO_COMPUTE_TLE", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::UNABLE_TO_COMPUTE_TLE)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "UNABLE_TO_FIND_FILE", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::UNABLE_TO_FIND_FILE)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "UNABLE_TO_FIND_RESOURCE", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::UNABLE_TO_FIND_RESOURCE)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "UNABLE_TO_GENERATE_NEW_DATA_AFTER", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::UNABLE_TO_GENERATE_NEW_DATA_AFTER)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "UNABLE_TO_GENERATE_NEW_DATA_BEFORE", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::UNABLE_TO_GENERATE_NEW_DATA_BEFORE)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "UNABLE_TO_PARSE_ELEMENT_IN_FILE", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::UNABLE_TO_PARSE_ELEMENT_IN_FILE)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "UNABLE_TO_PARSE_LINE_IN_FILE", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::UNABLE_TO_PARSE_LINE_IN_FILE)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "UNABLE_TO_READ_JPL_HEADER", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::UNABLE_TO_READ_JPL_HEADER)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "UNDEFINED_ABSOLUTE_PVCOORDINATES", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::UNDEFINED_ABSOLUTE_PVCOORDINATES)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "UNDEFINED_ORBIT", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::UNDEFINED_ORBIT)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "UNEXPECTED_CONTENT_TYPE", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::UNEXPECTED_CONTENT_TYPE)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "UNEXPECTED_DATA_AFTER_LINE_IN_FILE", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::UNEXPECTED_DATA_AFTER_LINE_IN_FILE)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "UNEXPECTED_DATA_AT_LINE_IN_FILE", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::UNEXPECTED_DATA_AT_LINE_IN_FILE)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "UNEXPECTED_END_OF_FILE", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::UNEXPECTED_END_OF_FILE)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "UNEXPECTED_END_OF_FILE_AFTER_LINE", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::UNEXPECTED_END_OF_FILE_AFTER_LINE)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "UNEXPECTED_FILE_FORMAT_ERROR_FOR_LOADER", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::UNEXPECTED_FILE_FORMAT_ERROR_FOR_LOADER)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "UNEXPECTED_FORMAT_FOR_ILRS_FILE", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::UNEXPECTED_FORMAT_FOR_ILRS_FILE)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "UNEXPECTED_TWO_ELEVATION_VALUES_FOR_ONE_AZIMUTH", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::UNEXPECTED_TWO_ELEVATION_VALUES_FOR_ONE_AZIMUTH)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "UNINITIALIZED_VALUE_FOR_KEY", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::UNINITIALIZED_VALUE_FOR_KEY)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "UNKNOWN_ADDITIONAL_STATE", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::UNKNOWN_ADDITIONAL_STATE)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "UNKNOWN_AUTHENTICATION_METHOD", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::UNKNOWN_AUTHENTICATION_METHOD)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "UNKNOWN_CARRIER_PHASE_CODE", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::UNKNOWN_CARRIER_PHASE_CODE)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "UNKNOWN_CLOCK_DATA_TYPE", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::UNKNOWN_CLOCK_DATA_TYPE)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "UNKNOWN_DATA_FORMAT", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::UNKNOWN_DATA_FORMAT)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "UNKNOWN_ENCODED_MESSAGE_NUMBER", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::UNKNOWN_ENCODED_MESSAGE_NUMBER)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "UNKNOWN_HOST", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::UNKNOWN_HOST)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "UNKNOWN_MONTH", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::UNKNOWN_MONTH)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "UNKNOWN_NAVIGATION_SYSTEM", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::UNKNOWN_NAVIGATION_SYSTEM)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "UNKNOWN_RINEX_FREQUENCY", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::UNKNOWN_RINEX_FREQUENCY)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "UNKNOWN_SATELLITE_ANTENNA_CODE", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::UNKNOWN_SATELLITE_ANTENNA_CODE)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "UNKNOWN_SATELLITE_SYSTEM", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::UNKNOWN_SATELLITE_SYSTEM)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "UNKNOWN_TIME_SYSTEM", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::UNKNOWN_TIME_SYSTEM)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "UNKNOWN_UNIT", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::UNKNOWN_UNIT)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "UNKNOWN_UTC_ID", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::UNKNOWN_UTC_ID)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "UNSUPPORTED_FILE_FORMAT", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::UNSUPPORTED_FILE_FORMAT)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "UNSUPPORTED_FILE_FORMAT_VERSION", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::UNSUPPORTED_FILE_FORMAT_VERSION)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "UNSUPPORTED_FREQUENCY_FOR_ANTENNA", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::UNSUPPORTED_FREQUENCY_FOR_ANTENNA)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "UNSUPPORTED_LOCAL_ORBITAL_FRAME", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::UNSUPPORTED_LOCAL_ORBITAL_FRAME)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "UNSUPPORTED_PARAMETER_NAME", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::UNSUPPORTED_PARAMETER_NAME)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "UNSUPPORTED_TIME_TRANSFORM", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::UNSUPPORTED_TIME_TRANSFORM)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "UNSUPPORTED_TRANSFORM", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::UNSUPPORTED_TRANSFORM)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "VALUE_NOT_FOUND", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::VALUE_NOT_FOUND)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "VIENNA_ACOEF_OR_ZENITH_DELAY_NOT_AVAILABLE_FOR_DATE", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::VIENNA_ACOEF_OR_ZENITH_DELAY_NOT_AVAILABLE_FOR_DATE)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "VIENNA_ACOEF_OR_ZENITH_DELAY_NOT_LOADED", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::VIENNA_ACOEF_OR_ZENITH_DELAY_NOT_LOADED)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "WRONG_COLUMNS_NUMBER", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::WRONG_COLUMNS_NUMBER)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "WRONG_DEGREE_OR_ORDER", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::WRONG_DEGREE_OR_ORDER)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "WRONG_EOP_INTERPOLATION_DEGREE", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::WRONG_EOP_INTERPOLATION_DEGREE)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "WRONG_INTERPOLATOR_DEFINED_FOR_STATE_INTERPOLATION", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::WRONG_INTERPOLATOR_DEFINED_FOR_STATE_INTERPOLATION)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "WRONG_NB_COMPONENTS", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::WRONG_NB_COMPONENTS)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "WRONG_ORBIT_PARAMETERS_TYPE", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::WRONG_ORBIT_PARAMETERS_TYPE)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "WRONG_PARSING_TYPE", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::WRONG_PARSING_TYPE)));
      }

      static PyObject *t_OrekitMessages_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, OrekitMessages::initializeClass, 1)))
          return NULL;
        return t_OrekitMessages::wrap_Object(OrekitMessages(((t_OrekitMessages *) arg)->object.this$));
      }
      static PyObject *t_OrekitMessages_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, OrekitMessages::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_OrekitMessages_of_(t_OrekitMessages *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static PyObject *t_OrekitMessages_getLocalizedString(t_OrekitMessages *self, PyObject *arg)
      {
        ::java::util::Locale a0((jobject) NULL);
        ::java::lang::String result((jobject) NULL);

        if (!parseArg(arg, "k", ::java::util::Locale::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.getLocalizedString(a0));
          return j2p(result);
        }

        PyErr_SetArgsError((PyObject *) self, "getLocalizedString", arg);
        return NULL;
      }

      static PyObject *t_OrekitMessages_getSourceString(t_OrekitMessages *self)
      {
        ::java::lang::String result((jobject) NULL);
        OBJ_CALL(result = self->object.getSourceString());
        return j2p(result);
      }

      static PyObject *t_OrekitMessages_valueOf(PyTypeObject *type, PyObject *args)
      {
        ::java::lang::String a0((jobject) NULL);
        OrekitMessages result((jobject) NULL);

        if (!parseArgs(args, "s", &a0))
        {
          OBJ_CALL(result = ::org::orekit::errors::OrekitMessages::valueOf(a0));
          return t_OrekitMessages::wrap_Object(result);
        }

        return callSuper(type, "valueOf", args, 2);
      }

      static PyObject *t_OrekitMessages_values(PyTypeObject *type)
      {
        JArray< OrekitMessages > result((jobject) NULL);
        OBJ_CALL(result = ::org::orekit::errors::OrekitMessages::values());
        return JArray<jobject>(result.this$).wrap(t_OrekitMessages::wrap_jobject);
      }
      static PyObject *t_OrekitMessages_get__parameters_(t_OrekitMessages *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }

      static PyObject *t_OrekitMessages_get__sourceString(t_OrekitMessages *self, void *data)
      {
        ::java::lang::String value((jobject) NULL);
        OBJ_CALL(value = self->object.getSourceString());
        return j2p(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/analysis/interpolation/UnivariatePeriodicInterpolator.h"
#include "org/hipparchus/analysis/UnivariateFunction.h"
#include "org/hipparchus/analysis/interpolation/UnivariateInterpolator.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace interpolation {

        ::java::lang::Class *UnivariatePeriodicInterpolator::class$ = NULL;
        jmethodID *UnivariatePeriodicInterpolator::mids$ = NULL;
        bool UnivariatePeriodicInterpolator::live$ = false;
        jint UnivariatePeriodicInterpolator::DEFAULT_EXTEND = (jint) 0;

        jclass UnivariatePeriodicInterpolator::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/interpolation/UnivariatePeriodicInterpolator");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_f4892ed00738eea6] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/analysis/interpolation/UnivariateInterpolator;D)V");
            mids$[mid_init$_ec9eb5082c7b8940] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/analysis/interpolation/UnivariateInterpolator;DI)V");
            mids$[mid_interpolate_d166503635bf6802] = env->getMethodID(cls, "interpolate", "([D[D)Lorg/hipparchus/analysis/UnivariateFunction;");

            class$ = new ::java::lang::Class(cls);
            cls = (jclass) class$->this$;

            DEFAULT_EXTEND = env->getStaticIntField(cls, "DEFAULT_EXTEND");
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        UnivariatePeriodicInterpolator::UnivariatePeriodicInterpolator(const ::org::hipparchus::analysis::interpolation::UnivariateInterpolator & a0, jdouble a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_f4892ed00738eea6, a0.this$, a1)) {}

        UnivariatePeriodicInterpolator::UnivariatePeriodicInterpolator(const ::org::hipparchus::analysis::interpolation::UnivariateInterpolator & a0, jdouble a1, jint a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_ec9eb5082c7b8940, a0.this$, a1, a2)) {}

        ::org::hipparchus::analysis::UnivariateFunction UnivariatePeriodicInterpolator::interpolate(const JArray< jdouble > & a0, const JArray< jdouble > & a1) const
        {
          return ::org::hipparchus::analysis::UnivariateFunction(env->callObjectMethod(this$, mids$[mid_interpolate_d166503635bf6802], a0.this$, a1.this$));
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace interpolation {
        static PyObject *t_UnivariatePeriodicInterpolator_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_UnivariatePeriodicInterpolator_instance_(PyTypeObject *type, PyObject *arg);
        static int t_UnivariatePeriodicInterpolator_init_(t_UnivariatePeriodicInterpolator *self, PyObject *args, PyObject *kwds);
        static PyObject *t_UnivariatePeriodicInterpolator_interpolate(t_UnivariatePeriodicInterpolator *self, PyObject *args);

        static PyMethodDef t_UnivariatePeriodicInterpolator__methods_[] = {
          DECLARE_METHOD(t_UnivariatePeriodicInterpolator, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_UnivariatePeriodicInterpolator, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_UnivariatePeriodicInterpolator, interpolate, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(UnivariatePeriodicInterpolator)[] = {
          { Py_tp_methods, t_UnivariatePeriodicInterpolator__methods_ },
          { Py_tp_init, (void *) t_UnivariatePeriodicInterpolator_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(UnivariatePeriodicInterpolator)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(UnivariatePeriodicInterpolator, t_UnivariatePeriodicInterpolator, UnivariatePeriodicInterpolator);

        void t_UnivariatePeriodicInterpolator::install(PyObject *module)
        {
          installType(&PY_TYPE(UnivariatePeriodicInterpolator), &PY_TYPE_DEF(UnivariatePeriodicInterpolator), module, "UnivariatePeriodicInterpolator", 0);
        }

        void t_UnivariatePeriodicInterpolator::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(UnivariatePeriodicInterpolator), "class_", make_descriptor(UnivariatePeriodicInterpolator::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(UnivariatePeriodicInterpolator), "wrapfn_", make_descriptor(t_UnivariatePeriodicInterpolator::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(UnivariatePeriodicInterpolator), "boxfn_", make_descriptor(boxObject));
          env->getClass(UnivariatePeriodicInterpolator::initializeClass);
          PyObject_SetAttrString((PyObject *) PY_TYPE(UnivariatePeriodicInterpolator), "DEFAULT_EXTEND", make_descriptor(UnivariatePeriodicInterpolator::DEFAULT_EXTEND));
        }

        static PyObject *t_UnivariatePeriodicInterpolator_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, UnivariatePeriodicInterpolator::initializeClass, 1)))
            return NULL;
          return t_UnivariatePeriodicInterpolator::wrap_Object(UnivariatePeriodicInterpolator(((t_UnivariatePeriodicInterpolator *) arg)->object.this$));
        }
        static PyObject *t_UnivariatePeriodicInterpolator_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, UnivariatePeriodicInterpolator::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_UnivariatePeriodicInterpolator_init_(t_UnivariatePeriodicInterpolator *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 2:
            {
              ::org::hipparchus::analysis::interpolation::UnivariateInterpolator a0((jobject) NULL);
              jdouble a1;
              UnivariatePeriodicInterpolator object((jobject) NULL);

              if (!parseArgs(args, "kD", ::org::hipparchus::analysis::interpolation::UnivariateInterpolator::initializeClass, &a0, &a1))
              {
                INT_CALL(object = UnivariatePeriodicInterpolator(a0, a1));
                self->object = object;
                break;
              }
            }
            goto err;
           case 3:
            {
              ::org::hipparchus::analysis::interpolation::UnivariateInterpolator a0((jobject) NULL);
              jdouble a1;
              jint a2;
              UnivariatePeriodicInterpolator object((jobject) NULL);

              if (!parseArgs(args, "kDI", ::org::hipparchus::analysis::interpolation::UnivariateInterpolator::initializeClass, &a0, &a1, &a2))
              {
                INT_CALL(object = UnivariatePeriodicInterpolator(a0, a1, a2));
                self->object = object;
                break;
              }
            }
           default:
           err:
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_UnivariatePeriodicInterpolator_interpolate(t_UnivariatePeriodicInterpolator *self, PyObject *args)
        {
          JArray< jdouble > a0((jobject) NULL);
          JArray< jdouble > a1((jobject) NULL);
          ::org::hipparchus::analysis::UnivariateFunction result((jobject) NULL);

          if (!parseArgs(args, "[D[D", &a0, &a1))
          {
            OBJ_CALL(result = self->object.interpolate(a0, a1));
            return ::org::hipparchus::analysis::t_UnivariateFunction::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "interpolate", args);
          return NULL;
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/frames/LOFType.h"
#include "org/orekit/utils/FieldPVCoordinates.h"
#include "org/orekit/files/ccsds/definitions/OrbitRelativeFrame.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldRotation.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/orekit/frames/LOFType.h"
#include "org/hipparchus/Field.h"
#include "org/orekit/frames/LOF.h"
#include "java/lang/Class.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/hipparchus/geometry/euclidean/threed/Rotation.h"
#include "java/lang/String.h"
#include "org/orekit/utils/PVCoordinates.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace frames {

      ::java::lang::Class *LOFType::class$ = NULL;
      jmethodID *LOFType::mids$ = NULL;
      bool LOFType::live$ = false;
      LOFType *LOFType::EQW = NULL;
      LOFType *LOFType::LVLH = NULL;
      LOFType *LOFType::LVLH_CCSDS = NULL;
      LOFType *LOFType::LVLH_CCSDS_INERTIAL = NULL;
      LOFType *LOFType::LVLH_INERTIAL = NULL;
      LOFType *LOFType::NTW = NULL;
      LOFType *LOFType::NTW_INERTIAL = NULL;
      LOFType *LOFType::QSW = NULL;
      LOFType *LOFType::QSW_INERTIAL = NULL;
      LOFType *LOFType::TNW = NULL;
      LOFType *LOFType::TNW_INERTIAL = NULL;
      LOFType *LOFType::VNC = NULL;
      LOFType *LOFType::VNC_INERTIAL = NULL;
      LOFType *LOFType::VVLH = NULL;
      LOFType *LOFType::VVLH_INERTIAL = NULL;

      jclass LOFType::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/frames/LOFType");

          mids$ = new jmethodID[max_mid];
          mids$[mid_getName_1c1fa1e935d6cdcf] = env->getMethodID(cls, "getName", "()Ljava/lang/String;");
          mids$[mid_rotationFromInertial_7e9d52385b0ba3f0] = env->getMethodID(cls, "rotationFromInertial", "(Lorg/orekit/utils/PVCoordinates;)Lorg/hipparchus/geometry/euclidean/threed/Rotation;");
          mids$[mid_rotationFromInertial_9c03210e4a66b8b3] = env->getMethodID(cls, "rotationFromInertial", "(Lorg/orekit/time/AbsoluteDate;Lorg/orekit/utils/PVCoordinates;)Lorg/hipparchus/geometry/euclidean/threed/Rotation;");
          mids$[mid_rotationFromInertial_80cbd49af33092b8] = env->getMethodID(cls, "rotationFromInertial", "(Lorg/hipparchus/Field;Lorg/orekit/utils/FieldPVCoordinates;)Lorg/hipparchus/geometry/euclidean/threed/FieldRotation;");
          mids$[mid_rotationFromInertial_8f928c19e9edde2b] = env->getMethodID(cls, "rotationFromInertial", "(Lorg/hipparchus/Field;Lorg/orekit/time/FieldAbsoluteDate;Lorg/orekit/utils/FieldPVCoordinates;)Lorg/hipparchus/geometry/euclidean/threed/FieldRotation;");
          mids$[mid_rotationFromLOF_404fd1e1ee7a0f99] = env->getMethodID(cls, "rotationFromLOF", "(Lorg/orekit/frames/LOFType;Lorg/orekit/utils/PVCoordinates;)Lorg/hipparchus/geometry/euclidean/threed/Rotation;");
          mids$[mid_rotationFromLOF_8e169a23d8373027] = env->getMethodID(cls, "rotationFromLOF", "(Lorg/hipparchus/Field;Lorg/orekit/frames/LOFType;Lorg/orekit/utils/FieldPVCoordinates;)Lorg/hipparchus/geometry/euclidean/threed/FieldRotation;");
          mids$[mid_toOrbitRelativeFrame_77481b528a1ae805] = env->getMethodID(cls, "toOrbitRelativeFrame", "()Lorg/orekit/files/ccsds/definitions/OrbitRelativeFrame;");
          mids$[mid_valueOf_2862ff6fc1bb5941] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/frames/LOFType;");
          mids$[mid_values_20b2193d6f06e063] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/frames/LOFType;");

          class$ = new ::java::lang::Class(cls);
          cls = (jclass) class$->this$;

          EQW = new LOFType(env->getStaticObjectField(cls, "EQW", "Lorg/orekit/frames/LOFType;"));
          LVLH = new LOFType(env->getStaticObjectField(cls, "LVLH", "Lorg/orekit/frames/LOFType;"));
          LVLH_CCSDS = new LOFType(env->getStaticObjectField(cls, "LVLH_CCSDS", "Lorg/orekit/frames/LOFType;"));
          LVLH_CCSDS_INERTIAL = new LOFType(env->getStaticObjectField(cls, "LVLH_CCSDS_INERTIAL", "Lorg/orekit/frames/LOFType;"));
          LVLH_INERTIAL = new LOFType(env->getStaticObjectField(cls, "LVLH_INERTIAL", "Lorg/orekit/frames/LOFType;"));
          NTW = new LOFType(env->getStaticObjectField(cls, "NTW", "Lorg/orekit/frames/LOFType;"));
          NTW_INERTIAL = new LOFType(env->getStaticObjectField(cls, "NTW_INERTIAL", "Lorg/orekit/frames/LOFType;"));
          QSW = new LOFType(env->getStaticObjectField(cls, "QSW", "Lorg/orekit/frames/LOFType;"));
          QSW_INERTIAL = new LOFType(env->getStaticObjectField(cls, "QSW_INERTIAL", "Lorg/orekit/frames/LOFType;"));
          TNW = new LOFType(env->getStaticObjectField(cls, "TNW", "Lorg/orekit/frames/LOFType;"));
          TNW_INERTIAL = new LOFType(env->getStaticObjectField(cls, "TNW_INERTIAL", "Lorg/orekit/frames/LOFType;"));
          VNC = new LOFType(env->getStaticObjectField(cls, "VNC", "Lorg/orekit/frames/LOFType;"));
          VNC_INERTIAL = new LOFType(env->getStaticObjectField(cls, "VNC_INERTIAL", "Lorg/orekit/frames/LOFType;"));
          VVLH = new LOFType(env->getStaticObjectField(cls, "VVLH", "Lorg/orekit/frames/LOFType;"));
          VVLH_INERTIAL = new LOFType(env->getStaticObjectField(cls, "VVLH_INERTIAL", "Lorg/orekit/frames/LOFType;"));
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ::java::lang::String LOFType::getName() const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getName_1c1fa1e935d6cdcf]));
      }

      ::org::hipparchus::geometry::euclidean::threed::Rotation LOFType::rotationFromInertial(const ::org::orekit::utils::PVCoordinates & a0) const
      {
        return ::org::hipparchus::geometry::euclidean::threed::Rotation(env->callObjectMethod(this$, mids$[mid_rotationFromInertial_7e9d52385b0ba3f0], a0.this$));
      }

      ::org::hipparchus::geometry::euclidean::threed::Rotation LOFType::rotationFromInertial(const ::org::orekit::time::AbsoluteDate & a0, const ::org::orekit::utils::PVCoordinates & a1) const
      {
        return ::org::hipparchus::geometry::euclidean::threed::Rotation(env->callObjectMethod(this$, mids$[mid_rotationFromInertial_9c03210e4a66b8b3], a0.this$, a1.this$));
      }

      ::org::hipparchus::geometry::euclidean::threed::FieldRotation LOFType::rotationFromInertial(const ::org::hipparchus::Field & a0, const ::org::orekit::utils::FieldPVCoordinates & a1) const
      {
        return ::org::hipparchus::geometry::euclidean::threed::FieldRotation(env->callObjectMethod(this$, mids$[mid_rotationFromInertial_80cbd49af33092b8], a0.this$, a1.this$));
      }

      ::org::hipparchus::geometry::euclidean::threed::FieldRotation LOFType::rotationFromInertial(const ::org::hipparchus::Field & a0, const ::org::orekit::time::FieldAbsoluteDate & a1, const ::org::orekit::utils::FieldPVCoordinates & a2) const
      {
        return ::org::hipparchus::geometry::euclidean::threed::FieldRotation(env->callObjectMethod(this$, mids$[mid_rotationFromInertial_8f928c19e9edde2b], a0.this$, a1.this$, a2.this$));
      }

      ::org::hipparchus::geometry::euclidean::threed::Rotation LOFType::rotationFromLOF(const LOFType & a0, const ::org::orekit::utils::PVCoordinates & a1) const
      {
        return ::org::hipparchus::geometry::euclidean::threed::Rotation(env->callObjectMethod(this$, mids$[mid_rotationFromLOF_404fd1e1ee7a0f99], a0.this$, a1.this$));
      }

      ::org::hipparchus::geometry::euclidean::threed::FieldRotation LOFType::rotationFromLOF(const ::org::hipparchus::Field & a0, const LOFType & a1, const ::org::orekit::utils::FieldPVCoordinates & a2) const
      {
        return ::org::hipparchus::geometry::euclidean::threed::FieldRotation(env->callObjectMethod(this$, mids$[mid_rotationFromLOF_8e169a23d8373027], a0.this$, a1.this$, a2.this$));
      }

      ::org::orekit::files::ccsds::definitions::OrbitRelativeFrame LOFType::toOrbitRelativeFrame() const
      {
        return ::org::orekit::files::ccsds::definitions::OrbitRelativeFrame(env->callObjectMethod(this$, mids$[mid_toOrbitRelativeFrame_77481b528a1ae805]));
      }

      LOFType LOFType::valueOf(const ::java::lang::String & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return LOFType(env->callStaticObjectMethod(cls, mids$[mid_valueOf_2862ff6fc1bb5941], a0.this$));
      }

      JArray< LOFType > LOFType::values()
      {
        jclass cls = env->getClass(initializeClass);
        return JArray< LOFType >(env->callStaticObjectMethod(cls, mids$[mid_values_20b2193d6f06e063]));
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace frames {
      static PyObject *t_LOFType_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_LOFType_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_LOFType_of_(t_LOFType *self, PyObject *args);
      static PyObject *t_LOFType_getName(t_LOFType *self);
      static PyObject *t_LOFType_rotationFromInertial(t_LOFType *self, PyObject *args);
      static PyObject *t_LOFType_rotationFromLOF(t_LOFType *self, PyObject *args);
      static PyObject *t_LOFType_toOrbitRelativeFrame(t_LOFType *self);
      static PyObject *t_LOFType_valueOf(PyTypeObject *type, PyObject *args);
      static PyObject *t_LOFType_values(PyTypeObject *type);
      static PyObject *t_LOFType_get__name(t_LOFType *self, void *data);
      static PyObject *t_LOFType_get__parameters_(t_LOFType *self, void *data);
      static PyGetSetDef t_LOFType__fields_[] = {
        DECLARE_GET_FIELD(t_LOFType, name),
        DECLARE_GET_FIELD(t_LOFType, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_LOFType__methods_[] = {
        DECLARE_METHOD(t_LOFType, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_LOFType, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_LOFType, of_, METH_VARARGS),
        DECLARE_METHOD(t_LOFType, getName, METH_NOARGS),
        DECLARE_METHOD(t_LOFType, rotationFromInertial, METH_VARARGS),
        DECLARE_METHOD(t_LOFType, rotationFromLOF, METH_VARARGS),
        DECLARE_METHOD(t_LOFType, toOrbitRelativeFrame, METH_NOARGS),
        DECLARE_METHOD(t_LOFType, valueOf, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_LOFType, values, METH_NOARGS | METH_CLASS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(LOFType)[] = {
        { Py_tp_methods, t_LOFType__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_LOFType__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(LOFType)[] = {
        &PY_TYPE_DEF(::java::lang::Enum),
        NULL
      };

      DEFINE_TYPE(LOFType, t_LOFType, LOFType);
      PyObject *t_LOFType::wrap_Object(const LOFType& object, PyTypeObject *p0)
      {
        PyObject *obj = t_LOFType::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_LOFType *self = (t_LOFType *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_LOFType::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_LOFType::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_LOFType *self = (t_LOFType *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_LOFType::install(PyObject *module)
      {
        installType(&PY_TYPE(LOFType), &PY_TYPE_DEF(LOFType), module, "LOFType", 0);
      }

      void t_LOFType::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(LOFType), "class_", make_descriptor(LOFType::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LOFType), "wrapfn_", make_descriptor(t_LOFType::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LOFType), "boxfn_", make_descriptor(boxObject));
        env->getClass(LOFType::initializeClass);
        PyObject_SetAttrString((PyObject *) PY_TYPE(LOFType), "EQW", make_descriptor(t_LOFType::wrap_Object(*LOFType::EQW)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LOFType), "LVLH", make_descriptor(t_LOFType::wrap_Object(*LOFType::LVLH)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LOFType), "LVLH_CCSDS", make_descriptor(t_LOFType::wrap_Object(*LOFType::LVLH_CCSDS)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LOFType), "LVLH_CCSDS_INERTIAL", make_descriptor(t_LOFType::wrap_Object(*LOFType::LVLH_CCSDS_INERTIAL)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LOFType), "LVLH_INERTIAL", make_descriptor(t_LOFType::wrap_Object(*LOFType::LVLH_INERTIAL)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LOFType), "NTW", make_descriptor(t_LOFType::wrap_Object(*LOFType::NTW)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LOFType), "NTW_INERTIAL", make_descriptor(t_LOFType::wrap_Object(*LOFType::NTW_INERTIAL)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LOFType), "QSW", make_descriptor(t_LOFType::wrap_Object(*LOFType::QSW)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LOFType), "QSW_INERTIAL", make_descriptor(t_LOFType::wrap_Object(*LOFType::QSW_INERTIAL)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LOFType), "TNW", make_descriptor(t_LOFType::wrap_Object(*LOFType::TNW)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LOFType), "TNW_INERTIAL", make_descriptor(t_LOFType::wrap_Object(*LOFType::TNW_INERTIAL)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LOFType), "VNC", make_descriptor(t_LOFType::wrap_Object(*LOFType::VNC)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LOFType), "VNC_INERTIAL", make_descriptor(t_LOFType::wrap_Object(*LOFType::VNC_INERTIAL)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LOFType), "VVLH", make_descriptor(t_LOFType::wrap_Object(*LOFType::VVLH)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LOFType), "VVLH_INERTIAL", make_descriptor(t_LOFType::wrap_Object(*LOFType::VVLH_INERTIAL)));
      }

      static PyObject *t_LOFType_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, LOFType::initializeClass, 1)))
          return NULL;
        return t_LOFType::wrap_Object(LOFType(((t_LOFType *) arg)->object.this$));
      }
      static PyObject *t_LOFType_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, LOFType::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_LOFType_of_(t_LOFType *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static PyObject *t_LOFType_getName(t_LOFType *self)
      {
        ::java::lang::String result((jobject) NULL);
        OBJ_CALL(result = self->object.getName());
        return j2p(result);
      }

      static PyObject *t_LOFType_rotationFromInertial(t_LOFType *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::orekit::utils::PVCoordinates a0((jobject) NULL);
            ::org::hipparchus::geometry::euclidean::threed::Rotation result((jobject) NULL);

            if (!parseArgs(args, "k", ::org::orekit::utils::PVCoordinates::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.rotationFromInertial(a0));
              return ::org::hipparchus::geometry::euclidean::threed::t_Rotation::wrap_Object(result);
            }
          }
          break;
         case 2:
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            ::org::orekit::utils::PVCoordinates a1((jobject) NULL);
            ::org::hipparchus::geometry::euclidean::threed::Rotation result((jobject) NULL);

            if (!parseArgs(args, "kk", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::utils::PVCoordinates::initializeClass, &a0, &a1))
            {
              OBJ_CALL(result = self->object.rotationFromInertial(a0, a1));
              return ::org::hipparchus::geometry::euclidean::threed::t_Rotation::wrap_Object(result);
            }
          }
          {
            ::org::hipparchus::Field a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::utils::FieldPVCoordinates a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::hipparchus::geometry::euclidean::threed::FieldRotation result((jobject) NULL);

            if (!parseArgs(args, "KK", ::org::hipparchus::Field::initializeClass, ::org::orekit::utils::FieldPVCoordinates::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1, &p1, ::org::orekit::utils::t_FieldPVCoordinates::parameters_))
            {
              OBJ_CALL(result = self->object.rotationFromInertial(a0, a1));
              return ::org::hipparchus::geometry::euclidean::threed::t_FieldRotation::wrap_Object(result);
            }
          }
          break;
         case 3:
          {
            ::org::hipparchus::Field a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::time::FieldAbsoluteDate a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::orekit::utils::FieldPVCoordinates a2((jobject) NULL);
            PyTypeObject **p2;
            ::org::hipparchus::geometry::euclidean::threed::FieldRotation result((jobject) NULL);

            if (!parseArgs(args, "KKK", ::org::hipparchus::Field::initializeClass, ::org::orekit::time::FieldAbsoluteDate::initializeClass, ::org::orekit::utils::FieldPVCoordinates::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1, &p1, ::org::orekit::time::t_FieldAbsoluteDate::parameters_, &a2, &p2, ::org::orekit::utils::t_FieldPVCoordinates::parameters_))
            {
              OBJ_CALL(result = self->object.rotationFromInertial(a0, a1, a2));
              return ::org::hipparchus::geometry::euclidean::threed::t_FieldRotation::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "rotationFromInertial", args);
        return NULL;
      }

      static PyObject *t_LOFType_rotationFromLOF(t_LOFType *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 2:
          {
            LOFType a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::utils::PVCoordinates a1((jobject) NULL);
            ::org::hipparchus::geometry::euclidean::threed::Rotation result((jobject) NULL);

            if (!parseArgs(args, "Kk", LOFType::initializeClass, ::org::orekit::utils::PVCoordinates::initializeClass, &a0, &p0, t_LOFType::parameters_, &a1))
            {
              OBJ_CALL(result = self->object.rotationFromLOF(a0, a1));
              return ::org::hipparchus::geometry::euclidean::threed::t_Rotation::wrap_Object(result);
            }
          }
          break;
         case 3:
          {
            ::org::hipparchus::Field a0((jobject) NULL);
            PyTypeObject **p0;
            LOFType a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::orekit::utils::FieldPVCoordinates a2((jobject) NULL);
            PyTypeObject **p2;
            ::org::hipparchus::geometry::euclidean::threed::FieldRotation result((jobject) NULL);

            if (!parseArgs(args, "KKK", ::org::hipparchus::Field::initializeClass, LOFType::initializeClass, ::org::orekit::utils::FieldPVCoordinates::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1, &p1, t_LOFType::parameters_, &a2, &p2, ::org::orekit::utils::t_FieldPVCoordinates::parameters_))
            {
              OBJ_CALL(result = self->object.rotationFromLOF(a0, a1, a2));
              return ::org::hipparchus::geometry::euclidean::threed::t_FieldRotation::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "rotationFromLOF", args);
        return NULL;
      }

      static PyObject *t_LOFType_toOrbitRelativeFrame(t_LOFType *self)
      {
        ::org::orekit::files::ccsds::definitions::OrbitRelativeFrame result((jobject) NULL);
        OBJ_CALL(result = self->object.toOrbitRelativeFrame());
        return ::org::orekit::files::ccsds::definitions::t_OrbitRelativeFrame::wrap_Object(result);
      }

      static PyObject *t_LOFType_valueOf(PyTypeObject *type, PyObject *args)
      {
        ::java::lang::String a0((jobject) NULL);
        LOFType result((jobject) NULL);

        if (!parseArgs(args, "s", &a0))
        {
          OBJ_CALL(result = ::org::orekit::frames::LOFType::valueOf(a0));
          return t_LOFType::wrap_Object(result);
        }

        return callSuper(type, "valueOf", args, 2);
      }

      static PyObject *t_LOFType_values(PyTypeObject *type)
      {
        JArray< LOFType > result((jobject) NULL);
        OBJ_CALL(result = ::org::orekit::frames::LOFType::values());
        return JArray<jobject>(result.this$).wrap(t_LOFType::wrap_jobject);
      }
      static PyObject *t_LOFType_get__parameters_(t_LOFType *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }

      static PyObject *t_LOFType_get__name(t_LOFType *self, void *data)
      {
        ::java::lang::String value((jobject) NULL);
        OBJ_CALL(value = self->object.getName());
        return j2p(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/geometry/fov/PythonAbstractFieldOfView.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "java/util/List.h"
#include "java/lang/Throwable.h"
#include "org/orekit/bodies/GeodeticPoint.h"
#include "org/orekit/frames/Transform.h"
#include "org/orekit/bodies/OneAxisEllipsoid.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/events/VisibilityTrigger.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace geometry {
      namespace fov {

        ::java::lang::Class *PythonAbstractFieldOfView::class$ = NULL;
        jmethodID *PythonAbstractFieldOfView::mids$ = NULL;
        bool PythonAbstractFieldOfView::live$ = false;

        jclass PythonAbstractFieldOfView::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/geometry/fov/PythonAbstractFieldOfView");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_8ba9fe7a847cecad] = env->getMethodID(cls, "<init>", "(D)V");
            mids$[mid_finalize_a1fa5dae97ea5ed2] = env->getMethodID(cls, "finalize", "()V");
            mids$[mid_getFootprint_f20a8500298f8a78] = env->getMethodID(cls, "getFootprint", "(Lorg/orekit/frames/Transform;Lorg/orekit/bodies/OneAxisEllipsoid;D)Ljava/util/List;");
            mids$[mid_offsetFromBoundary_927580832e9083f9] = env->getMethodID(cls, "offsetFromBoundary", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;DLorg/orekit/propagation/events/VisibilityTrigger;)D");
            mids$[mid_projectToBoundary_f21507e4850a184e] = env->getMethodID(cls, "projectToBoundary", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
            mids$[mid_pythonDecRef_a1fa5dae97ea5ed2] = env->getMethodID(cls, "pythonDecRef", "()V");
            mids$[mid_pythonExtension_6c0ce7e438e5ded4] = env->getMethodID(cls, "pythonExtension", "()J");
            mids$[mid_pythonExtension_3d7dd2314a0dd456] = env->getMethodID(cls, "pythonExtension", "(J)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        PythonAbstractFieldOfView::PythonAbstractFieldOfView(jdouble a0) : ::org::orekit::geometry::fov::AbstractFieldOfView(env->newObject(initializeClass, &mids$, mid_init$_8ba9fe7a847cecad, a0)) {}

        void PythonAbstractFieldOfView::finalize() const
        {
          env->callVoidMethod(this$, mids$[mid_finalize_a1fa5dae97ea5ed2]);
        }

        jlong PythonAbstractFieldOfView::pythonExtension() const
        {
          return env->callLongMethod(this$, mids$[mid_pythonExtension_6c0ce7e438e5ded4]);
        }

        void PythonAbstractFieldOfView::pythonExtension(jlong a0) const
        {
          env->callVoidMethod(this$, mids$[mid_pythonExtension_3d7dd2314a0dd456], a0);
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace geometry {
      namespace fov {
        static PyObject *t_PythonAbstractFieldOfView_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_PythonAbstractFieldOfView_instance_(PyTypeObject *type, PyObject *arg);
        static int t_PythonAbstractFieldOfView_init_(t_PythonAbstractFieldOfView *self, PyObject *args, PyObject *kwds);
        static PyObject *t_PythonAbstractFieldOfView_finalize(t_PythonAbstractFieldOfView *self);
        static PyObject *t_PythonAbstractFieldOfView_pythonExtension(t_PythonAbstractFieldOfView *self, PyObject *args);
        static jobject JNICALL t_PythonAbstractFieldOfView_getFootprint0(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jdouble a2);
        static jdouble JNICALL t_PythonAbstractFieldOfView_offsetFromBoundary1(JNIEnv *jenv, jobject jobj, jobject a0, jdouble a1, jobject a2);
        static jobject JNICALL t_PythonAbstractFieldOfView_projectToBoundary2(JNIEnv *jenv, jobject jobj, jobject a0);
        static void JNICALL t_PythonAbstractFieldOfView_pythonDecRef3(JNIEnv *jenv, jobject jobj);
        static PyObject *t_PythonAbstractFieldOfView_get__self(t_PythonAbstractFieldOfView *self, void *data);
        static PyGetSetDef t_PythonAbstractFieldOfView__fields_[] = {
          DECLARE_GET_FIELD(t_PythonAbstractFieldOfView, self),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_PythonAbstractFieldOfView__methods_[] = {
          DECLARE_METHOD(t_PythonAbstractFieldOfView, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonAbstractFieldOfView, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonAbstractFieldOfView, finalize, METH_NOARGS),
          DECLARE_METHOD(t_PythonAbstractFieldOfView, pythonExtension, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(PythonAbstractFieldOfView)[] = {
          { Py_tp_methods, t_PythonAbstractFieldOfView__methods_ },
          { Py_tp_init, (void *) t_PythonAbstractFieldOfView_init_ },
          { Py_tp_getset, t_PythonAbstractFieldOfView__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(PythonAbstractFieldOfView)[] = {
          &PY_TYPE_DEF(::org::orekit::geometry::fov::AbstractFieldOfView),
          NULL
        };

        DEFINE_TYPE(PythonAbstractFieldOfView, t_PythonAbstractFieldOfView, PythonAbstractFieldOfView);

        void t_PythonAbstractFieldOfView::install(PyObject *module)
        {
          installType(&PY_TYPE(PythonAbstractFieldOfView), &PY_TYPE_DEF(PythonAbstractFieldOfView), module, "PythonAbstractFieldOfView", 1);
        }

        void t_PythonAbstractFieldOfView::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAbstractFieldOfView), "class_", make_descriptor(PythonAbstractFieldOfView::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAbstractFieldOfView), "wrapfn_", make_descriptor(t_PythonAbstractFieldOfView::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAbstractFieldOfView), "boxfn_", make_descriptor(boxObject));
          jclass cls = env->getClass(PythonAbstractFieldOfView::initializeClass);
          JNINativeMethod methods[] = {
            { "getFootprint", "(Lorg/orekit/frames/Transform;Lorg/orekit/bodies/OneAxisEllipsoid;D)Ljava/util/List;", (void *) t_PythonAbstractFieldOfView_getFootprint0 },
            { "offsetFromBoundary", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;DLorg/orekit/propagation/events/VisibilityTrigger;)D", (void *) t_PythonAbstractFieldOfView_offsetFromBoundary1 },
            { "projectToBoundary", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;", (void *) t_PythonAbstractFieldOfView_projectToBoundary2 },
            { "pythonDecRef", "()V", (void *) t_PythonAbstractFieldOfView_pythonDecRef3 },
          };
          env->registerNatives(cls, methods, 4);
        }

        static PyObject *t_PythonAbstractFieldOfView_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, PythonAbstractFieldOfView::initializeClass, 1)))
            return NULL;
          return t_PythonAbstractFieldOfView::wrap_Object(PythonAbstractFieldOfView(((t_PythonAbstractFieldOfView *) arg)->object.this$));
        }
        static PyObject *t_PythonAbstractFieldOfView_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, PythonAbstractFieldOfView::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_PythonAbstractFieldOfView_init_(t_PythonAbstractFieldOfView *self, PyObject *args, PyObject *kwds)
        {
          jdouble a0;
          PythonAbstractFieldOfView object((jobject) NULL);

          if (!parseArgs(args, "D", &a0))
          {
            INT_CALL(object = PythonAbstractFieldOfView(a0));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          Py_INCREF((PyObject *) self);
          self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

          return 0;
        }

        static PyObject *t_PythonAbstractFieldOfView_finalize(t_PythonAbstractFieldOfView *self)
        {
          OBJ_CALL(self->object.finalize());
          Py_RETURN_NONE;
        }

        static PyObject *t_PythonAbstractFieldOfView_pythonExtension(t_PythonAbstractFieldOfView *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 0:
            {
              jlong result;
              OBJ_CALL(result = self->object.pythonExtension());
              return PyLong_FromLongLong((PY_LONG_LONG) result);
            }
            break;
           case 1:
            {
              jlong a0;

              if (!parseArgs(args, "J", &a0))
              {
                OBJ_CALL(self->object.pythonExtension(a0));
                Py_RETURN_NONE;
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "pythonExtension", args);
          return NULL;
        }

        static jobject JNICALL t_PythonAbstractFieldOfView_getFootprint0(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jdouble a2)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractFieldOfView::mids$[PythonAbstractFieldOfView::mid_pythonExtension_6c0ce7e438e5ded4]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          ::java::util::List value((jobject) NULL);
          PyObject *o0 = ::org::orekit::frames::t_Transform::wrap_Object(::org::orekit::frames::Transform(a0));
          PyObject *o1 = ::org::orekit::bodies::t_OneAxisEllipsoid::wrap_Object(::org::orekit::bodies::OneAxisEllipsoid(a1));
          PyObject *result = PyObject_CallMethod(obj, "getFootprint", "OOd", o0, o1, (double) a2);
          Py_DECREF(o0);
          Py_DECREF(o1);
          if (!result)
            throwPythonError();
          else if (parseArg(result, "k", ::java::util::List::initializeClass, &value))
          {
            throwTypeError("getFootprint", result);
            Py_DECREF(result);
          }
          else
          {
            jobj = jenv->NewLocalRef(value.this$);
            Py_DECREF(result);
            return jobj;
          }

          return (jobject) NULL;
        }

        static jdouble JNICALL t_PythonAbstractFieldOfView_offsetFromBoundary1(JNIEnv *jenv, jobject jobj, jobject a0, jdouble a1, jobject a2)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractFieldOfView::mids$[PythonAbstractFieldOfView::mid_pythonExtension_6c0ce7e438e5ded4]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          jdouble value;
          PyObject *o0 = ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(::org::hipparchus::geometry::euclidean::threed::Vector3D(a0));
          PyObject *o2 = ::org::orekit::propagation::events::t_VisibilityTrigger::wrap_Object(::org::orekit::propagation::events::VisibilityTrigger(a2));
          PyObject *result = PyObject_CallMethod(obj, "offsetFromBoundary", "OdO", o0, (double) a1, o2);
          Py_DECREF(o0);
          Py_DECREF(o2);
          if (!result)
            throwPythonError();
          else if (parseArg(result, "D", &value))
          {
            throwTypeError("offsetFromBoundary", result);
            Py_DECREF(result);
          }
          else
          {
            Py_DECREF(result);
            return value;
          }

          return (jdouble) 0;
        }

        static jobject JNICALL t_PythonAbstractFieldOfView_projectToBoundary2(JNIEnv *jenv, jobject jobj, jobject a0)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractFieldOfView::mids$[PythonAbstractFieldOfView::mid_pythonExtension_6c0ce7e438e5ded4]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
          PyObject *o0 = ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(::org::hipparchus::geometry::euclidean::threed::Vector3D(a0));
          PyObject *result = PyObject_CallMethod(obj, "projectToBoundary", "O", o0);
          Py_DECREF(o0);
          if (!result)
            throwPythonError();
          else if (parseArg(result, "k", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &value))
          {
            throwTypeError("projectToBoundary", result);
            Py_DECREF(result);
          }
          else
          {
            jobj = jenv->NewLocalRef(value.this$);
            Py_DECREF(result);
            return jobj;
          }

          return (jobject) NULL;
        }

        static void JNICALL t_PythonAbstractFieldOfView_pythonDecRef3(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractFieldOfView::mids$[PythonAbstractFieldOfView::mid_pythonExtension_6c0ce7e438e5ded4]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

          if (obj != NULL)
          {
            jenv->CallVoidMethod(jobj, PythonAbstractFieldOfView::mids$[PythonAbstractFieldOfView::mid_pythonExtension_3d7dd2314a0dd456], (jlong) 0);
            env->finalizeObject(jenv, obj);
          }
        }

        static PyObject *t_PythonAbstractFieldOfView_get__self(t_PythonAbstractFieldOfView *self, void *data)
        {
          jlong ptr;
          OBJ_CALL(ptr = self->object.pythonExtension());
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

          if (obj != NULL)
          {
            Py_INCREF(obj);
            return obj;
          }
          else
            Py_RETURN_NONE;
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/optim/nonlinear/scalar/noderiv/SimplexOptimizer.h"
#include "org/hipparchus/optim/ConvergenceChecker.h"
#include "java/lang/Class.h"
#include "org/hipparchus/optim/PointValuePair.h"
#include "org/hipparchus/optim/OptimizationData.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace optim {
      namespace nonlinear {
        namespace scalar {
          namespace noderiv {

            ::java::lang::Class *SimplexOptimizer::class$ = NULL;
            jmethodID *SimplexOptimizer::mids$ = NULL;
            bool SimplexOptimizer::live$ = false;

            jclass SimplexOptimizer::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/hipparchus/optim/nonlinear/scalar/noderiv/SimplexOptimizer");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_faeab0ed0f5e2304] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/optim/ConvergenceChecker;)V");
                mids$[mid_init$_369b4c97255d5afa] = env->getMethodID(cls, "<init>", "(DD)V");
                mids$[mid_optimize_9d04816d74472b44] = env->getMethodID(cls, "optimize", "([Lorg/hipparchus/optim/OptimizationData;)Lorg/hipparchus/optim/PointValuePair;");
                mids$[mid_parseOptimizationData_14193ddbce7a2cc0] = env->getMethodID(cls, "parseOptimizationData", "([Lorg/hipparchus/optim/OptimizationData;)V");
                mids$[mid_doOptimize_35ff88cac3217ca3] = env->getMethodID(cls, "doOptimize", "()Lorg/hipparchus/optim/PointValuePair;");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            SimplexOptimizer::SimplexOptimizer(const ::org::hipparchus::optim::ConvergenceChecker & a0) : ::org::hipparchus::optim::nonlinear::scalar::MultivariateOptimizer(env->newObject(initializeClass, &mids$, mid_init$_faeab0ed0f5e2304, a0.this$)) {}

            SimplexOptimizer::SimplexOptimizer(jdouble a0, jdouble a1) : ::org::hipparchus::optim::nonlinear::scalar::MultivariateOptimizer(env->newObject(initializeClass, &mids$, mid_init$_369b4c97255d5afa, a0, a1)) {}

            ::org::hipparchus::optim::PointValuePair SimplexOptimizer::optimize(const JArray< ::org::hipparchus::optim::OptimizationData > & a0) const
            {
              return ::org::hipparchus::optim::PointValuePair(env->callObjectMethod(this$, mids$[mid_optimize_9d04816d74472b44], a0.this$));
            }
          }
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace hipparchus {
    namespace optim {
      namespace nonlinear {
        namespace scalar {
          namespace noderiv {
            static PyObject *t_SimplexOptimizer_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_SimplexOptimizer_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_SimplexOptimizer_of_(t_SimplexOptimizer *self, PyObject *args);
            static int t_SimplexOptimizer_init_(t_SimplexOptimizer *self, PyObject *args, PyObject *kwds);
            static PyObject *t_SimplexOptimizer_optimize(t_SimplexOptimizer *self, PyObject *args);
            static PyObject *t_SimplexOptimizer_get__parameters_(t_SimplexOptimizer *self, void *data);
            static PyGetSetDef t_SimplexOptimizer__fields_[] = {
              DECLARE_GET_FIELD(t_SimplexOptimizer, parameters_),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_SimplexOptimizer__methods_[] = {
              DECLARE_METHOD(t_SimplexOptimizer, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_SimplexOptimizer, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_SimplexOptimizer, of_, METH_VARARGS),
              DECLARE_METHOD(t_SimplexOptimizer, optimize, METH_VARARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(SimplexOptimizer)[] = {
              { Py_tp_methods, t_SimplexOptimizer__methods_ },
              { Py_tp_init, (void *) t_SimplexOptimizer_init_ },
              { Py_tp_getset, t_SimplexOptimizer__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(SimplexOptimizer)[] = {
              &PY_TYPE_DEF(::org::hipparchus::optim::nonlinear::scalar::MultivariateOptimizer),
              NULL
            };

            DEFINE_TYPE(SimplexOptimizer, t_SimplexOptimizer, SimplexOptimizer);
            PyObject *t_SimplexOptimizer::wrap_Object(const SimplexOptimizer& object, PyTypeObject *p0)
            {
              PyObject *obj = t_SimplexOptimizer::wrap_Object(object);
              if (obj != NULL && obj != Py_None)
              {
                t_SimplexOptimizer *self = (t_SimplexOptimizer *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            PyObject *t_SimplexOptimizer::wrap_jobject(const jobject& object, PyTypeObject *p0)
            {
              PyObject *obj = t_SimplexOptimizer::wrap_jobject(object);
              if (obj != NULL && obj != Py_None)
              {
                t_SimplexOptimizer *self = (t_SimplexOptimizer *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            void t_SimplexOptimizer::install(PyObject *module)
            {
              installType(&PY_TYPE(SimplexOptimizer), &PY_TYPE_DEF(SimplexOptimizer), module, "SimplexOptimizer", 0);
            }

            void t_SimplexOptimizer::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(SimplexOptimizer), "class_", make_descriptor(SimplexOptimizer::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(SimplexOptimizer), "wrapfn_", make_descriptor(t_SimplexOptimizer::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(SimplexOptimizer), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_SimplexOptimizer_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, SimplexOptimizer::initializeClass, 1)))
                return NULL;
              return t_SimplexOptimizer::wrap_Object(SimplexOptimizer(((t_SimplexOptimizer *) arg)->object.this$));
            }
            static PyObject *t_SimplexOptimizer_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, SimplexOptimizer::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_SimplexOptimizer_of_(t_SimplexOptimizer *self, PyObject *args)
            {
              if (!parseArg(args, "T", 1, &(self->parameters)))
                Py_RETURN_SELF;
              return PyErr_SetArgsError((PyObject *) self, "of_", args);
            }

            static int t_SimplexOptimizer_init_(t_SimplexOptimizer *self, PyObject *args, PyObject *kwds)
            {
              switch (PyTuple_GET_SIZE(args)) {
               case 1:
                {
                  ::org::hipparchus::optim::ConvergenceChecker a0((jobject) NULL);
                  PyTypeObject **p0;
                  SimplexOptimizer object((jobject) NULL);

                  if (!parseArgs(args, "K", ::org::hipparchus::optim::ConvergenceChecker::initializeClass, &a0, &p0, ::org::hipparchus::optim::t_ConvergenceChecker::parameters_))
                  {
                    INT_CALL(object = SimplexOptimizer(a0));
                    self->object = object;
                    self->parameters[0] = ::org::hipparchus::optim::PY_TYPE(PointValuePair);
                    break;
                  }
                }
                goto err;
               case 2:
                {
                  jdouble a0;
                  jdouble a1;
                  SimplexOptimizer object((jobject) NULL);

                  if (!parseArgs(args, "DD", &a0, &a1))
                  {
                    INT_CALL(object = SimplexOptimizer(a0, a1));
                    self->object = object;
                    self->parameters[0] = ::org::hipparchus::optim::PY_TYPE(PointValuePair);
                    break;
                  }
                }
               default:
               err:
                PyErr_SetArgsError((PyObject *) self, "__init__", args);
                return -1;
              }

              return 0;
            }

            static PyObject *t_SimplexOptimizer_optimize(t_SimplexOptimizer *self, PyObject *args)
            {
              JArray< ::org::hipparchus::optim::OptimizationData > a0((jobject) NULL);
              ::org::hipparchus::optim::PointValuePair result((jobject) NULL);

              if (!parseArgs(args, "[k", ::org::hipparchus::optim::OptimizationData::initializeClass, &a0))
              {
                OBJ_CALL(result = self->object.optimize(a0));
                return ::org::hipparchus::optim::t_PointValuePair::wrap_Object(result);
              }

              return callSuper(PY_TYPE(SimplexOptimizer), (PyObject *) self, "optimize", args, 2);
            }
            static PyObject *t_SimplexOptimizer_get__parameters_(t_SimplexOptimizer *self, void *data)
            {
              return typeParameters(self->parameters, sizeof(self->parameters));
            }
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/optim/nonlinear/scalar/gradient/NonLinearConjugateGradientOptimizer$Formula.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "org/hipparchus/optim/nonlinear/scalar/gradient/NonLinearConjugateGradientOptimizer$Formula.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace optim {
      namespace nonlinear {
        namespace scalar {
          namespace gradient {

            ::java::lang::Class *NonLinearConjugateGradientOptimizer$Formula::class$ = NULL;
            jmethodID *NonLinearConjugateGradientOptimizer$Formula::mids$ = NULL;
            bool NonLinearConjugateGradientOptimizer$Formula::live$ = false;
            NonLinearConjugateGradientOptimizer$Formula *NonLinearConjugateGradientOptimizer$Formula::FLETCHER_REEVES = NULL;
            NonLinearConjugateGradientOptimizer$Formula *NonLinearConjugateGradientOptimizer$Formula::POLAK_RIBIERE = NULL;

            jclass NonLinearConjugateGradientOptimizer$Formula::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/hipparchus/optim/nonlinear/scalar/gradient/NonLinearConjugateGradientOptimizer$Formula");

                mids$ = new jmethodID[max_mid];
                mids$[mid_valueOf_6dc0f21d20882b41] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/hipparchus/optim/nonlinear/scalar/gradient/NonLinearConjugateGradientOptimizer$Formula;");
                mids$[mid_values_073c35d06272872d] = env->getStaticMethodID(cls, "values", "()[Lorg/hipparchus/optim/nonlinear/scalar/gradient/NonLinearConjugateGradientOptimizer$Formula;");

                class$ = new ::java::lang::Class(cls);
                cls = (jclass) class$->this$;

                FLETCHER_REEVES = new NonLinearConjugateGradientOptimizer$Formula(env->getStaticObjectField(cls, "FLETCHER_REEVES", "Lorg/hipparchus/optim/nonlinear/scalar/gradient/NonLinearConjugateGradientOptimizer$Formula;"));
                POLAK_RIBIERE = new NonLinearConjugateGradientOptimizer$Formula(env->getStaticObjectField(cls, "POLAK_RIBIERE", "Lorg/hipparchus/optim/nonlinear/scalar/gradient/NonLinearConjugateGradientOptimizer$Formula;"));
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            NonLinearConjugateGradientOptimizer$Formula NonLinearConjugateGradientOptimizer$Formula::valueOf(const ::java::lang::String & a0)
            {
              jclass cls = env->getClass(initializeClass);
              return NonLinearConjugateGradientOptimizer$Formula(env->callStaticObjectMethod(cls, mids$[mid_valueOf_6dc0f21d20882b41], a0.this$));
            }

            JArray< NonLinearConjugateGradientOptimizer$Formula > NonLinearConjugateGradientOptimizer$Formula::values()
            {
              jclass cls = env->getClass(initializeClass);
              return JArray< NonLinearConjugateGradientOptimizer$Formula >(env->callStaticObjectMethod(cls, mids$[mid_values_073c35d06272872d]));
            }
          }
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace hipparchus {
    namespace optim {
      namespace nonlinear {
        namespace scalar {
          namespace gradient {
            static PyObject *t_NonLinearConjugateGradientOptimizer$Formula_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_NonLinearConjugateGradientOptimizer$Formula_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_NonLinearConjugateGradientOptimizer$Formula_of_(t_NonLinearConjugateGradientOptimizer$Formula *self, PyObject *args);
            static PyObject *t_NonLinearConjugateGradientOptimizer$Formula_valueOf(PyTypeObject *type, PyObject *args);
            static PyObject *t_NonLinearConjugateGradientOptimizer$Formula_values(PyTypeObject *type);
            static PyObject *t_NonLinearConjugateGradientOptimizer$Formula_get__parameters_(t_NonLinearConjugateGradientOptimizer$Formula *self, void *data);
            static PyGetSetDef t_NonLinearConjugateGradientOptimizer$Formula__fields_[] = {
              DECLARE_GET_FIELD(t_NonLinearConjugateGradientOptimizer$Formula, parameters_),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_NonLinearConjugateGradientOptimizer$Formula__methods_[] = {
              DECLARE_METHOD(t_NonLinearConjugateGradientOptimizer$Formula, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_NonLinearConjugateGradientOptimizer$Formula, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_NonLinearConjugateGradientOptimizer$Formula, of_, METH_VARARGS),
              DECLARE_METHOD(t_NonLinearConjugateGradientOptimizer$Formula, valueOf, METH_VARARGS | METH_CLASS),
              DECLARE_METHOD(t_NonLinearConjugateGradientOptimizer$Formula, values, METH_NOARGS | METH_CLASS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(NonLinearConjugateGradientOptimizer$Formula)[] = {
              { Py_tp_methods, t_NonLinearConjugateGradientOptimizer$Formula__methods_ },
              { Py_tp_init, (void *) abstract_init },
              { Py_tp_getset, t_NonLinearConjugateGradientOptimizer$Formula__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(NonLinearConjugateGradientOptimizer$Formula)[] = {
              &PY_TYPE_DEF(::java::lang::Enum),
              NULL
            };

            DEFINE_TYPE(NonLinearConjugateGradientOptimizer$Formula, t_NonLinearConjugateGradientOptimizer$Formula, NonLinearConjugateGradientOptimizer$Formula);
            PyObject *t_NonLinearConjugateGradientOptimizer$Formula::wrap_Object(const NonLinearConjugateGradientOptimizer$Formula& object, PyTypeObject *p0)
            {
              PyObject *obj = t_NonLinearConjugateGradientOptimizer$Formula::wrap_Object(object);
              if (obj != NULL && obj != Py_None)
              {
                t_NonLinearConjugateGradientOptimizer$Formula *self = (t_NonLinearConjugateGradientOptimizer$Formula *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            PyObject *t_NonLinearConjugateGradientOptimizer$Formula::wrap_jobject(const jobject& object, PyTypeObject *p0)
            {
              PyObject *obj = t_NonLinearConjugateGradientOptimizer$Formula::wrap_jobject(object);
              if (obj != NULL && obj != Py_None)
              {
                t_NonLinearConjugateGradientOptimizer$Formula *self = (t_NonLinearConjugateGradientOptimizer$Formula *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            void t_NonLinearConjugateGradientOptimizer$Formula::install(PyObject *module)
            {
              installType(&PY_TYPE(NonLinearConjugateGradientOptimizer$Formula), &PY_TYPE_DEF(NonLinearConjugateGradientOptimizer$Formula), module, "NonLinearConjugateGradientOptimizer$Formula", 0);
            }

            void t_NonLinearConjugateGradientOptimizer$Formula::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(NonLinearConjugateGradientOptimizer$Formula), "class_", make_descriptor(NonLinearConjugateGradientOptimizer$Formula::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(NonLinearConjugateGradientOptimizer$Formula), "wrapfn_", make_descriptor(t_NonLinearConjugateGradientOptimizer$Formula::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(NonLinearConjugateGradientOptimizer$Formula), "boxfn_", make_descriptor(boxObject));
              env->getClass(NonLinearConjugateGradientOptimizer$Formula::initializeClass);
              PyObject_SetAttrString((PyObject *) PY_TYPE(NonLinearConjugateGradientOptimizer$Formula), "FLETCHER_REEVES", make_descriptor(t_NonLinearConjugateGradientOptimizer$Formula::wrap_Object(*NonLinearConjugateGradientOptimizer$Formula::FLETCHER_REEVES)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(NonLinearConjugateGradientOptimizer$Formula), "POLAK_RIBIERE", make_descriptor(t_NonLinearConjugateGradientOptimizer$Formula::wrap_Object(*NonLinearConjugateGradientOptimizer$Formula::POLAK_RIBIERE)));
            }

            static PyObject *t_NonLinearConjugateGradientOptimizer$Formula_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, NonLinearConjugateGradientOptimizer$Formula::initializeClass, 1)))
                return NULL;
              return t_NonLinearConjugateGradientOptimizer$Formula::wrap_Object(NonLinearConjugateGradientOptimizer$Formula(((t_NonLinearConjugateGradientOptimizer$Formula *) arg)->object.this$));
            }
            static PyObject *t_NonLinearConjugateGradientOptimizer$Formula_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, NonLinearConjugateGradientOptimizer$Formula::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_NonLinearConjugateGradientOptimizer$Formula_of_(t_NonLinearConjugateGradientOptimizer$Formula *self, PyObject *args)
            {
              if (!parseArg(args, "T", 1, &(self->parameters)))
                Py_RETURN_SELF;
              return PyErr_SetArgsError((PyObject *) self, "of_", args);
            }

            static PyObject *t_NonLinearConjugateGradientOptimizer$Formula_valueOf(PyTypeObject *type, PyObject *args)
            {
              ::java::lang::String a0((jobject) NULL);
              NonLinearConjugateGradientOptimizer$Formula result((jobject) NULL);

              if (!parseArgs(args, "s", &a0))
              {
                OBJ_CALL(result = ::org::hipparchus::optim::nonlinear::scalar::gradient::NonLinearConjugateGradientOptimizer$Formula::valueOf(a0));
                return t_NonLinearConjugateGradientOptimizer$Formula::wrap_Object(result);
              }

              return callSuper(type, "valueOf", args, 2);
            }

            static PyObject *t_NonLinearConjugateGradientOptimizer$Formula_values(PyTypeObject *type)
            {
              JArray< NonLinearConjugateGradientOptimizer$Formula > result((jobject) NULL);
              OBJ_CALL(result = ::org::hipparchus::optim::nonlinear::scalar::gradient::NonLinearConjugateGradientOptimizer$Formula::values());
              return JArray<jobject>(result.this$).wrap(t_NonLinearConjugateGradientOptimizer$Formula::wrap_jobject);
            }
            static PyObject *t_NonLinearConjugateGradientOptimizer$Formula_get__parameters_(t_NonLinearConjugateGradientOptimizer$Formula *self, void *data)
            {
              return typeParameters(self->parameters, sizeof(self->parameters));
            }
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/forces/gravity/potential/NormalizedSphericalHarmonicsProvider$NormalizedSphericalHarmonics.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace forces {
      namespace gravity {
        namespace potential {

          ::java::lang::Class *NormalizedSphericalHarmonicsProvider$NormalizedSphericalHarmonics::class$ = NULL;
          jmethodID *NormalizedSphericalHarmonicsProvider$NormalizedSphericalHarmonics::mids$ = NULL;
          bool NormalizedSphericalHarmonicsProvider$NormalizedSphericalHarmonics::live$ = false;

          jclass NormalizedSphericalHarmonicsProvider$NormalizedSphericalHarmonics::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/forces/gravity/potential/NormalizedSphericalHarmonicsProvider$NormalizedSphericalHarmonics");

              mids$ = new jmethodID[max_mid];
              mids$[mid_getNormalizedCnm_cad98089d00f8a5b] = env->getMethodID(cls, "getNormalizedCnm", "(II)D");
              mids$[mid_getNormalizedSnm_cad98089d00f8a5b] = env->getMethodID(cls, "getNormalizedSnm", "(II)D");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          jdouble NormalizedSphericalHarmonicsProvider$NormalizedSphericalHarmonics::getNormalizedCnm(jint a0, jint a1) const
          {
            return env->callDoubleMethod(this$, mids$[mid_getNormalizedCnm_cad98089d00f8a5b], a0, a1);
          }

          jdouble NormalizedSphericalHarmonicsProvider$NormalizedSphericalHarmonics::getNormalizedSnm(jint a0, jint a1) const
          {
            return env->callDoubleMethod(this$, mids$[mid_getNormalizedSnm_cad98089d00f8a5b], a0, a1);
          }
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace forces {
      namespace gravity {
        namespace potential {
          static PyObject *t_NormalizedSphericalHarmonicsProvider$NormalizedSphericalHarmonics_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_NormalizedSphericalHarmonicsProvider$NormalizedSphericalHarmonics_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_NormalizedSphericalHarmonicsProvider$NormalizedSphericalHarmonics_getNormalizedCnm(t_NormalizedSphericalHarmonicsProvider$NormalizedSphericalHarmonics *self, PyObject *args);
          static PyObject *t_NormalizedSphericalHarmonicsProvider$NormalizedSphericalHarmonics_getNormalizedSnm(t_NormalizedSphericalHarmonicsProvider$NormalizedSphericalHarmonics *self, PyObject *args);

          static PyMethodDef t_NormalizedSphericalHarmonicsProvider$NormalizedSphericalHarmonics__methods_[] = {
            DECLARE_METHOD(t_NormalizedSphericalHarmonicsProvider$NormalizedSphericalHarmonics, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_NormalizedSphericalHarmonicsProvider$NormalizedSphericalHarmonics, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_NormalizedSphericalHarmonicsProvider$NormalizedSphericalHarmonics, getNormalizedCnm, METH_VARARGS),
            DECLARE_METHOD(t_NormalizedSphericalHarmonicsProvider$NormalizedSphericalHarmonics, getNormalizedSnm, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(NormalizedSphericalHarmonicsProvider$NormalizedSphericalHarmonics)[] = {
            { Py_tp_methods, t_NormalizedSphericalHarmonicsProvider$NormalizedSphericalHarmonics__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(NormalizedSphericalHarmonicsProvider$NormalizedSphericalHarmonics)[] = {
            &PY_TYPE_DEF(::org::orekit::time::TimeStamped),
            NULL
          };

          DEFINE_TYPE(NormalizedSphericalHarmonicsProvider$NormalizedSphericalHarmonics, t_NormalizedSphericalHarmonicsProvider$NormalizedSphericalHarmonics, NormalizedSphericalHarmonicsProvider$NormalizedSphericalHarmonics);

          void t_NormalizedSphericalHarmonicsProvider$NormalizedSphericalHarmonics::install(PyObject *module)
          {
            installType(&PY_TYPE(NormalizedSphericalHarmonicsProvider$NormalizedSphericalHarmonics), &PY_TYPE_DEF(NormalizedSphericalHarmonicsProvider$NormalizedSphericalHarmonics), module, "NormalizedSphericalHarmonicsProvider$NormalizedSphericalHarmonics", 0);
          }

          void t_NormalizedSphericalHarmonicsProvider$NormalizedSphericalHarmonics::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(NormalizedSphericalHarmonicsProvider$NormalizedSphericalHarmonics), "class_", make_descriptor(NormalizedSphericalHarmonicsProvider$NormalizedSphericalHarmonics::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(NormalizedSphericalHarmonicsProvider$NormalizedSphericalHarmonics), "wrapfn_", make_descriptor(t_NormalizedSphericalHarmonicsProvider$NormalizedSphericalHarmonics::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(NormalizedSphericalHarmonicsProvider$NormalizedSphericalHarmonics), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_NormalizedSphericalHarmonicsProvider$NormalizedSphericalHarmonics_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, NormalizedSphericalHarmonicsProvider$NormalizedSphericalHarmonics::initializeClass, 1)))
              return NULL;
            return t_NormalizedSphericalHarmonicsProvider$NormalizedSphericalHarmonics::wrap_Object(NormalizedSphericalHarmonicsProvider$NormalizedSphericalHarmonics(((t_NormalizedSphericalHarmonicsProvider$NormalizedSphericalHarmonics *) arg)->object.this$));
          }
          static PyObject *t_NormalizedSphericalHarmonicsProvider$NormalizedSphericalHarmonics_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, NormalizedSphericalHarmonicsProvider$NormalizedSphericalHarmonics::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_NormalizedSphericalHarmonicsProvider$NormalizedSphericalHarmonics_getNormalizedCnm(t_NormalizedSphericalHarmonicsProvider$NormalizedSphericalHarmonics *self, PyObject *args)
          {
            jint a0;
            jint a1;
            jdouble result;

            if (!parseArgs(args, "II", &a0, &a1))
            {
              OBJ_CALL(result = self->object.getNormalizedCnm(a0, a1));
              return PyFloat_FromDouble((double) result);
            }

            PyErr_SetArgsError((PyObject *) self, "getNormalizedCnm", args);
            return NULL;
          }

          static PyObject *t_NormalizedSphericalHarmonicsProvider$NormalizedSphericalHarmonics_getNormalizedSnm(t_NormalizedSphericalHarmonicsProvider$NormalizedSphericalHarmonics *self, PyObject *args)
          {
            jint a0;
            jint a1;
            jdouble result;

            if (!parseArgs(args, "II", &a0, &a1))
            {
              OBJ_CALL(result = self->object.getNormalizedSnm(a0, a1));
              return PyFloat_FromDouble((double) result);
            }

            PyErr_SetArgsError((PyObject *) self, "getNormalizedSnm", args);
            return NULL;
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/PythonFieldBoundedPropagator.h"
#include "org/orekit/attitudes/AttitudeProvider.h"
#include "java/util/List.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "java/lang/Throwable.h"
#include "java/util/Collection.h"
#include "org/orekit/propagation/events/FieldEventDetector.h"
#include "org/orekit/propagation/sampling/FieldStepHandlerMultiplexer.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/orekit/frames/Frame.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/FieldAdditionalStateProvider.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "org/orekit/propagation/FieldEphemerisGenerator.h"
#include "org/orekit/propagation/FieldBoundedPropagator.h"
#include "java/lang/String.h"
#include "org/orekit/utils/TimeStampedFieldPVCoordinates.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {

      ::java::lang::Class *PythonFieldBoundedPropagator::class$ = NULL;
      jmethodID *PythonFieldBoundedPropagator::mids$ = NULL;
      bool PythonFieldBoundedPropagator::live$ = false;

      jclass PythonFieldBoundedPropagator::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/propagation/PythonFieldBoundedPropagator");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_a1fa5dae97ea5ed2] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_addAdditionalStateProvider_6f4fb3fe151ef989] = env->getMethodID(cls, "addAdditionalStateProvider", "(Lorg/orekit/propagation/FieldAdditionalStateProvider;)V");
          mids$[mid_addEventDetector_ca1d91eb6a3ce219] = env->getMethodID(cls, "addEventDetector", "(Lorg/orekit/propagation/events/FieldEventDetector;)V");
          mids$[mid_clearEventsDetectors_a1fa5dae97ea5ed2] = env->getMethodID(cls, "clearEventsDetectors", "()V");
          mids$[mid_finalize_a1fa5dae97ea5ed2] = env->getMethodID(cls, "finalize", "()V");
          mids$[mid_getAdditionalStateProviders_e62d3bb06d56d7e3] = env->getMethodID(cls, "getAdditionalStateProviders", "()Ljava/util/List;");
          mids$[mid_getAttitudeProvider_331f12bb6017243b] = env->getMethodID(cls, "getAttitudeProvider", "()Lorg/orekit/attitudes/AttitudeProvider;");
          mids$[mid_getEphemerisGenerator_afe29c55086c638f] = env->getMethodID(cls, "getEphemerisGenerator", "()Lorg/orekit/propagation/FieldEphemerisGenerator;");
          mids$[mid_getEventsDetectors_cb666ea1a15f5210] = env->getMethodID(cls, "getEventsDetectors", "()Ljava/util/Collection;");
          mids$[mid_getFrame_2c51111cc6894ba1] = env->getMethodID(cls, "getFrame", "()Lorg/orekit/frames/Frame;");
          mids$[mid_getInitialState_fba6d56f8dbc98d0] = env->getMethodID(cls, "getInitialState", "()Lorg/orekit/propagation/FieldSpacecraftState;");
          mids$[mid_getManagedAdditionalStates_0f94e41879ab7062] = env->getMethodID(cls, "getManagedAdditionalStates", "()[Ljava/lang/String;");
          mids$[mid_getMaxDate_fa23a4301b9c83e7] = env->getMethodID(cls, "getMaxDate", "()Lorg/orekit/time/FieldAbsoluteDate;");
          mids$[mid_getMinDate_fa23a4301b9c83e7] = env->getMethodID(cls, "getMinDate", "()Lorg/orekit/time/FieldAbsoluteDate;");
          mids$[mid_getMultiplexer_bf5be23258085f1c] = env->getMethodID(cls, "getMultiplexer", "()Lorg/orekit/propagation/sampling/FieldStepHandlerMultiplexer;");
          mids$[mid_getPVCoordinates_294c5c99690f2356] = env->getMethodID(cls, "getPVCoordinates", "(Lorg/orekit/time/FieldAbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/orekit/utils/TimeStampedFieldPVCoordinates;");
          mids$[mid_isAdditionalStateManaged_cde6b28e15c96b75] = env->getMethodID(cls, "isAdditionalStateManaged", "(Ljava/lang/String;)Z");
          mids$[mid_propagate_70fecd201ca47d3b] = env->getMethodID(cls, "propagate", "(Lorg/orekit/time/FieldAbsoluteDate;)Lorg/orekit/propagation/FieldSpacecraftState;");
          mids$[mid_propagate_44f88f604c4d00f1] = env->getMethodID(cls, "propagate", "(Lorg/orekit/time/FieldAbsoluteDate;Lorg/orekit/time/FieldAbsoluteDate;)Lorg/orekit/propagation/FieldSpacecraftState;");
          mids$[mid_pythonDecRef_a1fa5dae97ea5ed2] = env->getMethodID(cls, "pythonDecRef", "()V");
          mids$[mid_pythonExtension_6c0ce7e438e5ded4] = env->getMethodID(cls, "pythonExtension", "()J");
          mids$[mid_pythonExtension_3d7dd2314a0dd456] = env->getMethodID(cls, "pythonExtension", "(J)V");
          mids$[mid_resetInitialState_54d9efbf99822980] = env->getMethodID(cls, "resetInitialState", "(Lorg/orekit/propagation/FieldSpacecraftState;)V");
          mids$[mid_setAttitudeProvider_8e4d3ea100bc0095] = env->getMethodID(cls, "setAttitudeProvider", "(Lorg/orekit/attitudes/AttitudeProvider;)V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      PythonFieldBoundedPropagator::PythonFieldBoundedPropagator() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_a1fa5dae97ea5ed2)) {}

      void PythonFieldBoundedPropagator::finalize() const
      {
        env->callVoidMethod(this$, mids$[mid_finalize_a1fa5dae97ea5ed2]);
      }

      jlong PythonFieldBoundedPropagator::pythonExtension() const
      {
        return env->callLongMethod(this$, mids$[mid_pythonExtension_6c0ce7e438e5ded4]);
      }

      void PythonFieldBoundedPropagator::pythonExtension(jlong a0) const
      {
        env->callVoidMethod(this$, mids$[mid_pythonExtension_3d7dd2314a0dd456], a0);
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace propagation {
      static PyObject *t_PythonFieldBoundedPropagator_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_PythonFieldBoundedPropagator_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_PythonFieldBoundedPropagator_of_(t_PythonFieldBoundedPropagator *self, PyObject *args);
      static int t_PythonFieldBoundedPropagator_init_(t_PythonFieldBoundedPropagator *self, PyObject *args, PyObject *kwds);
      static PyObject *t_PythonFieldBoundedPropagator_finalize(t_PythonFieldBoundedPropagator *self);
      static PyObject *t_PythonFieldBoundedPropagator_pythonExtension(t_PythonFieldBoundedPropagator *self, PyObject *args);
      static void JNICALL t_PythonFieldBoundedPropagator_addAdditionalStateProvider0(JNIEnv *jenv, jobject jobj, jobject a0);
      static void JNICALL t_PythonFieldBoundedPropagator_addEventDetector1(JNIEnv *jenv, jobject jobj, jobject a0);
      static void JNICALL t_PythonFieldBoundedPropagator_clearEventsDetectors2(JNIEnv *jenv, jobject jobj);
      static jobject JNICALL t_PythonFieldBoundedPropagator_getAdditionalStateProviders3(JNIEnv *jenv, jobject jobj);
      static jobject JNICALL t_PythonFieldBoundedPropagator_getAttitudeProvider4(JNIEnv *jenv, jobject jobj);
      static jobject JNICALL t_PythonFieldBoundedPropagator_getEphemerisGenerator5(JNIEnv *jenv, jobject jobj);
      static jobject JNICALL t_PythonFieldBoundedPropagator_getEventsDetectors6(JNIEnv *jenv, jobject jobj);
      static jobject JNICALL t_PythonFieldBoundedPropagator_getFrame7(JNIEnv *jenv, jobject jobj);
      static jobject JNICALL t_PythonFieldBoundedPropagator_getInitialState8(JNIEnv *jenv, jobject jobj);
      static jobject JNICALL t_PythonFieldBoundedPropagator_getManagedAdditionalStates9(JNIEnv *jenv, jobject jobj);
      static jobject JNICALL t_PythonFieldBoundedPropagator_getMaxDate10(JNIEnv *jenv, jobject jobj);
      static jobject JNICALL t_PythonFieldBoundedPropagator_getMinDate11(JNIEnv *jenv, jobject jobj);
      static jobject JNICALL t_PythonFieldBoundedPropagator_getMultiplexer12(JNIEnv *jenv, jobject jobj);
      static jobject JNICALL t_PythonFieldBoundedPropagator_getPVCoordinates13(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1);
      static jboolean JNICALL t_PythonFieldBoundedPropagator_isAdditionalStateManaged14(JNIEnv *jenv, jobject jobj, jobject a0);
      static jobject JNICALL t_PythonFieldBoundedPropagator_propagate15(JNIEnv *jenv, jobject jobj, jobject a0);
      static jobject JNICALL t_PythonFieldBoundedPropagator_propagate16(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1);
      static void JNICALL t_PythonFieldBoundedPropagator_pythonDecRef17(JNIEnv *jenv, jobject jobj);
      static void JNICALL t_PythonFieldBoundedPropagator_resetInitialState18(JNIEnv *jenv, jobject jobj, jobject a0);
      static void JNICALL t_PythonFieldBoundedPropagator_setAttitudeProvider19(JNIEnv *jenv, jobject jobj, jobject a0);
      static PyObject *t_PythonFieldBoundedPropagator_get__self(t_PythonFieldBoundedPropagator *self, void *data);
      static PyObject *t_PythonFieldBoundedPropagator_get__parameters_(t_PythonFieldBoundedPropagator *self, void *data);
      static PyGetSetDef t_PythonFieldBoundedPropagator__fields_[] = {
        DECLARE_GET_FIELD(t_PythonFieldBoundedPropagator, self),
        DECLARE_GET_FIELD(t_PythonFieldBoundedPropagator, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_PythonFieldBoundedPropagator__methods_[] = {
        DECLARE_METHOD(t_PythonFieldBoundedPropagator, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonFieldBoundedPropagator, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonFieldBoundedPropagator, of_, METH_VARARGS),
        DECLARE_METHOD(t_PythonFieldBoundedPropagator, finalize, METH_NOARGS),
        DECLARE_METHOD(t_PythonFieldBoundedPropagator, pythonExtension, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(PythonFieldBoundedPropagator)[] = {
        { Py_tp_methods, t_PythonFieldBoundedPropagator__methods_ },
        { Py_tp_init, (void *) t_PythonFieldBoundedPropagator_init_ },
        { Py_tp_getset, t_PythonFieldBoundedPropagator__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(PythonFieldBoundedPropagator)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(PythonFieldBoundedPropagator, t_PythonFieldBoundedPropagator, PythonFieldBoundedPropagator);
      PyObject *t_PythonFieldBoundedPropagator::wrap_Object(const PythonFieldBoundedPropagator& object, PyTypeObject *p0)
      {
        PyObject *obj = t_PythonFieldBoundedPropagator::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_PythonFieldBoundedPropagator *self = (t_PythonFieldBoundedPropagator *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_PythonFieldBoundedPropagator::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_PythonFieldBoundedPropagator::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_PythonFieldBoundedPropagator *self = (t_PythonFieldBoundedPropagator *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_PythonFieldBoundedPropagator::install(PyObject *module)
      {
        installType(&PY_TYPE(PythonFieldBoundedPropagator), &PY_TYPE_DEF(PythonFieldBoundedPropagator), module, "PythonFieldBoundedPropagator", 1);
      }

      void t_PythonFieldBoundedPropagator::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonFieldBoundedPropagator), "class_", make_descriptor(PythonFieldBoundedPropagator::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonFieldBoundedPropagator), "wrapfn_", make_descriptor(t_PythonFieldBoundedPropagator::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonFieldBoundedPropagator), "boxfn_", make_descriptor(boxObject));
        jclass cls = env->getClass(PythonFieldBoundedPropagator::initializeClass);
        JNINativeMethod methods[] = {
          { "addAdditionalStateProvider", "(Lorg/orekit/propagation/FieldAdditionalStateProvider;)V", (void *) t_PythonFieldBoundedPropagator_addAdditionalStateProvider0 },
          { "addEventDetector", "(Lorg/orekit/propagation/events/FieldEventDetector;)V", (void *) t_PythonFieldBoundedPropagator_addEventDetector1 },
          { "clearEventsDetectors", "()V", (void *) t_PythonFieldBoundedPropagator_clearEventsDetectors2 },
          { "getAdditionalStateProviders", "()Ljava/util/List;", (void *) t_PythonFieldBoundedPropagator_getAdditionalStateProviders3 },
          { "getAttitudeProvider", "()Lorg/orekit/attitudes/AttitudeProvider;", (void *) t_PythonFieldBoundedPropagator_getAttitudeProvider4 },
          { "getEphemerisGenerator", "()Lorg/orekit/propagation/FieldEphemerisGenerator;", (void *) t_PythonFieldBoundedPropagator_getEphemerisGenerator5 },
          { "getEventsDetectors", "()Ljava/util/Collection;", (void *) t_PythonFieldBoundedPropagator_getEventsDetectors6 },
          { "getFrame", "()Lorg/orekit/frames/Frame;", (void *) t_PythonFieldBoundedPropagator_getFrame7 },
          { "getInitialState", "()Lorg/orekit/propagation/FieldSpacecraftState;", (void *) t_PythonFieldBoundedPropagator_getInitialState8 },
          { "getManagedAdditionalStates", "()[Ljava/lang/String;", (void *) t_PythonFieldBoundedPropagator_getManagedAdditionalStates9 },
          { "getMaxDate", "()Lorg/orekit/time/FieldAbsoluteDate;", (void *) t_PythonFieldBoundedPropagator_getMaxDate10 },
          { "getMinDate", "()Lorg/orekit/time/FieldAbsoluteDate;", (void *) t_PythonFieldBoundedPropagator_getMinDate11 },
          { "getMultiplexer", "()Lorg/orekit/propagation/sampling/FieldStepHandlerMultiplexer;", (void *) t_PythonFieldBoundedPropagator_getMultiplexer12 },
          { "getPVCoordinates", "(Lorg/orekit/time/FieldAbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/orekit/utils/TimeStampedFieldPVCoordinates;", (void *) t_PythonFieldBoundedPropagator_getPVCoordinates13 },
          { "isAdditionalStateManaged", "(Ljava/lang/String;)Z", (void *) t_PythonFieldBoundedPropagator_isAdditionalStateManaged14 },
          { "propagate", "(Lorg/orekit/time/FieldAbsoluteDate;)Lorg/orekit/propagation/FieldSpacecraftState;", (void *) t_PythonFieldBoundedPropagator_propagate15 },
          { "propagate", "(Lorg/orekit/time/FieldAbsoluteDate;Lorg/orekit/time/FieldAbsoluteDate;)Lorg/orekit/propagation/FieldSpacecraftState;", (void *) t_PythonFieldBoundedPropagator_propagate16 },
          { "pythonDecRef", "()V", (void *) t_PythonFieldBoundedPropagator_pythonDecRef17 },
          { "resetInitialState", "(Lorg/orekit/propagation/FieldSpacecraftState;)V", (void *) t_PythonFieldBoundedPropagator_resetInitialState18 },
          { "setAttitudeProvider", "(Lorg/orekit/attitudes/AttitudeProvider;)V", (void *) t_PythonFieldBoundedPropagator_setAttitudeProvider19 },
        };
        env->registerNatives(cls, methods, 20);
      }

      static PyObject *t_PythonFieldBoundedPropagator_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, PythonFieldBoundedPropagator::initializeClass, 1)))
          return NULL;
        return t_PythonFieldBoundedPropagator::wrap_Object(PythonFieldBoundedPropagator(((t_PythonFieldBoundedPropagator *) arg)->object.this$));
      }
      static PyObject *t_PythonFieldBoundedPropagator_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, PythonFieldBoundedPropagator::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_PythonFieldBoundedPropagator_of_(t_PythonFieldBoundedPropagator *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static int t_PythonFieldBoundedPropagator_init_(t_PythonFieldBoundedPropagator *self, PyObject *args, PyObject *kwds)
      {
        PythonFieldBoundedPropagator object((jobject) NULL);

        INT_CALL(object = PythonFieldBoundedPropagator());
        self->object = object;

        Py_INCREF((PyObject *) self);
        self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

        return 0;
      }

      static PyObject *t_PythonFieldBoundedPropagator_finalize(t_PythonFieldBoundedPropagator *self)
      {
        OBJ_CALL(self->object.finalize());
        Py_RETURN_NONE;
      }

      static PyObject *t_PythonFieldBoundedPropagator_pythonExtension(t_PythonFieldBoundedPropagator *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 0:
          {
            jlong result;
            OBJ_CALL(result = self->object.pythonExtension());
            return PyLong_FromLongLong((PY_LONG_LONG) result);
          }
          break;
         case 1:
          {
            jlong a0;

            if (!parseArgs(args, "J", &a0))
            {
              OBJ_CALL(self->object.pythonExtension(a0));
              Py_RETURN_NONE;
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "pythonExtension", args);
        return NULL;
      }

      static void JNICALL t_PythonFieldBoundedPropagator_addAdditionalStateProvider0(JNIEnv *jenv, jobject jobj, jobject a0)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonFieldBoundedPropagator::mids$[PythonFieldBoundedPropagator::mid_pythonExtension_6c0ce7e438e5ded4]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        PyObject *o0 = ::org::orekit::propagation::t_FieldAdditionalStateProvider::wrap_Object(::org::orekit::propagation::FieldAdditionalStateProvider(a0));
        PyObject *result = PyObject_CallMethod(obj, "addAdditionalStateProvider", "O", o0);
        Py_DECREF(o0);
        if (!result)
          throwPythonError();
        else
          Py_DECREF(result);
      }

      static void JNICALL t_PythonFieldBoundedPropagator_addEventDetector1(JNIEnv *jenv, jobject jobj, jobject a0)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonFieldBoundedPropagator::mids$[PythonFieldBoundedPropagator::mid_pythonExtension_6c0ce7e438e5ded4]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        PyObject *o0 = ::org::orekit::propagation::events::t_FieldEventDetector::wrap_Object(::org::orekit::propagation::events::FieldEventDetector(a0));
        PyObject *result = PyObject_CallMethod(obj, "addEventDetector", "O", o0);
        Py_DECREF(o0);
        if (!result)
          throwPythonError();
        else
          Py_DECREF(result);
      }

      static void JNICALL t_PythonFieldBoundedPropagator_clearEventsDetectors2(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonFieldBoundedPropagator::mids$[PythonFieldBoundedPropagator::mid_pythonExtension_6c0ce7e438e5ded4]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        PyObject *result = PyObject_CallMethod(obj, "clearEventsDetectors", "");
        if (!result)
          throwPythonError();
        else
          Py_DECREF(result);
      }

      static jobject JNICALL t_PythonFieldBoundedPropagator_getAdditionalStateProviders3(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonFieldBoundedPropagator::mids$[PythonFieldBoundedPropagator::mid_pythonExtension_6c0ce7e438e5ded4]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::java::util::List value((jobject) NULL);
        PyObject *result = PyObject_CallMethod(obj, "getAdditionalStateProviders", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::java::util::List::initializeClass, &value))
        {
          throwTypeError("getAdditionalStateProviders", result);
          Py_DECREF(result);
        }
        else
        {
          jobj = jenv->NewLocalRef(value.this$);
          Py_DECREF(result);
          return jobj;
        }

        return (jobject) NULL;
      }

      static jobject JNICALL t_PythonFieldBoundedPropagator_getAttitudeProvider4(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonFieldBoundedPropagator::mids$[PythonFieldBoundedPropagator::mid_pythonExtension_6c0ce7e438e5ded4]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::attitudes::AttitudeProvider value((jobject) NULL);
        PyObject *result = PyObject_CallMethod(obj, "getAttitudeProvider", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::attitudes::AttitudeProvider::initializeClass, &value))
        {
          throwTypeError("getAttitudeProvider", result);
          Py_DECREF(result);
        }
        else
        {
          jobj = jenv->NewLocalRef(value.this$);
          Py_DECREF(result);
          return jobj;
        }

        return (jobject) NULL;
      }

      static jobject JNICALL t_PythonFieldBoundedPropagator_getEphemerisGenerator5(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonFieldBoundedPropagator::mids$[PythonFieldBoundedPropagator::mid_pythonExtension_6c0ce7e438e5ded4]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::propagation::FieldEphemerisGenerator value((jobject) NULL);
        PyObject *result = PyObject_CallMethod(obj, "getEphemerisGenerator", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::propagation::FieldEphemerisGenerator::initializeClass, &value))
        {
          throwTypeError("getEphemerisGenerator", result);
          Py_DECREF(result);
        }
        else
        {
          jobj = jenv->NewLocalRef(value.this$);
          Py_DECREF(result);
          return jobj;
        }

        return (jobject) NULL;
      }

      static jobject JNICALL t_PythonFieldBoundedPropagator_getEventsDetectors6(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonFieldBoundedPropagator::mids$[PythonFieldBoundedPropagator::mid_pythonExtension_6c0ce7e438e5ded4]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::java::util::Collection value((jobject) NULL);
        PyObject *result = PyObject_CallMethod(obj, "getEventsDetectors", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::java::util::Collection::initializeClass, &value))
        {
          throwTypeError("getEventsDetectors", result);
          Py_DECREF(result);
        }
        else
        {
          jobj = jenv->NewLocalRef(value.this$);
          Py_DECREF(result);
          return jobj;
        }

        return (jobject) NULL;
      }

      static jobject JNICALL t_PythonFieldBoundedPropagator_getFrame7(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonFieldBoundedPropagator::mids$[PythonFieldBoundedPropagator::mid_pythonExtension_6c0ce7e438e5ded4]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::frames::Frame value((jobject) NULL);
        PyObject *result = PyObject_CallMethod(obj, "getFrame", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::frames::Frame::initializeClass, &value))
        {
          throwTypeError("getFrame", result);
          Py_DECREF(result);
        }
        else
        {
          jobj = jenv->NewLocalRef(value.this$);
          Py_DECREF(result);
          return jobj;
        }

        return (jobject) NULL;
      }

      static jobject JNICALL t_PythonFieldBoundedPropagator_getInitialState8(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonFieldBoundedPropagator::mids$[PythonFieldBoundedPropagator::mid_pythonExtension_6c0ce7e438e5ded4]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::propagation::FieldSpacecraftState value((jobject) NULL);
        PyObject *result = PyObject_CallMethod(obj, "getInitialState", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::propagation::FieldSpacecraftState::initializeClass, &value))
        {
          throwTypeError("getInitialState", result);
          Py_DECREF(result);
        }
        else
        {
          jobj = jenv->NewLocalRef(value.this$);
          Py_DECREF(result);
          return jobj;
        }

        return (jobject) NULL;
      }

      static jobject JNICALL t_PythonFieldBoundedPropagator_getManagedAdditionalStates9(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonFieldBoundedPropagator::mids$[PythonFieldBoundedPropagator::mid_pythonExtension_6c0ce7e438e5ded4]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        JArray< ::java::lang::String > value((jobject) NULL);
        PyObject *result = PyObject_CallMethod(obj, "getManagedAdditionalStates", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "[s", &value))
        {
          throwTypeError("getManagedAdditionalStates", result);
          Py_DECREF(result);
        }
        else
        {
          jobj = jenv->NewLocalRef(value.this$);
          Py_DECREF(result);
          return jobj;
        }

        return (jobject) NULL;
      }

      static jobject JNICALL t_PythonFieldBoundedPropagator_getMaxDate10(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonFieldBoundedPropagator::mids$[PythonFieldBoundedPropagator::mid_pythonExtension_6c0ce7e438e5ded4]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::time::FieldAbsoluteDate value((jobject) NULL);
        PyObject *result = PyObject_CallMethod(obj, "getMaxDate", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::time::FieldAbsoluteDate::initializeClass, &value))
        {
          throwTypeError("getMaxDate", result);
          Py_DECREF(result);
        }
        else
        {
          jobj = jenv->NewLocalRef(value.this$);
          Py_DECREF(result);
          return jobj;
        }

        return (jobject) NULL;
      }

      static jobject JNICALL t_PythonFieldBoundedPropagator_getMinDate11(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonFieldBoundedPropagator::mids$[PythonFieldBoundedPropagator::mid_pythonExtension_6c0ce7e438e5ded4]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::time::FieldAbsoluteDate value((jobject) NULL);
        PyObject *result = PyObject_CallMethod(obj, "getMinDate", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::time::FieldAbsoluteDate::initializeClass, &value))
        {
          throwTypeError("getMinDate", result);
          Py_DECREF(result);
        }
        else
        {
          jobj = jenv->NewLocalRef(value.this$);
          Py_DECREF(result);
          return jobj;
        }

        return (jobject) NULL;
      }

      static jobject JNICALL t_PythonFieldBoundedPropagator_getMultiplexer12(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonFieldBoundedPropagator::mids$[PythonFieldBoundedPropagator::mid_pythonExtension_6c0ce7e438e5ded4]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::propagation::sampling::FieldStepHandlerMultiplexer value((jobject) NULL);
        PyObject *result = PyObject_CallMethod(obj, "getMultiplexer", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::propagation::sampling::FieldStepHandlerMultiplexer::initializeClass, &value))
        {
          throwTypeError("getMultiplexer", result);
          Py_DECREF(result);
        }
        else
        {
          jobj = jenv->NewLocalRef(value.this$);
          Py_DECREF(result);
          return jobj;
        }

        return (jobject) NULL;
      }

      static jobject JNICALL t_PythonFieldBoundedPropagator_getPVCoordinates13(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonFieldBoundedPropagator::mids$[PythonFieldBoundedPropagator::mid_pythonExtension_6c0ce7e438e5ded4]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::utils::TimeStampedFieldPVCoordinates value((jobject) NULL);
        PyObject *o0 = ::org::orekit::time::t_FieldAbsoluteDate::wrap_Object(::org::orekit::time::FieldAbsoluteDate(a0));
        PyObject *o1 = ::org::orekit::frames::t_Frame::wrap_Object(::org::orekit::frames::Frame(a1));
        PyObject *result = PyObject_CallMethod(obj, "getPVCoordinates", "OO", o0, o1);
        Py_DECREF(o0);
        Py_DECREF(o1);
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::utils::TimeStampedFieldPVCoordinates::initializeClass, &value))
        {
          throwTypeError("getPVCoordinates", result);
          Py_DECREF(result);
        }
        else
        {
          jobj = jenv->NewLocalRef(value.this$);
          Py_DECREF(result);
          return jobj;
        }

        return (jobject) NULL;
      }

      static jboolean JNICALL t_PythonFieldBoundedPropagator_isAdditionalStateManaged14(JNIEnv *jenv, jobject jobj, jobject a0)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonFieldBoundedPropagator::mids$[PythonFieldBoundedPropagator::mid_pythonExtension_6c0ce7e438e5ded4]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        jboolean value;
        PyObject *o0 = env->fromJString((jstring) a0, 0);
        PyObject *result = PyObject_CallMethod(obj, "isAdditionalStateManaged", "O", o0);
        Py_DECREF(o0);
        if (!result)
          throwPythonError();
        else if (parseArg(result, "Z", &value))
        {
          throwTypeError("isAdditionalStateManaged", result);
          Py_DECREF(result);
        }
        else
        {
          Py_DECREF(result);
          return value;
        }

        return (jboolean) 0;
      }

      static jobject JNICALL t_PythonFieldBoundedPropagator_propagate15(JNIEnv *jenv, jobject jobj, jobject a0)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonFieldBoundedPropagator::mids$[PythonFieldBoundedPropagator::mid_pythonExtension_6c0ce7e438e5ded4]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::propagation::FieldSpacecraftState value((jobject) NULL);
        PyObject *o0 = ::org::orekit::time::t_FieldAbsoluteDate::wrap_Object(::org::orekit::time::FieldAbsoluteDate(a0));
        PyObject *result = PyObject_CallMethod(obj, "propagate", "O", o0);
        Py_DECREF(o0);
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::propagation::FieldSpacecraftState::initializeClass, &value))
        {
          throwTypeError("propagate", result);
          Py_DECREF(result);
        }
        else
        {
          jobj = jenv->NewLocalRef(value.this$);
          Py_DECREF(result);
          return jobj;
        }

        return (jobject) NULL;
      }

      static jobject JNICALL t_PythonFieldBoundedPropagator_propagate16(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonFieldBoundedPropagator::mids$[PythonFieldBoundedPropagator::mid_pythonExtension_6c0ce7e438e5ded4]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::propagation::FieldSpacecraftState value((jobject) NULL);
        PyObject *o0 = ::org::orekit::time::t_FieldAbsoluteDate::wrap_Object(::org::orekit::time::FieldAbsoluteDate(a0));
        PyObject *o1 = ::org::orekit::time::t_FieldAbsoluteDate::wrap_Object(::org::orekit::time::FieldAbsoluteDate(a1));
        PyObject *result = PyObject_CallMethod(obj, "propagate", "OO", o0, o1);
        Py_DECREF(o0);
        Py_DECREF(o1);
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::propagation::FieldSpacecraftState::initializeClass, &value))
        {
          throwTypeError("propagate", result);
          Py_DECREF(result);
        }
        else
        {
          jobj = jenv->NewLocalRef(value.this$);
          Py_DECREF(result);
          return jobj;
        }

        return (jobject) NULL;
      }

      static void JNICALL t_PythonFieldBoundedPropagator_pythonDecRef17(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonFieldBoundedPropagator::mids$[PythonFieldBoundedPropagator::mid_pythonExtension_6c0ce7e438e5ded4]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

        if (obj != NULL)
        {
          jenv->CallVoidMethod(jobj, PythonFieldBoundedPropagator::mids$[PythonFieldBoundedPropagator::mid_pythonExtension_3d7dd2314a0dd456], (jlong) 0);
          env->finalizeObject(jenv, obj);
        }
      }

      static void JNICALL t_PythonFieldBoundedPropagator_resetInitialState18(JNIEnv *jenv, jobject jobj, jobject a0)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonFieldBoundedPropagator::mids$[PythonFieldBoundedPropagator::mid_pythonExtension_6c0ce7e438e5ded4]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        PyObject *o0 = ::org::orekit::propagation::t_FieldSpacecraftState::wrap_Object(::org::orekit::propagation::FieldSpacecraftState(a0));
        PyObject *result = PyObject_CallMethod(obj, "resetInitialState", "O", o0);
        Py_DECREF(o0);
        if (!result)
          throwPythonError();
        else
          Py_DECREF(result);
      }

      static void JNICALL t_PythonFieldBoundedPropagator_setAttitudeProvider19(JNIEnv *jenv, jobject jobj, jobject a0)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonFieldBoundedPropagator::mids$[PythonFieldBoundedPropagator::mid_pythonExtension_6c0ce7e438e5ded4]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        PyObject *o0 = ::org::orekit::attitudes::t_AttitudeProvider::wrap_Object(::org::orekit::attitudes::AttitudeProvider(a0));
        PyObject *result = PyObject_CallMethod(obj, "setAttitudeProvider", "O", o0);
        Py_DECREF(o0);
        if (!result)
          throwPythonError();
        else
          Py_DECREF(result);
      }

      static PyObject *t_PythonFieldBoundedPropagator_get__self(t_PythonFieldBoundedPropagator *self, void *data)
      {
        jlong ptr;
        OBJ_CALL(ptr = self->object.pythonExtension());
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

        if (obj != NULL)
        {
          Py_INCREF(obj);
          return obj;
        }
        else
          Py_RETURN_NONE;
      }
      static PyObject *t_PythonFieldBoundedPropagator_get__parameters_(t_PythonFieldBoundedPropagator *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/gnss/metric/parser/Units.h"
#include "java/lang/Class.h"
#include "org/orekit/utils/units/Unit.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace metric {
        namespace parser {

          ::java::lang::Class *Units::class$ = NULL;
          jmethodID *Units::mids$ = NULL;
          bool Units::live$ = false;
          ::org::orekit::utils::units::Unit *Units::KM_PER_S = NULL;
          ::org::orekit::utils::units::Unit *Units::KM_PER_S2 = NULL;
          ::org::orekit::utils::units::Unit *Units::MM = NULL;
          ::org::orekit::utils::units::Unit *Units::MM_PER_S = NULL;
          ::org::orekit::utils::units::Unit *Units::MM_PER_S2 = NULL;
          ::org::orekit::utils::units::Unit *Units::NS = NULL;
          ::org::orekit::utils::units::Unit *Units::SEMI_CIRCLE = NULL;

          jclass Units::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/gnss/metric/parser/Units");

              class$ = new ::java::lang::Class(cls);
              cls = (jclass) class$->this$;

              KM_PER_S = new ::org::orekit::utils::units::Unit(env->getStaticObjectField(cls, "KM_PER_S", "Lorg/orekit/utils/units/Unit;"));
              KM_PER_S2 = new ::org::orekit::utils::units::Unit(env->getStaticObjectField(cls, "KM_PER_S2", "Lorg/orekit/utils/units/Unit;"));
              MM = new ::org::orekit::utils::units::Unit(env->getStaticObjectField(cls, "MM", "Lorg/orekit/utils/units/Unit;"));
              MM_PER_S = new ::org::orekit::utils::units::Unit(env->getStaticObjectField(cls, "MM_PER_S", "Lorg/orekit/utils/units/Unit;"));
              MM_PER_S2 = new ::org::orekit::utils::units::Unit(env->getStaticObjectField(cls, "MM_PER_S2", "Lorg/orekit/utils/units/Unit;"));
              NS = new ::org::orekit::utils::units::Unit(env->getStaticObjectField(cls, "NS", "Lorg/orekit/utils/units/Unit;"));
              SEMI_CIRCLE = new ::org::orekit::utils::units::Unit(env->getStaticObjectField(cls, "SEMI_CIRCLE", "Lorg/orekit/utils/units/Unit;"));
              live$ = true;
            }
            return (jclass) class$->this$;
          }
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace metric {
        namespace parser {
          static PyObject *t_Units_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_Units_instance_(PyTypeObject *type, PyObject *arg);

          static PyMethodDef t_Units__methods_[] = {
            DECLARE_METHOD(t_Units, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_Units, instance_, METH_O | METH_CLASS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(Units)[] = {
            { Py_tp_methods, t_Units__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(Units)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(Units, t_Units, Units);

          void t_Units::install(PyObject *module)
          {
            installType(&PY_TYPE(Units), &PY_TYPE_DEF(Units), module, "Units", 0);
          }

          void t_Units::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(Units), "class_", make_descriptor(Units::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Units), "wrapfn_", make_descriptor(t_Units::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Units), "boxfn_", make_descriptor(boxObject));
            env->getClass(Units::initializeClass);
            PyObject_SetAttrString((PyObject *) PY_TYPE(Units), "KM_PER_S", make_descriptor(::org::orekit::utils::units::t_Unit::wrap_Object(*Units::KM_PER_S)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Units), "KM_PER_S2", make_descriptor(::org::orekit::utils::units::t_Unit::wrap_Object(*Units::KM_PER_S2)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Units), "MM", make_descriptor(::org::orekit::utils::units::t_Unit::wrap_Object(*Units::MM)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Units), "MM_PER_S", make_descriptor(::org::orekit::utils::units::t_Unit::wrap_Object(*Units::MM_PER_S)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Units), "MM_PER_S2", make_descriptor(::org::orekit::utils::units::t_Unit::wrap_Object(*Units::MM_PER_S2)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Units), "NS", make_descriptor(::org::orekit::utils::units::t_Unit::wrap_Object(*Units::NS)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Units), "SEMI_CIRCLE", make_descriptor(::org::orekit::utils::units::t_Unit::wrap_Object(*Units::SEMI_CIRCLE)));
          }

          static PyObject *t_Units_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, Units::initializeClass, 1)))
              return NULL;
            return t_Units::wrap_Object(Units(((t_Units *) arg)->object.this$));
          }
          static PyObject *t_Units_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, Units::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/filtering/kalman/linear/LinearProcess.h"
#include "org/hipparchus/filtering/kalman/Measurement.h"
#include "java/lang/Class.h"
#include "org/hipparchus/filtering/kalman/linear/LinearEvolution.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace filtering {
      namespace kalman {
        namespace linear {

          ::java::lang::Class *LinearProcess::class$ = NULL;
          jmethodID *LinearProcess::mids$ = NULL;
          bool LinearProcess::live$ = false;

          jclass LinearProcess::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/hipparchus/filtering/kalman/linear/LinearProcess");

              mids$ = new jmethodID[max_mid];
              mids$[mid_getEvolution_c2e3f1b8f4d64185] = env->getMethodID(cls, "getEvolution", "(Lorg/hipparchus/filtering/kalman/Measurement;)Lorg/hipparchus/filtering/kalman/linear/LinearEvolution;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          ::org::hipparchus::filtering::kalman::linear::LinearEvolution LinearProcess::getEvolution(const ::org::hipparchus::filtering::kalman::Measurement & a0) const
          {
            return ::org::hipparchus::filtering::kalman::linear::LinearEvolution(env->callObjectMethod(this$, mids$[mid_getEvolution_c2e3f1b8f4d64185], a0.this$));
          }
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace hipparchus {
    namespace filtering {
      namespace kalman {
        namespace linear {
          static PyObject *t_LinearProcess_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_LinearProcess_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_LinearProcess_of_(t_LinearProcess *self, PyObject *args);
          static PyObject *t_LinearProcess_getEvolution(t_LinearProcess *self, PyObject *arg);
          static PyObject *t_LinearProcess_get__parameters_(t_LinearProcess *self, void *data);
          static PyGetSetDef t_LinearProcess__fields_[] = {
            DECLARE_GET_FIELD(t_LinearProcess, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_LinearProcess__methods_[] = {
            DECLARE_METHOD(t_LinearProcess, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_LinearProcess, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_LinearProcess, of_, METH_VARARGS),
            DECLARE_METHOD(t_LinearProcess, getEvolution, METH_O),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(LinearProcess)[] = {
            { Py_tp_methods, t_LinearProcess__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { Py_tp_getset, t_LinearProcess__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(LinearProcess)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(LinearProcess, t_LinearProcess, LinearProcess);
          PyObject *t_LinearProcess::wrap_Object(const LinearProcess& object, PyTypeObject *p0)
          {
            PyObject *obj = t_LinearProcess::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_LinearProcess *self = (t_LinearProcess *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          PyObject *t_LinearProcess::wrap_jobject(const jobject& object, PyTypeObject *p0)
          {
            PyObject *obj = t_LinearProcess::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_LinearProcess *self = (t_LinearProcess *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          void t_LinearProcess::install(PyObject *module)
          {
            installType(&PY_TYPE(LinearProcess), &PY_TYPE_DEF(LinearProcess), module, "LinearProcess", 0);
          }

          void t_LinearProcess::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(LinearProcess), "class_", make_descriptor(LinearProcess::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(LinearProcess), "wrapfn_", make_descriptor(t_LinearProcess::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(LinearProcess), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_LinearProcess_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, LinearProcess::initializeClass, 1)))
              return NULL;
            return t_LinearProcess::wrap_Object(LinearProcess(((t_LinearProcess *) arg)->object.this$));
          }
          static PyObject *t_LinearProcess_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, LinearProcess::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_LinearProcess_of_(t_LinearProcess *self, PyObject *args)
          {
            if (!parseArg(args, "T", 1, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static PyObject *t_LinearProcess_getEvolution(t_LinearProcess *self, PyObject *arg)
          {
            ::org::hipparchus::filtering::kalman::Measurement a0((jobject) NULL);
            ::org::hipparchus::filtering::kalman::linear::LinearEvolution result((jobject) NULL);

            if (!parseArg(arg, "k", ::org::hipparchus::filtering::kalman::Measurement::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.getEvolution(a0));
              return ::org::hipparchus::filtering::kalman::linear::t_LinearEvolution::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "getEvolution", arg);
            return NULL;
          }
          static PyObject *t_LinearProcess_get__parameters_(t_LinearProcess *self, void *data)
          {
            return typeParameters(self->parameters, sizeof(self->parameters));
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/bodies/CelestialBodyLoader.h"
#include "org/orekit/bodies/CelestialBody.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace bodies {

      ::java::lang::Class *CelestialBodyLoader::class$ = NULL;
      jmethodID *CelestialBodyLoader::mids$ = NULL;
      bool CelestialBodyLoader::live$ = false;

      jclass CelestialBodyLoader::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/bodies/CelestialBodyLoader");

          mids$ = new jmethodID[max_mid];
          mids$[mid_loadCelestialBody_7eb4325e211386e9] = env->getMethodID(cls, "loadCelestialBody", "(Ljava/lang/String;)Lorg/orekit/bodies/CelestialBody;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ::org::orekit::bodies::CelestialBody CelestialBodyLoader::loadCelestialBody(const ::java::lang::String & a0) const
      {
        return ::org::orekit::bodies::CelestialBody(env->callObjectMethod(this$, mids$[mid_loadCelestialBody_7eb4325e211386e9], a0.this$));
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace bodies {
      static PyObject *t_CelestialBodyLoader_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_CelestialBodyLoader_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_CelestialBodyLoader_loadCelestialBody(t_CelestialBodyLoader *self, PyObject *arg);

      static PyMethodDef t_CelestialBodyLoader__methods_[] = {
        DECLARE_METHOD(t_CelestialBodyLoader, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_CelestialBodyLoader, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_CelestialBodyLoader, loadCelestialBody, METH_O),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(CelestialBodyLoader)[] = {
        { Py_tp_methods, t_CelestialBodyLoader__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(CelestialBodyLoader)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(CelestialBodyLoader, t_CelestialBodyLoader, CelestialBodyLoader);

      void t_CelestialBodyLoader::install(PyObject *module)
      {
        installType(&PY_TYPE(CelestialBodyLoader), &PY_TYPE_DEF(CelestialBodyLoader), module, "CelestialBodyLoader", 0);
      }

      void t_CelestialBodyLoader::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(CelestialBodyLoader), "class_", make_descriptor(CelestialBodyLoader::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(CelestialBodyLoader), "wrapfn_", make_descriptor(t_CelestialBodyLoader::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(CelestialBodyLoader), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_CelestialBodyLoader_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, CelestialBodyLoader::initializeClass, 1)))
          return NULL;
        return t_CelestialBodyLoader::wrap_Object(CelestialBodyLoader(((t_CelestialBodyLoader *) arg)->object.this$));
      }
      static PyObject *t_CelestialBodyLoader_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, CelestialBodyLoader::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_CelestialBodyLoader_loadCelestialBody(t_CelestialBodyLoader *self, PyObject *arg)
      {
        ::java::lang::String a0((jobject) NULL);
        ::org::orekit::bodies::CelestialBody result((jobject) NULL);

        if (!parseArg(arg, "s", &a0))
        {
          OBJ_CALL(result = self->object.loadCelestialBody(a0));
          return ::org::orekit::bodies::t_CelestialBody::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "loadCelestialBody", arg);
        return NULL;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/analytical/gnss/data/GLONASSAlmanac.h"
#include "org/orekit/propagation/analytical/gnss/GLONASSAnalyticalPropagator.h"
#include "org/orekit/attitudes/AttitudeProvider.h"
#include "org/orekit/data/DataContext.h"
#include "org/orekit/propagation/analytical/gnss/data/GLONASSOrbitalElements.h"
#include "org/orekit/frames/Frame.h"
#include "java/lang/Class.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/time/TimeScale.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace analytical {
        namespace gnss {
          namespace data {

            ::java::lang::Class *GLONASSAlmanac::class$ = NULL;
            jmethodID *GLONASSAlmanac::mids$ = NULL;
            bool GLONASSAlmanac::live$ = false;

            jclass GLONASSAlmanac::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/propagation/analytical/gnss/data/GLONASSAlmanac");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_09f00792e3d036b2] = env->getMethodID(cls, "<init>", "(IIIIIDDDDDDDDDD)V");
                mids$[mid_init$_1644e4348eb18835] = env->getMethodID(cls, "<init>", "(IIIIIDDDDDDDDDDLorg/orekit/time/TimeScale;)V");
                mids$[mid_getDate_c325492395d89b24] = env->getMethodID(cls, "getDate", "()Lorg/orekit/time/AbsoluteDate;");
                mids$[mid_getDeltaI_b74f83833fdad017] = env->getMethodID(cls, "getDeltaI", "()D");
                mids$[mid_getDeltaT_b74f83833fdad017] = env->getMethodID(cls, "getDeltaT", "()D");
                mids$[mid_getDeltaTDot_b74f83833fdad017] = env->getMethodID(cls, "getDeltaTDot", "()D");
                mids$[mid_getE_b74f83833fdad017] = env->getMethodID(cls, "getE", "()D");
                mids$[mid_getFrequencyChannel_55546ef6a647f39b] = env->getMethodID(cls, "getFrequencyChannel", "()I");
                mids$[mid_getGPS2Glo_b74f83833fdad017] = env->getMethodID(cls, "getGPS2Glo", "()D");
                mids$[mid_getGlo2UTC_b74f83833fdad017] = env->getMethodID(cls, "getGlo2UTC", "()D");
                mids$[mid_getGloOffset_b74f83833fdad017] = env->getMethodID(cls, "getGloOffset", "()D");
                mids$[mid_getHealth_55546ef6a647f39b] = env->getMethodID(cls, "getHealth", "()I");
                mids$[mid_getLambda_b74f83833fdad017] = env->getMethodID(cls, "getLambda", "()D");
                mids$[mid_getN4_55546ef6a647f39b] = env->getMethodID(cls, "getN4", "()I");
                mids$[mid_getNa_55546ef6a647f39b] = env->getMethodID(cls, "getNa", "()I");
                mids$[mid_getPa_b74f83833fdad017] = env->getMethodID(cls, "getPa", "()D");
                mids$[mid_getPropagator_a20cc0364c67b639] = env->getMethodID(cls, "getPropagator", "()Lorg/orekit/propagation/analytical/gnss/GLONASSAnalyticalPropagator;");
                mids$[mid_getPropagator_beebcb6a0015511d] = env->getMethodID(cls, "getPropagator", "(Lorg/orekit/data/DataContext;)Lorg/orekit/propagation/analytical/gnss/GLONASSAnalyticalPropagator;");
                mids$[mid_getPropagator_ae6608110afdf7e7] = env->getMethodID(cls, "getPropagator", "(Lorg/orekit/data/DataContext;Lorg/orekit/attitudes/AttitudeProvider;Lorg/orekit/frames/Frame;Lorg/orekit/frames/Frame;D)Lorg/orekit/propagation/analytical/gnss/GLONASSAnalyticalPropagator;");
                mids$[mid_getTime_b74f83833fdad017] = env->getMethodID(cls, "getTime", "()D");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            GLONASSAlmanac::GLONASSAlmanac(jint a0, jint a1, jint a2, jint a3, jint a4, jdouble a5, jdouble a6, jdouble a7, jdouble a8, jdouble a9, jdouble a10, jdouble a11, jdouble a12, jdouble a13, jdouble a14) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_09f00792e3d036b2, a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14)) {}

            GLONASSAlmanac::GLONASSAlmanac(jint a0, jint a1, jint a2, jint a3, jint a4, jdouble a5, jdouble a6, jdouble a7, jdouble a8, jdouble a9, jdouble a10, jdouble a11, jdouble a12, jdouble a13, jdouble a14, const ::org::orekit::time::TimeScale & a15) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_1644e4348eb18835, a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15.this$)) {}

            ::org::orekit::time::AbsoluteDate GLONASSAlmanac::getDate() const
            {
              return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getDate_c325492395d89b24]));
            }

            jdouble GLONASSAlmanac::getDeltaI() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getDeltaI_b74f83833fdad017]);
            }

            jdouble GLONASSAlmanac::getDeltaT() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getDeltaT_b74f83833fdad017]);
            }

            jdouble GLONASSAlmanac::getDeltaTDot() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getDeltaTDot_b74f83833fdad017]);
            }

            jdouble GLONASSAlmanac::getE() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getE_b74f83833fdad017]);
            }

            jint GLONASSAlmanac::getFrequencyChannel() const
            {
              return env->callIntMethod(this$, mids$[mid_getFrequencyChannel_55546ef6a647f39b]);
            }

            jdouble GLONASSAlmanac::getGPS2Glo() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getGPS2Glo_b74f83833fdad017]);
            }

            jdouble GLONASSAlmanac::getGlo2UTC() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getGlo2UTC_b74f83833fdad017]);
            }

            jdouble GLONASSAlmanac::getGloOffset() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getGloOffset_b74f83833fdad017]);
            }

            jint GLONASSAlmanac::getHealth() const
            {
              return env->callIntMethod(this$, mids$[mid_getHealth_55546ef6a647f39b]);
            }

            jdouble GLONASSAlmanac::getLambda() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getLambda_b74f83833fdad017]);
            }

            jint GLONASSAlmanac::getN4() const
            {
              return env->callIntMethod(this$, mids$[mid_getN4_55546ef6a647f39b]);
            }

            jint GLONASSAlmanac::getNa() const
            {
              return env->callIntMethod(this$, mids$[mid_getNa_55546ef6a647f39b]);
            }

            jdouble GLONASSAlmanac::getPa() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getPa_b74f83833fdad017]);
            }

            ::org::orekit::propagation::analytical::gnss::GLONASSAnalyticalPropagator GLONASSAlmanac::getPropagator() const
            {
              return ::org::orekit::propagation::analytical::gnss::GLONASSAnalyticalPropagator(env->callObjectMethod(this$, mids$[mid_getPropagator_a20cc0364c67b639]));
            }

            ::org::orekit::propagation::analytical::gnss::GLONASSAnalyticalPropagator GLONASSAlmanac::getPropagator(const ::org::orekit::data::DataContext & a0) const
            {
              return ::org::orekit::propagation::analytical::gnss::GLONASSAnalyticalPropagator(env->callObjectMethod(this$, mids$[mid_getPropagator_beebcb6a0015511d], a0.this$));
            }

            ::org::orekit::propagation::analytical::gnss::GLONASSAnalyticalPropagator GLONASSAlmanac::getPropagator(const ::org::orekit::data::DataContext & a0, const ::org::orekit::attitudes::AttitudeProvider & a1, const ::org::orekit::frames::Frame & a2, const ::org::orekit::frames::Frame & a3, jdouble a4) const
            {
              return ::org::orekit::propagation::analytical::gnss::GLONASSAnalyticalPropagator(env->callObjectMethod(this$, mids$[mid_getPropagator_ae6608110afdf7e7], a0.this$, a1.this$, a2.this$, a3.this$, a4));
            }

            jdouble GLONASSAlmanac::getTime() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getTime_b74f83833fdad017]);
            }
          }
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace analytical {
        namespace gnss {
          namespace data {
            static PyObject *t_GLONASSAlmanac_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_GLONASSAlmanac_instance_(PyTypeObject *type, PyObject *arg);
            static int t_GLONASSAlmanac_init_(t_GLONASSAlmanac *self, PyObject *args, PyObject *kwds);
            static PyObject *t_GLONASSAlmanac_getDate(t_GLONASSAlmanac *self);
            static PyObject *t_GLONASSAlmanac_getDeltaI(t_GLONASSAlmanac *self);
            static PyObject *t_GLONASSAlmanac_getDeltaT(t_GLONASSAlmanac *self);
            static PyObject *t_GLONASSAlmanac_getDeltaTDot(t_GLONASSAlmanac *self);
            static PyObject *t_GLONASSAlmanac_getE(t_GLONASSAlmanac *self);
            static PyObject *t_GLONASSAlmanac_getFrequencyChannel(t_GLONASSAlmanac *self);
            static PyObject *t_GLONASSAlmanac_getGPS2Glo(t_GLONASSAlmanac *self);
            static PyObject *t_GLONASSAlmanac_getGlo2UTC(t_GLONASSAlmanac *self);
            static PyObject *t_GLONASSAlmanac_getGloOffset(t_GLONASSAlmanac *self);
            static PyObject *t_GLONASSAlmanac_getHealth(t_GLONASSAlmanac *self);
            static PyObject *t_GLONASSAlmanac_getLambda(t_GLONASSAlmanac *self);
            static PyObject *t_GLONASSAlmanac_getN4(t_GLONASSAlmanac *self);
            static PyObject *t_GLONASSAlmanac_getNa(t_GLONASSAlmanac *self);
            static PyObject *t_GLONASSAlmanac_getPa(t_GLONASSAlmanac *self);
            static PyObject *t_GLONASSAlmanac_getPropagator(t_GLONASSAlmanac *self, PyObject *args);
            static PyObject *t_GLONASSAlmanac_getTime(t_GLONASSAlmanac *self);
            static PyObject *t_GLONASSAlmanac_get__date(t_GLONASSAlmanac *self, void *data);
            static PyObject *t_GLONASSAlmanac_get__deltaI(t_GLONASSAlmanac *self, void *data);
            static PyObject *t_GLONASSAlmanac_get__deltaT(t_GLONASSAlmanac *self, void *data);
            static PyObject *t_GLONASSAlmanac_get__deltaTDot(t_GLONASSAlmanac *self, void *data);
            static PyObject *t_GLONASSAlmanac_get__e(t_GLONASSAlmanac *self, void *data);
            static PyObject *t_GLONASSAlmanac_get__frequencyChannel(t_GLONASSAlmanac *self, void *data);
            static PyObject *t_GLONASSAlmanac_get__gPS2Glo(t_GLONASSAlmanac *self, void *data);
            static PyObject *t_GLONASSAlmanac_get__glo2UTC(t_GLONASSAlmanac *self, void *data);
            static PyObject *t_GLONASSAlmanac_get__gloOffset(t_GLONASSAlmanac *self, void *data);
            static PyObject *t_GLONASSAlmanac_get__health(t_GLONASSAlmanac *self, void *data);
            static PyObject *t_GLONASSAlmanac_get__lambda(t_GLONASSAlmanac *self, void *data);
            static PyObject *t_GLONASSAlmanac_get__n4(t_GLONASSAlmanac *self, void *data);
            static PyObject *t_GLONASSAlmanac_get__na(t_GLONASSAlmanac *self, void *data);
            static PyObject *t_GLONASSAlmanac_get__pa(t_GLONASSAlmanac *self, void *data);
            static PyObject *t_GLONASSAlmanac_get__propagator(t_GLONASSAlmanac *self, void *data);
            static PyObject *t_GLONASSAlmanac_get__time(t_GLONASSAlmanac *self, void *data);
            static PyGetSetDef t_GLONASSAlmanac__fields_[] = {
              DECLARE_GET_FIELD(t_GLONASSAlmanac, date),
              DECLARE_GET_FIELD(t_GLONASSAlmanac, deltaI),
              DECLARE_GET_FIELD(t_GLONASSAlmanac, deltaT),
              DECLARE_GET_FIELD(t_GLONASSAlmanac, deltaTDot),
              DECLARE_GET_FIELD(t_GLONASSAlmanac, e),
              DECLARE_GET_FIELD(t_GLONASSAlmanac, frequencyChannel),
              DECLARE_GET_FIELD(t_GLONASSAlmanac, gPS2Glo),
              DECLARE_GET_FIELD(t_GLONASSAlmanac, glo2UTC),
              DECLARE_GET_FIELD(t_GLONASSAlmanac, gloOffset),
              DECLARE_GET_FIELD(t_GLONASSAlmanac, health),
              DECLARE_GET_FIELD(t_GLONASSAlmanac, lambda),
              DECLARE_GET_FIELD(t_GLONASSAlmanac, n4),
              DECLARE_GET_FIELD(t_GLONASSAlmanac, na),
              DECLARE_GET_FIELD(t_GLONASSAlmanac, pa),
              DECLARE_GET_FIELD(t_GLONASSAlmanac, propagator),
              DECLARE_GET_FIELD(t_GLONASSAlmanac, time),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_GLONASSAlmanac__methods_[] = {
              DECLARE_METHOD(t_GLONASSAlmanac, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_GLONASSAlmanac, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_GLONASSAlmanac, getDate, METH_NOARGS),
              DECLARE_METHOD(t_GLONASSAlmanac, getDeltaI, METH_NOARGS),
              DECLARE_METHOD(t_GLONASSAlmanac, getDeltaT, METH_NOARGS),
              DECLARE_METHOD(t_GLONASSAlmanac, getDeltaTDot, METH_NOARGS),
              DECLARE_METHOD(t_GLONASSAlmanac, getE, METH_NOARGS),
              DECLARE_METHOD(t_GLONASSAlmanac, getFrequencyChannel, METH_NOARGS),
              DECLARE_METHOD(t_GLONASSAlmanac, getGPS2Glo, METH_NOARGS),
              DECLARE_METHOD(t_GLONASSAlmanac, getGlo2UTC, METH_NOARGS),
              DECLARE_METHOD(t_GLONASSAlmanac, getGloOffset, METH_NOARGS),
              DECLARE_METHOD(t_GLONASSAlmanac, getHealth, METH_NOARGS),
              DECLARE_METHOD(t_GLONASSAlmanac, getLambda, METH_NOARGS),
              DECLARE_METHOD(t_GLONASSAlmanac, getN4, METH_NOARGS),
              DECLARE_METHOD(t_GLONASSAlmanac, getNa, METH_NOARGS),
              DECLARE_METHOD(t_GLONASSAlmanac, getPa, METH_NOARGS),
              DECLARE_METHOD(t_GLONASSAlmanac, getPropagator, METH_VARARGS),
              DECLARE_METHOD(t_GLONASSAlmanac, getTime, METH_NOARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(GLONASSAlmanac)[] = {
              { Py_tp_methods, t_GLONASSAlmanac__methods_ },
              { Py_tp_init, (void *) t_GLONASSAlmanac_init_ },
              { Py_tp_getset, t_GLONASSAlmanac__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(GLONASSAlmanac)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(GLONASSAlmanac, t_GLONASSAlmanac, GLONASSAlmanac);

            void t_GLONASSAlmanac::install(PyObject *module)
            {
              installType(&PY_TYPE(GLONASSAlmanac), &PY_TYPE_DEF(GLONASSAlmanac), module, "GLONASSAlmanac", 0);
            }

            void t_GLONASSAlmanac::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(GLONASSAlmanac), "class_", make_descriptor(GLONASSAlmanac::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(GLONASSAlmanac), "wrapfn_", make_descriptor(t_GLONASSAlmanac::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(GLONASSAlmanac), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_GLONASSAlmanac_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, GLONASSAlmanac::initializeClass, 1)))
                return NULL;
              return t_GLONASSAlmanac::wrap_Object(GLONASSAlmanac(((t_GLONASSAlmanac *) arg)->object.this$));
            }
            static PyObject *t_GLONASSAlmanac_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, GLONASSAlmanac::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static int t_GLONASSAlmanac_init_(t_GLONASSAlmanac *self, PyObject *args, PyObject *kwds)
            {
              switch (PyTuple_GET_SIZE(args)) {
               case 15:
                {
                  jint a0;
                  jint a1;
                  jint a2;
                  jint a3;
                  jint a4;
                  jdouble a5;
                  jdouble a6;
                  jdouble a7;
                  jdouble a8;
                  jdouble a9;
                  jdouble a10;
                  jdouble a11;
                  jdouble a12;
                  jdouble a13;
                  jdouble a14;
                  GLONASSAlmanac object((jobject) NULL);

                  if (!parseArgs(args, "IIIIIDDDDDDDDDD", &a0, &a1, &a2, &a3, &a4, &a5, &a6, &a7, &a8, &a9, &a10, &a11, &a12, &a13, &a14))
                  {
                    INT_CALL(object = GLONASSAlmanac(a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14));
                    self->object = object;
                    break;
                  }
                }
                goto err;
               case 16:
                {
                  jint a0;
                  jint a1;
                  jint a2;
                  jint a3;
                  jint a4;
                  jdouble a5;
                  jdouble a6;
                  jdouble a7;
                  jdouble a8;
                  jdouble a9;
                  jdouble a10;
                  jdouble a11;
                  jdouble a12;
                  jdouble a13;
                  jdouble a14;
                  ::org::orekit::time::TimeScale a15((jobject) NULL);
                  GLONASSAlmanac object((jobject) NULL);

                  if (!parseArgs(args, "IIIIIDDDDDDDDDDk", ::org::orekit::time::TimeScale::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5, &a6, &a7, &a8, &a9, &a10, &a11, &a12, &a13, &a14, &a15))
                  {
                    INT_CALL(object = GLONASSAlmanac(a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15));
                    self->object = object;
                    break;
                  }
                }
               default:
               err:
                PyErr_SetArgsError((PyObject *) self, "__init__", args);
                return -1;
              }

              return 0;
            }

            static PyObject *t_GLONASSAlmanac_getDate(t_GLONASSAlmanac *self)
            {
              ::org::orekit::time::AbsoluteDate result((jobject) NULL);
              OBJ_CALL(result = self->object.getDate());
              return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
            }

            static PyObject *t_GLONASSAlmanac_getDeltaI(t_GLONASSAlmanac *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getDeltaI());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_GLONASSAlmanac_getDeltaT(t_GLONASSAlmanac *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getDeltaT());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_GLONASSAlmanac_getDeltaTDot(t_GLONASSAlmanac *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getDeltaTDot());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_GLONASSAlmanac_getE(t_GLONASSAlmanac *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getE());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_GLONASSAlmanac_getFrequencyChannel(t_GLONASSAlmanac *self)
            {
              jint result;
              OBJ_CALL(result = self->object.getFrequencyChannel());
              return PyLong_FromLong((long) result);
            }

            static PyObject *t_GLONASSAlmanac_getGPS2Glo(t_GLONASSAlmanac *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getGPS2Glo());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_GLONASSAlmanac_getGlo2UTC(t_GLONASSAlmanac *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getGlo2UTC());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_GLONASSAlmanac_getGloOffset(t_GLONASSAlmanac *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getGloOffset());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_GLONASSAlmanac_getHealth(t_GLONASSAlmanac *self)
            {
              jint result;
              OBJ_CALL(result = self->object.getHealth());
              return PyLong_FromLong((long) result);
            }

            static PyObject *t_GLONASSAlmanac_getLambda(t_GLONASSAlmanac *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getLambda());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_GLONASSAlmanac_getN4(t_GLONASSAlmanac *self)
            {
              jint result;
              OBJ_CALL(result = self->object.getN4());
              return PyLong_FromLong((long) result);
            }

            static PyObject *t_GLONASSAlmanac_getNa(t_GLONASSAlmanac *self)
            {
              jint result;
              OBJ_CALL(result = self->object.getNa());
              return PyLong_FromLong((long) result);
            }

            static PyObject *t_GLONASSAlmanac_getPa(t_GLONASSAlmanac *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getPa());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_GLONASSAlmanac_getPropagator(t_GLONASSAlmanac *self, PyObject *args)
            {
              switch (PyTuple_GET_SIZE(args)) {
               case 0:
                {
                  ::org::orekit::propagation::analytical::gnss::GLONASSAnalyticalPropagator result((jobject) NULL);
                  OBJ_CALL(result = self->object.getPropagator());
                  return ::org::orekit::propagation::analytical::gnss::t_GLONASSAnalyticalPropagator::wrap_Object(result);
                }
                break;
               case 1:
                {
                  ::org::orekit::data::DataContext a0((jobject) NULL);
                  ::org::orekit::propagation::analytical::gnss::GLONASSAnalyticalPropagator result((jobject) NULL);

                  if (!parseArgs(args, "k", ::org::orekit::data::DataContext::initializeClass, &a0))
                  {
                    OBJ_CALL(result = self->object.getPropagator(a0));
                    return ::org::orekit::propagation::analytical::gnss::t_GLONASSAnalyticalPropagator::wrap_Object(result);
                  }
                }
                break;
               case 5:
                {
                  ::org::orekit::data::DataContext a0((jobject) NULL);
                  ::org::orekit::attitudes::AttitudeProvider a1((jobject) NULL);
                  ::org::orekit::frames::Frame a2((jobject) NULL);
                  ::org::orekit::frames::Frame a3((jobject) NULL);
                  jdouble a4;
                  ::org::orekit::propagation::analytical::gnss::GLONASSAnalyticalPropagator result((jobject) NULL);

                  if (!parseArgs(args, "kkkkD", ::org::orekit::data::DataContext::initializeClass, ::org::orekit::attitudes::AttitudeProvider::initializeClass, ::org::orekit::frames::Frame::initializeClass, ::org::orekit::frames::Frame::initializeClass, &a0, &a1, &a2, &a3, &a4))
                  {
                    OBJ_CALL(result = self->object.getPropagator(a0, a1, a2, a3, a4));
                    return ::org::orekit::propagation::analytical::gnss::t_GLONASSAnalyticalPropagator::wrap_Object(result);
                  }
                }
              }

              PyErr_SetArgsError((PyObject *) self, "getPropagator", args);
              return NULL;
            }

            static PyObject *t_GLONASSAlmanac_getTime(t_GLONASSAlmanac *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getTime());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_GLONASSAlmanac_get__date(t_GLONASSAlmanac *self, void *data)
            {
              ::org::orekit::time::AbsoluteDate value((jobject) NULL);
              OBJ_CALL(value = self->object.getDate());
              return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
            }

            static PyObject *t_GLONASSAlmanac_get__deltaI(t_GLONASSAlmanac *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getDeltaI());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_GLONASSAlmanac_get__deltaT(t_GLONASSAlmanac *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getDeltaT());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_GLONASSAlmanac_get__deltaTDot(t_GLONASSAlmanac *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getDeltaTDot());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_GLONASSAlmanac_get__e(t_GLONASSAlmanac *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getE());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_GLONASSAlmanac_get__frequencyChannel(t_GLONASSAlmanac *self, void *data)
            {
              jint value;
              OBJ_CALL(value = self->object.getFrequencyChannel());
              return PyLong_FromLong((long) value);
            }

            static PyObject *t_GLONASSAlmanac_get__gPS2Glo(t_GLONASSAlmanac *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getGPS2Glo());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_GLONASSAlmanac_get__glo2UTC(t_GLONASSAlmanac *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getGlo2UTC());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_GLONASSAlmanac_get__gloOffset(t_GLONASSAlmanac *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getGloOffset());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_GLONASSAlmanac_get__health(t_GLONASSAlmanac *self, void *data)
            {
              jint value;
              OBJ_CALL(value = self->object.getHealth());
              return PyLong_FromLong((long) value);
            }

            static PyObject *t_GLONASSAlmanac_get__lambda(t_GLONASSAlmanac *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getLambda());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_GLONASSAlmanac_get__n4(t_GLONASSAlmanac *self, void *data)
            {
              jint value;
              OBJ_CALL(value = self->object.getN4());
              return PyLong_FromLong((long) value);
            }

            static PyObject *t_GLONASSAlmanac_get__na(t_GLONASSAlmanac *self, void *data)
            {
              jint value;
              OBJ_CALL(value = self->object.getNa());
              return PyLong_FromLong((long) value);
            }

            static PyObject *t_GLONASSAlmanac_get__pa(t_GLONASSAlmanac *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getPa());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_GLONASSAlmanac_get__propagator(t_GLONASSAlmanac *self, void *data)
            {
              ::org::orekit::propagation::analytical::gnss::GLONASSAnalyticalPropagator value((jobject) NULL);
              OBJ_CALL(value = self->object.getPropagator());
              return ::org::orekit::propagation::analytical::gnss::t_GLONASSAnalyticalPropagator::wrap_Object(value);
            }

            static PyObject *t_GLONASSAlmanac_get__time(t_GLONASSAlmanac *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getTime());
              return PyFloat_FromDouble((double) value);
            }
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/ndm/cdm/XYZCovarianceKey.h"
#include "org/orekit/files/ccsds/ndm/cdm/XYZCovariance.h"
#include "org/orekit/files/ccsds/utils/lexical/ParseToken.h"
#include "org/orekit/files/ccsds/ndm/cdm/XYZCovarianceKey.h"
#include "java/lang/Class.h"
#include "org/orekit/files/ccsds/utils/ContextBinding.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace cdm {

            ::java::lang::Class *XYZCovarianceKey::class$ = NULL;
            jmethodID *XYZCovarianceKey::mids$ = NULL;
            bool XYZCovarianceKey::live$ = false;
            XYZCovarianceKey *XYZCovarianceKey::CDRG_DRG = NULL;
            XYZCovarianceKey *XYZCovarianceKey::CDRG_X = NULL;
            XYZCovarianceKey *XYZCovarianceKey::CDRG_XDOT = NULL;
            XYZCovarianceKey *XYZCovarianceKey::CDRG_Y = NULL;
            XYZCovarianceKey *XYZCovarianceKey::CDRG_YDOT = NULL;
            XYZCovarianceKey *XYZCovarianceKey::CDRG_Z = NULL;
            XYZCovarianceKey *XYZCovarianceKey::CDRG_ZDOT = NULL;
            XYZCovarianceKey *XYZCovarianceKey::COMMENT = NULL;
            XYZCovarianceKey *XYZCovarianceKey::CSRP_DRG = NULL;
            XYZCovarianceKey *XYZCovarianceKey::CSRP_SRP = NULL;
            XYZCovarianceKey *XYZCovarianceKey::CSRP_X = NULL;
            XYZCovarianceKey *XYZCovarianceKey::CSRP_XDOT = NULL;
            XYZCovarianceKey *XYZCovarianceKey::CSRP_Y = NULL;
            XYZCovarianceKey *XYZCovarianceKey::CSRP_YDOT = NULL;
            XYZCovarianceKey *XYZCovarianceKey::CSRP_Z = NULL;
            XYZCovarianceKey *XYZCovarianceKey::CSRP_ZDOT = NULL;
            XYZCovarianceKey *XYZCovarianceKey::CTHR_DRG = NULL;
            XYZCovarianceKey *XYZCovarianceKey::CTHR_SRP = NULL;
            XYZCovarianceKey *XYZCovarianceKey::CTHR_THR = NULL;
            XYZCovarianceKey *XYZCovarianceKey::CTHR_X = NULL;
            XYZCovarianceKey *XYZCovarianceKey::CTHR_XDOT = NULL;
            XYZCovarianceKey *XYZCovarianceKey::CTHR_Y = NULL;
            XYZCovarianceKey *XYZCovarianceKey::CTHR_YDOT = NULL;
            XYZCovarianceKey *XYZCovarianceKey::CTHR_Z = NULL;
            XYZCovarianceKey *XYZCovarianceKey::CTHR_ZDOT = NULL;
            XYZCovarianceKey *XYZCovarianceKey::CXDOT_X = NULL;
            XYZCovarianceKey *XYZCovarianceKey::CXDOT_XDOT = NULL;
            XYZCovarianceKey *XYZCovarianceKey::CXDOT_Y = NULL;
            XYZCovarianceKey *XYZCovarianceKey::CXDOT_Z = NULL;
            XYZCovarianceKey *XYZCovarianceKey::CX_X = NULL;
            XYZCovarianceKey *XYZCovarianceKey::CYDOT_X = NULL;
            XYZCovarianceKey *XYZCovarianceKey::CYDOT_XDOT = NULL;
            XYZCovarianceKey *XYZCovarianceKey::CYDOT_Y = NULL;
            XYZCovarianceKey *XYZCovarianceKey::CYDOT_YDOT = NULL;
            XYZCovarianceKey *XYZCovarianceKey::CYDOT_Z = NULL;
            XYZCovarianceKey *XYZCovarianceKey::CY_X = NULL;
            XYZCovarianceKey *XYZCovarianceKey::CY_Y = NULL;
            XYZCovarianceKey *XYZCovarianceKey::CZDOT_X = NULL;
            XYZCovarianceKey *XYZCovarianceKey::CZDOT_XDOT = NULL;
            XYZCovarianceKey *XYZCovarianceKey::CZDOT_Y = NULL;
            XYZCovarianceKey *XYZCovarianceKey::CZDOT_YDOT = NULL;
            XYZCovarianceKey *XYZCovarianceKey::CZDOT_Z = NULL;
            XYZCovarianceKey *XYZCovarianceKey::CZDOT_ZDOT = NULL;
            XYZCovarianceKey *XYZCovarianceKey::CZ_X = NULL;
            XYZCovarianceKey *XYZCovarianceKey::CZ_Y = NULL;
            XYZCovarianceKey *XYZCovarianceKey::CZ_Z = NULL;

            jclass XYZCovarianceKey::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/cdm/XYZCovarianceKey");

                mids$ = new jmethodID[max_mid];
                mids$[mid_process_e1ceb9257882a2ec] = env->getMethodID(cls, "process", "(Lorg/orekit/files/ccsds/utils/lexical/ParseToken;Lorg/orekit/files/ccsds/utils/ContextBinding;Lorg/orekit/files/ccsds/ndm/cdm/XYZCovariance;)Z");
                mids$[mid_valueOf_303705d5277025e6] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/files/ccsds/ndm/cdm/XYZCovarianceKey;");
                mids$[mid_values_45de6fde0fa6fae2] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/files/ccsds/ndm/cdm/XYZCovarianceKey;");

                class$ = new ::java::lang::Class(cls);
                cls = (jclass) class$->this$;

                CDRG_DRG = new XYZCovarianceKey(env->getStaticObjectField(cls, "CDRG_DRG", "Lorg/orekit/files/ccsds/ndm/cdm/XYZCovarianceKey;"));
                CDRG_X = new XYZCovarianceKey(env->getStaticObjectField(cls, "CDRG_X", "Lorg/orekit/files/ccsds/ndm/cdm/XYZCovarianceKey;"));
                CDRG_XDOT = new XYZCovarianceKey(env->getStaticObjectField(cls, "CDRG_XDOT", "Lorg/orekit/files/ccsds/ndm/cdm/XYZCovarianceKey;"));
                CDRG_Y = new XYZCovarianceKey(env->getStaticObjectField(cls, "CDRG_Y", "Lorg/orekit/files/ccsds/ndm/cdm/XYZCovarianceKey;"));
                CDRG_YDOT = new XYZCovarianceKey(env->getStaticObjectField(cls, "CDRG_YDOT", "Lorg/orekit/files/ccsds/ndm/cdm/XYZCovarianceKey;"));
                CDRG_Z = new XYZCovarianceKey(env->getStaticObjectField(cls, "CDRG_Z", "Lorg/orekit/files/ccsds/ndm/cdm/XYZCovarianceKey;"));
                CDRG_ZDOT = new XYZCovarianceKey(env->getStaticObjectField(cls, "CDRG_ZDOT", "Lorg/orekit/files/ccsds/ndm/cdm/XYZCovarianceKey;"));
                COMMENT = new XYZCovarianceKey(env->getStaticObjectField(cls, "COMMENT", "Lorg/orekit/files/ccsds/ndm/cdm/XYZCovarianceKey;"));
                CSRP_DRG = new XYZCovarianceKey(env->getStaticObjectField(cls, "CSRP_DRG", "Lorg/orekit/files/ccsds/ndm/cdm/XYZCovarianceKey;"));
                CSRP_SRP = new XYZCovarianceKey(env->getStaticObjectField(cls, "CSRP_SRP", "Lorg/orekit/files/ccsds/ndm/cdm/XYZCovarianceKey;"));
                CSRP_X = new XYZCovarianceKey(env->getStaticObjectField(cls, "CSRP_X", "Lorg/orekit/files/ccsds/ndm/cdm/XYZCovarianceKey;"));
                CSRP_XDOT = new XYZCovarianceKey(env->getStaticObjectField(cls, "CSRP_XDOT", "Lorg/orekit/files/ccsds/ndm/cdm/XYZCovarianceKey;"));
                CSRP_Y = new XYZCovarianceKey(env->getStaticObjectField(cls, "CSRP_Y", "Lorg/orekit/files/ccsds/ndm/cdm/XYZCovarianceKey;"));
                CSRP_YDOT = new XYZCovarianceKey(env->getStaticObjectField(cls, "CSRP_YDOT", "Lorg/orekit/files/ccsds/ndm/cdm/XYZCovarianceKey;"));
                CSRP_Z = new XYZCovarianceKey(env->getStaticObjectField(cls, "CSRP_Z", "Lorg/orekit/files/ccsds/ndm/cdm/XYZCovarianceKey;"));
                CSRP_ZDOT = new XYZCovarianceKey(env->getStaticObjectField(cls, "CSRP_ZDOT", "Lorg/orekit/files/ccsds/ndm/cdm/XYZCovarianceKey;"));
                CTHR_DRG = new XYZCovarianceKey(env->getStaticObjectField(cls, "CTHR_DRG", "Lorg/orekit/files/ccsds/ndm/cdm/XYZCovarianceKey;"));
                CTHR_SRP = new XYZCovarianceKey(env->getStaticObjectField(cls, "CTHR_SRP", "Lorg/orekit/files/ccsds/ndm/cdm/XYZCovarianceKey;"));
                CTHR_THR = new XYZCovarianceKey(env->getStaticObjectField(cls, "CTHR_THR", "Lorg/orekit/files/ccsds/ndm/cdm/XYZCovarianceKey;"));
                CTHR_X = new XYZCovarianceKey(env->getStaticObjectField(cls, "CTHR_X", "Lorg/orekit/files/ccsds/ndm/cdm/XYZCovarianceKey;"));
                CTHR_XDOT = new XYZCovarianceKey(env->getStaticObjectField(cls, "CTHR_XDOT", "Lorg/orekit/files/ccsds/ndm/cdm/XYZCovarianceKey;"));
                CTHR_Y = new XYZCovarianceKey(env->getStaticObjectField(cls, "CTHR_Y", "Lorg/orekit/files/ccsds/ndm/cdm/XYZCovarianceKey;"));
                CTHR_YDOT = new XYZCovarianceKey(env->getStaticObjectField(cls, "CTHR_YDOT", "Lorg/orekit/files/ccsds/ndm/cdm/XYZCovarianceKey;"));
                CTHR_Z = new XYZCovarianceKey(env->getStaticObjectField(cls, "CTHR_Z", "Lorg/orekit/files/ccsds/ndm/cdm/XYZCovarianceKey;"));
                CTHR_ZDOT = new XYZCovarianceKey(env->getStaticObjectField(cls, "CTHR_ZDOT", "Lorg/orekit/files/ccsds/ndm/cdm/XYZCovarianceKey;"));
                CXDOT_X = new XYZCovarianceKey(env->getStaticObjectField(cls, "CXDOT_X", "Lorg/orekit/files/ccsds/ndm/cdm/XYZCovarianceKey;"));
                CXDOT_XDOT = new XYZCovarianceKey(env->getStaticObjectField(cls, "CXDOT_XDOT", "Lorg/orekit/files/ccsds/ndm/cdm/XYZCovarianceKey;"));
                CXDOT_Y = new XYZCovarianceKey(env->getStaticObjectField(cls, "CXDOT_Y", "Lorg/orekit/files/ccsds/ndm/cdm/XYZCovarianceKey;"));
                CXDOT_Z = new XYZCovarianceKey(env->getStaticObjectField(cls, "CXDOT_Z", "Lorg/orekit/files/ccsds/ndm/cdm/XYZCovarianceKey;"));
                CX_X = new XYZCovarianceKey(env->getStaticObjectField(cls, "CX_X", "Lorg/orekit/files/ccsds/ndm/cdm/XYZCovarianceKey;"));
                CYDOT_X = new XYZCovarianceKey(env->getStaticObjectField(cls, "CYDOT_X", "Lorg/orekit/files/ccsds/ndm/cdm/XYZCovarianceKey;"));
                CYDOT_XDOT = new XYZCovarianceKey(env->getStaticObjectField(cls, "CYDOT_XDOT", "Lorg/orekit/files/ccsds/ndm/cdm/XYZCovarianceKey;"));
                CYDOT_Y = new XYZCovarianceKey(env->getStaticObjectField(cls, "CYDOT_Y", "Lorg/orekit/files/ccsds/ndm/cdm/XYZCovarianceKey;"));
                CYDOT_YDOT = new XYZCovarianceKey(env->getStaticObjectField(cls, "CYDOT_YDOT", "Lorg/orekit/files/ccsds/ndm/cdm/XYZCovarianceKey;"));
                CYDOT_Z = new XYZCovarianceKey(env->getStaticObjectField(cls, "CYDOT_Z", "Lorg/orekit/files/ccsds/ndm/cdm/XYZCovarianceKey;"));
                CY_X = new XYZCovarianceKey(env->getStaticObjectField(cls, "CY_X", "Lorg/orekit/files/ccsds/ndm/cdm/XYZCovarianceKey;"));
                CY_Y = new XYZCovarianceKey(env->getStaticObjectField(cls, "CY_Y", "Lorg/orekit/files/ccsds/ndm/cdm/XYZCovarianceKey;"));
                CZDOT_X = new XYZCovarianceKey(env->getStaticObjectField(cls, "CZDOT_X", "Lorg/orekit/files/ccsds/ndm/cdm/XYZCovarianceKey;"));
                CZDOT_XDOT = new XYZCovarianceKey(env->getStaticObjectField(cls, "CZDOT_XDOT", "Lorg/orekit/files/ccsds/ndm/cdm/XYZCovarianceKey;"));
                CZDOT_Y = new XYZCovarianceKey(env->getStaticObjectField(cls, "CZDOT_Y", "Lorg/orekit/files/ccsds/ndm/cdm/XYZCovarianceKey;"));
                CZDOT_YDOT = new XYZCovarianceKey(env->getStaticObjectField(cls, "CZDOT_YDOT", "Lorg/orekit/files/ccsds/ndm/cdm/XYZCovarianceKey;"));
                CZDOT_Z = new XYZCovarianceKey(env->getStaticObjectField(cls, "CZDOT_Z", "Lorg/orekit/files/ccsds/ndm/cdm/XYZCovarianceKey;"));
                CZDOT_ZDOT = new XYZCovarianceKey(env->getStaticObjectField(cls, "CZDOT_ZDOT", "Lorg/orekit/files/ccsds/ndm/cdm/XYZCovarianceKey;"));
                CZ_X = new XYZCovarianceKey(env->getStaticObjectField(cls, "CZ_X", "Lorg/orekit/files/ccsds/ndm/cdm/XYZCovarianceKey;"));
                CZ_Y = new XYZCovarianceKey(env->getStaticObjectField(cls, "CZ_Y", "Lorg/orekit/files/ccsds/ndm/cdm/XYZCovarianceKey;"));
                CZ_Z = new XYZCovarianceKey(env->getStaticObjectField(cls, "CZ_Z", "Lorg/orekit/files/ccsds/ndm/cdm/XYZCovarianceKey;"));
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            jboolean XYZCovarianceKey::process(const ::org::orekit::files::ccsds::utils::lexical::ParseToken & a0, const ::org::orekit::files::ccsds::utils::ContextBinding & a1, const ::org::orekit::files::ccsds::ndm::cdm::XYZCovariance & a2) const
            {
              return env->callBooleanMethod(this$, mids$[mid_process_e1ceb9257882a2ec], a0.this$, a1.this$, a2.this$);
            }

            XYZCovarianceKey XYZCovarianceKey::valueOf(const ::java::lang::String & a0)
            {
              jclass cls = env->getClass(initializeClass);
              return XYZCovarianceKey(env->callStaticObjectMethod(cls, mids$[mid_valueOf_303705d5277025e6], a0.this$));
            }

            JArray< XYZCovarianceKey > XYZCovarianceKey::values()
            {
              jclass cls = env->getClass(initializeClass);
              return JArray< XYZCovarianceKey >(env->callStaticObjectMethod(cls, mids$[mid_values_45de6fde0fa6fae2]));
            }
          }
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace cdm {
            static PyObject *t_XYZCovarianceKey_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_XYZCovarianceKey_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_XYZCovarianceKey_of_(t_XYZCovarianceKey *self, PyObject *args);
            static PyObject *t_XYZCovarianceKey_process(t_XYZCovarianceKey *self, PyObject *args);
            static PyObject *t_XYZCovarianceKey_valueOf(PyTypeObject *type, PyObject *args);
            static PyObject *t_XYZCovarianceKey_values(PyTypeObject *type);
            static PyObject *t_XYZCovarianceKey_get__parameters_(t_XYZCovarianceKey *self, void *data);
            static PyGetSetDef t_XYZCovarianceKey__fields_[] = {
              DECLARE_GET_FIELD(t_XYZCovarianceKey, parameters_),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_XYZCovarianceKey__methods_[] = {
              DECLARE_METHOD(t_XYZCovarianceKey, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_XYZCovarianceKey, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_XYZCovarianceKey, of_, METH_VARARGS),
              DECLARE_METHOD(t_XYZCovarianceKey, process, METH_VARARGS),
              DECLARE_METHOD(t_XYZCovarianceKey, valueOf, METH_VARARGS | METH_CLASS),
              DECLARE_METHOD(t_XYZCovarianceKey, values, METH_NOARGS | METH_CLASS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(XYZCovarianceKey)[] = {
              { Py_tp_methods, t_XYZCovarianceKey__methods_ },
              { Py_tp_init, (void *) abstract_init },
              { Py_tp_getset, t_XYZCovarianceKey__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(XYZCovarianceKey)[] = {
              &PY_TYPE_DEF(::java::lang::Enum),
              NULL
            };

            DEFINE_TYPE(XYZCovarianceKey, t_XYZCovarianceKey, XYZCovarianceKey);
            PyObject *t_XYZCovarianceKey::wrap_Object(const XYZCovarianceKey& object, PyTypeObject *p0)
            {
              PyObject *obj = t_XYZCovarianceKey::wrap_Object(object);
              if (obj != NULL && obj != Py_None)
              {
                t_XYZCovarianceKey *self = (t_XYZCovarianceKey *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            PyObject *t_XYZCovarianceKey::wrap_jobject(const jobject& object, PyTypeObject *p0)
            {
              PyObject *obj = t_XYZCovarianceKey::wrap_jobject(object);
              if (obj != NULL && obj != Py_None)
              {
                t_XYZCovarianceKey *self = (t_XYZCovarianceKey *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            void t_XYZCovarianceKey::install(PyObject *module)
            {
              installType(&PY_TYPE(XYZCovarianceKey), &PY_TYPE_DEF(XYZCovarianceKey), module, "XYZCovarianceKey", 0);
            }

            void t_XYZCovarianceKey::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(XYZCovarianceKey), "class_", make_descriptor(XYZCovarianceKey::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(XYZCovarianceKey), "wrapfn_", make_descriptor(t_XYZCovarianceKey::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(XYZCovarianceKey), "boxfn_", make_descriptor(boxObject));
              env->getClass(XYZCovarianceKey::initializeClass);
              PyObject_SetAttrString((PyObject *) PY_TYPE(XYZCovarianceKey), "CDRG_DRG", make_descriptor(t_XYZCovarianceKey::wrap_Object(*XYZCovarianceKey::CDRG_DRG)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(XYZCovarianceKey), "CDRG_X", make_descriptor(t_XYZCovarianceKey::wrap_Object(*XYZCovarianceKey::CDRG_X)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(XYZCovarianceKey), "CDRG_XDOT", make_descriptor(t_XYZCovarianceKey::wrap_Object(*XYZCovarianceKey::CDRG_XDOT)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(XYZCovarianceKey), "CDRG_Y", make_descriptor(t_XYZCovarianceKey::wrap_Object(*XYZCovarianceKey::CDRG_Y)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(XYZCovarianceKey), "CDRG_YDOT", make_descriptor(t_XYZCovarianceKey::wrap_Object(*XYZCovarianceKey::CDRG_YDOT)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(XYZCovarianceKey), "CDRG_Z", make_descriptor(t_XYZCovarianceKey::wrap_Object(*XYZCovarianceKey::CDRG_Z)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(XYZCovarianceKey), "CDRG_ZDOT", make_descriptor(t_XYZCovarianceKey::wrap_Object(*XYZCovarianceKey::CDRG_ZDOT)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(XYZCovarianceKey), "COMMENT", make_descriptor(t_XYZCovarianceKey::wrap_Object(*XYZCovarianceKey::COMMENT)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(XYZCovarianceKey), "CSRP_DRG", make_descriptor(t_XYZCovarianceKey::wrap_Object(*XYZCovarianceKey::CSRP_DRG)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(XYZCovarianceKey), "CSRP_SRP", make_descriptor(t_XYZCovarianceKey::wrap_Object(*XYZCovarianceKey::CSRP_SRP)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(XYZCovarianceKey), "CSRP_X", make_descriptor(t_XYZCovarianceKey::wrap_Object(*XYZCovarianceKey::CSRP_X)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(XYZCovarianceKey), "CSRP_XDOT", make_descriptor(t_XYZCovarianceKey::wrap_Object(*XYZCovarianceKey::CSRP_XDOT)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(XYZCovarianceKey), "CSRP_Y", make_descriptor(t_XYZCovarianceKey::wrap_Object(*XYZCovarianceKey::CSRP_Y)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(XYZCovarianceKey), "CSRP_YDOT", make_descriptor(t_XYZCovarianceKey::wrap_Object(*XYZCovarianceKey::CSRP_YDOT)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(XYZCovarianceKey), "CSRP_Z", make_descriptor(t_XYZCovarianceKey::wrap_Object(*XYZCovarianceKey::CSRP_Z)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(XYZCovarianceKey), "CSRP_ZDOT", make_descriptor(t_XYZCovarianceKey::wrap_Object(*XYZCovarianceKey::CSRP_ZDOT)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(XYZCovarianceKey), "CTHR_DRG", make_descriptor(t_XYZCovarianceKey::wrap_Object(*XYZCovarianceKey::CTHR_DRG)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(XYZCovarianceKey), "CTHR_SRP", make_descriptor(t_XYZCovarianceKey::wrap_Object(*XYZCovarianceKey::CTHR_SRP)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(XYZCovarianceKey), "CTHR_THR", make_descriptor(t_XYZCovarianceKey::wrap_Object(*XYZCovarianceKey::CTHR_THR)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(XYZCovarianceKey), "CTHR_X", make_descriptor(t_XYZCovarianceKey::wrap_Object(*XYZCovarianceKey::CTHR_X)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(XYZCovarianceKey), "CTHR_XDOT", make_descriptor(t_XYZCovarianceKey::wrap_Object(*XYZCovarianceKey::CTHR_XDOT)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(XYZCovarianceKey), "CTHR_Y", make_descriptor(t_XYZCovarianceKey::wrap_Object(*XYZCovarianceKey::CTHR_Y)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(XYZCovarianceKey), "CTHR_YDOT", make_descriptor(t_XYZCovarianceKey::wrap_Object(*XYZCovarianceKey::CTHR_YDOT)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(XYZCovarianceKey), "CTHR_Z", make_descriptor(t_XYZCovarianceKey::wrap_Object(*XYZCovarianceKey::CTHR_Z)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(XYZCovarianceKey), "CTHR_ZDOT", make_descriptor(t_XYZCovarianceKey::wrap_Object(*XYZCovarianceKey::CTHR_ZDOT)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(XYZCovarianceKey), "CXDOT_X", make_descriptor(t_XYZCovarianceKey::wrap_Object(*XYZCovarianceKey::CXDOT_X)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(XYZCovarianceKey), "CXDOT_XDOT", make_descriptor(t_XYZCovarianceKey::wrap_Object(*XYZCovarianceKey::CXDOT_XDOT)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(XYZCovarianceKey), "CXDOT_Y", make_descriptor(t_XYZCovarianceKey::wrap_Object(*XYZCovarianceKey::CXDOT_Y)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(XYZCovarianceKey), "CXDOT_Z", make_descriptor(t_XYZCovarianceKey::wrap_Object(*XYZCovarianceKey::CXDOT_Z)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(XYZCovarianceKey), "CX_X", make_descriptor(t_XYZCovarianceKey::wrap_Object(*XYZCovarianceKey::CX_X)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(XYZCovarianceKey), "CYDOT_X", make_descriptor(t_XYZCovarianceKey::wrap_Object(*XYZCovarianceKey::CYDOT_X)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(XYZCovarianceKey), "CYDOT_XDOT", make_descriptor(t_XYZCovarianceKey::wrap_Object(*XYZCovarianceKey::CYDOT_XDOT)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(XYZCovarianceKey), "CYDOT_Y", make_descriptor(t_XYZCovarianceKey::wrap_Object(*XYZCovarianceKey::CYDOT_Y)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(XYZCovarianceKey), "CYDOT_YDOT", make_descriptor(t_XYZCovarianceKey::wrap_Object(*XYZCovarianceKey::CYDOT_YDOT)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(XYZCovarianceKey), "CYDOT_Z", make_descriptor(t_XYZCovarianceKey::wrap_Object(*XYZCovarianceKey::CYDOT_Z)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(XYZCovarianceKey), "CY_X", make_descriptor(t_XYZCovarianceKey::wrap_Object(*XYZCovarianceKey::CY_X)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(XYZCovarianceKey), "CY_Y", make_descriptor(t_XYZCovarianceKey::wrap_Object(*XYZCovarianceKey::CY_Y)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(XYZCovarianceKey), "CZDOT_X", make_descriptor(t_XYZCovarianceKey::wrap_Object(*XYZCovarianceKey::CZDOT_X)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(XYZCovarianceKey), "CZDOT_XDOT", make_descriptor(t_XYZCovarianceKey::wrap_Object(*XYZCovarianceKey::CZDOT_XDOT)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(XYZCovarianceKey), "CZDOT_Y", make_descriptor(t_XYZCovarianceKey::wrap_Object(*XYZCovarianceKey::CZDOT_Y)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(XYZCovarianceKey), "CZDOT_YDOT", make_descriptor(t_XYZCovarianceKey::wrap_Object(*XYZCovarianceKey::CZDOT_YDOT)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(XYZCovarianceKey), "CZDOT_Z", make_descriptor(t_XYZCovarianceKey::wrap_Object(*XYZCovarianceKey::CZDOT_Z)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(XYZCovarianceKey), "CZDOT_ZDOT", make_descriptor(t_XYZCovarianceKey::wrap_Object(*XYZCovarianceKey::CZDOT_ZDOT)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(XYZCovarianceKey), "CZ_X", make_descriptor(t_XYZCovarianceKey::wrap_Object(*XYZCovarianceKey::CZ_X)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(XYZCovarianceKey), "CZ_Y", make_descriptor(t_XYZCovarianceKey::wrap_Object(*XYZCovarianceKey::CZ_Y)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(XYZCovarianceKey), "CZ_Z", make_descriptor(t_XYZCovarianceKey::wrap_Object(*XYZCovarianceKey::CZ_Z)));
            }

            static PyObject *t_XYZCovarianceKey_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, XYZCovarianceKey::initializeClass, 1)))
                return NULL;
              return t_XYZCovarianceKey::wrap_Object(XYZCovarianceKey(((t_XYZCovarianceKey *) arg)->object.this$));
            }
            static PyObject *t_XYZCovarianceKey_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, XYZCovarianceKey::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_XYZCovarianceKey_of_(t_XYZCovarianceKey *self, PyObject *args)
            {
              if (!parseArg(args, "T", 1, &(self->parameters)))
                Py_RETURN_SELF;
              return PyErr_SetArgsError((PyObject *) self, "of_", args);
            }

            static PyObject *t_XYZCovarianceKey_process(t_XYZCovarianceKey *self, PyObject *args)
            {
              ::org::orekit::files::ccsds::utils::lexical::ParseToken a0((jobject) NULL);
              ::org::orekit::files::ccsds::utils::ContextBinding a1((jobject) NULL);
              ::org::orekit::files::ccsds::ndm::cdm::XYZCovariance a2((jobject) NULL);
              jboolean result;

              if (!parseArgs(args, "kkk", ::org::orekit::files::ccsds::utils::lexical::ParseToken::initializeClass, ::org::orekit::files::ccsds::utils::ContextBinding::initializeClass, ::org::orekit::files::ccsds::ndm::cdm::XYZCovariance::initializeClass, &a0, &a1, &a2))
              {
                OBJ_CALL(result = self->object.process(a0, a1, a2));
                Py_RETURN_BOOL(result);
              }

              PyErr_SetArgsError((PyObject *) self, "process", args);
              return NULL;
            }

            static PyObject *t_XYZCovarianceKey_valueOf(PyTypeObject *type, PyObject *args)
            {
              ::java::lang::String a0((jobject) NULL);
              XYZCovarianceKey result((jobject) NULL);

              if (!parseArgs(args, "s", &a0))
              {
                OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::cdm::XYZCovarianceKey::valueOf(a0));
                return t_XYZCovarianceKey::wrap_Object(result);
              }

              return callSuper(type, "valueOf", args, 2);
            }

            static PyObject *t_XYZCovarianceKey_values(PyTypeObject *type)
            {
              JArray< XYZCovarianceKey > result((jobject) NULL);
              OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::cdm::XYZCovarianceKey::values());
              return JArray<jobject>(result.this$).wrap(t_XYZCovarianceKey::wrap_jobject);
            }
            static PyObject *t_XYZCovarianceKey_get__parameters_(t_XYZCovarianceKey *self, void *data)
            {
              return typeParameters(self->parameters, sizeof(self->parameters));
            }
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/bodies/FieldEllipse.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldVector3D.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/orekit/frames/Frame.h"
#include "org/hipparchus/geometry/euclidean/twod/FieldVector2D.h"
#include "java/lang/Class.h"
#include "org/orekit/utils/TimeStampedFieldPVCoordinates.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace bodies {

      ::java::lang::Class *FieldEllipse::class$ = NULL;
      jmethodID *FieldEllipse::mids$ = NULL;
      bool FieldEllipse::live$ = false;

      jclass FieldEllipse::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/bodies/FieldEllipse");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_fb9945b50b3dda96] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/frames/Frame;)V");
          mids$[mid_getA_81520b552cb3fa26] = env->getMethodID(cls, "getA", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getB_81520b552cb3fa26] = env->getMethodID(cls, "getB", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getCenter_ff5ac73a7b43eddd] = env->getMethodID(cls, "getCenter", "()Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
          mids$[mid_getCenterOfCurvature_352489997a01ac70] = env->getMethodID(cls, "getCenterOfCurvature", "(Lorg/hipparchus/geometry/euclidean/twod/FieldVector2D;)Lorg/hipparchus/geometry/euclidean/twod/FieldVector2D;");
          mids$[mid_getFrame_2c51111cc6894ba1] = env->getMethodID(cls, "getFrame", "()Lorg/orekit/frames/Frame;");
          mids$[mid_getU_ff5ac73a7b43eddd] = env->getMethodID(cls, "getU", "()Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
          mids$[mid_getV_ff5ac73a7b43eddd] = env->getMethodID(cls, "getV", "()Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
          mids$[mid_pointAt_0e25f993119a02fa] = env->getMethodID(cls, "pointAt", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
          mids$[mid_projectToEllipse_176da7a9c87c96a5] = env->getMethodID(cls, "projectToEllipse", "(Lorg/orekit/utils/TimeStampedFieldPVCoordinates;)Lorg/orekit/utils/TimeStampedFieldPVCoordinates;");
          mids$[mid_projectToEllipse_352489997a01ac70] = env->getMethodID(cls, "projectToEllipse", "(Lorg/hipparchus/geometry/euclidean/twod/FieldVector2D;)Lorg/hipparchus/geometry/euclidean/twod/FieldVector2D;");
          mids$[mid_toPlane_9f54cac39580172c] = env->getMethodID(cls, "toPlane", "(Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;)Lorg/hipparchus/geometry/euclidean/twod/FieldVector2D;");
          mids$[mid_toSpace_46ed8157ea06215e] = env->getMethodID(cls, "toSpace", "(Lorg/hipparchus/geometry/euclidean/twod/FieldVector2D;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      FieldEllipse::FieldEllipse(const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D & a0, const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D & a1, const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D & a2, const ::org::hipparchus::CalculusFieldElement & a3, const ::org::hipparchus::CalculusFieldElement & a4, const ::org::orekit::frames::Frame & a5) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_fb9945b50b3dda96, a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$)) {}

      ::org::hipparchus::CalculusFieldElement FieldEllipse::getA() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getA_81520b552cb3fa26]));
      }

      ::org::hipparchus::CalculusFieldElement FieldEllipse::getB() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getB_81520b552cb3fa26]));
      }

      ::org::hipparchus::geometry::euclidean::threed::FieldVector3D FieldEllipse::getCenter() const
      {
        return ::org::hipparchus::geometry::euclidean::threed::FieldVector3D(env->callObjectMethod(this$, mids$[mid_getCenter_ff5ac73a7b43eddd]));
      }

      ::org::hipparchus::geometry::euclidean::twod::FieldVector2D FieldEllipse::getCenterOfCurvature(const ::org::hipparchus::geometry::euclidean::twod::FieldVector2D & a0) const
      {
        return ::org::hipparchus::geometry::euclidean::twod::FieldVector2D(env->callObjectMethod(this$, mids$[mid_getCenterOfCurvature_352489997a01ac70], a0.this$));
      }

      ::org::orekit::frames::Frame FieldEllipse::getFrame() const
      {
        return ::org::orekit::frames::Frame(env->callObjectMethod(this$, mids$[mid_getFrame_2c51111cc6894ba1]));
      }

      ::org::hipparchus::geometry::euclidean::threed::FieldVector3D FieldEllipse::getU() const
      {
        return ::org::hipparchus::geometry::euclidean::threed::FieldVector3D(env->callObjectMethod(this$, mids$[mid_getU_ff5ac73a7b43eddd]));
      }

      ::org::hipparchus::geometry::euclidean::threed::FieldVector3D FieldEllipse::getV() const
      {
        return ::org::hipparchus::geometry::euclidean::threed::FieldVector3D(env->callObjectMethod(this$, mids$[mid_getV_ff5ac73a7b43eddd]));
      }

      ::org::hipparchus::geometry::euclidean::threed::FieldVector3D FieldEllipse::pointAt(const ::org::hipparchus::CalculusFieldElement & a0) const
      {
        return ::org::hipparchus::geometry::euclidean::threed::FieldVector3D(env->callObjectMethod(this$, mids$[mid_pointAt_0e25f993119a02fa], a0.this$));
      }

      ::org::orekit::utils::TimeStampedFieldPVCoordinates FieldEllipse::projectToEllipse(const ::org::orekit::utils::TimeStampedFieldPVCoordinates & a0) const
      {
        return ::org::orekit::utils::TimeStampedFieldPVCoordinates(env->callObjectMethod(this$, mids$[mid_projectToEllipse_176da7a9c87c96a5], a0.this$));
      }

      ::org::hipparchus::geometry::euclidean::twod::FieldVector2D FieldEllipse::projectToEllipse(const ::org::hipparchus::geometry::euclidean::twod::FieldVector2D & a0) const
      {
        return ::org::hipparchus::geometry::euclidean::twod::FieldVector2D(env->callObjectMethod(this$, mids$[mid_projectToEllipse_352489997a01ac70], a0.this$));
      }

      ::org::hipparchus::geometry::euclidean::twod::FieldVector2D FieldEllipse::toPlane(const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D & a0) const
      {
        return ::org::hipparchus::geometry::euclidean::twod::FieldVector2D(env->callObjectMethod(this$, mids$[mid_toPlane_9f54cac39580172c], a0.this$));
      }

      ::org::hipparchus::geometry::euclidean::threed::FieldVector3D FieldEllipse::toSpace(const ::org::hipparchus::geometry::euclidean::twod::FieldVector2D & a0) const
      {
        return ::org::hipparchus::geometry::euclidean::threed::FieldVector3D(env->callObjectMethod(this$, mids$[mid_toSpace_46ed8157ea06215e], a0.this$));
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace bodies {
      static PyObject *t_FieldEllipse_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldEllipse_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldEllipse_of_(t_FieldEllipse *self, PyObject *args);
      static int t_FieldEllipse_init_(t_FieldEllipse *self, PyObject *args, PyObject *kwds);
      static PyObject *t_FieldEllipse_getA(t_FieldEllipse *self);
      static PyObject *t_FieldEllipse_getB(t_FieldEllipse *self);
      static PyObject *t_FieldEllipse_getCenter(t_FieldEllipse *self);
      static PyObject *t_FieldEllipse_getCenterOfCurvature(t_FieldEllipse *self, PyObject *arg);
      static PyObject *t_FieldEllipse_getFrame(t_FieldEllipse *self);
      static PyObject *t_FieldEllipse_getU(t_FieldEllipse *self);
      static PyObject *t_FieldEllipse_getV(t_FieldEllipse *self);
      static PyObject *t_FieldEllipse_pointAt(t_FieldEllipse *self, PyObject *arg);
      static PyObject *t_FieldEllipse_projectToEllipse(t_FieldEllipse *self, PyObject *args);
      static PyObject *t_FieldEllipse_toPlane(t_FieldEllipse *self, PyObject *arg);
      static PyObject *t_FieldEllipse_toSpace(t_FieldEllipse *self, PyObject *arg);
      static PyObject *t_FieldEllipse_get__a(t_FieldEllipse *self, void *data);
      static PyObject *t_FieldEllipse_get__b(t_FieldEllipse *self, void *data);
      static PyObject *t_FieldEllipse_get__center(t_FieldEllipse *self, void *data);
      static PyObject *t_FieldEllipse_get__frame(t_FieldEllipse *self, void *data);
      static PyObject *t_FieldEllipse_get__u(t_FieldEllipse *self, void *data);
      static PyObject *t_FieldEllipse_get__v(t_FieldEllipse *self, void *data);
      static PyObject *t_FieldEllipse_get__parameters_(t_FieldEllipse *self, void *data);
      static PyGetSetDef t_FieldEllipse__fields_[] = {
        DECLARE_GET_FIELD(t_FieldEllipse, a),
        DECLARE_GET_FIELD(t_FieldEllipse, b),
        DECLARE_GET_FIELD(t_FieldEllipse, center),
        DECLARE_GET_FIELD(t_FieldEllipse, frame),
        DECLARE_GET_FIELD(t_FieldEllipse, u),
        DECLARE_GET_FIELD(t_FieldEllipse, v),
        DECLARE_GET_FIELD(t_FieldEllipse, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_FieldEllipse__methods_[] = {
        DECLARE_METHOD(t_FieldEllipse, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldEllipse, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldEllipse, of_, METH_VARARGS),
        DECLARE_METHOD(t_FieldEllipse, getA, METH_NOARGS),
        DECLARE_METHOD(t_FieldEllipse, getB, METH_NOARGS),
        DECLARE_METHOD(t_FieldEllipse, getCenter, METH_NOARGS),
        DECLARE_METHOD(t_FieldEllipse, getCenterOfCurvature, METH_O),
        DECLARE_METHOD(t_FieldEllipse, getFrame, METH_NOARGS),
        DECLARE_METHOD(t_FieldEllipse, getU, METH_NOARGS),
        DECLARE_METHOD(t_FieldEllipse, getV, METH_NOARGS),
        DECLARE_METHOD(t_FieldEllipse, pointAt, METH_O),
        DECLARE_METHOD(t_FieldEllipse, projectToEllipse, METH_VARARGS),
        DECLARE_METHOD(t_FieldEllipse, toPlane, METH_O),
        DECLARE_METHOD(t_FieldEllipse, toSpace, METH_O),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(FieldEllipse)[] = {
        { Py_tp_methods, t_FieldEllipse__methods_ },
        { Py_tp_init, (void *) t_FieldEllipse_init_ },
        { Py_tp_getset, t_FieldEllipse__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(FieldEllipse)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(FieldEllipse, t_FieldEllipse, FieldEllipse);
      PyObject *t_FieldEllipse::wrap_Object(const FieldEllipse& object, PyTypeObject *p0)
      {
        PyObject *obj = t_FieldEllipse::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_FieldEllipse *self = (t_FieldEllipse *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_FieldEllipse::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_FieldEllipse::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_FieldEllipse *self = (t_FieldEllipse *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_FieldEllipse::install(PyObject *module)
      {
        installType(&PY_TYPE(FieldEllipse), &PY_TYPE_DEF(FieldEllipse), module, "FieldEllipse", 0);
      }

      void t_FieldEllipse::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldEllipse), "class_", make_descriptor(FieldEllipse::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldEllipse), "wrapfn_", make_descriptor(t_FieldEllipse::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldEllipse), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_FieldEllipse_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, FieldEllipse::initializeClass, 1)))
          return NULL;
        return t_FieldEllipse::wrap_Object(FieldEllipse(((t_FieldEllipse *) arg)->object.this$));
      }
      static PyObject *t_FieldEllipse_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, FieldEllipse::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_FieldEllipse_of_(t_FieldEllipse *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static int t_FieldEllipse_init_(t_FieldEllipse *self, PyObject *args, PyObject *kwds)
      {
        ::org::hipparchus::geometry::euclidean::threed::FieldVector3D a0((jobject) NULL);
        PyTypeObject **p0;
        ::org::hipparchus::geometry::euclidean::threed::FieldVector3D a1((jobject) NULL);
        PyTypeObject **p1;
        ::org::hipparchus::geometry::euclidean::threed::FieldVector3D a2((jobject) NULL);
        PyTypeObject **p2;
        ::org::hipparchus::CalculusFieldElement a3((jobject) NULL);
        PyTypeObject **p3;
        ::org::hipparchus::CalculusFieldElement a4((jobject) NULL);
        PyTypeObject **p4;
        ::org::orekit::frames::Frame a5((jobject) NULL);
        FieldEllipse object((jobject) NULL);

        if (!parseArgs(args, "KKKKKk", ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::initializeClass, ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::initializeClass, ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::orekit::frames::Frame::initializeClass, &a0, &p0, ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::parameters_, &a1, &p1, ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::parameters_, &a2, &p2, ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::parameters_, &a3, &p3, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a4, &p4, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a5))
        {
          INT_CALL(object = FieldEllipse(a0, a1, a2, a3, a4, a5));
          self->object = object;
        }
        else
        {
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_FieldEllipse_getA(t_FieldEllipse *self)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
        OBJ_CALL(result = self->object.getA());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
      }

      static PyObject *t_FieldEllipse_getB(t_FieldEllipse *self)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
        OBJ_CALL(result = self->object.getB());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
      }

      static PyObject *t_FieldEllipse_getCenter(t_FieldEllipse *self)
      {
        ::org::hipparchus::geometry::euclidean::threed::FieldVector3D result((jobject) NULL);
        OBJ_CALL(result = self->object.getCenter());
        return ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_FieldEllipse_getCenterOfCurvature(t_FieldEllipse *self, PyObject *arg)
      {
        ::org::hipparchus::geometry::euclidean::twod::FieldVector2D a0((jobject) NULL);
        PyTypeObject **p0;
        ::org::hipparchus::geometry::euclidean::twod::FieldVector2D result((jobject) NULL);

        if (!parseArg(arg, "K", ::org::hipparchus::geometry::euclidean::twod::FieldVector2D::initializeClass, &a0, &p0, ::org::hipparchus::geometry::euclidean::twod::t_FieldVector2D::parameters_))
        {
          OBJ_CALL(result = self->object.getCenterOfCurvature(a0));
          return ::org::hipparchus::geometry::euclidean::twod::t_FieldVector2D::wrap_Object(result, self->parameters[0]);
        }

        PyErr_SetArgsError((PyObject *) self, "getCenterOfCurvature", arg);
        return NULL;
      }

      static PyObject *t_FieldEllipse_getFrame(t_FieldEllipse *self)
      {
        ::org::orekit::frames::Frame result((jobject) NULL);
        OBJ_CALL(result = self->object.getFrame());
        return ::org::orekit::frames::t_Frame::wrap_Object(result);
      }

      static PyObject *t_FieldEllipse_getU(t_FieldEllipse *self)
      {
        ::org::hipparchus::geometry::euclidean::threed::FieldVector3D result((jobject) NULL);
        OBJ_CALL(result = self->object.getU());
        return ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_FieldEllipse_getV(t_FieldEllipse *self)
      {
        ::org::hipparchus::geometry::euclidean::threed::FieldVector3D result((jobject) NULL);
        OBJ_CALL(result = self->object.getV());
        return ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_FieldEllipse_pointAt(t_FieldEllipse *self, PyObject *arg)
      {
        ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
        PyTypeObject **p0;
        ::org::hipparchus::geometry::euclidean::threed::FieldVector3D result((jobject) NULL);

        if (!parseArg(arg, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
        {
          OBJ_CALL(result = self->object.pointAt(a0));
          return ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(result, self->parameters[0]);
        }

        PyErr_SetArgsError((PyObject *) self, "pointAt", arg);
        return NULL;
      }

      static PyObject *t_FieldEllipse_projectToEllipse(t_FieldEllipse *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::orekit::utils::TimeStampedFieldPVCoordinates a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::utils::TimeStampedFieldPVCoordinates result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::orekit::utils::TimeStampedFieldPVCoordinates::initializeClass, &a0, &p0, ::org::orekit::utils::t_TimeStampedFieldPVCoordinates::parameters_))
            {
              OBJ_CALL(result = self->object.projectToEllipse(a0));
              return ::org::orekit::utils::t_TimeStampedFieldPVCoordinates::wrap_Object(result, self->parameters[0]);
            }
          }
          {
            ::org::hipparchus::geometry::euclidean::twod::FieldVector2D a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::geometry::euclidean::twod::FieldVector2D result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::geometry::euclidean::twod::FieldVector2D::initializeClass, &a0, &p0, ::org::hipparchus::geometry::euclidean::twod::t_FieldVector2D::parameters_))
            {
              OBJ_CALL(result = self->object.projectToEllipse(a0));
              return ::org::hipparchus::geometry::euclidean::twod::t_FieldVector2D::wrap_Object(result, self->parameters[0]);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "projectToEllipse", args);
        return NULL;
      }

      static PyObject *t_FieldEllipse_toPlane(t_FieldEllipse *self, PyObject *arg)
      {
        ::org::hipparchus::geometry::euclidean::threed::FieldVector3D a0((jobject) NULL);
        PyTypeObject **p0;
        ::org::hipparchus::geometry::euclidean::twod::FieldVector2D result((jobject) NULL);

        if (!parseArg(arg, "K", ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::initializeClass, &a0, &p0, ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::parameters_))
        {
          OBJ_CALL(result = self->object.toPlane(a0));
          return ::org::hipparchus::geometry::euclidean::twod::t_FieldVector2D::wrap_Object(result, self->parameters[0]);
        }

        PyErr_SetArgsError((PyObject *) self, "toPlane", arg);
        return NULL;
      }

      static PyObject *t_FieldEllipse_toSpace(t_FieldEllipse *self, PyObject *arg)
      {
        ::org::hipparchus::geometry::euclidean::twod::FieldVector2D a0((jobject) NULL);
        PyTypeObject **p0;
        ::org::hipparchus::geometry::euclidean::threed::FieldVector3D result((jobject) NULL);

        if (!parseArg(arg, "K", ::org::hipparchus::geometry::euclidean::twod::FieldVector2D::initializeClass, &a0, &p0, ::org::hipparchus::geometry::euclidean::twod::t_FieldVector2D::parameters_))
        {
          OBJ_CALL(result = self->object.toSpace(a0));
          return ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(result, self->parameters[0]);
        }

        PyErr_SetArgsError((PyObject *) self, "toSpace", arg);
        return NULL;
      }
      static PyObject *t_FieldEllipse_get__parameters_(t_FieldEllipse *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }

      static PyObject *t_FieldEllipse_get__a(t_FieldEllipse *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getA());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldEllipse_get__b(t_FieldEllipse *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getB());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldEllipse_get__center(t_FieldEllipse *self, void *data)
      {
        ::org::hipparchus::geometry::euclidean::threed::FieldVector3D value((jobject) NULL);
        OBJ_CALL(value = self->object.getCenter());
        return ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(value);
      }

      static PyObject *t_FieldEllipse_get__frame(t_FieldEllipse *self, void *data)
      {
        ::org::orekit::frames::Frame value((jobject) NULL);
        OBJ_CALL(value = self->object.getFrame());
        return ::org::orekit::frames::t_Frame::wrap_Object(value);
      }

      static PyObject *t_FieldEllipse_get__u(t_FieldEllipse *self, void *data)
      {
        ::org::hipparchus::geometry::euclidean::threed::FieldVector3D value((jobject) NULL);
        OBJ_CALL(value = self->object.getU());
        return ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(value);
      }

      static PyObject *t_FieldEllipse_get__v(t_FieldEllipse *self, void *data)
      {
        ::org::hipparchus::geometry::euclidean::threed::FieldVector3D value((jobject) NULL);
        OBJ_CALL(value = self->object.getV());
        return ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/analysis/solvers/PegasusSolver.h"
#include "org/hipparchus/analysis/UnivariateFunction.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace solvers {

        ::java::lang::Class *PegasusSolver::class$ = NULL;
        jmethodID *PegasusSolver::mids$ = NULL;
        bool PegasusSolver::live$ = false;

        jclass PegasusSolver::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/solvers/PegasusSolver");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_a1fa5dae97ea5ed2] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_init$_8ba9fe7a847cecad] = env->getMethodID(cls, "<init>", "(D)V");
            mids$[mid_init$_369b4c97255d5afa] = env->getMethodID(cls, "<init>", "(DD)V");
            mids$[mid_init$_b5167f35b2521627] = env->getMethodID(cls, "<init>", "(DDD)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        PegasusSolver::PegasusSolver() : ::org::hipparchus::analysis::solvers::BaseSecantSolver(env->newObject(initializeClass, &mids$, mid_init$_a1fa5dae97ea5ed2)) {}

        PegasusSolver::PegasusSolver(jdouble a0) : ::org::hipparchus::analysis::solvers::BaseSecantSolver(env->newObject(initializeClass, &mids$, mid_init$_8ba9fe7a847cecad, a0)) {}

        PegasusSolver::PegasusSolver(jdouble a0, jdouble a1) : ::org::hipparchus::analysis::solvers::BaseSecantSolver(env->newObject(initializeClass, &mids$, mid_init$_369b4c97255d5afa, a0, a1)) {}

        PegasusSolver::PegasusSolver(jdouble a0, jdouble a1, jdouble a2) : ::org::hipparchus::analysis::solvers::BaseSecantSolver(env->newObject(initializeClass, &mids$, mid_init$_b5167f35b2521627, a0, a1, a2)) {}
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace solvers {
        static PyObject *t_PegasusSolver_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_PegasusSolver_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_PegasusSolver_of_(t_PegasusSolver *self, PyObject *args);
        static int t_PegasusSolver_init_(t_PegasusSolver *self, PyObject *args, PyObject *kwds);
        static PyObject *t_PegasusSolver_get__parameters_(t_PegasusSolver *self, void *data);
        static PyGetSetDef t_PegasusSolver__fields_[] = {
          DECLARE_GET_FIELD(t_PegasusSolver, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_PegasusSolver__methods_[] = {
          DECLARE_METHOD(t_PegasusSolver, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PegasusSolver, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PegasusSolver, of_, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(PegasusSolver)[] = {
          { Py_tp_methods, t_PegasusSolver__methods_ },
          { Py_tp_init, (void *) t_PegasusSolver_init_ },
          { Py_tp_getset, t_PegasusSolver__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(PegasusSolver)[] = {
          &PY_TYPE_DEF(::org::hipparchus::analysis::solvers::BaseSecantSolver),
          NULL
        };

        DEFINE_TYPE(PegasusSolver, t_PegasusSolver, PegasusSolver);
        PyObject *t_PegasusSolver::wrap_Object(const PegasusSolver& object, PyTypeObject *p0)
        {
          PyObject *obj = t_PegasusSolver::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_PegasusSolver *self = (t_PegasusSolver *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_PegasusSolver::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_PegasusSolver::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_PegasusSolver *self = (t_PegasusSolver *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_PegasusSolver::install(PyObject *module)
        {
          installType(&PY_TYPE(PegasusSolver), &PY_TYPE_DEF(PegasusSolver), module, "PegasusSolver", 0);
        }

        void t_PegasusSolver::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(PegasusSolver), "class_", make_descriptor(PegasusSolver::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PegasusSolver), "wrapfn_", make_descriptor(t_PegasusSolver::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PegasusSolver), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_PegasusSolver_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, PegasusSolver::initializeClass, 1)))
            return NULL;
          return t_PegasusSolver::wrap_Object(PegasusSolver(((t_PegasusSolver *) arg)->object.this$));
        }
        static PyObject *t_PegasusSolver_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, PegasusSolver::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_PegasusSolver_of_(t_PegasusSolver *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_PegasusSolver_init_(t_PegasusSolver *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 0:
            {
              PegasusSolver object((jobject) NULL);

              INT_CALL(object = PegasusSolver());
              self->object = object;
              self->parameters[0] = ::org::hipparchus::analysis::PY_TYPE(UnivariateFunction);
              break;
            }
           case 1:
            {
              jdouble a0;
              PegasusSolver object((jobject) NULL);

              if (!parseArgs(args, "D", &a0))
              {
                INT_CALL(object = PegasusSolver(a0));
                self->object = object;
                self->parameters[0] = ::org::hipparchus::analysis::PY_TYPE(UnivariateFunction);
                break;
              }
            }
            goto err;
           case 2:
            {
              jdouble a0;
              jdouble a1;
              PegasusSolver object((jobject) NULL);

              if (!parseArgs(args, "DD", &a0, &a1))
              {
                INT_CALL(object = PegasusSolver(a0, a1));
                self->object = object;
                self->parameters[0] = ::org::hipparchus::analysis::PY_TYPE(UnivariateFunction);
                break;
              }
            }
            goto err;
           case 3:
            {
              jdouble a0;
              jdouble a1;
              jdouble a2;
              PegasusSolver object((jobject) NULL);

              if (!parseArgs(args, "DDD", &a0, &a1, &a2))
              {
                INT_CALL(object = PegasusSolver(a0, a1, a2));
                self->object = object;
                self->parameters[0] = ::org::hipparchus::analysis::PY_TYPE(UnivariateFunction);
                break;
              }
            }
           default:
           err:
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }
        static PyObject *t_PegasusSolver_get__parameters_(t_PegasusSolver *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/time/FieldTimeStampedPair.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/orekit/time/FieldTimeStamped.h"
#include "java/lang/Class.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace time {

      ::java::lang::Class *FieldTimeStampedPair::class$ = NULL;
      jmethodID *FieldTimeStampedPair::mids$ = NULL;
      bool FieldTimeStampedPair::live$ = false;
      jdouble FieldTimeStampedPair::DEFAULT_DATE_EQUALITY_THRESHOLD = (jdouble) 0;

      jclass FieldTimeStampedPair::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/time/FieldTimeStampedPair");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_191c67580ab5821c] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/FieldTimeStamped;Lorg/orekit/time/FieldTimeStamped;)V");
          mids$[mid_init$_78e3fd6cc2379e67] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/FieldTimeStamped;Lorg/orekit/time/FieldTimeStamped;D)V");
          mids$[mid_getDate_fa23a4301b9c83e7] = env->getMethodID(cls, "getDate", "()Lorg/orekit/time/FieldAbsoluteDate;");
          mids$[mid_getFirst_e7a49be0190c3b40] = env->getMethodID(cls, "getFirst", "()Lorg/orekit/time/FieldTimeStamped;");
          mids$[mid_getSecond_e7a49be0190c3b40] = env->getMethodID(cls, "getSecond", "()Lorg/orekit/time/FieldTimeStamped;");

          class$ = new ::java::lang::Class(cls);
          cls = (jclass) class$->this$;

          DEFAULT_DATE_EQUALITY_THRESHOLD = env->getStaticDoubleField(cls, "DEFAULT_DATE_EQUALITY_THRESHOLD");
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      FieldTimeStampedPair::FieldTimeStampedPair(const ::org::orekit::time::FieldTimeStamped & a0, const ::org::orekit::time::FieldTimeStamped & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_191c67580ab5821c, a0.this$, a1.this$)) {}

      FieldTimeStampedPair::FieldTimeStampedPair(const ::org::orekit::time::FieldTimeStamped & a0, const ::org::orekit::time::FieldTimeStamped & a1, jdouble a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_78e3fd6cc2379e67, a0.this$, a1.this$, a2)) {}

      ::org::orekit::time::FieldAbsoluteDate FieldTimeStampedPair::getDate() const
      {
        return ::org::orekit::time::FieldAbsoluteDate(env->callObjectMethod(this$, mids$[mid_getDate_fa23a4301b9c83e7]));
      }

      ::org::orekit::time::FieldTimeStamped FieldTimeStampedPair::getFirst() const
      {
        return ::org::orekit::time::FieldTimeStamped(env->callObjectMethod(this$, mids$[mid_getFirst_e7a49be0190c3b40]));
      }

      ::org::orekit::time::FieldTimeStamped FieldTimeStampedPair::getSecond() const
      {
        return ::org::orekit::time::FieldTimeStamped(env->callObjectMethod(this$, mids$[mid_getSecond_e7a49be0190c3b40]));
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace time {
      static PyObject *t_FieldTimeStampedPair_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldTimeStampedPair_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldTimeStampedPair_of_(t_FieldTimeStampedPair *self, PyObject *args);
      static int t_FieldTimeStampedPair_init_(t_FieldTimeStampedPair *self, PyObject *args, PyObject *kwds);
      static PyObject *t_FieldTimeStampedPair_getDate(t_FieldTimeStampedPair *self);
      static PyObject *t_FieldTimeStampedPair_getFirst(t_FieldTimeStampedPair *self);
      static PyObject *t_FieldTimeStampedPair_getSecond(t_FieldTimeStampedPair *self);
      static PyObject *t_FieldTimeStampedPair_get__date(t_FieldTimeStampedPair *self, void *data);
      static PyObject *t_FieldTimeStampedPair_get__first(t_FieldTimeStampedPair *self, void *data);
      static PyObject *t_FieldTimeStampedPair_get__second(t_FieldTimeStampedPair *self, void *data);
      static PyObject *t_FieldTimeStampedPair_get__parameters_(t_FieldTimeStampedPair *self, void *data);
      static PyGetSetDef t_FieldTimeStampedPair__fields_[] = {
        DECLARE_GET_FIELD(t_FieldTimeStampedPair, date),
        DECLARE_GET_FIELD(t_FieldTimeStampedPair, first),
        DECLARE_GET_FIELD(t_FieldTimeStampedPair, second),
        DECLARE_GET_FIELD(t_FieldTimeStampedPair, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_FieldTimeStampedPair__methods_[] = {
        DECLARE_METHOD(t_FieldTimeStampedPair, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldTimeStampedPair, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldTimeStampedPair, of_, METH_VARARGS),
        DECLARE_METHOD(t_FieldTimeStampedPair, getDate, METH_NOARGS),
        DECLARE_METHOD(t_FieldTimeStampedPair, getFirst, METH_NOARGS),
        DECLARE_METHOD(t_FieldTimeStampedPair, getSecond, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(FieldTimeStampedPair)[] = {
        { Py_tp_methods, t_FieldTimeStampedPair__methods_ },
        { Py_tp_init, (void *) t_FieldTimeStampedPair_init_ },
        { Py_tp_getset, t_FieldTimeStampedPair__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(FieldTimeStampedPair)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(FieldTimeStampedPair, t_FieldTimeStampedPair, FieldTimeStampedPair);
      PyObject *t_FieldTimeStampedPair::wrap_Object(const FieldTimeStampedPair& object, PyTypeObject *p0, PyTypeObject *p1, PyTypeObject *p2)
      {
        PyObject *obj = t_FieldTimeStampedPair::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_FieldTimeStampedPair *self = (t_FieldTimeStampedPair *) obj;
          self->parameters[0] = p0;
          self->parameters[1] = p1;
          self->parameters[2] = p2;
        }
        return obj;
      }

      PyObject *t_FieldTimeStampedPair::wrap_jobject(const jobject& object, PyTypeObject *p0, PyTypeObject *p1, PyTypeObject *p2)
      {
        PyObject *obj = t_FieldTimeStampedPair::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_FieldTimeStampedPair *self = (t_FieldTimeStampedPair *) obj;
          self->parameters[0] = p0;
          self->parameters[1] = p1;
          self->parameters[2] = p2;
        }
        return obj;
      }

      void t_FieldTimeStampedPair::install(PyObject *module)
      {
        installType(&PY_TYPE(FieldTimeStampedPair), &PY_TYPE_DEF(FieldTimeStampedPair), module, "FieldTimeStampedPair", 0);
      }

      void t_FieldTimeStampedPair::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldTimeStampedPair), "class_", make_descriptor(FieldTimeStampedPair::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldTimeStampedPair), "wrapfn_", make_descriptor(t_FieldTimeStampedPair::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldTimeStampedPair), "boxfn_", make_descriptor(boxObject));
        env->getClass(FieldTimeStampedPair::initializeClass);
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldTimeStampedPair), "DEFAULT_DATE_EQUALITY_THRESHOLD", make_descriptor(FieldTimeStampedPair::DEFAULT_DATE_EQUALITY_THRESHOLD));
      }

      static PyObject *t_FieldTimeStampedPair_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, FieldTimeStampedPair::initializeClass, 1)))
          return NULL;
        return t_FieldTimeStampedPair::wrap_Object(FieldTimeStampedPair(((t_FieldTimeStampedPair *) arg)->object.this$));
      }
      static PyObject *t_FieldTimeStampedPair_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, FieldTimeStampedPair::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_FieldTimeStampedPair_of_(t_FieldTimeStampedPair *self, PyObject *args)
      {
        if (!parseArg(args, "T", 3, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static int t_FieldTimeStampedPair_init_(t_FieldTimeStampedPair *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 2:
          {
            ::org::orekit::time::FieldTimeStamped a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::time::FieldTimeStamped a1((jobject) NULL);
            PyTypeObject **p1;
            FieldTimeStampedPair object((jobject) NULL);

            if (!parseArgs(args, "KK", ::org::orekit::time::FieldTimeStamped::initializeClass, ::org::orekit::time::FieldTimeStamped::initializeClass, &a0, &p0, ::org::orekit::time::t_FieldTimeStamped::parameters_, &a1, &p1, ::org::orekit::time::t_FieldTimeStamped::parameters_))
            {
              INT_CALL(object = FieldTimeStampedPair(a0, a1));
              self->object = object;
              break;
            }
          }
          goto err;
         case 3:
          {
            ::org::orekit::time::FieldTimeStamped a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::time::FieldTimeStamped a1((jobject) NULL);
            PyTypeObject **p1;
            jdouble a2;
            FieldTimeStampedPair object((jobject) NULL);

            if (!parseArgs(args, "KKD", ::org::orekit::time::FieldTimeStamped::initializeClass, ::org::orekit::time::FieldTimeStamped::initializeClass, &a0, &p0, ::org::orekit::time::t_FieldTimeStamped::parameters_, &a1, &p1, ::org::orekit::time::t_FieldTimeStamped::parameters_, &a2))
            {
              INT_CALL(object = FieldTimeStampedPair(a0, a1, a2));
              self->object = object;
              break;
            }
          }
         default:
         err:
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_FieldTimeStampedPair_getDate(t_FieldTimeStampedPair *self)
      {
        ::org::orekit::time::FieldAbsoluteDate result((jobject) NULL);
        OBJ_CALL(result = self->object.getDate());
        return ::org::orekit::time::t_FieldAbsoluteDate::wrap_Object(result, self->parameters[2]);
      }

      static PyObject *t_FieldTimeStampedPair_getFirst(t_FieldTimeStampedPair *self)
      {
        ::org::orekit::time::FieldTimeStamped result((jobject) NULL);
        OBJ_CALL(result = self->object.getFirst());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::orekit::time::t_FieldTimeStamped::wrap_Object(result);
      }

      static PyObject *t_FieldTimeStampedPair_getSecond(t_FieldTimeStampedPair *self)
      {
        ::org::orekit::time::FieldTimeStamped result((jobject) NULL);
        OBJ_CALL(result = self->object.getSecond());
        return self->parameters[1] != NULL ? wrapType(self->parameters[1], result.this$) : ::org::orekit::time::t_FieldTimeStamped::wrap_Object(result);
      }
      static PyObject *t_FieldTimeStampedPair_get__parameters_(t_FieldTimeStampedPair *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }

      static PyObject *t_FieldTimeStampedPair_get__date(t_FieldTimeStampedPair *self, void *data)
      {
        ::org::orekit::time::FieldAbsoluteDate value((jobject) NULL);
        OBJ_CALL(value = self->object.getDate());
        return ::org::orekit::time::t_FieldAbsoluteDate::wrap_Object(value);
      }

      static PyObject *t_FieldTimeStampedPair_get__first(t_FieldTimeStampedPair *self, void *data)
      {
        ::org::orekit::time::FieldTimeStamped value((jobject) NULL);
        OBJ_CALL(value = self->object.getFirst());
        return ::org::orekit::time::t_FieldTimeStamped::wrap_Object(value);
      }

      static PyObject *t_FieldTimeStampedPair_get__second(t_FieldTimeStampedPair *self, void *data)
      {
        ::org::orekit::time::FieldTimeStamped value((jobject) NULL);
        OBJ_CALL(value = self->object.getSecond());
        return ::org::orekit::time::t_FieldTimeStamped::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/util/OpenIntToFieldHashMap$Iterator.h"
#include "java/util/NoSuchElementException.h"
#include "org/hipparchus/FieldElement.h"
#include "java/lang/Class.h"
#include "java/util/ConcurrentModificationException.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace util {

      ::java::lang::Class *OpenIntToFieldHashMap$Iterator::class$ = NULL;
      jmethodID *OpenIntToFieldHashMap$Iterator::mids$ = NULL;
      bool OpenIntToFieldHashMap$Iterator::live$ = false;

      jclass OpenIntToFieldHashMap$Iterator::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/util/OpenIntToFieldHashMap$Iterator");

          mids$ = new jmethodID[max_mid];
          mids$[mid_advance_a1fa5dae97ea5ed2] = env->getMethodID(cls, "advance", "()V");
          mids$[mid_hasNext_9ab94ac1dc23b105] = env->getMethodID(cls, "hasNext", "()Z");
          mids$[mid_key_55546ef6a647f39b] = env->getMethodID(cls, "key", "()I");
          mids$[mid_value_2ff8de927fda4153] = env->getMethodID(cls, "value", "()Lorg/hipparchus/FieldElement;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      void OpenIntToFieldHashMap$Iterator::advance() const
      {
        env->callVoidMethod(this$, mids$[mid_advance_a1fa5dae97ea5ed2]);
      }

      jboolean OpenIntToFieldHashMap$Iterator::hasNext() const
      {
        return env->callBooleanMethod(this$, mids$[mid_hasNext_9ab94ac1dc23b105]);
      }

      jint OpenIntToFieldHashMap$Iterator::key() const
      {
        return env->callIntMethod(this$, mids$[mid_key_55546ef6a647f39b]);
      }

      ::org::hipparchus::FieldElement OpenIntToFieldHashMap$Iterator::value() const
      {
        return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_value_2ff8de927fda4153]));
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace hipparchus {
    namespace util {
      static PyObject *t_OpenIntToFieldHashMap$Iterator_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_OpenIntToFieldHashMap$Iterator_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_OpenIntToFieldHashMap$Iterator_of_(t_OpenIntToFieldHashMap$Iterator *self, PyObject *args);
      static PyObject *t_OpenIntToFieldHashMap$Iterator_advance(t_OpenIntToFieldHashMap$Iterator *self);
      static PyObject *t_OpenIntToFieldHashMap$Iterator_hasNext(t_OpenIntToFieldHashMap$Iterator *self);
      static PyObject *t_OpenIntToFieldHashMap$Iterator_key(t_OpenIntToFieldHashMap$Iterator *self);
      static PyObject *t_OpenIntToFieldHashMap$Iterator_value(t_OpenIntToFieldHashMap$Iterator *self);
      static PyObject *t_OpenIntToFieldHashMap$Iterator_get__parameters_(t_OpenIntToFieldHashMap$Iterator *self, void *data);
      static PyGetSetDef t_OpenIntToFieldHashMap$Iterator__fields_[] = {
        DECLARE_GET_FIELD(t_OpenIntToFieldHashMap$Iterator, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_OpenIntToFieldHashMap$Iterator__methods_[] = {
        DECLARE_METHOD(t_OpenIntToFieldHashMap$Iterator, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_OpenIntToFieldHashMap$Iterator, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_OpenIntToFieldHashMap$Iterator, of_, METH_VARARGS),
        DECLARE_METHOD(t_OpenIntToFieldHashMap$Iterator, advance, METH_NOARGS),
        DECLARE_METHOD(t_OpenIntToFieldHashMap$Iterator, hasNext, METH_NOARGS),
        DECLARE_METHOD(t_OpenIntToFieldHashMap$Iterator, key, METH_NOARGS),
        DECLARE_METHOD(t_OpenIntToFieldHashMap$Iterator, value, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(OpenIntToFieldHashMap$Iterator)[] = {
        { Py_tp_methods, t_OpenIntToFieldHashMap$Iterator__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_OpenIntToFieldHashMap$Iterator__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(OpenIntToFieldHashMap$Iterator)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(OpenIntToFieldHashMap$Iterator, t_OpenIntToFieldHashMap$Iterator, OpenIntToFieldHashMap$Iterator);
      PyObject *t_OpenIntToFieldHashMap$Iterator::wrap_Object(const OpenIntToFieldHashMap$Iterator& object, PyTypeObject *p0)
      {
        PyObject *obj = t_OpenIntToFieldHashMap$Iterator::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_OpenIntToFieldHashMap$Iterator *self = (t_OpenIntToFieldHashMap$Iterator *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_OpenIntToFieldHashMap$Iterator::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_OpenIntToFieldHashMap$Iterator::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_OpenIntToFieldHashMap$Iterator *self = (t_OpenIntToFieldHashMap$Iterator *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_OpenIntToFieldHashMap$Iterator::install(PyObject *module)
      {
        installType(&PY_TYPE(OpenIntToFieldHashMap$Iterator), &PY_TYPE_DEF(OpenIntToFieldHashMap$Iterator), module, "OpenIntToFieldHashMap$Iterator", 0);
      }

      void t_OpenIntToFieldHashMap$Iterator::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(OpenIntToFieldHashMap$Iterator), "class_", make_descriptor(OpenIntToFieldHashMap$Iterator::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OpenIntToFieldHashMap$Iterator), "wrapfn_", make_descriptor(t_OpenIntToFieldHashMap$Iterator::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OpenIntToFieldHashMap$Iterator), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_OpenIntToFieldHashMap$Iterator_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, OpenIntToFieldHashMap$Iterator::initializeClass, 1)))
          return NULL;
        return t_OpenIntToFieldHashMap$Iterator::wrap_Object(OpenIntToFieldHashMap$Iterator(((t_OpenIntToFieldHashMap$Iterator *) arg)->object.this$));
      }
      static PyObject *t_OpenIntToFieldHashMap$Iterator_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, OpenIntToFieldHashMap$Iterator::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_OpenIntToFieldHashMap$Iterator_of_(t_OpenIntToFieldHashMap$Iterator *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static PyObject *t_OpenIntToFieldHashMap$Iterator_advance(t_OpenIntToFieldHashMap$Iterator *self)
      {
        OBJ_CALL(self->object.advance());
        Py_RETURN_NONE;
      }

      static PyObject *t_OpenIntToFieldHashMap$Iterator_hasNext(t_OpenIntToFieldHashMap$Iterator *self)
      {
        jboolean result;
        OBJ_CALL(result = self->object.hasNext());
        Py_RETURN_BOOL(result);
      }

      static PyObject *t_OpenIntToFieldHashMap$Iterator_key(t_OpenIntToFieldHashMap$Iterator *self)
      {
        jint result;
        OBJ_CALL(result = self->object.key());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_OpenIntToFieldHashMap$Iterator_value(t_OpenIntToFieldHashMap$Iterator *self)
      {
        ::org::hipparchus::FieldElement result((jobject) NULL);
        OBJ_CALL(result = self->object.value());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_FieldElement::wrap_Object(result);
      }
      static PyObject *t_OpenIntToFieldHashMap$Iterator_get__parameters_(t_OpenIntToFieldHashMap$Iterator *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/ndm/tdm/RangeUnitsConverter.h"
#include "org/orekit/files/ccsds/ndm/tdm/TdmMetadata.h"
#include "java/lang/Class.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace tdm {

            ::java::lang::Class *RangeUnitsConverter::class$ = NULL;
            jmethodID *RangeUnitsConverter::mids$ = NULL;
            bool RangeUnitsConverter::live$ = false;

            jclass RangeUnitsConverter::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/tdm/RangeUnitsConverter");

                mids$ = new jmethodID[max_mid];
                mids$[mid_metersToRu_382e9a92dc257319] = env->getMethodID(cls, "metersToRu", "(Lorg/orekit/files/ccsds/ndm/tdm/TdmMetadata;Lorg/orekit/time/AbsoluteDate;D)D");
                mids$[mid_ruToMeters_382e9a92dc257319] = env->getMethodID(cls, "ruToMeters", "(Lorg/orekit/files/ccsds/ndm/tdm/TdmMetadata;Lorg/orekit/time/AbsoluteDate;D)D");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            jdouble RangeUnitsConverter::metersToRu(const ::org::orekit::files::ccsds::ndm::tdm::TdmMetadata & a0, const ::org::orekit::time::AbsoluteDate & a1, jdouble a2) const
            {
              return env->callDoubleMethod(this$, mids$[mid_metersToRu_382e9a92dc257319], a0.this$, a1.this$, a2);
            }

            jdouble RangeUnitsConverter::ruToMeters(const ::org::orekit::files::ccsds::ndm::tdm::TdmMetadata & a0, const ::org::orekit::time::AbsoluteDate & a1, jdouble a2) const
            {
              return env->callDoubleMethod(this$, mids$[mid_ruToMeters_382e9a92dc257319], a0.this$, a1.this$, a2);
            }
          }
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace tdm {
            static PyObject *t_RangeUnitsConverter_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_RangeUnitsConverter_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_RangeUnitsConverter_metersToRu(t_RangeUnitsConverter *self, PyObject *args);
            static PyObject *t_RangeUnitsConverter_ruToMeters(t_RangeUnitsConverter *self, PyObject *args);

            static PyMethodDef t_RangeUnitsConverter__methods_[] = {
              DECLARE_METHOD(t_RangeUnitsConverter, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_RangeUnitsConverter, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_RangeUnitsConverter, metersToRu, METH_VARARGS),
              DECLARE_METHOD(t_RangeUnitsConverter, ruToMeters, METH_VARARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(RangeUnitsConverter)[] = {
              { Py_tp_methods, t_RangeUnitsConverter__methods_ },
              { Py_tp_init, (void *) abstract_init },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(RangeUnitsConverter)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(RangeUnitsConverter, t_RangeUnitsConverter, RangeUnitsConverter);

            void t_RangeUnitsConverter::install(PyObject *module)
            {
              installType(&PY_TYPE(RangeUnitsConverter), &PY_TYPE_DEF(RangeUnitsConverter), module, "RangeUnitsConverter", 0);
            }

            void t_RangeUnitsConverter::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(RangeUnitsConverter), "class_", make_descriptor(RangeUnitsConverter::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(RangeUnitsConverter), "wrapfn_", make_descriptor(t_RangeUnitsConverter::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(RangeUnitsConverter), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_RangeUnitsConverter_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, RangeUnitsConverter::initializeClass, 1)))
                return NULL;
              return t_RangeUnitsConverter::wrap_Object(RangeUnitsConverter(((t_RangeUnitsConverter *) arg)->object.this$));
            }
            static PyObject *t_RangeUnitsConverter_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, RangeUnitsConverter::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_RangeUnitsConverter_metersToRu(t_RangeUnitsConverter *self, PyObject *args)
            {
              ::org::orekit::files::ccsds::ndm::tdm::TdmMetadata a0((jobject) NULL);
              ::org::orekit::time::AbsoluteDate a1((jobject) NULL);
              jdouble a2;
              jdouble result;

              if (!parseArgs(args, "kkD", ::org::orekit::files::ccsds::ndm::tdm::TdmMetadata::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1, &a2))
              {
                OBJ_CALL(result = self->object.metersToRu(a0, a1, a2));
                return PyFloat_FromDouble((double) result);
              }

              PyErr_SetArgsError((PyObject *) self, "metersToRu", args);
              return NULL;
            }

            static PyObject *t_RangeUnitsConverter_ruToMeters(t_RangeUnitsConverter *self, PyObject *args)
            {
              ::org::orekit::files::ccsds::ndm::tdm::TdmMetadata a0((jobject) NULL);
              ::org::orekit::time::AbsoluteDate a1((jobject) NULL);
              jdouble a2;
              jdouble result;

              if (!parseArgs(args, "kkD", ::org::orekit::files::ccsds::ndm::tdm::TdmMetadata::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1, &a2))
              {
                OBJ_CALL(result = self->object.ruToMeters(a0, a1, a2));
                return PyFloat_FromDouble((double) result);
              }

              PyErr_SetArgsError((PyObject *) self, "ruToMeters", args);
              return NULL;
            }
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/events/ElevationDetector.h"
#include "org/orekit/models/AtmosphericRefractionModel.h"
#include "org/orekit/frames/TopocentricFrame.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/events/ElevationDetector.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "org/orekit/utils/ElevationMask.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace events {

        ::java::lang::Class *ElevationDetector::class$ = NULL;
        jmethodID *ElevationDetector::mids$ = NULL;
        bool ElevationDetector::live$ = false;

        jclass ElevationDetector::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/events/ElevationDetector");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_153388b9c226b897] = env->getMethodID(cls, "<init>", "(Lorg/orekit/frames/TopocentricFrame;)V");
            mids$[mid_init$_806761bd3bfad55b] = env->getMethodID(cls, "<init>", "(DDLorg/orekit/frames/TopocentricFrame;)V");
            mids$[mid_g_a17ea857ce74d258] = env->getMethodID(cls, "g", "(Lorg/orekit/propagation/SpacecraftState;)D");
            mids$[mid_getElevationMask_ff9e909fac3867c7] = env->getMethodID(cls, "getElevationMask", "()Lorg/orekit/utils/ElevationMask;");
            mids$[mid_getMinElevation_b74f83833fdad017] = env->getMethodID(cls, "getMinElevation", "()D");
            mids$[mid_getRefractionModel_27f78fdf143ae88f] = env->getMethodID(cls, "getRefractionModel", "()Lorg/orekit/models/AtmosphericRefractionModel;");
            mids$[mid_getTopocentricFrame_c2b113ddceb69262] = env->getMethodID(cls, "getTopocentricFrame", "()Lorg/orekit/frames/TopocentricFrame;");
            mids$[mid_withConstantElevation_a33625a3473d177c] = env->getMethodID(cls, "withConstantElevation", "(D)Lorg/orekit/propagation/events/ElevationDetector;");
            mids$[mid_withElevationMask_c83b5cb465ef663a] = env->getMethodID(cls, "withElevationMask", "(Lorg/orekit/utils/ElevationMask;)Lorg/orekit/propagation/events/ElevationDetector;");
            mids$[mid_withRefraction_d093862b04ae3ff8] = env->getMethodID(cls, "withRefraction", "(Lorg/orekit/models/AtmosphericRefractionModel;)Lorg/orekit/propagation/events/ElevationDetector;");
            mids$[mid_create_b36e9f7ffbbbc784] = env->getMethodID(cls, "create", "(Lorg/orekit/propagation/events/AdaptableInterval;DILorg/orekit/propagation/events/handlers/EventHandler;)Lorg/orekit/propagation/events/ElevationDetector;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ElevationDetector::ElevationDetector(const ::org::orekit::frames::TopocentricFrame & a0) : ::org::orekit::propagation::events::AbstractDetector(env->newObject(initializeClass, &mids$, mid_init$_153388b9c226b897, a0.this$)) {}

        ElevationDetector::ElevationDetector(jdouble a0, jdouble a1, const ::org::orekit::frames::TopocentricFrame & a2) : ::org::orekit::propagation::events::AbstractDetector(env->newObject(initializeClass, &mids$, mid_init$_806761bd3bfad55b, a0, a1, a2.this$)) {}

        jdouble ElevationDetector::g(const ::org::orekit::propagation::SpacecraftState & a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_g_a17ea857ce74d258], a0.this$);
        }

        ::org::orekit::utils::ElevationMask ElevationDetector::getElevationMask() const
        {
          return ::org::orekit::utils::ElevationMask(env->callObjectMethod(this$, mids$[mid_getElevationMask_ff9e909fac3867c7]));
        }

        jdouble ElevationDetector::getMinElevation() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getMinElevation_b74f83833fdad017]);
        }

        ::org::orekit::models::AtmosphericRefractionModel ElevationDetector::getRefractionModel() const
        {
          return ::org::orekit::models::AtmosphericRefractionModel(env->callObjectMethod(this$, mids$[mid_getRefractionModel_27f78fdf143ae88f]));
        }

        ::org::orekit::frames::TopocentricFrame ElevationDetector::getTopocentricFrame() const
        {
          return ::org::orekit::frames::TopocentricFrame(env->callObjectMethod(this$, mids$[mid_getTopocentricFrame_c2b113ddceb69262]));
        }

        ElevationDetector ElevationDetector::withConstantElevation(jdouble a0) const
        {
          return ElevationDetector(env->callObjectMethod(this$, mids$[mid_withConstantElevation_a33625a3473d177c], a0));
        }

        ElevationDetector ElevationDetector::withElevationMask(const ::org::orekit::utils::ElevationMask & a0) const
        {
          return ElevationDetector(env->callObjectMethod(this$, mids$[mid_withElevationMask_c83b5cb465ef663a], a0.this$));
        }

        ElevationDetector ElevationDetector::withRefraction(const ::org::orekit::models::AtmosphericRefractionModel & a0) const
        {
          return ElevationDetector(env->callObjectMethod(this$, mids$[mid_withRefraction_d093862b04ae3ff8], a0.this$));
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace events {
        static PyObject *t_ElevationDetector_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_ElevationDetector_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_ElevationDetector_of_(t_ElevationDetector *self, PyObject *args);
        static int t_ElevationDetector_init_(t_ElevationDetector *self, PyObject *args, PyObject *kwds);
        static PyObject *t_ElevationDetector_g(t_ElevationDetector *self, PyObject *args);
        static PyObject *t_ElevationDetector_getElevationMask(t_ElevationDetector *self);
        static PyObject *t_ElevationDetector_getMinElevation(t_ElevationDetector *self);
        static PyObject *t_ElevationDetector_getRefractionModel(t_ElevationDetector *self);
        static PyObject *t_ElevationDetector_getTopocentricFrame(t_ElevationDetector *self);
        static PyObject *t_ElevationDetector_withConstantElevation(t_ElevationDetector *self, PyObject *arg);
        static PyObject *t_ElevationDetector_withElevationMask(t_ElevationDetector *self, PyObject *arg);
        static PyObject *t_ElevationDetector_withRefraction(t_ElevationDetector *self, PyObject *arg);
        static PyObject *t_ElevationDetector_get__elevationMask(t_ElevationDetector *self, void *data);
        static PyObject *t_ElevationDetector_get__minElevation(t_ElevationDetector *self, void *data);
        static PyObject *t_ElevationDetector_get__refractionModel(t_ElevationDetector *self, void *data);
        static PyObject *t_ElevationDetector_get__topocentricFrame(t_ElevationDetector *self, void *data);
        static PyObject *t_ElevationDetector_get__parameters_(t_ElevationDetector *self, void *data);
        static PyGetSetDef t_ElevationDetector__fields_[] = {
          DECLARE_GET_FIELD(t_ElevationDetector, elevationMask),
          DECLARE_GET_FIELD(t_ElevationDetector, minElevation),
          DECLARE_GET_FIELD(t_ElevationDetector, refractionModel),
          DECLARE_GET_FIELD(t_ElevationDetector, topocentricFrame),
          DECLARE_GET_FIELD(t_ElevationDetector, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_ElevationDetector__methods_[] = {
          DECLARE_METHOD(t_ElevationDetector, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_ElevationDetector, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_ElevationDetector, of_, METH_VARARGS),
          DECLARE_METHOD(t_ElevationDetector, g, METH_VARARGS),
          DECLARE_METHOD(t_ElevationDetector, getElevationMask, METH_NOARGS),
          DECLARE_METHOD(t_ElevationDetector, getMinElevation, METH_NOARGS),
          DECLARE_METHOD(t_ElevationDetector, getRefractionModel, METH_NOARGS),
          DECLARE_METHOD(t_ElevationDetector, getTopocentricFrame, METH_NOARGS),
          DECLARE_METHOD(t_ElevationDetector, withConstantElevation, METH_O),
          DECLARE_METHOD(t_ElevationDetector, withElevationMask, METH_O),
          DECLARE_METHOD(t_ElevationDetector, withRefraction, METH_O),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(ElevationDetector)[] = {
          { Py_tp_methods, t_ElevationDetector__methods_ },
          { Py_tp_init, (void *) t_ElevationDetector_init_ },
          { Py_tp_getset, t_ElevationDetector__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(ElevationDetector)[] = {
          &PY_TYPE_DEF(::org::orekit::propagation::events::AbstractDetector),
          NULL
        };

        DEFINE_TYPE(ElevationDetector, t_ElevationDetector, ElevationDetector);
        PyObject *t_ElevationDetector::wrap_Object(const ElevationDetector& object, PyTypeObject *p0)
        {
          PyObject *obj = t_ElevationDetector::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_ElevationDetector *self = (t_ElevationDetector *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_ElevationDetector::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_ElevationDetector::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_ElevationDetector *self = (t_ElevationDetector *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_ElevationDetector::install(PyObject *module)
        {
          installType(&PY_TYPE(ElevationDetector), &PY_TYPE_DEF(ElevationDetector), module, "ElevationDetector", 0);
        }

        void t_ElevationDetector::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(ElevationDetector), "class_", make_descriptor(ElevationDetector::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(ElevationDetector), "wrapfn_", make_descriptor(t_ElevationDetector::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(ElevationDetector), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_ElevationDetector_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, ElevationDetector::initializeClass, 1)))
            return NULL;
          return t_ElevationDetector::wrap_Object(ElevationDetector(((t_ElevationDetector *) arg)->object.this$));
        }
        static PyObject *t_ElevationDetector_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, ElevationDetector::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_ElevationDetector_of_(t_ElevationDetector *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_ElevationDetector_init_(t_ElevationDetector *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              ::org::orekit::frames::TopocentricFrame a0((jobject) NULL);
              ElevationDetector object((jobject) NULL);

              if (!parseArgs(args, "k", ::org::orekit::frames::TopocentricFrame::initializeClass, &a0))
              {
                INT_CALL(object = ElevationDetector(a0));
                self->object = object;
                self->parameters[0] = ::org::orekit::propagation::events::PY_TYPE(ElevationDetector);
                break;
              }
            }
            goto err;
           case 3:
            {
              jdouble a0;
              jdouble a1;
              ::org::orekit::frames::TopocentricFrame a2((jobject) NULL);
              ElevationDetector object((jobject) NULL);

              if (!parseArgs(args, "DDk", ::org::orekit::frames::TopocentricFrame::initializeClass, &a0, &a1, &a2))
              {
                INT_CALL(object = ElevationDetector(a0, a1, a2));
                self->object = object;
                self->parameters[0] = ::org::orekit::propagation::events::PY_TYPE(ElevationDetector);
                break;
              }
            }
           default:
           err:
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_ElevationDetector_g(t_ElevationDetector *self, PyObject *args)
        {
          ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
          jdouble result;

          if (!parseArgs(args, "k", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.g(a0));
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(ElevationDetector), (PyObject *) self, "g", args, 2);
        }

        static PyObject *t_ElevationDetector_getElevationMask(t_ElevationDetector *self)
        {
          ::org::orekit::utils::ElevationMask result((jobject) NULL);
          OBJ_CALL(result = self->object.getElevationMask());
          return ::org::orekit::utils::t_ElevationMask::wrap_Object(result);
        }

        static PyObject *t_ElevationDetector_getMinElevation(t_ElevationDetector *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getMinElevation());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_ElevationDetector_getRefractionModel(t_ElevationDetector *self)
        {
          ::org::orekit::models::AtmosphericRefractionModel result((jobject) NULL);
          OBJ_CALL(result = self->object.getRefractionModel());
          return ::org::orekit::models::t_AtmosphericRefractionModel::wrap_Object(result);
        }

        static PyObject *t_ElevationDetector_getTopocentricFrame(t_ElevationDetector *self)
        {
          ::org::orekit::frames::TopocentricFrame result((jobject) NULL);
          OBJ_CALL(result = self->object.getTopocentricFrame());
          return ::org::orekit::frames::t_TopocentricFrame::wrap_Object(result);
        }

        static PyObject *t_ElevationDetector_withConstantElevation(t_ElevationDetector *self, PyObject *arg)
        {
          jdouble a0;
          ElevationDetector result((jobject) NULL);

          if (!parseArg(arg, "D", &a0))
          {
            OBJ_CALL(result = self->object.withConstantElevation(a0));
            return t_ElevationDetector::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "withConstantElevation", arg);
          return NULL;
        }

        static PyObject *t_ElevationDetector_withElevationMask(t_ElevationDetector *self, PyObject *arg)
        {
          ::org::orekit::utils::ElevationMask a0((jobject) NULL);
          ElevationDetector result((jobject) NULL);

          if (!parseArg(arg, "k", ::org::orekit::utils::ElevationMask::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.withElevationMask(a0));
            return t_ElevationDetector::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "withElevationMask", arg);
          return NULL;
        }

        static PyObject *t_ElevationDetector_withRefraction(t_ElevationDetector *self, PyObject *arg)
        {
          ::org::orekit::models::AtmosphericRefractionModel a0((jobject) NULL);
          ElevationDetector result((jobject) NULL);

          if (!parseArg(arg, "k", ::org::orekit::models::AtmosphericRefractionModel::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.withRefraction(a0));
            return t_ElevationDetector::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "withRefraction", arg);
          return NULL;
        }
        static PyObject *t_ElevationDetector_get__parameters_(t_ElevationDetector *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_ElevationDetector_get__elevationMask(t_ElevationDetector *self, void *data)
        {
          ::org::orekit::utils::ElevationMask value((jobject) NULL);
          OBJ_CALL(value = self->object.getElevationMask());
          return ::org::orekit::utils::t_ElevationMask::wrap_Object(value);
        }

        static PyObject *t_ElevationDetector_get__minElevation(t_ElevationDetector *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getMinElevation());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_ElevationDetector_get__refractionModel(t_ElevationDetector *self, void *data)
        {
          ::org::orekit::models::AtmosphericRefractionModel value((jobject) NULL);
          OBJ_CALL(value = self->object.getRefractionModel());
          return ::org::orekit::models::t_AtmosphericRefractionModel::wrap_Object(value);
        }

        static PyObject *t_ElevationDetector_get__topocentricFrame(t_ElevationDetector *self, void *data)
        {
          ::org::orekit::frames::TopocentricFrame value((jobject) NULL);
          OBJ_CALL(value = self->object.getTopocentricFrame());
          return ::org::orekit::frames::t_TopocentricFrame::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/conversion/PythonAbstractPropagatorBuilder.h"
#include "org/orekit/utils/ParameterDriversList.h"
#include "java/util/List.h"
#include "java/lang/Throwable.h"
#include "org/orekit/estimation/leastsquares/AbstractBatchLSModel.h"
#include "org/orekit/orbits/Orbit.h"
#include "org/orekit/estimation/measurements/ObservedMeasurement.h"
#include "org/orekit/orbits/PositionAngleType.h"
#include "org/orekit/estimation/leastsquares/ModelObserver.h"
#include "org/orekit/propagation/Propagator.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/conversion/PropagatorBuilder.h"
#include "java/lang/Object.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace conversion {

        ::java::lang::Class *PythonAbstractPropagatorBuilder::class$ = NULL;
        jmethodID *PythonAbstractPropagatorBuilder::mids$ = NULL;
        bool PythonAbstractPropagatorBuilder::live$ = false;

        jclass PythonAbstractPropagatorBuilder::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/conversion/PythonAbstractPropagatorBuilder");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_5827b2bfd5d9ccd9] = env->getMethodID(cls, "<init>", "(Lorg/orekit/orbits/Orbit;Lorg/orekit/orbits/PositionAngleType;DZ)V");
            mids$[mid_buildLeastSquaresModel_1a4dd1f247347a8f] = env->getMethodID(cls, "buildLeastSquaresModel", "([Lorg/orekit/propagation/conversion/PropagatorBuilder;Ljava/util/List;Lorg/orekit/utils/ParameterDriversList;Lorg/orekit/estimation/leastsquares/ModelObserver;)Lorg/orekit/estimation/leastsquares/AbstractBatchLSModel;");
            mids$[mid_buildPropagator_708cc138373fff03] = env->getMethodID(cls, "buildPropagator", "([D)Lorg/orekit/propagation/Propagator;");
            mids$[mid_copy_563e3d88178dadb8] = env->getMethodID(cls, "copy", "()Lorg/orekit/propagation/conversion/PropagatorBuilder;");
            mids$[mid_finalize_a1fa5dae97ea5ed2] = env->getMethodID(cls, "finalize", "()V");
            mids$[mid_pythonDecRef_a1fa5dae97ea5ed2] = env->getMethodID(cls, "pythonDecRef", "()V");
            mids$[mid_pythonExtension_6c0ce7e438e5ded4] = env->getMethodID(cls, "pythonExtension", "()J");
            mids$[mid_pythonExtension_3d7dd2314a0dd456] = env->getMethodID(cls, "pythonExtension", "(J)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        PythonAbstractPropagatorBuilder::PythonAbstractPropagatorBuilder(const ::org::orekit::orbits::Orbit & a0, const ::org::orekit::orbits::PositionAngleType & a1, jdouble a2, jboolean a3) : ::org::orekit::propagation::conversion::AbstractPropagatorBuilder(env->newObject(initializeClass, &mids$, mid_init$_5827b2bfd5d9ccd9, a0.this$, a1.this$, a2, a3)) {}

        void PythonAbstractPropagatorBuilder::finalize() const
        {
          env->callVoidMethod(this$, mids$[mid_finalize_a1fa5dae97ea5ed2]);
        }

        jlong PythonAbstractPropagatorBuilder::pythonExtension() const
        {
          return env->callLongMethod(this$, mids$[mid_pythonExtension_6c0ce7e438e5ded4]);
        }

        void PythonAbstractPropagatorBuilder::pythonExtension(jlong a0) const
        {
          env->callVoidMethod(this$, mids$[mid_pythonExtension_3d7dd2314a0dd456], a0);
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace conversion {
        static PyObject *t_PythonAbstractPropagatorBuilder_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_PythonAbstractPropagatorBuilder_instance_(PyTypeObject *type, PyObject *arg);
        static int t_PythonAbstractPropagatorBuilder_init_(t_PythonAbstractPropagatorBuilder *self, PyObject *args, PyObject *kwds);
        static PyObject *t_PythonAbstractPropagatorBuilder_finalize(t_PythonAbstractPropagatorBuilder *self);
        static PyObject *t_PythonAbstractPropagatorBuilder_pythonExtension(t_PythonAbstractPropagatorBuilder *self, PyObject *args);
        static jobject JNICALL t_PythonAbstractPropagatorBuilder_buildLeastSquaresModel0(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jobject a2, jobject a3);
        static jobject JNICALL t_PythonAbstractPropagatorBuilder_buildPropagator1(JNIEnv *jenv, jobject jobj, jobject a0);
        static jobject JNICALL t_PythonAbstractPropagatorBuilder_copy2(JNIEnv *jenv, jobject jobj);
        static void JNICALL t_PythonAbstractPropagatorBuilder_pythonDecRef3(JNIEnv *jenv, jobject jobj);
        static PyObject *t_PythonAbstractPropagatorBuilder_get__self(t_PythonAbstractPropagatorBuilder *self, void *data);
        static PyGetSetDef t_PythonAbstractPropagatorBuilder__fields_[] = {
          DECLARE_GET_FIELD(t_PythonAbstractPropagatorBuilder, self),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_PythonAbstractPropagatorBuilder__methods_[] = {
          DECLARE_METHOD(t_PythonAbstractPropagatorBuilder, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonAbstractPropagatorBuilder, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonAbstractPropagatorBuilder, finalize, METH_NOARGS),
          DECLARE_METHOD(t_PythonAbstractPropagatorBuilder, pythonExtension, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(PythonAbstractPropagatorBuilder)[] = {
          { Py_tp_methods, t_PythonAbstractPropagatorBuilder__methods_ },
          { Py_tp_init, (void *) t_PythonAbstractPropagatorBuilder_init_ },
          { Py_tp_getset, t_PythonAbstractPropagatorBuilder__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(PythonAbstractPropagatorBuilder)[] = {
          &PY_TYPE_DEF(::org::orekit::propagation::conversion::AbstractPropagatorBuilder),
          NULL
        };

        DEFINE_TYPE(PythonAbstractPropagatorBuilder, t_PythonAbstractPropagatorBuilder, PythonAbstractPropagatorBuilder);

        void t_PythonAbstractPropagatorBuilder::install(PyObject *module)
        {
          installType(&PY_TYPE(PythonAbstractPropagatorBuilder), &PY_TYPE_DEF(PythonAbstractPropagatorBuilder), module, "PythonAbstractPropagatorBuilder", 1);
        }

        void t_PythonAbstractPropagatorBuilder::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAbstractPropagatorBuilder), "class_", make_descriptor(PythonAbstractPropagatorBuilder::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAbstractPropagatorBuilder), "wrapfn_", make_descriptor(t_PythonAbstractPropagatorBuilder::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAbstractPropagatorBuilder), "boxfn_", make_descriptor(boxObject));
          jclass cls = env->getClass(PythonAbstractPropagatorBuilder::initializeClass);
          JNINativeMethod methods[] = {
            { "buildLeastSquaresModel", "([Lorg/orekit/propagation/conversion/PropagatorBuilder;Ljava/util/List;Lorg/orekit/utils/ParameterDriversList;Lorg/orekit/estimation/leastsquares/ModelObserver;)Lorg/orekit/estimation/leastsquares/AbstractBatchLSModel;", (void *) t_PythonAbstractPropagatorBuilder_buildLeastSquaresModel0 },
            { "buildPropagator", "([D)Lorg/orekit/propagation/Propagator;", (void *) t_PythonAbstractPropagatorBuilder_buildPropagator1 },
            { "copy", "()Lorg/orekit/propagation/conversion/PropagatorBuilder;", (void *) t_PythonAbstractPropagatorBuilder_copy2 },
            { "pythonDecRef", "()V", (void *) t_PythonAbstractPropagatorBuilder_pythonDecRef3 },
          };
          env->registerNatives(cls, methods, 4);
        }

        static PyObject *t_PythonAbstractPropagatorBuilder_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, PythonAbstractPropagatorBuilder::initializeClass, 1)))
            return NULL;
          return t_PythonAbstractPropagatorBuilder::wrap_Object(PythonAbstractPropagatorBuilder(((t_PythonAbstractPropagatorBuilder *) arg)->object.this$));
        }
        static PyObject *t_PythonAbstractPropagatorBuilder_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, PythonAbstractPropagatorBuilder::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_PythonAbstractPropagatorBuilder_init_(t_PythonAbstractPropagatorBuilder *self, PyObject *args, PyObject *kwds)
        {
          ::org::orekit::orbits::Orbit a0((jobject) NULL);
          ::org::orekit::orbits::PositionAngleType a1((jobject) NULL);
          PyTypeObject **p1;
          jdouble a2;
          jboolean a3;
          PythonAbstractPropagatorBuilder object((jobject) NULL);

          if (!parseArgs(args, "kKDZ", ::org::orekit::orbits::Orbit::initializeClass, ::org::orekit::orbits::PositionAngleType::initializeClass, &a0, &a1, &p1, ::org::orekit::orbits::t_PositionAngleType::parameters_, &a2, &a3))
          {
            INT_CALL(object = PythonAbstractPropagatorBuilder(a0, a1, a2, a3));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          Py_INCREF((PyObject *) self);
          self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

          return 0;
        }

        static PyObject *t_PythonAbstractPropagatorBuilder_finalize(t_PythonAbstractPropagatorBuilder *self)
        {
          OBJ_CALL(self->object.finalize());
          Py_RETURN_NONE;
        }

        static PyObject *t_PythonAbstractPropagatorBuilder_pythonExtension(t_PythonAbstractPropagatorBuilder *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 0:
            {
              jlong result;
              OBJ_CALL(result = self->object.pythonExtension());
              return PyLong_FromLongLong((PY_LONG_LONG) result);
            }
            break;
           case 1:
            {
              jlong a0;

              if (!parseArgs(args, "J", &a0))
              {
                OBJ_CALL(self->object.pythonExtension(a0));
                Py_RETURN_NONE;
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "pythonExtension", args);
          return NULL;
        }

        static jobject JNICALL t_PythonAbstractPropagatorBuilder_buildLeastSquaresModel0(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jobject a2, jobject a3)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractPropagatorBuilder::mids$[PythonAbstractPropagatorBuilder::mid_pythonExtension_6c0ce7e438e5ded4]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          ::org::orekit::estimation::leastsquares::AbstractBatchLSModel value((jobject) NULL);
          PyObject *o0 = JArray<jobject>(a0).wrap(::org::orekit::propagation::conversion::t_PropagatorBuilder::wrap_jobject);
          PyObject *o1 = ::java::util::t_List::wrap_Object(::java::util::List(a1));
          PyObject *o2 = ::org::orekit::utils::t_ParameterDriversList::wrap_Object(::org::orekit::utils::ParameterDriversList(a2));
          PyObject *o3 = ::org::orekit::estimation::leastsquares::t_ModelObserver::wrap_Object(::org::orekit::estimation::leastsquares::ModelObserver(a3));
          PyObject *result = PyObject_CallMethod(obj, "buildLeastSquaresModel", "OOOO", o0, o1, o2, o3);
          Py_DECREF(o0);
          Py_DECREF(o1);
          Py_DECREF(o2);
          Py_DECREF(o3);
          if (!result)
            throwPythonError();
          else if (parseArg(result, "k", ::org::orekit::estimation::leastsquares::AbstractBatchLSModel::initializeClass, &value))
          {
            throwTypeError("buildLeastSquaresModel", result);
            Py_DECREF(result);
          }
          else
          {
            jobj = jenv->NewLocalRef(value.this$);
            Py_DECREF(result);
            return jobj;
          }

          return (jobject) NULL;
        }

        static jobject JNICALL t_PythonAbstractPropagatorBuilder_buildPropagator1(JNIEnv *jenv, jobject jobj, jobject a0)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractPropagatorBuilder::mids$[PythonAbstractPropagatorBuilder::mid_pythonExtension_6c0ce7e438e5ded4]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          ::org::orekit::propagation::Propagator value((jobject) NULL);
          PyObject *o0 = JArray<jdouble>(a0).wrap();
          PyObject *result = PyObject_CallMethod(obj, "buildPropagator", "O", o0);
          Py_DECREF(o0);
          if (!result)
            throwPythonError();
          else if (parseArg(result, "k", ::org::orekit::propagation::Propagator::initializeClass, &value))
          {
            throwTypeError("buildPropagator", result);
            Py_DECREF(result);
          }
          else
          {
            jobj = jenv->NewLocalRef(value.this$);
            Py_DECREF(result);
            return jobj;
          }

          return (jobject) NULL;
        }

        static jobject JNICALL t_PythonAbstractPropagatorBuilder_copy2(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractPropagatorBuilder::mids$[PythonAbstractPropagatorBuilder::mid_pythonExtension_6c0ce7e438e5ded4]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          ::org::orekit::propagation::conversion::PropagatorBuilder value((jobject) NULL);
          PyObject *result = PyObject_CallMethod(obj, "copy", "");
          if (!result)
            throwPythonError();
          else if (parseArg(result, "k", ::org::orekit::propagation::conversion::PropagatorBuilder::initializeClass, &value))
          {
            throwTypeError("copy", result);
            Py_DECREF(result);
          }
          else
          {
            jobj = jenv->NewLocalRef(value.this$);
            Py_DECREF(result);
            return jobj;
          }

          return (jobject) NULL;
        }

        static void JNICALL t_PythonAbstractPropagatorBuilder_pythonDecRef3(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractPropagatorBuilder::mids$[PythonAbstractPropagatorBuilder::mid_pythonExtension_6c0ce7e438e5ded4]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

          if (obj != NULL)
          {
            jenv->CallVoidMethod(jobj, PythonAbstractPropagatorBuilder::mids$[PythonAbstractPropagatorBuilder::mid_pythonExtension_3d7dd2314a0dd456], (jlong) 0);
            env->finalizeObject(jenv, obj);
          }
        }

        static PyObject *t_PythonAbstractPropagatorBuilder_get__self(t_PythonAbstractPropagatorBuilder *self, void *data)
        {
          jlong ptr;
          OBJ_CALL(ptr = self->object.pythonExtension());
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

          if (obj != NULL)
          {
            Py_INCREF(obj);
            return obj;
          }
          else
            Py_RETURN_NONE;
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/analysis/interpolation/AkimaSplineInterpolator.h"
#include "org/hipparchus/analysis/polynomials/PolynomialSplineFunction.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/hipparchus/analysis/interpolation/FieldUnivariateInterpolator.h"
#include "java/lang/Class.h"
#include "org/hipparchus/analysis/interpolation/UnivariateInterpolator.h"
#include "org/hipparchus/analysis/polynomials/FieldPolynomialSplineFunction.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace interpolation {

        ::java::lang::Class *AkimaSplineInterpolator::class$ = NULL;
        jmethodID *AkimaSplineInterpolator::mids$ = NULL;
        bool AkimaSplineInterpolator::live$ = false;

        jclass AkimaSplineInterpolator::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/interpolation/AkimaSplineInterpolator");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_a1fa5dae97ea5ed2] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_init$_fcb96c98de6fad04] = env->getMethodID(cls, "<init>", "(Z)V");
            mids$[mid_interpolate_4b522051166e7218] = env->getMethodID(cls, "interpolate", "([D[D)Lorg/hipparchus/analysis/polynomials/PolynomialSplineFunction;");
            mids$[mid_interpolate_a8efc421c988dfdd] = env->getMethodID(cls, "interpolate", "([Lorg/hipparchus/CalculusFieldElement;[Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/analysis/polynomials/FieldPolynomialSplineFunction;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        AkimaSplineInterpolator::AkimaSplineInterpolator() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_a1fa5dae97ea5ed2)) {}

        AkimaSplineInterpolator::AkimaSplineInterpolator(jboolean a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_fcb96c98de6fad04, a0)) {}

        ::org::hipparchus::analysis::polynomials::PolynomialSplineFunction AkimaSplineInterpolator::interpolate(const JArray< jdouble > & a0, const JArray< jdouble > & a1) const
        {
          return ::org::hipparchus::analysis::polynomials::PolynomialSplineFunction(env->callObjectMethod(this$, mids$[mid_interpolate_4b522051166e7218], a0.this$, a1.this$));
        }

        ::org::hipparchus::analysis::polynomials::FieldPolynomialSplineFunction AkimaSplineInterpolator::interpolate(const JArray< ::org::hipparchus::CalculusFieldElement > & a0, const JArray< ::org::hipparchus::CalculusFieldElement > & a1) const
        {
          return ::org::hipparchus::analysis::polynomials::FieldPolynomialSplineFunction(env->callObjectMethod(this$, mids$[mid_interpolate_a8efc421c988dfdd], a0.this$, a1.this$));
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace interpolation {
        static PyObject *t_AkimaSplineInterpolator_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_AkimaSplineInterpolator_instance_(PyTypeObject *type, PyObject *arg);
        static int t_AkimaSplineInterpolator_init_(t_AkimaSplineInterpolator *self, PyObject *args, PyObject *kwds);
        static PyObject *t_AkimaSplineInterpolator_interpolate(t_AkimaSplineInterpolator *self, PyObject *args);

        static PyMethodDef t_AkimaSplineInterpolator__methods_[] = {
          DECLARE_METHOD(t_AkimaSplineInterpolator, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AkimaSplineInterpolator, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AkimaSplineInterpolator, interpolate, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(AkimaSplineInterpolator)[] = {
          { Py_tp_methods, t_AkimaSplineInterpolator__methods_ },
          { Py_tp_init, (void *) t_AkimaSplineInterpolator_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(AkimaSplineInterpolator)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(AkimaSplineInterpolator, t_AkimaSplineInterpolator, AkimaSplineInterpolator);

        void t_AkimaSplineInterpolator::install(PyObject *module)
        {
          installType(&PY_TYPE(AkimaSplineInterpolator), &PY_TYPE_DEF(AkimaSplineInterpolator), module, "AkimaSplineInterpolator", 0);
        }

        void t_AkimaSplineInterpolator::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(AkimaSplineInterpolator), "class_", make_descriptor(AkimaSplineInterpolator::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AkimaSplineInterpolator), "wrapfn_", make_descriptor(t_AkimaSplineInterpolator::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AkimaSplineInterpolator), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_AkimaSplineInterpolator_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, AkimaSplineInterpolator::initializeClass, 1)))
            return NULL;
          return t_AkimaSplineInterpolator::wrap_Object(AkimaSplineInterpolator(((t_AkimaSplineInterpolator *) arg)->object.this$));
        }
        static PyObject *t_AkimaSplineInterpolator_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, AkimaSplineInterpolator::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_AkimaSplineInterpolator_init_(t_AkimaSplineInterpolator *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 0:
            {
              AkimaSplineInterpolator object((jobject) NULL);

              INT_CALL(object = AkimaSplineInterpolator());
              self->object = object;
              break;
            }
           case 1:
            {
              jboolean a0;
              AkimaSplineInterpolator object((jobject) NULL);

              if (!parseArgs(args, "Z", &a0))
              {
                INT_CALL(object = AkimaSplineInterpolator(a0));
                self->object = object;
                break;
              }
            }
           default:
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_AkimaSplineInterpolator_interpolate(t_AkimaSplineInterpolator *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 2:
            {
              JArray< jdouble > a0((jobject) NULL);
              JArray< jdouble > a1((jobject) NULL);
              ::org::hipparchus::analysis::polynomials::PolynomialSplineFunction result((jobject) NULL);

              if (!parseArgs(args, "[D[D", &a0, &a1))
              {
                OBJ_CALL(result = self->object.interpolate(a0, a1));
                return ::org::hipparchus::analysis::polynomials::t_PolynomialSplineFunction::wrap_Object(result);
              }
            }
            {
              JArray< ::org::hipparchus::CalculusFieldElement > a0((jobject) NULL);
              PyTypeObject **p0;
              JArray< ::org::hipparchus::CalculusFieldElement > a1((jobject) NULL);
              PyTypeObject **p1;
              ::org::hipparchus::analysis::polynomials::FieldPolynomialSplineFunction result((jobject) NULL);

              if (!parseArgs(args, "[K[K", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_))
              {
                OBJ_CALL(result = self->object.interpolate(a0, a1));
                return ::org::hipparchus::analysis::polynomials::t_FieldPolynomialSplineFunction::wrap_Object(result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "interpolate", args);
          return NULL;
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/util/RyuDouble.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace util {

      ::java::lang::Class *RyuDouble::class$ = NULL;
      jmethodID *RyuDouble::mids$ = NULL;
      bool RyuDouble::live$ = false;
      jint RyuDouble::DEFAULT_HIGH_EXP = (jint) 0;
      jint RyuDouble::DEFAULT_LOW_EXP = (jint) 0;

      jclass RyuDouble::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/util/RyuDouble");

          mids$ = new jmethodID[max_mid];
          mids$[mid_doubleToString_11ae2994efd15504] = env->getStaticMethodID(cls, "doubleToString", "(D)Ljava/lang/String;");
          mids$[mid_doubleToString_00f5d67d3539df52] = env->getStaticMethodID(cls, "doubleToString", "(DII)Ljava/lang/String;");

          class$ = new ::java::lang::Class(cls);
          cls = (jclass) class$->this$;

          DEFAULT_HIGH_EXP = env->getStaticIntField(cls, "DEFAULT_HIGH_EXP");
          DEFAULT_LOW_EXP = env->getStaticIntField(cls, "DEFAULT_LOW_EXP");
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ::java::lang::String RyuDouble::doubleToString(jdouble a0)
      {
        jclass cls = env->getClass(initializeClass);
        return ::java::lang::String(env->callStaticObjectMethod(cls, mids$[mid_doubleToString_11ae2994efd15504], a0));
      }

      ::java::lang::String RyuDouble::doubleToString(jdouble a0, jint a1, jint a2)
      {
        jclass cls = env->getClass(initializeClass);
        return ::java::lang::String(env->callStaticObjectMethod(cls, mids$[mid_doubleToString_00f5d67d3539df52], a0, a1, a2));
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace hipparchus {
    namespace util {
      static PyObject *t_RyuDouble_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_RyuDouble_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_RyuDouble_doubleToString(PyTypeObject *type, PyObject *args);

      static PyMethodDef t_RyuDouble__methods_[] = {
        DECLARE_METHOD(t_RyuDouble, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_RyuDouble, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_RyuDouble, doubleToString, METH_VARARGS | METH_CLASS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(RyuDouble)[] = {
        { Py_tp_methods, t_RyuDouble__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(RyuDouble)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(RyuDouble, t_RyuDouble, RyuDouble);

      void t_RyuDouble::install(PyObject *module)
      {
        installType(&PY_TYPE(RyuDouble), &PY_TYPE_DEF(RyuDouble), module, "RyuDouble", 0);
      }

      void t_RyuDouble::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(RyuDouble), "class_", make_descriptor(RyuDouble::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(RyuDouble), "wrapfn_", make_descriptor(t_RyuDouble::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(RyuDouble), "boxfn_", make_descriptor(boxObject));
        env->getClass(RyuDouble::initializeClass);
        PyObject_SetAttrString((PyObject *) PY_TYPE(RyuDouble), "DEFAULT_HIGH_EXP", make_descriptor(RyuDouble::DEFAULT_HIGH_EXP));
        PyObject_SetAttrString((PyObject *) PY_TYPE(RyuDouble), "DEFAULT_LOW_EXP", make_descriptor(RyuDouble::DEFAULT_LOW_EXP));
      }

      static PyObject *t_RyuDouble_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, RyuDouble::initializeClass, 1)))
          return NULL;
        return t_RyuDouble::wrap_Object(RyuDouble(((t_RyuDouble *) arg)->object.this$));
      }
      static PyObject *t_RyuDouble_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, RyuDouble::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_RyuDouble_doubleToString(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            jdouble a0;
            ::java::lang::String result((jobject) NULL);

            if (!parseArgs(args, "D", &a0))
            {
              OBJ_CALL(result = ::org::hipparchus::util::RyuDouble::doubleToString(a0));
              return j2p(result);
            }
          }
          break;
         case 3:
          {
            jdouble a0;
            jint a1;
            jint a2;
            ::java::lang::String result((jobject) NULL);

            if (!parseArgs(args, "DII", &a0, &a1, &a2))
            {
              OBJ_CALL(result = ::org::hipparchus::util::RyuDouble::doubleToString(a0, a1, a2));
              return j2p(result);
            }
          }
        }

        PyErr_SetArgsError(type, "doubleToString", args);
        return NULL;
      }
    }
  }
}
