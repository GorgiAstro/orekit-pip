#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/definitions/DutyCycleType.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "org/orekit/files/ccsds/definitions/DutyCycleType.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace definitions {

          ::java::lang::Class *DutyCycleType::class$ = NULL;
          jmethodID *DutyCycleType::mids$ = NULL;
          bool DutyCycleType::live$ = false;
          DutyCycleType *DutyCycleType::CONTINUOUS = NULL;
          DutyCycleType *DutyCycleType::TIME = NULL;
          DutyCycleType *DutyCycleType::TIME_AND_ANGLE = NULL;

          jclass DutyCycleType::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/definitions/DutyCycleType");

              mids$ = new jmethodID[max_mid];
              mids$[mid_valueOf_e6a88fc50bf19f72] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/files/ccsds/definitions/DutyCycleType;");
              mids$[mid_values_13544021d95da74a] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/files/ccsds/definitions/DutyCycleType;");

              class$ = new ::java::lang::Class(cls);
              cls = (jclass) class$->this$;

              CONTINUOUS = new DutyCycleType(env->getStaticObjectField(cls, "CONTINUOUS", "Lorg/orekit/files/ccsds/definitions/DutyCycleType;"));
              TIME = new DutyCycleType(env->getStaticObjectField(cls, "TIME", "Lorg/orekit/files/ccsds/definitions/DutyCycleType;"));
              TIME_AND_ANGLE = new DutyCycleType(env->getStaticObjectField(cls, "TIME_AND_ANGLE", "Lorg/orekit/files/ccsds/definitions/DutyCycleType;"));
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          DutyCycleType DutyCycleType::valueOf(const ::java::lang::String & a0)
          {
            jclass cls = env->getClass(initializeClass);
            return DutyCycleType(env->callStaticObjectMethod(cls, mids$[mid_valueOf_e6a88fc50bf19f72], a0.this$));
          }

          JArray< DutyCycleType > DutyCycleType::values()
          {
            jclass cls = env->getClass(initializeClass);
            return JArray< DutyCycleType >(env->callStaticObjectMethod(cls, mids$[mid_values_13544021d95da74a]));
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
        namespace definitions {
          static PyObject *t_DutyCycleType_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_DutyCycleType_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_DutyCycleType_of_(t_DutyCycleType *self, PyObject *args);
          static PyObject *t_DutyCycleType_valueOf(PyTypeObject *type, PyObject *args);
          static PyObject *t_DutyCycleType_values(PyTypeObject *type);
          static PyObject *t_DutyCycleType_get__parameters_(t_DutyCycleType *self, void *data);
          static PyGetSetDef t_DutyCycleType__fields_[] = {
            DECLARE_GET_FIELD(t_DutyCycleType, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_DutyCycleType__methods_[] = {
            DECLARE_METHOD(t_DutyCycleType, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_DutyCycleType, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_DutyCycleType, of_, METH_VARARGS),
            DECLARE_METHOD(t_DutyCycleType, valueOf, METH_VARARGS | METH_CLASS),
            DECLARE_METHOD(t_DutyCycleType, values, METH_NOARGS | METH_CLASS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(DutyCycleType)[] = {
            { Py_tp_methods, t_DutyCycleType__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { Py_tp_getset, t_DutyCycleType__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(DutyCycleType)[] = {
            &PY_TYPE_DEF(::java::lang::Enum),
            NULL
          };

          DEFINE_TYPE(DutyCycleType, t_DutyCycleType, DutyCycleType);
          PyObject *t_DutyCycleType::wrap_Object(const DutyCycleType& object, PyTypeObject *p0)
          {
            PyObject *obj = t_DutyCycleType::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_DutyCycleType *self = (t_DutyCycleType *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          PyObject *t_DutyCycleType::wrap_jobject(const jobject& object, PyTypeObject *p0)
          {
            PyObject *obj = t_DutyCycleType::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_DutyCycleType *self = (t_DutyCycleType *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          void t_DutyCycleType::install(PyObject *module)
          {
            installType(&PY_TYPE(DutyCycleType), &PY_TYPE_DEF(DutyCycleType), module, "DutyCycleType", 0);
          }

          void t_DutyCycleType::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(DutyCycleType), "class_", make_descriptor(DutyCycleType::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(DutyCycleType), "wrapfn_", make_descriptor(t_DutyCycleType::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(DutyCycleType), "boxfn_", make_descriptor(boxObject));
            env->getClass(DutyCycleType::initializeClass);
            PyObject_SetAttrString((PyObject *) PY_TYPE(DutyCycleType), "CONTINUOUS", make_descriptor(t_DutyCycleType::wrap_Object(*DutyCycleType::CONTINUOUS)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(DutyCycleType), "TIME", make_descriptor(t_DutyCycleType::wrap_Object(*DutyCycleType::TIME)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(DutyCycleType), "TIME_AND_ANGLE", make_descriptor(t_DutyCycleType::wrap_Object(*DutyCycleType::TIME_AND_ANGLE)));
          }

          static PyObject *t_DutyCycleType_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, DutyCycleType::initializeClass, 1)))
              return NULL;
            return t_DutyCycleType::wrap_Object(DutyCycleType(((t_DutyCycleType *) arg)->object.this$));
          }
          static PyObject *t_DutyCycleType_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, DutyCycleType::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_DutyCycleType_of_(t_DutyCycleType *self, PyObject *args)
          {
            if (!parseArg(args, "T", 1, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static PyObject *t_DutyCycleType_valueOf(PyTypeObject *type, PyObject *args)
          {
            ::java::lang::String a0((jobject) NULL);
            DutyCycleType result((jobject) NULL);

            if (!parseArgs(args, "s", &a0))
            {
              OBJ_CALL(result = ::org::orekit::files::ccsds::definitions::DutyCycleType::valueOf(a0));
              return t_DutyCycleType::wrap_Object(result);
            }

            return callSuper(type, "valueOf", args, 2);
          }

          static PyObject *t_DutyCycleType_values(PyTypeObject *type)
          {
            JArray< DutyCycleType > result((jobject) NULL);
            OBJ_CALL(result = ::org::orekit::files::ccsds::definitions::DutyCycleType::values());
            return JArray<jobject>(result.this$).wrap(t_DutyCycleType::wrap_jobject);
          }
          static PyObject *t_DutyCycleType_get__parameters_(t_DutyCycleType *self, void *data)
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
#include "org/orekit/rugged/api/BodyRotatingFrameId.h"
#include "org/orekit/rugged/api/BodyRotatingFrameId.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace rugged {
      namespace api {

        ::java::lang::Class *BodyRotatingFrameId::class$ = NULL;
        jmethodID *BodyRotatingFrameId::mids$ = NULL;
        bool BodyRotatingFrameId::live$ = false;
        BodyRotatingFrameId *BodyRotatingFrameId::GTOD = NULL;
        BodyRotatingFrameId *BodyRotatingFrameId::ITRF = NULL;
        BodyRotatingFrameId *BodyRotatingFrameId::ITRF_EQUINOX = NULL;

        jclass BodyRotatingFrameId::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/rugged/api/BodyRotatingFrameId");

            mids$ = new jmethodID[max_mid];
            mids$[mid_valueOf_4a0a548887cdd6d7] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/rugged/api/BodyRotatingFrameId;");
            mids$[mid_values_8270a8bfbfd5793f] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/rugged/api/BodyRotatingFrameId;");

            class$ = new ::java::lang::Class(cls);
            cls = (jclass) class$->this$;

            GTOD = new BodyRotatingFrameId(env->getStaticObjectField(cls, "GTOD", "Lorg/orekit/rugged/api/BodyRotatingFrameId;"));
            ITRF = new BodyRotatingFrameId(env->getStaticObjectField(cls, "ITRF", "Lorg/orekit/rugged/api/BodyRotatingFrameId;"));
            ITRF_EQUINOX = new BodyRotatingFrameId(env->getStaticObjectField(cls, "ITRF_EQUINOX", "Lorg/orekit/rugged/api/BodyRotatingFrameId;"));
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        BodyRotatingFrameId BodyRotatingFrameId::valueOf(const ::java::lang::String & a0)
        {
          jclass cls = env->getClass(initializeClass);
          return BodyRotatingFrameId(env->callStaticObjectMethod(cls, mids$[mid_valueOf_4a0a548887cdd6d7], a0.this$));
        }

        JArray< BodyRotatingFrameId > BodyRotatingFrameId::values()
        {
          jclass cls = env->getClass(initializeClass);
          return JArray< BodyRotatingFrameId >(env->callStaticObjectMethod(cls, mids$[mid_values_8270a8bfbfd5793f]));
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
    namespace rugged {
      namespace api {
        static PyObject *t_BodyRotatingFrameId_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_BodyRotatingFrameId_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_BodyRotatingFrameId_of_(t_BodyRotatingFrameId *self, PyObject *args);
        static PyObject *t_BodyRotatingFrameId_valueOf(PyTypeObject *type, PyObject *args);
        static PyObject *t_BodyRotatingFrameId_values(PyTypeObject *type);
        static PyObject *t_BodyRotatingFrameId_get__parameters_(t_BodyRotatingFrameId *self, void *data);
        static PyGetSetDef t_BodyRotatingFrameId__fields_[] = {
          DECLARE_GET_FIELD(t_BodyRotatingFrameId, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_BodyRotatingFrameId__methods_[] = {
          DECLARE_METHOD(t_BodyRotatingFrameId, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_BodyRotatingFrameId, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_BodyRotatingFrameId, of_, METH_VARARGS),
          DECLARE_METHOD(t_BodyRotatingFrameId, valueOf, METH_VARARGS | METH_CLASS),
          DECLARE_METHOD(t_BodyRotatingFrameId, values, METH_NOARGS | METH_CLASS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(BodyRotatingFrameId)[] = {
          { Py_tp_methods, t_BodyRotatingFrameId__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_BodyRotatingFrameId__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(BodyRotatingFrameId)[] = {
          &PY_TYPE_DEF(::java::lang::Enum),
          NULL
        };

        DEFINE_TYPE(BodyRotatingFrameId, t_BodyRotatingFrameId, BodyRotatingFrameId);
        PyObject *t_BodyRotatingFrameId::wrap_Object(const BodyRotatingFrameId& object, PyTypeObject *p0)
        {
          PyObject *obj = t_BodyRotatingFrameId::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_BodyRotatingFrameId *self = (t_BodyRotatingFrameId *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_BodyRotatingFrameId::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_BodyRotatingFrameId::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_BodyRotatingFrameId *self = (t_BodyRotatingFrameId *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_BodyRotatingFrameId::install(PyObject *module)
        {
          installType(&PY_TYPE(BodyRotatingFrameId), &PY_TYPE_DEF(BodyRotatingFrameId), module, "BodyRotatingFrameId", 0);
        }

        void t_BodyRotatingFrameId::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(BodyRotatingFrameId), "class_", make_descriptor(BodyRotatingFrameId::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(BodyRotatingFrameId), "wrapfn_", make_descriptor(t_BodyRotatingFrameId::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(BodyRotatingFrameId), "boxfn_", make_descriptor(boxObject));
          env->getClass(BodyRotatingFrameId::initializeClass);
          PyObject_SetAttrString((PyObject *) PY_TYPE(BodyRotatingFrameId), "GTOD", make_descriptor(t_BodyRotatingFrameId::wrap_Object(*BodyRotatingFrameId::GTOD)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(BodyRotatingFrameId), "ITRF", make_descriptor(t_BodyRotatingFrameId::wrap_Object(*BodyRotatingFrameId::ITRF)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(BodyRotatingFrameId), "ITRF_EQUINOX", make_descriptor(t_BodyRotatingFrameId::wrap_Object(*BodyRotatingFrameId::ITRF_EQUINOX)));
        }

        static PyObject *t_BodyRotatingFrameId_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, BodyRotatingFrameId::initializeClass, 1)))
            return NULL;
          return t_BodyRotatingFrameId::wrap_Object(BodyRotatingFrameId(((t_BodyRotatingFrameId *) arg)->object.this$));
        }
        static PyObject *t_BodyRotatingFrameId_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, BodyRotatingFrameId::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_BodyRotatingFrameId_of_(t_BodyRotatingFrameId *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static PyObject *t_BodyRotatingFrameId_valueOf(PyTypeObject *type, PyObject *args)
        {
          ::java::lang::String a0((jobject) NULL);
          BodyRotatingFrameId result((jobject) NULL);

          if (!parseArgs(args, "s", &a0))
          {
            OBJ_CALL(result = ::org::orekit::rugged::api::BodyRotatingFrameId::valueOf(a0));
            return t_BodyRotatingFrameId::wrap_Object(result);
          }

          return callSuper(type, "valueOf", args, 2);
        }

        static PyObject *t_BodyRotatingFrameId_values(PyTypeObject *type)
        {
          JArray< BodyRotatingFrameId > result((jobject) NULL);
          OBJ_CALL(result = ::org::orekit::rugged::api::BodyRotatingFrameId::values());
          return JArray<jobject>(result.this$).wrap(t_BodyRotatingFrameId::wrap_jobject);
        }
        static PyObject *t_BodyRotatingFrameId_get__parameters_(t_BodyRotatingFrameId *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/gnss/metric/messages/ssr/subtype/SsrIm201Data.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace metric {
        namespace messages {
          namespace ssr {
            namespace subtype {

              ::java::lang::Class *SsrIm201Data::class$ = NULL;
              jmethodID *SsrIm201Data::mids$ = NULL;
              bool SsrIm201Data::live$ = false;

              jclass SsrIm201Data::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/gnss/metric/messages/ssr/subtype/SsrIm201Data");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_init$_a1fa5dae97ea5ed2] = env->getMethodID(cls, "<init>", "()V");
                  mids$[mid_getCnm_3b7b373db8e7887f] = env->getMethodID(cls, "getCnm", "()[[D");
                  mids$[mid_getHeightIonosphericLayer_b74f83833fdad017] = env->getMethodID(cls, "getHeightIonosphericLayer", "()D");
                  mids$[mid_getSnm_3b7b373db8e7887f] = env->getMethodID(cls, "getSnm", "()[[D");
                  mids$[mid_getSphericalHarmonicsDegree_55546ef6a647f39b] = env->getMethodID(cls, "getSphericalHarmonicsDegree", "()I");
                  mids$[mid_getSphericalHarmonicsOrder_55546ef6a647f39b] = env->getMethodID(cls, "getSphericalHarmonicsOrder", "()I");
                  mids$[mid_setCnm_07adb42ffaa97d31] = env->getMethodID(cls, "setCnm", "([[D)V");
                  mids$[mid_setHeightIonosphericLayer_8ba9fe7a847cecad] = env->getMethodID(cls, "setHeightIonosphericLayer", "(D)V");
                  mids$[mid_setSnm_07adb42ffaa97d31] = env->getMethodID(cls, "setSnm", "([[D)V");
                  mids$[mid_setSphericalHarmonicsDegree_44ed599e93e8a30c] = env->getMethodID(cls, "setSphericalHarmonicsDegree", "(I)V");
                  mids$[mid_setSphericalHarmonicsOrder_44ed599e93e8a30c] = env->getMethodID(cls, "setSphericalHarmonicsOrder", "(I)V");

                  class$ = new ::java::lang::Class(cls);
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              SsrIm201Data::SsrIm201Data() : ::org::orekit::gnss::metric::messages::ssr::SsrData(env->newObject(initializeClass, &mids$, mid_init$_a1fa5dae97ea5ed2)) {}

              JArray< JArray< jdouble > > SsrIm201Data::getCnm() const
              {
                return JArray< JArray< jdouble > >(env->callObjectMethod(this$, mids$[mid_getCnm_3b7b373db8e7887f]));
              }

              jdouble SsrIm201Data::getHeightIonosphericLayer() const
              {
                return env->callDoubleMethod(this$, mids$[mid_getHeightIonosphericLayer_b74f83833fdad017]);
              }

              JArray< JArray< jdouble > > SsrIm201Data::getSnm() const
              {
                return JArray< JArray< jdouble > >(env->callObjectMethod(this$, mids$[mid_getSnm_3b7b373db8e7887f]));
              }

              jint SsrIm201Data::getSphericalHarmonicsDegree() const
              {
                return env->callIntMethod(this$, mids$[mid_getSphericalHarmonicsDegree_55546ef6a647f39b]);
              }

              jint SsrIm201Data::getSphericalHarmonicsOrder() const
              {
                return env->callIntMethod(this$, mids$[mid_getSphericalHarmonicsOrder_55546ef6a647f39b]);
              }

              void SsrIm201Data::setCnm(const JArray< JArray< jdouble > > & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setCnm_07adb42ffaa97d31], a0.this$);
              }

              void SsrIm201Data::setHeightIonosphericLayer(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setHeightIonosphericLayer_8ba9fe7a847cecad], a0);
              }

              void SsrIm201Data::setSnm(const JArray< JArray< jdouble > > & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setSnm_07adb42ffaa97d31], a0.this$);
              }

              void SsrIm201Data::setSphericalHarmonicsDegree(jint a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setSphericalHarmonicsDegree_44ed599e93e8a30c], a0);
              }

              void SsrIm201Data::setSphericalHarmonicsOrder(jint a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setSphericalHarmonicsOrder_44ed599e93e8a30c], a0);
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
    namespace gnss {
      namespace metric {
        namespace messages {
          namespace ssr {
            namespace subtype {
              static PyObject *t_SsrIm201Data_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_SsrIm201Data_instance_(PyTypeObject *type, PyObject *arg);
              static int t_SsrIm201Data_init_(t_SsrIm201Data *self, PyObject *args, PyObject *kwds);
              static PyObject *t_SsrIm201Data_getCnm(t_SsrIm201Data *self);
              static PyObject *t_SsrIm201Data_getHeightIonosphericLayer(t_SsrIm201Data *self);
              static PyObject *t_SsrIm201Data_getSnm(t_SsrIm201Data *self);
              static PyObject *t_SsrIm201Data_getSphericalHarmonicsDegree(t_SsrIm201Data *self);
              static PyObject *t_SsrIm201Data_getSphericalHarmonicsOrder(t_SsrIm201Data *self);
              static PyObject *t_SsrIm201Data_setCnm(t_SsrIm201Data *self, PyObject *arg);
              static PyObject *t_SsrIm201Data_setHeightIonosphericLayer(t_SsrIm201Data *self, PyObject *arg);
              static PyObject *t_SsrIm201Data_setSnm(t_SsrIm201Data *self, PyObject *arg);
              static PyObject *t_SsrIm201Data_setSphericalHarmonicsDegree(t_SsrIm201Data *self, PyObject *arg);
              static PyObject *t_SsrIm201Data_setSphericalHarmonicsOrder(t_SsrIm201Data *self, PyObject *arg);
              static PyObject *t_SsrIm201Data_get__cnm(t_SsrIm201Data *self, void *data);
              static int t_SsrIm201Data_set__cnm(t_SsrIm201Data *self, PyObject *arg, void *data);
              static PyObject *t_SsrIm201Data_get__heightIonosphericLayer(t_SsrIm201Data *self, void *data);
              static int t_SsrIm201Data_set__heightIonosphericLayer(t_SsrIm201Data *self, PyObject *arg, void *data);
              static PyObject *t_SsrIm201Data_get__snm(t_SsrIm201Data *self, void *data);
              static int t_SsrIm201Data_set__snm(t_SsrIm201Data *self, PyObject *arg, void *data);
              static PyObject *t_SsrIm201Data_get__sphericalHarmonicsDegree(t_SsrIm201Data *self, void *data);
              static int t_SsrIm201Data_set__sphericalHarmonicsDegree(t_SsrIm201Data *self, PyObject *arg, void *data);
              static PyObject *t_SsrIm201Data_get__sphericalHarmonicsOrder(t_SsrIm201Data *self, void *data);
              static int t_SsrIm201Data_set__sphericalHarmonicsOrder(t_SsrIm201Data *self, PyObject *arg, void *data);
              static PyGetSetDef t_SsrIm201Data__fields_[] = {
                DECLARE_GETSET_FIELD(t_SsrIm201Data, cnm),
                DECLARE_GETSET_FIELD(t_SsrIm201Data, heightIonosphericLayer),
                DECLARE_GETSET_FIELD(t_SsrIm201Data, snm),
                DECLARE_GETSET_FIELD(t_SsrIm201Data, sphericalHarmonicsDegree),
                DECLARE_GETSET_FIELD(t_SsrIm201Data, sphericalHarmonicsOrder),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_SsrIm201Data__methods_[] = {
                DECLARE_METHOD(t_SsrIm201Data, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_SsrIm201Data, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_SsrIm201Data, getCnm, METH_NOARGS),
                DECLARE_METHOD(t_SsrIm201Data, getHeightIonosphericLayer, METH_NOARGS),
                DECLARE_METHOD(t_SsrIm201Data, getSnm, METH_NOARGS),
                DECLARE_METHOD(t_SsrIm201Data, getSphericalHarmonicsDegree, METH_NOARGS),
                DECLARE_METHOD(t_SsrIm201Data, getSphericalHarmonicsOrder, METH_NOARGS),
                DECLARE_METHOD(t_SsrIm201Data, setCnm, METH_O),
                DECLARE_METHOD(t_SsrIm201Data, setHeightIonosphericLayer, METH_O),
                DECLARE_METHOD(t_SsrIm201Data, setSnm, METH_O),
                DECLARE_METHOD(t_SsrIm201Data, setSphericalHarmonicsDegree, METH_O),
                DECLARE_METHOD(t_SsrIm201Data, setSphericalHarmonicsOrder, METH_O),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(SsrIm201Data)[] = {
                { Py_tp_methods, t_SsrIm201Data__methods_ },
                { Py_tp_init, (void *) t_SsrIm201Data_init_ },
                { Py_tp_getset, t_SsrIm201Data__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(SsrIm201Data)[] = {
                &PY_TYPE_DEF(::org::orekit::gnss::metric::messages::ssr::SsrData),
                NULL
              };

              DEFINE_TYPE(SsrIm201Data, t_SsrIm201Data, SsrIm201Data);

              void t_SsrIm201Data::install(PyObject *module)
              {
                installType(&PY_TYPE(SsrIm201Data), &PY_TYPE_DEF(SsrIm201Data), module, "SsrIm201Data", 0);
              }

              void t_SsrIm201Data::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(SsrIm201Data), "class_", make_descriptor(SsrIm201Data::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(SsrIm201Data), "wrapfn_", make_descriptor(t_SsrIm201Data::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(SsrIm201Data), "boxfn_", make_descriptor(boxObject));
              }

              static PyObject *t_SsrIm201Data_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, SsrIm201Data::initializeClass, 1)))
                  return NULL;
                return t_SsrIm201Data::wrap_Object(SsrIm201Data(((t_SsrIm201Data *) arg)->object.this$));
              }
              static PyObject *t_SsrIm201Data_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, SsrIm201Data::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static int t_SsrIm201Data_init_(t_SsrIm201Data *self, PyObject *args, PyObject *kwds)
              {
                SsrIm201Data object((jobject) NULL);

                INT_CALL(object = SsrIm201Data());
                self->object = object;

                return 0;
              }

              static PyObject *t_SsrIm201Data_getCnm(t_SsrIm201Data *self)
              {
                JArray< JArray< jdouble > > result((jobject) NULL);
                OBJ_CALL(result = self->object.getCnm());
                return JArray<jobject>(result.this$).wrap(NULL);
              }

              static PyObject *t_SsrIm201Data_getHeightIonosphericLayer(t_SsrIm201Data *self)
              {
                jdouble result;
                OBJ_CALL(result = self->object.getHeightIonosphericLayer());
                return PyFloat_FromDouble((double) result);
              }

              static PyObject *t_SsrIm201Data_getSnm(t_SsrIm201Data *self)
              {
                JArray< JArray< jdouble > > result((jobject) NULL);
                OBJ_CALL(result = self->object.getSnm());
                return JArray<jobject>(result.this$).wrap(NULL);
              }

              static PyObject *t_SsrIm201Data_getSphericalHarmonicsDegree(t_SsrIm201Data *self)
              {
                jint result;
                OBJ_CALL(result = self->object.getSphericalHarmonicsDegree());
                return PyLong_FromLong((long) result);
              }

              static PyObject *t_SsrIm201Data_getSphericalHarmonicsOrder(t_SsrIm201Data *self)
              {
                jint result;
                OBJ_CALL(result = self->object.getSphericalHarmonicsOrder());
                return PyLong_FromLong((long) result);
              }

              static PyObject *t_SsrIm201Data_setCnm(t_SsrIm201Data *self, PyObject *arg)
              {
                JArray< JArray< jdouble > > a0((jobject) NULL);

                if (!parseArg(arg, "[[D", &a0))
                {
                  OBJ_CALL(self->object.setCnm(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setCnm", arg);
                return NULL;
              }

              static PyObject *t_SsrIm201Data_setHeightIonosphericLayer(t_SsrIm201Data *self, PyObject *arg)
              {
                jdouble a0;

                if (!parseArg(arg, "D", &a0))
                {
                  OBJ_CALL(self->object.setHeightIonosphericLayer(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setHeightIonosphericLayer", arg);
                return NULL;
              }

              static PyObject *t_SsrIm201Data_setSnm(t_SsrIm201Data *self, PyObject *arg)
              {
                JArray< JArray< jdouble > > a0((jobject) NULL);

                if (!parseArg(arg, "[[D", &a0))
                {
                  OBJ_CALL(self->object.setSnm(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setSnm", arg);
                return NULL;
              }

              static PyObject *t_SsrIm201Data_setSphericalHarmonicsDegree(t_SsrIm201Data *self, PyObject *arg)
              {
                jint a0;

                if (!parseArg(arg, "I", &a0))
                {
                  OBJ_CALL(self->object.setSphericalHarmonicsDegree(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setSphericalHarmonicsDegree", arg);
                return NULL;
              }

              static PyObject *t_SsrIm201Data_setSphericalHarmonicsOrder(t_SsrIm201Data *self, PyObject *arg)
              {
                jint a0;

                if (!parseArg(arg, "I", &a0))
                {
                  OBJ_CALL(self->object.setSphericalHarmonicsOrder(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setSphericalHarmonicsOrder", arg);
                return NULL;
              }

              static PyObject *t_SsrIm201Data_get__cnm(t_SsrIm201Data *self, void *data)
              {
                JArray< JArray< jdouble > > value((jobject) NULL);
                OBJ_CALL(value = self->object.getCnm());
                return JArray<jobject>(value.this$).wrap(NULL);
              }
              static int t_SsrIm201Data_set__cnm(t_SsrIm201Data *self, PyObject *arg, void *data)
              {
                {
                  JArray< JArray< jdouble > > value((jobject) NULL);
                  if (!parseArg(arg, "[[D", &value))
                  {
                    INT_CALL(self->object.setCnm(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "cnm", arg);
                return -1;
              }

              static PyObject *t_SsrIm201Data_get__heightIonosphericLayer(t_SsrIm201Data *self, void *data)
              {
                jdouble value;
                OBJ_CALL(value = self->object.getHeightIonosphericLayer());
                return PyFloat_FromDouble((double) value);
              }
              static int t_SsrIm201Data_set__heightIonosphericLayer(t_SsrIm201Data *self, PyObject *arg, void *data)
              {
                {
                  jdouble value;
                  if (!parseArg(arg, "D", &value))
                  {
                    INT_CALL(self->object.setHeightIonosphericLayer(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "heightIonosphericLayer", arg);
                return -1;
              }

              static PyObject *t_SsrIm201Data_get__snm(t_SsrIm201Data *self, void *data)
              {
                JArray< JArray< jdouble > > value((jobject) NULL);
                OBJ_CALL(value = self->object.getSnm());
                return JArray<jobject>(value.this$).wrap(NULL);
              }
              static int t_SsrIm201Data_set__snm(t_SsrIm201Data *self, PyObject *arg, void *data)
              {
                {
                  JArray< JArray< jdouble > > value((jobject) NULL);
                  if (!parseArg(arg, "[[D", &value))
                  {
                    INT_CALL(self->object.setSnm(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "snm", arg);
                return -1;
              }

              static PyObject *t_SsrIm201Data_get__sphericalHarmonicsDegree(t_SsrIm201Data *self, void *data)
              {
                jint value;
                OBJ_CALL(value = self->object.getSphericalHarmonicsDegree());
                return PyLong_FromLong((long) value);
              }
              static int t_SsrIm201Data_set__sphericalHarmonicsDegree(t_SsrIm201Data *self, PyObject *arg, void *data)
              {
                {
                  jint value;
                  if (!parseArg(arg, "I", &value))
                  {
                    INT_CALL(self->object.setSphericalHarmonicsDegree(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "sphericalHarmonicsDegree", arg);
                return -1;
              }

              static PyObject *t_SsrIm201Data_get__sphericalHarmonicsOrder(t_SsrIm201Data *self, void *data)
              {
                jint value;
                OBJ_CALL(value = self->object.getSphericalHarmonicsOrder());
                return PyLong_FromLong((long) value);
              }
              static int t_SsrIm201Data_set__sphericalHarmonicsOrder(t_SsrIm201Data *self, PyObject *arg, void *data)
              {
                {
                  jint value;
                  if (!parseArg(arg, "I", &value))
                  {
                    INT_CALL(self->object.setSphericalHarmonicsOrder(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "sphericalHarmonicsOrder", arg);
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
#include "org/orekit/files/ccsds/ndm/cdm/Cdm.h"
#include "org/orekit/files/ccsds/ndm/odm/UserDefined.h"
#include "java/util/List.h"
#include "org/orekit/utils/IERSConventions.h"
#include "org/orekit/files/ccsds/ndm/cdm/CdmMetadata.h"
#include "org/orekit/data/DataContext.h"
#include "org/orekit/files/ccsds/ndm/cdm/CdmSegment.h"
#include "org/orekit/files/ccsds/ndm/cdm/CdmRelativeMetadata.h"
#include "org/orekit/files/ccsds/ndm/cdm/CdmData.h"
#include "org/orekit/files/ccsds/ndm/cdm/CdmHeader.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace cdm {

            ::java::lang::Class *Cdm::class$ = NULL;
            jmethodID *Cdm::mids$ = NULL;
            bool Cdm::live$ = false;
            ::java::lang::String *Cdm::FORMAT_VERSION_KEY = NULL;
            ::java::lang::String *Cdm::ROOT = NULL;

            jclass Cdm::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/cdm/Cdm");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_8149672295f5e0f8] = env->getMethodID(cls, "<init>", "(Lorg/orekit/files/ccsds/ndm/cdm/CdmHeader;Ljava/util/List;Lorg/orekit/utils/IERSConventions;Lorg/orekit/data/DataContext;)V");
                mids$[mid_getDataObject1_743160a6476f9c44] = env->getMethodID(cls, "getDataObject1", "()Lorg/orekit/files/ccsds/ndm/cdm/CdmData;");
                mids$[mid_getDataObject2_743160a6476f9c44] = env->getMethodID(cls, "getDataObject2", "()Lorg/orekit/files/ccsds/ndm/cdm/CdmData;");
                mids$[mid_getMetadataObject1_7961694302d7aaf0] = env->getMethodID(cls, "getMetadataObject1", "()Lorg/orekit/files/ccsds/ndm/cdm/CdmMetadata;");
                mids$[mid_getMetadataObject2_7961694302d7aaf0] = env->getMethodID(cls, "getMetadataObject2", "()Lorg/orekit/files/ccsds/ndm/cdm/CdmMetadata;");
                mids$[mid_getRelativeMetadata_9e18211f4c2756fe] = env->getMethodID(cls, "getRelativeMetadata", "()Lorg/orekit/files/ccsds/ndm/cdm/CdmRelativeMetadata;");
                mids$[mid_getUserDefinedParameters_757fcfae3141e23d] = env->getMethodID(cls, "getUserDefinedParameters", "()Lorg/orekit/files/ccsds/ndm/odm/UserDefined;");

                class$ = new ::java::lang::Class(cls);
                cls = (jclass) class$->this$;

                FORMAT_VERSION_KEY = new ::java::lang::String(env->getStaticObjectField(cls, "FORMAT_VERSION_KEY", "Ljava/lang/String;"));
                ROOT = new ::java::lang::String(env->getStaticObjectField(cls, "ROOT", "Ljava/lang/String;"));
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            Cdm::Cdm(const ::org::orekit::files::ccsds::ndm::cdm::CdmHeader & a0, const ::java::util::List & a1, const ::org::orekit::utils::IERSConventions & a2, const ::org::orekit::data::DataContext & a3) : ::org::orekit::files::ccsds::ndm::NdmConstituent(env->newObject(initializeClass, &mids$, mid_init$_8149672295f5e0f8, a0.this$, a1.this$, a2.this$, a3.this$)) {}

            ::org::orekit::files::ccsds::ndm::cdm::CdmData Cdm::getDataObject1() const
            {
              return ::org::orekit::files::ccsds::ndm::cdm::CdmData(env->callObjectMethod(this$, mids$[mid_getDataObject1_743160a6476f9c44]));
            }

            ::org::orekit::files::ccsds::ndm::cdm::CdmData Cdm::getDataObject2() const
            {
              return ::org::orekit::files::ccsds::ndm::cdm::CdmData(env->callObjectMethod(this$, mids$[mid_getDataObject2_743160a6476f9c44]));
            }

            ::org::orekit::files::ccsds::ndm::cdm::CdmMetadata Cdm::getMetadataObject1() const
            {
              return ::org::orekit::files::ccsds::ndm::cdm::CdmMetadata(env->callObjectMethod(this$, mids$[mid_getMetadataObject1_7961694302d7aaf0]));
            }

            ::org::orekit::files::ccsds::ndm::cdm::CdmMetadata Cdm::getMetadataObject2() const
            {
              return ::org::orekit::files::ccsds::ndm::cdm::CdmMetadata(env->callObjectMethod(this$, mids$[mid_getMetadataObject2_7961694302d7aaf0]));
            }

            ::org::orekit::files::ccsds::ndm::cdm::CdmRelativeMetadata Cdm::getRelativeMetadata() const
            {
              return ::org::orekit::files::ccsds::ndm::cdm::CdmRelativeMetadata(env->callObjectMethod(this$, mids$[mid_getRelativeMetadata_9e18211f4c2756fe]));
            }

            ::org::orekit::files::ccsds::ndm::odm::UserDefined Cdm::getUserDefinedParameters() const
            {
              return ::org::orekit::files::ccsds::ndm::odm::UserDefined(env->callObjectMethod(this$, mids$[mid_getUserDefinedParameters_757fcfae3141e23d]));
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
            static PyObject *t_Cdm_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_Cdm_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_Cdm_of_(t_Cdm *self, PyObject *args);
            static int t_Cdm_init_(t_Cdm *self, PyObject *args, PyObject *kwds);
            static PyObject *t_Cdm_getDataObject1(t_Cdm *self);
            static PyObject *t_Cdm_getDataObject2(t_Cdm *self);
            static PyObject *t_Cdm_getMetadataObject1(t_Cdm *self);
            static PyObject *t_Cdm_getMetadataObject2(t_Cdm *self);
            static PyObject *t_Cdm_getRelativeMetadata(t_Cdm *self);
            static PyObject *t_Cdm_getUserDefinedParameters(t_Cdm *self);
            static PyObject *t_Cdm_get__dataObject1(t_Cdm *self, void *data);
            static PyObject *t_Cdm_get__dataObject2(t_Cdm *self, void *data);
            static PyObject *t_Cdm_get__metadataObject1(t_Cdm *self, void *data);
            static PyObject *t_Cdm_get__metadataObject2(t_Cdm *self, void *data);
            static PyObject *t_Cdm_get__relativeMetadata(t_Cdm *self, void *data);
            static PyObject *t_Cdm_get__userDefinedParameters(t_Cdm *self, void *data);
            static PyObject *t_Cdm_get__parameters_(t_Cdm *self, void *data);
            static PyGetSetDef t_Cdm__fields_[] = {
              DECLARE_GET_FIELD(t_Cdm, dataObject1),
              DECLARE_GET_FIELD(t_Cdm, dataObject2),
              DECLARE_GET_FIELD(t_Cdm, metadataObject1),
              DECLARE_GET_FIELD(t_Cdm, metadataObject2),
              DECLARE_GET_FIELD(t_Cdm, relativeMetadata),
              DECLARE_GET_FIELD(t_Cdm, userDefinedParameters),
              DECLARE_GET_FIELD(t_Cdm, parameters_),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_Cdm__methods_[] = {
              DECLARE_METHOD(t_Cdm, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_Cdm, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_Cdm, of_, METH_VARARGS),
              DECLARE_METHOD(t_Cdm, getDataObject1, METH_NOARGS),
              DECLARE_METHOD(t_Cdm, getDataObject2, METH_NOARGS),
              DECLARE_METHOD(t_Cdm, getMetadataObject1, METH_NOARGS),
              DECLARE_METHOD(t_Cdm, getMetadataObject2, METH_NOARGS),
              DECLARE_METHOD(t_Cdm, getRelativeMetadata, METH_NOARGS),
              DECLARE_METHOD(t_Cdm, getUserDefinedParameters, METH_NOARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(Cdm)[] = {
              { Py_tp_methods, t_Cdm__methods_ },
              { Py_tp_init, (void *) t_Cdm_init_ },
              { Py_tp_getset, t_Cdm__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(Cdm)[] = {
              &PY_TYPE_DEF(::org::orekit::files::ccsds::ndm::NdmConstituent),
              NULL
            };

            DEFINE_TYPE(Cdm, t_Cdm, Cdm);
            PyObject *t_Cdm::wrap_Object(const Cdm& object, PyTypeObject *p0, PyTypeObject *p1)
            {
              PyObject *obj = t_Cdm::wrap_Object(object);
              if (obj != NULL && obj != Py_None)
              {
                t_Cdm *self = (t_Cdm *) obj;
                self->parameters[0] = p0;
                self->parameters[1] = p1;
              }
              return obj;
            }

            PyObject *t_Cdm::wrap_jobject(const jobject& object, PyTypeObject *p0, PyTypeObject *p1)
            {
              PyObject *obj = t_Cdm::wrap_jobject(object);
              if (obj != NULL && obj != Py_None)
              {
                t_Cdm *self = (t_Cdm *) obj;
                self->parameters[0] = p0;
                self->parameters[1] = p1;
              }
              return obj;
            }

            void t_Cdm::install(PyObject *module)
            {
              installType(&PY_TYPE(Cdm), &PY_TYPE_DEF(Cdm), module, "Cdm", 0);
            }

            void t_Cdm::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(Cdm), "class_", make_descriptor(Cdm::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(Cdm), "wrapfn_", make_descriptor(t_Cdm::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(Cdm), "boxfn_", make_descriptor(boxObject));
              env->getClass(Cdm::initializeClass);
              PyObject_SetAttrString((PyObject *) PY_TYPE(Cdm), "FORMAT_VERSION_KEY", make_descriptor(j2p(*Cdm::FORMAT_VERSION_KEY)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(Cdm), "ROOT", make_descriptor(j2p(*Cdm::ROOT)));
            }

            static PyObject *t_Cdm_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, Cdm::initializeClass, 1)))
                return NULL;
              return t_Cdm::wrap_Object(Cdm(((t_Cdm *) arg)->object.this$));
            }
            static PyObject *t_Cdm_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, Cdm::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_Cdm_of_(t_Cdm *self, PyObject *args)
            {
              if (!parseArg(args, "T", 2, &(self->parameters)))
                Py_RETURN_SELF;
              return PyErr_SetArgsError((PyObject *) self, "of_", args);
            }

            static int t_Cdm_init_(t_Cdm *self, PyObject *args, PyObject *kwds)
            {
              ::org::orekit::files::ccsds::ndm::cdm::CdmHeader a0((jobject) NULL);
              ::java::util::List a1((jobject) NULL);
              PyTypeObject **p1;
              ::org::orekit::utils::IERSConventions a2((jobject) NULL);
              PyTypeObject **p2;
              ::org::orekit::data::DataContext a3((jobject) NULL);
              Cdm object((jobject) NULL);

              if (!parseArgs(args, "kKKk", ::org::orekit::files::ccsds::ndm::cdm::CdmHeader::initializeClass, ::java::util::List::initializeClass, ::org::orekit::utils::IERSConventions::initializeClass, ::org::orekit::data::DataContext::initializeClass, &a0, &a1, &p1, ::java::util::t_List::parameters_, &a2, &p2, ::org::orekit::utils::t_IERSConventions::parameters_, &a3))
              {
                INT_CALL(object = Cdm(a0, a1, a2, a3));
                self->object = object;
                self->parameters[0] = ::org::orekit::files::ccsds::ndm::cdm::PY_TYPE(CdmHeader);
                self->parameters[1] = ::org::orekit::files::ccsds::ndm::cdm::PY_TYPE(CdmSegment);
              }
              else
              {
                PyErr_SetArgsError((PyObject *) self, "__init__", args);
                return -1;
              }

              return 0;
            }

            static PyObject *t_Cdm_getDataObject1(t_Cdm *self)
            {
              ::org::orekit::files::ccsds::ndm::cdm::CdmData result((jobject) NULL);
              OBJ_CALL(result = self->object.getDataObject1());
              return ::org::orekit::files::ccsds::ndm::cdm::t_CdmData::wrap_Object(result);
            }

            static PyObject *t_Cdm_getDataObject2(t_Cdm *self)
            {
              ::org::orekit::files::ccsds::ndm::cdm::CdmData result((jobject) NULL);
              OBJ_CALL(result = self->object.getDataObject2());
              return ::org::orekit::files::ccsds::ndm::cdm::t_CdmData::wrap_Object(result);
            }

            static PyObject *t_Cdm_getMetadataObject1(t_Cdm *self)
            {
              ::org::orekit::files::ccsds::ndm::cdm::CdmMetadata result((jobject) NULL);
              OBJ_CALL(result = self->object.getMetadataObject1());
              return ::org::orekit::files::ccsds::ndm::cdm::t_CdmMetadata::wrap_Object(result);
            }

            static PyObject *t_Cdm_getMetadataObject2(t_Cdm *self)
            {
              ::org::orekit::files::ccsds::ndm::cdm::CdmMetadata result((jobject) NULL);
              OBJ_CALL(result = self->object.getMetadataObject2());
              return ::org::orekit::files::ccsds::ndm::cdm::t_CdmMetadata::wrap_Object(result);
            }

            static PyObject *t_Cdm_getRelativeMetadata(t_Cdm *self)
            {
              ::org::orekit::files::ccsds::ndm::cdm::CdmRelativeMetadata result((jobject) NULL);
              OBJ_CALL(result = self->object.getRelativeMetadata());
              return ::org::orekit::files::ccsds::ndm::cdm::t_CdmRelativeMetadata::wrap_Object(result);
            }

            static PyObject *t_Cdm_getUserDefinedParameters(t_Cdm *self)
            {
              ::org::orekit::files::ccsds::ndm::odm::UserDefined result((jobject) NULL);
              OBJ_CALL(result = self->object.getUserDefinedParameters());
              return ::org::orekit::files::ccsds::ndm::odm::t_UserDefined::wrap_Object(result);
            }
            static PyObject *t_Cdm_get__parameters_(t_Cdm *self, void *data)
            {
              return typeParameters(self->parameters, sizeof(self->parameters));
            }

            static PyObject *t_Cdm_get__dataObject1(t_Cdm *self, void *data)
            {
              ::org::orekit::files::ccsds::ndm::cdm::CdmData value((jobject) NULL);
              OBJ_CALL(value = self->object.getDataObject1());
              return ::org::orekit::files::ccsds::ndm::cdm::t_CdmData::wrap_Object(value);
            }

            static PyObject *t_Cdm_get__dataObject2(t_Cdm *self, void *data)
            {
              ::org::orekit::files::ccsds::ndm::cdm::CdmData value((jobject) NULL);
              OBJ_CALL(value = self->object.getDataObject2());
              return ::org::orekit::files::ccsds::ndm::cdm::t_CdmData::wrap_Object(value);
            }

            static PyObject *t_Cdm_get__metadataObject1(t_Cdm *self, void *data)
            {
              ::org::orekit::files::ccsds::ndm::cdm::CdmMetadata value((jobject) NULL);
              OBJ_CALL(value = self->object.getMetadataObject1());
              return ::org::orekit::files::ccsds::ndm::cdm::t_CdmMetadata::wrap_Object(value);
            }

            static PyObject *t_Cdm_get__metadataObject2(t_Cdm *self, void *data)
            {
              ::org::orekit::files::ccsds::ndm::cdm::CdmMetadata value((jobject) NULL);
              OBJ_CALL(value = self->object.getMetadataObject2());
              return ::org::orekit::files::ccsds::ndm::cdm::t_CdmMetadata::wrap_Object(value);
            }

            static PyObject *t_Cdm_get__relativeMetadata(t_Cdm *self, void *data)
            {
              ::org::orekit::files::ccsds::ndm::cdm::CdmRelativeMetadata value((jobject) NULL);
              OBJ_CALL(value = self->object.getRelativeMetadata());
              return ::org::orekit::files::ccsds::ndm::cdm::t_CdmRelativeMetadata::wrap_Object(value);
            }

            static PyObject *t_Cdm_get__userDefinedParameters(t_Cdm *self, void *data)
            {
              ::org::orekit::files::ccsds::ndm::odm::UserDefined value((jobject) NULL);
              OBJ_CALL(value = self->object.getUserDefinedParameters());
              return ::org::orekit::files::ccsds::ndm::odm::t_UserDefined::wrap_Object(value);
            }
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/time/PythonTimeInterpolator.h"
#include "org/orekit/time/TimeStamped.h"
#include "java/util/List.h"
#include "java/lang/Throwable.h"
#include "java/util/Collection.h"
#include "java/lang/Class.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/util/stream/Stream.h"
#include "org/orekit/time/TimeInterpolator.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace time {

      ::java::lang::Class *PythonTimeInterpolator::class$ = NULL;
      jmethodID *PythonTimeInterpolator::mids$ = NULL;
      bool PythonTimeInterpolator::live$ = false;

      jclass PythonTimeInterpolator::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/time/PythonTimeInterpolator");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_a1fa5dae97ea5ed2] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_finalize_a1fa5dae97ea5ed2] = env->getMethodID(cls, "finalize", "()V");
          mids$[mid_getExtrapolationThreshold_b74f83833fdad017] = env->getMethodID(cls, "getExtrapolationThreshold", "()D");
          mids$[mid_getNbInterpolationPoints_55546ef6a647f39b] = env->getMethodID(cls, "getNbInterpolationPoints", "()I");
          mids$[mid_getSubInterpolators_e62d3bb06d56d7e3] = env->getMethodID(cls, "getSubInterpolators", "()Ljava/util/List;");
          mids$[mid_interpolate_591e6bc1a9dee1c4] = env->getMethodID(cls, "interpolate", "(Lorg/orekit/time/AbsoluteDate;Ljava/util/Collection;)Lorg/orekit/time/TimeInterpolator;");
          mids$[mid_interpolate_ca198e91e67fee01] = env->getMethodID(cls, "interpolate", "(Lorg/orekit/time/AbsoluteDate;Ljava/util/stream/Stream;)Lorg/orekit/time/TimeInterpolator;");
          mids$[mid_pythonDecRef_a1fa5dae97ea5ed2] = env->getMethodID(cls, "pythonDecRef", "()V");
          mids$[mid_pythonExtension_6c0ce7e438e5ded4] = env->getMethodID(cls, "pythonExtension", "()J");
          mids$[mid_pythonExtension_3d7dd2314a0dd456] = env->getMethodID(cls, "pythonExtension", "(J)V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      PythonTimeInterpolator::PythonTimeInterpolator() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_a1fa5dae97ea5ed2)) {}

      void PythonTimeInterpolator::finalize() const
      {
        env->callVoidMethod(this$, mids$[mid_finalize_a1fa5dae97ea5ed2]);
      }

      jlong PythonTimeInterpolator::pythonExtension() const
      {
        return env->callLongMethod(this$, mids$[mid_pythonExtension_6c0ce7e438e5ded4]);
      }

      void PythonTimeInterpolator::pythonExtension(jlong a0) const
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
    namespace time {
      static PyObject *t_PythonTimeInterpolator_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_PythonTimeInterpolator_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_PythonTimeInterpolator_of_(t_PythonTimeInterpolator *self, PyObject *args);
      static int t_PythonTimeInterpolator_init_(t_PythonTimeInterpolator *self, PyObject *args, PyObject *kwds);
      static PyObject *t_PythonTimeInterpolator_finalize(t_PythonTimeInterpolator *self);
      static PyObject *t_PythonTimeInterpolator_pythonExtension(t_PythonTimeInterpolator *self, PyObject *args);
      static jdouble JNICALL t_PythonTimeInterpolator_getExtrapolationThreshold0(JNIEnv *jenv, jobject jobj);
      static jint JNICALL t_PythonTimeInterpolator_getNbInterpolationPoints1(JNIEnv *jenv, jobject jobj);
      static jobject JNICALL t_PythonTimeInterpolator_getSubInterpolators2(JNIEnv *jenv, jobject jobj);
      static jobject JNICALL t_PythonTimeInterpolator_interpolate3(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1);
      static jobject JNICALL t_PythonTimeInterpolator_interpolate4(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1);
      static void JNICALL t_PythonTimeInterpolator_pythonDecRef5(JNIEnv *jenv, jobject jobj);
      static PyObject *t_PythonTimeInterpolator_get__self(t_PythonTimeInterpolator *self, void *data);
      static PyObject *t_PythonTimeInterpolator_get__parameters_(t_PythonTimeInterpolator *self, void *data);
      static PyGetSetDef t_PythonTimeInterpolator__fields_[] = {
        DECLARE_GET_FIELD(t_PythonTimeInterpolator, self),
        DECLARE_GET_FIELD(t_PythonTimeInterpolator, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_PythonTimeInterpolator__methods_[] = {
        DECLARE_METHOD(t_PythonTimeInterpolator, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonTimeInterpolator, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonTimeInterpolator, of_, METH_VARARGS),
        DECLARE_METHOD(t_PythonTimeInterpolator, finalize, METH_NOARGS),
        DECLARE_METHOD(t_PythonTimeInterpolator, pythonExtension, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(PythonTimeInterpolator)[] = {
        { Py_tp_methods, t_PythonTimeInterpolator__methods_ },
        { Py_tp_init, (void *) t_PythonTimeInterpolator_init_ },
        { Py_tp_getset, t_PythonTimeInterpolator__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(PythonTimeInterpolator)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(PythonTimeInterpolator, t_PythonTimeInterpolator, PythonTimeInterpolator);
      PyObject *t_PythonTimeInterpolator::wrap_Object(const PythonTimeInterpolator& object, PyTypeObject *p0)
      {
        PyObject *obj = t_PythonTimeInterpolator::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_PythonTimeInterpolator *self = (t_PythonTimeInterpolator *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_PythonTimeInterpolator::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_PythonTimeInterpolator::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_PythonTimeInterpolator *self = (t_PythonTimeInterpolator *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_PythonTimeInterpolator::install(PyObject *module)
      {
        installType(&PY_TYPE(PythonTimeInterpolator), &PY_TYPE_DEF(PythonTimeInterpolator), module, "PythonTimeInterpolator", 1);
      }

      void t_PythonTimeInterpolator::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonTimeInterpolator), "class_", make_descriptor(PythonTimeInterpolator::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonTimeInterpolator), "wrapfn_", make_descriptor(t_PythonTimeInterpolator::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonTimeInterpolator), "boxfn_", make_descriptor(boxObject));
        jclass cls = env->getClass(PythonTimeInterpolator::initializeClass);
        JNINativeMethod methods[] = {
          { "getExtrapolationThreshold", "()D", (void *) t_PythonTimeInterpolator_getExtrapolationThreshold0 },
          { "getNbInterpolationPoints", "()I", (void *) t_PythonTimeInterpolator_getNbInterpolationPoints1 },
          { "getSubInterpolators", "()Ljava/util/List;", (void *) t_PythonTimeInterpolator_getSubInterpolators2 },
          { "interpolate", "(Lorg/orekit/time/AbsoluteDate;Ljava/util/Collection;)Lorg/orekit/time/TimeInterpolator;", (void *) t_PythonTimeInterpolator_interpolate3 },
          { "interpolate", "(Lorg/orekit/time/AbsoluteDate;Ljava/util/stream/Stream;)Lorg/orekit/time/TimeInterpolator;", (void *) t_PythonTimeInterpolator_interpolate4 },
          { "pythonDecRef", "()V", (void *) t_PythonTimeInterpolator_pythonDecRef5 },
        };
        env->registerNatives(cls, methods, 6);
      }

      static PyObject *t_PythonTimeInterpolator_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, PythonTimeInterpolator::initializeClass, 1)))
          return NULL;
        return t_PythonTimeInterpolator::wrap_Object(PythonTimeInterpolator(((t_PythonTimeInterpolator *) arg)->object.this$));
      }
      static PyObject *t_PythonTimeInterpolator_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, PythonTimeInterpolator::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_PythonTimeInterpolator_of_(t_PythonTimeInterpolator *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static int t_PythonTimeInterpolator_init_(t_PythonTimeInterpolator *self, PyObject *args, PyObject *kwds)
      {
        PythonTimeInterpolator object((jobject) NULL);

        INT_CALL(object = PythonTimeInterpolator());
        self->object = object;

        Py_INCREF((PyObject *) self);
        self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

        return 0;
      }

      static PyObject *t_PythonTimeInterpolator_finalize(t_PythonTimeInterpolator *self)
      {
        OBJ_CALL(self->object.finalize());
        Py_RETURN_NONE;
      }

      static PyObject *t_PythonTimeInterpolator_pythonExtension(t_PythonTimeInterpolator *self, PyObject *args)
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

      static jdouble JNICALL t_PythonTimeInterpolator_getExtrapolationThreshold0(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonTimeInterpolator::mids$[PythonTimeInterpolator::mid_pythonExtension_6c0ce7e438e5ded4]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        jdouble value;
        PyObject *result = PyObject_CallMethod(obj, "getExtrapolationThreshold", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "D", &value))
        {
          throwTypeError("getExtrapolationThreshold", result);
          Py_DECREF(result);
        }
        else
        {
          Py_DECREF(result);
          return value;
        }

        return (jdouble) 0;
      }

      static jint JNICALL t_PythonTimeInterpolator_getNbInterpolationPoints1(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonTimeInterpolator::mids$[PythonTimeInterpolator::mid_pythonExtension_6c0ce7e438e5ded4]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        jint value;
        PyObject *result = PyObject_CallMethod(obj, "getNbInterpolationPoints", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "I", &value))
        {
          throwTypeError("getNbInterpolationPoints", result);
          Py_DECREF(result);
        }
        else
        {
          Py_DECREF(result);
          return value;
        }

        return (jint) 0;
      }

      static jobject JNICALL t_PythonTimeInterpolator_getSubInterpolators2(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonTimeInterpolator::mids$[PythonTimeInterpolator::mid_pythonExtension_6c0ce7e438e5ded4]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::java::util::List value((jobject) NULL);
        PyObject *result = PyObject_CallMethod(obj, "getSubInterpolators", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::java::util::List::initializeClass, &value))
        {
          throwTypeError("getSubInterpolators", result);
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

      static jobject JNICALL t_PythonTimeInterpolator_interpolate3(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonTimeInterpolator::mids$[PythonTimeInterpolator::mid_pythonExtension_6c0ce7e438e5ded4]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::time::TimeInterpolator value((jobject) NULL);
        PyObject *o0 = ::org::orekit::time::t_AbsoluteDate::wrap_Object(::org::orekit::time::AbsoluteDate(a0));
        PyObject *o1 = ::java::util::t_Collection::wrap_Object(::java::util::Collection(a1));
        PyObject *result = PyObject_CallMethod(obj, "interpolate", "OO", o0, o1);
        Py_DECREF(o0);
        Py_DECREF(o1);
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::time::TimeInterpolator::initializeClass, &value))
        {
          throwTypeError("interpolate", result);
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

      static jobject JNICALL t_PythonTimeInterpolator_interpolate4(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonTimeInterpolator::mids$[PythonTimeInterpolator::mid_pythonExtension_6c0ce7e438e5ded4]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::time::TimeInterpolator value((jobject) NULL);
        PyObject *o0 = ::org::orekit::time::t_AbsoluteDate::wrap_Object(::org::orekit::time::AbsoluteDate(a0));
        PyObject *o1 = ::java::util::stream::t_Stream::wrap_Object(::java::util::stream::Stream(a1));
        PyObject *result = PyObject_CallMethod(obj, "interpolate", "OO", o0, o1);
        Py_DECREF(o0);
        Py_DECREF(o1);
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::time::TimeInterpolator::initializeClass, &value))
        {
          throwTypeError("interpolate", result);
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

      static void JNICALL t_PythonTimeInterpolator_pythonDecRef5(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonTimeInterpolator::mids$[PythonTimeInterpolator::mid_pythonExtension_6c0ce7e438e5ded4]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

        if (obj != NULL)
        {
          jenv->CallVoidMethod(jobj, PythonTimeInterpolator::mids$[PythonTimeInterpolator::mid_pythonExtension_3d7dd2314a0dd456], (jlong) 0);
          env->finalizeObject(jenv, obj);
        }
      }

      static PyObject *t_PythonTimeInterpolator_get__self(t_PythonTimeInterpolator *self, void *data)
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
      static PyObject *t_PythonTimeInterpolator_get__parameters_(t_PythonTimeInterpolator *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/rugged/raster/UpdatableTile.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace rugged {
      namespace raster {

        ::java::lang::Class *UpdatableTile::class$ = NULL;
        jmethodID *UpdatableTile::mids$ = NULL;
        bool UpdatableTile::live$ = false;

        jclass UpdatableTile::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/rugged/raster/UpdatableTile");

            mids$ = new jmethodID[max_mid];
            mids$[mid_setElevation_94fe8d9ffeb50676] = env->getMethodID(cls, "setElevation", "(IID)V");
            mids$[mid_setGeometry_e55884eaad2c5051] = env->getMethodID(cls, "setGeometry", "(DDDDII)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        void UpdatableTile::setElevation(jint a0, jint a1, jdouble a2) const
        {
          env->callVoidMethod(this$, mids$[mid_setElevation_94fe8d9ffeb50676], a0, a1, a2);
        }

        void UpdatableTile::setGeometry(jdouble a0, jdouble a1, jdouble a2, jdouble a3, jint a4, jint a5) const
        {
          env->callVoidMethod(this$, mids$[mid_setGeometry_e55884eaad2c5051], a0, a1, a2, a3, a4, a5);
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
    namespace rugged {
      namespace raster {
        static PyObject *t_UpdatableTile_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_UpdatableTile_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_UpdatableTile_setElevation(t_UpdatableTile *self, PyObject *args);
        static PyObject *t_UpdatableTile_setGeometry(t_UpdatableTile *self, PyObject *args);

        static PyMethodDef t_UpdatableTile__methods_[] = {
          DECLARE_METHOD(t_UpdatableTile, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_UpdatableTile, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_UpdatableTile, setElevation, METH_VARARGS),
          DECLARE_METHOD(t_UpdatableTile, setGeometry, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(UpdatableTile)[] = {
          { Py_tp_methods, t_UpdatableTile__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(UpdatableTile)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(UpdatableTile, t_UpdatableTile, UpdatableTile);

        void t_UpdatableTile::install(PyObject *module)
        {
          installType(&PY_TYPE(UpdatableTile), &PY_TYPE_DEF(UpdatableTile), module, "UpdatableTile", 0);
        }

        void t_UpdatableTile::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(UpdatableTile), "class_", make_descriptor(UpdatableTile::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(UpdatableTile), "wrapfn_", make_descriptor(t_UpdatableTile::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(UpdatableTile), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_UpdatableTile_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, UpdatableTile::initializeClass, 1)))
            return NULL;
          return t_UpdatableTile::wrap_Object(UpdatableTile(((t_UpdatableTile *) arg)->object.this$));
        }
        static PyObject *t_UpdatableTile_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, UpdatableTile::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_UpdatableTile_setElevation(t_UpdatableTile *self, PyObject *args)
        {
          jint a0;
          jint a1;
          jdouble a2;

          if (!parseArgs(args, "IID", &a0, &a1, &a2))
          {
            OBJ_CALL(self->object.setElevation(a0, a1, a2));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setElevation", args);
          return NULL;
        }

        static PyObject *t_UpdatableTile_setGeometry(t_UpdatableTile *self, PyObject *args)
        {
          jdouble a0;
          jdouble a1;
          jdouble a2;
          jdouble a3;
          jint a4;
          jint a5;

          if (!parseArgs(args, "DDDDII", &a0, &a1, &a2, &a3, &a4, &a5))
          {
            OBJ_CALL(self->object.setGeometry(a0, a1, a2, a3, a4, a5));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setGeometry", args);
          return NULL;
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/time/AbstractTimeInterpolator$InterpolationData.h"
#include "java/util/List.h"
#include "java/lang/Class.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/utils/ImmutableTimeStampedCache.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace time {

      ::java::lang::Class *AbstractTimeInterpolator$InterpolationData::class$ = NULL;
      jmethodID *AbstractTimeInterpolator$InterpolationData::mids$ = NULL;
      bool AbstractTimeInterpolator$InterpolationData::live$ = false;

      jclass AbstractTimeInterpolator$InterpolationData::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/time/AbstractTimeInterpolator$InterpolationData");

          mids$ = new jmethodID[max_mid];
          mids$[mid_getCachedSamples_2902dff7f102e3bf] = env->getMethodID(cls, "getCachedSamples", "()Lorg/orekit/utils/ImmutableTimeStampedCache;");
          mids$[mid_getInterpolationDate_c325492395d89b24] = env->getMethodID(cls, "getInterpolationDate", "()Lorg/orekit/time/AbsoluteDate;");
          mids$[mid_getNeighborList_e62d3bb06d56d7e3] = env->getMethodID(cls, "getNeighborList", "()Ljava/util/List;");
          mids$[mid_getCentralDate_bcf1d4e6f5b4821b] = env->getMethodID(cls, "getCentralDate", "(Lorg/orekit/time/AbsoluteDate;)Lorg/orekit/time/AbsoluteDate;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ::org::orekit::utils::ImmutableTimeStampedCache AbstractTimeInterpolator$InterpolationData::getCachedSamples() const
      {
        return ::org::orekit::utils::ImmutableTimeStampedCache(env->callObjectMethod(this$, mids$[mid_getCachedSamples_2902dff7f102e3bf]));
      }

      ::org::orekit::time::AbsoluteDate AbstractTimeInterpolator$InterpolationData::getInterpolationDate() const
      {
        return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getInterpolationDate_c325492395d89b24]));
      }

      ::java::util::List AbstractTimeInterpolator$InterpolationData::getNeighborList() const
      {
        return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getNeighborList_e62d3bb06d56d7e3]));
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
      static PyObject *t_AbstractTimeInterpolator$InterpolationData_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_AbstractTimeInterpolator$InterpolationData_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_AbstractTimeInterpolator$InterpolationData_of_(t_AbstractTimeInterpolator$InterpolationData *self, PyObject *args);
      static PyObject *t_AbstractTimeInterpolator$InterpolationData_getCachedSamples(t_AbstractTimeInterpolator$InterpolationData *self);
      static PyObject *t_AbstractTimeInterpolator$InterpolationData_getInterpolationDate(t_AbstractTimeInterpolator$InterpolationData *self);
      static PyObject *t_AbstractTimeInterpolator$InterpolationData_getNeighborList(t_AbstractTimeInterpolator$InterpolationData *self);
      static PyObject *t_AbstractTimeInterpolator$InterpolationData_get__cachedSamples(t_AbstractTimeInterpolator$InterpolationData *self, void *data);
      static PyObject *t_AbstractTimeInterpolator$InterpolationData_get__interpolationDate(t_AbstractTimeInterpolator$InterpolationData *self, void *data);
      static PyObject *t_AbstractTimeInterpolator$InterpolationData_get__neighborList(t_AbstractTimeInterpolator$InterpolationData *self, void *data);
      static PyObject *t_AbstractTimeInterpolator$InterpolationData_get__parameters_(t_AbstractTimeInterpolator$InterpolationData *self, void *data);
      static PyGetSetDef t_AbstractTimeInterpolator$InterpolationData__fields_[] = {
        DECLARE_GET_FIELD(t_AbstractTimeInterpolator$InterpolationData, cachedSamples),
        DECLARE_GET_FIELD(t_AbstractTimeInterpolator$InterpolationData, interpolationDate),
        DECLARE_GET_FIELD(t_AbstractTimeInterpolator$InterpolationData, neighborList),
        DECLARE_GET_FIELD(t_AbstractTimeInterpolator$InterpolationData, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_AbstractTimeInterpolator$InterpolationData__methods_[] = {
        DECLARE_METHOD(t_AbstractTimeInterpolator$InterpolationData, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_AbstractTimeInterpolator$InterpolationData, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_AbstractTimeInterpolator$InterpolationData, of_, METH_VARARGS),
        DECLARE_METHOD(t_AbstractTimeInterpolator$InterpolationData, getCachedSamples, METH_NOARGS),
        DECLARE_METHOD(t_AbstractTimeInterpolator$InterpolationData, getInterpolationDate, METH_NOARGS),
        DECLARE_METHOD(t_AbstractTimeInterpolator$InterpolationData, getNeighborList, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(AbstractTimeInterpolator$InterpolationData)[] = {
        { Py_tp_methods, t_AbstractTimeInterpolator$InterpolationData__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_AbstractTimeInterpolator$InterpolationData__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(AbstractTimeInterpolator$InterpolationData)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(AbstractTimeInterpolator$InterpolationData, t_AbstractTimeInterpolator$InterpolationData, AbstractTimeInterpolator$InterpolationData);
      PyObject *t_AbstractTimeInterpolator$InterpolationData::wrap_Object(const AbstractTimeInterpolator$InterpolationData& object, PyTypeObject *p0)
      {
        PyObject *obj = t_AbstractTimeInterpolator$InterpolationData::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_AbstractTimeInterpolator$InterpolationData *self = (t_AbstractTimeInterpolator$InterpolationData *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_AbstractTimeInterpolator$InterpolationData::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_AbstractTimeInterpolator$InterpolationData::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_AbstractTimeInterpolator$InterpolationData *self = (t_AbstractTimeInterpolator$InterpolationData *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_AbstractTimeInterpolator$InterpolationData::install(PyObject *module)
      {
        installType(&PY_TYPE(AbstractTimeInterpolator$InterpolationData), &PY_TYPE_DEF(AbstractTimeInterpolator$InterpolationData), module, "AbstractTimeInterpolator$InterpolationData", 0);
      }

      void t_AbstractTimeInterpolator$InterpolationData::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractTimeInterpolator$InterpolationData), "class_", make_descriptor(AbstractTimeInterpolator$InterpolationData::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractTimeInterpolator$InterpolationData), "wrapfn_", make_descriptor(t_AbstractTimeInterpolator$InterpolationData::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractTimeInterpolator$InterpolationData), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_AbstractTimeInterpolator$InterpolationData_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, AbstractTimeInterpolator$InterpolationData::initializeClass, 1)))
          return NULL;
        return t_AbstractTimeInterpolator$InterpolationData::wrap_Object(AbstractTimeInterpolator$InterpolationData(((t_AbstractTimeInterpolator$InterpolationData *) arg)->object.this$));
      }
      static PyObject *t_AbstractTimeInterpolator$InterpolationData_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, AbstractTimeInterpolator$InterpolationData::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_AbstractTimeInterpolator$InterpolationData_of_(t_AbstractTimeInterpolator$InterpolationData *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static PyObject *t_AbstractTimeInterpolator$InterpolationData_getCachedSamples(t_AbstractTimeInterpolator$InterpolationData *self)
      {
        ::org::orekit::utils::ImmutableTimeStampedCache result((jobject) NULL);
        OBJ_CALL(result = self->object.getCachedSamples());
        return ::org::orekit::utils::t_ImmutableTimeStampedCache::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_AbstractTimeInterpolator$InterpolationData_getInterpolationDate(t_AbstractTimeInterpolator$InterpolationData *self)
      {
        ::org::orekit::time::AbsoluteDate result((jobject) NULL);
        OBJ_CALL(result = self->object.getInterpolationDate());
        return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
      }

      static PyObject *t_AbstractTimeInterpolator$InterpolationData_getNeighborList(t_AbstractTimeInterpolator$InterpolationData *self)
      {
        ::java::util::List result((jobject) NULL);
        OBJ_CALL(result = self->object.getNeighborList());
        return ::java::util::t_List::wrap_Object(result, self->parameters[0]);
      }
      static PyObject *t_AbstractTimeInterpolator$InterpolationData_get__parameters_(t_AbstractTimeInterpolator$InterpolationData *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }

      static PyObject *t_AbstractTimeInterpolator$InterpolationData_get__cachedSamples(t_AbstractTimeInterpolator$InterpolationData *self, void *data)
      {
        ::org::orekit::utils::ImmutableTimeStampedCache value((jobject) NULL);
        OBJ_CALL(value = self->object.getCachedSamples());
        return ::org::orekit::utils::t_ImmutableTimeStampedCache::wrap_Object(value);
      }

      static PyObject *t_AbstractTimeInterpolator$InterpolationData_get__interpolationDate(t_AbstractTimeInterpolator$InterpolationData *self, void *data)
      {
        ::org::orekit::time::AbsoluteDate value((jobject) NULL);
        OBJ_CALL(value = self->object.getInterpolationDate());
        return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
      }

      static PyObject *t_AbstractTimeInterpolator$InterpolationData_get__neighborList(t_AbstractTimeInterpolator$InterpolationData *self, void *data)
      {
        ::java::util::List value((jobject) NULL);
        OBJ_CALL(value = self->object.getNeighborList());
        return ::java::util::t_List::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/ndm/odm/ocm/OcmSatelliteEphemeris.h"
#include "java/util/List.h"
#include "org/orekit/utils/TimeStampedPVCoordinates.h"
#include "java/lang/Class.h"
#include "org/orekit/files/general/EphemerisFile$SatelliteEphemeris.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/String.h"
#include "org/orekit/files/ccsds/ndm/odm/ocm/TrajectoryStateHistory.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace odm {
            namespace ocm {

              ::java::lang::Class *OcmSatelliteEphemeris::class$ = NULL;
              jmethodID *OcmSatelliteEphemeris::mids$ = NULL;
              bool OcmSatelliteEphemeris::live$ = false;

              jclass OcmSatelliteEphemeris::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/odm/ocm/OcmSatelliteEphemeris");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_init$_f1fb3e257db4eb3d] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;DLjava/util/List;)V");
                  mids$[mid_getId_1c1fa1e935d6cdcf] = env->getMethodID(cls, "getId", "()Ljava/lang/String;");
                  mids$[mid_getMu_b74f83833fdad017] = env->getMethodID(cls, "getMu", "()D");
                  mids$[mid_getSegments_e62d3bb06d56d7e3] = env->getMethodID(cls, "getSegments", "()Ljava/util/List;");
                  mids$[mid_getStart_c325492395d89b24] = env->getMethodID(cls, "getStart", "()Lorg/orekit/time/AbsoluteDate;");
                  mids$[mid_getStop_c325492395d89b24] = env->getMethodID(cls, "getStop", "()Lorg/orekit/time/AbsoluteDate;");

                  class$ = new ::java::lang::Class(cls);
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              OcmSatelliteEphemeris::OcmSatelliteEphemeris(const ::java::lang::String & a0, jdouble a1, const ::java::util::List & a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_f1fb3e257db4eb3d, a0.this$, a1, a2.this$)) {}

              ::java::lang::String OcmSatelliteEphemeris::getId() const
              {
                return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getId_1c1fa1e935d6cdcf]));
              }

              jdouble OcmSatelliteEphemeris::getMu() const
              {
                return env->callDoubleMethod(this$, mids$[mid_getMu_b74f83833fdad017]);
              }

              ::java::util::List OcmSatelliteEphemeris::getSegments() const
              {
                return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getSegments_e62d3bb06d56d7e3]));
              }

              ::org::orekit::time::AbsoluteDate OcmSatelliteEphemeris::getStart() const
              {
                return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getStart_c325492395d89b24]));
              }

              ::org::orekit::time::AbsoluteDate OcmSatelliteEphemeris::getStop() const
              {
                return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getStop_c325492395d89b24]));
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
            namespace ocm {
              static PyObject *t_OcmSatelliteEphemeris_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_OcmSatelliteEphemeris_instance_(PyTypeObject *type, PyObject *arg);
              static int t_OcmSatelliteEphemeris_init_(t_OcmSatelliteEphemeris *self, PyObject *args, PyObject *kwds);
              static PyObject *t_OcmSatelliteEphemeris_getId(t_OcmSatelliteEphemeris *self);
              static PyObject *t_OcmSatelliteEphemeris_getMu(t_OcmSatelliteEphemeris *self);
              static PyObject *t_OcmSatelliteEphemeris_getSegments(t_OcmSatelliteEphemeris *self);
              static PyObject *t_OcmSatelliteEphemeris_getStart(t_OcmSatelliteEphemeris *self);
              static PyObject *t_OcmSatelliteEphemeris_getStop(t_OcmSatelliteEphemeris *self);
              static PyObject *t_OcmSatelliteEphemeris_get__id(t_OcmSatelliteEphemeris *self, void *data);
              static PyObject *t_OcmSatelliteEphemeris_get__mu(t_OcmSatelliteEphemeris *self, void *data);
              static PyObject *t_OcmSatelliteEphemeris_get__segments(t_OcmSatelliteEphemeris *self, void *data);
              static PyObject *t_OcmSatelliteEphemeris_get__start(t_OcmSatelliteEphemeris *self, void *data);
              static PyObject *t_OcmSatelliteEphemeris_get__stop(t_OcmSatelliteEphemeris *self, void *data);
              static PyGetSetDef t_OcmSatelliteEphemeris__fields_[] = {
                DECLARE_GET_FIELD(t_OcmSatelliteEphemeris, id),
                DECLARE_GET_FIELD(t_OcmSatelliteEphemeris, mu),
                DECLARE_GET_FIELD(t_OcmSatelliteEphemeris, segments),
                DECLARE_GET_FIELD(t_OcmSatelliteEphemeris, start),
                DECLARE_GET_FIELD(t_OcmSatelliteEphemeris, stop),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_OcmSatelliteEphemeris__methods_[] = {
                DECLARE_METHOD(t_OcmSatelliteEphemeris, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_OcmSatelliteEphemeris, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_OcmSatelliteEphemeris, getId, METH_NOARGS),
                DECLARE_METHOD(t_OcmSatelliteEphemeris, getMu, METH_NOARGS),
                DECLARE_METHOD(t_OcmSatelliteEphemeris, getSegments, METH_NOARGS),
                DECLARE_METHOD(t_OcmSatelliteEphemeris, getStart, METH_NOARGS),
                DECLARE_METHOD(t_OcmSatelliteEphemeris, getStop, METH_NOARGS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(OcmSatelliteEphemeris)[] = {
                { Py_tp_methods, t_OcmSatelliteEphemeris__methods_ },
                { Py_tp_init, (void *) t_OcmSatelliteEphemeris_init_ },
                { Py_tp_getset, t_OcmSatelliteEphemeris__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(OcmSatelliteEphemeris)[] = {
                &PY_TYPE_DEF(::java::lang::Object),
                NULL
              };

              DEFINE_TYPE(OcmSatelliteEphemeris, t_OcmSatelliteEphemeris, OcmSatelliteEphemeris);

              void t_OcmSatelliteEphemeris::install(PyObject *module)
              {
                installType(&PY_TYPE(OcmSatelliteEphemeris), &PY_TYPE_DEF(OcmSatelliteEphemeris), module, "OcmSatelliteEphemeris", 0);
              }

              void t_OcmSatelliteEphemeris::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(OcmSatelliteEphemeris), "class_", make_descriptor(OcmSatelliteEphemeris::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OcmSatelliteEphemeris), "wrapfn_", make_descriptor(t_OcmSatelliteEphemeris::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OcmSatelliteEphemeris), "boxfn_", make_descriptor(boxObject));
              }

              static PyObject *t_OcmSatelliteEphemeris_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, OcmSatelliteEphemeris::initializeClass, 1)))
                  return NULL;
                return t_OcmSatelliteEphemeris::wrap_Object(OcmSatelliteEphemeris(((t_OcmSatelliteEphemeris *) arg)->object.this$));
              }
              static PyObject *t_OcmSatelliteEphemeris_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, OcmSatelliteEphemeris::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static int t_OcmSatelliteEphemeris_init_(t_OcmSatelliteEphemeris *self, PyObject *args, PyObject *kwds)
              {
                ::java::lang::String a0((jobject) NULL);
                jdouble a1;
                ::java::util::List a2((jobject) NULL);
                PyTypeObject **p2;
                OcmSatelliteEphemeris object((jobject) NULL);

                if (!parseArgs(args, "sDK", ::java::util::List::initializeClass, &a0, &a1, &a2, &p2, ::java::util::t_List::parameters_))
                {
                  INT_CALL(object = OcmSatelliteEphemeris(a0, a1, a2));
                  self->object = object;
                }
                else
                {
                  PyErr_SetArgsError((PyObject *) self, "__init__", args);
                  return -1;
                }

                return 0;
              }

              static PyObject *t_OcmSatelliteEphemeris_getId(t_OcmSatelliteEphemeris *self)
              {
                ::java::lang::String result((jobject) NULL);
                OBJ_CALL(result = self->object.getId());
                return j2p(result);
              }

              static PyObject *t_OcmSatelliteEphemeris_getMu(t_OcmSatelliteEphemeris *self)
              {
                jdouble result;
                OBJ_CALL(result = self->object.getMu());
                return PyFloat_FromDouble((double) result);
              }

              static PyObject *t_OcmSatelliteEphemeris_getSegments(t_OcmSatelliteEphemeris *self)
              {
                ::java::util::List result((jobject) NULL);
                OBJ_CALL(result = self->object.getSegments());
                return ::java::util::t_List::wrap_Object(result, ::org::orekit::files::ccsds::ndm::odm::ocm::PY_TYPE(TrajectoryStateHistory));
              }

              static PyObject *t_OcmSatelliteEphemeris_getStart(t_OcmSatelliteEphemeris *self)
              {
                ::org::orekit::time::AbsoluteDate result((jobject) NULL);
                OBJ_CALL(result = self->object.getStart());
                return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
              }

              static PyObject *t_OcmSatelliteEphemeris_getStop(t_OcmSatelliteEphemeris *self)
              {
                ::org::orekit::time::AbsoluteDate result((jobject) NULL);
                OBJ_CALL(result = self->object.getStop());
                return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
              }

              static PyObject *t_OcmSatelliteEphemeris_get__id(t_OcmSatelliteEphemeris *self, void *data)
              {
                ::java::lang::String value((jobject) NULL);
                OBJ_CALL(value = self->object.getId());
                return j2p(value);
              }

              static PyObject *t_OcmSatelliteEphemeris_get__mu(t_OcmSatelliteEphemeris *self, void *data)
              {
                jdouble value;
                OBJ_CALL(value = self->object.getMu());
                return PyFloat_FromDouble((double) value);
              }

              static PyObject *t_OcmSatelliteEphemeris_get__segments(t_OcmSatelliteEphemeris *self, void *data)
              {
                ::java::util::List value((jobject) NULL);
                OBJ_CALL(value = self->object.getSegments());
                return ::java::util::t_List::wrap_Object(value);
              }

              static PyObject *t_OcmSatelliteEphemeris_get__start(t_OcmSatelliteEphemeris *self, void *data)
              {
                ::org::orekit::time::AbsoluteDate value((jobject) NULL);
                OBJ_CALL(value = self->object.getStart());
                return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
              }

              static PyObject *t_OcmSatelliteEphemeris_get__stop(t_OcmSatelliteEphemeris *self, void *data)
              {
                ::org::orekit::time::AbsoluteDate value((jobject) NULL);
                OBJ_CALL(value = self->object.getStop());
                return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
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
#include "org/orekit/utils/PVCoordinates.h"
#include "org/orekit/utils/FieldPVCoordinates.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "org/hipparchus/analysis/differentiation/UnivariateDerivative1.h"
#include "java/io/Serializable.h"
#include "org/hipparchus/util/Blendable.h"
#include "org/hipparchus/analysis/differentiation/UnivariateDerivative2.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldVector3D.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "org/hipparchus/analysis/differentiation/DerivativeStructure.h"
#include "java/lang/Class.h"
#include "org/orekit/time/TimeShiftable.h"
#include "java/lang/String.h"
#include "org/orekit/utils/PVCoordinates.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace utils {

      ::java::lang::Class *PVCoordinates::class$ = NULL;
      jmethodID *PVCoordinates::mids$ = NULL;
      bool PVCoordinates::live$ = false;
      PVCoordinates *PVCoordinates::ZERO = NULL;

      jclass PVCoordinates::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/utils/PVCoordinates");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_a1fa5dae97ea5ed2] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_init$_c9e829dd925c6618] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;)V");
          mids$[mid_init$_1844f891addbac57] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)V");
          mids$[mid_init$_b651b5ef96594ce8] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)V");
          mids$[mid_init$_0773768711c29aaf] = env->getMethodID(cls, "<init>", "(Lorg/orekit/utils/PVCoordinates;Lorg/orekit/utils/PVCoordinates;)V");
          mids$[mid_init$_3e5c7ece8fe50647] = env->getMethodID(cls, "<init>", "(DLorg/orekit/utils/PVCoordinates;)V");
          mids$[mid_init$_861a083234734422] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)V");
          mids$[mid_init$_4f2f4e9b469da4d6] = env->getMethodID(cls, "<init>", "(DLorg/orekit/utils/PVCoordinates;DLorg/orekit/utils/PVCoordinates;)V");
          mids$[mid_init$_3504eb0f25931ec1] = env->getMethodID(cls, "<init>", "(DLorg/orekit/utils/PVCoordinates;DLorg/orekit/utils/PVCoordinates;DLorg/orekit/utils/PVCoordinates;)V");
          mids$[mid_init$_be9a0aa1438157c0] = env->getMethodID(cls, "<init>", "(DLorg/orekit/utils/PVCoordinates;DLorg/orekit/utils/PVCoordinates;DLorg/orekit/utils/PVCoordinates;DLorg/orekit/utils/PVCoordinates;)V");
          mids$[mid_blendArithmeticallyWith_13fe4b7b671cdfde] = env->getMethodID(cls, "blendArithmeticallyWith", "(Lorg/orekit/utils/PVCoordinates;D)Lorg/orekit/utils/PVCoordinates;");
          mids$[mid_crossProduct_0179475057507e12] = env->getStaticMethodID(cls, "crossProduct", "(Lorg/orekit/utils/PVCoordinates;Lorg/orekit/utils/PVCoordinates;)Lorg/orekit/utils/PVCoordinates;");
          mids$[mid_estimateVelocity_21c804d1eea56b9e] = env->getStaticMethodID(cls, "estimateVelocity", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;D)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
          mids$[mid_getAcceleration_8b724f8b4fdad1a2] = env->getMethodID(cls, "getAcceleration", "()Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
          mids$[mid_getAngularVelocity_8b724f8b4fdad1a2] = env->getMethodID(cls, "getAngularVelocity", "()Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
          mids$[mid_getMomentum_8b724f8b4fdad1a2] = env->getMethodID(cls, "getMomentum", "()Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
          mids$[mid_getPosition_8b724f8b4fdad1a2] = env->getMethodID(cls, "getPosition", "()Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
          mids$[mid_getVelocity_8b724f8b4fdad1a2] = env->getMethodID(cls, "getVelocity", "()Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
          mids$[mid_negate_180fb117720acb76] = env->getMethodID(cls, "negate", "()Lorg/orekit/utils/PVCoordinates;");
          mids$[mid_normalize_180fb117720acb76] = env->getMethodID(cls, "normalize", "()Lorg/orekit/utils/PVCoordinates;");
          mids$[mid_positionShiftedBy_498f52cd8e5a7072] = env->getMethodID(cls, "positionShiftedBy", "(D)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
          mids$[mid_shiftedBy_07c38118aecc9309] = env->getMethodID(cls, "shiftedBy", "(D)Lorg/orekit/utils/PVCoordinates;");
          mids$[mid_toDerivativeStructurePV_2d4908cd9204fb9d] = env->getMethodID(cls, "toDerivativeStructurePV", "(I)Lorg/orekit/utils/FieldPVCoordinates;");
          mids$[mid_toDerivativeStructureVector_87f39fdae6ed156b] = env->getMethodID(cls, "toDerivativeStructureVector", "(I)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
          mids$[mid_toString_1c1fa1e935d6cdcf] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");
          mids$[mid_toUnivariateDerivative1PV_3bf1e58d8bf42589] = env->getMethodID(cls, "toUnivariateDerivative1PV", "()Lorg/orekit/utils/FieldPVCoordinates;");
          mids$[mid_toUnivariateDerivative1Vector_ff5ac73a7b43eddd] = env->getMethodID(cls, "toUnivariateDerivative1Vector", "()Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
          mids$[mid_toUnivariateDerivative2PV_3bf1e58d8bf42589] = env->getMethodID(cls, "toUnivariateDerivative2PV", "()Lorg/orekit/utils/FieldPVCoordinates;");
          mids$[mid_toUnivariateDerivative2Vector_ff5ac73a7b43eddd] = env->getMethodID(cls, "toUnivariateDerivative2Vector", "()Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");

          class$ = new ::java::lang::Class(cls);
          cls = (jclass) class$->this$;

          ZERO = new PVCoordinates(env->getStaticObjectField(cls, "ZERO", "Lorg/orekit/utils/PVCoordinates;"));
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      PVCoordinates::PVCoordinates() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_a1fa5dae97ea5ed2)) {}

      PVCoordinates::PVCoordinates(const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_c9e829dd925c6618, a0.this$)) {}

      PVCoordinates::PVCoordinates(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_1844f891addbac57, a0.this$)) {}

      PVCoordinates::PVCoordinates(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_b651b5ef96594ce8, a0.this$, a1.this$)) {}

      PVCoordinates::PVCoordinates(const PVCoordinates & a0, const PVCoordinates & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0773768711c29aaf, a0.this$, a1.this$)) {}

      PVCoordinates::PVCoordinates(jdouble a0, const PVCoordinates & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_3e5c7ece8fe50647, a0, a1.this$)) {}

      PVCoordinates::PVCoordinates(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a1, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_861a083234734422, a0.this$, a1.this$, a2.this$)) {}

      PVCoordinates::PVCoordinates(jdouble a0, const PVCoordinates & a1, jdouble a2, const PVCoordinates & a3) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_4f2f4e9b469da4d6, a0, a1.this$, a2, a3.this$)) {}

      PVCoordinates::PVCoordinates(jdouble a0, const PVCoordinates & a1, jdouble a2, const PVCoordinates & a3, jdouble a4, const PVCoordinates & a5) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_3504eb0f25931ec1, a0, a1.this$, a2, a3.this$, a4, a5.this$)) {}

      PVCoordinates::PVCoordinates(jdouble a0, const PVCoordinates & a1, jdouble a2, const PVCoordinates & a3, jdouble a4, const PVCoordinates & a5, jdouble a6, const PVCoordinates & a7) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_be9a0aa1438157c0, a0, a1.this$, a2, a3.this$, a4, a5.this$, a6, a7.this$)) {}

      PVCoordinates PVCoordinates::blendArithmeticallyWith(const PVCoordinates & a0, jdouble a1) const
      {
        return PVCoordinates(env->callObjectMethod(this$, mids$[mid_blendArithmeticallyWith_13fe4b7b671cdfde], a0.this$, a1));
      }

      PVCoordinates PVCoordinates::crossProduct(const PVCoordinates & a0, const PVCoordinates & a1)
      {
        jclass cls = env->getClass(initializeClass);
        return PVCoordinates(env->callStaticObjectMethod(cls, mids$[mid_crossProduct_0179475057507e12], a0.this$, a1.this$));
      }

      ::org::hipparchus::geometry::euclidean::threed::Vector3D PVCoordinates::estimateVelocity(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a1, jdouble a2)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callStaticObjectMethod(cls, mids$[mid_estimateVelocity_21c804d1eea56b9e], a0.this$, a1.this$, a2));
      }

      ::org::hipparchus::geometry::euclidean::threed::Vector3D PVCoordinates::getAcceleration() const
      {
        return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getAcceleration_8b724f8b4fdad1a2]));
      }

      ::org::hipparchus::geometry::euclidean::threed::Vector3D PVCoordinates::getAngularVelocity() const
      {
        return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getAngularVelocity_8b724f8b4fdad1a2]));
      }

      ::org::hipparchus::geometry::euclidean::threed::Vector3D PVCoordinates::getMomentum() const
      {
        return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getMomentum_8b724f8b4fdad1a2]));
      }

      ::org::hipparchus::geometry::euclidean::threed::Vector3D PVCoordinates::getPosition() const
      {
        return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getPosition_8b724f8b4fdad1a2]));
      }

      ::org::hipparchus::geometry::euclidean::threed::Vector3D PVCoordinates::getVelocity() const
      {
        return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getVelocity_8b724f8b4fdad1a2]));
      }

      PVCoordinates PVCoordinates::negate() const
      {
        return PVCoordinates(env->callObjectMethod(this$, mids$[mid_negate_180fb117720acb76]));
      }

      PVCoordinates PVCoordinates::normalize() const
      {
        return PVCoordinates(env->callObjectMethod(this$, mids$[mid_normalize_180fb117720acb76]));
      }

      ::org::hipparchus::geometry::euclidean::threed::Vector3D PVCoordinates::positionShiftedBy(jdouble a0) const
      {
        return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_positionShiftedBy_498f52cd8e5a7072], a0));
      }

      PVCoordinates PVCoordinates::shiftedBy(jdouble a0) const
      {
        return PVCoordinates(env->callObjectMethod(this$, mids$[mid_shiftedBy_07c38118aecc9309], a0));
      }

      ::org::orekit::utils::FieldPVCoordinates PVCoordinates::toDerivativeStructurePV(jint a0) const
      {
        return ::org::orekit::utils::FieldPVCoordinates(env->callObjectMethod(this$, mids$[mid_toDerivativeStructurePV_2d4908cd9204fb9d], a0));
      }

      ::org::hipparchus::geometry::euclidean::threed::FieldVector3D PVCoordinates::toDerivativeStructureVector(jint a0) const
      {
        return ::org::hipparchus::geometry::euclidean::threed::FieldVector3D(env->callObjectMethod(this$, mids$[mid_toDerivativeStructureVector_87f39fdae6ed156b], a0));
      }

      ::java::lang::String PVCoordinates::toString() const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_1c1fa1e935d6cdcf]));
      }

      ::org::orekit::utils::FieldPVCoordinates PVCoordinates::toUnivariateDerivative1PV() const
      {
        return ::org::orekit::utils::FieldPVCoordinates(env->callObjectMethod(this$, mids$[mid_toUnivariateDerivative1PV_3bf1e58d8bf42589]));
      }

      ::org::hipparchus::geometry::euclidean::threed::FieldVector3D PVCoordinates::toUnivariateDerivative1Vector() const
      {
        return ::org::hipparchus::geometry::euclidean::threed::FieldVector3D(env->callObjectMethod(this$, mids$[mid_toUnivariateDerivative1Vector_ff5ac73a7b43eddd]));
      }

      ::org::orekit::utils::FieldPVCoordinates PVCoordinates::toUnivariateDerivative2PV() const
      {
        return ::org::orekit::utils::FieldPVCoordinates(env->callObjectMethod(this$, mids$[mid_toUnivariateDerivative2PV_3bf1e58d8bf42589]));
      }

      ::org::hipparchus::geometry::euclidean::threed::FieldVector3D PVCoordinates::toUnivariateDerivative2Vector() const
      {
        return ::org::hipparchus::geometry::euclidean::threed::FieldVector3D(env->callObjectMethod(this$, mids$[mid_toUnivariateDerivative2Vector_ff5ac73a7b43eddd]));
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
      static PyObject *t_PVCoordinates_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_PVCoordinates_instance_(PyTypeObject *type, PyObject *arg);
      static int t_PVCoordinates_init_(t_PVCoordinates *self, PyObject *args, PyObject *kwds);
      static PyObject *t_PVCoordinates_blendArithmeticallyWith(t_PVCoordinates *self, PyObject *args);
      static PyObject *t_PVCoordinates_crossProduct(PyTypeObject *type, PyObject *args);
      static PyObject *t_PVCoordinates_estimateVelocity(PyTypeObject *type, PyObject *args);
      static PyObject *t_PVCoordinates_getAcceleration(t_PVCoordinates *self);
      static PyObject *t_PVCoordinates_getAngularVelocity(t_PVCoordinates *self);
      static PyObject *t_PVCoordinates_getMomentum(t_PVCoordinates *self);
      static PyObject *t_PVCoordinates_getPosition(t_PVCoordinates *self);
      static PyObject *t_PVCoordinates_getVelocity(t_PVCoordinates *self);
      static PyObject *t_PVCoordinates_negate(t_PVCoordinates *self);
      static PyObject *t_PVCoordinates_normalize(t_PVCoordinates *self);
      static PyObject *t_PVCoordinates_positionShiftedBy(t_PVCoordinates *self, PyObject *arg);
      static PyObject *t_PVCoordinates_shiftedBy(t_PVCoordinates *self, PyObject *arg);
      static PyObject *t_PVCoordinates_toDerivativeStructurePV(t_PVCoordinates *self, PyObject *arg);
      static PyObject *t_PVCoordinates_toDerivativeStructureVector(t_PVCoordinates *self, PyObject *arg);
      static PyObject *t_PVCoordinates_toString(t_PVCoordinates *self, PyObject *args);
      static PyObject *t_PVCoordinates_toUnivariateDerivative1PV(t_PVCoordinates *self);
      static PyObject *t_PVCoordinates_toUnivariateDerivative1Vector(t_PVCoordinates *self);
      static PyObject *t_PVCoordinates_toUnivariateDerivative2PV(t_PVCoordinates *self);
      static PyObject *t_PVCoordinates_toUnivariateDerivative2Vector(t_PVCoordinates *self);
      static PyObject *t_PVCoordinates_get__acceleration(t_PVCoordinates *self, void *data);
      static PyObject *t_PVCoordinates_get__angularVelocity(t_PVCoordinates *self, void *data);
      static PyObject *t_PVCoordinates_get__momentum(t_PVCoordinates *self, void *data);
      static PyObject *t_PVCoordinates_get__position(t_PVCoordinates *self, void *data);
      static PyObject *t_PVCoordinates_get__velocity(t_PVCoordinates *self, void *data);
      static PyGetSetDef t_PVCoordinates__fields_[] = {
        DECLARE_GET_FIELD(t_PVCoordinates, acceleration),
        DECLARE_GET_FIELD(t_PVCoordinates, angularVelocity),
        DECLARE_GET_FIELD(t_PVCoordinates, momentum),
        DECLARE_GET_FIELD(t_PVCoordinates, position),
        DECLARE_GET_FIELD(t_PVCoordinates, velocity),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_PVCoordinates__methods_[] = {
        DECLARE_METHOD(t_PVCoordinates, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PVCoordinates, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PVCoordinates, blendArithmeticallyWith, METH_VARARGS),
        DECLARE_METHOD(t_PVCoordinates, crossProduct, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_PVCoordinates, estimateVelocity, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_PVCoordinates, getAcceleration, METH_NOARGS),
        DECLARE_METHOD(t_PVCoordinates, getAngularVelocity, METH_NOARGS),
        DECLARE_METHOD(t_PVCoordinates, getMomentum, METH_NOARGS),
        DECLARE_METHOD(t_PVCoordinates, getPosition, METH_NOARGS),
        DECLARE_METHOD(t_PVCoordinates, getVelocity, METH_NOARGS),
        DECLARE_METHOD(t_PVCoordinates, negate, METH_NOARGS),
        DECLARE_METHOD(t_PVCoordinates, normalize, METH_NOARGS),
        DECLARE_METHOD(t_PVCoordinates, positionShiftedBy, METH_O),
        DECLARE_METHOD(t_PVCoordinates, shiftedBy, METH_O),
        DECLARE_METHOD(t_PVCoordinates, toDerivativeStructurePV, METH_O),
        DECLARE_METHOD(t_PVCoordinates, toDerivativeStructureVector, METH_O),
        DECLARE_METHOD(t_PVCoordinates, toString, METH_VARARGS),
        DECLARE_METHOD(t_PVCoordinates, toUnivariateDerivative1PV, METH_NOARGS),
        DECLARE_METHOD(t_PVCoordinates, toUnivariateDerivative1Vector, METH_NOARGS),
        DECLARE_METHOD(t_PVCoordinates, toUnivariateDerivative2PV, METH_NOARGS),
        DECLARE_METHOD(t_PVCoordinates, toUnivariateDerivative2Vector, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(PVCoordinates)[] = {
        { Py_tp_methods, t_PVCoordinates__methods_ },
        { Py_tp_init, (void *) t_PVCoordinates_init_ },
        { Py_tp_getset, t_PVCoordinates__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(PVCoordinates)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(PVCoordinates, t_PVCoordinates, PVCoordinates);

      void t_PVCoordinates::install(PyObject *module)
      {
        installType(&PY_TYPE(PVCoordinates), &PY_TYPE_DEF(PVCoordinates), module, "PVCoordinates", 0);
      }

      void t_PVCoordinates::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(PVCoordinates), "class_", make_descriptor(PVCoordinates::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PVCoordinates), "wrapfn_", make_descriptor(t_PVCoordinates::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PVCoordinates), "boxfn_", make_descriptor(boxObject));
        env->getClass(PVCoordinates::initializeClass);
        PyObject_SetAttrString((PyObject *) PY_TYPE(PVCoordinates), "ZERO", make_descriptor(t_PVCoordinates::wrap_Object(*PVCoordinates::ZERO)));
      }

      static PyObject *t_PVCoordinates_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, PVCoordinates::initializeClass, 1)))
          return NULL;
        return t_PVCoordinates::wrap_Object(PVCoordinates(((t_PVCoordinates *) arg)->object.this$));
      }
      static PyObject *t_PVCoordinates_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, PVCoordinates::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_PVCoordinates_init_(t_PVCoordinates *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 0:
          {
            PVCoordinates object((jobject) NULL);

            INT_CALL(object = PVCoordinates());
            self->object = object;
            break;
          }
         case 1:
          {
            ::org::hipparchus::geometry::euclidean::threed::FieldVector3D a0((jobject) NULL);
            PyTypeObject **p0;
            PVCoordinates object((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::initializeClass, &a0, &p0, ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::parameters_))
            {
              INT_CALL(object = PVCoordinates(a0));
              self->object = object;
              break;
            }
          }
          {
            ::org::hipparchus::geometry::euclidean::threed::Vector3D a0((jobject) NULL);
            PVCoordinates object((jobject) NULL);

            if (!parseArgs(args, "k", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0))
            {
              INT_CALL(object = PVCoordinates(a0));
              self->object = object;
              break;
            }
          }
          goto err;
         case 2:
          {
            ::org::hipparchus::geometry::euclidean::threed::Vector3D a0((jobject) NULL);
            ::org::hipparchus::geometry::euclidean::threed::Vector3D a1((jobject) NULL);
            PVCoordinates object((jobject) NULL);

            if (!parseArgs(args, "kk", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0, &a1))
            {
              INT_CALL(object = PVCoordinates(a0, a1));
              self->object = object;
              break;
            }
          }
          {
            PVCoordinates a0((jobject) NULL);
            PVCoordinates a1((jobject) NULL);
            PVCoordinates object((jobject) NULL);

            if (!parseArgs(args, "kk", PVCoordinates::initializeClass, PVCoordinates::initializeClass, &a0, &a1))
            {
              INT_CALL(object = PVCoordinates(a0, a1));
              self->object = object;
              break;
            }
          }
          {
            jdouble a0;
            PVCoordinates a1((jobject) NULL);
            PVCoordinates object((jobject) NULL);

            if (!parseArgs(args, "Dk", PVCoordinates::initializeClass, &a0, &a1))
            {
              INT_CALL(object = PVCoordinates(a0, a1));
              self->object = object;
              break;
            }
          }
          goto err;
         case 3:
          {
            ::org::hipparchus::geometry::euclidean::threed::Vector3D a0((jobject) NULL);
            ::org::hipparchus::geometry::euclidean::threed::Vector3D a1((jobject) NULL);
            ::org::hipparchus::geometry::euclidean::threed::Vector3D a2((jobject) NULL);
            PVCoordinates object((jobject) NULL);

            if (!parseArgs(args, "kkk", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0, &a1, &a2))
            {
              INT_CALL(object = PVCoordinates(a0, a1, a2));
              self->object = object;
              break;
            }
          }
          goto err;
         case 4:
          {
            jdouble a0;
            PVCoordinates a1((jobject) NULL);
            jdouble a2;
            PVCoordinates a3((jobject) NULL);
            PVCoordinates object((jobject) NULL);

            if (!parseArgs(args, "DkDk", PVCoordinates::initializeClass, PVCoordinates::initializeClass, &a0, &a1, &a2, &a3))
            {
              INT_CALL(object = PVCoordinates(a0, a1, a2, a3));
              self->object = object;
              break;
            }
          }
          goto err;
         case 6:
          {
            jdouble a0;
            PVCoordinates a1((jobject) NULL);
            jdouble a2;
            PVCoordinates a3((jobject) NULL);
            jdouble a4;
            PVCoordinates a5((jobject) NULL);
            PVCoordinates object((jobject) NULL);

            if (!parseArgs(args, "DkDkDk", PVCoordinates::initializeClass, PVCoordinates::initializeClass, PVCoordinates::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5))
            {
              INT_CALL(object = PVCoordinates(a0, a1, a2, a3, a4, a5));
              self->object = object;
              break;
            }
          }
          goto err;
         case 8:
          {
            jdouble a0;
            PVCoordinates a1((jobject) NULL);
            jdouble a2;
            PVCoordinates a3((jobject) NULL);
            jdouble a4;
            PVCoordinates a5((jobject) NULL);
            jdouble a6;
            PVCoordinates a7((jobject) NULL);
            PVCoordinates object((jobject) NULL);

            if (!parseArgs(args, "DkDkDkDk", PVCoordinates::initializeClass, PVCoordinates::initializeClass, PVCoordinates::initializeClass, PVCoordinates::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5, &a6, &a7))
            {
              INT_CALL(object = PVCoordinates(a0, a1, a2, a3, a4, a5, a6, a7));
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

      static PyObject *t_PVCoordinates_blendArithmeticallyWith(t_PVCoordinates *self, PyObject *args)
      {
        PVCoordinates a0((jobject) NULL);
        jdouble a1;
        PVCoordinates result((jobject) NULL);

        if (!parseArgs(args, "kD", PVCoordinates::initializeClass, &a0, &a1))
        {
          OBJ_CALL(result = self->object.blendArithmeticallyWith(a0, a1));
          return t_PVCoordinates::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "blendArithmeticallyWith", args);
        return NULL;
      }

      static PyObject *t_PVCoordinates_crossProduct(PyTypeObject *type, PyObject *args)
      {
        PVCoordinates a0((jobject) NULL);
        PVCoordinates a1((jobject) NULL);
        PVCoordinates result((jobject) NULL);

        if (!parseArgs(args, "kk", PVCoordinates::initializeClass, PVCoordinates::initializeClass, &a0, &a1))
        {
          OBJ_CALL(result = ::org::orekit::utils::PVCoordinates::crossProduct(a0, a1));
          return t_PVCoordinates::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "crossProduct", args);
        return NULL;
      }

      static PyObject *t_PVCoordinates_estimateVelocity(PyTypeObject *type, PyObject *args)
      {
        ::org::hipparchus::geometry::euclidean::threed::Vector3D a0((jobject) NULL);
        ::org::hipparchus::geometry::euclidean::threed::Vector3D a1((jobject) NULL);
        jdouble a2;
        ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);

        if (!parseArgs(args, "kkD", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0, &a1, &a2))
        {
          OBJ_CALL(result = ::org::orekit::utils::PVCoordinates::estimateVelocity(a0, a1, a2));
          return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "estimateVelocity", args);
        return NULL;
      }

      static PyObject *t_PVCoordinates_getAcceleration(t_PVCoordinates *self)
      {
        ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);
        OBJ_CALL(result = self->object.getAcceleration());
        return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
      }

      static PyObject *t_PVCoordinates_getAngularVelocity(t_PVCoordinates *self)
      {
        ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);
        OBJ_CALL(result = self->object.getAngularVelocity());
        return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
      }

      static PyObject *t_PVCoordinates_getMomentum(t_PVCoordinates *self)
      {
        ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);
        OBJ_CALL(result = self->object.getMomentum());
        return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
      }

      static PyObject *t_PVCoordinates_getPosition(t_PVCoordinates *self)
      {
        ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);
        OBJ_CALL(result = self->object.getPosition());
        return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
      }

      static PyObject *t_PVCoordinates_getVelocity(t_PVCoordinates *self)
      {
        ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);
        OBJ_CALL(result = self->object.getVelocity());
        return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
      }

      static PyObject *t_PVCoordinates_negate(t_PVCoordinates *self)
      {
        PVCoordinates result((jobject) NULL);
        OBJ_CALL(result = self->object.negate());
        return t_PVCoordinates::wrap_Object(result);
      }

      static PyObject *t_PVCoordinates_normalize(t_PVCoordinates *self)
      {
        PVCoordinates result((jobject) NULL);
        OBJ_CALL(result = self->object.normalize());
        return t_PVCoordinates::wrap_Object(result);
      }

      static PyObject *t_PVCoordinates_positionShiftedBy(t_PVCoordinates *self, PyObject *arg)
      {
        jdouble a0;
        ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);

        if (!parseArg(arg, "D", &a0))
        {
          OBJ_CALL(result = self->object.positionShiftedBy(a0));
          return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "positionShiftedBy", arg);
        return NULL;
      }

      static PyObject *t_PVCoordinates_shiftedBy(t_PVCoordinates *self, PyObject *arg)
      {
        jdouble a0;
        PVCoordinates result((jobject) NULL);

        if (!parseArg(arg, "D", &a0))
        {
          OBJ_CALL(result = self->object.shiftedBy(a0));
          return t_PVCoordinates::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "shiftedBy", arg);
        return NULL;
      }

      static PyObject *t_PVCoordinates_toDerivativeStructurePV(t_PVCoordinates *self, PyObject *arg)
      {
        jint a0;
        ::org::orekit::utils::FieldPVCoordinates result((jobject) NULL);

        if (!parseArg(arg, "I", &a0))
        {
          OBJ_CALL(result = self->object.toDerivativeStructurePV(a0));
          return ::org::orekit::utils::t_FieldPVCoordinates::wrap_Object(result, ::org::hipparchus::analysis::differentiation::PY_TYPE(DerivativeStructure));
        }

        PyErr_SetArgsError((PyObject *) self, "toDerivativeStructurePV", arg);
        return NULL;
      }

      static PyObject *t_PVCoordinates_toDerivativeStructureVector(t_PVCoordinates *self, PyObject *arg)
      {
        jint a0;
        ::org::hipparchus::geometry::euclidean::threed::FieldVector3D result((jobject) NULL);

        if (!parseArg(arg, "I", &a0))
        {
          OBJ_CALL(result = self->object.toDerivativeStructureVector(a0));
          return ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(result, ::org::hipparchus::analysis::differentiation::PY_TYPE(DerivativeStructure));
        }

        PyErr_SetArgsError((PyObject *) self, "toDerivativeStructureVector", arg);
        return NULL;
      }

      static PyObject *t_PVCoordinates_toString(t_PVCoordinates *self, PyObject *args)
      {
        ::java::lang::String result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.toString());
          return j2p(result);
        }

        return callSuper(PY_TYPE(PVCoordinates), (PyObject *) self, "toString", args, 2);
      }

      static PyObject *t_PVCoordinates_toUnivariateDerivative1PV(t_PVCoordinates *self)
      {
        ::org::orekit::utils::FieldPVCoordinates result((jobject) NULL);
        OBJ_CALL(result = self->object.toUnivariateDerivative1PV());
        return ::org::orekit::utils::t_FieldPVCoordinates::wrap_Object(result, ::org::hipparchus::analysis::differentiation::PY_TYPE(UnivariateDerivative1));
      }

      static PyObject *t_PVCoordinates_toUnivariateDerivative1Vector(t_PVCoordinates *self)
      {
        ::org::hipparchus::geometry::euclidean::threed::FieldVector3D result((jobject) NULL);
        OBJ_CALL(result = self->object.toUnivariateDerivative1Vector());
        return ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(result, ::org::hipparchus::analysis::differentiation::PY_TYPE(UnivariateDerivative1));
      }

      static PyObject *t_PVCoordinates_toUnivariateDerivative2PV(t_PVCoordinates *self)
      {
        ::org::orekit::utils::FieldPVCoordinates result((jobject) NULL);
        OBJ_CALL(result = self->object.toUnivariateDerivative2PV());
        return ::org::orekit::utils::t_FieldPVCoordinates::wrap_Object(result, ::org::hipparchus::analysis::differentiation::PY_TYPE(UnivariateDerivative2));
      }

      static PyObject *t_PVCoordinates_toUnivariateDerivative2Vector(t_PVCoordinates *self)
      {
        ::org::hipparchus::geometry::euclidean::threed::FieldVector3D result((jobject) NULL);
        OBJ_CALL(result = self->object.toUnivariateDerivative2Vector());
        return ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(result, ::org::hipparchus::analysis::differentiation::PY_TYPE(UnivariateDerivative2));
      }

      static PyObject *t_PVCoordinates_get__acceleration(t_PVCoordinates *self, void *data)
      {
        ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
        OBJ_CALL(value = self->object.getAcceleration());
        return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(value);
      }

      static PyObject *t_PVCoordinates_get__angularVelocity(t_PVCoordinates *self, void *data)
      {
        ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
        OBJ_CALL(value = self->object.getAngularVelocity());
        return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(value);
      }

      static PyObject *t_PVCoordinates_get__momentum(t_PVCoordinates *self, void *data)
      {
        ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
        OBJ_CALL(value = self->object.getMomentum());
        return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(value);
      }

      static PyObject *t_PVCoordinates_get__position(t_PVCoordinates *self, void *data)
      {
        ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
        OBJ_CALL(value = self->object.getPosition());
        return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(value);
      }

      static PyObject *t_PVCoordinates_get__velocity(t_PVCoordinates *self, void *data)
      {
        ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
        OBJ_CALL(value = self->object.getVelocity());
        return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/optim/nonlinear/vector/leastsquares/LeastSquaresAdapter.h"
#include "org/hipparchus/util/Incrementor.h"
#include "org/hipparchus/optim/ConvergenceChecker.h"
#include "org/hipparchus/linear/RealVector.h"
#include "org/hipparchus/optim/nonlinear/vector/leastsquares/LeastSquaresProblem$Evaluation.h"
#include "java/lang/Class.h"
#include "org/hipparchus/optim/nonlinear/vector/leastsquares/LeastSquaresProblem.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace optim {
      namespace nonlinear {
        namespace vector {
          namespace leastsquares {

            ::java::lang::Class *LeastSquaresAdapter::class$ = NULL;
            jmethodID *LeastSquaresAdapter::mids$ = NULL;
            bool LeastSquaresAdapter::live$ = false;

            jclass LeastSquaresAdapter::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/hipparchus/optim/nonlinear/vector/leastsquares/LeastSquaresAdapter");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_d28f702b40eb4b04] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/optim/nonlinear/vector/leastsquares/LeastSquaresProblem;)V");
                mids$[mid_evaluate_44eae3a43792b738] = env->getMethodID(cls, "evaluate", "(Lorg/hipparchus/linear/RealVector;)Lorg/hipparchus/optim/nonlinear/vector/leastsquares/LeastSquaresProblem$Evaluation;");
                mids$[mid_getConvergenceChecker_cae0efb5080a73b8] = env->getMethodID(cls, "getConvergenceChecker", "()Lorg/hipparchus/optim/ConvergenceChecker;");
                mids$[mid_getEvaluationCounter_3c86b06a86576583] = env->getMethodID(cls, "getEvaluationCounter", "()Lorg/hipparchus/util/Incrementor;");
                mids$[mid_getIterationCounter_3c86b06a86576583] = env->getMethodID(cls, "getIterationCounter", "()Lorg/hipparchus/util/Incrementor;");
                mids$[mid_getObservationSize_55546ef6a647f39b] = env->getMethodID(cls, "getObservationSize", "()I");
                mids$[mid_getParameterSize_55546ef6a647f39b] = env->getMethodID(cls, "getParameterSize", "()I");
                mids$[mid_getStart_3a10cc75bd070d84] = env->getMethodID(cls, "getStart", "()Lorg/hipparchus/linear/RealVector;");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            LeastSquaresAdapter::LeastSquaresAdapter(const ::org::hipparchus::optim::nonlinear::vector::leastsquares::LeastSquaresProblem & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_d28f702b40eb4b04, a0.this$)) {}

            ::org::hipparchus::optim::nonlinear::vector::leastsquares::LeastSquaresProblem$Evaluation LeastSquaresAdapter::evaluate(const ::org::hipparchus::linear::RealVector & a0) const
            {
              return ::org::hipparchus::optim::nonlinear::vector::leastsquares::LeastSquaresProblem$Evaluation(env->callObjectMethod(this$, mids$[mid_evaluate_44eae3a43792b738], a0.this$));
            }

            ::org::hipparchus::optim::ConvergenceChecker LeastSquaresAdapter::getConvergenceChecker() const
            {
              return ::org::hipparchus::optim::ConvergenceChecker(env->callObjectMethod(this$, mids$[mid_getConvergenceChecker_cae0efb5080a73b8]));
            }

            ::org::hipparchus::util::Incrementor LeastSquaresAdapter::getEvaluationCounter() const
            {
              return ::org::hipparchus::util::Incrementor(env->callObjectMethod(this$, mids$[mid_getEvaluationCounter_3c86b06a86576583]));
            }

            ::org::hipparchus::util::Incrementor LeastSquaresAdapter::getIterationCounter() const
            {
              return ::org::hipparchus::util::Incrementor(env->callObjectMethod(this$, mids$[mid_getIterationCounter_3c86b06a86576583]));
            }

            jint LeastSquaresAdapter::getObservationSize() const
            {
              return env->callIntMethod(this$, mids$[mid_getObservationSize_55546ef6a647f39b]);
            }

            jint LeastSquaresAdapter::getParameterSize() const
            {
              return env->callIntMethod(this$, mids$[mid_getParameterSize_55546ef6a647f39b]);
            }

            ::org::hipparchus::linear::RealVector LeastSquaresAdapter::getStart() const
            {
              return ::org::hipparchus::linear::RealVector(env->callObjectMethod(this$, mids$[mid_getStart_3a10cc75bd070d84]));
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
        namespace vector {
          namespace leastsquares {
            static PyObject *t_LeastSquaresAdapter_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_LeastSquaresAdapter_instance_(PyTypeObject *type, PyObject *arg);
            static int t_LeastSquaresAdapter_init_(t_LeastSquaresAdapter *self, PyObject *args, PyObject *kwds);
            static PyObject *t_LeastSquaresAdapter_evaluate(t_LeastSquaresAdapter *self, PyObject *arg);
            static PyObject *t_LeastSquaresAdapter_getConvergenceChecker(t_LeastSquaresAdapter *self);
            static PyObject *t_LeastSquaresAdapter_getEvaluationCounter(t_LeastSquaresAdapter *self);
            static PyObject *t_LeastSquaresAdapter_getIterationCounter(t_LeastSquaresAdapter *self);
            static PyObject *t_LeastSquaresAdapter_getObservationSize(t_LeastSquaresAdapter *self);
            static PyObject *t_LeastSquaresAdapter_getParameterSize(t_LeastSquaresAdapter *self);
            static PyObject *t_LeastSquaresAdapter_getStart(t_LeastSquaresAdapter *self);
            static PyObject *t_LeastSquaresAdapter_get__convergenceChecker(t_LeastSquaresAdapter *self, void *data);
            static PyObject *t_LeastSquaresAdapter_get__evaluationCounter(t_LeastSquaresAdapter *self, void *data);
            static PyObject *t_LeastSquaresAdapter_get__iterationCounter(t_LeastSquaresAdapter *self, void *data);
            static PyObject *t_LeastSquaresAdapter_get__observationSize(t_LeastSquaresAdapter *self, void *data);
            static PyObject *t_LeastSquaresAdapter_get__parameterSize(t_LeastSquaresAdapter *self, void *data);
            static PyObject *t_LeastSquaresAdapter_get__start(t_LeastSquaresAdapter *self, void *data);
            static PyGetSetDef t_LeastSquaresAdapter__fields_[] = {
              DECLARE_GET_FIELD(t_LeastSquaresAdapter, convergenceChecker),
              DECLARE_GET_FIELD(t_LeastSquaresAdapter, evaluationCounter),
              DECLARE_GET_FIELD(t_LeastSquaresAdapter, iterationCounter),
              DECLARE_GET_FIELD(t_LeastSquaresAdapter, observationSize),
              DECLARE_GET_FIELD(t_LeastSquaresAdapter, parameterSize),
              DECLARE_GET_FIELD(t_LeastSquaresAdapter, start),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_LeastSquaresAdapter__methods_[] = {
              DECLARE_METHOD(t_LeastSquaresAdapter, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_LeastSquaresAdapter, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_LeastSquaresAdapter, evaluate, METH_O),
              DECLARE_METHOD(t_LeastSquaresAdapter, getConvergenceChecker, METH_NOARGS),
              DECLARE_METHOD(t_LeastSquaresAdapter, getEvaluationCounter, METH_NOARGS),
              DECLARE_METHOD(t_LeastSquaresAdapter, getIterationCounter, METH_NOARGS),
              DECLARE_METHOD(t_LeastSquaresAdapter, getObservationSize, METH_NOARGS),
              DECLARE_METHOD(t_LeastSquaresAdapter, getParameterSize, METH_NOARGS),
              DECLARE_METHOD(t_LeastSquaresAdapter, getStart, METH_NOARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(LeastSquaresAdapter)[] = {
              { Py_tp_methods, t_LeastSquaresAdapter__methods_ },
              { Py_tp_init, (void *) t_LeastSquaresAdapter_init_ },
              { Py_tp_getset, t_LeastSquaresAdapter__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(LeastSquaresAdapter)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(LeastSquaresAdapter, t_LeastSquaresAdapter, LeastSquaresAdapter);

            void t_LeastSquaresAdapter::install(PyObject *module)
            {
              installType(&PY_TYPE(LeastSquaresAdapter), &PY_TYPE_DEF(LeastSquaresAdapter), module, "LeastSquaresAdapter", 0);
            }

            void t_LeastSquaresAdapter::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(LeastSquaresAdapter), "class_", make_descriptor(LeastSquaresAdapter::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(LeastSquaresAdapter), "wrapfn_", make_descriptor(t_LeastSquaresAdapter::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(LeastSquaresAdapter), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_LeastSquaresAdapter_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, LeastSquaresAdapter::initializeClass, 1)))
                return NULL;
              return t_LeastSquaresAdapter::wrap_Object(LeastSquaresAdapter(((t_LeastSquaresAdapter *) arg)->object.this$));
            }
            static PyObject *t_LeastSquaresAdapter_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, LeastSquaresAdapter::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static int t_LeastSquaresAdapter_init_(t_LeastSquaresAdapter *self, PyObject *args, PyObject *kwds)
            {
              ::org::hipparchus::optim::nonlinear::vector::leastsquares::LeastSquaresProblem a0((jobject) NULL);
              LeastSquaresAdapter object((jobject) NULL);

              if (!parseArgs(args, "k", ::org::hipparchus::optim::nonlinear::vector::leastsquares::LeastSquaresProblem::initializeClass, &a0))
              {
                INT_CALL(object = LeastSquaresAdapter(a0));
                self->object = object;
              }
              else
              {
                PyErr_SetArgsError((PyObject *) self, "__init__", args);
                return -1;
              }

              return 0;
            }

            static PyObject *t_LeastSquaresAdapter_evaluate(t_LeastSquaresAdapter *self, PyObject *arg)
            {
              ::org::hipparchus::linear::RealVector a0((jobject) NULL);
              ::org::hipparchus::optim::nonlinear::vector::leastsquares::LeastSquaresProblem$Evaluation result((jobject) NULL);

              if (!parseArg(arg, "k", ::org::hipparchus::linear::RealVector::initializeClass, &a0))
              {
                OBJ_CALL(result = self->object.evaluate(a0));
                return ::org::hipparchus::optim::nonlinear::vector::leastsquares::t_LeastSquaresProblem$Evaluation::wrap_Object(result);
              }

              PyErr_SetArgsError((PyObject *) self, "evaluate", arg);
              return NULL;
            }

            static PyObject *t_LeastSquaresAdapter_getConvergenceChecker(t_LeastSquaresAdapter *self)
            {
              ::org::hipparchus::optim::ConvergenceChecker result((jobject) NULL);
              OBJ_CALL(result = self->object.getConvergenceChecker());
              return ::org::hipparchus::optim::t_ConvergenceChecker::wrap_Object(result, ::org::hipparchus::optim::nonlinear::vector::leastsquares::PY_TYPE(LeastSquaresProblem$Evaluation));
            }

            static PyObject *t_LeastSquaresAdapter_getEvaluationCounter(t_LeastSquaresAdapter *self)
            {
              ::org::hipparchus::util::Incrementor result((jobject) NULL);
              OBJ_CALL(result = self->object.getEvaluationCounter());
              return ::org::hipparchus::util::t_Incrementor::wrap_Object(result);
            }

            static PyObject *t_LeastSquaresAdapter_getIterationCounter(t_LeastSquaresAdapter *self)
            {
              ::org::hipparchus::util::Incrementor result((jobject) NULL);
              OBJ_CALL(result = self->object.getIterationCounter());
              return ::org::hipparchus::util::t_Incrementor::wrap_Object(result);
            }

            static PyObject *t_LeastSquaresAdapter_getObservationSize(t_LeastSquaresAdapter *self)
            {
              jint result;
              OBJ_CALL(result = self->object.getObservationSize());
              return PyLong_FromLong((long) result);
            }

            static PyObject *t_LeastSquaresAdapter_getParameterSize(t_LeastSquaresAdapter *self)
            {
              jint result;
              OBJ_CALL(result = self->object.getParameterSize());
              return PyLong_FromLong((long) result);
            }

            static PyObject *t_LeastSquaresAdapter_getStart(t_LeastSquaresAdapter *self)
            {
              ::org::hipparchus::linear::RealVector result((jobject) NULL);
              OBJ_CALL(result = self->object.getStart());
              return ::org::hipparchus::linear::t_RealVector::wrap_Object(result);
            }

            static PyObject *t_LeastSquaresAdapter_get__convergenceChecker(t_LeastSquaresAdapter *self, void *data)
            {
              ::org::hipparchus::optim::ConvergenceChecker value((jobject) NULL);
              OBJ_CALL(value = self->object.getConvergenceChecker());
              return ::org::hipparchus::optim::t_ConvergenceChecker::wrap_Object(value);
            }

            static PyObject *t_LeastSquaresAdapter_get__evaluationCounter(t_LeastSquaresAdapter *self, void *data)
            {
              ::org::hipparchus::util::Incrementor value((jobject) NULL);
              OBJ_CALL(value = self->object.getEvaluationCounter());
              return ::org::hipparchus::util::t_Incrementor::wrap_Object(value);
            }

            static PyObject *t_LeastSquaresAdapter_get__iterationCounter(t_LeastSquaresAdapter *self, void *data)
            {
              ::org::hipparchus::util::Incrementor value((jobject) NULL);
              OBJ_CALL(value = self->object.getIterationCounter());
              return ::org::hipparchus::util::t_Incrementor::wrap_Object(value);
            }

            static PyObject *t_LeastSquaresAdapter_get__observationSize(t_LeastSquaresAdapter *self, void *data)
            {
              jint value;
              OBJ_CALL(value = self->object.getObservationSize());
              return PyLong_FromLong((long) value);
            }

            static PyObject *t_LeastSquaresAdapter_get__parameterSize(t_LeastSquaresAdapter *self, void *data)
            {
              jint value;
              OBJ_CALL(value = self->object.getParameterSize());
              return PyLong_FromLong((long) value);
            }

            static PyObject *t_LeastSquaresAdapter_get__start(t_LeastSquaresAdapter *self, void *data)
            {
              ::org::hipparchus::linear::RealVector value((jobject) NULL);
              OBJ_CALL(value = self->object.getStart());
              return ::org::hipparchus::linear::t_RealVector::wrap_Object(value);
            }
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/utils/generation/KvnGenerator.h"
#include "java/util/List.h"
#include "org/orekit/utils/units/Unit.h"
#include "org/orekit/files/ccsds/utils/FileFormat.h"
#include "java/io/IOException.h"
#include "java/lang/Appendable.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace utils {
          namespace generation {

            ::java::lang::Class *KvnGenerator::class$ = NULL;
            jmethodID *KvnGenerator::mids$ = NULL;
            bool KvnGenerator::live$ = false;

            jclass KvnGenerator::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/utils/generation/KvnGenerator");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_19a2dc80984a50af] = env->getMethodID(cls, "<init>", "(Ljava/lang/Appendable;ILjava/lang/String;DI)V");
                mids$[mid_endMessage_734b91ac30d5f9b4] = env->getMethodID(cls, "endMessage", "(Ljava/lang/String;)V");
                mids$[mid_enterSection_734b91ac30d5f9b4] = env->getMethodID(cls, "enterSection", "(Ljava/lang/String;)V");
                mids$[mid_exitSection_1c1fa1e935d6cdcf] = env->getMethodID(cls, "exitSection", "()Ljava/lang/String;");
                mids$[mid_getFormat_e4c64bde02ca34c3] = env->getMethodID(cls, "getFormat", "()Lorg/orekit/files/ccsds/utils/FileFormat;");
                mids$[mid_startMessage_03ff9b80a9f63d81] = env->getMethodID(cls, "startMessage", "(Ljava/lang/String;Ljava/lang/String;D)V");
                mids$[mid_writeComments_0e7c3032c7c93ed3] = env->getMethodID(cls, "writeComments", "(Ljava/util/List;)V");
                mids$[mid_writeEntry_bae21004607fffc6] = env->getMethodID(cls, "writeEntry", "(Ljava/lang/String;Ljava/lang/String;Lorg/orekit/utils/units/Unit;Z)V");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            KvnGenerator::KvnGenerator(const ::java::lang::Appendable & a0, jint a1, const ::java::lang::String & a2, jdouble a3, jint a4) : ::org::orekit::files::ccsds::utils::generation::AbstractGenerator(env->newObject(initializeClass, &mids$, mid_init$_19a2dc80984a50af, a0.this$, a1, a2.this$, a3, a4)) {}

            void KvnGenerator::endMessage(const ::java::lang::String & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_endMessage_734b91ac30d5f9b4], a0.this$);
            }

            void KvnGenerator::enterSection(const ::java::lang::String & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_enterSection_734b91ac30d5f9b4], a0.this$);
            }

            ::java::lang::String KvnGenerator::exitSection() const
            {
              return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_exitSection_1c1fa1e935d6cdcf]));
            }

            ::org::orekit::files::ccsds::utils::FileFormat KvnGenerator::getFormat() const
            {
              return ::org::orekit::files::ccsds::utils::FileFormat(env->callObjectMethod(this$, mids$[mid_getFormat_e4c64bde02ca34c3]));
            }

            void KvnGenerator::startMessage(const ::java::lang::String & a0, const ::java::lang::String & a1, jdouble a2) const
            {
              env->callVoidMethod(this$, mids$[mid_startMessage_03ff9b80a9f63d81], a0.this$, a1.this$, a2);
            }

            void KvnGenerator::writeComments(const ::java::util::List & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_writeComments_0e7c3032c7c93ed3], a0.this$);
            }

            void KvnGenerator::writeEntry(const ::java::lang::String & a0, const ::java::lang::String & a1, const ::org::orekit::utils::units::Unit & a2, jboolean a3) const
            {
              env->callVoidMethod(this$, mids$[mid_writeEntry_bae21004607fffc6], a0.this$, a1.this$, a2.this$, a3);
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
        namespace utils {
          namespace generation {
            static PyObject *t_KvnGenerator_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_KvnGenerator_instance_(PyTypeObject *type, PyObject *arg);
            static int t_KvnGenerator_init_(t_KvnGenerator *self, PyObject *args, PyObject *kwds);
            static PyObject *t_KvnGenerator_endMessage(t_KvnGenerator *self, PyObject *args);
            static PyObject *t_KvnGenerator_enterSection(t_KvnGenerator *self, PyObject *args);
            static PyObject *t_KvnGenerator_exitSection(t_KvnGenerator *self, PyObject *args);
            static PyObject *t_KvnGenerator_getFormat(t_KvnGenerator *self, PyObject *args);
            static PyObject *t_KvnGenerator_startMessage(t_KvnGenerator *self, PyObject *args);
            static PyObject *t_KvnGenerator_writeComments(t_KvnGenerator *self, PyObject *args);
            static PyObject *t_KvnGenerator_writeEntry(t_KvnGenerator *self, PyObject *args);
            static PyObject *t_KvnGenerator_get__format(t_KvnGenerator *self, void *data);
            static PyGetSetDef t_KvnGenerator__fields_[] = {
              DECLARE_GET_FIELD(t_KvnGenerator, format),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_KvnGenerator__methods_[] = {
              DECLARE_METHOD(t_KvnGenerator, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_KvnGenerator, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_KvnGenerator, endMessage, METH_VARARGS),
              DECLARE_METHOD(t_KvnGenerator, enterSection, METH_VARARGS),
              DECLARE_METHOD(t_KvnGenerator, exitSection, METH_VARARGS),
              DECLARE_METHOD(t_KvnGenerator, getFormat, METH_VARARGS),
              DECLARE_METHOD(t_KvnGenerator, startMessage, METH_VARARGS),
              DECLARE_METHOD(t_KvnGenerator, writeComments, METH_VARARGS),
              DECLARE_METHOD(t_KvnGenerator, writeEntry, METH_VARARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(KvnGenerator)[] = {
              { Py_tp_methods, t_KvnGenerator__methods_ },
              { Py_tp_init, (void *) t_KvnGenerator_init_ },
              { Py_tp_getset, t_KvnGenerator__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(KvnGenerator)[] = {
              &PY_TYPE_DEF(::org::orekit::files::ccsds::utils::generation::AbstractGenerator),
              NULL
            };

            DEFINE_TYPE(KvnGenerator, t_KvnGenerator, KvnGenerator);

            void t_KvnGenerator::install(PyObject *module)
            {
              installType(&PY_TYPE(KvnGenerator), &PY_TYPE_DEF(KvnGenerator), module, "KvnGenerator", 0);
            }

            void t_KvnGenerator::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(KvnGenerator), "class_", make_descriptor(KvnGenerator::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(KvnGenerator), "wrapfn_", make_descriptor(t_KvnGenerator::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(KvnGenerator), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_KvnGenerator_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, KvnGenerator::initializeClass, 1)))
                return NULL;
              return t_KvnGenerator::wrap_Object(KvnGenerator(((t_KvnGenerator *) arg)->object.this$));
            }
            static PyObject *t_KvnGenerator_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, KvnGenerator::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static int t_KvnGenerator_init_(t_KvnGenerator *self, PyObject *args, PyObject *kwds)
            {
              ::java::lang::Appendable a0((jobject) NULL);
              jint a1;
              ::java::lang::String a2((jobject) NULL);
              jdouble a3;
              jint a4;
              KvnGenerator object((jobject) NULL);

              if (!parseArgs(args, "kIsDI", ::java::lang::Appendable::initializeClass, &a0, &a1, &a2, &a3, &a4))
              {
                INT_CALL(object = KvnGenerator(a0, a1, a2, a3, a4));
                self->object = object;
              }
              else
              {
                PyErr_SetArgsError((PyObject *) self, "__init__", args);
                return -1;
              }

              return 0;
            }

            static PyObject *t_KvnGenerator_endMessage(t_KvnGenerator *self, PyObject *args)
            {
              ::java::lang::String a0((jobject) NULL);

              if (!parseArgs(args, "s", &a0))
              {
                OBJ_CALL(self->object.endMessage(a0));
                Py_RETURN_NONE;
              }

              return callSuper(PY_TYPE(KvnGenerator), (PyObject *) self, "endMessage", args, 2);
            }

            static PyObject *t_KvnGenerator_enterSection(t_KvnGenerator *self, PyObject *args)
            {
              ::java::lang::String a0((jobject) NULL);

              if (!parseArgs(args, "s", &a0))
              {
                OBJ_CALL(self->object.enterSection(a0));
                Py_RETURN_NONE;
              }

              return callSuper(PY_TYPE(KvnGenerator), (PyObject *) self, "enterSection", args, 2);
            }

            static PyObject *t_KvnGenerator_exitSection(t_KvnGenerator *self, PyObject *args)
            {
              ::java::lang::String result((jobject) NULL);

              if (!parseArgs(args, ""))
              {
                OBJ_CALL(result = self->object.exitSection());
                return j2p(result);
              }

              return callSuper(PY_TYPE(KvnGenerator), (PyObject *) self, "exitSection", args, 2);
            }

            static PyObject *t_KvnGenerator_getFormat(t_KvnGenerator *self, PyObject *args)
            {
              ::org::orekit::files::ccsds::utils::FileFormat result((jobject) NULL);

              if (!parseArgs(args, ""))
              {
                OBJ_CALL(result = self->object.getFormat());
                return ::org::orekit::files::ccsds::utils::t_FileFormat::wrap_Object(result);
              }

              return callSuper(PY_TYPE(KvnGenerator), (PyObject *) self, "getFormat", args, 2);
            }

            static PyObject *t_KvnGenerator_startMessage(t_KvnGenerator *self, PyObject *args)
            {
              ::java::lang::String a0((jobject) NULL);
              ::java::lang::String a1((jobject) NULL);
              jdouble a2;

              if (!parseArgs(args, "ssD", &a0, &a1, &a2))
              {
                OBJ_CALL(self->object.startMessage(a0, a1, a2));
                Py_RETURN_NONE;
              }

              return callSuper(PY_TYPE(KvnGenerator), (PyObject *) self, "startMessage", args, 2);
            }

            static PyObject *t_KvnGenerator_writeComments(t_KvnGenerator *self, PyObject *args)
            {
              ::java::util::List a0((jobject) NULL);
              PyTypeObject **p0;

              if (!parseArgs(args, "K", ::java::util::List::initializeClass, &a0, &p0, ::java::util::t_List::parameters_))
              {
                OBJ_CALL(self->object.writeComments(a0));
                Py_RETURN_NONE;
              }

              return callSuper(PY_TYPE(KvnGenerator), (PyObject *) self, "writeComments", args, 2);
            }

            static PyObject *t_KvnGenerator_writeEntry(t_KvnGenerator *self, PyObject *args)
            {
              ::java::lang::String a0((jobject) NULL);
              ::java::lang::String a1((jobject) NULL);
              ::org::orekit::utils::units::Unit a2((jobject) NULL);
              jboolean a3;

              if (!parseArgs(args, "sskZ", ::org::orekit::utils::units::Unit::initializeClass, &a0, &a1, &a2, &a3))
              {
                OBJ_CALL(self->object.writeEntry(a0, a1, a2, a3));
                Py_RETURN_NONE;
              }

              return callSuper(PY_TYPE(KvnGenerator), (PyObject *) self, "writeEntry", args, 2);
            }

            static PyObject *t_KvnGenerator_get__format(t_KvnGenerator *self, void *data)
            {
              ::org::orekit::files::ccsds::utils::FileFormat value((jobject) NULL);
              OBJ_CALL(value = self->object.getFormat());
              return ::org::orekit::files::ccsds::utils::t_FileFormat::wrap_Object(value);
            }
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/definitions/Units.h"
#include "java/lang/Class.h"
#include "org/orekit/utils/units/Unit.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace definitions {

          ::java::lang::Class *Units::class$ = NULL;
          jmethodID *Units::mids$ = NULL;
          bool Units::live$ = false;
          ::org::orekit::utils::units::Unit *Units::DEG_PER_S = NULL;
          ::org::orekit::utils::units::Unit *Units::DEG_PER_S_1_2 = NULL;
          ::org::orekit::utils::units::Unit *Units::DEG_PER_S_3_2 = NULL;
          ::org::orekit::utils::units::Unit *Units::HECTO_PASCAL = NULL;
          ::org::orekit::utils::units::Unit *Units::HZ_PER_S = NULL;
          ::org::orekit::utils::units::Unit *Units::KG_M2 = NULL;
          ::org::orekit::utils::units::Unit *Units::KM2 = NULL;
          ::org::orekit::utils::units::Unit *Units::KM2_PER_S = NULL;
          ::org::orekit::utils::units::Unit *Units::KM2_PER_S2 = NULL;
          ::org::orekit::utils::units::Unit *Units::KM3_PER_S2 = NULL;
          ::org::orekit::utils::units::Unit *Units::KM_PER_S = NULL;
          ::org::orekit::utils::units::Unit *Units::KM_PER_S2 = NULL;
          ::org::orekit::utils::units::Unit *Units::M2 = NULL;
          ::org::orekit::utils::units::Unit *Units::M2_PER_KG = NULL;
          ::org::orekit::utils::units::Unit *Units::M2_PER_S = NULL;
          ::org::orekit::utils::units::Unit *Units::M2_PER_S2 = NULL;
          ::org::orekit::utils::units::Unit *Units::M2_PER_S3 = NULL;
          ::org::orekit::utils::units::Unit *Units::M2_PER_S4 = NULL;
          ::org::orekit::utils::units::Unit *Units::M3_PER_KG = NULL;
          ::org::orekit::utils::units::Unit *Units::M3_PER_KGS = NULL;
          ::org::orekit::utils::units::Unit *Units::M3_PER_KGS2 = NULL;
          ::org::orekit::utils::units::Unit *Units::M4 = NULL;
          ::org::orekit::utils::units::Unit *Units::M4_PER_KG = NULL;
          ::org::orekit::utils::units::Unit *Units::M4_PER_KG2 = NULL;
          ::org::orekit::utils::units::Unit *Units::M_PER_S = NULL;
          ::org::orekit::utils::units::Unit *Units::M_PER_S2 = NULL;
          ::org::orekit::utils::units::Unit *Units::NANO_TESLA = NULL;
          ::org::orekit::utils::units::Unit *Units::NB_PER_Y = NULL;
          ::org::orekit::utils::units::Unit *Units::N_M = NULL;
          ::org::orekit::utils::units::Unit *Units::N_M_S = NULL;
          ::org::orekit::utils::units::Unit *Units::ONE_PER_ER = NULL;
          ::org::orekit::utils::units::Unit *Units::ONE_PER_S = NULL;
          ::org::orekit::utils::units::Unit *Units::REV_PER_DAY = NULL;
          ::org::orekit::utils::units::Unit *Units::REV_PER_DAY2_SCALED = NULL;
          ::org::orekit::utils::units::Unit *Units::REV_PER_DAY3_SCALED = NULL;
          ::org::orekit::utils::units::Unit *Units::W_PER_KG = NULL;

          jclass Units::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/definitions/Units");

              class$ = new ::java::lang::Class(cls);
              cls = (jclass) class$->this$;

              DEG_PER_S = new ::org::orekit::utils::units::Unit(env->getStaticObjectField(cls, "DEG_PER_S", "Lorg/orekit/utils/units/Unit;"));
              DEG_PER_S_1_2 = new ::org::orekit::utils::units::Unit(env->getStaticObjectField(cls, "DEG_PER_S_1_2", "Lorg/orekit/utils/units/Unit;"));
              DEG_PER_S_3_2 = new ::org::orekit::utils::units::Unit(env->getStaticObjectField(cls, "DEG_PER_S_3_2", "Lorg/orekit/utils/units/Unit;"));
              HECTO_PASCAL = new ::org::orekit::utils::units::Unit(env->getStaticObjectField(cls, "HECTO_PASCAL", "Lorg/orekit/utils/units/Unit;"));
              HZ_PER_S = new ::org::orekit::utils::units::Unit(env->getStaticObjectField(cls, "HZ_PER_S", "Lorg/orekit/utils/units/Unit;"));
              KG_M2 = new ::org::orekit::utils::units::Unit(env->getStaticObjectField(cls, "KG_M2", "Lorg/orekit/utils/units/Unit;"));
              KM2 = new ::org::orekit::utils::units::Unit(env->getStaticObjectField(cls, "KM2", "Lorg/orekit/utils/units/Unit;"));
              KM2_PER_S = new ::org::orekit::utils::units::Unit(env->getStaticObjectField(cls, "KM2_PER_S", "Lorg/orekit/utils/units/Unit;"));
              KM2_PER_S2 = new ::org::orekit::utils::units::Unit(env->getStaticObjectField(cls, "KM2_PER_S2", "Lorg/orekit/utils/units/Unit;"));
              KM3_PER_S2 = new ::org::orekit::utils::units::Unit(env->getStaticObjectField(cls, "KM3_PER_S2", "Lorg/orekit/utils/units/Unit;"));
              KM_PER_S = new ::org::orekit::utils::units::Unit(env->getStaticObjectField(cls, "KM_PER_S", "Lorg/orekit/utils/units/Unit;"));
              KM_PER_S2 = new ::org::orekit::utils::units::Unit(env->getStaticObjectField(cls, "KM_PER_S2", "Lorg/orekit/utils/units/Unit;"));
              M2 = new ::org::orekit::utils::units::Unit(env->getStaticObjectField(cls, "M2", "Lorg/orekit/utils/units/Unit;"));
              M2_PER_KG = new ::org::orekit::utils::units::Unit(env->getStaticObjectField(cls, "M2_PER_KG", "Lorg/orekit/utils/units/Unit;"));
              M2_PER_S = new ::org::orekit::utils::units::Unit(env->getStaticObjectField(cls, "M2_PER_S", "Lorg/orekit/utils/units/Unit;"));
              M2_PER_S2 = new ::org::orekit::utils::units::Unit(env->getStaticObjectField(cls, "M2_PER_S2", "Lorg/orekit/utils/units/Unit;"));
              M2_PER_S3 = new ::org::orekit::utils::units::Unit(env->getStaticObjectField(cls, "M2_PER_S3", "Lorg/orekit/utils/units/Unit;"));
              M2_PER_S4 = new ::org::orekit::utils::units::Unit(env->getStaticObjectField(cls, "M2_PER_S4", "Lorg/orekit/utils/units/Unit;"));
              M3_PER_KG = new ::org::orekit::utils::units::Unit(env->getStaticObjectField(cls, "M3_PER_KG", "Lorg/orekit/utils/units/Unit;"));
              M3_PER_KGS = new ::org::orekit::utils::units::Unit(env->getStaticObjectField(cls, "M3_PER_KGS", "Lorg/orekit/utils/units/Unit;"));
              M3_PER_KGS2 = new ::org::orekit::utils::units::Unit(env->getStaticObjectField(cls, "M3_PER_KGS2", "Lorg/orekit/utils/units/Unit;"));
              M4 = new ::org::orekit::utils::units::Unit(env->getStaticObjectField(cls, "M4", "Lorg/orekit/utils/units/Unit;"));
              M4_PER_KG = new ::org::orekit::utils::units::Unit(env->getStaticObjectField(cls, "M4_PER_KG", "Lorg/orekit/utils/units/Unit;"));
              M4_PER_KG2 = new ::org::orekit::utils::units::Unit(env->getStaticObjectField(cls, "M4_PER_KG2", "Lorg/orekit/utils/units/Unit;"));
              M_PER_S = new ::org::orekit::utils::units::Unit(env->getStaticObjectField(cls, "M_PER_S", "Lorg/orekit/utils/units/Unit;"));
              M_PER_S2 = new ::org::orekit::utils::units::Unit(env->getStaticObjectField(cls, "M_PER_S2", "Lorg/orekit/utils/units/Unit;"));
              NANO_TESLA = new ::org::orekit::utils::units::Unit(env->getStaticObjectField(cls, "NANO_TESLA", "Lorg/orekit/utils/units/Unit;"));
              NB_PER_Y = new ::org::orekit::utils::units::Unit(env->getStaticObjectField(cls, "NB_PER_Y", "Lorg/orekit/utils/units/Unit;"));
              N_M = new ::org::orekit::utils::units::Unit(env->getStaticObjectField(cls, "N_M", "Lorg/orekit/utils/units/Unit;"));
              N_M_S = new ::org::orekit::utils::units::Unit(env->getStaticObjectField(cls, "N_M_S", "Lorg/orekit/utils/units/Unit;"));
              ONE_PER_ER = new ::org::orekit::utils::units::Unit(env->getStaticObjectField(cls, "ONE_PER_ER", "Lorg/orekit/utils/units/Unit;"));
              ONE_PER_S = new ::org::orekit::utils::units::Unit(env->getStaticObjectField(cls, "ONE_PER_S", "Lorg/orekit/utils/units/Unit;"));
              REV_PER_DAY = new ::org::orekit::utils::units::Unit(env->getStaticObjectField(cls, "REV_PER_DAY", "Lorg/orekit/utils/units/Unit;"));
              REV_PER_DAY2_SCALED = new ::org::orekit::utils::units::Unit(env->getStaticObjectField(cls, "REV_PER_DAY2_SCALED", "Lorg/orekit/utils/units/Unit;"));
              REV_PER_DAY3_SCALED = new ::org::orekit::utils::units::Unit(env->getStaticObjectField(cls, "REV_PER_DAY3_SCALED", "Lorg/orekit/utils/units/Unit;"));
              W_PER_KG = new ::org::orekit::utils::units::Unit(env->getStaticObjectField(cls, "W_PER_KG", "Lorg/orekit/utils/units/Unit;"));
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
    namespace files {
      namespace ccsds {
        namespace definitions {
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
            PyObject_SetAttrString((PyObject *) PY_TYPE(Units), "DEG_PER_S", make_descriptor(::org::orekit::utils::units::t_Unit::wrap_Object(*Units::DEG_PER_S)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Units), "DEG_PER_S_1_2", make_descriptor(::org::orekit::utils::units::t_Unit::wrap_Object(*Units::DEG_PER_S_1_2)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Units), "DEG_PER_S_3_2", make_descriptor(::org::orekit::utils::units::t_Unit::wrap_Object(*Units::DEG_PER_S_3_2)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Units), "HECTO_PASCAL", make_descriptor(::org::orekit::utils::units::t_Unit::wrap_Object(*Units::HECTO_PASCAL)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Units), "HZ_PER_S", make_descriptor(::org::orekit::utils::units::t_Unit::wrap_Object(*Units::HZ_PER_S)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Units), "KG_M2", make_descriptor(::org::orekit::utils::units::t_Unit::wrap_Object(*Units::KG_M2)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Units), "KM2", make_descriptor(::org::orekit::utils::units::t_Unit::wrap_Object(*Units::KM2)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Units), "KM2_PER_S", make_descriptor(::org::orekit::utils::units::t_Unit::wrap_Object(*Units::KM2_PER_S)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Units), "KM2_PER_S2", make_descriptor(::org::orekit::utils::units::t_Unit::wrap_Object(*Units::KM2_PER_S2)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Units), "KM3_PER_S2", make_descriptor(::org::orekit::utils::units::t_Unit::wrap_Object(*Units::KM3_PER_S2)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Units), "KM_PER_S", make_descriptor(::org::orekit::utils::units::t_Unit::wrap_Object(*Units::KM_PER_S)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Units), "KM_PER_S2", make_descriptor(::org::orekit::utils::units::t_Unit::wrap_Object(*Units::KM_PER_S2)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Units), "M2", make_descriptor(::org::orekit::utils::units::t_Unit::wrap_Object(*Units::M2)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Units), "M2_PER_KG", make_descriptor(::org::orekit::utils::units::t_Unit::wrap_Object(*Units::M2_PER_KG)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Units), "M2_PER_S", make_descriptor(::org::orekit::utils::units::t_Unit::wrap_Object(*Units::M2_PER_S)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Units), "M2_PER_S2", make_descriptor(::org::orekit::utils::units::t_Unit::wrap_Object(*Units::M2_PER_S2)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Units), "M2_PER_S3", make_descriptor(::org::orekit::utils::units::t_Unit::wrap_Object(*Units::M2_PER_S3)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Units), "M2_PER_S4", make_descriptor(::org::orekit::utils::units::t_Unit::wrap_Object(*Units::M2_PER_S4)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Units), "M3_PER_KG", make_descriptor(::org::orekit::utils::units::t_Unit::wrap_Object(*Units::M3_PER_KG)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Units), "M3_PER_KGS", make_descriptor(::org::orekit::utils::units::t_Unit::wrap_Object(*Units::M3_PER_KGS)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Units), "M3_PER_KGS2", make_descriptor(::org::orekit::utils::units::t_Unit::wrap_Object(*Units::M3_PER_KGS2)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Units), "M4", make_descriptor(::org::orekit::utils::units::t_Unit::wrap_Object(*Units::M4)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Units), "M4_PER_KG", make_descriptor(::org::orekit::utils::units::t_Unit::wrap_Object(*Units::M4_PER_KG)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Units), "M4_PER_KG2", make_descriptor(::org::orekit::utils::units::t_Unit::wrap_Object(*Units::M4_PER_KG2)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Units), "M_PER_S", make_descriptor(::org::orekit::utils::units::t_Unit::wrap_Object(*Units::M_PER_S)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Units), "M_PER_S2", make_descriptor(::org::orekit::utils::units::t_Unit::wrap_Object(*Units::M_PER_S2)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Units), "NANO_TESLA", make_descriptor(::org::orekit::utils::units::t_Unit::wrap_Object(*Units::NANO_TESLA)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Units), "NB_PER_Y", make_descriptor(::org::orekit::utils::units::t_Unit::wrap_Object(*Units::NB_PER_Y)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Units), "N_M", make_descriptor(::org::orekit::utils::units::t_Unit::wrap_Object(*Units::N_M)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Units), "N_M_S", make_descriptor(::org::orekit::utils::units::t_Unit::wrap_Object(*Units::N_M_S)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Units), "ONE_PER_ER", make_descriptor(::org::orekit::utils::units::t_Unit::wrap_Object(*Units::ONE_PER_ER)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Units), "ONE_PER_S", make_descriptor(::org::orekit::utils::units::t_Unit::wrap_Object(*Units::ONE_PER_S)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Units), "REV_PER_DAY", make_descriptor(::org::orekit::utils::units::t_Unit::wrap_Object(*Units::REV_PER_DAY)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Units), "REV_PER_DAY2_SCALED", make_descriptor(::org::orekit::utils::units::t_Unit::wrap_Object(*Units::REV_PER_DAY2_SCALED)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Units), "REV_PER_DAY3_SCALED", make_descriptor(::org::orekit::utils::units::t_Unit::wrap_Object(*Units::REV_PER_DAY3_SCALED)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Units), "W_PER_KG", make_descriptor(::org::orekit::utils::units::t_Unit::wrap_Object(*Units::W_PER_KG)));
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
#include "org/orekit/propagation/events/FieldAdapterDetector.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/orekit/propagation/events/FieldAdaptableInterval.h"
#include "org/orekit/propagation/events/FieldEventDetector.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "org/orekit/propagation/events/handlers/FieldEventHandler.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace events {

        ::java::lang::Class *FieldAdapterDetector::class$ = NULL;
        jmethodID *FieldAdapterDetector::mids$ = NULL;
        bool FieldAdapterDetector::live$ = false;

        jclass FieldAdapterDetector::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/events/FieldAdapterDetector");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_ca1d91eb6a3ce219] = env->getMethodID(cls, "<init>", "(Lorg/orekit/propagation/events/FieldEventDetector;)V");
            mids$[mid_g_2203631097e94c79] = env->getMethodID(cls, "g", "(Lorg/orekit/propagation/FieldSpacecraftState;)Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_getDetector_e78af9d734a5fbe1] = env->getMethodID(cls, "getDetector", "()Lorg/orekit/propagation/events/FieldEventDetector;");
            mids$[mid_getHandler_3449c57ae1fbceff] = env->getMethodID(cls, "getHandler", "()Lorg/orekit/propagation/events/handlers/FieldEventHandler;");
            mids$[mid_getMaxCheckInterval_d0b60c59a7966d59] = env->getMethodID(cls, "getMaxCheckInterval", "()Lorg/orekit/propagation/events/FieldAdaptableInterval;");
            mids$[mid_getMaxIterationCount_55546ef6a647f39b] = env->getMethodID(cls, "getMaxIterationCount", "()I");
            mids$[mid_getThreshold_81520b552cb3fa26] = env->getMethodID(cls, "getThreshold", "()Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_init_96d019f392abf918] = env->getMethodID(cls, "init", "(Lorg/orekit/propagation/FieldSpacecraftState;Lorg/orekit/time/FieldAbsoluteDate;)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        FieldAdapterDetector::FieldAdapterDetector(const ::org::orekit::propagation::events::FieldEventDetector & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_ca1d91eb6a3ce219, a0.this$)) {}

        ::org::hipparchus::CalculusFieldElement FieldAdapterDetector::g(const ::org::orekit::propagation::FieldSpacecraftState & a0) const
        {
          return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_g_2203631097e94c79], a0.this$));
        }

        ::org::orekit::propagation::events::FieldEventDetector FieldAdapterDetector::getDetector() const
        {
          return ::org::orekit::propagation::events::FieldEventDetector(env->callObjectMethod(this$, mids$[mid_getDetector_e78af9d734a5fbe1]));
        }

        ::org::orekit::propagation::events::handlers::FieldEventHandler FieldAdapterDetector::getHandler() const
        {
          return ::org::orekit::propagation::events::handlers::FieldEventHandler(env->callObjectMethod(this$, mids$[mid_getHandler_3449c57ae1fbceff]));
        }

        ::org::orekit::propagation::events::FieldAdaptableInterval FieldAdapterDetector::getMaxCheckInterval() const
        {
          return ::org::orekit::propagation::events::FieldAdaptableInterval(env->callObjectMethod(this$, mids$[mid_getMaxCheckInterval_d0b60c59a7966d59]));
        }

        jint FieldAdapterDetector::getMaxIterationCount() const
        {
          return env->callIntMethod(this$, mids$[mid_getMaxIterationCount_55546ef6a647f39b]);
        }

        ::org::hipparchus::CalculusFieldElement FieldAdapterDetector::getThreshold() const
        {
          return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getThreshold_81520b552cb3fa26]));
        }

        void FieldAdapterDetector::init(const ::org::orekit::propagation::FieldSpacecraftState & a0, const ::org::orekit::time::FieldAbsoluteDate & a1) const
        {
          env->callVoidMethod(this$, mids$[mid_init_96d019f392abf918], a0.this$, a1.this$);
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
        static PyObject *t_FieldAdapterDetector_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldAdapterDetector_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldAdapterDetector_of_(t_FieldAdapterDetector *self, PyObject *args);
        static int t_FieldAdapterDetector_init_(t_FieldAdapterDetector *self, PyObject *args, PyObject *kwds);
        static PyObject *t_FieldAdapterDetector_g(t_FieldAdapterDetector *self, PyObject *arg);
        static PyObject *t_FieldAdapterDetector_getDetector(t_FieldAdapterDetector *self);
        static PyObject *t_FieldAdapterDetector_getHandler(t_FieldAdapterDetector *self);
        static PyObject *t_FieldAdapterDetector_getMaxCheckInterval(t_FieldAdapterDetector *self);
        static PyObject *t_FieldAdapterDetector_getMaxIterationCount(t_FieldAdapterDetector *self);
        static PyObject *t_FieldAdapterDetector_getThreshold(t_FieldAdapterDetector *self);
        static PyObject *t_FieldAdapterDetector_init(t_FieldAdapterDetector *self, PyObject *args);
        static PyObject *t_FieldAdapterDetector_get__detector(t_FieldAdapterDetector *self, void *data);
        static PyObject *t_FieldAdapterDetector_get__handler(t_FieldAdapterDetector *self, void *data);
        static PyObject *t_FieldAdapterDetector_get__maxCheckInterval(t_FieldAdapterDetector *self, void *data);
        static PyObject *t_FieldAdapterDetector_get__maxIterationCount(t_FieldAdapterDetector *self, void *data);
        static PyObject *t_FieldAdapterDetector_get__threshold(t_FieldAdapterDetector *self, void *data);
        static PyObject *t_FieldAdapterDetector_get__parameters_(t_FieldAdapterDetector *self, void *data);
        static PyGetSetDef t_FieldAdapterDetector__fields_[] = {
          DECLARE_GET_FIELD(t_FieldAdapterDetector, detector),
          DECLARE_GET_FIELD(t_FieldAdapterDetector, handler),
          DECLARE_GET_FIELD(t_FieldAdapterDetector, maxCheckInterval),
          DECLARE_GET_FIELD(t_FieldAdapterDetector, maxIterationCount),
          DECLARE_GET_FIELD(t_FieldAdapterDetector, threshold),
          DECLARE_GET_FIELD(t_FieldAdapterDetector, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_FieldAdapterDetector__methods_[] = {
          DECLARE_METHOD(t_FieldAdapterDetector, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldAdapterDetector, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldAdapterDetector, of_, METH_VARARGS),
          DECLARE_METHOD(t_FieldAdapterDetector, g, METH_O),
          DECLARE_METHOD(t_FieldAdapterDetector, getDetector, METH_NOARGS),
          DECLARE_METHOD(t_FieldAdapterDetector, getHandler, METH_NOARGS),
          DECLARE_METHOD(t_FieldAdapterDetector, getMaxCheckInterval, METH_NOARGS),
          DECLARE_METHOD(t_FieldAdapterDetector, getMaxIterationCount, METH_NOARGS),
          DECLARE_METHOD(t_FieldAdapterDetector, getThreshold, METH_NOARGS),
          DECLARE_METHOD(t_FieldAdapterDetector, init, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(FieldAdapterDetector)[] = {
          { Py_tp_methods, t_FieldAdapterDetector__methods_ },
          { Py_tp_init, (void *) t_FieldAdapterDetector_init_ },
          { Py_tp_getset, t_FieldAdapterDetector__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(FieldAdapterDetector)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(FieldAdapterDetector, t_FieldAdapterDetector, FieldAdapterDetector);
        PyObject *t_FieldAdapterDetector::wrap_Object(const FieldAdapterDetector& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FieldAdapterDetector::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldAdapterDetector *self = (t_FieldAdapterDetector *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_FieldAdapterDetector::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FieldAdapterDetector::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldAdapterDetector *self = (t_FieldAdapterDetector *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_FieldAdapterDetector::install(PyObject *module)
        {
          installType(&PY_TYPE(FieldAdapterDetector), &PY_TYPE_DEF(FieldAdapterDetector), module, "FieldAdapterDetector", 0);
        }

        void t_FieldAdapterDetector::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldAdapterDetector), "class_", make_descriptor(FieldAdapterDetector::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldAdapterDetector), "wrapfn_", make_descriptor(t_FieldAdapterDetector::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldAdapterDetector), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_FieldAdapterDetector_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, FieldAdapterDetector::initializeClass, 1)))
            return NULL;
          return t_FieldAdapterDetector::wrap_Object(FieldAdapterDetector(((t_FieldAdapterDetector *) arg)->object.this$));
        }
        static PyObject *t_FieldAdapterDetector_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, FieldAdapterDetector::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_FieldAdapterDetector_of_(t_FieldAdapterDetector *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_FieldAdapterDetector_init_(t_FieldAdapterDetector *self, PyObject *args, PyObject *kwds)
        {
          ::org::orekit::propagation::events::FieldEventDetector a0((jobject) NULL);
          PyTypeObject **p0;
          FieldAdapterDetector object((jobject) NULL);

          if (!parseArgs(args, "K", ::org::orekit::propagation::events::FieldEventDetector::initializeClass, &a0, &p0, ::org::orekit::propagation::events::t_FieldEventDetector::parameters_))
          {
            INT_CALL(object = FieldAdapterDetector(a0));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_FieldAdapterDetector_g(t_FieldAdapterDetector *self, PyObject *arg)
        {
          ::org::orekit::propagation::FieldSpacecraftState a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

          if (!parseArg(arg, "K", ::org::orekit::propagation::FieldSpacecraftState::initializeClass, &a0, &p0, ::org::orekit::propagation::t_FieldSpacecraftState::parameters_))
          {
            OBJ_CALL(result = self->object.g(a0));
            return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "g", arg);
          return NULL;
        }

        static PyObject *t_FieldAdapterDetector_getDetector(t_FieldAdapterDetector *self)
        {
          ::org::orekit::propagation::events::FieldEventDetector result((jobject) NULL);
          OBJ_CALL(result = self->object.getDetector());
          return ::org::orekit::propagation::events::t_FieldEventDetector::wrap_Object(result, self->parameters[0]);
        }

        static PyObject *t_FieldAdapterDetector_getHandler(t_FieldAdapterDetector *self)
        {
          ::org::orekit::propagation::events::handlers::FieldEventHandler result((jobject) NULL);
          OBJ_CALL(result = self->object.getHandler());
          return ::org::orekit::propagation::events::handlers::t_FieldEventHandler::wrap_Object(result, self->parameters[0]);
        }

        static PyObject *t_FieldAdapterDetector_getMaxCheckInterval(t_FieldAdapterDetector *self)
        {
          ::org::orekit::propagation::events::FieldAdaptableInterval result((jobject) NULL);
          OBJ_CALL(result = self->object.getMaxCheckInterval());
          return ::org::orekit::propagation::events::t_FieldAdaptableInterval::wrap_Object(result, self->parameters[0]);
        }

        static PyObject *t_FieldAdapterDetector_getMaxIterationCount(t_FieldAdapterDetector *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getMaxIterationCount());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_FieldAdapterDetector_getThreshold(t_FieldAdapterDetector *self)
        {
          ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
          OBJ_CALL(result = self->object.getThreshold());
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        static PyObject *t_FieldAdapterDetector_init(t_FieldAdapterDetector *self, PyObject *args)
        {
          ::org::orekit::propagation::FieldSpacecraftState a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::orekit::time::FieldAbsoluteDate a1((jobject) NULL);
          PyTypeObject **p1;

          if (!parseArgs(args, "KK", ::org::orekit::propagation::FieldSpacecraftState::initializeClass, ::org::orekit::time::FieldAbsoluteDate::initializeClass, &a0, &p0, ::org::orekit::propagation::t_FieldSpacecraftState::parameters_, &a1, &p1, ::org::orekit::time::t_FieldAbsoluteDate::parameters_))
          {
            OBJ_CALL(self->object.init(a0, a1));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "init", args);
          return NULL;
        }
        static PyObject *t_FieldAdapterDetector_get__parameters_(t_FieldAdapterDetector *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_FieldAdapterDetector_get__detector(t_FieldAdapterDetector *self, void *data)
        {
          ::org::orekit::propagation::events::FieldEventDetector value((jobject) NULL);
          OBJ_CALL(value = self->object.getDetector());
          return ::org::orekit::propagation::events::t_FieldEventDetector::wrap_Object(value);
        }

        static PyObject *t_FieldAdapterDetector_get__handler(t_FieldAdapterDetector *self, void *data)
        {
          ::org::orekit::propagation::events::handlers::FieldEventHandler value((jobject) NULL);
          OBJ_CALL(value = self->object.getHandler());
          return ::org::orekit::propagation::events::handlers::t_FieldEventHandler::wrap_Object(value);
        }

        static PyObject *t_FieldAdapterDetector_get__maxCheckInterval(t_FieldAdapterDetector *self, void *data)
        {
          ::org::orekit::propagation::events::FieldAdaptableInterval value((jobject) NULL);
          OBJ_CALL(value = self->object.getMaxCheckInterval());
          return ::org::orekit::propagation::events::t_FieldAdaptableInterval::wrap_Object(value);
        }

        static PyObject *t_FieldAdapterDetector_get__maxIterationCount(t_FieldAdapterDetector *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getMaxIterationCount());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_FieldAdapterDetector_get__threshold(t_FieldAdapterDetector *self, void *data)
        {
          ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
          OBJ_CALL(value = self->object.getThreshold());
          return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/PythonFieldPropagator.h"
#include "org/orekit/propagation/FieldPropagator.h"
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
#include "java/lang/String.h"
#include "org/orekit/utils/TimeStampedFieldPVCoordinates.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {

      ::java::lang::Class *PythonFieldPropagator::class$ = NULL;
      jmethodID *PythonFieldPropagator::mids$ = NULL;
      bool PythonFieldPropagator::live$ = false;

      jclass PythonFieldPropagator::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/propagation/PythonFieldPropagator");

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

      PythonFieldPropagator::PythonFieldPropagator() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_a1fa5dae97ea5ed2)) {}

      void PythonFieldPropagator::finalize() const
      {
        env->callVoidMethod(this$, mids$[mid_finalize_a1fa5dae97ea5ed2]);
      }

      jlong PythonFieldPropagator::pythonExtension() const
      {
        return env->callLongMethod(this$, mids$[mid_pythonExtension_6c0ce7e438e5ded4]);
      }

      void PythonFieldPropagator::pythonExtension(jlong a0) const
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
      static PyObject *t_PythonFieldPropagator_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_PythonFieldPropagator_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_PythonFieldPropagator_of_(t_PythonFieldPropagator *self, PyObject *args);
      static int t_PythonFieldPropagator_init_(t_PythonFieldPropagator *self, PyObject *args, PyObject *kwds);
      static PyObject *t_PythonFieldPropagator_finalize(t_PythonFieldPropagator *self);
      static PyObject *t_PythonFieldPropagator_pythonExtension(t_PythonFieldPropagator *self, PyObject *args);
      static void JNICALL t_PythonFieldPropagator_addAdditionalStateProvider0(JNIEnv *jenv, jobject jobj, jobject a0);
      static void JNICALL t_PythonFieldPropagator_addEventDetector1(JNIEnv *jenv, jobject jobj, jobject a0);
      static void JNICALL t_PythonFieldPropagator_clearEventsDetectors2(JNIEnv *jenv, jobject jobj);
      static jobject JNICALL t_PythonFieldPropagator_getAdditionalStateProviders3(JNIEnv *jenv, jobject jobj);
      static jobject JNICALL t_PythonFieldPropagator_getAttitudeProvider4(JNIEnv *jenv, jobject jobj);
      static jobject JNICALL t_PythonFieldPropagator_getEphemerisGenerator5(JNIEnv *jenv, jobject jobj);
      static jobject JNICALL t_PythonFieldPropagator_getEventsDetectors6(JNIEnv *jenv, jobject jobj);
      static jobject JNICALL t_PythonFieldPropagator_getFrame7(JNIEnv *jenv, jobject jobj);
      static jobject JNICALL t_PythonFieldPropagator_getInitialState8(JNIEnv *jenv, jobject jobj);
      static jobject JNICALL t_PythonFieldPropagator_getManagedAdditionalStates9(JNIEnv *jenv, jobject jobj);
      static jobject JNICALL t_PythonFieldPropagator_getMultiplexer10(JNIEnv *jenv, jobject jobj);
      static jobject JNICALL t_PythonFieldPropagator_getPVCoordinates11(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1);
      static jboolean JNICALL t_PythonFieldPropagator_isAdditionalStateManaged12(JNIEnv *jenv, jobject jobj, jobject a0);
      static jobject JNICALL t_PythonFieldPropagator_propagate13(JNIEnv *jenv, jobject jobj, jobject a0);
      static jobject JNICALL t_PythonFieldPropagator_propagate14(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1);
      static void JNICALL t_PythonFieldPropagator_pythonDecRef15(JNIEnv *jenv, jobject jobj);
      static void JNICALL t_PythonFieldPropagator_resetInitialState16(JNIEnv *jenv, jobject jobj, jobject a0);
      static void JNICALL t_PythonFieldPropagator_setAttitudeProvider17(JNIEnv *jenv, jobject jobj, jobject a0);
      static PyObject *t_PythonFieldPropagator_get__self(t_PythonFieldPropagator *self, void *data);
      static PyObject *t_PythonFieldPropagator_get__parameters_(t_PythonFieldPropagator *self, void *data);
      static PyGetSetDef t_PythonFieldPropagator__fields_[] = {
        DECLARE_GET_FIELD(t_PythonFieldPropagator, self),
        DECLARE_GET_FIELD(t_PythonFieldPropagator, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_PythonFieldPropagator__methods_[] = {
        DECLARE_METHOD(t_PythonFieldPropagator, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonFieldPropagator, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonFieldPropagator, of_, METH_VARARGS),
        DECLARE_METHOD(t_PythonFieldPropagator, finalize, METH_NOARGS),
        DECLARE_METHOD(t_PythonFieldPropagator, pythonExtension, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(PythonFieldPropagator)[] = {
        { Py_tp_methods, t_PythonFieldPropagator__methods_ },
        { Py_tp_init, (void *) t_PythonFieldPropagator_init_ },
        { Py_tp_getset, t_PythonFieldPropagator__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(PythonFieldPropagator)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(PythonFieldPropagator, t_PythonFieldPropagator, PythonFieldPropagator);
      PyObject *t_PythonFieldPropagator::wrap_Object(const PythonFieldPropagator& object, PyTypeObject *p0)
      {
        PyObject *obj = t_PythonFieldPropagator::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_PythonFieldPropagator *self = (t_PythonFieldPropagator *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_PythonFieldPropagator::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_PythonFieldPropagator::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_PythonFieldPropagator *self = (t_PythonFieldPropagator *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_PythonFieldPropagator::install(PyObject *module)
      {
        installType(&PY_TYPE(PythonFieldPropagator), &PY_TYPE_DEF(PythonFieldPropagator), module, "PythonFieldPropagator", 1);
      }

      void t_PythonFieldPropagator::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonFieldPropagator), "class_", make_descriptor(PythonFieldPropagator::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonFieldPropagator), "wrapfn_", make_descriptor(t_PythonFieldPropagator::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonFieldPropagator), "boxfn_", make_descriptor(boxObject));
        jclass cls = env->getClass(PythonFieldPropagator::initializeClass);
        JNINativeMethod methods[] = {
          { "addAdditionalStateProvider", "(Lorg/orekit/propagation/FieldAdditionalStateProvider;)V", (void *) t_PythonFieldPropagator_addAdditionalStateProvider0 },
          { "addEventDetector", "(Lorg/orekit/propagation/events/FieldEventDetector;)V", (void *) t_PythonFieldPropagator_addEventDetector1 },
          { "clearEventsDetectors", "()V", (void *) t_PythonFieldPropagator_clearEventsDetectors2 },
          { "getAdditionalStateProviders", "()Ljava/util/List;", (void *) t_PythonFieldPropagator_getAdditionalStateProviders3 },
          { "getAttitudeProvider", "()Lorg/orekit/attitudes/AttitudeProvider;", (void *) t_PythonFieldPropagator_getAttitudeProvider4 },
          { "getEphemerisGenerator", "()Lorg/orekit/propagation/FieldEphemerisGenerator;", (void *) t_PythonFieldPropagator_getEphemerisGenerator5 },
          { "getEventsDetectors", "()Ljava/util/Collection;", (void *) t_PythonFieldPropagator_getEventsDetectors6 },
          { "getFrame", "()Lorg/orekit/frames/Frame;", (void *) t_PythonFieldPropagator_getFrame7 },
          { "getInitialState", "()Lorg/orekit/propagation/FieldSpacecraftState;", (void *) t_PythonFieldPropagator_getInitialState8 },
          { "getManagedAdditionalStates", "()[Ljava/lang/String;", (void *) t_PythonFieldPropagator_getManagedAdditionalStates9 },
          { "getMultiplexer", "()Lorg/orekit/propagation/sampling/FieldStepHandlerMultiplexer;", (void *) t_PythonFieldPropagator_getMultiplexer10 },
          { "getPVCoordinates", "(Lorg/orekit/time/FieldAbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/orekit/utils/TimeStampedFieldPVCoordinates;", (void *) t_PythonFieldPropagator_getPVCoordinates11 },
          { "isAdditionalStateManaged", "(Ljava/lang/String;)Z", (void *) t_PythonFieldPropagator_isAdditionalStateManaged12 },
          { "propagate", "(Lorg/orekit/time/FieldAbsoluteDate;)Lorg/orekit/propagation/FieldSpacecraftState;", (void *) t_PythonFieldPropagator_propagate13 },
          { "propagate", "(Lorg/orekit/time/FieldAbsoluteDate;Lorg/orekit/time/FieldAbsoluteDate;)Lorg/orekit/propagation/FieldSpacecraftState;", (void *) t_PythonFieldPropagator_propagate14 },
          { "pythonDecRef", "()V", (void *) t_PythonFieldPropagator_pythonDecRef15 },
          { "resetInitialState", "(Lorg/orekit/propagation/FieldSpacecraftState;)V", (void *) t_PythonFieldPropagator_resetInitialState16 },
          { "setAttitudeProvider", "(Lorg/orekit/attitudes/AttitudeProvider;)V", (void *) t_PythonFieldPropagator_setAttitudeProvider17 },
        };
        env->registerNatives(cls, methods, 18);
      }

      static PyObject *t_PythonFieldPropagator_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, PythonFieldPropagator::initializeClass, 1)))
          return NULL;
        return t_PythonFieldPropagator::wrap_Object(PythonFieldPropagator(((t_PythonFieldPropagator *) arg)->object.this$));
      }
      static PyObject *t_PythonFieldPropagator_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, PythonFieldPropagator::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_PythonFieldPropagator_of_(t_PythonFieldPropagator *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static int t_PythonFieldPropagator_init_(t_PythonFieldPropagator *self, PyObject *args, PyObject *kwds)
      {
        PythonFieldPropagator object((jobject) NULL);

        INT_CALL(object = PythonFieldPropagator());
        self->object = object;

        Py_INCREF((PyObject *) self);
        self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

        return 0;
      }

      static PyObject *t_PythonFieldPropagator_finalize(t_PythonFieldPropagator *self)
      {
        OBJ_CALL(self->object.finalize());
        Py_RETURN_NONE;
      }

      static PyObject *t_PythonFieldPropagator_pythonExtension(t_PythonFieldPropagator *self, PyObject *args)
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

      static void JNICALL t_PythonFieldPropagator_addAdditionalStateProvider0(JNIEnv *jenv, jobject jobj, jobject a0)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonFieldPropagator::mids$[PythonFieldPropagator::mid_pythonExtension_6c0ce7e438e5ded4]);
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

      static void JNICALL t_PythonFieldPropagator_addEventDetector1(JNIEnv *jenv, jobject jobj, jobject a0)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonFieldPropagator::mids$[PythonFieldPropagator::mid_pythonExtension_6c0ce7e438e5ded4]);
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

      static void JNICALL t_PythonFieldPropagator_clearEventsDetectors2(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonFieldPropagator::mids$[PythonFieldPropagator::mid_pythonExtension_6c0ce7e438e5ded4]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        PyObject *result = PyObject_CallMethod(obj, "clearEventsDetectors", "");
        if (!result)
          throwPythonError();
        else
          Py_DECREF(result);
      }

      static jobject JNICALL t_PythonFieldPropagator_getAdditionalStateProviders3(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonFieldPropagator::mids$[PythonFieldPropagator::mid_pythonExtension_6c0ce7e438e5ded4]);
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

      static jobject JNICALL t_PythonFieldPropagator_getAttitudeProvider4(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonFieldPropagator::mids$[PythonFieldPropagator::mid_pythonExtension_6c0ce7e438e5ded4]);
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

      static jobject JNICALL t_PythonFieldPropagator_getEphemerisGenerator5(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonFieldPropagator::mids$[PythonFieldPropagator::mid_pythonExtension_6c0ce7e438e5ded4]);
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

      static jobject JNICALL t_PythonFieldPropagator_getEventsDetectors6(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonFieldPropagator::mids$[PythonFieldPropagator::mid_pythonExtension_6c0ce7e438e5ded4]);
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

      static jobject JNICALL t_PythonFieldPropagator_getFrame7(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonFieldPropagator::mids$[PythonFieldPropagator::mid_pythonExtension_6c0ce7e438e5ded4]);
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

      static jobject JNICALL t_PythonFieldPropagator_getInitialState8(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonFieldPropagator::mids$[PythonFieldPropagator::mid_pythonExtension_6c0ce7e438e5ded4]);
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

      static jobject JNICALL t_PythonFieldPropagator_getManagedAdditionalStates9(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonFieldPropagator::mids$[PythonFieldPropagator::mid_pythonExtension_6c0ce7e438e5ded4]);
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

      static jobject JNICALL t_PythonFieldPropagator_getMultiplexer10(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonFieldPropagator::mids$[PythonFieldPropagator::mid_pythonExtension_6c0ce7e438e5ded4]);
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

      static jobject JNICALL t_PythonFieldPropagator_getPVCoordinates11(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonFieldPropagator::mids$[PythonFieldPropagator::mid_pythonExtension_6c0ce7e438e5ded4]);
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

      static jboolean JNICALL t_PythonFieldPropagator_isAdditionalStateManaged12(JNIEnv *jenv, jobject jobj, jobject a0)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonFieldPropagator::mids$[PythonFieldPropagator::mid_pythonExtension_6c0ce7e438e5ded4]);
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

      static jobject JNICALL t_PythonFieldPropagator_propagate13(JNIEnv *jenv, jobject jobj, jobject a0)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonFieldPropagator::mids$[PythonFieldPropagator::mid_pythonExtension_6c0ce7e438e5ded4]);
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

      static jobject JNICALL t_PythonFieldPropagator_propagate14(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonFieldPropagator::mids$[PythonFieldPropagator::mid_pythonExtension_6c0ce7e438e5ded4]);
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

      static void JNICALL t_PythonFieldPropagator_pythonDecRef15(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonFieldPropagator::mids$[PythonFieldPropagator::mid_pythonExtension_6c0ce7e438e5ded4]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

        if (obj != NULL)
        {
          jenv->CallVoidMethod(jobj, PythonFieldPropagator::mids$[PythonFieldPropagator::mid_pythonExtension_3d7dd2314a0dd456], (jlong) 0);
          env->finalizeObject(jenv, obj);
        }
      }

      static void JNICALL t_PythonFieldPropagator_resetInitialState16(JNIEnv *jenv, jobject jobj, jobject a0)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonFieldPropagator::mids$[PythonFieldPropagator::mid_pythonExtension_6c0ce7e438e5ded4]);
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

      static void JNICALL t_PythonFieldPropagator_setAttitudeProvider17(JNIEnv *jenv, jobject jobj, jobject a0)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonFieldPropagator::mids$[PythonFieldPropagator::mid_pythonExtension_6c0ce7e438e5ded4]);
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

      static PyObject *t_PythonFieldPropagator_get__self(t_PythonFieldPropagator *self, void *data)
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
      static PyObject *t_PythonFieldPropagator_get__parameters_(t_PythonFieldPropagator *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/gnss/DOP.h"
#include "org/orekit/bodies/GeodeticPoint.h"
#include "java/lang/Class.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {

      ::java::lang::Class *DOP::class$ = NULL;
      jmethodID *DOP::mids$ = NULL;
      bool DOP::live$ = false;

      jclass DOP::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/gnss/DOP");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_9685a2714fd60e95] = env->getMethodID(cls, "<init>", "(Lorg/orekit/bodies/GeodeticPoint;Lorg/orekit/time/AbsoluteDate;IDDDDD)V");
          mids$[mid_getDate_c325492395d89b24] = env->getMethodID(cls, "getDate", "()Lorg/orekit/time/AbsoluteDate;");
          mids$[mid_getGdop_b74f83833fdad017] = env->getMethodID(cls, "getGdop", "()D");
          mids$[mid_getGnssNb_55546ef6a647f39b] = env->getMethodID(cls, "getGnssNb", "()I");
          mids$[mid_getHdop_b74f83833fdad017] = env->getMethodID(cls, "getHdop", "()D");
          mids$[mid_getLocation_963915d358b1e63a] = env->getMethodID(cls, "getLocation", "()Lorg/orekit/bodies/GeodeticPoint;");
          mids$[mid_getPdop_b74f83833fdad017] = env->getMethodID(cls, "getPdop", "()D");
          mids$[mid_getTdop_b74f83833fdad017] = env->getMethodID(cls, "getTdop", "()D");
          mids$[mid_getVdop_b74f83833fdad017] = env->getMethodID(cls, "getVdop", "()D");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      DOP::DOP(const ::org::orekit::bodies::GeodeticPoint & a0, const ::org::orekit::time::AbsoluteDate & a1, jint a2, jdouble a3, jdouble a4, jdouble a5, jdouble a6, jdouble a7) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_9685a2714fd60e95, a0.this$, a1.this$, a2, a3, a4, a5, a6, a7)) {}

      ::org::orekit::time::AbsoluteDate DOP::getDate() const
      {
        return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getDate_c325492395d89b24]));
      }

      jdouble DOP::getGdop() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getGdop_b74f83833fdad017]);
      }

      jint DOP::getGnssNb() const
      {
        return env->callIntMethod(this$, mids$[mid_getGnssNb_55546ef6a647f39b]);
      }

      jdouble DOP::getHdop() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getHdop_b74f83833fdad017]);
      }

      ::org::orekit::bodies::GeodeticPoint DOP::getLocation() const
      {
        return ::org::orekit::bodies::GeodeticPoint(env->callObjectMethod(this$, mids$[mid_getLocation_963915d358b1e63a]));
      }

      jdouble DOP::getPdop() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getPdop_b74f83833fdad017]);
      }

      jdouble DOP::getTdop() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getTdop_b74f83833fdad017]);
      }

      jdouble DOP::getVdop() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getVdop_b74f83833fdad017]);
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
      static PyObject *t_DOP_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_DOP_instance_(PyTypeObject *type, PyObject *arg);
      static int t_DOP_init_(t_DOP *self, PyObject *args, PyObject *kwds);
      static PyObject *t_DOP_getDate(t_DOP *self);
      static PyObject *t_DOP_getGdop(t_DOP *self);
      static PyObject *t_DOP_getGnssNb(t_DOP *self);
      static PyObject *t_DOP_getHdop(t_DOP *self);
      static PyObject *t_DOP_getLocation(t_DOP *self);
      static PyObject *t_DOP_getPdop(t_DOP *self);
      static PyObject *t_DOP_getTdop(t_DOP *self);
      static PyObject *t_DOP_getVdop(t_DOP *self);
      static PyObject *t_DOP_get__date(t_DOP *self, void *data);
      static PyObject *t_DOP_get__gdop(t_DOP *self, void *data);
      static PyObject *t_DOP_get__gnssNb(t_DOP *self, void *data);
      static PyObject *t_DOP_get__hdop(t_DOP *self, void *data);
      static PyObject *t_DOP_get__location(t_DOP *self, void *data);
      static PyObject *t_DOP_get__pdop(t_DOP *self, void *data);
      static PyObject *t_DOP_get__tdop(t_DOP *self, void *data);
      static PyObject *t_DOP_get__vdop(t_DOP *self, void *data);
      static PyGetSetDef t_DOP__fields_[] = {
        DECLARE_GET_FIELD(t_DOP, date),
        DECLARE_GET_FIELD(t_DOP, gdop),
        DECLARE_GET_FIELD(t_DOP, gnssNb),
        DECLARE_GET_FIELD(t_DOP, hdop),
        DECLARE_GET_FIELD(t_DOP, location),
        DECLARE_GET_FIELD(t_DOP, pdop),
        DECLARE_GET_FIELD(t_DOP, tdop),
        DECLARE_GET_FIELD(t_DOP, vdop),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_DOP__methods_[] = {
        DECLARE_METHOD(t_DOP, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_DOP, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_DOP, getDate, METH_NOARGS),
        DECLARE_METHOD(t_DOP, getGdop, METH_NOARGS),
        DECLARE_METHOD(t_DOP, getGnssNb, METH_NOARGS),
        DECLARE_METHOD(t_DOP, getHdop, METH_NOARGS),
        DECLARE_METHOD(t_DOP, getLocation, METH_NOARGS),
        DECLARE_METHOD(t_DOP, getPdop, METH_NOARGS),
        DECLARE_METHOD(t_DOP, getTdop, METH_NOARGS),
        DECLARE_METHOD(t_DOP, getVdop, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(DOP)[] = {
        { Py_tp_methods, t_DOP__methods_ },
        { Py_tp_init, (void *) t_DOP_init_ },
        { Py_tp_getset, t_DOP__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(DOP)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(DOP, t_DOP, DOP);

      void t_DOP::install(PyObject *module)
      {
        installType(&PY_TYPE(DOP), &PY_TYPE_DEF(DOP), module, "DOP", 0);
      }

      void t_DOP::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(DOP), "class_", make_descriptor(DOP::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(DOP), "wrapfn_", make_descriptor(t_DOP::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(DOP), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_DOP_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, DOP::initializeClass, 1)))
          return NULL;
        return t_DOP::wrap_Object(DOP(((t_DOP *) arg)->object.this$));
      }
      static PyObject *t_DOP_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, DOP::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_DOP_init_(t_DOP *self, PyObject *args, PyObject *kwds)
      {
        ::org::orekit::bodies::GeodeticPoint a0((jobject) NULL);
        ::org::orekit::time::AbsoluteDate a1((jobject) NULL);
        jint a2;
        jdouble a3;
        jdouble a4;
        jdouble a5;
        jdouble a6;
        jdouble a7;
        DOP object((jobject) NULL);

        if (!parseArgs(args, "kkIDDDDD", ::org::orekit::bodies::GeodeticPoint::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5, &a6, &a7))
        {
          INT_CALL(object = DOP(a0, a1, a2, a3, a4, a5, a6, a7));
          self->object = object;
        }
        else
        {
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_DOP_getDate(t_DOP *self)
      {
        ::org::orekit::time::AbsoluteDate result((jobject) NULL);
        OBJ_CALL(result = self->object.getDate());
        return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
      }

      static PyObject *t_DOP_getGdop(t_DOP *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getGdop());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_DOP_getGnssNb(t_DOP *self)
      {
        jint result;
        OBJ_CALL(result = self->object.getGnssNb());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_DOP_getHdop(t_DOP *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getHdop());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_DOP_getLocation(t_DOP *self)
      {
        ::org::orekit::bodies::GeodeticPoint result((jobject) NULL);
        OBJ_CALL(result = self->object.getLocation());
        return ::org::orekit::bodies::t_GeodeticPoint::wrap_Object(result);
      }

      static PyObject *t_DOP_getPdop(t_DOP *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getPdop());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_DOP_getTdop(t_DOP *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getTdop());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_DOP_getVdop(t_DOP *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getVdop());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_DOP_get__date(t_DOP *self, void *data)
      {
        ::org::orekit::time::AbsoluteDate value((jobject) NULL);
        OBJ_CALL(value = self->object.getDate());
        return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
      }

      static PyObject *t_DOP_get__gdop(t_DOP *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getGdop());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_DOP_get__gnssNb(t_DOP *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getGnssNb());
        return PyLong_FromLong((long) value);
      }

      static PyObject *t_DOP_get__hdop(t_DOP *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getHdop());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_DOP_get__location(t_DOP *self, void *data)
      {
        ::org::orekit::bodies::GeodeticPoint value((jobject) NULL);
        OBJ_CALL(value = self->object.getLocation());
        return ::org::orekit::bodies::t_GeodeticPoint::wrap_Object(value);
      }

      static PyObject *t_DOP_get__pdop(t_DOP *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getPdop());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_DOP_get__tdop(t_DOP *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getTdop());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_DOP_get__vdop(t_DOP *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getVdop());
        return PyFloat_FromDouble((double) value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/ode/sampling/FieldStepNormalizer.h"
#include "org/hipparchus/ode/FieldODEStateAndDerivative.h"
#include "org/hipparchus/ode/sampling/StepNormalizerMode.h"
#include "org/hipparchus/ode/sampling/FieldODEStepHandler.h"
#include "org/hipparchus/ode/sampling/FieldODEFixedStepHandler.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "java/lang/Class.h"
#include "org/hipparchus/ode/sampling/FieldODEStateInterpolator.h"
#include "org/hipparchus/ode/sampling/StepNormalizerBounds.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace ode {
      namespace sampling {

        ::java::lang::Class *FieldStepNormalizer::class$ = NULL;
        jmethodID *FieldStepNormalizer::mids$ = NULL;
        bool FieldStepNormalizer::live$ = false;

        jclass FieldStepNormalizer::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/ode/sampling/FieldStepNormalizer");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_df392bf2a28ee62c] = env->getMethodID(cls, "<init>", "(DLorg/hipparchus/ode/sampling/FieldODEFixedStepHandler;)V");
            mids$[mid_init$_2e678b88ebeeab2c] = env->getMethodID(cls, "<init>", "(DLorg/hipparchus/ode/sampling/FieldODEFixedStepHandler;Lorg/hipparchus/ode/sampling/StepNormalizerBounds;)V");
            mids$[mid_init$_e15e9bcadc2f715f] = env->getMethodID(cls, "<init>", "(DLorg/hipparchus/ode/sampling/FieldODEFixedStepHandler;Lorg/hipparchus/ode/sampling/StepNormalizerMode;)V");
            mids$[mid_init$_5f2135f6c74e5ad2] = env->getMethodID(cls, "<init>", "(DLorg/hipparchus/ode/sampling/FieldODEFixedStepHandler;Lorg/hipparchus/ode/sampling/StepNormalizerMode;Lorg/hipparchus/ode/sampling/StepNormalizerBounds;)V");
            mids$[mid_finish_5b8144cf9ccecc03] = env->getMethodID(cls, "finish", "(Lorg/hipparchus/ode/FieldODEStateAndDerivative;)V");
            mids$[mid_handleStep_bd804f650c074774] = env->getMethodID(cls, "handleStep", "(Lorg/hipparchus/ode/sampling/FieldODEStateInterpolator;)V");
            mids$[mid_init_55fdeef582303a99] = env->getMethodID(cls, "init", "(Lorg/hipparchus/ode/FieldODEStateAndDerivative;Lorg/hipparchus/CalculusFieldElement;)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        FieldStepNormalizer::FieldStepNormalizer(jdouble a0, const ::org::hipparchus::ode::sampling::FieldODEFixedStepHandler & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_df392bf2a28ee62c, a0, a1.this$)) {}

        FieldStepNormalizer::FieldStepNormalizer(jdouble a0, const ::org::hipparchus::ode::sampling::FieldODEFixedStepHandler & a1, const ::org::hipparchus::ode::sampling::StepNormalizerBounds & a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_2e678b88ebeeab2c, a0, a1.this$, a2.this$)) {}

        FieldStepNormalizer::FieldStepNormalizer(jdouble a0, const ::org::hipparchus::ode::sampling::FieldODEFixedStepHandler & a1, const ::org::hipparchus::ode::sampling::StepNormalizerMode & a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_e15e9bcadc2f715f, a0, a1.this$, a2.this$)) {}

        FieldStepNormalizer::FieldStepNormalizer(jdouble a0, const ::org::hipparchus::ode::sampling::FieldODEFixedStepHandler & a1, const ::org::hipparchus::ode::sampling::StepNormalizerMode & a2, const ::org::hipparchus::ode::sampling::StepNormalizerBounds & a3) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_5f2135f6c74e5ad2, a0, a1.this$, a2.this$, a3.this$)) {}

        void FieldStepNormalizer::finish(const ::org::hipparchus::ode::FieldODEStateAndDerivative & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_finish_5b8144cf9ccecc03], a0.this$);
        }

        void FieldStepNormalizer::handleStep(const ::org::hipparchus::ode::sampling::FieldODEStateInterpolator & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_handleStep_bd804f650c074774], a0.this$);
        }

        void FieldStepNormalizer::init(const ::org::hipparchus::ode::FieldODEStateAndDerivative & a0, const ::org::hipparchus::CalculusFieldElement & a1) const
        {
          env->callVoidMethod(this$, mids$[mid_init_55fdeef582303a99], a0.this$, a1.this$);
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
    namespace ode {
      namespace sampling {
        static PyObject *t_FieldStepNormalizer_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldStepNormalizer_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldStepNormalizer_of_(t_FieldStepNormalizer *self, PyObject *args);
        static int t_FieldStepNormalizer_init_(t_FieldStepNormalizer *self, PyObject *args, PyObject *kwds);
        static PyObject *t_FieldStepNormalizer_finish(t_FieldStepNormalizer *self, PyObject *arg);
        static PyObject *t_FieldStepNormalizer_handleStep(t_FieldStepNormalizer *self, PyObject *arg);
        static PyObject *t_FieldStepNormalizer_init(t_FieldStepNormalizer *self, PyObject *args);
        static PyObject *t_FieldStepNormalizer_get__parameters_(t_FieldStepNormalizer *self, void *data);
        static PyGetSetDef t_FieldStepNormalizer__fields_[] = {
          DECLARE_GET_FIELD(t_FieldStepNormalizer, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_FieldStepNormalizer__methods_[] = {
          DECLARE_METHOD(t_FieldStepNormalizer, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldStepNormalizer, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldStepNormalizer, of_, METH_VARARGS),
          DECLARE_METHOD(t_FieldStepNormalizer, finish, METH_O),
          DECLARE_METHOD(t_FieldStepNormalizer, handleStep, METH_O),
          DECLARE_METHOD(t_FieldStepNormalizer, init, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(FieldStepNormalizer)[] = {
          { Py_tp_methods, t_FieldStepNormalizer__methods_ },
          { Py_tp_init, (void *) t_FieldStepNormalizer_init_ },
          { Py_tp_getset, t_FieldStepNormalizer__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(FieldStepNormalizer)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(FieldStepNormalizer, t_FieldStepNormalizer, FieldStepNormalizer);
        PyObject *t_FieldStepNormalizer::wrap_Object(const FieldStepNormalizer& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FieldStepNormalizer::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldStepNormalizer *self = (t_FieldStepNormalizer *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_FieldStepNormalizer::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FieldStepNormalizer::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldStepNormalizer *self = (t_FieldStepNormalizer *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_FieldStepNormalizer::install(PyObject *module)
        {
          installType(&PY_TYPE(FieldStepNormalizer), &PY_TYPE_DEF(FieldStepNormalizer), module, "FieldStepNormalizer", 0);
        }

        void t_FieldStepNormalizer::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldStepNormalizer), "class_", make_descriptor(FieldStepNormalizer::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldStepNormalizer), "wrapfn_", make_descriptor(t_FieldStepNormalizer::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldStepNormalizer), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_FieldStepNormalizer_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, FieldStepNormalizer::initializeClass, 1)))
            return NULL;
          return t_FieldStepNormalizer::wrap_Object(FieldStepNormalizer(((t_FieldStepNormalizer *) arg)->object.this$));
        }
        static PyObject *t_FieldStepNormalizer_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, FieldStepNormalizer::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_FieldStepNormalizer_of_(t_FieldStepNormalizer *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_FieldStepNormalizer_init_(t_FieldStepNormalizer *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 2:
            {
              jdouble a0;
              ::org::hipparchus::ode::sampling::FieldODEFixedStepHandler a1((jobject) NULL);
              PyTypeObject **p1;
              FieldStepNormalizer object((jobject) NULL);

              if (!parseArgs(args, "DK", ::org::hipparchus::ode::sampling::FieldODEFixedStepHandler::initializeClass, &a0, &a1, &p1, ::org::hipparchus::ode::sampling::t_FieldODEFixedStepHandler::parameters_))
              {
                INT_CALL(object = FieldStepNormalizer(a0, a1));
                self->object = object;
                break;
              }
            }
            goto err;
           case 3:
            {
              jdouble a0;
              ::org::hipparchus::ode::sampling::FieldODEFixedStepHandler a1((jobject) NULL);
              PyTypeObject **p1;
              ::org::hipparchus::ode::sampling::StepNormalizerBounds a2((jobject) NULL);
              PyTypeObject **p2;
              FieldStepNormalizer object((jobject) NULL);

              if (!parseArgs(args, "DKK", ::org::hipparchus::ode::sampling::FieldODEFixedStepHandler::initializeClass, ::org::hipparchus::ode::sampling::StepNormalizerBounds::initializeClass, &a0, &a1, &p1, ::org::hipparchus::ode::sampling::t_FieldODEFixedStepHandler::parameters_, &a2, &p2, ::org::hipparchus::ode::sampling::t_StepNormalizerBounds::parameters_))
              {
                INT_CALL(object = FieldStepNormalizer(a0, a1, a2));
                self->object = object;
                break;
              }
            }
            {
              jdouble a0;
              ::org::hipparchus::ode::sampling::FieldODEFixedStepHandler a1((jobject) NULL);
              PyTypeObject **p1;
              ::org::hipparchus::ode::sampling::StepNormalizerMode a2((jobject) NULL);
              PyTypeObject **p2;
              FieldStepNormalizer object((jobject) NULL);

              if (!parseArgs(args, "DKK", ::org::hipparchus::ode::sampling::FieldODEFixedStepHandler::initializeClass, ::org::hipparchus::ode::sampling::StepNormalizerMode::initializeClass, &a0, &a1, &p1, ::org::hipparchus::ode::sampling::t_FieldODEFixedStepHandler::parameters_, &a2, &p2, ::org::hipparchus::ode::sampling::t_StepNormalizerMode::parameters_))
              {
                INT_CALL(object = FieldStepNormalizer(a0, a1, a2));
                self->object = object;
                break;
              }
            }
            goto err;
           case 4:
            {
              jdouble a0;
              ::org::hipparchus::ode::sampling::FieldODEFixedStepHandler a1((jobject) NULL);
              PyTypeObject **p1;
              ::org::hipparchus::ode::sampling::StepNormalizerMode a2((jobject) NULL);
              PyTypeObject **p2;
              ::org::hipparchus::ode::sampling::StepNormalizerBounds a3((jobject) NULL);
              PyTypeObject **p3;
              FieldStepNormalizer object((jobject) NULL);

              if (!parseArgs(args, "DKKK", ::org::hipparchus::ode::sampling::FieldODEFixedStepHandler::initializeClass, ::org::hipparchus::ode::sampling::StepNormalizerMode::initializeClass, ::org::hipparchus::ode::sampling::StepNormalizerBounds::initializeClass, &a0, &a1, &p1, ::org::hipparchus::ode::sampling::t_FieldODEFixedStepHandler::parameters_, &a2, &p2, ::org::hipparchus::ode::sampling::t_StepNormalizerMode::parameters_, &a3, &p3, ::org::hipparchus::ode::sampling::t_StepNormalizerBounds::parameters_))
              {
                INT_CALL(object = FieldStepNormalizer(a0, a1, a2, a3));
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

        static PyObject *t_FieldStepNormalizer_finish(t_FieldStepNormalizer *self, PyObject *arg)
        {
          ::org::hipparchus::ode::FieldODEStateAndDerivative a0((jobject) NULL);
          PyTypeObject **p0;

          if (!parseArg(arg, "K", ::org::hipparchus::ode::FieldODEStateAndDerivative::initializeClass, &a0, &p0, ::org::hipparchus::ode::t_FieldODEStateAndDerivative::parameters_))
          {
            OBJ_CALL(self->object.finish(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "finish", arg);
          return NULL;
        }

        static PyObject *t_FieldStepNormalizer_handleStep(t_FieldStepNormalizer *self, PyObject *arg)
        {
          ::org::hipparchus::ode::sampling::FieldODEStateInterpolator a0((jobject) NULL);
          PyTypeObject **p0;

          if (!parseArg(arg, "K", ::org::hipparchus::ode::sampling::FieldODEStateInterpolator::initializeClass, &a0, &p0, ::org::hipparchus::ode::sampling::t_FieldODEStateInterpolator::parameters_))
          {
            OBJ_CALL(self->object.handleStep(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "handleStep", arg);
          return NULL;
        }

        static PyObject *t_FieldStepNormalizer_init(t_FieldStepNormalizer *self, PyObject *args)
        {
          ::org::hipparchus::ode::FieldODEStateAndDerivative a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
          PyTypeObject **p1;

          if (!parseArgs(args, "KK", ::org::hipparchus::ode::FieldODEStateAndDerivative::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::ode::t_FieldODEStateAndDerivative::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_))
          {
            OBJ_CALL(self->object.init(a0, a1));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "init", args);
          return NULL;
        }
        static PyObject *t_FieldStepNormalizer_get__parameters_(t_FieldStepNormalizer *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/measurements/gnss/AbstractDualFrequencyCombination.h"
#include "org/orekit/estimation/measurements/gnss/CombinedObservationData.h"
#include "org/orekit/estimation/measurements/gnss/MeasurementCombination.h"
#include "org/orekit/estimation/measurements/gnss/CombinedObservationDataSet.h"
#include "java/lang/Class.h"
#include "org/orekit/files/rinex/observation/ObservationData.h"
#include "org/orekit/files/rinex/observation/ObservationDataSet.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace gnss {

          ::java::lang::Class *AbstractDualFrequencyCombination::class$ = NULL;
          jmethodID *AbstractDualFrequencyCombination::mids$ = NULL;
          bool AbstractDualFrequencyCombination::live$ = false;
          jdouble AbstractDualFrequencyCombination::MHZ_TO_HZ = (jdouble) 0;

          jclass AbstractDualFrequencyCombination::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/gnss/AbstractDualFrequencyCombination");

              mids$ = new jmethodID[max_mid];
              mids$[mid_combine_12b3dc80befaeb6c] = env->getMethodID(cls, "combine", "(Lorg/orekit/files/rinex/observation/ObservationDataSet;)Lorg/orekit/estimation/measurements/gnss/CombinedObservationDataSet;");
              mids$[mid_combine_74c648c2fd092da1] = env->getMethodID(cls, "combine", "(Lorg/orekit/files/rinex/observation/ObservationData;Lorg/orekit/files/rinex/observation/ObservationData;)Lorg/orekit/estimation/measurements/gnss/CombinedObservationData;");
              mids$[mid_getName_1c1fa1e935d6cdcf] = env->getMethodID(cls, "getName", "()Ljava/lang/String;");
              mids$[mid_getCombinedValue_67abdaf53ea90950] = env->getMethodID(cls, "getCombinedValue", "(DLorg/orekit/gnss/Frequency;DLorg/orekit/gnss/Frequency;)D");
              mids$[mid_getCombinedFrequency_7bbbdc452eac601c] = env->getMethodID(cls, "getCombinedFrequency", "(Lorg/orekit/gnss/Frequency;Lorg/orekit/gnss/Frequency;)D");

              class$ = new ::java::lang::Class(cls);
              cls = (jclass) class$->this$;

              MHZ_TO_HZ = env->getStaticDoubleField(cls, "MHZ_TO_HZ");
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          ::org::orekit::estimation::measurements::gnss::CombinedObservationDataSet AbstractDualFrequencyCombination::combine(const ::org::orekit::files::rinex::observation::ObservationDataSet & a0) const
          {
            return ::org::orekit::estimation::measurements::gnss::CombinedObservationDataSet(env->callObjectMethod(this$, mids$[mid_combine_12b3dc80befaeb6c], a0.this$));
          }

          ::org::orekit::estimation::measurements::gnss::CombinedObservationData AbstractDualFrequencyCombination::combine(const ::org::orekit::files::rinex::observation::ObservationData & a0, const ::org::orekit::files::rinex::observation::ObservationData & a1) const
          {
            return ::org::orekit::estimation::measurements::gnss::CombinedObservationData(env->callObjectMethod(this$, mids$[mid_combine_74c648c2fd092da1], a0.this$, a1.this$));
          }

          ::java::lang::String AbstractDualFrequencyCombination::getName() const
          {
            return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getName_1c1fa1e935d6cdcf]));
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
        namespace gnss {
          static PyObject *t_AbstractDualFrequencyCombination_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_AbstractDualFrequencyCombination_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_AbstractDualFrequencyCombination_combine(t_AbstractDualFrequencyCombination *self, PyObject *args);
          static PyObject *t_AbstractDualFrequencyCombination_getName(t_AbstractDualFrequencyCombination *self);
          static PyObject *t_AbstractDualFrequencyCombination_get__name(t_AbstractDualFrequencyCombination *self, void *data);
          static PyGetSetDef t_AbstractDualFrequencyCombination__fields_[] = {
            DECLARE_GET_FIELD(t_AbstractDualFrequencyCombination, name),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_AbstractDualFrequencyCombination__methods_[] = {
            DECLARE_METHOD(t_AbstractDualFrequencyCombination, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_AbstractDualFrequencyCombination, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_AbstractDualFrequencyCombination, combine, METH_VARARGS),
            DECLARE_METHOD(t_AbstractDualFrequencyCombination, getName, METH_NOARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(AbstractDualFrequencyCombination)[] = {
            { Py_tp_methods, t_AbstractDualFrequencyCombination__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { Py_tp_getset, t_AbstractDualFrequencyCombination__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(AbstractDualFrequencyCombination)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(AbstractDualFrequencyCombination, t_AbstractDualFrequencyCombination, AbstractDualFrequencyCombination);

          void t_AbstractDualFrequencyCombination::install(PyObject *module)
          {
            installType(&PY_TYPE(AbstractDualFrequencyCombination), &PY_TYPE_DEF(AbstractDualFrequencyCombination), module, "AbstractDualFrequencyCombination", 0);
          }

          void t_AbstractDualFrequencyCombination::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractDualFrequencyCombination), "class_", make_descriptor(AbstractDualFrequencyCombination::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractDualFrequencyCombination), "wrapfn_", make_descriptor(t_AbstractDualFrequencyCombination::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractDualFrequencyCombination), "boxfn_", make_descriptor(boxObject));
            env->getClass(AbstractDualFrequencyCombination::initializeClass);
            PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractDualFrequencyCombination), "MHZ_TO_HZ", make_descriptor(AbstractDualFrequencyCombination::MHZ_TO_HZ));
          }

          static PyObject *t_AbstractDualFrequencyCombination_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, AbstractDualFrequencyCombination::initializeClass, 1)))
              return NULL;
            return t_AbstractDualFrequencyCombination::wrap_Object(AbstractDualFrequencyCombination(((t_AbstractDualFrequencyCombination *) arg)->object.this$));
          }
          static PyObject *t_AbstractDualFrequencyCombination_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, AbstractDualFrequencyCombination::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_AbstractDualFrequencyCombination_combine(t_AbstractDualFrequencyCombination *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 1:
              {
                ::org::orekit::files::rinex::observation::ObservationDataSet a0((jobject) NULL);
                ::org::orekit::estimation::measurements::gnss::CombinedObservationDataSet result((jobject) NULL);

                if (!parseArgs(args, "k", ::org::orekit::files::rinex::observation::ObservationDataSet::initializeClass, &a0))
                {
                  OBJ_CALL(result = self->object.combine(a0));
                  return ::org::orekit::estimation::measurements::gnss::t_CombinedObservationDataSet::wrap_Object(result);
                }
              }
              break;
             case 2:
              {
                ::org::orekit::files::rinex::observation::ObservationData a0((jobject) NULL);
                ::org::orekit::files::rinex::observation::ObservationData a1((jobject) NULL);
                ::org::orekit::estimation::measurements::gnss::CombinedObservationData result((jobject) NULL);

                if (!parseArgs(args, "kk", ::org::orekit::files::rinex::observation::ObservationData::initializeClass, ::org::orekit::files::rinex::observation::ObservationData::initializeClass, &a0, &a1))
                {
                  OBJ_CALL(result = self->object.combine(a0, a1));
                  return ::org::orekit::estimation::measurements::gnss::t_CombinedObservationData::wrap_Object(result);
                }
              }
            }

            PyErr_SetArgsError((PyObject *) self, "combine", args);
            return NULL;
          }

          static PyObject *t_AbstractDualFrequencyCombination_getName(t_AbstractDualFrequencyCombination *self)
          {
            ::java::lang::String result((jobject) NULL);
            OBJ_CALL(result = self->object.getName());
            return j2p(result);
          }

          static PyObject *t_AbstractDualFrequencyCombination_get__name(t_AbstractDualFrequencyCombination *self, void *data)
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
#include "org/orekit/files/general/PythonAttitudeEphemerisFile.h"
#include "java/util/Map.h"
#include "java/lang/Throwable.h"
#include "java/lang/Class.h"
#include "org/orekit/files/general/AttitudeEphemerisFile$SatelliteAttitudeEphemeris.h"
#include "java/lang/String.h"
#include "org/orekit/files/general/AttitudeEphemerisFile.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace general {

        ::java::lang::Class *PythonAttitudeEphemerisFile::class$ = NULL;
        jmethodID *PythonAttitudeEphemerisFile::mids$ = NULL;
        bool PythonAttitudeEphemerisFile::live$ = false;

        jclass PythonAttitudeEphemerisFile::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/files/general/PythonAttitudeEphemerisFile");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_a1fa5dae97ea5ed2] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_finalize_a1fa5dae97ea5ed2] = env->getMethodID(cls, "finalize", "()V");
            mids$[mid_getSatellites_810bed48fafb0b9a] = env->getMethodID(cls, "getSatellites", "()Ljava/util/Map;");
            mids$[mid_pythonDecRef_a1fa5dae97ea5ed2] = env->getMethodID(cls, "pythonDecRef", "()V");
            mids$[mid_pythonExtension_6c0ce7e438e5ded4] = env->getMethodID(cls, "pythonExtension", "()J");
            mids$[mid_pythonExtension_3d7dd2314a0dd456] = env->getMethodID(cls, "pythonExtension", "(J)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        PythonAttitudeEphemerisFile::PythonAttitudeEphemerisFile() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_a1fa5dae97ea5ed2)) {}

        void PythonAttitudeEphemerisFile::finalize() const
        {
          env->callVoidMethod(this$, mids$[mid_finalize_a1fa5dae97ea5ed2]);
        }

        jlong PythonAttitudeEphemerisFile::pythonExtension() const
        {
          return env->callLongMethod(this$, mids$[mid_pythonExtension_6c0ce7e438e5ded4]);
        }

        void PythonAttitudeEphemerisFile::pythonExtension(jlong a0) const
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
    namespace files {
      namespace general {
        static PyObject *t_PythonAttitudeEphemerisFile_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_PythonAttitudeEphemerisFile_instance_(PyTypeObject *type, PyObject *arg);
        static int t_PythonAttitudeEphemerisFile_init_(t_PythonAttitudeEphemerisFile *self, PyObject *args, PyObject *kwds);
        static PyObject *t_PythonAttitudeEphemerisFile_finalize(t_PythonAttitudeEphemerisFile *self);
        static PyObject *t_PythonAttitudeEphemerisFile_pythonExtension(t_PythonAttitudeEphemerisFile *self, PyObject *args);
        static jobject JNICALL t_PythonAttitudeEphemerisFile_getSatellites0(JNIEnv *jenv, jobject jobj);
        static void JNICALL t_PythonAttitudeEphemerisFile_pythonDecRef1(JNIEnv *jenv, jobject jobj);
        static PyObject *t_PythonAttitudeEphemerisFile_get__self(t_PythonAttitudeEphemerisFile *self, void *data);
        static PyGetSetDef t_PythonAttitudeEphemerisFile__fields_[] = {
          DECLARE_GET_FIELD(t_PythonAttitudeEphemerisFile, self),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_PythonAttitudeEphemerisFile__methods_[] = {
          DECLARE_METHOD(t_PythonAttitudeEphemerisFile, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonAttitudeEphemerisFile, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonAttitudeEphemerisFile, finalize, METH_NOARGS),
          DECLARE_METHOD(t_PythonAttitudeEphemerisFile, pythonExtension, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(PythonAttitudeEphemerisFile)[] = {
          { Py_tp_methods, t_PythonAttitudeEphemerisFile__methods_ },
          { Py_tp_init, (void *) t_PythonAttitudeEphemerisFile_init_ },
          { Py_tp_getset, t_PythonAttitudeEphemerisFile__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(PythonAttitudeEphemerisFile)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(PythonAttitudeEphemerisFile, t_PythonAttitudeEphemerisFile, PythonAttitudeEphemerisFile);

        void t_PythonAttitudeEphemerisFile::install(PyObject *module)
        {
          installType(&PY_TYPE(PythonAttitudeEphemerisFile), &PY_TYPE_DEF(PythonAttitudeEphemerisFile), module, "PythonAttitudeEphemerisFile", 1);
        }

        void t_PythonAttitudeEphemerisFile::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAttitudeEphemerisFile), "class_", make_descriptor(PythonAttitudeEphemerisFile::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAttitudeEphemerisFile), "wrapfn_", make_descriptor(t_PythonAttitudeEphemerisFile::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAttitudeEphemerisFile), "boxfn_", make_descriptor(boxObject));
          jclass cls = env->getClass(PythonAttitudeEphemerisFile::initializeClass);
          JNINativeMethod methods[] = {
            { "getSatellites", "()Ljava/util/Map;", (void *) t_PythonAttitudeEphemerisFile_getSatellites0 },
            { "pythonDecRef", "()V", (void *) t_PythonAttitudeEphemerisFile_pythonDecRef1 },
          };
          env->registerNatives(cls, methods, 2);
        }

        static PyObject *t_PythonAttitudeEphemerisFile_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, PythonAttitudeEphemerisFile::initializeClass, 1)))
            return NULL;
          return t_PythonAttitudeEphemerisFile::wrap_Object(PythonAttitudeEphemerisFile(((t_PythonAttitudeEphemerisFile *) arg)->object.this$));
        }
        static PyObject *t_PythonAttitudeEphemerisFile_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, PythonAttitudeEphemerisFile::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_PythonAttitudeEphemerisFile_init_(t_PythonAttitudeEphemerisFile *self, PyObject *args, PyObject *kwds)
        {
          PythonAttitudeEphemerisFile object((jobject) NULL);

          INT_CALL(object = PythonAttitudeEphemerisFile());
          self->object = object;

          Py_INCREF((PyObject *) self);
          self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

          return 0;
        }

        static PyObject *t_PythonAttitudeEphemerisFile_finalize(t_PythonAttitudeEphemerisFile *self)
        {
          OBJ_CALL(self->object.finalize());
          Py_RETURN_NONE;
        }

        static PyObject *t_PythonAttitudeEphemerisFile_pythonExtension(t_PythonAttitudeEphemerisFile *self, PyObject *args)
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

        static jobject JNICALL t_PythonAttitudeEphemerisFile_getSatellites0(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonAttitudeEphemerisFile::mids$[PythonAttitudeEphemerisFile::mid_pythonExtension_6c0ce7e438e5ded4]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          ::java::util::Map value((jobject) NULL);
          PyObject *result = PyObject_CallMethod(obj, "getSatellites", "");
          if (!result)
            throwPythonError();
          else if (parseArg(result, "k", ::java::util::Map::initializeClass, &value))
          {
            throwTypeError("getSatellites", result);
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

        static void JNICALL t_PythonAttitudeEphemerisFile_pythonDecRef1(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonAttitudeEphemerisFile::mids$[PythonAttitudeEphemerisFile::mid_pythonExtension_6c0ce7e438e5ded4]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

          if (obj != NULL)
          {
            jenv->CallVoidMethod(jobj, PythonAttitudeEphemerisFile::mids$[PythonAttitudeEphemerisFile::mid_pythonExtension_3d7dd2314a0dd456], (jlong) 0);
            env->finalizeObject(jenv, obj);
          }
        }

        static PyObject *t_PythonAttitudeEphemerisFile_get__self(t_PythonAttitudeEphemerisFile *self, void *data)
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
#include "org/orekit/propagation/FieldBoundedPropagator.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "java/lang/Class.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {

      ::java::lang::Class *FieldBoundedPropagator::class$ = NULL;
      jmethodID *FieldBoundedPropagator::mids$ = NULL;
      bool FieldBoundedPropagator::live$ = false;

      jclass FieldBoundedPropagator::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/propagation/FieldBoundedPropagator");

          mids$ = new jmethodID[max_mid];
          mids$[mid_getMaxDate_fa23a4301b9c83e7] = env->getMethodID(cls, "getMaxDate", "()Lorg/orekit/time/FieldAbsoluteDate;");
          mids$[mid_getMinDate_fa23a4301b9c83e7] = env->getMethodID(cls, "getMinDate", "()Lorg/orekit/time/FieldAbsoluteDate;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ::org::orekit::time::FieldAbsoluteDate FieldBoundedPropagator::getMaxDate() const
      {
        return ::org::orekit::time::FieldAbsoluteDate(env->callObjectMethod(this$, mids$[mid_getMaxDate_fa23a4301b9c83e7]));
      }

      ::org::orekit::time::FieldAbsoluteDate FieldBoundedPropagator::getMinDate() const
      {
        return ::org::orekit::time::FieldAbsoluteDate(env->callObjectMethod(this$, mids$[mid_getMinDate_fa23a4301b9c83e7]));
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
      static PyObject *t_FieldBoundedPropagator_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldBoundedPropagator_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldBoundedPropagator_of_(t_FieldBoundedPropagator *self, PyObject *args);
      static PyObject *t_FieldBoundedPropagator_getMaxDate(t_FieldBoundedPropagator *self);
      static PyObject *t_FieldBoundedPropagator_getMinDate(t_FieldBoundedPropagator *self);
      static PyObject *t_FieldBoundedPropagator_get__maxDate(t_FieldBoundedPropagator *self, void *data);
      static PyObject *t_FieldBoundedPropagator_get__minDate(t_FieldBoundedPropagator *self, void *data);
      static PyObject *t_FieldBoundedPropagator_get__parameters_(t_FieldBoundedPropagator *self, void *data);
      static PyGetSetDef t_FieldBoundedPropagator__fields_[] = {
        DECLARE_GET_FIELD(t_FieldBoundedPropagator, maxDate),
        DECLARE_GET_FIELD(t_FieldBoundedPropagator, minDate),
        DECLARE_GET_FIELD(t_FieldBoundedPropagator, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_FieldBoundedPropagator__methods_[] = {
        DECLARE_METHOD(t_FieldBoundedPropagator, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldBoundedPropagator, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldBoundedPropagator, of_, METH_VARARGS),
        DECLARE_METHOD(t_FieldBoundedPropagator, getMaxDate, METH_NOARGS),
        DECLARE_METHOD(t_FieldBoundedPropagator, getMinDate, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(FieldBoundedPropagator)[] = {
        { Py_tp_methods, t_FieldBoundedPropagator__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_FieldBoundedPropagator__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(FieldBoundedPropagator)[] = {
        &PY_TYPE_DEF(::org::orekit::propagation::FieldPropagator),
        NULL
      };

      DEFINE_TYPE(FieldBoundedPropagator, t_FieldBoundedPropagator, FieldBoundedPropagator);
      PyObject *t_FieldBoundedPropagator::wrap_Object(const FieldBoundedPropagator& object, PyTypeObject *p0)
      {
        PyObject *obj = t_FieldBoundedPropagator::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_FieldBoundedPropagator *self = (t_FieldBoundedPropagator *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_FieldBoundedPropagator::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_FieldBoundedPropagator::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_FieldBoundedPropagator *self = (t_FieldBoundedPropagator *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_FieldBoundedPropagator::install(PyObject *module)
      {
        installType(&PY_TYPE(FieldBoundedPropagator), &PY_TYPE_DEF(FieldBoundedPropagator), module, "FieldBoundedPropagator", 0);
      }

      void t_FieldBoundedPropagator::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldBoundedPropagator), "class_", make_descriptor(FieldBoundedPropagator::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldBoundedPropagator), "wrapfn_", make_descriptor(t_FieldBoundedPropagator::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldBoundedPropagator), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_FieldBoundedPropagator_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, FieldBoundedPropagator::initializeClass, 1)))
          return NULL;
        return t_FieldBoundedPropagator::wrap_Object(FieldBoundedPropagator(((t_FieldBoundedPropagator *) arg)->object.this$));
      }
      static PyObject *t_FieldBoundedPropagator_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, FieldBoundedPropagator::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_FieldBoundedPropagator_of_(t_FieldBoundedPropagator *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static PyObject *t_FieldBoundedPropagator_getMaxDate(t_FieldBoundedPropagator *self)
      {
        ::org::orekit::time::FieldAbsoluteDate result((jobject) NULL);
        OBJ_CALL(result = self->object.getMaxDate());
        return ::org::orekit::time::t_FieldAbsoluteDate::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_FieldBoundedPropagator_getMinDate(t_FieldBoundedPropagator *self)
      {
        ::org::orekit::time::FieldAbsoluteDate result((jobject) NULL);
        OBJ_CALL(result = self->object.getMinDate());
        return ::org::orekit::time::t_FieldAbsoluteDate::wrap_Object(result, self->parameters[0]);
      }
      static PyObject *t_FieldBoundedPropagator_get__parameters_(t_FieldBoundedPropagator *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }

      static PyObject *t_FieldBoundedPropagator_get__maxDate(t_FieldBoundedPropagator *self, void *data)
      {
        ::org::orekit::time::FieldAbsoluteDate value((jobject) NULL);
        OBJ_CALL(value = self->object.getMaxDate());
        return ::org::orekit::time::t_FieldAbsoluteDate::wrap_Object(value);
      }

      static PyObject *t_FieldBoundedPropagator_get__minDate(t_FieldBoundedPropagator *self, void *data)
      {
        ::org::orekit::time::FieldAbsoluteDate value((jobject) NULL);
        OBJ_CALL(value = self->object.getMinDate());
        return ::org::orekit::time::t_FieldAbsoluteDate::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/semianalytical/dsst/utilities/GammaMnsFunction.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace semianalytical {
        namespace dsst {
          namespace utilities {

            ::java::lang::Class *GammaMnsFunction::class$ = NULL;
            jmethodID *GammaMnsFunction::mids$ = NULL;
            bool GammaMnsFunction::live$ = false;

            jclass GammaMnsFunction::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/propagation/semianalytical/dsst/utilities/GammaMnsFunction");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_264bda71bb71d22c] = env->getMethodID(cls, "<init>", "(IDI)V");
                mids$[mid_getDerivative_2f53baea9459d443] = env->getMethodID(cls, "getDerivative", "(III)D");
                mids$[mid_getValue_2f53baea9459d443] = env->getMethodID(cls, "getValue", "(III)D");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            GammaMnsFunction::GammaMnsFunction(jint a0, jdouble a1, jint a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_264bda71bb71d22c, a0, a1, a2)) {}

            jdouble GammaMnsFunction::getDerivative(jint a0, jint a1, jint a2) const
            {
              return env->callDoubleMethod(this$, mids$[mid_getDerivative_2f53baea9459d443], a0, a1, a2);
            }

            jdouble GammaMnsFunction::getValue(jint a0, jint a1, jint a2) const
            {
              return env->callDoubleMethod(this$, mids$[mid_getValue_2f53baea9459d443], a0, a1, a2);
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
      namespace semianalytical {
        namespace dsst {
          namespace utilities {
            static PyObject *t_GammaMnsFunction_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_GammaMnsFunction_instance_(PyTypeObject *type, PyObject *arg);
            static int t_GammaMnsFunction_init_(t_GammaMnsFunction *self, PyObject *args, PyObject *kwds);
            static PyObject *t_GammaMnsFunction_getDerivative(t_GammaMnsFunction *self, PyObject *args);
            static PyObject *t_GammaMnsFunction_getValue(t_GammaMnsFunction *self, PyObject *args);

            static PyMethodDef t_GammaMnsFunction__methods_[] = {
              DECLARE_METHOD(t_GammaMnsFunction, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_GammaMnsFunction, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_GammaMnsFunction, getDerivative, METH_VARARGS),
              DECLARE_METHOD(t_GammaMnsFunction, getValue, METH_VARARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(GammaMnsFunction)[] = {
              { Py_tp_methods, t_GammaMnsFunction__methods_ },
              { Py_tp_init, (void *) t_GammaMnsFunction_init_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(GammaMnsFunction)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(GammaMnsFunction, t_GammaMnsFunction, GammaMnsFunction);

            void t_GammaMnsFunction::install(PyObject *module)
            {
              installType(&PY_TYPE(GammaMnsFunction), &PY_TYPE_DEF(GammaMnsFunction), module, "GammaMnsFunction", 0);
            }

            void t_GammaMnsFunction::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(GammaMnsFunction), "class_", make_descriptor(GammaMnsFunction::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(GammaMnsFunction), "wrapfn_", make_descriptor(t_GammaMnsFunction::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(GammaMnsFunction), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_GammaMnsFunction_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, GammaMnsFunction::initializeClass, 1)))
                return NULL;
              return t_GammaMnsFunction::wrap_Object(GammaMnsFunction(((t_GammaMnsFunction *) arg)->object.this$));
            }
            static PyObject *t_GammaMnsFunction_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, GammaMnsFunction::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static int t_GammaMnsFunction_init_(t_GammaMnsFunction *self, PyObject *args, PyObject *kwds)
            {
              jint a0;
              jdouble a1;
              jint a2;
              GammaMnsFunction object((jobject) NULL);

              if (!parseArgs(args, "IDI", &a0, &a1, &a2))
              {
                INT_CALL(object = GammaMnsFunction(a0, a1, a2));
                self->object = object;
              }
              else
              {
                PyErr_SetArgsError((PyObject *) self, "__init__", args);
                return -1;
              }

              return 0;
            }

            static PyObject *t_GammaMnsFunction_getDerivative(t_GammaMnsFunction *self, PyObject *args)
            {
              jint a0;
              jint a1;
              jint a2;
              jdouble result;

              if (!parseArgs(args, "III", &a0, &a1, &a2))
              {
                OBJ_CALL(result = self->object.getDerivative(a0, a1, a2));
                return PyFloat_FromDouble((double) result);
              }

              PyErr_SetArgsError((PyObject *) self, "getDerivative", args);
              return NULL;
            }

            static PyObject *t_GammaMnsFunction_getValue(t_GammaMnsFunction *self, PyObject *args)
            {
              jint a0;
              jint a1;
              jint a2;
              jdouble result;

              if (!parseArgs(args, "III", &a0, &a1, &a2))
              {
                OBJ_CALL(result = self->object.getValue(a0, a1, a2));
                return PyFloat_FromDouble((double) result);
              }

              PyErr_SetArgsError((PyObject *) self, "getValue", args);
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
#include "org/hipparchus/analysis/function/Atanh.h"
#include "org/hipparchus/analysis/differentiation/UnivariateDifferentiableFunction.h"
#include "org/hipparchus/analysis/differentiation/Derivative.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace function {

        ::java::lang::Class *Atanh::class$ = NULL;
        jmethodID *Atanh::mids$ = NULL;
        bool Atanh::live$ = false;

        jclass Atanh::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/function/Atanh");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_a1fa5dae97ea5ed2] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_value_04fd0666b613d2ab] = env->getMethodID(cls, "value", "(D)D");
            mids$[mid_value_a5332de4d4d64b08] = env->getMethodID(cls, "value", "(Lorg/hipparchus/analysis/differentiation/Derivative;)Lorg/hipparchus/analysis/differentiation/Derivative;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        Atanh::Atanh() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_a1fa5dae97ea5ed2)) {}

        jdouble Atanh::value(jdouble a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_value_04fd0666b613d2ab], a0);
        }

        ::org::hipparchus::analysis::differentiation::Derivative Atanh::value(const ::org::hipparchus::analysis::differentiation::Derivative & a0) const
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
        static PyObject *t_Atanh_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_Atanh_instance_(PyTypeObject *type, PyObject *arg);
        static int t_Atanh_init_(t_Atanh *self, PyObject *args, PyObject *kwds);
        static PyObject *t_Atanh_value(t_Atanh *self, PyObject *args);

        static PyMethodDef t_Atanh__methods_[] = {
          DECLARE_METHOD(t_Atanh, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Atanh, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Atanh, value, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(Atanh)[] = {
          { Py_tp_methods, t_Atanh__methods_ },
          { Py_tp_init, (void *) t_Atanh_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(Atanh)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(Atanh, t_Atanh, Atanh);

        void t_Atanh::install(PyObject *module)
        {
          installType(&PY_TYPE(Atanh), &PY_TYPE_DEF(Atanh), module, "Atanh", 0);
        }

        void t_Atanh::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(Atanh), "class_", make_descriptor(Atanh::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Atanh), "wrapfn_", make_descriptor(t_Atanh::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Atanh), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_Atanh_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, Atanh::initializeClass, 1)))
            return NULL;
          return t_Atanh::wrap_Object(Atanh(((t_Atanh *) arg)->object.this$));
        }
        static PyObject *t_Atanh_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, Atanh::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_Atanh_init_(t_Atanh *self, PyObject *args, PyObject *kwds)
        {
          Atanh object((jobject) NULL);

          INT_CALL(object = Atanh());
          self->object = object;

          return 0;
        }

        static PyObject *t_Atanh_value(t_Atanh *self, PyObject *args)
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
#include "org/orekit/files/rinex/observation/GlonassSatelliteChannel.h"
#include "org/orekit/gnss/SatInSystem.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace rinex {
        namespace observation {

          ::java::lang::Class *GlonassSatelliteChannel::class$ = NULL;
          jmethodID *GlonassSatelliteChannel::mids$ = NULL;
          bool GlonassSatelliteChannel::live$ = false;

          jclass GlonassSatelliteChannel::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/files/rinex/observation/GlonassSatelliteChannel");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_c1a3cad465027435] = env->getMethodID(cls, "<init>", "(Lorg/orekit/gnss/SatInSystem;I)V");
              mids$[mid_getK_55546ef6a647f39b] = env->getMethodID(cls, "getK", "()I");
              mids$[mid_getSatellite_8afd42585cbd5311] = env->getMethodID(cls, "getSatellite", "()Lorg/orekit/gnss/SatInSystem;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          GlonassSatelliteChannel::GlonassSatelliteChannel(const ::org::orekit::gnss::SatInSystem & a0, jint a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_c1a3cad465027435, a0.this$, a1)) {}

          jint GlonassSatelliteChannel::getK() const
          {
            return env->callIntMethod(this$, mids$[mid_getK_55546ef6a647f39b]);
          }

          ::org::orekit::gnss::SatInSystem GlonassSatelliteChannel::getSatellite() const
          {
            return ::org::orekit::gnss::SatInSystem(env->callObjectMethod(this$, mids$[mid_getSatellite_8afd42585cbd5311]));
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
      namespace rinex {
        namespace observation {
          static PyObject *t_GlonassSatelliteChannel_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_GlonassSatelliteChannel_instance_(PyTypeObject *type, PyObject *arg);
          static int t_GlonassSatelliteChannel_init_(t_GlonassSatelliteChannel *self, PyObject *args, PyObject *kwds);
          static PyObject *t_GlonassSatelliteChannel_getK(t_GlonassSatelliteChannel *self);
          static PyObject *t_GlonassSatelliteChannel_getSatellite(t_GlonassSatelliteChannel *self);
          static PyObject *t_GlonassSatelliteChannel_get__k(t_GlonassSatelliteChannel *self, void *data);
          static PyObject *t_GlonassSatelliteChannel_get__satellite(t_GlonassSatelliteChannel *self, void *data);
          static PyGetSetDef t_GlonassSatelliteChannel__fields_[] = {
            DECLARE_GET_FIELD(t_GlonassSatelliteChannel, k),
            DECLARE_GET_FIELD(t_GlonassSatelliteChannel, satellite),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_GlonassSatelliteChannel__methods_[] = {
            DECLARE_METHOD(t_GlonassSatelliteChannel, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_GlonassSatelliteChannel, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_GlonassSatelliteChannel, getK, METH_NOARGS),
            DECLARE_METHOD(t_GlonassSatelliteChannel, getSatellite, METH_NOARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(GlonassSatelliteChannel)[] = {
            { Py_tp_methods, t_GlonassSatelliteChannel__methods_ },
            { Py_tp_init, (void *) t_GlonassSatelliteChannel_init_ },
            { Py_tp_getset, t_GlonassSatelliteChannel__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(GlonassSatelliteChannel)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(GlonassSatelliteChannel, t_GlonassSatelliteChannel, GlonassSatelliteChannel);

          void t_GlonassSatelliteChannel::install(PyObject *module)
          {
            installType(&PY_TYPE(GlonassSatelliteChannel), &PY_TYPE_DEF(GlonassSatelliteChannel), module, "GlonassSatelliteChannel", 0);
          }

          void t_GlonassSatelliteChannel::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(GlonassSatelliteChannel), "class_", make_descriptor(GlonassSatelliteChannel::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(GlonassSatelliteChannel), "wrapfn_", make_descriptor(t_GlonassSatelliteChannel::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(GlonassSatelliteChannel), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_GlonassSatelliteChannel_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, GlonassSatelliteChannel::initializeClass, 1)))
              return NULL;
            return t_GlonassSatelliteChannel::wrap_Object(GlonassSatelliteChannel(((t_GlonassSatelliteChannel *) arg)->object.this$));
          }
          static PyObject *t_GlonassSatelliteChannel_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, GlonassSatelliteChannel::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_GlonassSatelliteChannel_init_(t_GlonassSatelliteChannel *self, PyObject *args, PyObject *kwds)
          {
            ::org::orekit::gnss::SatInSystem a0((jobject) NULL);
            jint a1;
            GlonassSatelliteChannel object((jobject) NULL);

            if (!parseArgs(args, "kI", ::org::orekit::gnss::SatInSystem::initializeClass, &a0, &a1))
            {
              INT_CALL(object = GlonassSatelliteChannel(a0, a1));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_GlonassSatelliteChannel_getK(t_GlonassSatelliteChannel *self)
          {
            jint result;
            OBJ_CALL(result = self->object.getK());
            return PyLong_FromLong((long) result);
          }

          static PyObject *t_GlonassSatelliteChannel_getSatellite(t_GlonassSatelliteChannel *self)
          {
            ::org::orekit::gnss::SatInSystem result((jobject) NULL);
            OBJ_CALL(result = self->object.getSatellite());
            return ::org::orekit::gnss::t_SatInSystem::wrap_Object(result);
          }

          static PyObject *t_GlonassSatelliteChannel_get__k(t_GlonassSatelliteChannel *self, void *data)
          {
            jint value;
            OBJ_CALL(value = self->object.getK());
            return PyLong_FromLong((long) value);
          }

          static PyObject *t_GlonassSatelliteChannel_get__satellite(t_GlonassSatelliteChannel *self, void *data)
          {
            ::org::orekit::gnss::SatInSystem value((jobject) NULL);
            OBJ_CALL(value = self->object.getSatellite());
            return ::org::orekit::gnss::t_SatInSystem::wrap_Object(value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/distribution/continuous/ParetoDistribution.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace distribution {
      namespace continuous {

        ::java::lang::Class *ParetoDistribution::class$ = NULL;
        jmethodID *ParetoDistribution::mids$ = NULL;
        bool ParetoDistribution::live$ = false;

        jclass ParetoDistribution::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/distribution/continuous/ParetoDistribution");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_a1fa5dae97ea5ed2] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_init$_369b4c97255d5afa] = env->getMethodID(cls, "<init>", "(DD)V");
            mids$[mid_init$_b5167f35b2521627] = env->getMethodID(cls, "<init>", "(DDD)V");
            mids$[mid_cumulativeProbability_04fd0666b613d2ab] = env->getMethodID(cls, "cumulativeProbability", "(D)D");
            mids$[mid_density_04fd0666b613d2ab] = env->getMethodID(cls, "density", "(D)D");
            mids$[mid_getNumericalMean_b74f83833fdad017] = env->getMethodID(cls, "getNumericalMean", "()D");
            mids$[mid_getNumericalVariance_b74f83833fdad017] = env->getMethodID(cls, "getNumericalVariance", "()D");
            mids$[mid_getScale_b74f83833fdad017] = env->getMethodID(cls, "getScale", "()D");
            mids$[mid_getShape_b74f83833fdad017] = env->getMethodID(cls, "getShape", "()D");
            mids$[mid_getSupportLowerBound_b74f83833fdad017] = env->getMethodID(cls, "getSupportLowerBound", "()D");
            mids$[mid_getSupportUpperBound_b74f83833fdad017] = env->getMethodID(cls, "getSupportUpperBound", "()D");
            mids$[mid_isSupportConnected_9ab94ac1dc23b105] = env->getMethodID(cls, "isSupportConnected", "()Z");
            mids$[mid_logDensity_04fd0666b613d2ab] = env->getMethodID(cls, "logDensity", "(D)D");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ParetoDistribution::ParetoDistribution() : ::org::hipparchus::distribution::continuous::AbstractRealDistribution(env->newObject(initializeClass, &mids$, mid_init$_a1fa5dae97ea5ed2)) {}

        ParetoDistribution::ParetoDistribution(jdouble a0, jdouble a1) : ::org::hipparchus::distribution::continuous::AbstractRealDistribution(env->newObject(initializeClass, &mids$, mid_init$_369b4c97255d5afa, a0, a1)) {}

        ParetoDistribution::ParetoDistribution(jdouble a0, jdouble a1, jdouble a2) : ::org::hipparchus::distribution::continuous::AbstractRealDistribution(env->newObject(initializeClass, &mids$, mid_init$_b5167f35b2521627, a0, a1, a2)) {}

        jdouble ParetoDistribution::cumulativeProbability(jdouble a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_cumulativeProbability_04fd0666b613d2ab], a0);
        }

        jdouble ParetoDistribution::density(jdouble a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_density_04fd0666b613d2ab], a0);
        }

        jdouble ParetoDistribution::getNumericalMean() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getNumericalMean_b74f83833fdad017]);
        }

        jdouble ParetoDistribution::getNumericalVariance() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getNumericalVariance_b74f83833fdad017]);
        }

        jdouble ParetoDistribution::getScale() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getScale_b74f83833fdad017]);
        }

        jdouble ParetoDistribution::getShape() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getShape_b74f83833fdad017]);
        }

        jdouble ParetoDistribution::getSupportLowerBound() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getSupportLowerBound_b74f83833fdad017]);
        }

        jdouble ParetoDistribution::getSupportUpperBound() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getSupportUpperBound_b74f83833fdad017]);
        }

        jboolean ParetoDistribution::isSupportConnected() const
        {
          return env->callBooleanMethod(this$, mids$[mid_isSupportConnected_9ab94ac1dc23b105]);
        }

        jdouble ParetoDistribution::logDensity(jdouble a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_logDensity_04fd0666b613d2ab], a0);
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
    namespace distribution {
      namespace continuous {
        static PyObject *t_ParetoDistribution_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_ParetoDistribution_instance_(PyTypeObject *type, PyObject *arg);
        static int t_ParetoDistribution_init_(t_ParetoDistribution *self, PyObject *args, PyObject *kwds);
        static PyObject *t_ParetoDistribution_cumulativeProbability(t_ParetoDistribution *self, PyObject *args);
        static PyObject *t_ParetoDistribution_density(t_ParetoDistribution *self, PyObject *args);
        static PyObject *t_ParetoDistribution_getNumericalMean(t_ParetoDistribution *self, PyObject *args);
        static PyObject *t_ParetoDistribution_getNumericalVariance(t_ParetoDistribution *self, PyObject *args);
        static PyObject *t_ParetoDistribution_getScale(t_ParetoDistribution *self);
        static PyObject *t_ParetoDistribution_getShape(t_ParetoDistribution *self);
        static PyObject *t_ParetoDistribution_getSupportLowerBound(t_ParetoDistribution *self, PyObject *args);
        static PyObject *t_ParetoDistribution_getSupportUpperBound(t_ParetoDistribution *self, PyObject *args);
        static PyObject *t_ParetoDistribution_isSupportConnected(t_ParetoDistribution *self, PyObject *args);
        static PyObject *t_ParetoDistribution_logDensity(t_ParetoDistribution *self, PyObject *args);
        static PyObject *t_ParetoDistribution_get__numericalMean(t_ParetoDistribution *self, void *data);
        static PyObject *t_ParetoDistribution_get__numericalVariance(t_ParetoDistribution *self, void *data);
        static PyObject *t_ParetoDistribution_get__scale(t_ParetoDistribution *self, void *data);
        static PyObject *t_ParetoDistribution_get__shape(t_ParetoDistribution *self, void *data);
        static PyObject *t_ParetoDistribution_get__supportConnected(t_ParetoDistribution *self, void *data);
        static PyObject *t_ParetoDistribution_get__supportLowerBound(t_ParetoDistribution *self, void *data);
        static PyObject *t_ParetoDistribution_get__supportUpperBound(t_ParetoDistribution *self, void *data);
        static PyGetSetDef t_ParetoDistribution__fields_[] = {
          DECLARE_GET_FIELD(t_ParetoDistribution, numericalMean),
          DECLARE_GET_FIELD(t_ParetoDistribution, numericalVariance),
          DECLARE_GET_FIELD(t_ParetoDistribution, scale),
          DECLARE_GET_FIELD(t_ParetoDistribution, shape),
          DECLARE_GET_FIELD(t_ParetoDistribution, supportConnected),
          DECLARE_GET_FIELD(t_ParetoDistribution, supportLowerBound),
          DECLARE_GET_FIELD(t_ParetoDistribution, supportUpperBound),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_ParetoDistribution__methods_[] = {
          DECLARE_METHOD(t_ParetoDistribution, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_ParetoDistribution, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_ParetoDistribution, cumulativeProbability, METH_VARARGS),
          DECLARE_METHOD(t_ParetoDistribution, density, METH_VARARGS),
          DECLARE_METHOD(t_ParetoDistribution, getNumericalMean, METH_VARARGS),
          DECLARE_METHOD(t_ParetoDistribution, getNumericalVariance, METH_VARARGS),
          DECLARE_METHOD(t_ParetoDistribution, getScale, METH_NOARGS),
          DECLARE_METHOD(t_ParetoDistribution, getShape, METH_NOARGS),
          DECLARE_METHOD(t_ParetoDistribution, getSupportLowerBound, METH_VARARGS),
          DECLARE_METHOD(t_ParetoDistribution, getSupportUpperBound, METH_VARARGS),
          DECLARE_METHOD(t_ParetoDistribution, isSupportConnected, METH_VARARGS),
          DECLARE_METHOD(t_ParetoDistribution, logDensity, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(ParetoDistribution)[] = {
          { Py_tp_methods, t_ParetoDistribution__methods_ },
          { Py_tp_init, (void *) t_ParetoDistribution_init_ },
          { Py_tp_getset, t_ParetoDistribution__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(ParetoDistribution)[] = {
          &PY_TYPE_DEF(::org::hipparchus::distribution::continuous::AbstractRealDistribution),
          NULL
        };

        DEFINE_TYPE(ParetoDistribution, t_ParetoDistribution, ParetoDistribution);

        void t_ParetoDistribution::install(PyObject *module)
        {
          installType(&PY_TYPE(ParetoDistribution), &PY_TYPE_DEF(ParetoDistribution), module, "ParetoDistribution", 0);
        }

        void t_ParetoDistribution::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(ParetoDistribution), "class_", make_descriptor(ParetoDistribution::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(ParetoDistribution), "wrapfn_", make_descriptor(t_ParetoDistribution::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(ParetoDistribution), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_ParetoDistribution_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, ParetoDistribution::initializeClass, 1)))
            return NULL;
          return t_ParetoDistribution::wrap_Object(ParetoDistribution(((t_ParetoDistribution *) arg)->object.this$));
        }
        static PyObject *t_ParetoDistribution_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, ParetoDistribution::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_ParetoDistribution_init_(t_ParetoDistribution *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 0:
            {
              ParetoDistribution object((jobject) NULL);

              INT_CALL(object = ParetoDistribution());
              self->object = object;
              break;
            }
           case 2:
            {
              jdouble a0;
              jdouble a1;
              ParetoDistribution object((jobject) NULL);

              if (!parseArgs(args, "DD", &a0, &a1))
              {
                INT_CALL(object = ParetoDistribution(a0, a1));
                self->object = object;
                break;
              }
            }
            goto err;
           case 3:
            {
              jdouble a0;
              jdouble a1;
              jdouble a2;
              ParetoDistribution object((jobject) NULL);

              if (!parseArgs(args, "DDD", &a0, &a1, &a2))
              {
                INT_CALL(object = ParetoDistribution(a0, a1, a2));
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

        static PyObject *t_ParetoDistribution_cumulativeProbability(t_ParetoDistribution *self, PyObject *args)
        {
          jdouble a0;
          jdouble result;

          if (!parseArgs(args, "D", &a0))
          {
            OBJ_CALL(result = self->object.cumulativeProbability(a0));
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(ParetoDistribution), (PyObject *) self, "cumulativeProbability", args, 2);
        }

        static PyObject *t_ParetoDistribution_density(t_ParetoDistribution *self, PyObject *args)
        {
          jdouble a0;
          jdouble result;

          if (!parseArgs(args, "D", &a0))
          {
            OBJ_CALL(result = self->object.density(a0));
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(ParetoDistribution), (PyObject *) self, "density", args, 2);
        }

        static PyObject *t_ParetoDistribution_getNumericalMean(t_ParetoDistribution *self, PyObject *args)
        {
          jdouble result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getNumericalMean());
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(ParetoDistribution), (PyObject *) self, "getNumericalMean", args, 2);
        }

        static PyObject *t_ParetoDistribution_getNumericalVariance(t_ParetoDistribution *self, PyObject *args)
        {
          jdouble result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getNumericalVariance());
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(ParetoDistribution), (PyObject *) self, "getNumericalVariance", args, 2);
        }

        static PyObject *t_ParetoDistribution_getScale(t_ParetoDistribution *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getScale());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_ParetoDistribution_getShape(t_ParetoDistribution *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getShape());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_ParetoDistribution_getSupportLowerBound(t_ParetoDistribution *self, PyObject *args)
        {
          jdouble result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getSupportLowerBound());
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(ParetoDistribution), (PyObject *) self, "getSupportLowerBound", args, 2);
        }

        static PyObject *t_ParetoDistribution_getSupportUpperBound(t_ParetoDistribution *self, PyObject *args)
        {
          jdouble result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getSupportUpperBound());
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(ParetoDistribution), (PyObject *) self, "getSupportUpperBound", args, 2);
        }

        static PyObject *t_ParetoDistribution_isSupportConnected(t_ParetoDistribution *self, PyObject *args)
        {
          jboolean result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.isSupportConnected());
            Py_RETURN_BOOL(result);
          }

          return callSuper(PY_TYPE(ParetoDistribution), (PyObject *) self, "isSupportConnected", args, 2);
        }

        static PyObject *t_ParetoDistribution_logDensity(t_ParetoDistribution *self, PyObject *args)
        {
          jdouble a0;
          jdouble result;

          if (!parseArgs(args, "D", &a0))
          {
            OBJ_CALL(result = self->object.logDensity(a0));
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(ParetoDistribution), (PyObject *) self, "logDensity", args, 2);
        }

        static PyObject *t_ParetoDistribution_get__numericalMean(t_ParetoDistribution *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getNumericalMean());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_ParetoDistribution_get__numericalVariance(t_ParetoDistribution *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getNumericalVariance());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_ParetoDistribution_get__scale(t_ParetoDistribution *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getScale());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_ParetoDistribution_get__shape(t_ParetoDistribution *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getShape());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_ParetoDistribution_get__supportConnected(t_ParetoDistribution *self, void *data)
        {
          jboolean value;
          OBJ_CALL(value = self->object.isSupportConnected());
          Py_RETURN_BOOL(value);
        }

        static PyObject *t_ParetoDistribution_get__supportLowerBound(t_ParetoDistribution *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getSupportLowerBound());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_ParetoDistribution_get__supportUpperBound(t_ParetoDistribution *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getSupportUpperBound());
          return PyFloat_FromDouble((double) value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/bodies/PythonCelestialBodyLoader.h"
#include "org/orekit/bodies/CelestialBodyLoader.h"
#include "java/lang/Throwable.h"
#include "java/lang/Class.h"
#include "org/orekit/bodies/CelestialBody.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace bodies {

      ::java::lang::Class *PythonCelestialBodyLoader::class$ = NULL;
      jmethodID *PythonCelestialBodyLoader::mids$ = NULL;
      bool PythonCelestialBodyLoader::live$ = false;

      jclass PythonCelestialBodyLoader::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/bodies/PythonCelestialBodyLoader");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_a1fa5dae97ea5ed2] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_finalize_a1fa5dae97ea5ed2] = env->getMethodID(cls, "finalize", "()V");
          mids$[mid_loadCelestialBody_7eb4325e211386e9] = env->getMethodID(cls, "loadCelestialBody", "(Ljava/lang/String;)Lorg/orekit/bodies/CelestialBody;");
          mids$[mid_pythonDecRef_a1fa5dae97ea5ed2] = env->getMethodID(cls, "pythonDecRef", "()V");
          mids$[mid_pythonExtension_6c0ce7e438e5ded4] = env->getMethodID(cls, "pythonExtension", "()J");
          mids$[mid_pythonExtension_3d7dd2314a0dd456] = env->getMethodID(cls, "pythonExtension", "(J)V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      PythonCelestialBodyLoader::PythonCelestialBodyLoader() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_a1fa5dae97ea5ed2)) {}

      void PythonCelestialBodyLoader::finalize() const
      {
        env->callVoidMethod(this$, mids$[mid_finalize_a1fa5dae97ea5ed2]);
      }

      jlong PythonCelestialBodyLoader::pythonExtension() const
      {
        return env->callLongMethod(this$, mids$[mid_pythonExtension_6c0ce7e438e5ded4]);
      }

      void PythonCelestialBodyLoader::pythonExtension(jlong a0) const
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
    namespace bodies {
      static PyObject *t_PythonCelestialBodyLoader_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_PythonCelestialBodyLoader_instance_(PyTypeObject *type, PyObject *arg);
      static int t_PythonCelestialBodyLoader_init_(t_PythonCelestialBodyLoader *self, PyObject *args, PyObject *kwds);
      static PyObject *t_PythonCelestialBodyLoader_finalize(t_PythonCelestialBodyLoader *self);
      static PyObject *t_PythonCelestialBodyLoader_pythonExtension(t_PythonCelestialBodyLoader *self, PyObject *args);
      static jobject JNICALL t_PythonCelestialBodyLoader_loadCelestialBody0(JNIEnv *jenv, jobject jobj, jobject a0);
      static void JNICALL t_PythonCelestialBodyLoader_pythonDecRef1(JNIEnv *jenv, jobject jobj);
      static PyObject *t_PythonCelestialBodyLoader_get__self(t_PythonCelestialBodyLoader *self, void *data);
      static PyGetSetDef t_PythonCelestialBodyLoader__fields_[] = {
        DECLARE_GET_FIELD(t_PythonCelestialBodyLoader, self),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_PythonCelestialBodyLoader__methods_[] = {
        DECLARE_METHOD(t_PythonCelestialBodyLoader, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonCelestialBodyLoader, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonCelestialBodyLoader, finalize, METH_NOARGS),
        DECLARE_METHOD(t_PythonCelestialBodyLoader, pythonExtension, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(PythonCelestialBodyLoader)[] = {
        { Py_tp_methods, t_PythonCelestialBodyLoader__methods_ },
        { Py_tp_init, (void *) t_PythonCelestialBodyLoader_init_ },
        { Py_tp_getset, t_PythonCelestialBodyLoader__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(PythonCelestialBodyLoader)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(PythonCelestialBodyLoader, t_PythonCelestialBodyLoader, PythonCelestialBodyLoader);

      void t_PythonCelestialBodyLoader::install(PyObject *module)
      {
        installType(&PY_TYPE(PythonCelestialBodyLoader), &PY_TYPE_DEF(PythonCelestialBodyLoader), module, "PythonCelestialBodyLoader", 1);
      }

      void t_PythonCelestialBodyLoader::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonCelestialBodyLoader), "class_", make_descriptor(PythonCelestialBodyLoader::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonCelestialBodyLoader), "wrapfn_", make_descriptor(t_PythonCelestialBodyLoader::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonCelestialBodyLoader), "boxfn_", make_descriptor(boxObject));
        jclass cls = env->getClass(PythonCelestialBodyLoader::initializeClass);
        JNINativeMethod methods[] = {
          { "loadCelestialBody", "(Ljava/lang/String;)Lorg/orekit/bodies/CelestialBody;", (void *) t_PythonCelestialBodyLoader_loadCelestialBody0 },
          { "pythonDecRef", "()V", (void *) t_PythonCelestialBodyLoader_pythonDecRef1 },
        };
        env->registerNatives(cls, methods, 2);
      }

      static PyObject *t_PythonCelestialBodyLoader_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, PythonCelestialBodyLoader::initializeClass, 1)))
          return NULL;
        return t_PythonCelestialBodyLoader::wrap_Object(PythonCelestialBodyLoader(((t_PythonCelestialBodyLoader *) arg)->object.this$));
      }
      static PyObject *t_PythonCelestialBodyLoader_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, PythonCelestialBodyLoader::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_PythonCelestialBodyLoader_init_(t_PythonCelestialBodyLoader *self, PyObject *args, PyObject *kwds)
      {
        PythonCelestialBodyLoader object((jobject) NULL);

        INT_CALL(object = PythonCelestialBodyLoader());
        self->object = object;

        Py_INCREF((PyObject *) self);
        self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

        return 0;
      }

      static PyObject *t_PythonCelestialBodyLoader_finalize(t_PythonCelestialBodyLoader *self)
      {
        OBJ_CALL(self->object.finalize());
        Py_RETURN_NONE;
      }

      static PyObject *t_PythonCelestialBodyLoader_pythonExtension(t_PythonCelestialBodyLoader *self, PyObject *args)
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

      static jobject JNICALL t_PythonCelestialBodyLoader_loadCelestialBody0(JNIEnv *jenv, jobject jobj, jobject a0)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonCelestialBodyLoader::mids$[PythonCelestialBodyLoader::mid_pythonExtension_6c0ce7e438e5ded4]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::bodies::CelestialBody value((jobject) NULL);
        PyObject *o0 = env->fromJString((jstring) a0, 0);
        PyObject *result = PyObject_CallMethod(obj, "loadCelestialBody", "O", o0);
        Py_DECREF(o0);
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::bodies::CelestialBody::initializeClass, &value))
        {
          throwTypeError("loadCelestialBody", result);
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

      static void JNICALL t_PythonCelestialBodyLoader_pythonDecRef1(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonCelestialBodyLoader::mids$[PythonCelestialBodyLoader::mid_pythonExtension_6c0ce7e438e5ded4]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

        if (obj != NULL)
        {
          jenv->CallVoidMethod(jobj, PythonCelestialBodyLoader::mids$[PythonCelestialBodyLoader::mid_pythonExtension_3d7dd2314a0dd456], (jlong) 0);
          env->finalizeObject(jenv, obj);
        }
      }

      static PyObject *t_PythonCelestialBodyLoader_get__self(t_PythonCelestialBodyLoader *self, void *data)
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
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/forces/SlewingPanel.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldVector3D.h"
#include "java/lang/Class.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace forces {

      ::java::lang::Class *SlewingPanel::class$ = NULL;
      jmethodID *SlewingPanel::mids$ = NULL;
      bool SlewingPanel::live$ = false;

      jclass SlewingPanel::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/forces/SlewingPanel");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_1830819e89631406] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;DLorg/orekit/time/AbsoluteDate;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;DDDDD)V");
          mids$[mid_getNormal_de3c04262e60a5b3] = env->getMethodID(cls, "getNormal", "(Lorg/orekit/propagation/FieldSpacecraftState;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
          mids$[mid_getNormal_9019a5b32b11453a] = env->getMethodID(cls, "getNormal", "(Lorg/orekit/propagation/SpacecraftState;)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      SlewingPanel::SlewingPanel(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0, jdouble a1, const ::org::orekit::time::AbsoluteDate & a2, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a3, jdouble a4, jdouble a5, jdouble a6, jdouble a7, jdouble a8) : ::org::orekit::forces::Panel(env->newObject(initializeClass, &mids$, mid_init$_1830819e89631406, a0.this$, a1, a2.this$, a3.this$, a4, a5, a6, a7, a8)) {}

      ::org::hipparchus::geometry::euclidean::threed::FieldVector3D SlewingPanel::getNormal(const ::org::orekit::propagation::FieldSpacecraftState & a0) const
      {
        return ::org::hipparchus::geometry::euclidean::threed::FieldVector3D(env->callObjectMethod(this$, mids$[mid_getNormal_de3c04262e60a5b3], a0.this$));
      }

      ::org::hipparchus::geometry::euclidean::threed::Vector3D SlewingPanel::getNormal(const ::org::orekit::propagation::SpacecraftState & a0) const
      {
        return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getNormal_9019a5b32b11453a], a0.this$));
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
      static PyObject *t_SlewingPanel_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_SlewingPanel_instance_(PyTypeObject *type, PyObject *arg);
      static int t_SlewingPanel_init_(t_SlewingPanel *self, PyObject *args, PyObject *kwds);
      static PyObject *t_SlewingPanel_getNormal(t_SlewingPanel *self, PyObject *args);

      static PyMethodDef t_SlewingPanel__methods_[] = {
        DECLARE_METHOD(t_SlewingPanel, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_SlewingPanel, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_SlewingPanel, getNormal, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(SlewingPanel)[] = {
        { Py_tp_methods, t_SlewingPanel__methods_ },
        { Py_tp_init, (void *) t_SlewingPanel_init_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(SlewingPanel)[] = {
        &PY_TYPE_DEF(::org::orekit::forces::Panel),
        NULL
      };

      DEFINE_TYPE(SlewingPanel, t_SlewingPanel, SlewingPanel);

      void t_SlewingPanel::install(PyObject *module)
      {
        installType(&PY_TYPE(SlewingPanel), &PY_TYPE_DEF(SlewingPanel), module, "SlewingPanel", 0);
      }

      void t_SlewingPanel::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(SlewingPanel), "class_", make_descriptor(SlewingPanel::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(SlewingPanel), "wrapfn_", make_descriptor(t_SlewingPanel::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(SlewingPanel), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_SlewingPanel_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, SlewingPanel::initializeClass, 1)))
          return NULL;
        return t_SlewingPanel::wrap_Object(SlewingPanel(((t_SlewingPanel *) arg)->object.this$));
      }
      static PyObject *t_SlewingPanel_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, SlewingPanel::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_SlewingPanel_init_(t_SlewingPanel *self, PyObject *args, PyObject *kwds)
      {
        ::org::hipparchus::geometry::euclidean::threed::Vector3D a0((jobject) NULL);
        jdouble a1;
        ::org::orekit::time::AbsoluteDate a2((jobject) NULL);
        ::org::hipparchus::geometry::euclidean::threed::Vector3D a3((jobject) NULL);
        jdouble a4;
        jdouble a5;
        jdouble a6;
        jdouble a7;
        jdouble a8;
        SlewingPanel object((jobject) NULL);

        if (!parseArgs(args, "kDkkDDDDD", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5, &a6, &a7, &a8))
        {
          INT_CALL(object = SlewingPanel(a0, a1, a2, a3, a4, a5, a6, a7, a8));
          self->object = object;
        }
        else
        {
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_SlewingPanel_getNormal(t_SlewingPanel *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::orekit::propagation::FieldSpacecraftState a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::geometry::euclidean::threed::FieldVector3D result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::orekit::propagation::FieldSpacecraftState::initializeClass, &a0, &p0, ::org::orekit::propagation::t_FieldSpacecraftState::parameters_))
            {
              OBJ_CALL(result = self->object.getNormal(a0));
              return ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(result);
            }
          }
          {
            ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
            ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);

            if (!parseArgs(args, "k", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.getNormal(a0));
              return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
            }
          }
        }

        return callSuper(PY_TYPE(SlewingPanel), (PyObject *) self, "getNormal", args, 2);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/orbits/AbstractOrbitInterpolator.h"
#include "java/util/Collection.h"
#include "org/orekit/orbits/Orbit.h"
#include "org/orekit/frames/Frame.h"
#include "java/lang/Class.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace orbits {

      ::java::lang::Class *AbstractOrbitInterpolator::class$ = NULL;
      jmethodID *AbstractOrbitInterpolator::mids$ = NULL;
      bool AbstractOrbitInterpolator::live$ = false;

      jclass AbstractOrbitInterpolator::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/orbits/AbstractOrbitInterpolator");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_5b6571101ec263f4] = env->getMethodID(cls, "<init>", "(IDLorg/orekit/frames/Frame;)V");
          mids$[mid_checkOrbitsConsistency_7d8f123763cd893c] = env->getStaticMethodID(cls, "checkOrbitsConsistency", "(Ljava/util/Collection;)V");
          mids$[mid_getOutputInertialFrame_2c51111cc6894ba1] = env->getMethodID(cls, "getOutputInertialFrame", "()Lorg/orekit/frames/Frame;");
          mids$[mid_interpolate_dad08f2bf89e54ab] = env->getMethodID(cls, "interpolate", "(Lorg/orekit/time/AbsoluteDate;Ljava/util/Collection;)Lorg/orekit/orbits/Orbit;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      AbstractOrbitInterpolator::AbstractOrbitInterpolator(jint a0, jdouble a1, const ::org::orekit::frames::Frame & a2) : ::org::orekit::time::AbstractTimeInterpolator(env->newObject(initializeClass, &mids$, mid_init$_5b6571101ec263f4, a0, a1, a2.this$)) {}

      void AbstractOrbitInterpolator::checkOrbitsConsistency(const ::java::util::Collection & a0)
      {
        jclass cls = env->getClass(initializeClass);
        env->callStaticVoidMethod(cls, mids$[mid_checkOrbitsConsistency_7d8f123763cd893c], a0.this$);
      }

      ::org::orekit::frames::Frame AbstractOrbitInterpolator::getOutputInertialFrame() const
      {
        return ::org::orekit::frames::Frame(env->callObjectMethod(this$, mids$[mid_getOutputInertialFrame_2c51111cc6894ba1]));
      }

      ::org::orekit::orbits::Orbit AbstractOrbitInterpolator::interpolate(const ::org::orekit::time::AbsoluteDate & a0, const ::java::util::Collection & a1) const
      {
        return ::org::orekit::orbits::Orbit(env->callObjectMethod(this$, mids$[mid_interpolate_dad08f2bf89e54ab], a0.this$, a1.this$));
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
      static PyObject *t_AbstractOrbitInterpolator_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_AbstractOrbitInterpolator_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_AbstractOrbitInterpolator_of_(t_AbstractOrbitInterpolator *self, PyObject *args);
      static int t_AbstractOrbitInterpolator_init_(t_AbstractOrbitInterpolator *self, PyObject *args, PyObject *kwds);
      static PyObject *t_AbstractOrbitInterpolator_checkOrbitsConsistency(PyTypeObject *type, PyObject *arg);
      static PyObject *t_AbstractOrbitInterpolator_getOutputInertialFrame(t_AbstractOrbitInterpolator *self);
      static PyObject *t_AbstractOrbitInterpolator_interpolate(t_AbstractOrbitInterpolator *self, PyObject *args);
      static PyObject *t_AbstractOrbitInterpolator_get__outputInertialFrame(t_AbstractOrbitInterpolator *self, void *data);
      static PyObject *t_AbstractOrbitInterpolator_get__parameters_(t_AbstractOrbitInterpolator *self, void *data);
      static PyGetSetDef t_AbstractOrbitInterpolator__fields_[] = {
        DECLARE_GET_FIELD(t_AbstractOrbitInterpolator, outputInertialFrame),
        DECLARE_GET_FIELD(t_AbstractOrbitInterpolator, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_AbstractOrbitInterpolator__methods_[] = {
        DECLARE_METHOD(t_AbstractOrbitInterpolator, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_AbstractOrbitInterpolator, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_AbstractOrbitInterpolator, of_, METH_VARARGS),
        DECLARE_METHOD(t_AbstractOrbitInterpolator, checkOrbitsConsistency, METH_O | METH_CLASS),
        DECLARE_METHOD(t_AbstractOrbitInterpolator, getOutputInertialFrame, METH_NOARGS),
        DECLARE_METHOD(t_AbstractOrbitInterpolator, interpolate, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(AbstractOrbitInterpolator)[] = {
        { Py_tp_methods, t_AbstractOrbitInterpolator__methods_ },
        { Py_tp_init, (void *) t_AbstractOrbitInterpolator_init_ },
        { Py_tp_getset, t_AbstractOrbitInterpolator__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(AbstractOrbitInterpolator)[] = {
        &PY_TYPE_DEF(::org::orekit::time::AbstractTimeInterpolator),
        NULL
      };

      DEFINE_TYPE(AbstractOrbitInterpolator, t_AbstractOrbitInterpolator, AbstractOrbitInterpolator);
      PyObject *t_AbstractOrbitInterpolator::wrap_Object(const AbstractOrbitInterpolator& object, PyTypeObject *p0)
      {
        PyObject *obj = t_AbstractOrbitInterpolator::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_AbstractOrbitInterpolator *self = (t_AbstractOrbitInterpolator *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_AbstractOrbitInterpolator::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_AbstractOrbitInterpolator::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_AbstractOrbitInterpolator *self = (t_AbstractOrbitInterpolator *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_AbstractOrbitInterpolator::install(PyObject *module)
      {
        installType(&PY_TYPE(AbstractOrbitInterpolator), &PY_TYPE_DEF(AbstractOrbitInterpolator), module, "AbstractOrbitInterpolator", 0);
      }

      void t_AbstractOrbitInterpolator::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractOrbitInterpolator), "class_", make_descriptor(AbstractOrbitInterpolator::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractOrbitInterpolator), "wrapfn_", make_descriptor(t_AbstractOrbitInterpolator::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractOrbitInterpolator), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_AbstractOrbitInterpolator_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, AbstractOrbitInterpolator::initializeClass, 1)))
          return NULL;
        return t_AbstractOrbitInterpolator::wrap_Object(AbstractOrbitInterpolator(((t_AbstractOrbitInterpolator *) arg)->object.this$));
      }
      static PyObject *t_AbstractOrbitInterpolator_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, AbstractOrbitInterpolator::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_AbstractOrbitInterpolator_of_(t_AbstractOrbitInterpolator *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static int t_AbstractOrbitInterpolator_init_(t_AbstractOrbitInterpolator *self, PyObject *args, PyObject *kwds)
      {
        jint a0;
        jdouble a1;
        ::org::orekit::frames::Frame a2((jobject) NULL);
        AbstractOrbitInterpolator object((jobject) NULL);

        if (!parseArgs(args, "IDk", ::org::orekit::frames::Frame::initializeClass, &a0, &a1, &a2))
        {
          INT_CALL(object = AbstractOrbitInterpolator(a0, a1, a2));
          self->object = object;
          self->parameters[0] = ::org::orekit::orbits::PY_TYPE(Orbit);
        }
        else
        {
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_AbstractOrbitInterpolator_checkOrbitsConsistency(PyTypeObject *type, PyObject *arg)
      {
        ::java::util::Collection a0((jobject) NULL);
        PyTypeObject **p0;

        if (!parseArg(arg, "K", ::java::util::Collection::initializeClass, &a0, &p0, ::java::util::t_Collection::parameters_))
        {
          OBJ_CALL(::org::orekit::orbits::AbstractOrbitInterpolator::checkOrbitsConsistency(a0));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError(type, "checkOrbitsConsistency", arg);
        return NULL;
      }

      static PyObject *t_AbstractOrbitInterpolator_getOutputInertialFrame(t_AbstractOrbitInterpolator *self)
      {
        ::org::orekit::frames::Frame result((jobject) NULL);
        OBJ_CALL(result = self->object.getOutputInertialFrame());
        return ::org::orekit::frames::t_Frame::wrap_Object(result);
      }

      static PyObject *t_AbstractOrbitInterpolator_interpolate(t_AbstractOrbitInterpolator *self, PyObject *args)
      {
        ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
        ::java::util::Collection a1((jobject) NULL);
        PyTypeObject **p1;
        ::org::orekit::orbits::Orbit result((jobject) NULL);

        if (!parseArgs(args, "kK", ::org::orekit::time::AbsoluteDate::initializeClass, ::java::util::Collection::initializeClass, &a0, &a1, &p1, ::java::util::t_Collection::parameters_))
        {
          OBJ_CALL(result = self->object.interpolate(a0, a1));
          return ::org::orekit::orbits::t_Orbit::wrap_Object(result);
        }

        return callSuper(PY_TYPE(AbstractOrbitInterpolator), (PyObject *) self, "interpolate", args, 2);
      }
      static PyObject *t_AbstractOrbitInterpolator_get__parameters_(t_AbstractOrbitInterpolator *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }

      static PyObject *t_AbstractOrbitInterpolator_get__outputInertialFrame(t_AbstractOrbitInterpolator *self, void *data)
      {
        ::org::orekit::frames::Frame value((jobject) NULL);
        OBJ_CALL(value = self->object.getOutputInertialFrame());
        return ::org::orekit::frames::t_Frame::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/ndm/adm/apm/AngularVelocityKey.h"
#include "org/orekit/files/ccsds/utils/lexical/ParseToken.h"
#include "java/lang/Class.h"
#include "org/orekit/files/ccsds/utils/ContextBinding.h"
#include "org/orekit/files/ccsds/ndm/adm/apm/AngularVelocityKey.h"
#include "java/lang/String.h"
#include "org/orekit/files/ccsds/ndm/adm/apm/AngularVelocity.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace adm {
            namespace apm {

              ::java::lang::Class *AngularVelocityKey::class$ = NULL;
              jmethodID *AngularVelocityKey::mids$ = NULL;
              bool AngularVelocityKey::live$ = false;
              AngularVelocityKey *AngularVelocityKey::ANGVEL_FRAME = NULL;
              AngularVelocityKey *AngularVelocityKey::ANGVEL_X = NULL;
              AngularVelocityKey *AngularVelocityKey::ANGVEL_Y = NULL;
              AngularVelocityKey *AngularVelocityKey::ANGVEL_Z = NULL;
              AngularVelocityKey *AngularVelocityKey::COMMENT = NULL;
              AngularVelocityKey *AngularVelocityKey::REF_FRAME_A = NULL;
              AngularVelocityKey *AngularVelocityKey::REF_FRAME_B = NULL;

              jclass AngularVelocityKey::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/adm/apm/AngularVelocityKey");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_process_009e8e1faee83f1c] = env->getMethodID(cls, "process", "(Lorg/orekit/files/ccsds/utils/lexical/ParseToken;Lorg/orekit/files/ccsds/utils/ContextBinding;Lorg/orekit/files/ccsds/ndm/adm/apm/AngularVelocity;)Z");
                  mids$[mid_valueOf_507769df9ac5f256] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/files/ccsds/ndm/adm/apm/AngularVelocityKey;");
                  mids$[mid_values_2f941f1e24d4a56d] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/files/ccsds/ndm/adm/apm/AngularVelocityKey;");

                  class$ = new ::java::lang::Class(cls);
                  cls = (jclass) class$->this$;

                  ANGVEL_FRAME = new AngularVelocityKey(env->getStaticObjectField(cls, "ANGVEL_FRAME", "Lorg/orekit/files/ccsds/ndm/adm/apm/AngularVelocityKey;"));
                  ANGVEL_X = new AngularVelocityKey(env->getStaticObjectField(cls, "ANGVEL_X", "Lorg/orekit/files/ccsds/ndm/adm/apm/AngularVelocityKey;"));
                  ANGVEL_Y = new AngularVelocityKey(env->getStaticObjectField(cls, "ANGVEL_Y", "Lorg/orekit/files/ccsds/ndm/adm/apm/AngularVelocityKey;"));
                  ANGVEL_Z = new AngularVelocityKey(env->getStaticObjectField(cls, "ANGVEL_Z", "Lorg/orekit/files/ccsds/ndm/adm/apm/AngularVelocityKey;"));
                  COMMENT = new AngularVelocityKey(env->getStaticObjectField(cls, "COMMENT", "Lorg/orekit/files/ccsds/ndm/adm/apm/AngularVelocityKey;"));
                  REF_FRAME_A = new AngularVelocityKey(env->getStaticObjectField(cls, "REF_FRAME_A", "Lorg/orekit/files/ccsds/ndm/adm/apm/AngularVelocityKey;"));
                  REF_FRAME_B = new AngularVelocityKey(env->getStaticObjectField(cls, "REF_FRAME_B", "Lorg/orekit/files/ccsds/ndm/adm/apm/AngularVelocityKey;"));
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              jboolean AngularVelocityKey::process(const ::org::orekit::files::ccsds::utils::lexical::ParseToken & a0, const ::org::orekit::files::ccsds::utils::ContextBinding & a1, const ::org::orekit::files::ccsds::ndm::adm::apm::AngularVelocity & a2) const
              {
                return env->callBooleanMethod(this$, mids$[mid_process_009e8e1faee83f1c], a0.this$, a1.this$, a2.this$);
              }

              AngularVelocityKey AngularVelocityKey::valueOf(const ::java::lang::String & a0)
              {
                jclass cls = env->getClass(initializeClass);
                return AngularVelocityKey(env->callStaticObjectMethod(cls, mids$[mid_valueOf_507769df9ac5f256], a0.this$));
              }

              JArray< AngularVelocityKey > AngularVelocityKey::values()
              {
                jclass cls = env->getClass(initializeClass);
                return JArray< AngularVelocityKey >(env->callStaticObjectMethod(cls, mids$[mid_values_2f941f1e24d4a56d]));
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
          namespace adm {
            namespace apm {
              static PyObject *t_AngularVelocityKey_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_AngularVelocityKey_instance_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_AngularVelocityKey_of_(t_AngularVelocityKey *self, PyObject *args);
              static PyObject *t_AngularVelocityKey_process(t_AngularVelocityKey *self, PyObject *args);
              static PyObject *t_AngularVelocityKey_valueOf(PyTypeObject *type, PyObject *args);
              static PyObject *t_AngularVelocityKey_values(PyTypeObject *type);
              static PyObject *t_AngularVelocityKey_get__parameters_(t_AngularVelocityKey *self, void *data);
              static PyGetSetDef t_AngularVelocityKey__fields_[] = {
                DECLARE_GET_FIELD(t_AngularVelocityKey, parameters_),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_AngularVelocityKey__methods_[] = {
                DECLARE_METHOD(t_AngularVelocityKey, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_AngularVelocityKey, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_AngularVelocityKey, of_, METH_VARARGS),
                DECLARE_METHOD(t_AngularVelocityKey, process, METH_VARARGS),
                DECLARE_METHOD(t_AngularVelocityKey, valueOf, METH_VARARGS | METH_CLASS),
                DECLARE_METHOD(t_AngularVelocityKey, values, METH_NOARGS | METH_CLASS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(AngularVelocityKey)[] = {
                { Py_tp_methods, t_AngularVelocityKey__methods_ },
                { Py_tp_init, (void *) abstract_init },
                { Py_tp_getset, t_AngularVelocityKey__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(AngularVelocityKey)[] = {
                &PY_TYPE_DEF(::java::lang::Enum),
                NULL
              };

              DEFINE_TYPE(AngularVelocityKey, t_AngularVelocityKey, AngularVelocityKey);
              PyObject *t_AngularVelocityKey::wrap_Object(const AngularVelocityKey& object, PyTypeObject *p0)
              {
                PyObject *obj = t_AngularVelocityKey::wrap_Object(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_AngularVelocityKey *self = (t_AngularVelocityKey *) obj;
                  self->parameters[0] = p0;
                }
                return obj;
              }

              PyObject *t_AngularVelocityKey::wrap_jobject(const jobject& object, PyTypeObject *p0)
              {
                PyObject *obj = t_AngularVelocityKey::wrap_jobject(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_AngularVelocityKey *self = (t_AngularVelocityKey *) obj;
                  self->parameters[0] = p0;
                }
                return obj;
              }

              void t_AngularVelocityKey::install(PyObject *module)
              {
                installType(&PY_TYPE(AngularVelocityKey), &PY_TYPE_DEF(AngularVelocityKey), module, "AngularVelocityKey", 0);
              }

              void t_AngularVelocityKey::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(AngularVelocityKey), "class_", make_descriptor(AngularVelocityKey::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AngularVelocityKey), "wrapfn_", make_descriptor(t_AngularVelocityKey::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AngularVelocityKey), "boxfn_", make_descriptor(boxObject));
                env->getClass(AngularVelocityKey::initializeClass);
                PyObject_SetAttrString((PyObject *) PY_TYPE(AngularVelocityKey), "ANGVEL_FRAME", make_descriptor(t_AngularVelocityKey::wrap_Object(*AngularVelocityKey::ANGVEL_FRAME)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AngularVelocityKey), "ANGVEL_X", make_descriptor(t_AngularVelocityKey::wrap_Object(*AngularVelocityKey::ANGVEL_X)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AngularVelocityKey), "ANGVEL_Y", make_descriptor(t_AngularVelocityKey::wrap_Object(*AngularVelocityKey::ANGVEL_Y)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AngularVelocityKey), "ANGVEL_Z", make_descriptor(t_AngularVelocityKey::wrap_Object(*AngularVelocityKey::ANGVEL_Z)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AngularVelocityKey), "COMMENT", make_descriptor(t_AngularVelocityKey::wrap_Object(*AngularVelocityKey::COMMENT)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AngularVelocityKey), "REF_FRAME_A", make_descriptor(t_AngularVelocityKey::wrap_Object(*AngularVelocityKey::REF_FRAME_A)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AngularVelocityKey), "REF_FRAME_B", make_descriptor(t_AngularVelocityKey::wrap_Object(*AngularVelocityKey::REF_FRAME_B)));
              }

              static PyObject *t_AngularVelocityKey_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, AngularVelocityKey::initializeClass, 1)))
                  return NULL;
                return t_AngularVelocityKey::wrap_Object(AngularVelocityKey(((t_AngularVelocityKey *) arg)->object.this$));
              }
              static PyObject *t_AngularVelocityKey_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, AngularVelocityKey::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static PyObject *t_AngularVelocityKey_of_(t_AngularVelocityKey *self, PyObject *args)
              {
                if (!parseArg(args, "T", 1, &(self->parameters)))
                  Py_RETURN_SELF;
                return PyErr_SetArgsError((PyObject *) self, "of_", args);
              }

              static PyObject *t_AngularVelocityKey_process(t_AngularVelocityKey *self, PyObject *args)
              {
                ::org::orekit::files::ccsds::utils::lexical::ParseToken a0((jobject) NULL);
                ::org::orekit::files::ccsds::utils::ContextBinding a1((jobject) NULL);
                ::org::orekit::files::ccsds::ndm::adm::apm::AngularVelocity a2((jobject) NULL);
                jboolean result;

                if (!parseArgs(args, "kkk", ::org::orekit::files::ccsds::utils::lexical::ParseToken::initializeClass, ::org::orekit::files::ccsds::utils::ContextBinding::initializeClass, ::org::orekit::files::ccsds::ndm::adm::apm::AngularVelocity::initializeClass, &a0, &a1, &a2))
                {
                  OBJ_CALL(result = self->object.process(a0, a1, a2));
                  Py_RETURN_BOOL(result);
                }

                PyErr_SetArgsError((PyObject *) self, "process", args);
                return NULL;
              }

              static PyObject *t_AngularVelocityKey_valueOf(PyTypeObject *type, PyObject *args)
              {
                ::java::lang::String a0((jobject) NULL);
                AngularVelocityKey result((jobject) NULL);

                if (!parseArgs(args, "s", &a0))
                {
                  OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::adm::apm::AngularVelocityKey::valueOf(a0));
                  return t_AngularVelocityKey::wrap_Object(result);
                }

                return callSuper(type, "valueOf", args, 2);
              }

              static PyObject *t_AngularVelocityKey_values(PyTypeObject *type)
              {
                JArray< AngularVelocityKey > result((jobject) NULL);
                OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::adm::apm::AngularVelocityKey::values());
                return JArray<jobject>(result.this$).wrap(t_AngularVelocityKey::wrap_jobject);
              }
              static PyObject *t_AngularVelocityKey_get__parameters_(t_AngularVelocityKey *self, void *data)
              {
                return typeParameters(self->parameters, sizeof(self->parameters));
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
#include "org/orekit/propagation/semianalytical/dsst/forces/DSSTTesseral.h"
#include "org/orekit/attitudes/AttitudeProvider.h"
#include "java/util/List.h"
#include "org/orekit/propagation/semianalytical/dsst/forces/FieldShortPeriodTerms.h"
#include "org/orekit/propagation/semianalytical/dsst/forces/DSSTForceModel.h"
#include "org/orekit/propagation/PropagationType.h"
#include "org/orekit/forces/gravity/potential/UnnormalizedSphericalHarmonicsProvider.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "java/lang/Class.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "org/orekit/propagation/semianalytical/dsst/utilities/FieldAuxiliaryElements.h"
#include "org/orekit/propagation/semianalytical/dsst/forces/ShortPeriodTerms.h"
#include "java/lang/String.h"
#include "org/orekit/propagation/semianalytical/dsst/utilities/AuxiliaryElements.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace semianalytical {
        namespace dsst {
          namespace forces {

            ::java::lang::Class *DSSTTesseral::class$ = NULL;
            jmethodID *DSSTTesseral::mids$ = NULL;
            bool DSSTTesseral::live$ = false;
            ::java::lang::String *DSSTTesseral::CM_COEFFICIENTS = NULL;
            ::java::lang::String *DSSTTesseral::SHORT_PERIOD_PREFIX = NULL;
            ::java::lang::String *DSSTTesseral::SM_COEFFICIENTS = NULL;

            jclass DSSTTesseral::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/propagation/semianalytical/dsst/forces/DSSTTesseral");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_927f9a6706832827] = env->getMethodID(cls, "<init>", "(Lorg/orekit/frames/Frame;DLorg/orekit/forces/gravity/potential/UnnormalizedSphericalHarmonicsProvider;)V");
                mids$[mid_init$_dc03e910a32fe7c5] = env->getMethodID(cls, "<init>", "(Lorg/orekit/frames/Frame;DLorg/orekit/forces/gravity/potential/UnnormalizedSphericalHarmonicsProvider;IIIIIII)V");
                mids$[mid_getMeanElementRate_7d3eb19aa1e75a63] = env->getMethodID(cls, "getMeanElementRate", "(Lorg/orekit/propagation/FieldSpacecraftState;Lorg/orekit/propagation/semianalytical/dsst/utilities/FieldAuxiliaryElements;[Lorg/hipparchus/CalculusFieldElement;)[Lorg/hipparchus/CalculusFieldElement;");
                mids$[mid_getMeanElementRate_0483a0f94731abef] = env->getMethodID(cls, "getMeanElementRate", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/propagation/semianalytical/dsst/utilities/AuxiliaryElements;[D)[D");
                mids$[mid_getParametersDrivers_e62d3bb06d56d7e3] = env->getMethodID(cls, "getParametersDrivers", "()Ljava/util/List;");
                mids$[mid_initializeShortPeriodTerms_6fb0c582e8925f89] = env->getMethodID(cls, "initializeShortPeriodTerms", "(Lorg/orekit/propagation/semianalytical/dsst/utilities/AuxiliaryElements;Lorg/orekit/propagation/PropagationType;[D)Ljava/util/List;");
                mids$[mid_initializeShortPeriodTerms_3144241334d46411] = env->getMethodID(cls, "initializeShortPeriodTerms", "(Lorg/orekit/propagation/semianalytical/dsst/utilities/FieldAuxiliaryElements;Lorg/orekit/propagation/PropagationType;[Lorg/hipparchus/CalculusFieldElement;)Ljava/util/List;");
                mids$[mid_registerAttitudeProvider_8e4d3ea100bc0095] = env->getMethodID(cls, "registerAttitudeProvider", "(Lorg/orekit/attitudes/AttitudeProvider;)V");
                mids$[mid_updateShortPeriodTerms_5401e749436ec3b7] = env->getMethodID(cls, "updateShortPeriodTerms", "([D[Lorg/orekit/propagation/SpacecraftState;)V");
                mids$[mid_updateShortPeriodTerms_62f1ad39eb6f1276] = env->getMethodID(cls, "updateShortPeriodTerms", "([Lorg/hipparchus/CalculusFieldElement;[Lorg/orekit/propagation/FieldSpacecraftState;)V");

                class$ = new ::java::lang::Class(cls);
                cls = (jclass) class$->this$;

                CM_COEFFICIENTS = new ::java::lang::String(env->getStaticObjectField(cls, "CM_COEFFICIENTS", "Ljava/lang/String;"));
                SHORT_PERIOD_PREFIX = new ::java::lang::String(env->getStaticObjectField(cls, "SHORT_PERIOD_PREFIX", "Ljava/lang/String;"));
                SM_COEFFICIENTS = new ::java::lang::String(env->getStaticObjectField(cls, "SM_COEFFICIENTS", "Ljava/lang/String;"));
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            DSSTTesseral::DSSTTesseral(const ::org::orekit::frames::Frame & a0, jdouble a1, const ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider & a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_927f9a6706832827, a0.this$, a1, a2.this$)) {}

            DSSTTesseral::DSSTTesseral(const ::org::orekit::frames::Frame & a0, jdouble a1, const ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider & a2, jint a3, jint a4, jint a5, jint a6, jint a7, jint a8, jint a9) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_dc03e910a32fe7c5, a0.this$, a1, a2.this$, a3, a4, a5, a6, a7, a8, a9)) {}

            JArray< ::org::hipparchus::CalculusFieldElement > DSSTTesseral::getMeanElementRate(const ::org::orekit::propagation::FieldSpacecraftState & a0, const ::org::orekit::propagation::semianalytical::dsst::utilities::FieldAuxiliaryElements & a1, const JArray< ::org::hipparchus::CalculusFieldElement > & a2) const
            {
              return JArray< ::org::hipparchus::CalculusFieldElement >(env->callObjectMethod(this$, mids$[mid_getMeanElementRate_7d3eb19aa1e75a63], a0.this$, a1.this$, a2.this$));
            }

            JArray< jdouble > DSSTTesseral::getMeanElementRate(const ::org::orekit::propagation::SpacecraftState & a0, const ::org::orekit::propagation::semianalytical::dsst::utilities::AuxiliaryElements & a1, const JArray< jdouble > & a2) const
            {
              return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getMeanElementRate_0483a0f94731abef], a0.this$, a1.this$, a2.this$));
            }

            ::java::util::List DSSTTesseral::getParametersDrivers() const
            {
              return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getParametersDrivers_e62d3bb06d56d7e3]));
            }

            ::java::util::List DSSTTesseral::initializeShortPeriodTerms(const ::org::orekit::propagation::semianalytical::dsst::utilities::AuxiliaryElements & a0, const ::org::orekit::propagation::PropagationType & a1, const JArray< jdouble > & a2) const
            {
              return ::java::util::List(env->callObjectMethod(this$, mids$[mid_initializeShortPeriodTerms_6fb0c582e8925f89], a0.this$, a1.this$, a2.this$));
            }

            ::java::util::List DSSTTesseral::initializeShortPeriodTerms(const ::org::orekit::propagation::semianalytical::dsst::utilities::FieldAuxiliaryElements & a0, const ::org::orekit::propagation::PropagationType & a1, const JArray< ::org::hipparchus::CalculusFieldElement > & a2) const
            {
              return ::java::util::List(env->callObjectMethod(this$, mids$[mid_initializeShortPeriodTerms_3144241334d46411], a0.this$, a1.this$, a2.this$));
            }

            void DSSTTesseral::registerAttitudeProvider(const ::org::orekit::attitudes::AttitudeProvider & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_registerAttitudeProvider_8e4d3ea100bc0095], a0.this$);
            }

            void DSSTTesseral::updateShortPeriodTerms(const JArray< jdouble > & a0, const JArray< ::org::orekit::propagation::SpacecraftState > & a1) const
            {
              env->callVoidMethod(this$, mids$[mid_updateShortPeriodTerms_5401e749436ec3b7], a0.this$, a1.this$);
            }

            void DSSTTesseral::updateShortPeriodTerms(const JArray< ::org::hipparchus::CalculusFieldElement > & a0, const JArray< ::org::orekit::propagation::FieldSpacecraftState > & a1) const
            {
              env->callVoidMethod(this$, mids$[mid_updateShortPeriodTerms_62f1ad39eb6f1276], a0.this$, a1.this$);
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
      namespace semianalytical {
        namespace dsst {
          namespace forces {
            static PyObject *t_DSSTTesseral_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_DSSTTesseral_instance_(PyTypeObject *type, PyObject *arg);
            static int t_DSSTTesseral_init_(t_DSSTTesseral *self, PyObject *args, PyObject *kwds);
            static PyObject *t_DSSTTesseral_getMeanElementRate(t_DSSTTesseral *self, PyObject *args);
            static PyObject *t_DSSTTesseral_getParametersDrivers(t_DSSTTesseral *self);
            static PyObject *t_DSSTTesseral_initializeShortPeriodTerms(t_DSSTTesseral *self, PyObject *args);
            static PyObject *t_DSSTTesseral_registerAttitudeProvider(t_DSSTTesseral *self, PyObject *arg);
            static PyObject *t_DSSTTesseral_updateShortPeriodTerms(t_DSSTTesseral *self, PyObject *args);
            static PyObject *t_DSSTTesseral_get__parametersDrivers(t_DSSTTesseral *self, void *data);
            static PyGetSetDef t_DSSTTesseral__fields_[] = {
              DECLARE_GET_FIELD(t_DSSTTesseral, parametersDrivers),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_DSSTTesseral__methods_[] = {
              DECLARE_METHOD(t_DSSTTesseral, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_DSSTTesseral, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_DSSTTesseral, getMeanElementRate, METH_VARARGS),
              DECLARE_METHOD(t_DSSTTesseral, getParametersDrivers, METH_NOARGS),
              DECLARE_METHOD(t_DSSTTesseral, initializeShortPeriodTerms, METH_VARARGS),
              DECLARE_METHOD(t_DSSTTesseral, registerAttitudeProvider, METH_O),
              DECLARE_METHOD(t_DSSTTesseral, updateShortPeriodTerms, METH_VARARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(DSSTTesseral)[] = {
              { Py_tp_methods, t_DSSTTesseral__methods_ },
              { Py_tp_init, (void *) t_DSSTTesseral_init_ },
              { Py_tp_getset, t_DSSTTesseral__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(DSSTTesseral)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(DSSTTesseral, t_DSSTTesseral, DSSTTesseral);

            void t_DSSTTesseral::install(PyObject *module)
            {
              installType(&PY_TYPE(DSSTTesseral), &PY_TYPE_DEF(DSSTTesseral), module, "DSSTTesseral", 0);
            }

            void t_DSSTTesseral::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(DSSTTesseral), "class_", make_descriptor(DSSTTesseral::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(DSSTTesseral), "wrapfn_", make_descriptor(t_DSSTTesseral::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(DSSTTesseral), "boxfn_", make_descriptor(boxObject));
              env->getClass(DSSTTesseral::initializeClass);
              PyObject_SetAttrString((PyObject *) PY_TYPE(DSSTTesseral), "CM_COEFFICIENTS", make_descriptor(j2p(*DSSTTesseral::CM_COEFFICIENTS)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(DSSTTesseral), "SHORT_PERIOD_PREFIX", make_descriptor(j2p(*DSSTTesseral::SHORT_PERIOD_PREFIX)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(DSSTTesseral), "SM_COEFFICIENTS", make_descriptor(j2p(*DSSTTesseral::SM_COEFFICIENTS)));
            }

            static PyObject *t_DSSTTesseral_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, DSSTTesseral::initializeClass, 1)))
                return NULL;
              return t_DSSTTesseral::wrap_Object(DSSTTesseral(((t_DSSTTesseral *) arg)->object.this$));
            }
            static PyObject *t_DSSTTesseral_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, DSSTTesseral::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static int t_DSSTTesseral_init_(t_DSSTTesseral *self, PyObject *args, PyObject *kwds)
            {
              switch (PyTuple_GET_SIZE(args)) {
               case 3:
                {
                  ::org::orekit::frames::Frame a0((jobject) NULL);
                  jdouble a1;
                  ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider a2((jobject) NULL);
                  DSSTTesseral object((jobject) NULL);

                  if (!parseArgs(args, "kDk", ::org::orekit::frames::Frame::initializeClass, ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider::initializeClass, &a0, &a1, &a2))
                  {
                    INT_CALL(object = DSSTTesseral(a0, a1, a2));
                    self->object = object;
                    break;
                  }
                }
                goto err;
               case 10:
                {
                  ::org::orekit::frames::Frame a0((jobject) NULL);
                  jdouble a1;
                  ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider a2((jobject) NULL);
                  jint a3;
                  jint a4;
                  jint a5;
                  jint a6;
                  jint a7;
                  jint a8;
                  jint a9;
                  DSSTTesseral object((jobject) NULL);

                  if (!parseArgs(args, "kDkIIIIIII", ::org::orekit::frames::Frame::initializeClass, ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5, &a6, &a7, &a8, &a9))
                  {
                    INT_CALL(object = DSSTTesseral(a0, a1, a2, a3, a4, a5, a6, a7, a8, a9));
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

            static PyObject *t_DSSTTesseral_getMeanElementRate(t_DSSTTesseral *self, PyObject *args)
            {
              switch (PyTuple_GET_SIZE(args)) {
               case 3:
                {
                  ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
                  ::org::orekit::propagation::semianalytical::dsst::utilities::AuxiliaryElements a1((jobject) NULL);
                  JArray< jdouble > a2((jobject) NULL);
                  JArray< jdouble > result((jobject) NULL);

                  if (!parseArgs(args, "kk[D", ::org::orekit::propagation::SpacecraftState::initializeClass, ::org::orekit::propagation::semianalytical::dsst::utilities::AuxiliaryElements::initializeClass, &a0, &a1, &a2))
                  {
                    OBJ_CALL(result = self->object.getMeanElementRate(a0, a1, a2));
                    return result.wrap();
                  }
                }
                {
                  ::org::orekit::propagation::FieldSpacecraftState a0((jobject) NULL);
                  PyTypeObject **p0;
                  ::org::orekit::propagation::semianalytical::dsst::utilities::FieldAuxiliaryElements a1((jobject) NULL);
                  PyTypeObject **p1;
                  JArray< ::org::hipparchus::CalculusFieldElement > a2((jobject) NULL);
                  PyTypeObject **p2;
                  JArray< ::org::hipparchus::CalculusFieldElement > result((jobject) NULL);

                  if (!parseArgs(args, "KK[K", ::org::orekit::propagation::FieldSpacecraftState::initializeClass, ::org::orekit::propagation::semianalytical::dsst::utilities::FieldAuxiliaryElements::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::orekit::propagation::t_FieldSpacecraftState::parameters_, &a1, &p1, ::org::orekit::propagation::semianalytical::dsst::utilities::t_FieldAuxiliaryElements::parameters_, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_))
                  {
                    OBJ_CALL(result = self->object.getMeanElementRate(a0, a1, a2));
                    return JArray<jobject>(result.this$).wrap(::org::hipparchus::t_CalculusFieldElement::wrap_jobject);
                  }
                }
              }

              PyErr_SetArgsError((PyObject *) self, "getMeanElementRate", args);
              return NULL;
            }

            static PyObject *t_DSSTTesseral_getParametersDrivers(t_DSSTTesseral *self)
            {
              ::java::util::List result((jobject) NULL);
              OBJ_CALL(result = self->object.getParametersDrivers());
              return ::java::util::t_List::wrap_Object(result, ::org::orekit::utils::PY_TYPE(ParameterDriver));
            }

            static PyObject *t_DSSTTesseral_initializeShortPeriodTerms(t_DSSTTesseral *self, PyObject *args)
            {
              switch (PyTuple_GET_SIZE(args)) {
               case 3:
                {
                  ::org::orekit::propagation::semianalytical::dsst::utilities::AuxiliaryElements a0((jobject) NULL);
                  ::org::orekit::propagation::PropagationType a1((jobject) NULL);
                  PyTypeObject **p1;
                  JArray< jdouble > a2((jobject) NULL);
                  ::java::util::List result((jobject) NULL);

                  if (!parseArgs(args, "kK[D", ::org::orekit::propagation::semianalytical::dsst::utilities::AuxiliaryElements::initializeClass, ::org::orekit::propagation::PropagationType::initializeClass, &a0, &a1, &p1, ::org::orekit::propagation::t_PropagationType::parameters_, &a2))
                  {
                    OBJ_CALL(result = self->object.initializeShortPeriodTerms(a0, a1, a2));
                    return ::java::util::t_List::wrap_Object(result, ::org::orekit::propagation::semianalytical::dsst::forces::PY_TYPE(ShortPeriodTerms));
                  }
                }
                {
                  ::org::orekit::propagation::semianalytical::dsst::utilities::FieldAuxiliaryElements a0((jobject) NULL);
                  PyTypeObject **p0;
                  ::org::orekit::propagation::PropagationType a1((jobject) NULL);
                  PyTypeObject **p1;
                  JArray< ::org::hipparchus::CalculusFieldElement > a2((jobject) NULL);
                  PyTypeObject **p2;
                  ::java::util::List result((jobject) NULL);

                  if (!parseArgs(args, "KK[K", ::org::orekit::propagation::semianalytical::dsst::utilities::FieldAuxiliaryElements::initializeClass, ::org::orekit::propagation::PropagationType::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::orekit::propagation::semianalytical::dsst::utilities::t_FieldAuxiliaryElements::parameters_, &a1, &p1, ::org::orekit::propagation::t_PropagationType::parameters_, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_))
                  {
                    OBJ_CALL(result = self->object.initializeShortPeriodTerms(a0, a1, a2));
                    return ::java::util::t_List::wrap_Object(result);
                  }
                }
              }

              PyErr_SetArgsError((PyObject *) self, "initializeShortPeriodTerms", args);
              return NULL;
            }

            static PyObject *t_DSSTTesseral_registerAttitudeProvider(t_DSSTTesseral *self, PyObject *arg)
            {
              ::org::orekit::attitudes::AttitudeProvider a0((jobject) NULL);

              if (!parseArg(arg, "k", ::org::orekit::attitudes::AttitudeProvider::initializeClass, &a0))
              {
                OBJ_CALL(self->object.registerAttitudeProvider(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "registerAttitudeProvider", arg);
              return NULL;
            }

            static PyObject *t_DSSTTesseral_updateShortPeriodTerms(t_DSSTTesseral *self, PyObject *args)
            {
              switch (PyTuple_GET_SIZE(args)) {
               case 2:
                {
                  JArray< ::org::hipparchus::CalculusFieldElement > a0((jobject) NULL);
                  PyTypeObject **p0;
                  JArray< ::org::orekit::propagation::FieldSpacecraftState > a1((jobject) NULL);
                  PyTypeObject **p1;

                  if (!parseArgs(args, "[K[K", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::orekit::propagation::FieldSpacecraftState::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::orekit::propagation::t_FieldSpacecraftState::parameters_))
                  {
                    OBJ_CALL(self->object.updateShortPeriodTerms(a0, a1));
                    Py_RETURN_NONE;
                  }
                }
                {
                  JArray< jdouble > a0((jobject) NULL);
                  JArray< ::org::orekit::propagation::SpacecraftState > a1((jobject) NULL);

                  if (!parseArgs(args, "[D[k", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0, &a1))
                  {
                    OBJ_CALL(self->object.updateShortPeriodTerms(a0, a1));
                    Py_RETURN_NONE;
                  }
                }
              }

              PyErr_SetArgsError((PyObject *) self, "updateShortPeriodTerms", args);
              return NULL;
            }

            static PyObject *t_DSSTTesseral_get__parametersDrivers(t_DSSTTesseral *self, void *data)
            {
              ::java::util::List value((jobject) NULL);
              OBJ_CALL(value = self->object.getParametersDrivers());
              return ::java::util::t_List::wrap_Object(value);
            }
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/linear/RectangularCholeskyDecomposition.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "java/lang/Class.h"
#include "org/hipparchus/linear/RealMatrix.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace linear {

      ::java::lang::Class *RectangularCholeskyDecomposition::class$ = NULL;
      jmethodID *RectangularCholeskyDecomposition::mids$ = NULL;
      bool RectangularCholeskyDecomposition::live$ = false;

      jclass RectangularCholeskyDecomposition::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/linear/RectangularCholeskyDecomposition");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_84bd15e0995d0c79] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/linear/RealMatrix;)V");
          mids$[mid_init$_5c88fbe0835e7c85] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/linear/RealMatrix;D)V");
          mids$[mid_getRank_55546ef6a647f39b] = env->getMethodID(cls, "getRank", "()I");
          mids$[mid_getRootMatrix_f77d745f2128c391] = env->getMethodID(cls, "getRootMatrix", "()Lorg/hipparchus/linear/RealMatrix;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      RectangularCholeskyDecomposition::RectangularCholeskyDecomposition(const ::org::hipparchus::linear::RealMatrix & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_84bd15e0995d0c79, a0.this$)) {}

      RectangularCholeskyDecomposition::RectangularCholeskyDecomposition(const ::org::hipparchus::linear::RealMatrix & a0, jdouble a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_5c88fbe0835e7c85, a0.this$, a1)) {}

      jint RectangularCholeskyDecomposition::getRank() const
      {
        return env->callIntMethod(this$, mids$[mid_getRank_55546ef6a647f39b]);
      }

      ::org::hipparchus::linear::RealMatrix RectangularCholeskyDecomposition::getRootMatrix() const
      {
        return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_getRootMatrix_f77d745f2128c391]));
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace hipparchus {
    namespace linear {
      static PyObject *t_RectangularCholeskyDecomposition_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_RectangularCholeskyDecomposition_instance_(PyTypeObject *type, PyObject *arg);
      static int t_RectangularCholeskyDecomposition_init_(t_RectangularCholeskyDecomposition *self, PyObject *args, PyObject *kwds);
      static PyObject *t_RectangularCholeskyDecomposition_getRank(t_RectangularCholeskyDecomposition *self);
      static PyObject *t_RectangularCholeskyDecomposition_getRootMatrix(t_RectangularCholeskyDecomposition *self);
      static PyObject *t_RectangularCholeskyDecomposition_get__rank(t_RectangularCholeskyDecomposition *self, void *data);
      static PyObject *t_RectangularCholeskyDecomposition_get__rootMatrix(t_RectangularCholeskyDecomposition *self, void *data);
      static PyGetSetDef t_RectangularCholeskyDecomposition__fields_[] = {
        DECLARE_GET_FIELD(t_RectangularCholeskyDecomposition, rank),
        DECLARE_GET_FIELD(t_RectangularCholeskyDecomposition, rootMatrix),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_RectangularCholeskyDecomposition__methods_[] = {
        DECLARE_METHOD(t_RectangularCholeskyDecomposition, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_RectangularCholeskyDecomposition, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_RectangularCholeskyDecomposition, getRank, METH_NOARGS),
        DECLARE_METHOD(t_RectangularCholeskyDecomposition, getRootMatrix, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(RectangularCholeskyDecomposition)[] = {
        { Py_tp_methods, t_RectangularCholeskyDecomposition__methods_ },
        { Py_tp_init, (void *) t_RectangularCholeskyDecomposition_init_ },
        { Py_tp_getset, t_RectangularCholeskyDecomposition__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(RectangularCholeskyDecomposition)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(RectangularCholeskyDecomposition, t_RectangularCholeskyDecomposition, RectangularCholeskyDecomposition);

      void t_RectangularCholeskyDecomposition::install(PyObject *module)
      {
        installType(&PY_TYPE(RectangularCholeskyDecomposition), &PY_TYPE_DEF(RectangularCholeskyDecomposition), module, "RectangularCholeskyDecomposition", 0);
      }

      void t_RectangularCholeskyDecomposition::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(RectangularCholeskyDecomposition), "class_", make_descriptor(RectangularCholeskyDecomposition::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(RectangularCholeskyDecomposition), "wrapfn_", make_descriptor(t_RectangularCholeskyDecomposition::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(RectangularCholeskyDecomposition), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_RectangularCholeskyDecomposition_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, RectangularCholeskyDecomposition::initializeClass, 1)))
          return NULL;
        return t_RectangularCholeskyDecomposition::wrap_Object(RectangularCholeskyDecomposition(((t_RectangularCholeskyDecomposition *) arg)->object.this$));
      }
      static PyObject *t_RectangularCholeskyDecomposition_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, RectangularCholeskyDecomposition::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_RectangularCholeskyDecomposition_init_(t_RectangularCholeskyDecomposition *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::hipparchus::linear::RealMatrix a0((jobject) NULL);
            RectangularCholeskyDecomposition object((jobject) NULL);

            if (!parseArgs(args, "k", ::org::hipparchus::linear::RealMatrix::initializeClass, &a0))
            {
              INT_CALL(object = RectangularCholeskyDecomposition(a0));
              self->object = object;
              break;
            }
          }
          goto err;
         case 2:
          {
            ::org::hipparchus::linear::RealMatrix a0((jobject) NULL);
            jdouble a1;
            RectangularCholeskyDecomposition object((jobject) NULL);

            if (!parseArgs(args, "kD", ::org::hipparchus::linear::RealMatrix::initializeClass, &a0, &a1))
            {
              INT_CALL(object = RectangularCholeskyDecomposition(a0, a1));
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

      static PyObject *t_RectangularCholeskyDecomposition_getRank(t_RectangularCholeskyDecomposition *self)
      {
        jint result;
        OBJ_CALL(result = self->object.getRank());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_RectangularCholeskyDecomposition_getRootMatrix(t_RectangularCholeskyDecomposition *self)
      {
        ::org::hipparchus::linear::RealMatrix result((jobject) NULL);
        OBJ_CALL(result = self->object.getRootMatrix());
        return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
      }

      static PyObject *t_RectangularCholeskyDecomposition_get__rank(t_RectangularCholeskyDecomposition *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getRank());
        return PyLong_FromLong((long) value);
      }

      static PyObject *t_RectangularCholeskyDecomposition_get__rootMatrix(t_RectangularCholeskyDecomposition *self, void *data)
      {
        ::org::hipparchus::linear::RealMatrix value((jobject) NULL);
        OBJ_CALL(value = self->object.getRootMatrix());
        return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/forces/radiation/SolarRadiationPressure.h"
#include "org/orekit/forces/radiation/RadiationSensitive.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "java/util/List.h"
#include "org/orekit/utils/ExtendedPVCoordinatesProvider.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldVector3D.h"
#include "org/orekit/bodies/OneAxisEllipsoid.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "java/lang/Class.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace forces {
      namespace radiation {

        ::java::lang::Class *SolarRadiationPressure::class$ = NULL;
        jmethodID *SolarRadiationPressure::mids$ = NULL;
        bool SolarRadiationPressure::live$ = false;

        jclass SolarRadiationPressure::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/forces/radiation/SolarRadiationPressure");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_58f40e4787bd647f] = env->getMethodID(cls, "<init>", "(Lorg/orekit/utils/ExtendedPVCoordinatesProvider;Lorg/orekit/bodies/OneAxisEllipsoid;Lorg/orekit/forces/radiation/RadiationSensitive;)V");
            mids$[mid_init$_c9a73f6ea5ff1d2c] = env->getMethodID(cls, "<init>", "(DDLorg/orekit/utils/ExtendedPVCoordinatesProvider;Lorg/orekit/bodies/OneAxisEllipsoid;Lorg/orekit/forces/radiation/RadiationSensitive;)V");
            mids$[mid_acceleration_0ce449c67b5ffd9c] = env->getMethodID(cls, "acceleration", "(Lorg/orekit/propagation/FieldSpacecraftState;[Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
            mids$[mid_acceleration_20bded0292328743] = env->getMethodID(cls, "acceleration", "(Lorg/orekit/propagation/SpacecraftState;[D)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
            mids$[mid_getLightingRatio_2203631097e94c79] = env->getMethodID(cls, "getLightingRatio", "(Lorg/orekit/propagation/FieldSpacecraftState;)Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_getLightingRatio_a17ea857ce74d258] = env->getMethodID(cls, "getLightingRatio", "(Lorg/orekit/propagation/SpacecraftState;)D");
            mids$[mid_getParametersDrivers_e62d3bb06d56d7e3] = env->getMethodID(cls, "getParametersDrivers", "()Ljava/util/List;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        SolarRadiationPressure::SolarRadiationPressure(const ::org::orekit::utils::ExtendedPVCoordinatesProvider & a0, const ::org::orekit::bodies::OneAxisEllipsoid & a1, const ::org::orekit::forces::radiation::RadiationSensitive & a2) : ::org::orekit::forces::radiation::AbstractRadiationForceModel(env->newObject(initializeClass, &mids$, mid_init$_58f40e4787bd647f, a0.this$, a1.this$, a2.this$)) {}

        SolarRadiationPressure::SolarRadiationPressure(jdouble a0, jdouble a1, const ::org::orekit::utils::ExtendedPVCoordinatesProvider & a2, const ::org::orekit::bodies::OneAxisEllipsoid & a3, const ::org::orekit::forces::radiation::RadiationSensitive & a4) : ::org::orekit::forces::radiation::AbstractRadiationForceModel(env->newObject(initializeClass, &mids$, mid_init$_c9a73f6ea5ff1d2c, a0, a1, a2.this$, a3.this$, a4.this$)) {}

        ::org::hipparchus::geometry::euclidean::threed::FieldVector3D SolarRadiationPressure::acceleration(const ::org::orekit::propagation::FieldSpacecraftState & a0, const JArray< ::org::hipparchus::CalculusFieldElement > & a1) const
        {
          return ::org::hipparchus::geometry::euclidean::threed::FieldVector3D(env->callObjectMethod(this$, mids$[mid_acceleration_0ce449c67b5ffd9c], a0.this$, a1.this$));
        }

        ::org::hipparchus::geometry::euclidean::threed::Vector3D SolarRadiationPressure::acceleration(const ::org::orekit::propagation::SpacecraftState & a0, const JArray< jdouble > & a1) const
        {
          return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_acceleration_20bded0292328743], a0.this$, a1.this$));
        }

        ::org::hipparchus::CalculusFieldElement SolarRadiationPressure::getLightingRatio(const ::org::orekit::propagation::FieldSpacecraftState & a0) const
        {
          return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getLightingRatio_2203631097e94c79], a0.this$));
        }

        jdouble SolarRadiationPressure::getLightingRatio(const ::org::orekit::propagation::SpacecraftState & a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_getLightingRatio_a17ea857ce74d258], a0.this$);
        }

        ::java::util::List SolarRadiationPressure::getParametersDrivers() const
        {
          return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getParametersDrivers_e62d3bb06d56d7e3]));
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
      namespace radiation {
        static PyObject *t_SolarRadiationPressure_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_SolarRadiationPressure_instance_(PyTypeObject *type, PyObject *arg);
        static int t_SolarRadiationPressure_init_(t_SolarRadiationPressure *self, PyObject *args, PyObject *kwds);
        static PyObject *t_SolarRadiationPressure_acceleration(t_SolarRadiationPressure *self, PyObject *args);
        static PyObject *t_SolarRadiationPressure_getLightingRatio(t_SolarRadiationPressure *self, PyObject *args);
        static PyObject *t_SolarRadiationPressure_getParametersDrivers(t_SolarRadiationPressure *self, PyObject *args);
        static PyObject *t_SolarRadiationPressure_get__parametersDrivers(t_SolarRadiationPressure *self, void *data);
        static PyGetSetDef t_SolarRadiationPressure__fields_[] = {
          DECLARE_GET_FIELD(t_SolarRadiationPressure, parametersDrivers),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_SolarRadiationPressure__methods_[] = {
          DECLARE_METHOD(t_SolarRadiationPressure, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_SolarRadiationPressure, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_SolarRadiationPressure, acceleration, METH_VARARGS),
          DECLARE_METHOD(t_SolarRadiationPressure, getLightingRatio, METH_VARARGS),
          DECLARE_METHOD(t_SolarRadiationPressure, getParametersDrivers, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(SolarRadiationPressure)[] = {
          { Py_tp_methods, t_SolarRadiationPressure__methods_ },
          { Py_tp_init, (void *) t_SolarRadiationPressure_init_ },
          { Py_tp_getset, t_SolarRadiationPressure__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(SolarRadiationPressure)[] = {
          &PY_TYPE_DEF(::org::orekit::forces::radiation::AbstractRadiationForceModel),
          NULL
        };

        DEFINE_TYPE(SolarRadiationPressure, t_SolarRadiationPressure, SolarRadiationPressure);

        void t_SolarRadiationPressure::install(PyObject *module)
        {
          installType(&PY_TYPE(SolarRadiationPressure), &PY_TYPE_DEF(SolarRadiationPressure), module, "SolarRadiationPressure", 0);
        }

        void t_SolarRadiationPressure::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(SolarRadiationPressure), "class_", make_descriptor(SolarRadiationPressure::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SolarRadiationPressure), "wrapfn_", make_descriptor(t_SolarRadiationPressure::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SolarRadiationPressure), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_SolarRadiationPressure_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, SolarRadiationPressure::initializeClass, 1)))
            return NULL;
          return t_SolarRadiationPressure::wrap_Object(SolarRadiationPressure(((t_SolarRadiationPressure *) arg)->object.this$));
        }
        static PyObject *t_SolarRadiationPressure_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, SolarRadiationPressure::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_SolarRadiationPressure_init_(t_SolarRadiationPressure *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 3:
            {
              ::org::orekit::utils::ExtendedPVCoordinatesProvider a0((jobject) NULL);
              ::org::orekit::bodies::OneAxisEllipsoid a1((jobject) NULL);
              ::org::orekit::forces::radiation::RadiationSensitive a2((jobject) NULL);
              SolarRadiationPressure object((jobject) NULL);

              if (!parseArgs(args, "kkk", ::org::orekit::utils::ExtendedPVCoordinatesProvider::initializeClass, ::org::orekit::bodies::OneAxisEllipsoid::initializeClass, ::org::orekit::forces::radiation::RadiationSensitive::initializeClass, &a0, &a1, &a2))
              {
                INT_CALL(object = SolarRadiationPressure(a0, a1, a2));
                self->object = object;
                break;
              }
            }
            goto err;
           case 5:
            {
              jdouble a0;
              jdouble a1;
              ::org::orekit::utils::ExtendedPVCoordinatesProvider a2((jobject) NULL);
              ::org::orekit::bodies::OneAxisEllipsoid a3((jobject) NULL);
              ::org::orekit::forces::radiation::RadiationSensitive a4((jobject) NULL);
              SolarRadiationPressure object((jobject) NULL);

              if (!parseArgs(args, "DDkkk", ::org::orekit::utils::ExtendedPVCoordinatesProvider::initializeClass, ::org::orekit::bodies::OneAxisEllipsoid::initializeClass, ::org::orekit::forces::radiation::RadiationSensitive::initializeClass, &a0, &a1, &a2, &a3, &a4))
              {
                INT_CALL(object = SolarRadiationPressure(a0, a1, a2, a3, a4));
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

        static PyObject *t_SolarRadiationPressure_acceleration(t_SolarRadiationPressure *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 2:
            {
              ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
              JArray< jdouble > a1((jobject) NULL);
              ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);

              if (!parseArgs(args, "k[D", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0, &a1))
              {
                OBJ_CALL(result = self->object.acceleration(a0, a1));
                return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
              }
            }
            {
              ::org::orekit::propagation::FieldSpacecraftState a0((jobject) NULL);
              PyTypeObject **p0;
              JArray< ::org::hipparchus::CalculusFieldElement > a1((jobject) NULL);
              PyTypeObject **p1;
              ::org::hipparchus::geometry::euclidean::threed::FieldVector3D result((jobject) NULL);

              if (!parseArgs(args, "K[K", ::org::orekit::propagation::FieldSpacecraftState::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::orekit::propagation::t_FieldSpacecraftState::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_))
              {
                OBJ_CALL(result = self->object.acceleration(a0, a1));
                return ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(result);
              }
            }
          }

          return callSuper(PY_TYPE(SolarRadiationPressure), (PyObject *) self, "acceleration", args, 2);
        }

        static PyObject *t_SolarRadiationPressure_getLightingRatio(t_SolarRadiationPressure *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              ::org::orekit::propagation::FieldSpacecraftState a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

              if (!parseArgs(args, "K", ::org::orekit::propagation::FieldSpacecraftState::initializeClass, &a0, &p0, ::org::orekit::propagation::t_FieldSpacecraftState::parameters_))
              {
                OBJ_CALL(result = self->object.getLightingRatio(a0));
                return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
              }
            }
            {
              ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
              jdouble result;

              if (!parseArgs(args, "k", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0))
              {
                OBJ_CALL(result = self->object.getLightingRatio(a0));
                return PyFloat_FromDouble((double) result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "getLightingRatio", args);
          return NULL;
        }

        static PyObject *t_SolarRadiationPressure_getParametersDrivers(t_SolarRadiationPressure *self, PyObject *args)
        {
          ::java::util::List result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getParametersDrivers());
            return ::java::util::t_List::wrap_Object(result, ::org::orekit::utils::PY_TYPE(ParameterDriver));
          }

          return callSuper(PY_TYPE(SolarRadiationPressure), (PyObject *) self, "getParametersDrivers", args, 2);
        }

        static PyObject *t_SolarRadiationPressure_get__parametersDrivers(t_SolarRadiationPressure *self, void *data)
        {
          ::java::util::List value((jobject) NULL);
          OBJ_CALL(value = self->object.getParametersDrivers());
          return ::java::util::t_List::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/utils/MultipleShooter.h"
#include "java/util/List.h"
#include "org/orekit/propagation/numerical/EpochDerivativesEquations.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "org/orekit/propagation/numerical/NumericalPropagator.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace utils {

      ::java::lang::Class *MultipleShooter::class$ = NULL;
      jmethodID *MultipleShooter::mids$ = NULL;
      bool MultipleShooter::live$ = false;

      jclass MultipleShooter::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/utils/MultipleShooter");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_2381028a34dd7d63] = env->getMethodID(cls, "<init>", "(Ljava/util/List;Ljava/util/List;Ljava/util/List;DI)V");
          mids$[mid_getAugmentedInitialState_f4730dd89e9880a0] = env->getMethodID(cls, "getAugmentedInitialState", "(I)Lorg/orekit/propagation/SpacecraftState;");
          mids$[mid_computeAdditionalConstraints_a16345554cd829da] = env->getMethodID(cls, "computeAdditionalConstraints", "(Ljava/util/List;)[D");
          mids$[mid_computeAdditionalJacobianMatrix_223f424c780300ce] = env->getMethodID(cls, "computeAdditionalJacobianMatrix", "(Ljava/util/List;)[[D");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      MultipleShooter::MultipleShooter(const ::java::util::List & a0, const ::java::util::List & a1, const ::java::util::List & a2, jdouble a3, jint a4) : ::org::orekit::utils::AbstractMultipleShooting(env->newObject(initializeClass, &mids$, mid_init$_2381028a34dd7d63, a0.this$, a1.this$, a2.this$, a3, a4)) {}
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace utils {
      static PyObject *t_MultipleShooter_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_MultipleShooter_instance_(PyTypeObject *type, PyObject *arg);
      static int t_MultipleShooter_init_(t_MultipleShooter *self, PyObject *args, PyObject *kwds);

      static PyMethodDef t_MultipleShooter__methods_[] = {
        DECLARE_METHOD(t_MultipleShooter, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_MultipleShooter, instance_, METH_O | METH_CLASS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(MultipleShooter)[] = {
        { Py_tp_methods, t_MultipleShooter__methods_ },
        { Py_tp_init, (void *) t_MultipleShooter_init_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(MultipleShooter)[] = {
        &PY_TYPE_DEF(::org::orekit::utils::AbstractMultipleShooting),
        NULL
      };

      DEFINE_TYPE(MultipleShooter, t_MultipleShooter, MultipleShooter);

      void t_MultipleShooter::install(PyObject *module)
      {
        installType(&PY_TYPE(MultipleShooter), &PY_TYPE_DEF(MultipleShooter), module, "MultipleShooter", 0);
      }

      void t_MultipleShooter::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(MultipleShooter), "class_", make_descriptor(MultipleShooter::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(MultipleShooter), "wrapfn_", make_descriptor(t_MultipleShooter::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(MultipleShooter), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_MultipleShooter_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, MultipleShooter::initializeClass, 1)))
          return NULL;
        return t_MultipleShooter::wrap_Object(MultipleShooter(((t_MultipleShooter *) arg)->object.this$));
      }
      static PyObject *t_MultipleShooter_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, MultipleShooter::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_MultipleShooter_init_(t_MultipleShooter *self, PyObject *args, PyObject *kwds)
      {
        ::java::util::List a0((jobject) NULL);
        PyTypeObject **p0;
        ::java::util::List a1((jobject) NULL);
        PyTypeObject **p1;
        ::java::util::List a2((jobject) NULL);
        PyTypeObject **p2;
        jdouble a3;
        jint a4;
        MultipleShooter object((jobject) NULL);

        if (!parseArgs(args, "KKKDI", ::java::util::List::initializeClass, ::java::util::List::initializeClass, ::java::util::List::initializeClass, &a0, &p0, ::java::util::t_List::parameters_, &a1, &p1, ::java::util::t_List::parameters_, &a2, &p2, ::java::util::t_List::parameters_, &a3, &a4))
        {
          INT_CALL(object = MultipleShooter(a0, a1, a2, a3, a4));
          self->object = object;
        }
        else
        {
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/models/earth/GeoMagneticModelLoader.h"
#include "java/io/InputStream.h"
#include "org/orekit/data/DataLoader.h"
#include "java/util/Collection.h"
#include "java/text/ParseException.h"
#include "java/io/IOException.h"
#include "org/orekit/models/earth/GeoMagneticField.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace models {
      namespace earth {

        ::java::lang::Class *GeoMagneticModelLoader::class$ = NULL;
        jmethodID *GeoMagneticModelLoader::mids$ = NULL;
        bool GeoMagneticModelLoader::live$ = false;

        jclass GeoMagneticModelLoader::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/models/earth/GeoMagneticModelLoader");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_a1fa5dae97ea5ed2] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_getModels_cb666ea1a15f5210] = env->getMethodID(cls, "getModels", "()Ljava/util/Collection;");
            mids$[mid_loadData_360461e719fb564c] = env->getMethodID(cls, "loadData", "(Ljava/io/InputStream;Ljava/lang/String;)V");
            mids$[mid_stillAcceptsData_9ab94ac1dc23b105] = env->getMethodID(cls, "stillAcceptsData", "()Z");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        GeoMagneticModelLoader::GeoMagneticModelLoader() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_a1fa5dae97ea5ed2)) {}

        ::java::util::Collection GeoMagneticModelLoader::getModels() const
        {
          return ::java::util::Collection(env->callObjectMethod(this$, mids$[mid_getModels_cb666ea1a15f5210]));
        }

        void GeoMagneticModelLoader::loadData(const ::java::io::InputStream & a0, const ::java::lang::String & a1) const
        {
          env->callVoidMethod(this$, mids$[mid_loadData_360461e719fb564c], a0.this$, a1.this$);
        }

        jboolean GeoMagneticModelLoader::stillAcceptsData() const
        {
          return env->callBooleanMethod(this$, mids$[mid_stillAcceptsData_9ab94ac1dc23b105]);
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
    namespace models {
      namespace earth {
        static PyObject *t_GeoMagneticModelLoader_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_GeoMagneticModelLoader_instance_(PyTypeObject *type, PyObject *arg);
        static int t_GeoMagneticModelLoader_init_(t_GeoMagneticModelLoader *self, PyObject *args, PyObject *kwds);
        static PyObject *t_GeoMagneticModelLoader_getModels(t_GeoMagneticModelLoader *self);
        static PyObject *t_GeoMagneticModelLoader_loadData(t_GeoMagneticModelLoader *self, PyObject *args);
        static PyObject *t_GeoMagneticModelLoader_stillAcceptsData(t_GeoMagneticModelLoader *self);
        static PyObject *t_GeoMagneticModelLoader_get__models(t_GeoMagneticModelLoader *self, void *data);
        static PyGetSetDef t_GeoMagneticModelLoader__fields_[] = {
          DECLARE_GET_FIELD(t_GeoMagneticModelLoader, models),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_GeoMagneticModelLoader__methods_[] = {
          DECLARE_METHOD(t_GeoMagneticModelLoader, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_GeoMagneticModelLoader, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_GeoMagneticModelLoader, getModels, METH_NOARGS),
          DECLARE_METHOD(t_GeoMagneticModelLoader, loadData, METH_VARARGS),
          DECLARE_METHOD(t_GeoMagneticModelLoader, stillAcceptsData, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(GeoMagneticModelLoader)[] = {
          { Py_tp_methods, t_GeoMagneticModelLoader__methods_ },
          { Py_tp_init, (void *) t_GeoMagneticModelLoader_init_ },
          { Py_tp_getset, t_GeoMagneticModelLoader__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(GeoMagneticModelLoader)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(GeoMagneticModelLoader, t_GeoMagneticModelLoader, GeoMagneticModelLoader);

        void t_GeoMagneticModelLoader::install(PyObject *module)
        {
          installType(&PY_TYPE(GeoMagneticModelLoader), &PY_TYPE_DEF(GeoMagneticModelLoader), module, "GeoMagneticModelLoader", 0);
        }

        void t_GeoMagneticModelLoader::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(GeoMagneticModelLoader), "class_", make_descriptor(GeoMagneticModelLoader::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(GeoMagneticModelLoader), "wrapfn_", make_descriptor(t_GeoMagneticModelLoader::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(GeoMagneticModelLoader), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_GeoMagneticModelLoader_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, GeoMagneticModelLoader::initializeClass, 1)))
            return NULL;
          return t_GeoMagneticModelLoader::wrap_Object(GeoMagneticModelLoader(((t_GeoMagneticModelLoader *) arg)->object.this$));
        }
        static PyObject *t_GeoMagneticModelLoader_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, GeoMagneticModelLoader::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_GeoMagneticModelLoader_init_(t_GeoMagneticModelLoader *self, PyObject *args, PyObject *kwds)
        {
          GeoMagneticModelLoader object((jobject) NULL);

          INT_CALL(object = GeoMagneticModelLoader());
          self->object = object;

          return 0;
        }

        static PyObject *t_GeoMagneticModelLoader_getModels(t_GeoMagneticModelLoader *self)
        {
          ::java::util::Collection result((jobject) NULL);
          OBJ_CALL(result = self->object.getModels());
          return ::java::util::t_Collection::wrap_Object(result, ::org::orekit::models::earth::PY_TYPE(GeoMagneticField));
        }

        static PyObject *t_GeoMagneticModelLoader_loadData(t_GeoMagneticModelLoader *self, PyObject *args)
        {
          ::java::io::InputStream a0((jobject) NULL);
          ::java::lang::String a1((jobject) NULL);

          if (!parseArgs(args, "ks", ::java::io::InputStream::initializeClass, &a0, &a1))
          {
            OBJ_CALL(self->object.loadData(a0, a1));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "loadData", args);
          return NULL;
        }

        static PyObject *t_GeoMagneticModelLoader_stillAcceptsData(t_GeoMagneticModelLoader *self)
        {
          jboolean result;
          OBJ_CALL(result = self->object.stillAcceptsData());
          Py_RETURN_BOOL(result);
        }

        static PyObject *t_GeoMagneticModelLoader_get__models(t_GeoMagneticModelLoader *self, void *data)
        {
          ::java::util::Collection value((jobject) NULL);
          OBJ_CALL(value = self->object.getModels());
          return ::java::util::t_Collection::wrap_Object(value);
        }
      }
    }
  }
}
