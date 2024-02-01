#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/attitudes/TorqueFree.h"
#include "org/orekit/attitudes/AttitudeProvider.h"
#include "org/orekit/utils/FieldPVCoordinatesProvider.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/attitudes/Inertia.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/attitudes/FieldAttitude.h"
#include "java/lang/Class.h"
#include "org/orekit/attitudes/Attitude.h"
#include "org/orekit/utils/PVCoordinatesProvider.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace attitudes {

      ::java::lang::Class *TorqueFree::class$ = NULL;
      jmethodID *TorqueFree::mids$ = NULL;
      bool TorqueFree::live$ = false;

      jclass TorqueFree::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/attitudes/TorqueFree");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_1a2ba29dfab02e0d] = env->getMethodID(cls, "<init>", "(Lorg/orekit/attitudes/Attitude;Lorg/orekit/attitudes/Inertia;)V");
          mids$[mid_getAttitude_aab1c6ab68ffdcbb] = env->getMethodID(cls, "getAttitude", "(Lorg/orekit/utils/FieldPVCoordinatesProvider;Lorg/orekit/time/FieldAbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/orekit/attitudes/FieldAttitude;");
          mids$[mid_getAttitude_a02177519e1b6a45] = env->getMethodID(cls, "getAttitude", "(Lorg/orekit/utils/PVCoordinatesProvider;Lorg/orekit/time/AbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/orekit/attitudes/Attitude;");
          mids$[mid_getInertia_355dbe403ed36c8e] = env->getMethodID(cls, "getInertia", "()Lorg/orekit/attitudes/Inertia;");
          mids$[mid_getInitialAttitude_83f44b5ac6431edc] = env->getMethodID(cls, "getInitialAttitude", "()Lorg/orekit/attitudes/Attitude;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      TorqueFree::TorqueFree(const ::org::orekit::attitudes::Attitude & a0, const ::org::orekit::attitudes::Inertia & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_1a2ba29dfab02e0d, a0.this$, a1.this$)) {}

      ::org::orekit::attitudes::FieldAttitude TorqueFree::getAttitude(const ::org::orekit::utils::FieldPVCoordinatesProvider & a0, const ::org::orekit::time::FieldAbsoluteDate & a1, const ::org::orekit::frames::Frame & a2) const
      {
        return ::org::orekit::attitudes::FieldAttitude(env->callObjectMethod(this$, mids$[mid_getAttitude_aab1c6ab68ffdcbb], a0.this$, a1.this$, a2.this$));
      }

      ::org::orekit::attitudes::Attitude TorqueFree::getAttitude(const ::org::orekit::utils::PVCoordinatesProvider & a0, const ::org::orekit::time::AbsoluteDate & a1, const ::org::orekit::frames::Frame & a2) const
      {
        return ::org::orekit::attitudes::Attitude(env->callObjectMethod(this$, mids$[mid_getAttitude_a02177519e1b6a45], a0.this$, a1.this$, a2.this$));
      }

      ::org::orekit::attitudes::Inertia TorqueFree::getInertia() const
      {
        return ::org::orekit::attitudes::Inertia(env->callObjectMethod(this$, mids$[mid_getInertia_355dbe403ed36c8e]));
      }

      ::org::orekit::attitudes::Attitude TorqueFree::getInitialAttitude() const
      {
        return ::org::orekit::attitudes::Attitude(env->callObjectMethod(this$, mids$[mid_getInitialAttitude_83f44b5ac6431edc]));
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace attitudes {
      static PyObject *t_TorqueFree_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_TorqueFree_instance_(PyTypeObject *type, PyObject *arg);
      static int t_TorqueFree_init_(t_TorqueFree *self, PyObject *args, PyObject *kwds);
      static PyObject *t_TorqueFree_getAttitude(t_TorqueFree *self, PyObject *args);
      static PyObject *t_TorqueFree_getInertia(t_TorqueFree *self);
      static PyObject *t_TorqueFree_getInitialAttitude(t_TorqueFree *self);
      static PyObject *t_TorqueFree_get__inertia(t_TorqueFree *self, void *data);
      static PyObject *t_TorqueFree_get__initialAttitude(t_TorqueFree *self, void *data);
      static PyGetSetDef t_TorqueFree__fields_[] = {
        DECLARE_GET_FIELD(t_TorqueFree, inertia),
        DECLARE_GET_FIELD(t_TorqueFree, initialAttitude),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_TorqueFree__methods_[] = {
        DECLARE_METHOD(t_TorqueFree, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_TorqueFree, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_TorqueFree, getAttitude, METH_VARARGS),
        DECLARE_METHOD(t_TorqueFree, getInertia, METH_NOARGS),
        DECLARE_METHOD(t_TorqueFree, getInitialAttitude, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(TorqueFree)[] = {
        { Py_tp_methods, t_TorqueFree__methods_ },
        { Py_tp_init, (void *) t_TorqueFree_init_ },
        { Py_tp_getset, t_TorqueFree__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(TorqueFree)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(TorqueFree, t_TorqueFree, TorqueFree);

      void t_TorqueFree::install(PyObject *module)
      {
        installType(&PY_TYPE(TorqueFree), &PY_TYPE_DEF(TorqueFree), module, "TorqueFree", 0);
      }

      void t_TorqueFree::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(TorqueFree), "class_", make_descriptor(TorqueFree::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(TorqueFree), "wrapfn_", make_descriptor(t_TorqueFree::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(TorqueFree), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_TorqueFree_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, TorqueFree::initializeClass, 1)))
          return NULL;
        return t_TorqueFree::wrap_Object(TorqueFree(((t_TorqueFree *) arg)->object.this$));
      }
      static PyObject *t_TorqueFree_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, TorqueFree::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_TorqueFree_init_(t_TorqueFree *self, PyObject *args, PyObject *kwds)
      {
        ::org::orekit::attitudes::Attitude a0((jobject) NULL);
        ::org::orekit::attitudes::Inertia a1((jobject) NULL);
        TorqueFree object((jobject) NULL);

        if (!parseArgs(args, "kk", ::org::orekit::attitudes::Attitude::initializeClass, ::org::orekit::attitudes::Inertia::initializeClass, &a0, &a1))
        {
          INT_CALL(object = TorqueFree(a0, a1));
          self->object = object;
        }
        else
        {
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_TorqueFree_getAttitude(t_TorqueFree *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 3:
          {
            ::org::orekit::utils::PVCoordinatesProvider a0((jobject) NULL);
            ::org::orekit::time::AbsoluteDate a1((jobject) NULL);
            ::org::orekit::frames::Frame a2((jobject) NULL);
            ::org::orekit::attitudes::Attitude result((jobject) NULL);

            if (!parseArgs(args, "kkk", ::org::orekit::utils::PVCoordinatesProvider::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::frames::Frame::initializeClass, &a0, &a1, &a2))
            {
              OBJ_CALL(result = self->object.getAttitude(a0, a1, a2));
              return ::org::orekit::attitudes::t_Attitude::wrap_Object(result);
            }
          }
          {
            ::org::orekit::utils::FieldPVCoordinatesProvider a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::time::FieldAbsoluteDate a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::orekit::frames::Frame a2((jobject) NULL);
            ::org::orekit::attitudes::FieldAttitude result((jobject) NULL);

            if (!parseArgs(args, "KKk", ::org::orekit::utils::FieldPVCoordinatesProvider::initializeClass, ::org::orekit::time::FieldAbsoluteDate::initializeClass, ::org::orekit::frames::Frame::initializeClass, &a0, &p0, ::org::orekit::utils::t_FieldPVCoordinatesProvider::parameters_, &a1, &p1, ::org::orekit::time::t_FieldAbsoluteDate::parameters_, &a2))
            {
              OBJ_CALL(result = self->object.getAttitude(a0, a1, a2));
              return ::org::orekit::attitudes::t_FieldAttitude::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "getAttitude", args);
        return NULL;
      }

      static PyObject *t_TorqueFree_getInertia(t_TorqueFree *self)
      {
        ::org::orekit::attitudes::Inertia result((jobject) NULL);
        OBJ_CALL(result = self->object.getInertia());
        return ::org::orekit::attitudes::t_Inertia::wrap_Object(result);
      }

      static PyObject *t_TorqueFree_getInitialAttitude(t_TorqueFree *self)
      {
        ::org::orekit::attitudes::Attitude result((jobject) NULL);
        OBJ_CALL(result = self->object.getInitialAttitude());
        return ::org::orekit::attitudes::t_Attitude::wrap_Object(result);
      }

      static PyObject *t_TorqueFree_get__inertia(t_TorqueFree *self, void *data)
      {
        ::org::orekit::attitudes::Inertia value((jobject) NULL);
        OBJ_CALL(value = self->object.getInertia());
        return ::org::orekit::attitudes::t_Inertia::wrap_Object(value);
      }

      static PyObject *t_TorqueFree_get__initialAttitude(t_TorqueFree *self, void *data)
      {
        ::org::orekit::attitudes::Attitude value((jobject) NULL);
        OBJ_CALL(value = self->object.getInitialAttitude());
        return ::org::orekit::attitudes::t_Attitude::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/ndm/adm/acm/AcmMetadataKey.h"
#include "org/orekit/files/ccsds/ndm/adm/acm/AcmMetadata.h"
#include "org/orekit/files/ccsds/ndm/adm/acm/AcmMetadataKey.h"
#include "org/orekit/files/ccsds/utils/lexical/ParseToken.h"
#include "java/lang/Class.h"
#include "org/orekit/files/ccsds/utils/ContextBinding.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace adm {
            namespace acm {

              ::java::lang::Class *AcmMetadataKey::class$ = NULL;
              jmethodID *AcmMetadataKey::mids$ = NULL;
              bool AcmMetadataKey::live$ = false;
              AcmMetadataKey *AcmMetadataKey::ACM_DATA_ELEMENTS = NULL;
              AcmMetadataKey *AcmMetadataKey::CATALOG_NAME = NULL;
              AcmMetadataKey *AcmMetadataKey::EPOCH_TZERO = NULL;
              AcmMetadataKey *AcmMetadataKey::INTERNATIONAL_DESIGNATOR = NULL;
              AcmMetadataKey *AcmMetadataKey::NEXT_LEAP_EPOCH = NULL;
              AcmMetadataKey *AcmMetadataKey::NEXT_LEAP_TAIMUTC = NULL;
              AcmMetadataKey *AcmMetadataKey::OBJECT_DESIGNATOR = NULL;
              AcmMetadataKey *AcmMetadataKey::ODM_MSG_LINK = NULL;
              AcmMetadataKey *AcmMetadataKey::ORIGINATOR_ADDRESS = NULL;
              AcmMetadataKey *AcmMetadataKey::ORIGINATOR_EMAIL = NULL;
              AcmMetadataKey *AcmMetadataKey::ORIGINATOR_PHONE = NULL;
              AcmMetadataKey *AcmMetadataKey::ORIGINATOR_POC = NULL;
              AcmMetadataKey *AcmMetadataKey::ORIGINATOR_POSITION = NULL;
              AcmMetadataKey *AcmMetadataKey::START_TIME = NULL;
              AcmMetadataKey *AcmMetadataKey::STOP_TIME = NULL;
              AcmMetadataKey *AcmMetadataKey::TAIMUTC_AT_TZERO = NULL;

              jclass AcmMetadataKey::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/adm/acm/AcmMetadataKey");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_process_57d524268ce6e6e6] = env->getMethodID(cls, "process", "(Lorg/orekit/files/ccsds/utils/lexical/ParseToken;Lorg/orekit/files/ccsds/utils/ContextBinding;Lorg/orekit/files/ccsds/ndm/adm/acm/AcmMetadata;)Z");
                  mids$[mid_valueOf_fa7728ef2d22c083] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/files/ccsds/ndm/adm/acm/AcmMetadataKey;");
                  mids$[mid_values_c43d509aac847c75] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/files/ccsds/ndm/adm/acm/AcmMetadataKey;");

                  class$ = new ::java::lang::Class(cls);
                  cls = (jclass) class$->this$;

                  ACM_DATA_ELEMENTS = new AcmMetadataKey(env->getStaticObjectField(cls, "ACM_DATA_ELEMENTS", "Lorg/orekit/files/ccsds/ndm/adm/acm/AcmMetadataKey;"));
                  CATALOG_NAME = new AcmMetadataKey(env->getStaticObjectField(cls, "CATALOG_NAME", "Lorg/orekit/files/ccsds/ndm/adm/acm/AcmMetadataKey;"));
                  EPOCH_TZERO = new AcmMetadataKey(env->getStaticObjectField(cls, "EPOCH_TZERO", "Lorg/orekit/files/ccsds/ndm/adm/acm/AcmMetadataKey;"));
                  INTERNATIONAL_DESIGNATOR = new AcmMetadataKey(env->getStaticObjectField(cls, "INTERNATIONAL_DESIGNATOR", "Lorg/orekit/files/ccsds/ndm/adm/acm/AcmMetadataKey;"));
                  NEXT_LEAP_EPOCH = new AcmMetadataKey(env->getStaticObjectField(cls, "NEXT_LEAP_EPOCH", "Lorg/orekit/files/ccsds/ndm/adm/acm/AcmMetadataKey;"));
                  NEXT_LEAP_TAIMUTC = new AcmMetadataKey(env->getStaticObjectField(cls, "NEXT_LEAP_TAIMUTC", "Lorg/orekit/files/ccsds/ndm/adm/acm/AcmMetadataKey;"));
                  OBJECT_DESIGNATOR = new AcmMetadataKey(env->getStaticObjectField(cls, "OBJECT_DESIGNATOR", "Lorg/orekit/files/ccsds/ndm/adm/acm/AcmMetadataKey;"));
                  ODM_MSG_LINK = new AcmMetadataKey(env->getStaticObjectField(cls, "ODM_MSG_LINK", "Lorg/orekit/files/ccsds/ndm/adm/acm/AcmMetadataKey;"));
                  ORIGINATOR_ADDRESS = new AcmMetadataKey(env->getStaticObjectField(cls, "ORIGINATOR_ADDRESS", "Lorg/orekit/files/ccsds/ndm/adm/acm/AcmMetadataKey;"));
                  ORIGINATOR_EMAIL = new AcmMetadataKey(env->getStaticObjectField(cls, "ORIGINATOR_EMAIL", "Lorg/orekit/files/ccsds/ndm/adm/acm/AcmMetadataKey;"));
                  ORIGINATOR_PHONE = new AcmMetadataKey(env->getStaticObjectField(cls, "ORIGINATOR_PHONE", "Lorg/orekit/files/ccsds/ndm/adm/acm/AcmMetadataKey;"));
                  ORIGINATOR_POC = new AcmMetadataKey(env->getStaticObjectField(cls, "ORIGINATOR_POC", "Lorg/orekit/files/ccsds/ndm/adm/acm/AcmMetadataKey;"));
                  ORIGINATOR_POSITION = new AcmMetadataKey(env->getStaticObjectField(cls, "ORIGINATOR_POSITION", "Lorg/orekit/files/ccsds/ndm/adm/acm/AcmMetadataKey;"));
                  START_TIME = new AcmMetadataKey(env->getStaticObjectField(cls, "START_TIME", "Lorg/orekit/files/ccsds/ndm/adm/acm/AcmMetadataKey;"));
                  STOP_TIME = new AcmMetadataKey(env->getStaticObjectField(cls, "STOP_TIME", "Lorg/orekit/files/ccsds/ndm/adm/acm/AcmMetadataKey;"));
                  TAIMUTC_AT_TZERO = new AcmMetadataKey(env->getStaticObjectField(cls, "TAIMUTC_AT_TZERO", "Lorg/orekit/files/ccsds/ndm/adm/acm/AcmMetadataKey;"));
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              jboolean AcmMetadataKey::process(const ::org::orekit::files::ccsds::utils::lexical::ParseToken & a0, const ::org::orekit::files::ccsds::utils::ContextBinding & a1, const ::org::orekit::files::ccsds::ndm::adm::acm::AcmMetadata & a2) const
              {
                return env->callBooleanMethod(this$, mids$[mid_process_57d524268ce6e6e6], a0.this$, a1.this$, a2.this$);
              }

              AcmMetadataKey AcmMetadataKey::valueOf(const ::java::lang::String & a0)
              {
                jclass cls = env->getClass(initializeClass);
                return AcmMetadataKey(env->callStaticObjectMethod(cls, mids$[mid_valueOf_fa7728ef2d22c083], a0.this$));
              }

              JArray< AcmMetadataKey > AcmMetadataKey::values()
              {
                jclass cls = env->getClass(initializeClass);
                return JArray< AcmMetadataKey >(env->callStaticObjectMethod(cls, mids$[mid_values_c43d509aac847c75]));
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
            namespace acm {
              static PyObject *t_AcmMetadataKey_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_AcmMetadataKey_instance_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_AcmMetadataKey_of_(t_AcmMetadataKey *self, PyObject *args);
              static PyObject *t_AcmMetadataKey_process(t_AcmMetadataKey *self, PyObject *args);
              static PyObject *t_AcmMetadataKey_valueOf(PyTypeObject *type, PyObject *args);
              static PyObject *t_AcmMetadataKey_values(PyTypeObject *type);
              static PyObject *t_AcmMetadataKey_get__parameters_(t_AcmMetadataKey *self, void *data);
              static PyGetSetDef t_AcmMetadataKey__fields_[] = {
                DECLARE_GET_FIELD(t_AcmMetadataKey, parameters_),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_AcmMetadataKey__methods_[] = {
                DECLARE_METHOD(t_AcmMetadataKey, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_AcmMetadataKey, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_AcmMetadataKey, of_, METH_VARARGS),
                DECLARE_METHOD(t_AcmMetadataKey, process, METH_VARARGS),
                DECLARE_METHOD(t_AcmMetadataKey, valueOf, METH_VARARGS | METH_CLASS),
                DECLARE_METHOD(t_AcmMetadataKey, values, METH_NOARGS | METH_CLASS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(AcmMetadataKey)[] = {
                { Py_tp_methods, t_AcmMetadataKey__methods_ },
                { Py_tp_init, (void *) abstract_init },
                { Py_tp_getset, t_AcmMetadataKey__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(AcmMetadataKey)[] = {
                &PY_TYPE_DEF(::java::lang::Enum),
                NULL
              };

              DEFINE_TYPE(AcmMetadataKey, t_AcmMetadataKey, AcmMetadataKey);
              PyObject *t_AcmMetadataKey::wrap_Object(const AcmMetadataKey& object, PyTypeObject *p0)
              {
                PyObject *obj = t_AcmMetadataKey::wrap_Object(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_AcmMetadataKey *self = (t_AcmMetadataKey *) obj;
                  self->parameters[0] = p0;
                }
                return obj;
              }

              PyObject *t_AcmMetadataKey::wrap_jobject(const jobject& object, PyTypeObject *p0)
              {
                PyObject *obj = t_AcmMetadataKey::wrap_jobject(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_AcmMetadataKey *self = (t_AcmMetadataKey *) obj;
                  self->parameters[0] = p0;
                }
                return obj;
              }

              void t_AcmMetadataKey::install(PyObject *module)
              {
                installType(&PY_TYPE(AcmMetadataKey), &PY_TYPE_DEF(AcmMetadataKey), module, "AcmMetadataKey", 0);
              }

              void t_AcmMetadataKey::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(AcmMetadataKey), "class_", make_descriptor(AcmMetadataKey::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AcmMetadataKey), "wrapfn_", make_descriptor(t_AcmMetadataKey::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AcmMetadataKey), "boxfn_", make_descriptor(boxObject));
                env->getClass(AcmMetadataKey::initializeClass);
                PyObject_SetAttrString((PyObject *) PY_TYPE(AcmMetadataKey), "ACM_DATA_ELEMENTS", make_descriptor(t_AcmMetadataKey::wrap_Object(*AcmMetadataKey::ACM_DATA_ELEMENTS)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AcmMetadataKey), "CATALOG_NAME", make_descriptor(t_AcmMetadataKey::wrap_Object(*AcmMetadataKey::CATALOG_NAME)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AcmMetadataKey), "EPOCH_TZERO", make_descriptor(t_AcmMetadataKey::wrap_Object(*AcmMetadataKey::EPOCH_TZERO)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AcmMetadataKey), "INTERNATIONAL_DESIGNATOR", make_descriptor(t_AcmMetadataKey::wrap_Object(*AcmMetadataKey::INTERNATIONAL_DESIGNATOR)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AcmMetadataKey), "NEXT_LEAP_EPOCH", make_descriptor(t_AcmMetadataKey::wrap_Object(*AcmMetadataKey::NEXT_LEAP_EPOCH)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AcmMetadataKey), "NEXT_LEAP_TAIMUTC", make_descriptor(t_AcmMetadataKey::wrap_Object(*AcmMetadataKey::NEXT_LEAP_TAIMUTC)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AcmMetadataKey), "OBJECT_DESIGNATOR", make_descriptor(t_AcmMetadataKey::wrap_Object(*AcmMetadataKey::OBJECT_DESIGNATOR)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AcmMetadataKey), "ODM_MSG_LINK", make_descriptor(t_AcmMetadataKey::wrap_Object(*AcmMetadataKey::ODM_MSG_LINK)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AcmMetadataKey), "ORIGINATOR_ADDRESS", make_descriptor(t_AcmMetadataKey::wrap_Object(*AcmMetadataKey::ORIGINATOR_ADDRESS)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AcmMetadataKey), "ORIGINATOR_EMAIL", make_descriptor(t_AcmMetadataKey::wrap_Object(*AcmMetadataKey::ORIGINATOR_EMAIL)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AcmMetadataKey), "ORIGINATOR_PHONE", make_descriptor(t_AcmMetadataKey::wrap_Object(*AcmMetadataKey::ORIGINATOR_PHONE)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AcmMetadataKey), "ORIGINATOR_POC", make_descriptor(t_AcmMetadataKey::wrap_Object(*AcmMetadataKey::ORIGINATOR_POC)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AcmMetadataKey), "ORIGINATOR_POSITION", make_descriptor(t_AcmMetadataKey::wrap_Object(*AcmMetadataKey::ORIGINATOR_POSITION)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AcmMetadataKey), "START_TIME", make_descriptor(t_AcmMetadataKey::wrap_Object(*AcmMetadataKey::START_TIME)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AcmMetadataKey), "STOP_TIME", make_descriptor(t_AcmMetadataKey::wrap_Object(*AcmMetadataKey::STOP_TIME)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AcmMetadataKey), "TAIMUTC_AT_TZERO", make_descriptor(t_AcmMetadataKey::wrap_Object(*AcmMetadataKey::TAIMUTC_AT_TZERO)));
              }

              static PyObject *t_AcmMetadataKey_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, AcmMetadataKey::initializeClass, 1)))
                  return NULL;
                return t_AcmMetadataKey::wrap_Object(AcmMetadataKey(((t_AcmMetadataKey *) arg)->object.this$));
              }
              static PyObject *t_AcmMetadataKey_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, AcmMetadataKey::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static PyObject *t_AcmMetadataKey_of_(t_AcmMetadataKey *self, PyObject *args)
              {
                if (!parseArg(args, "T", 1, &(self->parameters)))
                  Py_RETURN_SELF;
                return PyErr_SetArgsError((PyObject *) self, "of_", args);
              }

              static PyObject *t_AcmMetadataKey_process(t_AcmMetadataKey *self, PyObject *args)
              {
                ::org::orekit::files::ccsds::utils::lexical::ParseToken a0((jobject) NULL);
                ::org::orekit::files::ccsds::utils::ContextBinding a1((jobject) NULL);
                ::org::orekit::files::ccsds::ndm::adm::acm::AcmMetadata a2((jobject) NULL);
                jboolean result;

                if (!parseArgs(args, "kkk", ::org::orekit::files::ccsds::utils::lexical::ParseToken::initializeClass, ::org::orekit::files::ccsds::utils::ContextBinding::initializeClass, ::org::orekit::files::ccsds::ndm::adm::acm::AcmMetadata::initializeClass, &a0, &a1, &a2))
                {
                  OBJ_CALL(result = self->object.process(a0, a1, a2));
                  Py_RETURN_BOOL(result);
                }

                PyErr_SetArgsError((PyObject *) self, "process", args);
                return NULL;
              }

              static PyObject *t_AcmMetadataKey_valueOf(PyTypeObject *type, PyObject *args)
              {
                ::java::lang::String a0((jobject) NULL);
                AcmMetadataKey result((jobject) NULL);

                if (!parseArgs(args, "s", &a0))
                {
                  OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::adm::acm::AcmMetadataKey::valueOf(a0));
                  return t_AcmMetadataKey::wrap_Object(result);
                }

                return callSuper(type, "valueOf", args, 2);
              }

              static PyObject *t_AcmMetadataKey_values(PyTypeObject *type)
              {
                JArray< AcmMetadataKey > result((jobject) NULL);
                OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::adm::acm::AcmMetadataKey::values());
                return JArray<jobject>(result.this$).wrap(t_AcmMetadataKey::wrap_jobject);
              }
              static PyObject *t_AcmMetadataKey_get__parameters_(t_AcmMetadataKey *self, void *data)
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
#include "org/orekit/files/ccsds/utils/generation/AbstractGenerator.h"
#include "org/orekit/files/ccsds/definitions/TimeConverter.h"
#include "java/util/List.h"
#include "java/io/IOException.h"
#include "java/lang/CharSequence.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/utils/units/Unit.h"
#include "java/lang/Double.h"
#include "java/lang/Enum.h"
#include "org/orekit/files/ccsds/utils/generation/Generator.h"
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

            ::java::lang::Class *AbstractGenerator::class$ = NULL;
            jmethodID *AbstractGenerator::mids$ = NULL;
            bool AbstractGenerator::live$ = false;

            jclass AbstractGenerator::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/utils/generation/AbstractGenerator");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_da38cf1e116c8866] = env->getMethodID(cls, "<init>", "(Ljava/lang/Appendable;Ljava/lang/String;DZ)V");
                mids$[mid_close_ff7cb6c242604316] = env->getMethodID(cls, "close", "()V");
                mids$[mid_dateToCalendarString_3a84e25c986c6ee9] = env->getMethodID(cls, "dateToCalendarString", "(Lorg/orekit/files/ccsds/definitions/TimeConverter;Lorg/orekit/time/AbsoluteDate;)Ljava/lang/String;");
                mids$[mid_dateToString_3a84e25c986c6ee9] = env->getMethodID(cls, "dateToString", "(Lorg/orekit/files/ccsds/definitions/TimeConverter;Lorg/orekit/time/AbsoluteDate;)Ljava/lang/String;");
                mids$[mid_dateToString_4b7bd88ca2c9af4f] = env->getMethodID(cls, "dateToString", "(IIIIID)Ljava/lang/String;");
                mids$[mid_doubleToString_e3ac8af686594d08] = env->getMethodID(cls, "doubleToString", "(D)Ljava/lang/String;");
                mids$[mid_enterSection_105e1eadb709d9ac] = env->getMethodID(cls, "enterSection", "(Ljava/lang/String;)V");
                mids$[mid_exitSection_d2c8eb4129821f0e] = env->getMethodID(cls, "exitSection", "()Ljava/lang/String;");
                mids$[mid_getOutputName_d2c8eb4129821f0e] = env->getMethodID(cls, "getOutputName", "()Ljava/lang/String;");
                mids$[mid_newLine_ff7cb6c242604316] = env->getMethodID(cls, "newLine", "()V");
                mids$[mid_siToCcsdsName_95277969d373e11f] = env->getMethodID(cls, "siToCcsdsName", "(Ljava/lang/String;)Ljava/lang/String;");
                mids$[mid_unitsListToString_fb05e7322a967ef4] = env->getMethodID(cls, "unitsListToString", "(Ljava/util/List;)Ljava/lang/String;");
                mids$[mid_writeEntry_fbddb446f588d87c] = env->getMethodID(cls, "writeEntry", "(Ljava/lang/String;Ljava/lang/Enum;Z)V");
                mids$[mid_writeEntry_9720630430a2c97a] = env->getMethodID(cls, "writeEntry", "(Ljava/lang/String;CZ)V");
                mids$[mid_writeEntry_7c6becc5014ffb9d] = env->getMethodID(cls, "writeEntry", "(Ljava/lang/String;IZ)V");
                mids$[mid_writeEntry_23006b59d2886732] = env->getMethodID(cls, "writeEntry", "(Ljava/lang/String;Ljava/util/List;Z)V");
                mids$[mid_writeEntry_5a370e95f6df4f1f] = env->getMethodID(cls, "writeEntry", "(Ljava/lang/String;Ljava/lang/Double;Lorg/orekit/utils/units/Unit;Z)V");
                mids$[mid_writeEntry_c56f62b126843856] = env->getMethodID(cls, "writeEntry", "(Ljava/lang/String;DLorg/orekit/utils/units/Unit;Z)V");
                mids$[mid_writeEntry_3276450880246d77] = env->getMethodID(cls, "writeEntry", "(Ljava/lang/String;Lorg/orekit/files/ccsds/definitions/TimeConverter;Lorg/orekit/time/AbsoluteDate;ZZ)V");
                mids$[mid_writeRawData_e8d07df586815a42] = env->getMethodID(cls, "writeRawData", "(C)V");
                mids$[mid_writeRawData_b81bfb528ebad57a] = env->getMethodID(cls, "writeRawData", "(Ljava/lang/CharSequence;)V");
                mids$[mid_writeUnits_acf6666529be31c6] = env->getMethodID(cls, "writeUnits", "(Lorg/orekit/utils/units/Unit;)Z");
                mids$[mid_complain_c5d48f261709aa3e] = env->getMethodID(cls, "complain", "(Ljava/lang/String;Z)V");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            AbstractGenerator::AbstractGenerator(const ::java::lang::Appendable & a0, const ::java::lang::String & a1, jdouble a2, jboolean a3) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_da38cf1e116c8866, a0.this$, a1.this$, a2, a3)) {}

            void AbstractGenerator::close() const
            {
              env->callVoidMethod(this$, mids$[mid_close_ff7cb6c242604316]);
            }

            ::java::lang::String AbstractGenerator::dateToCalendarString(const ::org::orekit::files::ccsds::definitions::TimeConverter & a0, const ::org::orekit::time::AbsoluteDate & a1) const
            {
              return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_dateToCalendarString_3a84e25c986c6ee9], a0.this$, a1.this$));
            }

            ::java::lang::String AbstractGenerator::dateToString(const ::org::orekit::files::ccsds::definitions::TimeConverter & a0, const ::org::orekit::time::AbsoluteDate & a1) const
            {
              return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_dateToString_3a84e25c986c6ee9], a0.this$, a1.this$));
            }

            ::java::lang::String AbstractGenerator::dateToString(jint a0, jint a1, jint a2, jint a3, jint a4, jdouble a5) const
            {
              return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_dateToString_4b7bd88ca2c9af4f], a0, a1, a2, a3, a4, a5));
            }

            ::java::lang::String AbstractGenerator::doubleToString(jdouble a0) const
            {
              return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_doubleToString_e3ac8af686594d08], a0));
            }

            void AbstractGenerator::enterSection(const ::java::lang::String & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_enterSection_105e1eadb709d9ac], a0.this$);
            }

            ::java::lang::String AbstractGenerator::exitSection() const
            {
              return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_exitSection_d2c8eb4129821f0e]));
            }

            ::java::lang::String AbstractGenerator::getOutputName() const
            {
              return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getOutputName_d2c8eb4129821f0e]));
            }

            void AbstractGenerator::newLine() const
            {
              env->callVoidMethod(this$, mids$[mid_newLine_ff7cb6c242604316]);
            }

            ::java::lang::String AbstractGenerator::siToCcsdsName(const ::java::lang::String & a0) const
            {
              return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_siToCcsdsName_95277969d373e11f], a0.this$));
            }

            ::java::lang::String AbstractGenerator::unitsListToString(const ::java::util::List & a0) const
            {
              return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_unitsListToString_fb05e7322a967ef4], a0.this$));
            }

            void AbstractGenerator::writeEntry(const ::java::lang::String & a0, const ::java::lang::Enum & a1, jboolean a2) const
            {
              env->callVoidMethod(this$, mids$[mid_writeEntry_fbddb446f588d87c], a0.this$, a1.this$, a2);
            }

            void AbstractGenerator::writeEntry(const ::java::lang::String & a0, jchar a1, jboolean a2) const
            {
              env->callVoidMethod(this$, mids$[mid_writeEntry_9720630430a2c97a], a0.this$, a1, a2);
            }

            void AbstractGenerator::writeEntry(const ::java::lang::String & a0, jint a1, jboolean a2) const
            {
              env->callVoidMethod(this$, mids$[mid_writeEntry_7c6becc5014ffb9d], a0.this$, a1, a2);
            }

            void AbstractGenerator::writeEntry(const ::java::lang::String & a0, const ::java::util::List & a1, jboolean a2) const
            {
              env->callVoidMethod(this$, mids$[mid_writeEntry_23006b59d2886732], a0.this$, a1.this$, a2);
            }

            void AbstractGenerator::writeEntry(const ::java::lang::String & a0, const ::java::lang::Double & a1, const ::org::orekit::utils::units::Unit & a2, jboolean a3) const
            {
              env->callVoidMethod(this$, mids$[mid_writeEntry_5a370e95f6df4f1f], a0.this$, a1.this$, a2.this$, a3);
            }

            void AbstractGenerator::writeEntry(const ::java::lang::String & a0, jdouble a1, const ::org::orekit::utils::units::Unit & a2, jboolean a3) const
            {
              env->callVoidMethod(this$, mids$[mid_writeEntry_c56f62b126843856], a0.this$, a1, a2.this$, a3);
            }

            void AbstractGenerator::writeEntry(const ::java::lang::String & a0, const ::org::orekit::files::ccsds::definitions::TimeConverter & a1, const ::org::orekit::time::AbsoluteDate & a2, jboolean a3, jboolean a4) const
            {
              env->callVoidMethod(this$, mids$[mid_writeEntry_3276450880246d77], a0.this$, a1.this$, a2.this$, a3, a4);
            }

            void AbstractGenerator::writeRawData(jchar a0) const
            {
              env->callVoidMethod(this$, mids$[mid_writeRawData_e8d07df586815a42], a0);
            }

            void AbstractGenerator::writeRawData(const ::java::lang::CharSequence & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_writeRawData_b81bfb528ebad57a], a0.this$);
            }

            jboolean AbstractGenerator::writeUnits(const ::org::orekit::utils::units::Unit & a0) const
            {
              return env->callBooleanMethod(this$, mids$[mid_writeUnits_acf6666529be31c6], a0.this$);
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
            static PyObject *t_AbstractGenerator_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_AbstractGenerator_instance_(PyTypeObject *type, PyObject *arg);
            static int t_AbstractGenerator_init_(t_AbstractGenerator *self, PyObject *args, PyObject *kwds);
            static PyObject *t_AbstractGenerator_close(t_AbstractGenerator *self);
            static PyObject *t_AbstractGenerator_dateToCalendarString(t_AbstractGenerator *self, PyObject *args);
            static PyObject *t_AbstractGenerator_dateToString(t_AbstractGenerator *self, PyObject *args);
            static PyObject *t_AbstractGenerator_doubleToString(t_AbstractGenerator *self, PyObject *arg);
            static PyObject *t_AbstractGenerator_enterSection(t_AbstractGenerator *self, PyObject *arg);
            static PyObject *t_AbstractGenerator_exitSection(t_AbstractGenerator *self);
            static PyObject *t_AbstractGenerator_getOutputName(t_AbstractGenerator *self);
            static PyObject *t_AbstractGenerator_newLine(t_AbstractGenerator *self);
            static PyObject *t_AbstractGenerator_siToCcsdsName(t_AbstractGenerator *self, PyObject *arg);
            static PyObject *t_AbstractGenerator_unitsListToString(t_AbstractGenerator *self, PyObject *arg);
            static PyObject *t_AbstractGenerator_writeEntry(t_AbstractGenerator *self, PyObject *args);
            static PyObject *t_AbstractGenerator_writeRawData(t_AbstractGenerator *self, PyObject *args);
            static PyObject *t_AbstractGenerator_writeUnits(t_AbstractGenerator *self, PyObject *arg);
            static PyObject *t_AbstractGenerator_get__outputName(t_AbstractGenerator *self, void *data);
            static PyGetSetDef t_AbstractGenerator__fields_[] = {
              DECLARE_GET_FIELD(t_AbstractGenerator, outputName),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_AbstractGenerator__methods_[] = {
              DECLARE_METHOD(t_AbstractGenerator, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_AbstractGenerator, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_AbstractGenerator, close, METH_NOARGS),
              DECLARE_METHOD(t_AbstractGenerator, dateToCalendarString, METH_VARARGS),
              DECLARE_METHOD(t_AbstractGenerator, dateToString, METH_VARARGS),
              DECLARE_METHOD(t_AbstractGenerator, doubleToString, METH_O),
              DECLARE_METHOD(t_AbstractGenerator, enterSection, METH_O),
              DECLARE_METHOD(t_AbstractGenerator, exitSection, METH_NOARGS),
              DECLARE_METHOD(t_AbstractGenerator, getOutputName, METH_NOARGS),
              DECLARE_METHOD(t_AbstractGenerator, newLine, METH_NOARGS),
              DECLARE_METHOD(t_AbstractGenerator, siToCcsdsName, METH_O),
              DECLARE_METHOD(t_AbstractGenerator, unitsListToString, METH_O),
              DECLARE_METHOD(t_AbstractGenerator, writeEntry, METH_VARARGS),
              DECLARE_METHOD(t_AbstractGenerator, writeRawData, METH_VARARGS),
              DECLARE_METHOD(t_AbstractGenerator, writeUnits, METH_O),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(AbstractGenerator)[] = {
              { Py_tp_methods, t_AbstractGenerator__methods_ },
              { Py_tp_init, (void *) t_AbstractGenerator_init_ },
              { Py_tp_getset, t_AbstractGenerator__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(AbstractGenerator)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(AbstractGenerator, t_AbstractGenerator, AbstractGenerator);

            void t_AbstractGenerator::install(PyObject *module)
            {
              installType(&PY_TYPE(AbstractGenerator), &PY_TYPE_DEF(AbstractGenerator), module, "AbstractGenerator", 0);
            }

            void t_AbstractGenerator::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractGenerator), "class_", make_descriptor(AbstractGenerator::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractGenerator), "wrapfn_", make_descriptor(t_AbstractGenerator::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractGenerator), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_AbstractGenerator_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, AbstractGenerator::initializeClass, 1)))
                return NULL;
              return t_AbstractGenerator::wrap_Object(AbstractGenerator(((t_AbstractGenerator *) arg)->object.this$));
            }
            static PyObject *t_AbstractGenerator_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, AbstractGenerator::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static int t_AbstractGenerator_init_(t_AbstractGenerator *self, PyObject *args, PyObject *kwds)
            {
              ::java::lang::Appendable a0((jobject) NULL);
              ::java::lang::String a1((jobject) NULL);
              jdouble a2;
              jboolean a3;
              AbstractGenerator object((jobject) NULL);

              if (!parseArgs(args, "ksDZ", ::java::lang::Appendable::initializeClass, &a0, &a1, &a2, &a3))
              {
                INT_CALL(object = AbstractGenerator(a0, a1, a2, a3));
                self->object = object;
              }
              else
              {
                PyErr_SetArgsError((PyObject *) self, "__init__", args);
                return -1;
              }

              return 0;
            }

            static PyObject *t_AbstractGenerator_close(t_AbstractGenerator *self)
            {
              OBJ_CALL(self->object.close());
              Py_RETURN_NONE;
            }

            static PyObject *t_AbstractGenerator_dateToCalendarString(t_AbstractGenerator *self, PyObject *args)
            {
              ::org::orekit::files::ccsds::definitions::TimeConverter a0((jobject) NULL);
              ::org::orekit::time::AbsoluteDate a1((jobject) NULL);
              ::java::lang::String result((jobject) NULL);

              if (!parseArgs(args, "kk", ::org::orekit::files::ccsds::definitions::TimeConverter::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1))
              {
                OBJ_CALL(result = self->object.dateToCalendarString(a0, a1));
                return j2p(result);
              }

              PyErr_SetArgsError((PyObject *) self, "dateToCalendarString", args);
              return NULL;
            }

            static PyObject *t_AbstractGenerator_dateToString(t_AbstractGenerator *self, PyObject *args)
            {
              switch (PyTuple_GET_SIZE(args)) {
               case 2:
                {
                  ::org::orekit::files::ccsds::definitions::TimeConverter a0((jobject) NULL);
                  ::org::orekit::time::AbsoluteDate a1((jobject) NULL);
                  ::java::lang::String result((jobject) NULL);

                  if (!parseArgs(args, "kk", ::org::orekit::files::ccsds::definitions::TimeConverter::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1))
                  {
                    OBJ_CALL(result = self->object.dateToString(a0, a1));
                    return j2p(result);
                  }
                }
                break;
               case 6:
                {
                  jint a0;
                  jint a1;
                  jint a2;
                  jint a3;
                  jint a4;
                  jdouble a5;
                  ::java::lang::String result((jobject) NULL);

                  if (!parseArgs(args, "IIIIID", &a0, &a1, &a2, &a3, &a4, &a5))
                  {
                    OBJ_CALL(result = self->object.dateToString(a0, a1, a2, a3, a4, a5));
                    return j2p(result);
                  }
                }
              }

              PyErr_SetArgsError((PyObject *) self, "dateToString", args);
              return NULL;
            }

            static PyObject *t_AbstractGenerator_doubleToString(t_AbstractGenerator *self, PyObject *arg)
            {
              jdouble a0;
              ::java::lang::String result((jobject) NULL);

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(result = self->object.doubleToString(a0));
                return j2p(result);
              }

              PyErr_SetArgsError((PyObject *) self, "doubleToString", arg);
              return NULL;
            }

            static PyObject *t_AbstractGenerator_enterSection(t_AbstractGenerator *self, PyObject *arg)
            {
              ::java::lang::String a0((jobject) NULL);

              if (!parseArg(arg, "s", &a0))
              {
                OBJ_CALL(self->object.enterSection(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "enterSection", arg);
              return NULL;
            }

            static PyObject *t_AbstractGenerator_exitSection(t_AbstractGenerator *self)
            {
              ::java::lang::String result((jobject) NULL);
              OBJ_CALL(result = self->object.exitSection());
              return j2p(result);
            }

            static PyObject *t_AbstractGenerator_getOutputName(t_AbstractGenerator *self)
            {
              ::java::lang::String result((jobject) NULL);
              OBJ_CALL(result = self->object.getOutputName());
              return j2p(result);
            }

            static PyObject *t_AbstractGenerator_newLine(t_AbstractGenerator *self)
            {
              OBJ_CALL(self->object.newLine());
              Py_RETURN_NONE;
            }

            static PyObject *t_AbstractGenerator_siToCcsdsName(t_AbstractGenerator *self, PyObject *arg)
            {
              ::java::lang::String a0((jobject) NULL);
              ::java::lang::String result((jobject) NULL);

              if (!parseArg(arg, "s", &a0))
              {
                OBJ_CALL(result = self->object.siToCcsdsName(a0));
                return j2p(result);
              }

              PyErr_SetArgsError((PyObject *) self, "siToCcsdsName", arg);
              return NULL;
            }

            static PyObject *t_AbstractGenerator_unitsListToString(t_AbstractGenerator *self, PyObject *arg)
            {
              ::java::util::List a0((jobject) NULL);
              PyTypeObject **p0;
              ::java::lang::String result((jobject) NULL);

              if (!parseArg(arg, "K", ::java::util::List::initializeClass, &a0, &p0, ::java::util::t_List::parameters_))
              {
                OBJ_CALL(result = self->object.unitsListToString(a0));
                return j2p(result);
              }

              PyErr_SetArgsError((PyObject *) self, "unitsListToString", arg);
              return NULL;
            }

            static PyObject *t_AbstractGenerator_writeEntry(t_AbstractGenerator *self, PyObject *args)
            {
              switch (PyTuple_GET_SIZE(args)) {
               case 3:
                {
                  ::java::lang::String a0((jobject) NULL);
                  ::java::lang::Enum a1((jobject) NULL);
                  PyTypeObject **p1;
                  jboolean a2;

                  if (!parseArgs(args, "sKZ", ::java::lang::Enum::initializeClass, &a0, &a1, &p1, ::java::lang::t_Enum::parameters_, &a2))
                  {
                    OBJ_CALL(self->object.writeEntry(a0, a1, a2));
                    Py_RETURN_NONE;
                  }
                }
                {
                  ::java::lang::String a0((jobject) NULL);
                  jchar a1;
                  jboolean a2;

                  if (!parseArgs(args, "sCZ", &a0, &a1, &a2))
                  {
                    OBJ_CALL(self->object.writeEntry(a0, a1, a2));
                    Py_RETURN_NONE;
                  }
                }
                {
                  ::java::lang::String a0((jobject) NULL);
                  jint a1;
                  jboolean a2;

                  if (!parseArgs(args, "sIZ", &a0, &a1, &a2))
                  {
                    OBJ_CALL(self->object.writeEntry(a0, a1, a2));
                    Py_RETURN_NONE;
                  }
                }
                {
                  ::java::lang::String a0((jobject) NULL);
                  ::java::util::List a1((jobject) NULL);
                  PyTypeObject **p1;
                  jboolean a2;

                  if (!parseArgs(args, "sKZ", ::java::util::List::initializeClass, &a0, &a1, &p1, ::java::util::t_List::parameters_, &a2))
                  {
                    OBJ_CALL(self->object.writeEntry(a0, a1, a2));
                    Py_RETURN_NONE;
                  }
                }
                break;
               case 4:
                {
                  ::java::lang::String a0((jobject) NULL);
                  ::java::lang::Double a1((jobject) NULL);
                  ::org::orekit::utils::units::Unit a2((jobject) NULL);
                  jboolean a3;

                  if (!parseArgs(args, "sOkZ", ::java::lang::PY_TYPE(Double), ::org::orekit::utils::units::Unit::initializeClass, &a0, &a1, &a2, &a3))
                  {
                    OBJ_CALL(self->object.writeEntry(a0, a1, a2, a3));
                    Py_RETURN_NONE;
                  }
                }
                {
                  ::java::lang::String a0((jobject) NULL);
                  jdouble a1;
                  ::org::orekit::utils::units::Unit a2((jobject) NULL);
                  jboolean a3;

                  if (!parseArgs(args, "sDkZ", ::org::orekit::utils::units::Unit::initializeClass, &a0, &a1, &a2, &a3))
                  {
                    OBJ_CALL(self->object.writeEntry(a0, a1, a2, a3));
                    Py_RETURN_NONE;
                  }
                }
                break;
               case 5:
                {
                  ::java::lang::String a0((jobject) NULL);
                  ::org::orekit::files::ccsds::definitions::TimeConverter a1((jobject) NULL);
                  ::org::orekit::time::AbsoluteDate a2((jobject) NULL);
                  jboolean a3;
                  jboolean a4;

                  if (!parseArgs(args, "skkZZ", ::org::orekit::files::ccsds::definitions::TimeConverter::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1, &a2, &a3, &a4))
                  {
                    OBJ_CALL(self->object.writeEntry(a0, a1, a2, a3, a4));
                    Py_RETURN_NONE;
                  }
                }
              }

              PyErr_SetArgsError((PyObject *) self, "writeEntry", args);
              return NULL;
            }

            static PyObject *t_AbstractGenerator_writeRawData(t_AbstractGenerator *self, PyObject *args)
            {
              switch (PyTuple_GET_SIZE(args)) {
               case 1:
                {
                  jchar a0;

                  if (!parseArgs(args, "C", &a0))
                  {
                    OBJ_CALL(self->object.writeRawData(a0));
                    Py_RETURN_NONE;
                  }
                }
                {
                  ::java::lang::CharSequence a0((jobject) NULL);

                  if (!parseArgs(args, "O", ::java::lang::PY_TYPE(CharSequence), &a0))
                  {
                    OBJ_CALL(self->object.writeRawData(a0));
                    Py_RETURN_NONE;
                  }
                }
              }

              PyErr_SetArgsError((PyObject *) self, "writeRawData", args);
              return NULL;
            }

            static PyObject *t_AbstractGenerator_writeUnits(t_AbstractGenerator *self, PyObject *arg)
            {
              ::org::orekit::utils::units::Unit a0((jobject) NULL);
              jboolean result;

              if (!parseArg(arg, "k", ::org::orekit::utils::units::Unit::initializeClass, &a0))
              {
                OBJ_CALL(result = self->object.writeUnits(a0));
                Py_RETURN_BOOL(result);
              }

              PyErr_SetArgsError((PyObject *) self, "writeUnits", arg);
              return NULL;
            }

            static PyObject *t_AbstractGenerator_get__outputName(t_AbstractGenerator *self, void *data)
            {
              ::java::lang::String value((jobject) NULL);
              OBJ_CALL(value = self->object.getOutputName());
              return j2p(value);
            }
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/models/earth/atmosphere/NRLMSISE00.h"
#include "org/orekit/bodies/BodyShape.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldVector3D.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/models/earth/atmosphere/Atmosphere.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/orekit/time/TimeScale.h"
#include "org/orekit/models/earth/atmosphere/NRLMSISE00.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "java/lang/Class.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/models/earth/atmosphere/NRLMSISE00InputParameters.h"
#include "org/orekit/utils/PVCoordinatesProvider.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace models {
      namespace earth {
        namespace atmosphere {

          ::java::lang::Class *NRLMSISE00::class$ = NULL;
          jmethodID *NRLMSISE00::mids$ = NULL;
          bool NRLMSISE00::live$ = false;

          jclass NRLMSISE00::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/models/earth/atmosphere/NRLMSISE00");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_5e248e4ef8b5d9ef] = env->getMethodID(cls, "<init>", "(Lorg/orekit/models/earth/atmosphere/NRLMSISE00InputParameters;Lorg/orekit/utils/PVCoordinatesProvider;Lorg/orekit/bodies/BodyShape;)V");
              mids$[mid_init$_377f58be6b5b618e] = env->getMethodID(cls, "<init>", "(Lorg/orekit/models/earth/atmosphere/NRLMSISE00InputParameters;Lorg/orekit/utils/PVCoordinatesProvider;Lorg/orekit/bodies/BodyShape;Lorg/orekit/time/TimeScale;)V");
              mids$[mid_getDensity_65e73ef68b3713d0] = env->getMethodID(cls, "getDensity", "(Lorg/orekit/time/AbsoluteDate;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/orekit/frames/Frame;)D");
              mids$[mid_getDensity_0c5821935d445848] = env->getMethodID(cls, "getDensity", "(Lorg/orekit/time/FieldAbsoluteDate;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;Lorg/orekit/frames/Frame;)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_getFrame_cb151471db4570f0] = env->getMethodID(cls, "getFrame", "()Lorg/orekit/frames/Frame;");
              mids$[mid_withSwitch_155371b30aaef921] = env->getMethodID(cls, "withSwitch", "(II)Lorg/orekit/models/earth/atmosphere/NRLMSISE00;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          NRLMSISE00::NRLMSISE00(const ::org::orekit::models::earth::atmosphere::NRLMSISE00InputParameters & a0, const ::org::orekit::utils::PVCoordinatesProvider & a1, const ::org::orekit::bodies::BodyShape & a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_5e248e4ef8b5d9ef, a0.this$, a1.this$, a2.this$)) {}

          NRLMSISE00::NRLMSISE00(const ::org::orekit::models::earth::atmosphere::NRLMSISE00InputParameters & a0, const ::org::orekit::utils::PVCoordinatesProvider & a1, const ::org::orekit::bodies::BodyShape & a2, const ::org::orekit::time::TimeScale & a3) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_377f58be6b5b618e, a0.this$, a1.this$, a2.this$, a3.this$)) {}

          jdouble NRLMSISE00::getDensity(const ::org::orekit::time::AbsoluteDate & a0, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a1, const ::org::orekit::frames::Frame & a2) const
          {
            return env->callDoubleMethod(this$, mids$[mid_getDensity_65e73ef68b3713d0], a0.this$, a1.this$, a2.this$);
          }

          ::org::hipparchus::CalculusFieldElement NRLMSISE00::getDensity(const ::org::orekit::time::FieldAbsoluteDate & a0, const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D & a1, const ::org::orekit::frames::Frame & a2) const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getDensity_0c5821935d445848], a0.this$, a1.this$, a2.this$));
          }

          ::org::orekit::frames::Frame NRLMSISE00::getFrame() const
          {
            return ::org::orekit::frames::Frame(env->callObjectMethod(this$, mids$[mid_getFrame_cb151471db4570f0]));
          }

          NRLMSISE00 NRLMSISE00::withSwitch(jint a0, jint a1) const
          {
            return NRLMSISE00(env->callObjectMethod(this$, mids$[mid_withSwitch_155371b30aaef921], a0, a1));
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
    namespace models {
      namespace earth {
        namespace atmosphere {
          static PyObject *t_NRLMSISE00_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_NRLMSISE00_instance_(PyTypeObject *type, PyObject *arg);
          static int t_NRLMSISE00_init_(t_NRLMSISE00 *self, PyObject *args, PyObject *kwds);
          static PyObject *t_NRLMSISE00_getDensity(t_NRLMSISE00 *self, PyObject *args);
          static PyObject *t_NRLMSISE00_getFrame(t_NRLMSISE00 *self);
          static PyObject *t_NRLMSISE00_withSwitch(t_NRLMSISE00 *self, PyObject *args);
          static PyObject *t_NRLMSISE00_get__frame(t_NRLMSISE00 *self, void *data);
          static PyGetSetDef t_NRLMSISE00__fields_[] = {
            DECLARE_GET_FIELD(t_NRLMSISE00, frame),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_NRLMSISE00__methods_[] = {
            DECLARE_METHOD(t_NRLMSISE00, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_NRLMSISE00, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_NRLMSISE00, getDensity, METH_VARARGS),
            DECLARE_METHOD(t_NRLMSISE00, getFrame, METH_NOARGS),
            DECLARE_METHOD(t_NRLMSISE00, withSwitch, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(NRLMSISE00)[] = {
            { Py_tp_methods, t_NRLMSISE00__methods_ },
            { Py_tp_init, (void *) t_NRLMSISE00_init_ },
            { Py_tp_getset, t_NRLMSISE00__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(NRLMSISE00)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(NRLMSISE00, t_NRLMSISE00, NRLMSISE00);

          void t_NRLMSISE00::install(PyObject *module)
          {
            installType(&PY_TYPE(NRLMSISE00), &PY_TYPE_DEF(NRLMSISE00), module, "NRLMSISE00", 0);
          }

          void t_NRLMSISE00::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(NRLMSISE00), "class_", make_descriptor(NRLMSISE00::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(NRLMSISE00), "wrapfn_", make_descriptor(t_NRLMSISE00::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(NRLMSISE00), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_NRLMSISE00_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, NRLMSISE00::initializeClass, 1)))
              return NULL;
            return t_NRLMSISE00::wrap_Object(NRLMSISE00(((t_NRLMSISE00 *) arg)->object.this$));
          }
          static PyObject *t_NRLMSISE00_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, NRLMSISE00::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_NRLMSISE00_init_(t_NRLMSISE00 *self, PyObject *args, PyObject *kwds)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 3:
              {
                ::org::orekit::models::earth::atmosphere::NRLMSISE00InputParameters a0((jobject) NULL);
                ::org::orekit::utils::PVCoordinatesProvider a1((jobject) NULL);
                ::org::orekit::bodies::BodyShape a2((jobject) NULL);
                NRLMSISE00 object((jobject) NULL);

                if (!parseArgs(args, "kkk", ::org::orekit::models::earth::atmosphere::NRLMSISE00InputParameters::initializeClass, ::org::orekit::utils::PVCoordinatesProvider::initializeClass, ::org::orekit::bodies::BodyShape::initializeClass, &a0, &a1, &a2))
                {
                  INT_CALL(object = NRLMSISE00(a0, a1, a2));
                  self->object = object;
                  break;
                }
              }
              goto err;
             case 4:
              {
                ::org::orekit::models::earth::atmosphere::NRLMSISE00InputParameters a0((jobject) NULL);
                ::org::orekit::utils::PVCoordinatesProvider a1((jobject) NULL);
                ::org::orekit::bodies::BodyShape a2((jobject) NULL);
                ::org::orekit::time::TimeScale a3((jobject) NULL);
                NRLMSISE00 object((jobject) NULL);

                if (!parseArgs(args, "kkkk", ::org::orekit::models::earth::atmosphere::NRLMSISE00InputParameters::initializeClass, ::org::orekit::utils::PVCoordinatesProvider::initializeClass, ::org::orekit::bodies::BodyShape::initializeClass, ::org::orekit::time::TimeScale::initializeClass, &a0, &a1, &a2, &a3))
                {
                  INT_CALL(object = NRLMSISE00(a0, a1, a2, a3));
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

          static PyObject *t_NRLMSISE00_getDensity(t_NRLMSISE00 *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 3:
              {
                ::org::orekit::time::FieldAbsoluteDate a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::hipparchus::geometry::euclidean::threed::FieldVector3D a1((jobject) NULL);
                PyTypeObject **p1;
                ::org::orekit::frames::Frame a2((jobject) NULL);
                ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                if (!parseArgs(args, "KKk", ::org::orekit::time::FieldAbsoluteDate::initializeClass, ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::initializeClass, ::org::orekit::frames::Frame::initializeClass, &a0, &p0, ::org::orekit::time::t_FieldAbsoluteDate::parameters_, &a1, &p1, ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::parameters_, &a2))
                {
                  OBJ_CALL(result = self->object.getDensity(a0, a1, a2));
                  return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                }
              }
              {
                ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
                ::org::hipparchus::geometry::euclidean::threed::Vector3D a1((jobject) NULL);
                ::org::orekit::frames::Frame a2((jobject) NULL);
                jdouble result;

                if (!parseArgs(args, "kkk", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::orekit::frames::Frame::initializeClass, &a0, &a1, &a2))
                {
                  OBJ_CALL(result = self->object.getDensity(a0, a1, a2));
                  return PyFloat_FromDouble((double) result);
                }
              }
            }

            PyErr_SetArgsError((PyObject *) self, "getDensity", args);
            return NULL;
          }

          static PyObject *t_NRLMSISE00_getFrame(t_NRLMSISE00 *self)
          {
            ::org::orekit::frames::Frame result((jobject) NULL);
            OBJ_CALL(result = self->object.getFrame());
            return ::org::orekit::frames::t_Frame::wrap_Object(result);
          }

          static PyObject *t_NRLMSISE00_withSwitch(t_NRLMSISE00 *self, PyObject *args)
          {
            jint a0;
            jint a1;
            NRLMSISE00 result((jobject) NULL);

            if (!parseArgs(args, "II", &a0, &a1))
            {
              OBJ_CALL(result = self->object.withSwitch(a0, a1));
              return t_NRLMSISE00::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "withSwitch", args);
            return NULL;
          }

          static PyObject *t_NRLMSISE00_get__frame(t_NRLMSISE00 *self, void *data)
          {
            ::org::orekit::frames::Frame value((jobject) NULL);
            OBJ_CALL(value = self->object.getFrame());
            return ::org::orekit::frames::t_Frame::wrap_Object(value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/util/BigRealField.h"
#include "org/hipparchus/util/BigReal.h"
#include "java/io/Serializable.h"
#include "org/hipparchus/Field.h"
#include "java/lang/Class.h"
#include "org/hipparchus/util/BigRealField.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace util {

      ::java::lang::Class *BigRealField::class$ = NULL;
      jmethodID *BigRealField::mids$ = NULL;
      bool BigRealField::live$ = false;

      jclass BigRealField::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/util/BigRealField");

          mids$ = new jmethodID[max_mid];
          mids$[mid_equals_72faff9b05f5ed5e] = env->getMethodID(cls, "equals", "(Ljava/lang/Object;)Z");
          mids$[mid_getInstance_e8db020eb3a532ea] = env->getStaticMethodID(cls, "getInstance", "()Lorg/hipparchus/util/BigRealField;");
          mids$[mid_getOne_387b4b2d211c6e82] = env->getMethodID(cls, "getOne", "()Lorg/hipparchus/util/BigReal;");
          mids$[mid_getRuntimeClass_d5247e4b166c4ce8] = env->getMethodID(cls, "getRuntimeClass", "()Ljava/lang/Class;");
          mids$[mid_getZero_387b4b2d211c6e82] = env->getMethodID(cls, "getZero", "()Lorg/hipparchus/util/BigReal;");
          mids$[mid_hashCode_d6ab429752e7c267] = env->getMethodID(cls, "hashCode", "()I");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      jboolean BigRealField::equals(const ::java::lang::Object & a0) const
      {
        return env->callBooleanMethod(this$, mids$[mid_equals_72faff9b05f5ed5e], a0.this$);
      }

      BigRealField BigRealField::getInstance()
      {
        jclass cls = env->getClass(initializeClass);
        return BigRealField(env->callStaticObjectMethod(cls, mids$[mid_getInstance_e8db020eb3a532ea]));
      }

      ::org::hipparchus::util::BigReal BigRealField::getOne() const
      {
        return ::org::hipparchus::util::BigReal(env->callObjectMethod(this$, mids$[mid_getOne_387b4b2d211c6e82]));
      }

      ::java::lang::Class BigRealField::getRuntimeClass() const
      {
        return ::java::lang::Class(env->callObjectMethod(this$, mids$[mid_getRuntimeClass_d5247e4b166c4ce8]));
      }

      ::org::hipparchus::util::BigReal BigRealField::getZero() const
      {
        return ::org::hipparchus::util::BigReal(env->callObjectMethod(this$, mids$[mid_getZero_387b4b2d211c6e82]));
      }

      jint BigRealField::hashCode() const
      {
        return env->callIntMethod(this$, mids$[mid_hashCode_d6ab429752e7c267]);
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
      static PyObject *t_BigRealField_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_BigRealField_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_BigRealField_equals(t_BigRealField *self, PyObject *args);
      static PyObject *t_BigRealField_getInstance(PyTypeObject *type);
      static PyObject *t_BigRealField_getOne(t_BigRealField *self);
      static PyObject *t_BigRealField_getRuntimeClass(t_BigRealField *self);
      static PyObject *t_BigRealField_getZero(t_BigRealField *self);
      static PyObject *t_BigRealField_hashCode(t_BigRealField *self, PyObject *args);
      static PyObject *t_BigRealField_get__instance(t_BigRealField *self, void *data);
      static PyObject *t_BigRealField_get__one(t_BigRealField *self, void *data);
      static PyObject *t_BigRealField_get__runtimeClass(t_BigRealField *self, void *data);
      static PyObject *t_BigRealField_get__zero(t_BigRealField *self, void *data);
      static PyGetSetDef t_BigRealField__fields_[] = {
        DECLARE_GET_FIELD(t_BigRealField, instance),
        DECLARE_GET_FIELD(t_BigRealField, one),
        DECLARE_GET_FIELD(t_BigRealField, runtimeClass),
        DECLARE_GET_FIELD(t_BigRealField, zero),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_BigRealField__methods_[] = {
        DECLARE_METHOD(t_BigRealField, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_BigRealField, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_BigRealField, equals, METH_VARARGS),
        DECLARE_METHOD(t_BigRealField, getInstance, METH_NOARGS | METH_CLASS),
        DECLARE_METHOD(t_BigRealField, getOne, METH_NOARGS),
        DECLARE_METHOD(t_BigRealField, getRuntimeClass, METH_NOARGS),
        DECLARE_METHOD(t_BigRealField, getZero, METH_NOARGS),
        DECLARE_METHOD(t_BigRealField, hashCode, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(BigRealField)[] = {
        { Py_tp_methods, t_BigRealField__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_BigRealField__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(BigRealField)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(BigRealField, t_BigRealField, BigRealField);

      void t_BigRealField::install(PyObject *module)
      {
        installType(&PY_TYPE(BigRealField), &PY_TYPE_DEF(BigRealField), module, "BigRealField", 0);
      }

      void t_BigRealField::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(BigRealField), "class_", make_descriptor(BigRealField::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(BigRealField), "wrapfn_", make_descriptor(t_BigRealField::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(BigRealField), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_BigRealField_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, BigRealField::initializeClass, 1)))
          return NULL;
        return t_BigRealField::wrap_Object(BigRealField(((t_BigRealField *) arg)->object.this$));
      }
      static PyObject *t_BigRealField_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, BigRealField::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_BigRealField_equals(t_BigRealField *self, PyObject *args)
      {
        ::java::lang::Object a0((jobject) NULL);
        jboolean result;

        if (!parseArgs(args, "o", &a0))
        {
          OBJ_CALL(result = self->object.equals(a0));
          Py_RETURN_BOOL(result);
        }

        return callSuper(PY_TYPE(BigRealField), (PyObject *) self, "equals", args, 2);
      }

      static PyObject *t_BigRealField_getInstance(PyTypeObject *type)
      {
        BigRealField result((jobject) NULL);
        OBJ_CALL(result = ::org::hipparchus::util::BigRealField::getInstance());
        return t_BigRealField::wrap_Object(result);
      }

      static PyObject *t_BigRealField_getOne(t_BigRealField *self)
      {
        ::org::hipparchus::util::BigReal result((jobject) NULL);
        OBJ_CALL(result = self->object.getOne());
        return ::org::hipparchus::util::t_BigReal::wrap_Object(result);
      }

      static PyObject *t_BigRealField_getRuntimeClass(t_BigRealField *self)
      {
        ::java::lang::Class result((jobject) NULL);
        OBJ_CALL(result = self->object.getRuntimeClass());
        return ::java::lang::t_Class::wrap_Object(result, ::org::hipparchus::util::PY_TYPE(BigReal));
      }

      static PyObject *t_BigRealField_getZero(t_BigRealField *self)
      {
        ::org::hipparchus::util::BigReal result((jobject) NULL);
        OBJ_CALL(result = self->object.getZero());
        return ::org::hipparchus::util::t_BigReal::wrap_Object(result);
      }

      static PyObject *t_BigRealField_hashCode(t_BigRealField *self, PyObject *args)
      {
        jint result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.hashCode());
          return PyLong_FromLong((long) result);
        }

        return callSuper(PY_TYPE(BigRealField), (PyObject *) self, "hashCode", args, 2);
      }

      static PyObject *t_BigRealField_get__instance(t_BigRealField *self, void *data)
      {
        BigRealField value((jobject) NULL);
        OBJ_CALL(value = self->object.getInstance());
        return t_BigRealField::wrap_Object(value);
      }

      static PyObject *t_BigRealField_get__one(t_BigRealField *self, void *data)
      {
        ::org::hipparchus::util::BigReal value((jobject) NULL);
        OBJ_CALL(value = self->object.getOne());
        return ::org::hipparchus::util::t_BigReal::wrap_Object(value);
      }

      static PyObject *t_BigRealField_get__runtimeClass(t_BigRealField *self, void *data)
      {
        ::java::lang::Class value((jobject) NULL);
        OBJ_CALL(value = self->object.getRuntimeClass());
        return ::java::lang::t_Class::wrap_Object(value);
      }

      static PyObject *t_BigRealField_get__zero(t_BigRealField *self, void *data)
      {
        ::org::hipparchus::util::BigReal value((jobject) NULL);
        OBJ_CALL(value = self->object.getZero());
        return ::org::hipparchus::util::t_BigReal::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/analysis/function/Exp.h"
#include "org/hipparchus/analysis/differentiation/Derivative.h"
#include "org/hipparchus/analysis/differentiation/UnivariateDifferentiableFunction.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace function {

        ::java::lang::Class *Exp::class$ = NULL;
        jmethodID *Exp::mids$ = NULL;
        bool Exp::live$ = false;

        jclass Exp::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/function/Exp");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_ff7cb6c242604316] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_value_bf28ed64d6e8576b] = env->getMethodID(cls, "value", "(D)D");
            mids$[mid_value_ba85b555c6f0b809] = env->getMethodID(cls, "value", "(Lorg/hipparchus/analysis/differentiation/Derivative;)Lorg/hipparchus/analysis/differentiation/Derivative;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        Exp::Exp() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_ff7cb6c242604316)) {}

        jdouble Exp::value(jdouble a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_value_bf28ed64d6e8576b], a0);
        }

        ::org::hipparchus::analysis::differentiation::Derivative Exp::value(const ::org::hipparchus::analysis::differentiation::Derivative & a0) const
        {
          return ::org::hipparchus::analysis::differentiation::Derivative(env->callObjectMethod(this$, mids$[mid_value_ba85b555c6f0b809], a0.this$));
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
        static PyObject *t_Exp_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_Exp_instance_(PyTypeObject *type, PyObject *arg);
        static int t_Exp_init_(t_Exp *self, PyObject *args, PyObject *kwds);
        static PyObject *t_Exp_value(t_Exp *self, PyObject *args);

        static PyMethodDef t_Exp__methods_[] = {
          DECLARE_METHOD(t_Exp, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Exp, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Exp, value, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(Exp)[] = {
          { Py_tp_methods, t_Exp__methods_ },
          { Py_tp_init, (void *) t_Exp_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(Exp)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(Exp, t_Exp, Exp);

        void t_Exp::install(PyObject *module)
        {
          installType(&PY_TYPE(Exp), &PY_TYPE_DEF(Exp), module, "Exp", 0);
        }

        void t_Exp::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(Exp), "class_", make_descriptor(Exp::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Exp), "wrapfn_", make_descriptor(t_Exp::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Exp), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_Exp_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, Exp::initializeClass, 1)))
            return NULL;
          return t_Exp::wrap_Object(Exp(((t_Exp *) arg)->object.this$));
        }
        static PyObject *t_Exp_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, Exp::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_Exp_init_(t_Exp *self, PyObject *args, PyObject *kwds)
        {
          Exp object((jobject) NULL);

          INT_CALL(object = Exp());
          self->object = object;

          return 0;
        }

        static PyObject *t_Exp_value(t_Exp *self, PyObject *args)
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
#include "org/orekit/estimation/measurements/modifiers/AbstractAmbiguityModifier.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace modifiers {

          ::java::lang::Class *AbstractAmbiguityModifier::class$ = NULL;
          jmethodID *AbstractAmbiguityModifier::mids$ = NULL;
          bool AbstractAmbiguityModifier::live$ = false;

          jclass AbstractAmbiguityModifier::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/modifiers/AbstractAmbiguityModifier");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_4320462275d66e78] = env->getMethodID(cls, "<init>", "(ID)V");
              mids$[mid_getDrivers_d751c1a57012b438] = env->getMethodID(cls, "getDrivers", "()Ljava/util/List;");
              mids$[mid_doModify_0f0ae9411e47b72e] = env->getMethodID(cls, "doModify", "(Lorg/orekit/estimation/measurements/EstimatedMeasurement;)V");
              mids$[mid_doModifyWithoutDerivatives_ecce216dce506020] = env->getMethodID(cls, "doModifyWithoutDerivatives", "(Lorg/orekit/estimation/measurements/EstimatedMeasurementBase;)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          AbstractAmbiguityModifier::AbstractAmbiguityModifier(jint a0, jdouble a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_4320462275d66e78, a0, a1)) {}
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
          static PyObject *t_AbstractAmbiguityModifier_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_AbstractAmbiguityModifier_instance_(PyTypeObject *type, PyObject *arg);
          static int t_AbstractAmbiguityModifier_init_(t_AbstractAmbiguityModifier *self, PyObject *args, PyObject *kwds);

          static PyMethodDef t_AbstractAmbiguityModifier__methods_[] = {
            DECLARE_METHOD(t_AbstractAmbiguityModifier, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_AbstractAmbiguityModifier, instance_, METH_O | METH_CLASS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(AbstractAmbiguityModifier)[] = {
            { Py_tp_methods, t_AbstractAmbiguityModifier__methods_ },
            { Py_tp_init, (void *) t_AbstractAmbiguityModifier_init_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(AbstractAmbiguityModifier)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(AbstractAmbiguityModifier, t_AbstractAmbiguityModifier, AbstractAmbiguityModifier);

          void t_AbstractAmbiguityModifier::install(PyObject *module)
          {
            installType(&PY_TYPE(AbstractAmbiguityModifier), &PY_TYPE_DEF(AbstractAmbiguityModifier), module, "AbstractAmbiguityModifier", 0);
          }

          void t_AbstractAmbiguityModifier::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractAmbiguityModifier), "class_", make_descriptor(AbstractAmbiguityModifier::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractAmbiguityModifier), "wrapfn_", make_descriptor(t_AbstractAmbiguityModifier::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractAmbiguityModifier), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_AbstractAmbiguityModifier_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, AbstractAmbiguityModifier::initializeClass, 1)))
              return NULL;
            return t_AbstractAmbiguityModifier::wrap_Object(AbstractAmbiguityModifier(((t_AbstractAmbiguityModifier *) arg)->object.this$));
          }
          static PyObject *t_AbstractAmbiguityModifier_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, AbstractAmbiguityModifier::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_AbstractAmbiguityModifier_init_(t_AbstractAmbiguityModifier *self, PyObject *args, PyObject *kwds)
          {
            jint a0;
            jdouble a1;
            AbstractAmbiguityModifier object((jobject) NULL);

            if (!parseArgs(args, "ID", &a0, &a1))
            {
              INT_CALL(object = AbstractAmbiguityModifier(a0, a1));
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
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/analysis/solvers/BracketedUnivariateSolver$Interval.h"
#include "org/hipparchus/analysis/solvers/AllowedSolution.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace solvers {

        ::java::lang::Class *BracketedUnivariateSolver$Interval::class$ = NULL;
        jmethodID *BracketedUnivariateSolver$Interval::mids$ = NULL;
        bool BracketedUnivariateSolver$Interval::live$ = false;

        jclass BracketedUnivariateSolver$Interval::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/solvers/BracketedUnivariateSolver$Interval");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_cd5724127cc72e96] = env->getMethodID(cls, "<init>", "(DDDD)V");
            mids$[mid_getLeftAbscissa_9981f74b2d109da6] = env->getMethodID(cls, "getLeftAbscissa", "()D");
            mids$[mid_getLeftValue_9981f74b2d109da6] = env->getMethodID(cls, "getLeftValue", "()D");
            mids$[mid_getRightAbscissa_9981f74b2d109da6] = env->getMethodID(cls, "getRightAbscissa", "()D");
            mids$[mid_getRightValue_9981f74b2d109da6] = env->getMethodID(cls, "getRightValue", "()D");
            mids$[mid_getSide_0037c21353a9ee05] = env->getMethodID(cls, "getSide", "(Lorg/hipparchus/analysis/solvers/AllowedSolution;)D");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        BracketedUnivariateSolver$Interval::BracketedUnivariateSolver$Interval(jdouble a0, jdouble a1, jdouble a2, jdouble a3) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_cd5724127cc72e96, a0, a1, a2, a3)) {}

        jdouble BracketedUnivariateSolver$Interval::getLeftAbscissa() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getLeftAbscissa_9981f74b2d109da6]);
        }

        jdouble BracketedUnivariateSolver$Interval::getLeftValue() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getLeftValue_9981f74b2d109da6]);
        }

        jdouble BracketedUnivariateSolver$Interval::getRightAbscissa() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getRightAbscissa_9981f74b2d109da6]);
        }

        jdouble BracketedUnivariateSolver$Interval::getRightValue() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getRightValue_9981f74b2d109da6]);
        }

        jdouble BracketedUnivariateSolver$Interval::getSide(const ::org::hipparchus::analysis::solvers::AllowedSolution & a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_getSide_0037c21353a9ee05], a0.this$);
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
      namespace solvers {
        static PyObject *t_BracketedUnivariateSolver$Interval_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_BracketedUnivariateSolver$Interval_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_BracketedUnivariateSolver$Interval_of_(t_BracketedUnivariateSolver$Interval *self, PyObject *args);
        static int t_BracketedUnivariateSolver$Interval_init_(t_BracketedUnivariateSolver$Interval *self, PyObject *args, PyObject *kwds);
        static PyObject *t_BracketedUnivariateSolver$Interval_getLeftAbscissa(t_BracketedUnivariateSolver$Interval *self);
        static PyObject *t_BracketedUnivariateSolver$Interval_getLeftValue(t_BracketedUnivariateSolver$Interval *self);
        static PyObject *t_BracketedUnivariateSolver$Interval_getRightAbscissa(t_BracketedUnivariateSolver$Interval *self);
        static PyObject *t_BracketedUnivariateSolver$Interval_getRightValue(t_BracketedUnivariateSolver$Interval *self);
        static PyObject *t_BracketedUnivariateSolver$Interval_getSide(t_BracketedUnivariateSolver$Interval *self, PyObject *arg);
        static PyObject *t_BracketedUnivariateSolver$Interval_get__leftAbscissa(t_BracketedUnivariateSolver$Interval *self, void *data);
        static PyObject *t_BracketedUnivariateSolver$Interval_get__leftValue(t_BracketedUnivariateSolver$Interval *self, void *data);
        static PyObject *t_BracketedUnivariateSolver$Interval_get__rightAbscissa(t_BracketedUnivariateSolver$Interval *self, void *data);
        static PyObject *t_BracketedUnivariateSolver$Interval_get__rightValue(t_BracketedUnivariateSolver$Interval *self, void *data);
        static PyObject *t_BracketedUnivariateSolver$Interval_get__parameters_(t_BracketedUnivariateSolver$Interval *self, void *data);
        static PyGetSetDef t_BracketedUnivariateSolver$Interval__fields_[] = {
          DECLARE_GET_FIELD(t_BracketedUnivariateSolver$Interval, leftAbscissa),
          DECLARE_GET_FIELD(t_BracketedUnivariateSolver$Interval, leftValue),
          DECLARE_GET_FIELD(t_BracketedUnivariateSolver$Interval, rightAbscissa),
          DECLARE_GET_FIELD(t_BracketedUnivariateSolver$Interval, rightValue),
          DECLARE_GET_FIELD(t_BracketedUnivariateSolver$Interval, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_BracketedUnivariateSolver$Interval__methods_[] = {
          DECLARE_METHOD(t_BracketedUnivariateSolver$Interval, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_BracketedUnivariateSolver$Interval, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_BracketedUnivariateSolver$Interval, of_, METH_VARARGS),
          DECLARE_METHOD(t_BracketedUnivariateSolver$Interval, getLeftAbscissa, METH_NOARGS),
          DECLARE_METHOD(t_BracketedUnivariateSolver$Interval, getLeftValue, METH_NOARGS),
          DECLARE_METHOD(t_BracketedUnivariateSolver$Interval, getRightAbscissa, METH_NOARGS),
          DECLARE_METHOD(t_BracketedUnivariateSolver$Interval, getRightValue, METH_NOARGS),
          DECLARE_METHOD(t_BracketedUnivariateSolver$Interval, getSide, METH_O),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(BracketedUnivariateSolver$Interval)[] = {
          { Py_tp_methods, t_BracketedUnivariateSolver$Interval__methods_ },
          { Py_tp_init, (void *) t_BracketedUnivariateSolver$Interval_init_ },
          { Py_tp_getset, t_BracketedUnivariateSolver$Interval__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(BracketedUnivariateSolver$Interval)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(BracketedUnivariateSolver$Interval, t_BracketedUnivariateSolver$Interval, BracketedUnivariateSolver$Interval);
        PyObject *t_BracketedUnivariateSolver$Interval::wrap_Object(const BracketedUnivariateSolver$Interval& object, PyTypeObject *p0)
        {
          PyObject *obj = t_BracketedUnivariateSolver$Interval::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_BracketedUnivariateSolver$Interval *self = (t_BracketedUnivariateSolver$Interval *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_BracketedUnivariateSolver$Interval::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_BracketedUnivariateSolver$Interval::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_BracketedUnivariateSolver$Interval *self = (t_BracketedUnivariateSolver$Interval *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_BracketedUnivariateSolver$Interval::install(PyObject *module)
        {
          installType(&PY_TYPE(BracketedUnivariateSolver$Interval), &PY_TYPE_DEF(BracketedUnivariateSolver$Interval), module, "BracketedUnivariateSolver$Interval", 0);
        }

        void t_BracketedUnivariateSolver$Interval::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(BracketedUnivariateSolver$Interval), "class_", make_descriptor(BracketedUnivariateSolver$Interval::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(BracketedUnivariateSolver$Interval), "wrapfn_", make_descriptor(t_BracketedUnivariateSolver$Interval::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(BracketedUnivariateSolver$Interval), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_BracketedUnivariateSolver$Interval_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, BracketedUnivariateSolver$Interval::initializeClass, 1)))
            return NULL;
          return t_BracketedUnivariateSolver$Interval::wrap_Object(BracketedUnivariateSolver$Interval(((t_BracketedUnivariateSolver$Interval *) arg)->object.this$));
        }
        static PyObject *t_BracketedUnivariateSolver$Interval_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, BracketedUnivariateSolver$Interval::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_BracketedUnivariateSolver$Interval_of_(t_BracketedUnivariateSolver$Interval *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_BracketedUnivariateSolver$Interval_init_(t_BracketedUnivariateSolver$Interval *self, PyObject *args, PyObject *kwds)
        {
          jdouble a0;
          jdouble a1;
          jdouble a2;
          jdouble a3;
          BracketedUnivariateSolver$Interval object((jobject) NULL);

          if (!parseArgs(args, "DDDD", &a0, &a1, &a2, &a3))
          {
            INT_CALL(object = BracketedUnivariateSolver$Interval(a0, a1, a2, a3));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_BracketedUnivariateSolver$Interval_getLeftAbscissa(t_BracketedUnivariateSolver$Interval *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getLeftAbscissa());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_BracketedUnivariateSolver$Interval_getLeftValue(t_BracketedUnivariateSolver$Interval *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getLeftValue());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_BracketedUnivariateSolver$Interval_getRightAbscissa(t_BracketedUnivariateSolver$Interval *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getRightAbscissa());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_BracketedUnivariateSolver$Interval_getRightValue(t_BracketedUnivariateSolver$Interval *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getRightValue());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_BracketedUnivariateSolver$Interval_getSide(t_BracketedUnivariateSolver$Interval *self, PyObject *arg)
        {
          ::org::hipparchus::analysis::solvers::AllowedSolution a0((jobject) NULL);
          PyTypeObject **p0;
          jdouble result;

          if (!parseArg(arg, "K", ::org::hipparchus::analysis::solvers::AllowedSolution::initializeClass, &a0, &p0, ::org::hipparchus::analysis::solvers::t_AllowedSolution::parameters_))
          {
            OBJ_CALL(result = self->object.getSide(a0));
            return PyFloat_FromDouble((double) result);
          }

          PyErr_SetArgsError((PyObject *) self, "getSide", arg);
          return NULL;
        }
        static PyObject *t_BracketedUnivariateSolver$Interval_get__parameters_(t_BracketedUnivariateSolver$Interval *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_BracketedUnivariateSolver$Interval_get__leftAbscissa(t_BracketedUnivariateSolver$Interval *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getLeftAbscissa());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_BracketedUnivariateSolver$Interval_get__leftValue(t_BracketedUnivariateSolver$Interval *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getLeftValue());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_BracketedUnivariateSolver$Interval_get__rightAbscissa(t_BracketedUnivariateSolver$Interval *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getRightAbscissa());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_BracketedUnivariateSolver$Interval_get__rightValue(t_BracketedUnivariateSolver$Interval *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getRightValue());
          return PyFloat_FromDouble((double) value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/util/KthSelector.h"
#include "org/hipparchus/exception/NullArgumentException.h"
#include "java/lang/Class.h"
#include "org/hipparchus/util/PivotingStrategy.h"
#include "java/io/Serializable.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace util {

      ::java::lang::Class *KthSelector::class$ = NULL;
      jmethodID *KthSelector::mids$ = NULL;
      bool KthSelector::live$ = false;

      jclass KthSelector::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/util/KthSelector");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_ff7cb6c242604316] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_init$_23cb5bc0c99635e5] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/util/PivotingStrategy;)V");
          mids$[mid_getPivotingStrategy_e19ea4ef6d7ee6b5] = env->getMethodID(cls, "getPivotingStrategy", "()Lorg/hipparchus/util/PivotingStrategy;");
          mids$[mid_select_8bba3de417b23cf5] = env->getMethodID(cls, "select", "([D[II)D");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      KthSelector::KthSelector() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_ff7cb6c242604316)) {}

      KthSelector::KthSelector(const ::org::hipparchus::util::PivotingStrategy & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_23cb5bc0c99635e5, a0.this$)) {}

      ::org::hipparchus::util::PivotingStrategy KthSelector::getPivotingStrategy() const
      {
        return ::org::hipparchus::util::PivotingStrategy(env->callObjectMethod(this$, mids$[mid_getPivotingStrategy_e19ea4ef6d7ee6b5]));
      }

      jdouble KthSelector::select(const JArray< jdouble > & a0, const JArray< jint > & a1, jint a2) const
      {
        return env->callDoubleMethod(this$, mids$[mid_select_8bba3de417b23cf5], a0.this$, a1.this$, a2);
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
      static PyObject *t_KthSelector_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_KthSelector_instance_(PyTypeObject *type, PyObject *arg);
      static int t_KthSelector_init_(t_KthSelector *self, PyObject *args, PyObject *kwds);
      static PyObject *t_KthSelector_getPivotingStrategy(t_KthSelector *self);
      static PyObject *t_KthSelector_select(t_KthSelector *self, PyObject *args);
      static PyObject *t_KthSelector_get__pivotingStrategy(t_KthSelector *self, void *data);
      static PyGetSetDef t_KthSelector__fields_[] = {
        DECLARE_GET_FIELD(t_KthSelector, pivotingStrategy),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_KthSelector__methods_[] = {
        DECLARE_METHOD(t_KthSelector, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_KthSelector, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_KthSelector, getPivotingStrategy, METH_NOARGS),
        DECLARE_METHOD(t_KthSelector, select, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(KthSelector)[] = {
        { Py_tp_methods, t_KthSelector__methods_ },
        { Py_tp_init, (void *) t_KthSelector_init_ },
        { Py_tp_getset, t_KthSelector__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(KthSelector)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(KthSelector, t_KthSelector, KthSelector);

      void t_KthSelector::install(PyObject *module)
      {
        installType(&PY_TYPE(KthSelector), &PY_TYPE_DEF(KthSelector), module, "KthSelector", 0);
      }

      void t_KthSelector::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(KthSelector), "class_", make_descriptor(KthSelector::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(KthSelector), "wrapfn_", make_descriptor(t_KthSelector::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(KthSelector), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_KthSelector_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, KthSelector::initializeClass, 1)))
          return NULL;
        return t_KthSelector::wrap_Object(KthSelector(((t_KthSelector *) arg)->object.this$));
      }
      static PyObject *t_KthSelector_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, KthSelector::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_KthSelector_init_(t_KthSelector *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 0:
          {
            KthSelector object((jobject) NULL);

            INT_CALL(object = KthSelector());
            self->object = object;
            break;
          }
         case 1:
          {
            ::org::hipparchus::util::PivotingStrategy a0((jobject) NULL);
            PyTypeObject **p0;
            KthSelector object((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::util::PivotingStrategy::initializeClass, &a0, &p0, ::org::hipparchus::util::t_PivotingStrategy::parameters_))
            {
              INT_CALL(object = KthSelector(a0));
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

      static PyObject *t_KthSelector_getPivotingStrategy(t_KthSelector *self)
      {
        ::org::hipparchus::util::PivotingStrategy result((jobject) NULL);
        OBJ_CALL(result = self->object.getPivotingStrategy());
        return ::org::hipparchus::util::t_PivotingStrategy::wrap_Object(result);
      }

      static PyObject *t_KthSelector_select(t_KthSelector *self, PyObject *args)
      {
        JArray< jdouble > a0((jobject) NULL);
        JArray< jint > a1((jobject) NULL);
        jint a2;
        jdouble result;

        if (!parseArgs(args, "[D[II", &a0, &a1, &a2))
        {
          OBJ_CALL(result = self->object.select(a0, a1, a2));
          return PyFloat_FromDouble((double) result);
        }

        PyErr_SetArgsError((PyObject *) self, "select", args);
        return NULL;
      }

      static PyObject *t_KthSelector_get__pivotingStrategy(t_KthSelector *self, void *data)
      {
        ::org::hipparchus::util::PivotingStrategy value((jobject) NULL);
        OBJ_CALL(value = self->object.getPivotingStrategy());
        return ::org::hipparchus::util::t_PivotingStrategy::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/stat/LongFrequency.h"
#include "java/util/Comparator.h"
#include "java/lang/Class.h"
#include "java/lang/Object.h"
#include "java/lang/Long.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace stat {

      ::java::lang::Class *LongFrequency::class$ = NULL;
      jmethodID *LongFrequency::mids$ = NULL;
      bool LongFrequency::live$ = false;

      jclass LongFrequency::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/stat/LongFrequency");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_ff7cb6c242604316] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_init$_bee08e6612998c92] = env->getMethodID(cls, "<init>", "(Ljava/util/Comparator;)V");
          mids$[mid_addValue_8fd427ab23829bf5] = env->getMethodID(cls, "addValue", "(I)V");
          mids$[mid_getCount_3453f750066710ab] = env->getMethodID(cls, "getCount", "(I)J");
          mids$[mid_getCumFreq_3453f750066710ab] = env->getMethodID(cls, "getCumFreq", "(I)J");
          mids$[mid_getCumPct_ce4c02d583456bc9] = env->getMethodID(cls, "getCumPct", "(I)D");
          mids$[mid_getPct_ce4c02d583456bc9] = env->getMethodID(cls, "getPct", "(I)D");
          mids$[mid_incrementValue_2653808247cebc84] = env->getMethodID(cls, "incrementValue", "(IJ)V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      LongFrequency::LongFrequency() : ::org::hipparchus::stat::Frequency(env->newObject(initializeClass, &mids$, mid_init$_ff7cb6c242604316)) {}

      LongFrequency::LongFrequency(const ::java::util::Comparator & a0) : ::org::hipparchus::stat::Frequency(env->newObject(initializeClass, &mids$, mid_init$_bee08e6612998c92, a0.this$)) {}

      void LongFrequency::addValue(jint a0) const
      {
        env->callVoidMethod(this$, mids$[mid_addValue_8fd427ab23829bf5], a0);
      }

      jlong LongFrequency::getCount(jint a0) const
      {
        return env->callLongMethod(this$, mids$[mid_getCount_3453f750066710ab], a0);
      }

      jlong LongFrequency::getCumFreq(jint a0) const
      {
        return env->callLongMethod(this$, mids$[mid_getCumFreq_3453f750066710ab], a0);
      }

      jdouble LongFrequency::getCumPct(jint a0) const
      {
        return env->callDoubleMethod(this$, mids$[mid_getCumPct_ce4c02d583456bc9], a0);
      }

      jdouble LongFrequency::getPct(jint a0) const
      {
        return env->callDoubleMethod(this$, mids$[mid_getPct_ce4c02d583456bc9], a0);
      }

      void LongFrequency::incrementValue(jint a0, jlong a1) const
      {
        env->callVoidMethod(this$, mids$[mid_incrementValue_2653808247cebc84], a0, a1);
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
      static PyObject *t_LongFrequency_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_LongFrequency_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_LongFrequency_of_(t_LongFrequency *self, PyObject *args);
      static int t_LongFrequency_init_(t_LongFrequency *self, PyObject *args, PyObject *kwds);
      static PyObject *t_LongFrequency_addValue(t_LongFrequency *self, PyObject *args);
      static PyObject *t_LongFrequency_getCount(t_LongFrequency *self, PyObject *args);
      static PyObject *t_LongFrequency_getCumFreq(t_LongFrequency *self, PyObject *args);
      static PyObject *t_LongFrequency_getCumPct(t_LongFrequency *self, PyObject *args);
      static PyObject *t_LongFrequency_getPct(t_LongFrequency *self, PyObject *args);
      static PyObject *t_LongFrequency_incrementValue(t_LongFrequency *self, PyObject *args);
      static PyObject *t_LongFrequency_get__parameters_(t_LongFrequency *self, void *data);
      static PyGetSetDef t_LongFrequency__fields_[] = {
        DECLARE_GET_FIELD(t_LongFrequency, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_LongFrequency__methods_[] = {
        DECLARE_METHOD(t_LongFrequency, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_LongFrequency, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_LongFrequency, of_, METH_VARARGS),
        DECLARE_METHOD(t_LongFrequency, addValue, METH_VARARGS),
        DECLARE_METHOD(t_LongFrequency, getCount, METH_VARARGS),
        DECLARE_METHOD(t_LongFrequency, getCumFreq, METH_VARARGS),
        DECLARE_METHOD(t_LongFrequency, getCumPct, METH_VARARGS),
        DECLARE_METHOD(t_LongFrequency, getPct, METH_VARARGS),
        DECLARE_METHOD(t_LongFrequency, incrementValue, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(LongFrequency)[] = {
        { Py_tp_methods, t_LongFrequency__methods_ },
        { Py_tp_init, (void *) t_LongFrequency_init_ },
        { Py_tp_getset, t_LongFrequency__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(LongFrequency)[] = {
        &PY_TYPE_DEF(::org::hipparchus::stat::Frequency),
        NULL
      };

      DEFINE_TYPE(LongFrequency, t_LongFrequency, LongFrequency);
      PyObject *t_LongFrequency::wrap_Object(const LongFrequency& object, PyTypeObject *p0)
      {
        PyObject *obj = t_LongFrequency::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_LongFrequency *self = (t_LongFrequency *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_LongFrequency::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_LongFrequency::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_LongFrequency *self = (t_LongFrequency *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_LongFrequency::install(PyObject *module)
      {
        installType(&PY_TYPE(LongFrequency), &PY_TYPE_DEF(LongFrequency), module, "LongFrequency", 0);
      }

      void t_LongFrequency::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(LongFrequency), "class_", make_descriptor(LongFrequency::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LongFrequency), "wrapfn_", make_descriptor(t_LongFrequency::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LongFrequency), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_LongFrequency_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, LongFrequency::initializeClass, 1)))
          return NULL;
        return t_LongFrequency::wrap_Object(LongFrequency(((t_LongFrequency *) arg)->object.this$));
      }
      static PyObject *t_LongFrequency_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, LongFrequency::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_LongFrequency_of_(t_LongFrequency *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static int t_LongFrequency_init_(t_LongFrequency *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 0:
          {
            LongFrequency object((jobject) NULL);

            INT_CALL(object = LongFrequency());
            self->object = object;
            self->parameters[0] = ::java::lang::PY_TYPE(Long);
            break;
          }
         case 1:
          {
            ::java::util::Comparator a0((jobject) NULL);
            PyTypeObject **p0;
            LongFrequency object((jobject) NULL);

            if (!parseArgs(args, "K", ::java::util::Comparator::initializeClass, &a0, &p0, ::java::util::t_Comparator::parameters_))
            {
              INT_CALL(object = LongFrequency(a0));
              self->object = object;
              self->parameters[0] = ::java::lang::PY_TYPE(Long);
              break;
            }
          }
         default:
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_LongFrequency_addValue(t_LongFrequency *self, PyObject *args)
      {
        jint a0;

        if (!parseArgs(args, "I", &a0))
        {
          OBJ_CALL(self->object.addValue(a0));
          Py_RETURN_NONE;
        }

        return callSuper(PY_TYPE(LongFrequency), (PyObject *) self, "addValue", args, 2);
      }

      static PyObject *t_LongFrequency_getCount(t_LongFrequency *self, PyObject *args)
      {
        jint a0;
        jlong result;

        if (!parseArgs(args, "I", &a0))
        {
          OBJ_CALL(result = self->object.getCount(a0));
          return PyLong_FromLongLong((PY_LONG_LONG) result);
        }

        return callSuper(PY_TYPE(LongFrequency), (PyObject *) self, "getCount", args, 2);
      }

      static PyObject *t_LongFrequency_getCumFreq(t_LongFrequency *self, PyObject *args)
      {
        jint a0;
        jlong result;

        if (!parseArgs(args, "I", &a0))
        {
          OBJ_CALL(result = self->object.getCumFreq(a0));
          return PyLong_FromLongLong((PY_LONG_LONG) result);
        }

        return callSuper(PY_TYPE(LongFrequency), (PyObject *) self, "getCumFreq", args, 2);
      }

      static PyObject *t_LongFrequency_getCumPct(t_LongFrequency *self, PyObject *args)
      {
        jint a0;
        jdouble result;

        if (!parseArgs(args, "I", &a0))
        {
          OBJ_CALL(result = self->object.getCumPct(a0));
          return PyFloat_FromDouble((double) result);
        }

        return callSuper(PY_TYPE(LongFrequency), (PyObject *) self, "getCumPct", args, 2);
      }

      static PyObject *t_LongFrequency_getPct(t_LongFrequency *self, PyObject *args)
      {
        jint a0;
        jdouble result;

        if (!parseArgs(args, "I", &a0))
        {
          OBJ_CALL(result = self->object.getPct(a0));
          return PyFloat_FromDouble((double) result);
        }

        return callSuper(PY_TYPE(LongFrequency), (PyObject *) self, "getPct", args, 2);
      }

      static PyObject *t_LongFrequency_incrementValue(t_LongFrequency *self, PyObject *args)
      {
        jint a0;
        jlong a1;

        if (!parseArgs(args, "IJ", &a0, &a1))
        {
          OBJ_CALL(self->object.incrementValue(a0, a1));
          Py_RETURN_NONE;
        }

        return callSuper(PY_TYPE(LongFrequency), (PyObject *) self, "incrementValue", args, 2);
      }
      static PyObject *t_LongFrequency_get__parameters_(t_LongFrequency *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/filtering/kalman/Measurement.h"
#include "java/lang/Class.h"
#include "org/hipparchus/linear/RealMatrix.h"
#include "org/hipparchus/linear/RealVector.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace filtering {
      namespace kalman {

        ::java::lang::Class *Measurement::class$ = NULL;
        jmethodID *Measurement::mids$ = NULL;
        bool Measurement::live$ = false;

        jclass Measurement::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/filtering/kalman/Measurement");

            mids$ = new jmethodID[max_mid];
            mids$[mid_getCovariance_b2eebabce70526d8] = env->getMethodID(cls, "getCovariance", "()Lorg/hipparchus/linear/RealMatrix;");
            mids$[mid_getTime_9981f74b2d109da6] = env->getMethodID(cls, "getTime", "()D");
            mids$[mid_getValue_92d7e8d8d3f1dfcf] = env->getMethodID(cls, "getValue", "()Lorg/hipparchus/linear/RealVector;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ::org::hipparchus::linear::RealMatrix Measurement::getCovariance() const
        {
          return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_getCovariance_b2eebabce70526d8]));
        }

        jdouble Measurement::getTime() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getTime_9981f74b2d109da6]);
        }

        ::org::hipparchus::linear::RealVector Measurement::getValue() const
        {
          return ::org::hipparchus::linear::RealVector(env->callObjectMethod(this$, mids$[mid_getValue_92d7e8d8d3f1dfcf]));
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
        static PyObject *t_Measurement_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_Measurement_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_Measurement_getCovariance(t_Measurement *self);
        static PyObject *t_Measurement_getTime(t_Measurement *self);
        static PyObject *t_Measurement_getValue(t_Measurement *self);
        static PyObject *t_Measurement_get__covariance(t_Measurement *self, void *data);
        static PyObject *t_Measurement_get__time(t_Measurement *self, void *data);
        static PyObject *t_Measurement_get__value(t_Measurement *self, void *data);
        static PyGetSetDef t_Measurement__fields_[] = {
          DECLARE_GET_FIELD(t_Measurement, covariance),
          DECLARE_GET_FIELD(t_Measurement, time),
          DECLARE_GET_FIELD(t_Measurement, value),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_Measurement__methods_[] = {
          DECLARE_METHOD(t_Measurement, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Measurement, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Measurement, getCovariance, METH_NOARGS),
          DECLARE_METHOD(t_Measurement, getTime, METH_NOARGS),
          DECLARE_METHOD(t_Measurement, getValue, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(Measurement)[] = {
          { Py_tp_methods, t_Measurement__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_Measurement__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(Measurement)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(Measurement, t_Measurement, Measurement);

        void t_Measurement::install(PyObject *module)
        {
          installType(&PY_TYPE(Measurement), &PY_TYPE_DEF(Measurement), module, "Measurement", 0);
        }

        void t_Measurement::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(Measurement), "class_", make_descriptor(Measurement::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Measurement), "wrapfn_", make_descriptor(t_Measurement::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Measurement), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_Measurement_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, Measurement::initializeClass, 1)))
            return NULL;
          return t_Measurement::wrap_Object(Measurement(((t_Measurement *) arg)->object.this$));
        }
        static PyObject *t_Measurement_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, Measurement::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_Measurement_getCovariance(t_Measurement *self)
        {
          ::org::hipparchus::linear::RealMatrix result((jobject) NULL);
          OBJ_CALL(result = self->object.getCovariance());
          return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
        }

        static PyObject *t_Measurement_getTime(t_Measurement *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getTime());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_Measurement_getValue(t_Measurement *self)
        {
          ::org::hipparchus::linear::RealVector result((jobject) NULL);
          OBJ_CALL(result = self->object.getValue());
          return ::org::hipparchus::linear::t_RealVector::wrap_Object(result);
        }

        static PyObject *t_Measurement_get__covariance(t_Measurement *self, void *data)
        {
          ::org::hipparchus::linear::RealMatrix value((jobject) NULL);
          OBJ_CALL(value = self->object.getCovariance());
          return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(value);
        }

        static PyObject *t_Measurement_get__time(t_Measurement *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getTime());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_Measurement_get__value(t_Measurement *self, void *data)
        {
          ::org::hipparchus::linear::RealVector value((jobject) NULL);
          OBJ_CALL(value = self->object.getValue());
          return ::org::hipparchus::linear::t_RealVector::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/gnss/attitude/AbstractGNSSAttitudeProvider.h"
#include "org/orekit/utils/FieldPVCoordinatesProvider.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/gnss/attitude/GNSSAttitudeProvider.h"
#include "java/lang/Class.h"
#include "org/orekit/attitudes/FieldAttitude.h"
#include "org/orekit/attitudes/Attitude.h"
#include "org/orekit/utils/PVCoordinatesProvider.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace attitude {

        ::java::lang::Class *AbstractGNSSAttitudeProvider::class$ = NULL;
        jmethodID *AbstractGNSSAttitudeProvider::mids$ = NULL;
        bool AbstractGNSSAttitudeProvider::live$ = false;

        jclass AbstractGNSSAttitudeProvider::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/gnss/attitude/AbstractGNSSAttitudeProvider");

            mids$ = new jmethodID[max_mid];
            mids$[mid_getAttitude_aab1c6ab68ffdcbb] = env->getMethodID(cls, "getAttitude", "(Lorg/orekit/utils/FieldPVCoordinatesProvider;Lorg/orekit/time/FieldAbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/orekit/attitudes/FieldAttitude;");
            mids$[mid_getAttitude_a02177519e1b6a45] = env->getMethodID(cls, "getAttitude", "(Lorg/orekit/utils/PVCoordinatesProvider;Lorg/orekit/time/AbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/orekit/attitudes/Attitude;");
            mids$[mid_validityEnd_80e11148db499dda] = env->getMethodID(cls, "validityEnd", "()Lorg/orekit/time/AbsoluteDate;");
            mids$[mid_validityStart_80e11148db499dda] = env->getMethodID(cls, "validityStart", "()Lorg/orekit/time/AbsoluteDate;");
            mids$[mid_getSun_b623c04f72a10774] = env->getMethodID(cls, "getSun", "()Lorg/orekit/utils/ExtendedPVCoordinatesProvider;");
            mids$[mid_getInertialFrame_cb151471db4570f0] = env->getMethodID(cls, "getInertialFrame", "()Lorg/orekit/frames/Frame;");
            mids$[mid_correctedYaw_7e83c4f910737b79] = env->getMethodID(cls, "correctedYaw", "(Lorg/orekit/gnss/attitude/GNSSAttitudeContext;)Lorg/orekit/utils/TimeStampedAngularCoordinates;");
            mids$[mid_correctedYaw_3bb932fc0c863341] = env->getMethodID(cls, "correctedYaw", "(Lorg/orekit/gnss/attitude/GNSSFieldAttitudeContext;)Lorg/orekit/utils/TimeStampedFieldAngularCoordinates;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ::org::orekit::attitudes::FieldAttitude AbstractGNSSAttitudeProvider::getAttitude(const ::org::orekit::utils::FieldPVCoordinatesProvider & a0, const ::org::orekit::time::FieldAbsoluteDate & a1, const ::org::orekit::frames::Frame & a2) const
        {
          return ::org::orekit::attitudes::FieldAttitude(env->callObjectMethod(this$, mids$[mid_getAttitude_aab1c6ab68ffdcbb], a0.this$, a1.this$, a2.this$));
        }

        ::org::orekit::attitudes::Attitude AbstractGNSSAttitudeProvider::getAttitude(const ::org::orekit::utils::PVCoordinatesProvider & a0, const ::org::orekit::time::AbsoluteDate & a1, const ::org::orekit::frames::Frame & a2) const
        {
          return ::org::orekit::attitudes::Attitude(env->callObjectMethod(this$, mids$[mid_getAttitude_a02177519e1b6a45], a0.this$, a1.this$, a2.this$));
        }

        ::org::orekit::time::AbsoluteDate AbstractGNSSAttitudeProvider::validityEnd() const
        {
          return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_validityEnd_80e11148db499dda]));
        }

        ::org::orekit::time::AbsoluteDate AbstractGNSSAttitudeProvider::validityStart() const
        {
          return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_validityStart_80e11148db499dda]));
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
      namespace attitude {
        static PyObject *t_AbstractGNSSAttitudeProvider_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_AbstractGNSSAttitudeProvider_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_AbstractGNSSAttitudeProvider_getAttitude(t_AbstractGNSSAttitudeProvider *self, PyObject *args);
        static PyObject *t_AbstractGNSSAttitudeProvider_validityEnd(t_AbstractGNSSAttitudeProvider *self);
        static PyObject *t_AbstractGNSSAttitudeProvider_validityStart(t_AbstractGNSSAttitudeProvider *self);

        static PyMethodDef t_AbstractGNSSAttitudeProvider__methods_[] = {
          DECLARE_METHOD(t_AbstractGNSSAttitudeProvider, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AbstractGNSSAttitudeProvider, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AbstractGNSSAttitudeProvider, getAttitude, METH_VARARGS),
          DECLARE_METHOD(t_AbstractGNSSAttitudeProvider, validityEnd, METH_NOARGS),
          DECLARE_METHOD(t_AbstractGNSSAttitudeProvider, validityStart, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(AbstractGNSSAttitudeProvider)[] = {
          { Py_tp_methods, t_AbstractGNSSAttitudeProvider__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(AbstractGNSSAttitudeProvider)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(AbstractGNSSAttitudeProvider, t_AbstractGNSSAttitudeProvider, AbstractGNSSAttitudeProvider);

        void t_AbstractGNSSAttitudeProvider::install(PyObject *module)
        {
          installType(&PY_TYPE(AbstractGNSSAttitudeProvider), &PY_TYPE_DEF(AbstractGNSSAttitudeProvider), module, "AbstractGNSSAttitudeProvider", 0);
        }

        void t_AbstractGNSSAttitudeProvider::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractGNSSAttitudeProvider), "class_", make_descriptor(AbstractGNSSAttitudeProvider::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractGNSSAttitudeProvider), "wrapfn_", make_descriptor(t_AbstractGNSSAttitudeProvider::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractGNSSAttitudeProvider), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_AbstractGNSSAttitudeProvider_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, AbstractGNSSAttitudeProvider::initializeClass, 1)))
            return NULL;
          return t_AbstractGNSSAttitudeProvider::wrap_Object(AbstractGNSSAttitudeProvider(((t_AbstractGNSSAttitudeProvider *) arg)->object.this$));
        }
        static PyObject *t_AbstractGNSSAttitudeProvider_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, AbstractGNSSAttitudeProvider::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_AbstractGNSSAttitudeProvider_getAttitude(t_AbstractGNSSAttitudeProvider *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 3:
            {
              ::org::orekit::utils::PVCoordinatesProvider a0((jobject) NULL);
              ::org::orekit::time::AbsoluteDate a1((jobject) NULL);
              ::org::orekit::frames::Frame a2((jobject) NULL);
              ::org::orekit::attitudes::Attitude result((jobject) NULL);

              if (!parseArgs(args, "kkk", ::org::orekit::utils::PVCoordinatesProvider::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::frames::Frame::initializeClass, &a0, &a1, &a2))
              {
                OBJ_CALL(result = self->object.getAttitude(a0, a1, a2));
                return ::org::orekit::attitudes::t_Attitude::wrap_Object(result);
              }
            }
            {
              ::org::orekit::utils::FieldPVCoordinatesProvider a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::orekit::time::FieldAbsoluteDate a1((jobject) NULL);
              PyTypeObject **p1;
              ::org::orekit::frames::Frame a2((jobject) NULL);
              ::org::orekit::attitudes::FieldAttitude result((jobject) NULL);

              if (!parseArgs(args, "KKk", ::org::orekit::utils::FieldPVCoordinatesProvider::initializeClass, ::org::orekit::time::FieldAbsoluteDate::initializeClass, ::org::orekit::frames::Frame::initializeClass, &a0, &p0, ::org::orekit::utils::t_FieldPVCoordinatesProvider::parameters_, &a1, &p1, ::org::orekit::time::t_FieldAbsoluteDate::parameters_, &a2))
              {
                OBJ_CALL(result = self->object.getAttitude(a0, a1, a2));
                return ::org::orekit::attitudes::t_FieldAttitude::wrap_Object(result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "getAttitude", args);
          return NULL;
        }

        static PyObject *t_AbstractGNSSAttitudeProvider_validityEnd(t_AbstractGNSSAttitudeProvider *self)
        {
          ::org::orekit::time::AbsoluteDate result((jobject) NULL);
          OBJ_CALL(result = self->object.validityEnd());
          return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
        }

        static PyObject *t_AbstractGNSSAttitudeProvider_validityStart(t_AbstractGNSSAttitudeProvider *self)
        {
          ::org::orekit::time::AbsoluteDate result((jobject) NULL);
          OBJ_CALL(result = self->object.validityStart());
          return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/analysis/solvers/BaseUnivariateSolver.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "org/hipparchus/analysis/UnivariateFunction.h"
#include "java/lang/Class.h"
#include "org/hipparchus/exception/MathIllegalStateException.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace solvers {

        ::java::lang::Class *BaseUnivariateSolver::class$ = NULL;
        jmethodID *BaseUnivariateSolver::mids$ = NULL;
        bool BaseUnivariateSolver::live$ = false;

        jclass BaseUnivariateSolver::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/solvers/BaseUnivariateSolver");

            mids$ = new jmethodID[max_mid];
            mids$[mid_getAbsoluteAccuracy_9981f74b2d109da6] = env->getMethodID(cls, "getAbsoluteAccuracy", "()D");
            mids$[mid_getEvaluations_d6ab429752e7c267] = env->getMethodID(cls, "getEvaluations", "()I");
            mids$[mid_getFunctionValueAccuracy_9981f74b2d109da6] = env->getMethodID(cls, "getFunctionValueAccuracy", "()D");
            mids$[mid_getRelativeAccuracy_9981f74b2d109da6] = env->getMethodID(cls, "getRelativeAccuracy", "()D");
            mids$[mid_solve_473ffc752427b240] = env->getMethodID(cls, "solve", "(ILorg/hipparchus/analysis/UnivariateFunction;D)D");
            mids$[mid_solve_f8d9b8fc210a2541] = env->getMethodID(cls, "solve", "(ILorg/hipparchus/analysis/UnivariateFunction;DD)D");
            mids$[mid_solve_fe5bc4a065ab530b] = env->getMethodID(cls, "solve", "(ILorg/hipparchus/analysis/UnivariateFunction;DDD)D");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        jdouble BaseUnivariateSolver::getAbsoluteAccuracy() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getAbsoluteAccuracy_9981f74b2d109da6]);
        }

        jint BaseUnivariateSolver::getEvaluations() const
        {
          return env->callIntMethod(this$, mids$[mid_getEvaluations_d6ab429752e7c267]);
        }

        jdouble BaseUnivariateSolver::getFunctionValueAccuracy() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getFunctionValueAccuracy_9981f74b2d109da6]);
        }

        jdouble BaseUnivariateSolver::getRelativeAccuracy() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getRelativeAccuracy_9981f74b2d109da6]);
        }

        jdouble BaseUnivariateSolver::solve(jint a0, const ::org::hipparchus::analysis::UnivariateFunction & a1, jdouble a2) const
        {
          return env->callDoubleMethod(this$, mids$[mid_solve_473ffc752427b240], a0, a1.this$, a2);
        }

        jdouble BaseUnivariateSolver::solve(jint a0, const ::org::hipparchus::analysis::UnivariateFunction & a1, jdouble a2, jdouble a3) const
        {
          return env->callDoubleMethod(this$, mids$[mid_solve_f8d9b8fc210a2541], a0, a1.this$, a2, a3);
        }

        jdouble BaseUnivariateSolver::solve(jint a0, const ::org::hipparchus::analysis::UnivariateFunction & a1, jdouble a2, jdouble a3, jdouble a4) const
        {
          return env->callDoubleMethod(this$, mids$[mid_solve_fe5bc4a065ab530b], a0, a1.this$, a2, a3, a4);
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
      namespace solvers {
        static PyObject *t_BaseUnivariateSolver_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_BaseUnivariateSolver_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_BaseUnivariateSolver_of_(t_BaseUnivariateSolver *self, PyObject *args);
        static PyObject *t_BaseUnivariateSolver_getAbsoluteAccuracy(t_BaseUnivariateSolver *self);
        static PyObject *t_BaseUnivariateSolver_getEvaluations(t_BaseUnivariateSolver *self);
        static PyObject *t_BaseUnivariateSolver_getFunctionValueAccuracy(t_BaseUnivariateSolver *self);
        static PyObject *t_BaseUnivariateSolver_getRelativeAccuracy(t_BaseUnivariateSolver *self);
        static PyObject *t_BaseUnivariateSolver_solve(t_BaseUnivariateSolver *self, PyObject *args);
        static PyObject *t_BaseUnivariateSolver_get__absoluteAccuracy(t_BaseUnivariateSolver *self, void *data);
        static PyObject *t_BaseUnivariateSolver_get__evaluations(t_BaseUnivariateSolver *self, void *data);
        static PyObject *t_BaseUnivariateSolver_get__functionValueAccuracy(t_BaseUnivariateSolver *self, void *data);
        static PyObject *t_BaseUnivariateSolver_get__relativeAccuracy(t_BaseUnivariateSolver *self, void *data);
        static PyObject *t_BaseUnivariateSolver_get__parameters_(t_BaseUnivariateSolver *self, void *data);
        static PyGetSetDef t_BaseUnivariateSolver__fields_[] = {
          DECLARE_GET_FIELD(t_BaseUnivariateSolver, absoluteAccuracy),
          DECLARE_GET_FIELD(t_BaseUnivariateSolver, evaluations),
          DECLARE_GET_FIELD(t_BaseUnivariateSolver, functionValueAccuracy),
          DECLARE_GET_FIELD(t_BaseUnivariateSolver, relativeAccuracy),
          DECLARE_GET_FIELD(t_BaseUnivariateSolver, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_BaseUnivariateSolver__methods_[] = {
          DECLARE_METHOD(t_BaseUnivariateSolver, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_BaseUnivariateSolver, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_BaseUnivariateSolver, of_, METH_VARARGS),
          DECLARE_METHOD(t_BaseUnivariateSolver, getAbsoluteAccuracy, METH_NOARGS),
          DECLARE_METHOD(t_BaseUnivariateSolver, getEvaluations, METH_NOARGS),
          DECLARE_METHOD(t_BaseUnivariateSolver, getFunctionValueAccuracy, METH_NOARGS),
          DECLARE_METHOD(t_BaseUnivariateSolver, getRelativeAccuracy, METH_NOARGS),
          DECLARE_METHOD(t_BaseUnivariateSolver, solve, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(BaseUnivariateSolver)[] = {
          { Py_tp_methods, t_BaseUnivariateSolver__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_BaseUnivariateSolver__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(BaseUnivariateSolver)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(BaseUnivariateSolver, t_BaseUnivariateSolver, BaseUnivariateSolver);
        PyObject *t_BaseUnivariateSolver::wrap_Object(const BaseUnivariateSolver& object, PyTypeObject *p0)
        {
          PyObject *obj = t_BaseUnivariateSolver::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_BaseUnivariateSolver *self = (t_BaseUnivariateSolver *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_BaseUnivariateSolver::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_BaseUnivariateSolver::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_BaseUnivariateSolver *self = (t_BaseUnivariateSolver *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_BaseUnivariateSolver::install(PyObject *module)
        {
          installType(&PY_TYPE(BaseUnivariateSolver), &PY_TYPE_DEF(BaseUnivariateSolver), module, "BaseUnivariateSolver", 0);
        }

        void t_BaseUnivariateSolver::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(BaseUnivariateSolver), "class_", make_descriptor(BaseUnivariateSolver::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(BaseUnivariateSolver), "wrapfn_", make_descriptor(t_BaseUnivariateSolver::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(BaseUnivariateSolver), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_BaseUnivariateSolver_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, BaseUnivariateSolver::initializeClass, 1)))
            return NULL;
          return t_BaseUnivariateSolver::wrap_Object(BaseUnivariateSolver(((t_BaseUnivariateSolver *) arg)->object.this$));
        }
        static PyObject *t_BaseUnivariateSolver_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, BaseUnivariateSolver::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_BaseUnivariateSolver_of_(t_BaseUnivariateSolver *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static PyObject *t_BaseUnivariateSolver_getAbsoluteAccuracy(t_BaseUnivariateSolver *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getAbsoluteAccuracy());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_BaseUnivariateSolver_getEvaluations(t_BaseUnivariateSolver *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getEvaluations());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_BaseUnivariateSolver_getFunctionValueAccuracy(t_BaseUnivariateSolver *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getFunctionValueAccuracy());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_BaseUnivariateSolver_getRelativeAccuracy(t_BaseUnivariateSolver *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getRelativeAccuracy());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_BaseUnivariateSolver_solve(t_BaseUnivariateSolver *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 3:
            {
              jint a0;
              ::org::hipparchus::analysis::UnivariateFunction a1((jobject) NULL);
              jdouble a2;
              jdouble result;

              if (!parseArgs(args, "IkD", ::org::hipparchus::analysis::UnivariateFunction::initializeClass, &a0, &a1, &a2))
              {
                OBJ_CALL(result = self->object.solve(a0, a1, a2));
                return PyFloat_FromDouble((double) result);
              }
            }
            break;
           case 4:
            {
              jint a0;
              ::org::hipparchus::analysis::UnivariateFunction a1((jobject) NULL);
              jdouble a2;
              jdouble a3;
              jdouble result;

              if (!parseArgs(args, "IkDD", ::org::hipparchus::analysis::UnivariateFunction::initializeClass, &a0, &a1, &a2, &a3))
              {
                OBJ_CALL(result = self->object.solve(a0, a1, a2, a3));
                return PyFloat_FromDouble((double) result);
              }
            }
            break;
           case 5:
            {
              jint a0;
              ::org::hipparchus::analysis::UnivariateFunction a1((jobject) NULL);
              jdouble a2;
              jdouble a3;
              jdouble a4;
              jdouble result;

              if (!parseArgs(args, "IkDDD", ::org::hipparchus::analysis::UnivariateFunction::initializeClass, &a0, &a1, &a2, &a3, &a4))
              {
                OBJ_CALL(result = self->object.solve(a0, a1, a2, a3, a4));
                return PyFloat_FromDouble((double) result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "solve", args);
          return NULL;
        }
        static PyObject *t_BaseUnivariateSolver_get__parameters_(t_BaseUnivariateSolver *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_BaseUnivariateSolver_get__absoluteAccuracy(t_BaseUnivariateSolver *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getAbsoluteAccuracy());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_BaseUnivariateSolver_get__evaluations(t_BaseUnivariateSolver *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getEvaluations());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_BaseUnivariateSolver_get__functionValueAccuracy(t_BaseUnivariateSolver *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getFunctionValueAccuracy());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_BaseUnivariateSolver_get__relativeAccuracy(t_BaseUnivariateSolver *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getRelativeAccuracy());
          return PyFloat_FromDouble((double) value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/events/DateDetector.h"
#include "java/util/List.h"
#include "org/orekit/time/TimeStamped.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/propagation/events/DateDetector.h"
#include "java/lang/Class.h"
#include "java/lang/IllegalArgumentException.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace events {

        ::java::lang::Class *DateDetector::class$ = NULL;
        jmethodID *DateDetector::mids$ = NULL;
        bool DateDetector::live$ = false;
        jdouble DateDetector::DEFAULT_MAX_CHECK = (jdouble) 0;
        jdouble DateDetector::DEFAULT_MIN_GAP = (jdouble) 0;
        jdouble DateDetector::DEFAULT_THRESHOLD = (jdouble) 0;

        jclass DateDetector::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/events/DateDetector");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_735106b00c0040d8] = env->getMethodID(cls, "<init>", "([Lorg/orekit/time/TimeStamped;)V");
            mids$[mid_addEventDate_8497861b879c83f7] = env->getMethodID(cls, "addEventDate", "(Lorg/orekit/time/AbsoluteDate;)V");
            mids$[mid_g_b443ba1cc794b916] = env->getMethodID(cls, "g", "(Lorg/orekit/propagation/SpacecraftState;)D");
            mids$[mid_getDate_80e11148db499dda] = env->getMethodID(cls, "getDate", "()Lorg/orekit/time/AbsoluteDate;");
            mids$[mid_getDates_d751c1a57012b438] = env->getMethodID(cls, "getDates", "()Ljava/util/List;");
            mids$[mid_withMinGap_d3f0b55f72255edc] = env->getMethodID(cls, "withMinGap", "(D)Lorg/orekit/propagation/events/DateDetector;");
            mids$[mid_create_92993784b8d3c9ad] = env->getMethodID(cls, "create", "(Lorg/orekit/propagation/events/AdaptableInterval;DILorg/orekit/propagation/events/handlers/EventHandler;)Lorg/orekit/propagation/events/DateDetector;");

            class$ = new ::java::lang::Class(cls);
            cls = (jclass) class$->this$;

            DEFAULT_MAX_CHECK = env->getStaticDoubleField(cls, "DEFAULT_MAX_CHECK");
            DEFAULT_MIN_GAP = env->getStaticDoubleField(cls, "DEFAULT_MIN_GAP");
            DEFAULT_THRESHOLD = env->getStaticDoubleField(cls, "DEFAULT_THRESHOLD");
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        DateDetector::DateDetector(const JArray< ::org::orekit::time::TimeStamped > & a0) : ::org::orekit::propagation::events::AbstractDetector(env->newObject(initializeClass, &mids$, mid_init$_735106b00c0040d8, a0.this$)) {}

        void DateDetector::addEventDate(const ::org::orekit::time::AbsoluteDate & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_addEventDate_8497861b879c83f7], a0.this$);
        }

        jdouble DateDetector::g(const ::org::orekit::propagation::SpacecraftState & a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_g_b443ba1cc794b916], a0.this$);
        }

        ::org::orekit::time::AbsoluteDate DateDetector::getDate() const
        {
          return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getDate_80e11148db499dda]));
        }

        ::java::util::List DateDetector::getDates() const
        {
          return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getDates_d751c1a57012b438]));
        }

        DateDetector DateDetector::withMinGap(jdouble a0) const
        {
          return DateDetector(env->callObjectMethod(this$, mids$[mid_withMinGap_d3f0b55f72255edc], a0));
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
        static PyObject *t_DateDetector_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_DateDetector_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_DateDetector_of_(t_DateDetector *self, PyObject *args);
        static int t_DateDetector_init_(t_DateDetector *self, PyObject *args, PyObject *kwds);
        static PyObject *t_DateDetector_addEventDate(t_DateDetector *self, PyObject *arg);
        static PyObject *t_DateDetector_g(t_DateDetector *self, PyObject *args);
        static PyObject *t_DateDetector_getDate(t_DateDetector *self);
        static PyObject *t_DateDetector_getDates(t_DateDetector *self);
        static PyObject *t_DateDetector_withMinGap(t_DateDetector *self, PyObject *arg);
        static PyObject *t_DateDetector_get__date(t_DateDetector *self, void *data);
        static PyObject *t_DateDetector_get__dates(t_DateDetector *self, void *data);
        static PyObject *t_DateDetector_get__parameters_(t_DateDetector *self, void *data);
        static PyGetSetDef t_DateDetector__fields_[] = {
          DECLARE_GET_FIELD(t_DateDetector, date),
          DECLARE_GET_FIELD(t_DateDetector, dates),
          DECLARE_GET_FIELD(t_DateDetector, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_DateDetector__methods_[] = {
          DECLARE_METHOD(t_DateDetector, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_DateDetector, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_DateDetector, of_, METH_VARARGS),
          DECLARE_METHOD(t_DateDetector, addEventDate, METH_O),
          DECLARE_METHOD(t_DateDetector, g, METH_VARARGS),
          DECLARE_METHOD(t_DateDetector, getDate, METH_NOARGS),
          DECLARE_METHOD(t_DateDetector, getDates, METH_NOARGS),
          DECLARE_METHOD(t_DateDetector, withMinGap, METH_O),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(DateDetector)[] = {
          { Py_tp_methods, t_DateDetector__methods_ },
          { Py_tp_init, (void *) t_DateDetector_init_ },
          { Py_tp_getset, t_DateDetector__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(DateDetector)[] = {
          &PY_TYPE_DEF(::org::orekit::propagation::events::AbstractDetector),
          NULL
        };

        DEFINE_TYPE(DateDetector, t_DateDetector, DateDetector);
        PyObject *t_DateDetector::wrap_Object(const DateDetector& object, PyTypeObject *p0)
        {
          PyObject *obj = t_DateDetector::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_DateDetector *self = (t_DateDetector *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_DateDetector::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_DateDetector::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_DateDetector *self = (t_DateDetector *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_DateDetector::install(PyObject *module)
        {
          installType(&PY_TYPE(DateDetector), &PY_TYPE_DEF(DateDetector), module, "DateDetector", 0);
        }

        void t_DateDetector::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(DateDetector), "class_", make_descriptor(DateDetector::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(DateDetector), "wrapfn_", make_descriptor(t_DateDetector::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(DateDetector), "boxfn_", make_descriptor(boxObject));
          env->getClass(DateDetector::initializeClass);
          PyObject_SetAttrString((PyObject *) PY_TYPE(DateDetector), "DEFAULT_MAX_CHECK", make_descriptor(DateDetector::DEFAULT_MAX_CHECK));
          PyObject_SetAttrString((PyObject *) PY_TYPE(DateDetector), "DEFAULT_MIN_GAP", make_descriptor(DateDetector::DEFAULT_MIN_GAP));
          PyObject_SetAttrString((PyObject *) PY_TYPE(DateDetector), "DEFAULT_THRESHOLD", make_descriptor(DateDetector::DEFAULT_THRESHOLD));
        }

        static PyObject *t_DateDetector_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, DateDetector::initializeClass, 1)))
            return NULL;
          return t_DateDetector::wrap_Object(DateDetector(((t_DateDetector *) arg)->object.this$));
        }
        static PyObject *t_DateDetector_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, DateDetector::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_DateDetector_of_(t_DateDetector *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_DateDetector_init_(t_DateDetector *self, PyObject *args, PyObject *kwds)
        {
          JArray< ::org::orekit::time::TimeStamped > a0((jobject) NULL);
          DateDetector object((jobject) NULL);

          if (!parseArgs(args, "[k", ::org::orekit::time::TimeStamped::initializeClass, &a0))
          {
            INT_CALL(object = DateDetector(a0));
            self->object = object;
            self->parameters[0] = ::org::orekit::propagation::events::PY_TYPE(DateDetector);
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_DateDetector_addEventDate(t_DateDetector *self, PyObject *arg)
        {
          ::org::orekit::time::AbsoluteDate a0((jobject) NULL);

          if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
          {
            OBJ_CALL(self->object.addEventDate(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "addEventDate", arg);
          return NULL;
        }

        static PyObject *t_DateDetector_g(t_DateDetector *self, PyObject *args)
        {
          ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
          jdouble result;

          if (!parseArgs(args, "k", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.g(a0));
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(DateDetector), (PyObject *) self, "g", args, 2);
        }

        static PyObject *t_DateDetector_getDate(t_DateDetector *self)
        {
          ::org::orekit::time::AbsoluteDate result((jobject) NULL);
          OBJ_CALL(result = self->object.getDate());
          return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
        }

        static PyObject *t_DateDetector_getDates(t_DateDetector *self)
        {
          ::java::util::List result((jobject) NULL);
          OBJ_CALL(result = self->object.getDates());
          return ::java::util::t_List::wrap_Object(result, ::org::orekit::time::PY_TYPE(TimeStamped));
        }

        static PyObject *t_DateDetector_withMinGap(t_DateDetector *self, PyObject *arg)
        {
          jdouble a0;
          DateDetector result((jobject) NULL);

          if (!parseArg(arg, "D", &a0))
          {
            OBJ_CALL(result = self->object.withMinGap(a0));
            return t_DateDetector::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "withMinGap", arg);
          return NULL;
        }
        static PyObject *t_DateDetector_get__parameters_(t_DateDetector *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_DateDetector_get__date(t_DateDetector *self, void *data)
        {
          ::org::orekit::time::AbsoluteDate value((jobject) NULL);
          OBJ_CALL(value = self->object.getDate());
          return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
        }

        static PyObject *t_DateDetector_get__dates(t_DateDetector *self, void *data)
        {
          ::java::util::List value((jobject) NULL);
          OBJ_CALL(value = self->object.getDates());
          return ::java::util::t_List::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/conversion/ThreeEighthesFieldIntegratorBuilder.h"
#include "org/hipparchus/ode/AbstractFieldIntegrator.h"
#include "org/hipparchus/Field.h"
#include "java/lang/Class.h"
#include "org/orekit/orbits/Orbit.h"
#include "org/orekit/orbits/OrbitType.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace conversion {

        ::java::lang::Class *ThreeEighthesFieldIntegratorBuilder::class$ = NULL;
        jmethodID *ThreeEighthesFieldIntegratorBuilder::mids$ = NULL;
        bool ThreeEighthesFieldIntegratorBuilder::live$ = false;

        jclass ThreeEighthesFieldIntegratorBuilder::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/conversion/ThreeEighthesFieldIntegratorBuilder");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_1ad26e8c8c0cd65b] = env->getMethodID(cls, "<init>", "(D)V");
            mids$[mid_init$_f63ca9e3185c722e] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/CalculusFieldElement;)V");
            mids$[mid_buildIntegrator_78d8a25057f42815] = env->getMethodID(cls, "buildIntegrator", "(Lorg/hipparchus/Field;Lorg/orekit/orbits/Orbit;Lorg/orekit/orbits/OrbitType;)Lorg/hipparchus/ode/AbstractFieldIntegrator;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ThreeEighthesFieldIntegratorBuilder::ThreeEighthesFieldIntegratorBuilder(jdouble a0) : ::org::orekit::propagation::conversion::AbstractFixedStepFieldIntegratorBuilder(env->newObject(initializeClass, &mids$, mid_init$_1ad26e8c8c0cd65b, a0)) {}

        ThreeEighthesFieldIntegratorBuilder::ThreeEighthesFieldIntegratorBuilder(const ::org::hipparchus::CalculusFieldElement & a0) : ::org::orekit::propagation::conversion::AbstractFixedStepFieldIntegratorBuilder(env->newObject(initializeClass, &mids$, mid_init$_f63ca9e3185c722e, a0.this$)) {}

        ::org::hipparchus::ode::AbstractFieldIntegrator ThreeEighthesFieldIntegratorBuilder::buildIntegrator(const ::org::hipparchus::Field & a0, const ::org::orekit::orbits::Orbit & a1, const ::org::orekit::orbits::OrbitType & a2) const
        {
          return ::org::hipparchus::ode::AbstractFieldIntegrator(env->callObjectMethod(this$, mids$[mid_buildIntegrator_78d8a25057f42815], a0.this$, a1.this$, a2.this$));
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
        static PyObject *t_ThreeEighthesFieldIntegratorBuilder_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_ThreeEighthesFieldIntegratorBuilder_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_ThreeEighthesFieldIntegratorBuilder_of_(t_ThreeEighthesFieldIntegratorBuilder *self, PyObject *args);
        static int t_ThreeEighthesFieldIntegratorBuilder_init_(t_ThreeEighthesFieldIntegratorBuilder *self, PyObject *args, PyObject *kwds);
        static PyObject *t_ThreeEighthesFieldIntegratorBuilder_buildIntegrator(t_ThreeEighthesFieldIntegratorBuilder *self, PyObject *args);
        static PyObject *t_ThreeEighthesFieldIntegratorBuilder_get__parameters_(t_ThreeEighthesFieldIntegratorBuilder *self, void *data);
        static PyGetSetDef t_ThreeEighthesFieldIntegratorBuilder__fields_[] = {
          DECLARE_GET_FIELD(t_ThreeEighthesFieldIntegratorBuilder, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_ThreeEighthesFieldIntegratorBuilder__methods_[] = {
          DECLARE_METHOD(t_ThreeEighthesFieldIntegratorBuilder, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_ThreeEighthesFieldIntegratorBuilder, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_ThreeEighthesFieldIntegratorBuilder, of_, METH_VARARGS),
          DECLARE_METHOD(t_ThreeEighthesFieldIntegratorBuilder, buildIntegrator, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(ThreeEighthesFieldIntegratorBuilder)[] = {
          { Py_tp_methods, t_ThreeEighthesFieldIntegratorBuilder__methods_ },
          { Py_tp_init, (void *) t_ThreeEighthesFieldIntegratorBuilder_init_ },
          { Py_tp_getset, t_ThreeEighthesFieldIntegratorBuilder__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(ThreeEighthesFieldIntegratorBuilder)[] = {
          &PY_TYPE_DEF(::org::orekit::propagation::conversion::AbstractFixedStepFieldIntegratorBuilder),
          NULL
        };

        DEFINE_TYPE(ThreeEighthesFieldIntegratorBuilder, t_ThreeEighthesFieldIntegratorBuilder, ThreeEighthesFieldIntegratorBuilder);
        PyObject *t_ThreeEighthesFieldIntegratorBuilder::wrap_Object(const ThreeEighthesFieldIntegratorBuilder& object, PyTypeObject *p0)
        {
          PyObject *obj = t_ThreeEighthesFieldIntegratorBuilder::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_ThreeEighthesFieldIntegratorBuilder *self = (t_ThreeEighthesFieldIntegratorBuilder *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_ThreeEighthesFieldIntegratorBuilder::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_ThreeEighthesFieldIntegratorBuilder::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_ThreeEighthesFieldIntegratorBuilder *self = (t_ThreeEighthesFieldIntegratorBuilder *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_ThreeEighthesFieldIntegratorBuilder::install(PyObject *module)
        {
          installType(&PY_TYPE(ThreeEighthesFieldIntegratorBuilder), &PY_TYPE_DEF(ThreeEighthesFieldIntegratorBuilder), module, "ThreeEighthesFieldIntegratorBuilder", 0);
        }

        void t_ThreeEighthesFieldIntegratorBuilder::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(ThreeEighthesFieldIntegratorBuilder), "class_", make_descriptor(ThreeEighthesFieldIntegratorBuilder::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(ThreeEighthesFieldIntegratorBuilder), "wrapfn_", make_descriptor(t_ThreeEighthesFieldIntegratorBuilder::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(ThreeEighthesFieldIntegratorBuilder), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_ThreeEighthesFieldIntegratorBuilder_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, ThreeEighthesFieldIntegratorBuilder::initializeClass, 1)))
            return NULL;
          return t_ThreeEighthesFieldIntegratorBuilder::wrap_Object(ThreeEighthesFieldIntegratorBuilder(((t_ThreeEighthesFieldIntegratorBuilder *) arg)->object.this$));
        }
        static PyObject *t_ThreeEighthesFieldIntegratorBuilder_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, ThreeEighthesFieldIntegratorBuilder::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_ThreeEighthesFieldIntegratorBuilder_of_(t_ThreeEighthesFieldIntegratorBuilder *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_ThreeEighthesFieldIntegratorBuilder_init_(t_ThreeEighthesFieldIntegratorBuilder *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              jdouble a0;
              ThreeEighthesFieldIntegratorBuilder object((jobject) NULL);

              if (!parseArgs(args, "D", &a0))
              {
                INT_CALL(object = ThreeEighthesFieldIntegratorBuilder(a0));
                self->object = object;
                break;
              }
            }
            {
              ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
              PyTypeObject **p0;
              ThreeEighthesFieldIntegratorBuilder object((jobject) NULL);

              if (!parseArgs(args, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
              {
                INT_CALL(object = ThreeEighthesFieldIntegratorBuilder(a0));
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

        static PyObject *t_ThreeEighthesFieldIntegratorBuilder_buildIntegrator(t_ThreeEighthesFieldIntegratorBuilder *self, PyObject *args)
        {
          ::org::hipparchus::Field a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::orekit::orbits::Orbit a1((jobject) NULL);
          ::org::orekit::orbits::OrbitType a2((jobject) NULL);
          PyTypeObject **p2;
          ::org::hipparchus::ode::AbstractFieldIntegrator result((jobject) NULL);

          if (!parseArgs(args, "KkK", ::org::hipparchus::Field::initializeClass, ::org::orekit::orbits::Orbit::initializeClass, ::org::orekit::orbits::OrbitType::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1, &a2, &p2, ::org::orekit::orbits::t_OrbitType::parameters_))
          {
            OBJ_CALL(result = self->object.buildIntegrator(a0, a1, a2));
            return ::org::hipparchus::ode::t_AbstractFieldIntegrator::wrap_Object(result, self->parameters[0]);
          }

          return callSuper(PY_TYPE(ThreeEighthesFieldIntegratorBuilder), (PyObject *) self, "buildIntegrator", args, 2);
        }
        static PyObject *t_ThreeEighthesFieldIntegratorBuilder_get__parameters_(t_ThreeEighthesFieldIntegratorBuilder *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/gnss/metric/messages/rtcm/ephemeris/Rtcm1020Data.h"
#include "org/orekit/time/TimeScales.h"
#include "org/orekit/propagation/analytical/gnss/data/GLONASSNavigationMessage.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace metric {
        namespace messages {
          namespace rtcm {
            namespace ephemeris {

              ::java::lang::Class *Rtcm1020Data::class$ = NULL;
              jmethodID *Rtcm1020Data::mids$ = NULL;
              bool Rtcm1020Data::live$ = false;

              jclass Rtcm1020Data::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/gnss/metric/messages/rtcm/ephemeris/Rtcm1020Data");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_init$_ff7cb6c242604316] = env->getMethodID(cls, "<init>", "()V");
                  mids$[mid_areAdditionalDataAvailable_eee3de00fe971136] = env->getMethodID(cls, "areAdditionalDataAvailable", "()Z");
                  mids$[mid_getBN_d6ab429752e7c267] = env->getMethodID(cls, "getBN", "()I");
                  mids$[mid_getDeltaTN_9981f74b2d109da6] = env->getMethodID(cls, "getDeltaTN", "()D");
                  mids$[mid_getEn_d6ab429752e7c267] = env->getMethodID(cls, "getEn", "()I");
                  mids$[mid_getFT_d6ab429752e7c267] = env->getMethodID(cls, "getFT", "()I");
                  mids$[mid_getGlonassNavigationMessage_6a460ed0fedcf157] = env->getMethodID(cls, "getGlonassNavigationMessage", "()Lorg/orekit/propagation/analytical/gnss/data/GLONASSNavigationMessage;");
                  mids$[mid_getGlonassNavigationMessage_137117e4fb481233] = env->getMethodID(cls, "getGlonassNavigationMessage", "(Lorg/orekit/time/TimeScales;)Lorg/orekit/propagation/analytical/gnss/data/GLONASSNavigationMessage;");
                  mids$[mid_getLNFifthString_d6ab429752e7c267] = env->getMethodID(cls, "getLNFifthString", "()I");
                  mids$[mid_getLNThirdString_d6ab429752e7c267] = env->getMethodID(cls, "getLNThirdString", "()I");
                  mids$[mid_getM_d6ab429752e7c267] = env->getMethodID(cls, "getM", "()I");
                  mids$[mid_getN4_d6ab429752e7c267] = env->getMethodID(cls, "getN4", "()I");
                  mids$[mid_getNA_d6ab429752e7c267] = env->getMethodID(cls, "getNA", "()I");
                  mids$[mid_getNt_d6ab429752e7c267] = env->getMethodID(cls, "getNt", "()I");
                  mids$[mid_getP_d6ab429752e7c267] = env->getMethodID(cls, "getP", "()I");
                  mids$[mid_getP1_d6ab429752e7c267] = env->getMethodID(cls, "getP1", "()I");
                  mids$[mid_getP2_d6ab429752e7c267] = env->getMethodID(cls, "getP2", "()I");
                  mids$[mid_getP3_d6ab429752e7c267] = env->getMethodID(cls, "getP3", "()I");
                  mids$[mid_getP4_d6ab429752e7c267] = env->getMethodID(cls, "getP4", "()I");
                  mids$[mid_getTauC_9981f74b2d109da6] = env->getMethodID(cls, "getTauC", "()D");
                  mids$[mid_getTauGps_9981f74b2d109da6] = env->getMethodID(cls, "getTauGps", "()D");
                  mids$[mid_getTk_9981f74b2d109da6] = env->getMethodID(cls, "getTk", "()D");
                  mids$[mid_isHealthAvailable_eee3de00fe971136] = env->getMethodID(cls, "isHealthAvailable", "()Z");
                  mids$[mid_setAreAdditionalDataAvailable_b35db77cae58639e] = env->getMethodID(cls, "setAreAdditionalDataAvailable", "(Z)V");
                  mids$[mid_setBN_8fd427ab23829bf5] = env->getMethodID(cls, "setBN", "(I)V");
                  mids$[mid_setDeltaTN_1ad26e8c8c0cd65b] = env->getMethodID(cls, "setDeltaTN", "(D)V");
                  mids$[mid_setEn_8fd427ab23829bf5] = env->getMethodID(cls, "setEn", "(I)V");
                  mids$[mid_setFT_8fd427ab23829bf5] = env->getMethodID(cls, "setFT", "(I)V");
                  mids$[mid_setGlonassNavigationMessage_7b95c4ccc6c58ac9] = env->getMethodID(cls, "setGlonassNavigationMessage", "(Lorg/orekit/propagation/analytical/gnss/data/GLONASSNavigationMessage;)V");
                  mids$[mid_setHealthAvailabilityIndicator_b35db77cae58639e] = env->getMethodID(cls, "setHealthAvailabilityIndicator", "(Z)V");
                  mids$[mid_setLNFifthString_8fd427ab23829bf5] = env->getMethodID(cls, "setLNFifthString", "(I)V");
                  mids$[mid_setLNThirdString_8fd427ab23829bf5] = env->getMethodID(cls, "setLNThirdString", "(I)V");
                  mids$[mid_setM_8fd427ab23829bf5] = env->getMethodID(cls, "setM", "(I)V");
                  mids$[mid_setN4_8fd427ab23829bf5] = env->getMethodID(cls, "setN4", "(I)V");
                  mids$[mid_setNA_8fd427ab23829bf5] = env->getMethodID(cls, "setNA", "(I)V");
                  mids$[mid_setNt_8fd427ab23829bf5] = env->getMethodID(cls, "setNt", "(I)V");
                  mids$[mid_setP_8fd427ab23829bf5] = env->getMethodID(cls, "setP", "(I)V");
                  mids$[mid_setP1_8fd427ab23829bf5] = env->getMethodID(cls, "setP1", "(I)V");
                  mids$[mid_setP2_8fd427ab23829bf5] = env->getMethodID(cls, "setP2", "(I)V");
                  mids$[mid_setP3_8fd427ab23829bf5] = env->getMethodID(cls, "setP3", "(I)V");
                  mids$[mid_setP4_8fd427ab23829bf5] = env->getMethodID(cls, "setP4", "(I)V");
                  mids$[mid_setTauC_1ad26e8c8c0cd65b] = env->getMethodID(cls, "setTauC", "(D)V");
                  mids$[mid_setTauGps_1ad26e8c8c0cd65b] = env->getMethodID(cls, "setTauGps", "(D)V");
                  mids$[mid_setTk_1ad26e8c8c0cd65b] = env->getMethodID(cls, "setTk", "(D)V");

                  class$ = new ::java::lang::Class(cls);
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              Rtcm1020Data::Rtcm1020Data() : ::org::orekit::gnss::metric::messages::rtcm::ephemeris::RtcmEphemerisData(env->newObject(initializeClass, &mids$, mid_init$_ff7cb6c242604316)) {}

              jboolean Rtcm1020Data::areAdditionalDataAvailable() const
              {
                return env->callBooleanMethod(this$, mids$[mid_areAdditionalDataAvailable_eee3de00fe971136]);
              }

              jint Rtcm1020Data::getBN() const
              {
                return env->callIntMethod(this$, mids$[mid_getBN_d6ab429752e7c267]);
              }

              jdouble Rtcm1020Data::getDeltaTN() const
              {
                return env->callDoubleMethod(this$, mids$[mid_getDeltaTN_9981f74b2d109da6]);
              }

              jint Rtcm1020Data::getEn() const
              {
                return env->callIntMethod(this$, mids$[mid_getEn_d6ab429752e7c267]);
              }

              jint Rtcm1020Data::getFT() const
              {
                return env->callIntMethod(this$, mids$[mid_getFT_d6ab429752e7c267]);
              }

              ::org::orekit::propagation::analytical::gnss::data::GLONASSNavigationMessage Rtcm1020Data::getGlonassNavigationMessage() const
              {
                return ::org::orekit::propagation::analytical::gnss::data::GLONASSNavigationMessage(env->callObjectMethod(this$, mids$[mid_getGlonassNavigationMessage_6a460ed0fedcf157]));
              }

              ::org::orekit::propagation::analytical::gnss::data::GLONASSNavigationMessage Rtcm1020Data::getGlonassNavigationMessage(const ::org::orekit::time::TimeScales & a0) const
              {
                return ::org::orekit::propagation::analytical::gnss::data::GLONASSNavigationMessage(env->callObjectMethod(this$, mids$[mid_getGlonassNavigationMessage_137117e4fb481233], a0.this$));
              }

              jint Rtcm1020Data::getLNFifthString() const
              {
                return env->callIntMethod(this$, mids$[mid_getLNFifthString_d6ab429752e7c267]);
              }

              jint Rtcm1020Data::getLNThirdString() const
              {
                return env->callIntMethod(this$, mids$[mid_getLNThirdString_d6ab429752e7c267]);
              }

              jint Rtcm1020Data::getM() const
              {
                return env->callIntMethod(this$, mids$[mid_getM_d6ab429752e7c267]);
              }

              jint Rtcm1020Data::getN4() const
              {
                return env->callIntMethod(this$, mids$[mid_getN4_d6ab429752e7c267]);
              }

              jint Rtcm1020Data::getNA() const
              {
                return env->callIntMethod(this$, mids$[mid_getNA_d6ab429752e7c267]);
              }

              jint Rtcm1020Data::getNt() const
              {
                return env->callIntMethod(this$, mids$[mid_getNt_d6ab429752e7c267]);
              }

              jint Rtcm1020Data::getP() const
              {
                return env->callIntMethod(this$, mids$[mid_getP_d6ab429752e7c267]);
              }

              jint Rtcm1020Data::getP1() const
              {
                return env->callIntMethod(this$, mids$[mid_getP1_d6ab429752e7c267]);
              }

              jint Rtcm1020Data::getP2() const
              {
                return env->callIntMethod(this$, mids$[mid_getP2_d6ab429752e7c267]);
              }

              jint Rtcm1020Data::getP3() const
              {
                return env->callIntMethod(this$, mids$[mid_getP3_d6ab429752e7c267]);
              }

              jint Rtcm1020Data::getP4() const
              {
                return env->callIntMethod(this$, mids$[mid_getP4_d6ab429752e7c267]);
              }

              jdouble Rtcm1020Data::getTauC() const
              {
                return env->callDoubleMethod(this$, mids$[mid_getTauC_9981f74b2d109da6]);
              }

              jdouble Rtcm1020Data::getTauGps() const
              {
                return env->callDoubleMethod(this$, mids$[mid_getTauGps_9981f74b2d109da6]);
              }

              jdouble Rtcm1020Data::getTk() const
              {
                return env->callDoubleMethod(this$, mids$[mid_getTk_9981f74b2d109da6]);
              }

              jboolean Rtcm1020Data::isHealthAvailable() const
              {
                return env->callBooleanMethod(this$, mids$[mid_isHealthAvailable_eee3de00fe971136]);
              }

              void Rtcm1020Data::setAreAdditionalDataAvailable(jboolean a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setAreAdditionalDataAvailable_b35db77cae58639e], a0);
              }

              void Rtcm1020Data::setBN(jint a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setBN_8fd427ab23829bf5], a0);
              }

              void Rtcm1020Data::setDeltaTN(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setDeltaTN_1ad26e8c8c0cd65b], a0);
              }

              void Rtcm1020Data::setEn(jint a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setEn_8fd427ab23829bf5], a0);
              }

              void Rtcm1020Data::setFT(jint a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setFT_8fd427ab23829bf5], a0);
              }

              void Rtcm1020Data::setGlonassNavigationMessage(const ::org::orekit::propagation::analytical::gnss::data::GLONASSNavigationMessage & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setGlonassNavigationMessage_7b95c4ccc6c58ac9], a0.this$);
              }

              void Rtcm1020Data::setHealthAvailabilityIndicator(jboolean a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setHealthAvailabilityIndicator_b35db77cae58639e], a0);
              }

              void Rtcm1020Data::setLNFifthString(jint a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setLNFifthString_8fd427ab23829bf5], a0);
              }

              void Rtcm1020Data::setLNThirdString(jint a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setLNThirdString_8fd427ab23829bf5], a0);
              }

              void Rtcm1020Data::setM(jint a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setM_8fd427ab23829bf5], a0);
              }

              void Rtcm1020Data::setN4(jint a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setN4_8fd427ab23829bf5], a0);
              }

              void Rtcm1020Data::setNA(jint a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setNA_8fd427ab23829bf5], a0);
              }

              void Rtcm1020Data::setNt(jint a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setNt_8fd427ab23829bf5], a0);
              }

              void Rtcm1020Data::setP(jint a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setP_8fd427ab23829bf5], a0);
              }

              void Rtcm1020Data::setP1(jint a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setP1_8fd427ab23829bf5], a0);
              }

              void Rtcm1020Data::setP2(jint a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setP2_8fd427ab23829bf5], a0);
              }

              void Rtcm1020Data::setP3(jint a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setP3_8fd427ab23829bf5], a0);
              }

              void Rtcm1020Data::setP4(jint a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setP4_8fd427ab23829bf5], a0);
              }

              void Rtcm1020Data::setTauC(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setTauC_1ad26e8c8c0cd65b], a0);
              }

              void Rtcm1020Data::setTauGps(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setTauGps_1ad26e8c8c0cd65b], a0);
              }

              void Rtcm1020Data::setTk(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setTk_1ad26e8c8c0cd65b], a0);
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
          namespace rtcm {
            namespace ephemeris {
              static PyObject *t_Rtcm1020Data_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_Rtcm1020Data_instance_(PyTypeObject *type, PyObject *arg);
              static int t_Rtcm1020Data_init_(t_Rtcm1020Data *self, PyObject *args, PyObject *kwds);
              static PyObject *t_Rtcm1020Data_areAdditionalDataAvailable(t_Rtcm1020Data *self);
              static PyObject *t_Rtcm1020Data_getBN(t_Rtcm1020Data *self);
              static PyObject *t_Rtcm1020Data_getDeltaTN(t_Rtcm1020Data *self);
              static PyObject *t_Rtcm1020Data_getEn(t_Rtcm1020Data *self);
              static PyObject *t_Rtcm1020Data_getFT(t_Rtcm1020Data *self);
              static PyObject *t_Rtcm1020Data_getGlonassNavigationMessage(t_Rtcm1020Data *self, PyObject *args);
              static PyObject *t_Rtcm1020Data_getLNFifthString(t_Rtcm1020Data *self);
              static PyObject *t_Rtcm1020Data_getLNThirdString(t_Rtcm1020Data *self);
              static PyObject *t_Rtcm1020Data_getM(t_Rtcm1020Data *self);
              static PyObject *t_Rtcm1020Data_getN4(t_Rtcm1020Data *self);
              static PyObject *t_Rtcm1020Data_getNA(t_Rtcm1020Data *self);
              static PyObject *t_Rtcm1020Data_getNt(t_Rtcm1020Data *self);
              static PyObject *t_Rtcm1020Data_getP(t_Rtcm1020Data *self);
              static PyObject *t_Rtcm1020Data_getP1(t_Rtcm1020Data *self);
              static PyObject *t_Rtcm1020Data_getP2(t_Rtcm1020Data *self);
              static PyObject *t_Rtcm1020Data_getP3(t_Rtcm1020Data *self);
              static PyObject *t_Rtcm1020Data_getP4(t_Rtcm1020Data *self);
              static PyObject *t_Rtcm1020Data_getTauC(t_Rtcm1020Data *self);
              static PyObject *t_Rtcm1020Data_getTauGps(t_Rtcm1020Data *self);
              static PyObject *t_Rtcm1020Data_getTk(t_Rtcm1020Data *self);
              static PyObject *t_Rtcm1020Data_isHealthAvailable(t_Rtcm1020Data *self);
              static PyObject *t_Rtcm1020Data_setAreAdditionalDataAvailable(t_Rtcm1020Data *self, PyObject *arg);
              static PyObject *t_Rtcm1020Data_setBN(t_Rtcm1020Data *self, PyObject *arg);
              static PyObject *t_Rtcm1020Data_setDeltaTN(t_Rtcm1020Data *self, PyObject *arg);
              static PyObject *t_Rtcm1020Data_setEn(t_Rtcm1020Data *self, PyObject *arg);
              static PyObject *t_Rtcm1020Data_setFT(t_Rtcm1020Data *self, PyObject *arg);
              static PyObject *t_Rtcm1020Data_setGlonassNavigationMessage(t_Rtcm1020Data *self, PyObject *arg);
              static PyObject *t_Rtcm1020Data_setHealthAvailabilityIndicator(t_Rtcm1020Data *self, PyObject *arg);
              static PyObject *t_Rtcm1020Data_setLNFifthString(t_Rtcm1020Data *self, PyObject *arg);
              static PyObject *t_Rtcm1020Data_setLNThirdString(t_Rtcm1020Data *self, PyObject *arg);
              static PyObject *t_Rtcm1020Data_setM(t_Rtcm1020Data *self, PyObject *arg);
              static PyObject *t_Rtcm1020Data_setN4(t_Rtcm1020Data *self, PyObject *arg);
              static PyObject *t_Rtcm1020Data_setNA(t_Rtcm1020Data *self, PyObject *arg);
              static PyObject *t_Rtcm1020Data_setNt(t_Rtcm1020Data *self, PyObject *arg);
              static PyObject *t_Rtcm1020Data_setP(t_Rtcm1020Data *self, PyObject *arg);
              static PyObject *t_Rtcm1020Data_setP1(t_Rtcm1020Data *self, PyObject *arg);
              static PyObject *t_Rtcm1020Data_setP2(t_Rtcm1020Data *self, PyObject *arg);
              static PyObject *t_Rtcm1020Data_setP3(t_Rtcm1020Data *self, PyObject *arg);
              static PyObject *t_Rtcm1020Data_setP4(t_Rtcm1020Data *self, PyObject *arg);
              static PyObject *t_Rtcm1020Data_setTauC(t_Rtcm1020Data *self, PyObject *arg);
              static PyObject *t_Rtcm1020Data_setTauGps(t_Rtcm1020Data *self, PyObject *arg);
              static PyObject *t_Rtcm1020Data_setTk(t_Rtcm1020Data *self, PyObject *arg);
              static PyObject *t_Rtcm1020Data_get__bN(t_Rtcm1020Data *self, void *data);
              static int t_Rtcm1020Data_set__bN(t_Rtcm1020Data *self, PyObject *arg, void *data);
              static PyObject *t_Rtcm1020Data_get__deltaTN(t_Rtcm1020Data *self, void *data);
              static int t_Rtcm1020Data_set__deltaTN(t_Rtcm1020Data *self, PyObject *arg, void *data);
              static PyObject *t_Rtcm1020Data_get__en(t_Rtcm1020Data *self, void *data);
              static int t_Rtcm1020Data_set__en(t_Rtcm1020Data *self, PyObject *arg, void *data);
              static PyObject *t_Rtcm1020Data_get__fT(t_Rtcm1020Data *self, void *data);
              static int t_Rtcm1020Data_set__fT(t_Rtcm1020Data *self, PyObject *arg, void *data);
              static PyObject *t_Rtcm1020Data_get__glonassNavigationMessage(t_Rtcm1020Data *self, void *data);
              static int t_Rtcm1020Data_set__glonassNavigationMessage(t_Rtcm1020Data *self, PyObject *arg, void *data);
              static int t_Rtcm1020Data_set__healthAvailabilityIndicator(t_Rtcm1020Data *self, PyObject *arg, void *data);
              static PyObject *t_Rtcm1020Data_get__healthAvailable(t_Rtcm1020Data *self, void *data);
              static PyObject *t_Rtcm1020Data_get__lNFifthString(t_Rtcm1020Data *self, void *data);
              static int t_Rtcm1020Data_set__lNFifthString(t_Rtcm1020Data *self, PyObject *arg, void *data);
              static PyObject *t_Rtcm1020Data_get__lNThirdString(t_Rtcm1020Data *self, void *data);
              static int t_Rtcm1020Data_set__lNThirdString(t_Rtcm1020Data *self, PyObject *arg, void *data);
              static PyObject *t_Rtcm1020Data_get__m(t_Rtcm1020Data *self, void *data);
              static int t_Rtcm1020Data_set__m(t_Rtcm1020Data *self, PyObject *arg, void *data);
              static PyObject *t_Rtcm1020Data_get__n4(t_Rtcm1020Data *self, void *data);
              static int t_Rtcm1020Data_set__n4(t_Rtcm1020Data *self, PyObject *arg, void *data);
              static PyObject *t_Rtcm1020Data_get__nA(t_Rtcm1020Data *self, void *data);
              static int t_Rtcm1020Data_set__nA(t_Rtcm1020Data *self, PyObject *arg, void *data);
              static PyObject *t_Rtcm1020Data_get__nt(t_Rtcm1020Data *self, void *data);
              static int t_Rtcm1020Data_set__nt(t_Rtcm1020Data *self, PyObject *arg, void *data);
              static PyObject *t_Rtcm1020Data_get__p(t_Rtcm1020Data *self, void *data);
              static int t_Rtcm1020Data_set__p(t_Rtcm1020Data *self, PyObject *arg, void *data);
              static PyObject *t_Rtcm1020Data_get__p1(t_Rtcm1020Data *self, void *data);
              static int t_Rtcm1020Data_set__p1(t_Rtcm1020Data *self, PyObject *arg, void *data);
              static PyObject *t_Rtcm1020Data_get__p2(t_Rtcm1020Data *self, void *data);
              static int t_Rtcm1020Data_set__p2(t_Rtcm1020Data *self, PyObject *arg, void *data);
              static PyObject *t_Rtcm1020Data_get__p3(t_Rtcm1020Data *self, void *data);
              static int t_Rtcm1020Data_set__p3(t_Rtcm1020Data *self, PyObject *arg, void *data);
              static PyObject *t_Rtcm1020Data_get__p4(t_Rtcm1020Data *self, void *data);
              static int t_Rtcm1020Data_set__p4(t_Rtcm1020Data *self, PyObject *arg, void *data);
              static PyObject *t_Rtcm1020Data_get__tauC(t_Rtcm1020Data *self, void *data);
              static int t_Rtcm1020Data_set__tauC(t_Rtcm1020Data *self, PyObject *arg, void *data);
              static PyObject *t_Rtcm1020Data_get__tauGps(t_Rtcm1020Data *self, void *data);
              static int t_Rtcm1020Data_set__tauGps(t_Rtcm1020Data *self, PyObject *arg, void *data);
              static PyObject *t_Rtcm1020Data_get__tk(t_Rtcm1020Data *self, void *data);
              static int t_Rtcm1020Data_set__tk(t_Rtcm1020Data *self, PyObject *arg, void *data);
              static PyGetSetDef t_Rtcm1020Data__fields_[] = {
                DECLARE_GETSET_FIELD(t_Rtcm1020Data, bN),
                DECLARE_GETSET_FIELD(t_Rtcm1020Data, deltaTN),
                DECLARE_GETSET_FIELD(t_Rtcm1020Data, en),
                DECLARE_GETSET_FIELD(t_Rtcm1020Data, fT),
                DECLARE_GETSET_FIELD(t_Rtcm1020Data, glonassNavigationMessage),
                DECLARE_SET_FIELD(t_Rtcm1020Data, healthAvailabilityIndicator),
                DECLARE_GET_FIELD(t_Rtcm1020Data, healthAvailable),
                DECLARE_GETSET_FIELD(t_Rtcm1020Data, lNFifthString),
                DECLARE_GETSET_FIELD(t_Rtcm1020Data, lNThirdString),
                DECLARE_GETSET_FIELD(t_Rtcm1020Data, m),
                DECLARE_GETSET_FIELD(t_Rtcm1020Data, n4),
                DECLARE_GETSET_FIELD(t_Rtcm1020Data, nA),
                DECLARE_GETSET_FIELD(t_Rtcm1020Data, nt),
                DECLARE_GETSET_FIELD(t_Rtcm1020Data, p),
                DECLARE_GETSET_FIELD(t_Rtcm1020Data, p1),
                DECLARE_GETSET_FIELD(t_Rtcm1020Data, p2),
                DECLARE_GETSET_FIELD(t_Rtcm1020Data, p3),
                DECLARE_GETSET_FIELD(t_Rtcm1020Data, p4),
                DECLARE_GETSET_FIELD(t_Rtcm1020Data, tauC),
                DECLARE_GETSET_FIELD(t_Rtcm1020Data, tauGps),
                DECLARE_GETSET_FIELD(t_Rtcm1020Data, tk),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_Rtcm1020Data__methods_[] = {
                DECLARE_METHOD(t_Rtcm1020Data, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_Rtcm1020Data, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_Rtcm1020Data, areAdditionalDataAvailable, METH_NOARGS),
                DECLARE_METHOD(t_Rtcm1020Data, getBN, METH_NOARGS),
                DECLARE_METHOD(t_Rtcm1020Data, getDeltaTN, METH_NOARGS),
                DECLARE_METHOD(t_Rtcm1020Data, getEn, METH_NOARGS),
                DECLARE_METHOD(t_Rtcm1020Data, getFT, METH_NOARGS),
                DECLARE_METHOD(t_Rtcm1020Data, getGlonassNavigationMessage, METH_VARARGS),
                DECLARE_METHOD(t_Rtcm1020Data, getLNFifthString, METH_NOARGS),
                DECLARE_METHOD(t_Rtcm1020Data, getLNThirdString, METH_NOARGS),
                DECLARE_METHOD(t_Rtcm1020Data, getM, METH_NOARGS),
                DECLARE_METHOD(t_Rtcm1020Data, getN4, METH_NOARGS),
                DECLARE_METHOD(t_Rtcm1020Data, getNA, METH_NOARGS),
                DECLARE_METHOD(t_Rtcm1020Data, getNt, METH_NOARGS),
                DECLARE_METHOD(t_Rtcm1020Data, getP, METH_NOARGS),
                DECLARE_METHOD(t_Rtcm1020Data, getP1, METH_NOARGS),
                DECLARE_METHOD(t_Rtcm1020Data, getP2, METH_NOARGS),
                DECLARE_METHOD(t_Rtcm1020Data, getP3, METH_NOARGS),
                DECLARE_METHOD(t_Rtcm1020Data, getP4, METH_NOARGS),
                DECLARE_METHOD(t_Rtcm1020Data, getTauC, METH_NOARGS),
                DECLARE_METHOD(t_Rtcm1020Data, getTauGps, METH_NOARGS),
                DECLARE_METHOD(t_Rtcm1020Data, getTk, METH_NOARGS),
                DECLARE_METHOD(t_Rtcm1020Data, isHealthAvailable, METH_NOARGS),
                DECLARE_METHOD(t_Rtcm1020Data, setAreAdditionalDataAvailable, METH_O),
                DECLARE_METHOD(t_Rtcm1020Data, setBN, METH_O),
                DECLARE_METHOD(t_Rtcm1020Data, setDeltaTN, METH_O),
                DECLARE_METHOD(t_Rtcm1020Data, setEn, METH_O),
                DECLARE_METHOD(t_Rtcm1020Data, setFT, METH_O),
                DECLARE_METHOD(t_Rtcm1020Data, setGlonassNavigationMessage, METH_O),
                DECLARE_METHOD(t_Rtcm1020Data, setHealthAvailabilityIndicator, METH_O),
                DECLARE_METHOD(t_Rtcm1020Data, setLNFifthString, METH_O),
                DECLARE_METHOD(t_Rtcm1020Data, setLNThirdString, METH_O),
                DECLARE_METHOD(t_Rtcm1020Data, setM, METH_O),
                DECLARE_METHOD(t_Rtcm1020Data, setN4, METH_O),
                DECLARE_METHOD(t_Rtcm1020Data, setNA, METH_O),
                DECLARE_METHOD(t_Rtcm1020Data, setNt, METH_O),
                DECLARE_METHOD(t_Rtcm1020Data, setP, METH_O),
                DECLARE_METHOD(t_Rtcm1020Data, setP1, METH_O),
                DECLARE_METHOD(t_Rtcm1020Data, setP2, METH_O),
                DECLARE_METHOD(t_Rtcm1020Data, setP3, METH_O),
                DECLARE_METHOD(t_Rtcm1020Data, setP4, METH_O),
                DECLARE_METHOD(t_Rtcm1020Data, setTauC, METH_O),
                DECLARE_METHOD(t_Rtcm1020Data, setTauGps, METH_O),
                DECLARE_METHOD(t_Rtcm1020Data, setTk, METH_O),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(Rtcm1020Data)[] = {
                { Py_tp_methods, t_Rtcm1020Data__methods_ },
                { Py_tp_init, (void *) t_Rtcm1020Data_init_ },
                { Py_tp_getset, t_Rtcm1020Data__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(Rtcm1020Data)[] = {
                &PY_TYPE_DEF(::org::orekit::gnss::metric::messages::rtcm::ephemeris::RtcmEphemerisData),
                NULL
              };

              DEFINE_TYPE(Rtcm1020Data, t_Rtcm1020Data, Rtcm1020Data);

              void t_Rtcm1020Data::install(PyObject *module)
              {
                installType(&PY_TYPE(Rtcm1020Data), &PY_TYPE_DEF(Rtcm1020Data), module, "Rtcm1020Data", 0);
              }

              void t_Rtcm1020Data::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(Rtcm1020Data), "class_", make_descriptor(Rtcm1020Data::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(Rtcm1020Data), "wrapfn_", make_descriptor(t_Rtcm1020Data::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(Rtcm1020Data), "boxfn_", make_descriptor(boxObject));
              }

              static PyObject *t_Rtcm1020Data_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, Rtcm1020Data::initializeClass, 1)))
                  return NULL;
                return t_Rtcm1020Data::wrap_Object(Rtcm1020Data(((t_Rtcm1020Data *) arg)->object.this$));
              }
              static PyObject *t_Rtcm1020Data_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, Rtcm1020Data::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static int t_Rtcm1020Data_init_(t_Rtcm1020Data *self, PyObject *args, PyObject *kwds)
              {
                Rtcm1020Data object((jobject) NULL);

                INT_CALL(object = Rtcm1020Data());
                self->object = object;

                return 0;
              }

              static PyObject *t_Rtcm1020Data_areAdditionalDataAvailable(t_Rtcm1020Data *self)
              {
                jboolean result;
                OBJ_CALL(result = self->object.areAdditionalDataAvailable());
                Py_RETURN_BOOL(result);
              }

              static PyObject *t_Rtcm1020Data_getBN(t_Rtcm1020Data *self)
              {
                jint result;
                OBJ_CALL(result = self->object.getBN());
                return PyLong_FromLong((long) result);
              }

              static PyObject *t_Rtcm1020Data_getDeltaTN(t_Rtcm1020Data *self)
              {
                jdouble result;
                OBJ_CALL(result = self->object.getDeltaTN());
                return PyFloat_FromDouble((double) result);
              }

              static PyObject *t_Rtcm1020Data_getEn(t_Rtcm1020Data *self)
              {
                jint result;
                OBJ_CALL(result = self->object.getEn());
                return PyLong_FromLong((long) result);
              }

              static PyObject *t_Rtcm1020Data_getFT(t_Rtcm1020Data *self)
              {
                jint result;
                OBJ_CALL(result = self->object.getFT());
                return PyLong_FromLong((long) result);
              }

              static PyObject *t_Rtcm1020Data_getGlonassNavigationMessage(t_Rtcm1020Data *self, PyObject *args)
              {
                switch (PyTuple_GET_SIZE(args)) {
                 case 0:
                  {
                    ::org::orekit::propagation::analytical::gnss::data::GLONASSNavigationMessage result((jobject) NULL);
                    OBJ_CALL(result = self->object.getGlonassNavigationMessage());
                    return ::org::orekit::propagation::analytical::gnss::data::t_GLONASSNavigationMessage::wrap_Object(result);
                  }
                  break;
                 case 1:
                  {
                    ::org::orekit::time::TimeScales a0((jobject) NULL);
                    ::org::orekit::propagation::analytical::gnss::data::GLONASSNavigationMessage result((jobject) NULL);

                    if (!parseArgs(args, "k", ::org::orekit::time::TimeScales::initializeClass, &a0))
                    {
                      OBJ_CALL(result = self->object.getGlonassNavigationMessage(a0));
                      return ::org::orekit::propagation::analytical::gnss::data::t_GLONASSNavigationMessage::wrap_Object(result);
                    }
                  }
                }

                PyErr_SetArgsError((PyObject *) self, "getGlonassNavigationMessage", args);
                return NULL;
              }

              static PyObject *t_Rtcm1020Data_getLNFifthString(t_Rtcm1020Data *self)
              {
                jint result;
                OBJ_CALL(result = self->object.getLNFifthString());
                return PyLong_FromLong((long) result);
              }

              static PyObject *t_Rtcm1020Data_getLNThirdString(t_Rtcm1020Data *self)
              {
                jint result;
                OBJ_CALL(result = self->object.getLNThirdString());
                return PyLong_FromLong((long) result);
              }

              static PyObject *t_Rtcm1020Data_getM(t_Rtcm1020Data *self)
              {
                jint result;
                OBJ_CALL(result = self->object.getM());
                return PyLong_FromLong((long) result);
              }

              static PyObject *t_Rtcm1020Data_getN4(t_Rtcm1020Data *self)
              {
                jint result;
                OBJ_CALL(result = self->object.getN4());
                return PyLong_FromLong((long) result);
              }

              static PyObject *t_Rtcm1020Data_getNA(t_Rtcm1020Data *self)
              {
                jint result;
                OBJ_CALL(result = self->object.getNA());
                return PyLong_FromLong((long) result);
              }

              static PyObject *t_Rtcm1020Data_getNt(t_Rtcm1020Data *self)
              {
                jint result;
                OBJ_CALL(result = self->object.getNt());
                return PyLong_FromLong((long) result);
              }

              static PyObject *t_Rtcm1020Data_getP(t_Rtcm1020Data *self)
              {
                jint result;
                OBJ_CALL(result = self->object.getP());
                return PyLong_FromLong((long) result);
              }

              static PyObject *t_Rtcm1020Data_getP1(t_Rtcm1020Data *self)
              {
                jint result;
                OBJ_CALL(result = self->object.getP1());
                return PyLong_FromLong((long) result);
              }

              static PyObject *t_Rtcm1020Data_getP2(t_Rtcm1020Data *self)
              {
                jint result;
                OBJ_CALL(result = self->object.getP2());
                return PyLong_FromLong((long) result);
              }

              static PyObject *t_Rtcm1020Data_getP3(t_Rtcm1020Data *self)
              {
                jint result;
                OBJ_CALL(result = self->object.getP3());
                return PyLong_FromLong((long) result);
              }

              static PyObject *t_Rtcm1020Data_getP4(t_Rtcm1020Data *self)
              {
                jint result;
                OBJ_CALL(result = self->object.getP4());
                return PyLong_FromLong((long) result);
              }

              static PyObject *t_Rtcm1020Data_getTauC(t_Rtcm1020Data *self)
              {
                jdouble result;
                OBJ_CALL(result = self->object.getTauC());
                return PyFloat_FromDouble((double) result);
              }

              static PyObject *t_Rtcm1020Data_getTauGps(t_Rtcm1020Data *self)
              {
                jdouble result;
                OBJ_CALL(result = self->object.getTauGps());
                return PyFloat_FromDouble((double) result);
              }

              static PyObject *t_Rtcm1020Data_getTk(t_Rtcm1020Data *self)
              {
                jdouble result;
                OBJ_CALL(result = self->object.getTk());
                return PyFloat_FromDouble((double) result);
              }

              static PyObject *t_Rtcm1020Data_isHealthAvailable(t_Rtcm1020Data *self)
              {
                jboolean result;
                OBJ_CALL(result = self->object.isHealthAvailable());
                Py_RETURN_BOOL(result);
              }

              static PyObject *t_Rtcm1020Data_setAreAdditionalDataAvailable(t_Rtcm1020Data *self, PyObject *arg)
              {
                jboolean a0;

                if (!parseArg(arg, "Z", &a0))
                {
                  OBJ_CALL(self->object.setAreAdditionalDataAvailable(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setAreAdditionalDataAvailable", arg);
                return NULL;
              }

              static PyObject *t_Rtcm1020Data_setBN(t_Rtcm1020Data *self, PyObject *arg)
              {
                jint a0;

                if (!parseArg(arg, "I", &a0))
                {
                  OBJ_CALL(self->object.setBN(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setBN", arg);
                return NULL;
              }

              static PyObject *t_Rtcm1020Data_setDeltaTN(t_Rtcm1020Data *self, PyObject *arg)
              {
                jdouble a0;

                if (!parseArg(arg, "D", &a0))
                {
                  OBJ_CALL(self->object.setDeltaTN(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setDeltaTN", arg);
                return NULL;
              }

              static PyObject *t_Rtcm1020Data_setEn(t_Rtcm1020Data *self, PyObject *arg)
              {
                jint a0;

                if (!parseArg(arg, "I", &a0))
                {
                  OBJ_CALL(self->object.setEn(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setEn", arg);
                return NULL;
              }

              static PyObject *t_Rtcm1020Data_setFT(t_Rtcm1020Data *self, PyObject *arg)
              {
                jint a0;

                if (!parseArg(arg, "I", &a0))
                {
                  OBJ_CALL(self->object.setFT(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setFT", arg);
                return NULL;
              }

              static PyObject *t_Rtcm1020Data_setGlonassNavigationMessage(t_Rtcm1020Data *self, PyObject *arg)
              {
                ::org::orekit::propagation::analytical::gnss::data::GLONASSNavigationMessage a0((jobject) NULL);

                if (!parseArg(arg, "k", ::org::orekit::propagation::analytical::gnss::data::GLONASSNavigationMessage::initializeClass, &a0))
                {
                  OBJ_CALL(self->object.setGlonassNavigationMessage(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setGlonassNavigationMessage", arg);
                return NULL;
              }

              static PyObject *t_Rtcm1020Data_setHealthAvailabilityIndicator(t_Rtcm1020Data *self, PyObject *arg)
              {
                jboolean a0;

                if (!parseArg(arg, "Z", &a0))
                {
                  OBJ_CALL(self->object.setHealthAvailabilityIndicator(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setHealthAvailabilityIndicator", arg);
                return NULL;
              }

              static PyObject *t_Rtcm1020Data_setLNFifthString(t_Rtcm1020Data *self, PyObject *arg)
              {
                jint a0;

                if (!parseArg(arg, "I", &a0))
                {
                  OBJ_CALL(self->object.setLNFifthString(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setLNFifthString", arg);
                return NULL;
              }

              static PyObject *t_Rtcm1020Data_setLNThirdString(t_Rtcm1020Data *self, PyObject *arg)
              {
                jint a0;

                if (!parseArg(arg, "I", &a0))
                {
                  OBJ_CALL(self->object.setLNThirdString(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setLNThirdString", arg);
                return NULL;
              }

              static PyObject *t_Rtcm1020Data_setM(t_Rtcm1020Data *self, PyObject *arg)
              {
                jint a0;

                if (!parseArg(arg, "I", &a0))
                {
                  OBJ_CALL(self->object.setM(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setM", arg);
                return NULL;
              }

              static PyObject *t_Rtcm1020Data_setN4(t_Rtcm1020Data *self, PyObject *arg)
              {
                jint a0;

                if (!parseArg(arg, "I", &a0))
                {
                  OBJ_CALL(self->object.setN4(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setN4", arg);
                return NULL;
              }

              static PyObject *t_Rtcm1020Data_setNA(t_Rtcm1020Data *self, PyObject *arg)
              {
                jint a0;

                if (!parseArg(arg, "I", &a0))
                {
                  OBJ_CALL(self->object.setNA(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setNA", arg);
                return NULL;
              }

              static PyObject *t_Rtcm1020Data_setNt(t_Rtcm1020Data *self, PyObject *arg)
              {
                jint a0;

                if (!parseArg(arg, "I", &a0))
                {
                  OBJ_CALL(self->object.setNt(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setNt", arg);
                return NULL;
              }

              static PyObject *t_Rtcm1020Data_setP(t_Rtcm1020Data *self, PyObject *arg)
              {
                jint a0;

                if (!parseArg(arg, "I", &a0))
                {
                  OBJ_CALL(self->object.setP(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setP", arg);
                return NULL;
              }

              static PyObject *t_Rtcm1020Data_setP1(t_Rtcm1020Data *self, PyObject *arg)
              {
                jint a0;

                if (!parseArg(arg, "I", &a0))
                {
                  OBJ_CALL(self->object.setP1(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setP1", arg);
                return NULL;
              }

              static PyObject *t_Rtcm1020Data_setP2(t_Rtcm1020Data *self, PyObject *arg)
              {
                jint a0;

                if (!parseArg(arg, "I", &a0))
                {
                  OBJ_CALL(self->object.setP2(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setP2", arg);
                return NULL;
              }

              static PyObject *t_Rtcm1020Data_setP3(t_Rtcm1020Data *self, PyObject *arg)
              {
                jint a0;

                if (!parseArg(arg, "I", &a0))
                {
                  OBJ_CALL(self->object.setP3(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setP3", arg);
                return NULL;
              }

              static PyObject *t_Rtcm1020Data_setP4(t_Rtcm1020Data *self, PyObject *arg)
              {
                jint a0;

                if (!parseArg(arg, "I", &a0))
                {
                  OBJ_CALL(self->object.setP4(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setP4", arg);
                return NULL;
              }

              static PyObject *t_Rtcm1020Data_setTauC(t_Rtcm1020Data *self, PyObject *arg)
              {
                jdouble a0;

                if (!parseArg(arg, "D", &a0))
                {
                  OBJ_CALL(self->object.setTauC(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setTauC", arg);
                return NULL;
              }

              static PyObject *t_Rtcm1020Data_setTauGps(t_Rtcm1020Data *self, PyObject *arg)
              {
                jdouble a0;

                if (!parseArg(arg, "D", &a0))
                {
                  OBJ_CALL(self->object.setTauGps(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setTauGps", arg);
                return NULL;
              }

              static PyObject *t_Rtcm1020Data_setTk(t_Rtcm1020Data *self, PyObject *arg)
              {
                jdouble a0;

                if (!parseArg(arg, "D", &a0))
                {
                  OBJ_CALL(self->object.setTk(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setTk", arg);
                return NULL;
              }

              static PyObject *t_Rtcm1020Data_get__bN(t_Rtcm1020Data *self, void *data)
              {
                jint value;
                OBJ_CALL(value = self->object.getBN());
                return PyLong_FromLong((long) value);
              }
              static int t_Rtcm1020Data_set__bN(t_Rtcm1020Data *self, PyObject *arg, void *data)
              {
                {
                  jint value;
                  if (!parseArg(arg, "I", &value))
                  {
                    INT_CALL(self->object.setBN(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "bN", arg);
                return -1;
              }

              static PyObject *t_Rtcm1020Data_get__deltaTN(t_Rtcm1020Data *self, void *data)
              {
                jdouble value;
                OBJ_CALL(value = self->object.getDeltaTN());
                return PyFloat_FromDouble((double) value);
              }
              static int t_Rtcm1020Data_set__deltaTN(t_Rtcm1020Data *self, PyObject *arg, void *data)
              {
                {
                  jdouble value;
                  if (!parseArg(arg, "D", &value))
                  {
                    INT_CALL(self->object.setDeltaTN(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "deltaTN", arg);
                return -1;
              }

              static PyObject *t_Rtcm1020Data_get__en(t_Rtcm1020Data *self, void *data)
              {
                jint value;
                OBJ_CALL(value = self->object.getEn());
                return PyLong_FromLong((long) value);
              }
              static int t_Rtcm1020Data_set__en(t_Rtcm1020Data *self, PyObject *arg, void *data)
              {
                {
                  jint value;
                  if (!parseArg(arg, "I", &value))
                  {
                    INT_CALL(self->object.setEn(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "en", arg);
                return -1;
              }

              static PyObject *t_Rtcm1020Data_get__fT(t_Rtcm1020Data *self, void *data)
              {
                jint value;
                OBJ_CALL(value = self->object.getFT());
                return PyLong_FromLong((long) value);
              }
              static int t_Rtcm1020Data_set__fT(t_Rtcm1020Data *self, PyObject *arg, void *data)
              {
                {
                  jint value;
                  if (!parseArg(arg, "I", &value))
                  {
                    INT_CALL(self->object.setFT(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "fT", arg);
                return -1;
              }

              static PyObject *t_Rtcm1020Data_get__glonassNavigationMessage(t_Rtcm1020Data *self, void *data)
              {
                ::org::orekit::propagation::analytical::gnss::data::GLONASSNavigationMessage value((jobject) NULL);
                OBJ_CALL(value = self->object.getGlonassNavigationMessage());
                return ::org::orekit::propagation::analytical::gnss::data::t_GLONASSNavigationMessage::wrap_Object(value);
              }
              static int t_Rtcm1020Data_set__glonassNavigationMessage(t_Rtcm1020Data *self, PyObject *arg, void *data)
              {
                {
                  ::org::orekit::propagation::analytical::gnss::data::GLONASSNavigationMessage value((jobject) NULL);
                  if (!parseArg(arg, "k", ::org::orekit::propagation::analytical::gnss::data::GLONASSNavigationMessage::initializeClass, &value))
                  {
                    INT_CALL(self->object.setGlonassNavigationMessage(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "glonassNavigationMessage", arg);
                return -1;
              }

              static int t_Rtcm1020Data_set__healthAvailabilityIndicator(t_Rtcm1020Data *self, PyObject *arg, void *data)
              {
                {
                  jboolean value;
                  if (!parseArg(arg, "Z", &value))
                  {
                    INT_CALL(self->object.setHealthAvailabilityIndicator(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "healthAvailabilityIndicator", arg);
                return -1;
              }

              static PyObject *t_Rtcm1020Data_get__healthAvailable(t_Rtcm1020Data *self, void *data)
              {
                jboolean value;
                OBJ_CALL(value = self->object.isHealthAvailable());
                Py_RETURN_BOOL(value);
              }

              static PyObject *t_Rtcm1020Data_get__lNFifthString(t_Rtcm1020Data *self, void *data)
              {
                jint value;
                OBJ_CALL(value = self->object.getLNFifthString());
                return PyLong_FromLong((long) value);
              }
              static int t_Rtcm1020Data_set__lNFifthString(t_Rtcm1020Data *self, PyObject *arg, void *data)
              {
                {
                  jint value;
                  if (!parseArg(arg, "I", &value))
                  {
                    INT_CALL(self->object.setLNFifthString(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "lNFifthString", arg);
                return -1;
              }

              static PyObject *t_Rtcm1020Data_get__lNThirdString(t_Rtcm1020Data *self, void *data)
              {
                jint value;
                OBJ_CALL(value = self->object.getLNThirdString());
                return PyLong_FromLong((long) value);
              }
              static int t_Rtcm1020Data_set__lNThirdString(t_Rtcm1020Data *self, PyObject *arg, void *data)
              {
                {
                  jint value;
                  if (!parseArg(arg, "I", &value))
                  {
                    INT_CALL(self->object.setLNThirdString(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "lNThirdString", arg);
                return -1;
              }

              static PyObject *t_Rtcm1020Data_get__m(t_Rtcm1020Data *self, void *data)
              {
                jint value;
                OBJ_CALL(value = self->object.getM());
                return PyLong_FromLong((long) value);
              }
              static int t_Rtcm1020Data_set__m(t_Rtcm1020Data *self, PyObject *arg, void *data)
              {
                {
                  jint value;
                  if (!parseArg(arg, "I", &value))
                  {
                    INT_CALL(self->object.setM(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "m", arg);
                return -1;
              }

              static PyObject *t_Rtcm1020Data_get__n4(t_Rtcm1020Data *self, void *data)
              {
                jint value;
                OBJ_CALL(value = self->object.getN4());
                return PyLong_FromLong((long) value);
              }
              static int t_Rtcm1020Data_set__n4(t_Rtcm1020Data *self, PyObject *arg, void *data)
              {
                {
                  jint value;
                  if (!parseArg(arg, "I", &value))
                  {
                    INT_CALL(self->object.setN4(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "n4", arg);
                return -1;
              }

              static PyObject *t_Rtcm1020Data_get__nA(t_Rtcm1020Data *self, void *data)
              {
                jint value;
                OBJ_CALL(value = self->object.getNA());
                return PyLong_FromLong((long) value);
              }
              static int t_Rtcm1020Data_set__nA(t_Rtcm1020Data *self, PyObject *arg, void *data)
              {
                {
                  jint value;
                  if (!parseArg(arg, "I", &value))
                  {
                    INT_CALL(self->object.setNA(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "nA", arg);
                return -1;
              }

              static PyObject *t_Rtcm1020Data_get__nt(t_Rtcm1020Data *self, void *data)
              {
                jint value;
                OBJ_CALL(value = self->object.getNt());
                return PyLong_FromLong((long) value);
              }
              static int t_Rtcm1020Data_set__nt(t_Rtcm1020Data *self, PyObject *arg, void *data)
              {
                {
                  jint value;
                  if (!parseArg(arg, "I", &value))
                  {
                    INT_CALL(self->object.setNt(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "nt", arg);
                return -1;
              }

              static PyObject *t_Rtcm1020Data_get__p(t_Rtcm1020Data *self, void *data)
              {
                jint value;
                OBJ_CALL(value = self->object.getP());
                return PyLong_FromLong((long) value);
              }
              static int t_Rtcm1020Data_set__p(t_Rtcm1020Data *self, PyObject *arg, void *data)
              {
                {
                  jint value;
                  if (!parseArg(arg, "I", &value))
                  {
                    INT_CALL(self->object.setP(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "p", arg);
                return -1;
              }

              static PyObject *t_Rtcm1020Data_get__p1(t_Rtcm1020Data *self, void *data)
              {
                jint value;
                OBJ_CALL(value = self->object.getP1());
                return PyLong_FromLong((long) value);
              }
              static int t_Rtcm1020Data_set__p1(t_Rtcm1020Data *self, PyObject *arg, void *data)
              {
                {
                  jint value;
                  if (!parseArg(arg, "I", &value))
                  {
                    INT_CALL(self->object.setP1(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "p1", arg);
                return -1;
              }

              static PyObject *t_Rtcm1020Data_get__p2(t_Rtcm1020Data *self, void *data)
              {
                jint value;
                OBJ_CALL(value = self->object.getP2());
                return PyLong_FromLong((long) value);
              }
              static int t_Rtcm1020Data_set__p2(t_Rtcm1020Data *self, PyObject *arg, void *data)
              {
                {
                  jint value;
                  if (!parseArg(arg, "I", &value))
                  {
                    INT_CALL(self->object.setP2(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "p2", arg);
                return -1;
              }

              static PyObject *t_Rtcm1020Data_get__p3(t_Rtcm1020Data *self, void *data)
              {
                jint value;
                OBJ_CALL(value = self->object.getP3());
                return PyLong_FromLong((long) value);
              }
              static int t_Rtcm1020Data_set__p3(t_Rtcm1020Data *self, PyObject *arg, void *data)
              {
                {
                  jint value;
                  if (!parseArg(arg, "I", &value))
                  {
                    INT_CALL(self->object.setP3(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "p3", arg);
                return -1;
              }

              static PyObject *t_Rtcm1020Data_get__p4(t_Rtcm1020Data *self, void *data)
              {
                jint value;
                OBJ_CALL(value = self->object.getP4());
                return PyLong_FromLong((long) value);
              }
              static int t_Rtcm1020Data_set__p4(t_Rtcm1020Data *self, PyObject *arg, void *data)
              {
                {
                  jint value;
                  if (!parseArg(arg, "I", &value))
                  {
                    INT_CALL(self->object.setP4(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "p4", arg);
                return -1;
              }

              static PyObject *t_Rtcm1020Data_get__tauC(t_Rtcm1020Data *self, void *data)
              {
                jdouble value;
                OBJ_CALL(value = self->object.getTauC());
                return PyFloat_FromDouble((double) value);
              }
              static int t_Rtcm1020Data_set__tauC(t_Rtcm1020Data *self, PyObject *arg, void *data)
              {
                {
                  jdouble value;
                  if (!parseArg(arg, "D", &value))
                  {
                    INT_CALL(self->object.setTauC(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "tauC", arg);
                return -1;
              }

              static PyObject *t_Rtcm1020Data_get__tauGps(t_Rtcm1020Data *self, void *data)
              {
                jdouble value;
                OBJ_CALL(value = self->object.getTauGps());
                return PyFloat_FromDouble((double) value);
              }
              static int t_Rtcm1020Data_set__tauGps(t_Rtcm1020Data *self, PyObject *arg, void *data)
              {
                {
                  jdouble value;
                  if (!parseArg(arg, "D", &value))
                  {
                    INT_CALL(self->object.setTauGps(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "tauGps", arg);
                return -1;
              }

              static PyObject *t_Rtcm1020Data_get__tk(t_Rtcm1020Data *self, void *data)
              {
                jdouble value;
                OBJ_CALL(value = self->object.getTk());
                return PyFloat_FromDouble((double) value);
              }
              static int t_Rtcm1020Data_set__tk(t_Rtcm1020Data *self, PyObject *arg, void *data)
              {
                {
                  jdouble value;
                  if (!parseArg(arg, "D", &value))
                  {
                    INT_CALL(self->object.setTk(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "tk", arg);
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
#include "org/orekit/rugged/adjustment/PythonOptimizationProblemBuilder.h"
#include "org/hipparchus/optim/nonlinear/vector/leastsquares/LeastSquaresProblem.h"
#include "org/hipparchus/optim/nonlinear/vector/leastsquares/MultivariateJacobianFunction.h"
#include "java/lang/Class.h"
#include "java/lang/Throwable.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace rugged {
      namespace adjustment {

        ::java::lang::Class *PythonOptimizationProblemBuilder::class$ = NULL;
        jmethodID *PythonOptimizationProblemBuilder::mids$ = NULL;
        bool PythonOptimizationProblemBuilder::live$ = false;

        jclass PythonOptimizationProblemBuilder::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/rugged/adjustment/PythonOptimizationProblemBuilder");

            mids$ = new jmethodID[max_mid];
            mids$[mid_build_fabe1e3047de884e] = env->getMethodID(cls, "build", "(ID)Lorg/hipparchus/optim/nonlinear/vector/leastsquares/LeastSquaresProblem;");
            mids$[mid_createFunction_b9638c47db64ddc7] = env->getMethodID(cls, "createFunction", "()Lorg/hipparchus/optim/nonlinear/vector/leastsquares/MultivariateJacobianFunction;");
            mids$[mid_createTargetAndWeight_ff7cb6c242604316] = env->getMethodID(cls, "createTargetAndWeight", "()V");
            mids$[mid_finalize_ff7cb6c242604316] = env->getMethodID(cls, "finalize", "()V");
            mids$[mid_initMapping_ff7cb6c242604316] = env->getMethodID(cls, "initMapping", "()V");
            mids$[mid_pythonDecRef_ff7cb6c242604316] = env->getMethodID(cls, "pythonDecRef", "()V");
            mids$[mid_pythonExtension_42c72b98e3c2e08a] = env->getMethodID(cls, "pythonExtension", "()J");
            mids$[mid_pythonExtension_f5bbab7e97879358] = env->getMethodID(cls, "pythonExtension", "(J)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        void PythonOptimizationProblemBuilder::finalize() const
        {
          env->callVoidMethod(this$, mids$[mid_finalize_ff7cb6c242604316]);
        }

        jlong PythonOptimizationProblemBuilder::pythonExtension() const
        {
          return env->callLongMethod(this$, mids$[mid_pythonExtension_42c72b98e3c2e08a]);
        }

        void PythonOptimizationProblemBuilder::pythonExtension(jlong a0) const
        {
          env->callVoidMethod(this$, mids$[mid_pythonExtension_f5bbab7e97879358], a0);
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
      namespace adjustment {
        static PyObject *t_PythonOptimizationProblemBuilder_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_PythonOptimizationProblemBuilder_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_PythonOptimizationProblemBuilder_finalize(t_PythonOptimizationProblemBuilder *self);
        static PyObject *t_PythonOptimizationProblemBuilder_pythonExtension(t_PythonOptimizationProblemBuilder *self, PyObject *args);
        static jobject JNICALL t_PythonOptimizationProblemBuilder_build0(JNIEnv *jenv, jobject jobj, jint a0, jdouble a1);
        static jobject JNICALL t_PythonOptimizationProblemBuilder_createFunction1(JNIEnv *jenv, jobject jobj);
        static void JNICALL t_PythonOptimizationProblemBuilder_createTargetAndWeight2(JNIEnv *jenv, jobject jobj);
        static void JNICALL t_PythonOptimizationProblemBuilder_initMapping3(JNIEnv *jenv, jobject jobj);
        static void JNICALL t_PythonOptimizationProblemBuilder_pythonDecRef4(JNIEnv *jenv, jobject jobj);
        static PyObject *t_PythonOptimizationProblemBuilder_get__self(t_PythonOptimizationProblemBuilder *self, void *data);
        static PyGetSetDef t_PythonOptimizationProblemBuilder__fields_[] = {
          DECLARE_GET_FIELD(t_PythonOptimizationProblemBuilder, self),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_PythonOptimizationProblemBuilder__methods_[] = {
          DECLARE_METHOD(t_PythonOptimizationProblemBuilder, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonOptimizationProblemBuilder, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonOptimizationProblemBuilder, finalize, METH_NOARGS),
          DECLARE_METHOD(t_PythonOptimizationProblemBuilder, pythonExtension, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(PythonOptimizationProblemBuilder)[] = {
          { Py_tp_methods, t_PythonOptimizationProblemBuilder__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_PythonOptimizationProblemBuilder__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(PythonOptimizationProblemBuilder)[] = {
          &PY_TYPE_DEF(::org::orekit::rugged::adjustment::OptimizationProblemBuilder),
          NULL
        };

        DEFINE_TYPE(PythonOptimizationProblemBuilder, t_PythonOptimizationProblemBuilder, PythonOptimizationProblemBuilder);

        void t_PythonOptimizationProblemBuilder::install(PyObject *module)
        {
          installType(&PY_TYPE(PythonOptimizationProblemBuilder), &PY_TYPE_DEF(PythonOptimizationProblemBuilder), module, "PythonOptimizationProblemBuilder", 1);
        }

        void t_PythonOptimizationProblemBuilder::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonOptimizationProblemBuilder), "class_", make_descriptor(PythonOptimizationProblemBuilder::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonOptimizationProblemBuilder), "wrapfn_", make_descriptor(t_PythonOptimizationProblemBuilder::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonOptimizationProblemBuilder), "boxfn_", make_descriptor(boxObject));
          jclass cls = env->getClass(PythonOptimizationProblemBuilder::initializeClass);
          JNINativeMethod methods[] = {
            { "build", "(ID)Lorg/hipparchus/optim/nonlinear/vector/leastsquares/LeastSquaresProblem;", (void *) t_PythonOptimizationProblemBuilder_build0 },
            { "createFunction", "()Lorg/hipparchus/optim/nonlinear/vector/leastsquares/MultivariateJacobianFunction;", (void *) t_PythonOptimizationProblemBuilder_createFunction1 },
            { "createTargetAndWeight", "()V", (void *) t_PythonOptimizationProblemBuilder_createTargetAndWeight2 },
            { "initMapping", "()V", (void *) t_PythonOptimizationProblemBuilder_initMapping3 },
            { "pythonDecRef", "()V", (void *) t_PythonOptimizationProblemBuilder_pythonDecRef4 },
          };
          env->registerNatives(cls, methods, 5);
        }

        static PyObject *t_PythonOptimizationProblemBuilder_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, PythonOptimizationProblemBuilder::initializeClass, 1)))
            return NULL;
          return t_PythonOptimizationProblemBuilder::wrap_Object(PythonOptimizationProblemBuilder(((t_PythonOptimizationProblemBuilder *) arg)->object.this$));
        }
        static PyObject *t_PythonOptimizationProblemBuilder_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, PythonOptimizationProblemBuilder::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_PythonOptimizationProblemBuilder_finalize(t_PythonOptimizationProblemBuilder *self)
        {
          OBJ_CALL(self->object.finalize());
          Py_RETURN_NONE;
        }

        static PyObject *t_PythonOptimizationProblemBuilder_pythonExtension(t_PythonOptimizationProblemBuilder *self, PyObject *args)
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

        static jobject JNICALL t_PythonOptimizationProblemBuilder_build0(JNIEnv *jenv, jobject jobj, jint a0, jdouble a1)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonOptimizationProblemBuilder::mids$[PythonOptimizationProblemBuilder::mid_pythonExtension_42c72b98e3c2e08a]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          ::org::hipparchus::optim::nonlinear::vector::leastsquares::LeastSquaresProblem value((jobject) NULL);
          PyObject *result = PyObject_CallMethod(obj, "build", "id", (int) a0, (double) a1);
          if (!result)
            throwPythonError();
          else if (parseArg(result, "k", ::org::hipparchus::optim::nonlinear::vector::leastsquares::LeastSquaresProblem::initializeClass, &value))
          {
            throwTypeError("build", result);
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

        static jobject JNICALL t_PythonOptimizationProblemBuilder_createFunction1(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonOptimizationProblemBuilder::mids$[PythonOptimizationProblemBuilder::mid_pythonExtension_42c72b98e3c2e08a]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          ::org::hipparchus::optim::nonlinear::vector::leastsquares::MultivariateJacobianFunction value((jobject) NULL);
          PyObject *result = PyObject_CallMethod(obj, "createFunction", "");
          if (!result)
            throwPythonError();
          else if (parseArg(result, "k", ::org::hipparchus::optim::nonlinear::vector::leastsquares::MultivariateJacobianFunction::initializeClass, &value))
          {
            throwTypeError("createFunction", result);
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

        static void JNICALL t_PythonOptimizationProblemBuilder_createTargetAndWeight2(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonOptimizationProblemBuilder::mids$[PythonOptimizationProblemBuilder::mid_pythonExtension_42c72b98e3c2e08a]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          PyObject *result = PyObject_CallMethod(obj, "createTargetAndWeight", "");
          if (!result)
            throwPythonError();
          else
            Py_DECREF(result);
        }

        static void JNICALL t_PythonOptimizationProblemBuilder_initMapping3(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonOptimizationProblemBuilder::mids$[PythonOptimizationProblemBuilder::mid_pythonExtension_42c72b98e3c2e08a]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          PyObject *result = PyObject_CallMethod(obj, "initMapping", "");
          if (!result)
            throwPythonError();
          else
            Py_DECREF(result);
        }

        static void JNICALL t_PythonOptimizationProblemBuilder_pythonDecRef4(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonOptimizationProblemBuilder::mids$[PythonOptimizationProblemBuilder::mid_pythonExtension_42c72b98e3c2e08a]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

          if (obj != NULL)
          {
            jenv->CallVoidMethod(jobj, PythonOptimizationProblemBuilder::mids$[PythonOptimizationProblemBuilder::mid_pythonExtension_f5bbab7e97879358], (jlong) 0);
            env->finalizeObject(jenv, obj);
          }
        }

        static PyObject *t_PythonOptimizationProblemBuilder_get__self(t_PythonOptimizationProblemBuilder *self, void *data)
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
#include "org/orekit/models/earth/LazyLoadedGeoMagneticFields.h"
#include "org/orekit/models/earth/GeoMagneticFields.h"
#include "org/orekit/models/earth/GeoMagneticField.h"
#include "java/lang/Class.h"
#include "org/orekit/models/earth/GeoMagneticFieldFactory$FieldModel.h"
#include "org/orekit/data/DataProvidersManager.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace models {
      namespace earth {

        ::java::lang::Class *LazyLoadedGeoMagneticFields::class$ = NULL;
        jmethodID *LazyLoadedGeoMagneticFields::mids$ = NULL;
        bool LazyLoadedGeoMagneticFields::live$ = false;

        jclass LazyLoadedGeoMagneticFields::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/models/earth/LazyLoadedGeoMagneticFields");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_f44b5b919beca6bf] = env->getMethodID(cls, "<init>", "(Lorg/orekit/data/DataProvidersManager;)V");
            mids$[mid_getField_7ee697680d30d1e8] = env->getMethodID(cls, "getField", "(Lorg/orekit/models/earth/GeoMagneticFieldFactory$FieldModel;D)Lorg/orekit/models/earth/GeoMagneticField;");
            mids$[mid_getIGRF_5fbf1330f033ba72] = env->getMethodID(cls, "getIGRF", "(D)Lorg/orekit/models/earth/GeoMagneticField;");
            mids$[mid_getWMM_5fbf1330f033ba72] = env->getMethodID(cls, "getWMM", "(D)Lorg/orekit/models/earth/GeoMagneticField;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        LazyLoadedGeoMagneticFields::LazyLoadedGeoMagneticFields(const ::org::orekit::data::DataProvidersManager & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_f44b5b919beca6bf, a0.this$)) {}

        ::org::orekit::models::earth::GeoMagneticField LazyLoadedGeoMagneticFields::getField(const ::org::orekit::models::earth::GeoMagneticFieldFactory$FieldModel & a0, jdouble a1) const
        {
          return ::org::orekit::models::earth::GeoMagneticField(env->callObjectMethod(this$, mids$[mid_getField_7ee697680d30d1e8], a0.this$, a1));
        }

        ::org::orekit::models::earth::GeoMagneticField LazyLoadedGeoMagneticFields::getIGRF(jdouble a0) const
        {
          return ::org::orekit::models::earth::GeoMagneticField(env->callObjectMethod(this$, mids$[mid_getIGRF_5fbf1330f033ba72], a0));
        }

        ::org::orekit::models::earth::GeoMagneticField LazyLoadedGeoMagneticFields::getWMM(jdouble a0) const
        {
          return ::org::orekit::models::earth::GeoMagneticField(env->callObjectMethod(this$, mids$[mid_getWMM_5fbf1330f033ba72], a0));
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
        static PyObject *t_LazyLoadedGeoMagneticFields_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_LazyLoadedGeoMagneticFields_instance_(PyTypeObject *type, PyObject *arg);
        static int t_LazyLoadedGeoMagneticFields_init_(t_LazyLoadedGeoMagneticFields *self, PyObject *args, PyObject *kwds);
        static PyObject *t_LazyLoadedGeoMagneticFields_getField(t_LazyLoadedGeoMagneticFields *self, PyObject *args);
        static PyObject *t_LazyLoadedGeoMagneticFields_getIGRF(t_LazyLoadedGeoMagneticFields *self, PyObject *arg);
        static PyObject *t_LazyLoadedGeoMagneticFields_getWMM(t_LazyLoadedGeoMagneticFields *self, PyObject *arg);

        static PyMethodDef t_LazyLoadedGeoMagneticFields__methods_[] = {
          DECLARE_METHOD(t_LazyLoadedGeoMagneticFields, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_LazyLoadedGeoMagneticFields, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_LazyLoadedGeoMagneticFields, getField, METH_VARARGS),
          DECLARE_METHOD(t_LazyLoadedGeoMagneticFields, getIGRF, METH_O),
          DECLARE_METHOD(t_LazyLoadedGeoMagneticFields, getWMM, METH_O),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(LazyLoadedGeoMagneticFields)[] = {
          { Py_tp_methods, t_LazyLoadedGeoMagneticFields__methods_ },
          { Py_tp_init, (void *) t_LazyLoadedGeoMagneticFields_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(LazyLoadedGeoMagneticFields)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(LazyLoadedGeoMagneticFields, t_LazyLoadedGeoMagneticFields, LazyLoadedGeoMagneticFields);

        void t_LazyLoadedGeoMagneticFields::install(PyObject *module)
        {
          installType(&PY_TYPE(LazyLoadedGeoMagneticFields), &PY_TYPE_DEF(LazyLoadedGeoMagneticFields), module, "LazyLoadedGeoMagneticFields", 0);
        }

        void t_LazyLoadedGeoMagneticFields::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(LazyLoadedGeoMagneticFields), "class_", make_descriptor(LazyLoadedGeoMagneticFields::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(LazyLoadedGeoMagneticFields), "wrapfn_", make_descriptor(t_LazyLoadedGeoMagneticFields::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(LazyLoadedGeoMagneticFields), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_LazyLoadedGeoMagneticFields_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, LazyLoadedGeoMagneticFields::initializeClass, 1)))
            return NULL;
          return t_LazyLoadedGeoMagneticFields::wrap_Object(LazyLoadedGeoMagneticFields(((t_LazyLoadedGeoMagneticFields *) arg)->object.this$));
        }
        static PyObject *t_LazyLoadedGeoMagneticFields_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, LazyLoadedGeoMagneticFields::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_LazyLoadedGeoMagneticFields_init_(t_LazyLoadedGeoMagneticFields *self, PyObject *args, PyObject *kwds)
        {
          ::org::orekit::data::DataProvidersManager a0((jobject) NULL);
          LazyLoadedGeoMagneticFields object((jobject) NULL);

          if (!parseArgs(args, "k", ::org::orekit::data::DataProvidersManager::initializeClass, &a0))
          {
            INT_CALL(object = LazyLoadedGeoMagneticFields(a0));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_LazyLoadedGeoMagneticFields_getField(t_LazyLoadedGeoMagneticFields *self, PyObject *args)
        {
          ::org::orekit::models::earth::GeoMagneticFieldFactory$FieldModel a0((jobject) NULL);
          PyTypeObject **p0;
          jdouble a1;
          ::org::orekit::models::earth::GeoMagneticField result((jobject) NULL);

          if (!parseArgs(args, "KD", ::org::orekit::models::earth::GeoMagneticFieldFactory$FieldModel::initializeClass, &a0, &p0, ::org::orekit::models::earth::t_GeoMagneticFieldFactory$FieldModel::parameters_, &a1))
          {
            OBJ_CALL(result = self->object.getField(a0, a1));
            return ::org::orekit::models::earth::t_GeoMagneticField::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "getField", args);
          return NULL;
        }

        static PyObject *t_LazyLoadedGeoMagneticFields_getIGRF(t_LazyLoadedGeoMagneticFields *self, PyObject *arg)
        {
          jdouble a0;
          ::org::orekit::models::earth::GeoMagneticField result((jobject) NULL);

          if (!parseArg(arg, "D", &a0))
          {
            OBJ_CALL(result = self->object.getIGRF(a0));
            return ::org::orekit::models::earth::t_GeoMagneticField::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "getIGRF", arg);
          return NULL;
        }

        static PyObject *t_LazyLoadedGeoMagneticFields_getWMM(t_LazyLoadedGeoMagneticFields *self, PyObject *arg)
        {
          jdouble a0;
          ::org::orekit::models::earth::GeoMagneticField result((jobject) NULL);

          if (!parseArg(arg, "D", &a0))
          {
            OBJ_CALL(result = self->object.getWMM(a0));
            return ::org::orekit::models::earth::t_GeoMagneticField::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "getWMM", arg);
          return NULL;
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/linear/FieldMatrix.h"
#include "org/hipparchus/linear/FieldMatrixChangingVisitor.h"
#include "org/hipparchus/linear/FieldMatrix.h"
#include "org/hipparchus/exception/NullArgumentException.h"
#include "org/hipparchus/linear/FieldMatrixPreservingVisitor.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "org/hipparchus/Field.h"
#include "java/lang/Class.h"
#include "org/hipparchus/FieldElement.h"
#include "org/hipparchus/linear/FieldVector.h"
#include "org/hipparchus/util/FieldBlendable.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace linear {

      ::java::lang::Class *FieldMatrix::class$ = NULL;
      jmethodID *FieldMatrix::mids$ = NULL;
      bool FieldMatrix::live$ = false;

      jclass FieldMatrix::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/linear/FieldMatrix");

          mids$ = new jmethodID[max_mid];
          mids$[mid_add_b180f987191970ad] = env->getMethodID(cls, "add", "(Lorg/hipparchus/linear/FieldMatrix;)Lorg/hipparchus/linear/FieldMatrix;");
          mids$[mid_addToEntry_8de38856a6ebea36] = env->getMethodID(cls, "addToEntry", "(IILorg/hipparchus/FieldElement;)V");
          mids$[mid_blendArithmeticallyWith_11335d64cc69752f] = env->getMethodID(cls, "blendArithmeticallyWith", "(Lorg/hipparchus/linear/FieldMatrix;Lorg/hipparchus/FieldElement;)Lorg/hipparchus/linear/FieldMatrix;");
          mids$[mid_copy_02883dbbe5db44ac] = env->getMethodID(cls, "copy", "()Lorg/hipparchus/linear/FieldMatrix;");
          mids$[mid_copySubMatrix_fdff770d906e9d35] = env->getMethodID(cls, "copySubMatrix", "([I[I[[Lorg/hipparchus/FieldElement;)V");
          mids$[mid_copySubMatrix_8a7c61f1af16bed4] = env->getMethodID(cls, "copySubMatrix", "(IIII[[Lorg/hipparchus/FieldElement;)V");
          mids$[mid_createMatrix_71a6a4df501a3e03] = env->getMethodID(cls, "createMatrix", "(II)Lorg/hipparchus/linear/FieldMatrix;");
          mids$[mid_getColumn_9410bfc023ff0ee6] = env->getMethodID(cls, "getColumn", "(I)[Lorg/hipparchus/FieldElement;");
          mids$[mid_getColumnMatrix_338ea041dc2f9292] = env->getMethodID(cls, "getColumnMatrix", "(I)Lorg/hipparchus/linear/FieldMatrix;");
          mids$[mid_getColumnVector_229c51f1f7aa44e3] = env->getMethodID(cls, "getColumnVector", "(I)Lorg/hipparchus/linear/FieldVector;");
          mids$[mid_getData_5d4bb4c2b3c3b853] = env->getMethodID(cls, "getData", "()[[Lorg/hipparchus/FieldElement;");
          mids$[mid_getEntry_a81b5a6b0760a7e3] = env->getMethodID(cls, "getEntry", "(II)Lorg/hipparchus/FieldElement;");
          mids$[mid_getField_577649682b9910c1] = env->getMethodID(cls, "getField", "()Lorg/hipparchus/Field;");
          mids$[mid_getRow_9410bfc023ff0ee6] = env->getMethodID(cls, "getRow", "(I)[Lorg/hipparchus/FieldElement;");
          mids$[mid_getRowMatrix_338ea041dc2f9292] = env->getMethodID(cls, "getRowMatrix", "(I)Lorg/hipparchus/linear/FieldMatrix;");
          mids$[mid_getRowVector_229c51f1f7aa44e3] = env->getMethodID(cls, "getRowVector", "(I)Lorg/hipparchus/linear/FieldVector;");
          mids$[mid_getSubMatrix_9ff0154dcafe800b] = env->getMethodID(cls, "getSubMatrix", "([I[I)Lorg/hipparchus/linear/FieldMatrix;");
          mids$[mid_getSubMatrix_1acf4e5d8c70f8c1] = env->getMethodID(cls, "getSubMatrix", "(IIII)Lorg/hipparchus/linear/FieldMatrix;");
          mids$[mid_getTrace_f6328613456309a1] = env->getMethodID(cls, "getTrace", "()Lorg/hipparchus/FieldElement;");
          mids$[mid_multiply_b180f987191970ad] = env->getMethodID(cls, "multiply", "(Lorg/hipparchus/linear/FieldMatrix;)Lorg/hipparchus/linear/FieldMatrix;");
          mids$[mid_multiplyEntry_8de38856a6ebea36] = env->getMethodID(cls, "multiplyEntry", "(IILorg/hipparchus/FieldElement;)V");
          mids$[mid_multiplyTransposed_b180f987191970ad] = env->getMethodID(cls, "multiplyTransposed", "(Lorg/hipparchus/linear/FieldMatrix;)Lorg/hipparchus/linear/FieldMatrix;");
          mids$[mid_operate_da4e13f241d172b2] = env->getMethodID(cls, "operate", "([Lorg/hipparchus/FieldElement;)[Lorg/hipparchus/FieldElement;");
          mids$[mid_operate_17fc5256c635037d] = env->getMethodID(cls, "operate", "(Lorg/hipparchus/linear/FieldVector;)Lorg/hipparchus/linear/FieldVector;");
          mids$[mid_power_338ea041dc2f9292] = env->getMethodID(cls, "power", "(I)Lorg/hipparchus/linear/FieldMatrix;");
          mids$[mid_preMultiply_da4e13f241d172b2] = env->getMethodID(cls, "preMultiply", "([Lorg/hipparchus/FieldElement;)[Lorg/hipparchus/FieldElement;");
          mids$[mid_preMultiply_b180f987191970ad] = env->getMethodID(cls, "preMultiply", "(Lorg/hipparchus/linear/FieldMatrix;)Lorg/hipparchus/linear/FieldMatrix;");
          mids$[mid_preMultiply_17fc5256c635037d] = env->getMethodID(cls, "preMultiply", "(Lorg/hipparchus/linear/FieldVector;)Lorg/hipparchus/linear/FieldVector;");
          mids$[mid_scalarAdd_8a90f00b11f69825] = env->getMethodID(cls, "scalarAdd", "(Lorg/hipparchus/FieldElement;)Lorg/hipparchus/linear/FieldMatrix;");
          mids$[mid_scalarMultiply_8a90f00b11f69825] = env->getMethodID(cls, "scalarMultiply", "(Lorg/hipparchus/FieldElement;)Lorg/hipparchus/linear/FieldMatrix;");
          mids$[mid_setColumn_1d7c60cf27d9f179] = env->getMethodID(cls, "setColumn", "(I[Lorg/hipparchus/FieldElement;)V");
          mids$[mid_setColumnMatrix_87d8f99edb7a39ea] = env->getMethodID(cls, "setColumnMatrix", "(ILorg/hipparchus/linear/FieldMatrix;)V");
          mids$[mid_setColumnVector_9f6a0cf723c2763b] = env->getMethodID(cls, "setColumnVector", "(ILorg/hipparchus/linear/FieldVector;)V");
          mids$[mid_setEntry_8de38856a6ebea36] = env->getMethodID(cls, "setEntry", "(IILorg/hipparchus/FieldElement;)V");
          mids$[mid_setRow_1d7c60cf27d9f179] = env->getMethodID(cls, "setRow", "(I[Lorg/hipparchus/FieldElement;)V");
          mids$[mid_setRowMatrix_87d8f99edb7a39ea] = env->getMethodID(cls, "setRowMatrix", "(ILorg/hipparchus/linear/FieldMatrix;)V");
          mids$[mid_setRowVector_9f6a0cf723c2763b] = env->getMethodID(cls, "setRowVector", "(ILorg/hipparchus/linear/FieldVector;)V");
          mids$[mid_setSubMatrix_24d277c6faa30a04] = env->getMethodID(cls, "setSubMatrix", "([[Lorg/hipparchus/FieldElement;II)V");
          mids$[mid_subtract_b180f987191970ad] = env->getMethodID(cls, "subtract", "(Lorg/hipparchus/linear/FieldMatrix;)Lorg/hipparchus/linear/FieldMatrix;");
          mids$[mid_transpose_02883dbbe5db44ac] = env->getMethodID(cls, "transpose", "()Lorg/hipparchus/linear/FieldMatrix;");
          mids$[mid_transposeMultiply_b180f987191970ad] = env->getMethodID(cls, "transposeMultiply", "(Lorg/hipparchus/linear/FieldMatrix;)Lorg/hipparchus/linear/FieldMatrix;");
          mids$[mid_walkInColumnOrder_9511e2a4670e260a] = env->getMethodID(cls, "walkInColumnOrder", "(Lorg/hipparchus/linear/FieldMatrixChangingVisitor;)Lorg/hipparchus/FieldElement;");
          mids$[mid_walkInColumnOrder_718adedab84e4562] = env->getMethodID(cls, "walkInColumnOrder", "(Lorg/hipparchus/linear/FieldMatrixPreservingVisitor;)Lorg/hipparchus/FieldElement;");
          mids$[mid_walkInColumnOrder_4e13f6cf4599797e] = env->getMethodID(cls, "walkInColumnOrder", "(Lorg/hipparchus/linear/FieldMatrixChangingVisitor;IIII)Lorg/hipparchus/FieldElement;");
          mids$[mid_walkInColumnOrder_8e3632311c5af3b6] = env->getMethodID(cls, "walkInColumnOrder", "(Lorg/hipparchus/linear/FieldMatrixPreservingVisitor;IIII)Lorg/hipparchus/FieldElement;");
          mids$[mid_walkInOptimizedOrder_9511e2a4670e260a] = env->getMethodID(cls, "walkInOptimizedOrder", "(Lorg/hipparchus/linear/FieldMatrixChangingVisitor;)Lorg/hipparchus/FieldElement;");
          mids$[mid_walkInOptimizedOrder_718adedab84e4562] = env->getMethodID(cls, "walkInOptimizedOrder", "(Lorg/hipparchus/linear/FieldMatrixPreservingVisitor;)Lorg/hipparchus/FieldElement;");
          mids$[mid_walkInOptimizedOrder_4e13f6cf4599797e] = env->getMethodID(cls, "walkInOptimizedOrder", "(Lorg/hipparchus/linear/FieldMatrixChangingVisitor;IIII)Lorg/hipparchus/FieldElement;");
          mids$[mid_walkInOptimizedOrder_8e3632311c5af3b6] = env->getMethodID(cls, "walkInOptimizedOrder", "(Lorg/hipparchus/linear/FieldMatrixPreservingVisitor;IIII)Lorg/hipparchus/FieldElement;");
          mids$[mid_walkInRowOrder_9511e2a4670e260a] = env->getMethodID(cls, "walkInRowOrder", "(Lorg/hipparchus/linear/FieldMatrixChangingVisitor;)Lorg/hipparchus/FieldElement;");
          mids$[mid_walkInRowOrder_718adedab84e4562] = env->getMethodID(cls, "walkInRowOrder", "(Lorg/hipparchus/linear/FieldMatrixPreservingVisitor;)Lorg/hipparchus/FieldElement;");
          mids$[mid_walkInRowOrder_4e13f6cf4599797e] = env->getMethodID(cls, "walkInRowOrder", "(Lorg/hipparchus/linear/FieldMatrixChangingVisitor;IIII)Lorg/hipparchus/FieldElement;");
          mids$[mid_walkInRowOrder_8e3632311c5af3b6] = env->getMethodID(cls, "walkInRowOrder", "(Lorg/hipparchus/linear/FieldMatrixPreservingVisitor;IIII)Lorg/hipparchus/FieldElement;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      FieldMatrix FieldMatrix::add(const FieldMatrix & a0) const
      {
        return FieldMatrix(env->callObjectMethod(this$, mids$[mid_add_b180f987191970ad], a0.this$));
      }

      void FieldMatrix::addToEntry(jint a0, jint a1, const ::org::hipparchus::FieldElement & a2) const
      {
        env->callVoidMethod(this$, mids$[mid_addToEntry_8de38856a6ebea36], a0, a1, a2.this$);
      }

      FieldMatrix FieldMatrix::blendArithmeticallyWith(const FieldMatrix & a0, const ::org::hipparchus::FieldElement & a1) const
      {
        return FieldMatrix(env->callObjectMethod(this$, mids$[mid_blendArithmeticallyWith_11335d64cc69752f], a0.this$, a1.this$));
      }

      FieldMatrix FieldMatrix::copy() const
      {
        return FieldMatrix(env->callObjectMethod(this$, mids$[mid_copy_02883dbbe5db44ac]));
      }

      void FieldMatrix::copySubMatrix(const JArray< jint > & a0, const JArray< jint > & a1, const JArray< JArray< ::org::hipparchus::FieldElement > > & a2) const
      {
        env->callVoidMethod(this$, mids$[mid_copySubMatrix_fdff770d906e9d35], a0.this$, a1.this$, a2.this$);
      }

      void FieldMatrix::copySubMatrix(jint a0, jint a1, jint a2, jint a3, const JArray< JArray< ::org::hipparchus::FieldElement > > & a4) const
      {
        env->callVoidMethod(this$, mids$[mid_copySubMatrix_8a7c61f1af16bed4], a0, a1, a2, a3, a4.this$);
      }

      FieldMatrix FieldMatrix::createMatrix(jint a0, jint a1) const
      {
        return FieldMatrix(env->callObjectMethod(this$, mids$[mid_createMatrix_71a6a4df501a3e03], a0, a1));
      }

      JArray< ::org::hipparchus::FieldElement > FieldMatrix::getColumn(jint a0) const
      {
        return JArray< ::org::hipparchus::FieldElement >(env->callObjectMethod(this$, mids$[mid_getColumn_9410bfc023ff0ee6], a0));
      }

      FieldMatrix FieldMatrix::getColumnMatrix(jint a0) const
      {
        return FieldMatrix(env->callObjectMethod(this$, mids$[mid_getColumnMatrix_338ea041dc2f9292], a0));
      }

      ::org::hipparchus::linear::FieldVector FieldMatrix::getColumnVector(jint a0) const
      {
        return ::org::hipparchus::linear::FieldVector(env->callObjectMethod(this$, mids$[mid_getColumnVector_229c51f1f7aa44e3], a0));
      }

      JArray< JArray< ::org::hipparchus::FieldElement > > FieldMatrix::getData() const
      {
        return JArray< JArray< ::org::hipparchus::FieldElement > >(env->callObjectMethod(this$, mids$[mid_getData_5d4bb4c2b3c3b853]));
      }

      ::org::hipparchus::FieldElement FieldMatrix::getEntry(jint a0, jint a1) const
      {
        return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_getEntry_a81b5a6b0760a7e3], a0, a1));
      }

      ::org::hipparchus::Field FieldMatrix::getField() const
      {
        return ::org::hipparchus::Field(env->callObjectMethod(this$, mids$[mid_getField_577649682b9910c1]));
      }

      JArray< ::org::hipparchus::FieldElement > FieldMatrix::getRow(jint a0) const
      {
        return JArray< ::org::hipparchus::FieldElement >(env->callObjectMethod(this$, mids$[mid_getRow_9410bfc023ff0ee6], a0));
      }

      FieldMatrix FieldMatrix::getRowMatrix(jint a0) const
      {
        return FieldMatrix(env->callObjectMethod(this$, mids$[mid_getRowMatrix_338ea041dc2f9292], a0));
      }

      ::org::hipparchus::linear::FieldVector FieldMatrix::getRowVector(jint a0) const
      {
        return ::org::hipparchus::linear::FieldVector(env->callObjectMethod(this$, mids$[mid_getRowVector_229c51f1f7aa44e3], a0));
      }

      FieldMatrix FieldMatrix::getSubMatrix(const JArray< jint > & a0, const JArray< jint > & a1) const
      {
        return FieldMatrix(env->callObjectMethod(this$, mids$[mid_getSubMatrix_9ff0154dcafe800b], a0.this$, a1.this$));
      }

      FieldMatrix FieldMatrix::getSubMatrix(jint a0, jint a1, jint a2, jint a3) const
      {
        return FieldMatrix(env->callObjectMethod(this$, mids$[mid_getSubMatrix_1acf4e5d8c70f8c1], a0, a1, a2, a3));
      }

      ::org::hipparchus::FieldElement FieldMatrix::getTrace() const
      {
        return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_getTrace_f6328613456309a1]));
      }

      FieldMatrix FieldMatrix::multiply(const FieldMatrix & a0) const
      {
        return FieldMatrix(env->callObjectMethod(this$, mids$[mid_multiply_b180f987191970ad], a0.this$));
      }

      void FieldMatrix::multiplyEntry(jint a0, jint a1, const ::org::hipparchus::FieldElement & a2) const
      {
        env->callVoidMethod(this$, mids$[mid_multiplyEntry_8de38856a6ebea36], a0, a1, a2.this$);
      }

      FieldMatrix FieldMatrix::multiplyTransposed(const FieldMatrix & a0) const
      {
        return FieldMatrix(env->callObjectMethod(this$, mids$[mid_multiplyTransposed_b180f987191970ad], a0.this$));
      }

      JArray< ::org::hipparchus::FieldElement > FieldMatrix::operate(const JArray< ::org::hipparchus::FieldElement > & a0) const
      {
        return JArray< ::org::hipparchus::FieldElement >(env->callObjectMethod(this$, mids$[mid_operate_da4e13f241d172b2], a0.this$));
      }

      ::org::hipparchus::linear::FieldVector FieldMatrix::operate(const ::org::hipparchus::linear::FieldVector & a0) const
      {
        return ::org::hipparchus::linear::FieldVector(env->callObjectMethod(this$, mids$[mid_operate_17fc5256c635037d], a0.this$));
      }

      FieldMatrix FieldMatrix::power(jint a0) const
      {
        return FieldMatrix(env->callObjectMethod(this$, mids$[mid_power_338ea041dc2f9292], a0));
      }

      JArray< ::org::hipparchus::FieldElement > FieldMatrix::preMultiply(const JArray< ::org::hipparchus::FieldElement > & a0) const
      {
        return JArray< ::org::hipparchus::FieldElement >(env->callObjectMethod(this$, mids$[mid_preMultiply_da4e13f241d172b2], a0.this$));
      }

      FieldMatrix FieldMatrix::preMultiply(const FieldMatrix & a0) const
      {
        return FieldMatrix(env->callObjectMethod(this$, mids$[mid_preMultiply_b180f987191970ad], a0.this$));
      }

      ::org::hipparchus::linear::FieldVector FieldMatrix::preMultiply(const ::org::hipparchus::linear::FieldVector & a0) const
      {
        return ::org::hipparchus::linear::FieldVector(env->callObjectMethod(this$, mids$[mid_preMultiply_17fc5256c635037d], a0.this$));
      }

      FieldMatrix FieldMatrix::scalarAdd(const ::org::hipparchus::FieldElement & a0) const
      {
        return FieldMatrix(env->callObjectMethod(this$, mids$[mid_scalarAdd_8a90f00b11f69825], a0.this$));
      }

      FieldMatrix FieldMatrix::scalarMultiply(const ::org::hipparchus::FieldElement & a0) const
      {
        return FieldMatrix(env->callObjectMethod(this$, mids$[mid_scalarMultiply_8a90f00b11f69825], a0.this$));
      }

      void FieldMatrix::setColumn(jint a0, const JArray< ::org::hipparchus::FieldElement > & a1) const
      {
        env->callVoidMethod(this$, mids$[mid_setColumn_1d7c60cf27d9f179], a0, a1.this$);
      }

      void FieldMatrix::setColumnMatrix(jint a0, const FieldMatrix & a1) const
      {
        env->callVoidMethod(this$, mids$[mid_setColumnMatrix_87d8f99edb7a39ea], a0, a1.this$);
      }

      void FieldMatrix::setColumnVector(jint a0, const ::org::hipparchus::linear::FieldVector & a1) const
      {
        env->callVoidMethod(this$, mids$[mid_setColumnVector_9f6a0cf723c2763b], a0, a1.this$);
      }

      void FieldMatrix::setEntry(jint a0, jint a1, const ::org::hipparchus::FieldElement & a2) const
      {
        env->callVoidMethod(this$, mids$[mid_setEntry_8de38856a6ebea36], a0, a1, a2.this$);
      }

      void FieldMatrix::setRow(jint a0, const JArray< ::org::hipparchus::FieldElement > & a1) const
      {
        env->callVoidMethod(this$, mids$[mid_setRow_1d7c60cf27d9f179], a0, a1.this$);
      }

      void FieldMatrix::setRowMatrix(jint a0, const FieldMatrix & a1) const
      {
        env->callVoidMethod(this$, mids$[mid_setRowMatrix_87d8f99edb7a39ea], a0, a1.this$);
      }

      void FieldMatrix::setRowVector(jint a0, const ::org::hipparchus::linear::FieldVector & a1) const
      {
        env->callVoidMethod(this$, mids$[mid_setRowVector_9f6a0cf723c2763b], a0, a1.this$);
      }

      void FieldMatrix::setSubMatrix(const JArray< JArray< ::org::hipparchus::FieldElement > > & a0, jint a1, jint a2) const
      {
        env->callVoidMethod(this$, mids$[mid_setSubMatrix_24d277c6faa30a04], a0.this$, a1, a2);
      }

      FieldMatrix FieldMatrix::subtract(const FieldMatrix & a0) const
      {
        return FieldMatrix(env->callObjectMethod(this$, mids$[mid_subtract_b180f987191970ad], a0.this$));
      }

      FieldMatrix FieldMatrix::transpose() const
      {
        return FieldMatrix(env->callObjectMethod(this$, mids$[mid_transpose_02883dbbe5db44ac]));
      }

      FieldMatrix FieldMatrix::transposeMultiply(const FieldMatrix & a0) const
      {
        return FieldMatrix(env->callObjectMethod(this$, mids$[mid_transposeMultiply_b180f987191970ad], a0.this$));
      }

      ::org::hipparchus::FieldElement FieldMatrix::walkInColumnOrder(const ::org::hipparchus::linear::FieldMatrixChangingVisitor & a0) const
      {
        return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_walkInColumnOrder_9511e2a4670e260a], a0.this$));
      }

      ::org::hipparchus::FieldElement FieldMatrix::walkInColumnOrder(const ::org::hipparchus::linear::FieldMatrixPreservingVisitor & a0) const
      {
        return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_walkInColumnOrder_718adedab84e4562], a0.this$));
      }

      ::org::hipparchus::FieldElement FieldMatrix::walkInColumnOrder(const ::org::hipparchus::linear::FieldMatrixChangingVisitor & a0, jint a1, jint a2, jint a3, jint a4) const
      {
        return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_walkInColumnOrder_4e13f6cf4599797e], a0.this$, a1, a2, a3, a4));
      }

      ::org::hipparchus::FieldElement FieldMatrix::walkInColumnOrder(const ::org::hipparchus::linear::FieldMatrixPreservingVisitor & a0, jint a1, jint a2, jint a3, jint a4) const
      {
        return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_walkInColumnOrder_8e3632311c5af3b6], a0.this$, a1, a2, a3, a4));
      }

      ::org::hipparchus::FieldElement FieldMatrix::walkInOptimizedOrder(const ::org::hipparchus::linear::FieldMatrixChangingVisitor & a0) const
      {
        return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_walkInOptimizedOrder_9511e2a4670e260a], a0.this$));
      }

      ::org::hipparchus::FieldElement FieldMatrix::walkInOptimizedOrder(const ::org::hipparchus::linear::FieldMatrixPreservingVisitor & a0) const
      {
        return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_walkInOptimizedOrder_718adedab84e4562], a0.this$));
      }

      ::org::hipparchus::FieldElement FieldMatrix::walkInOptimizedOrder(const ::org::hipparchus::linear::FieldMatrixChangingVisitor & a0, jint a1, jint a2, jint a3, jint a4) const
      {
        return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_walkInOptimizedOrder_4e13f6cf4599797e], a0.this$, a1, a2, a3, a4));
      }

      ::org::hipparchus::FieldElement FieldMatrix::walkInOptimizedOrder(const ::org::hipparchus::linear::FieldMatrixPreservingVisitor & a0, jint a1, jint a2, jint a3, jint a4) const
      {
        return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_walkInOptimizedOrder_8e3632311c5af3b6], a0.this$, a1, a2, a3, a4));
      }

      ::org::hipparchus::FieldElement FieldMatrix::walkInRowOrder(const ::org::hipparchus::linear::FieldMatrixChangingVisitor & a0) const
      {
        return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_walkInRowOrder_9511e2a4670e260a], a0.this$));
      }

      ::org::hipparchus::FieldElement FieldMatrix::walkInRowOrder(const ::org::hipparchus::linear::FieldMatrixPreservingVisitor & a0) const
      {
        return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_walkInRowOrder_718adedab84e4562], a0.this$));
      }

      ::org::hipparchus::FieldElement FieldMatrix::walkInRowOrder(const ::org::hipparchus::linear::FieldMatrixChangingVisitor & a0, jint a1, jint a2, jint a3, jint a4) const
      {
        return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_walkInRowOrder_4e13f6cf4599797e], a0.this$, a1, a2, a3, a4));
      }

      ::org::hipparchus::FieldElement FieldMatrix::walkInRowOrder(const ::org::hipparchus::linear::FieldMatrixPreservingVisitor & a0, jint a1, jint a2, jint a3, jint a4) const
      {
        return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_walkInRowOrder_8e3632311c5af3b6], a0.this$, a1, a2, a3, a4));
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
      static PyObject *t_FieldMatrix_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldMatrix_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldMatrix_of_(t_FieldMatrix *self, PyObject *args);
      static PyObject *t_FieldMatrix_add(t_FieldMatrix *self, PyObject *arg);
      static PyObject *t_FieldMatrix_addToEntry(t_FieldMatrix *self, PyObject *args);
      static PyObject *t_FieldMatrix_blendArithmeticallyWith(t_FieldMatrix *self, PyObject *args);
      static PyObject *t_FieldMatrix_copy(t_FieldMatrix *self);
      static PyObject *t_FieldMatrix_copySubMatrix(t_FieldMatrix *self, PyObject *args);
      static PyObject *t_FieldMatrix_createMatrix(t_FieldMatrix *self, PyObject *args);
      static PyObject *t_FieldMatrix_getColumn(t_FieldMatrix *self, PyObject *arg);
      static PyObject *t_FieldMatrix_getColumnMatrix(t_FieldMatrix *self, PyObject *arg);
      static PyObject *t_FieldMatrix_getColumnVector(t_FieldMatrix *self, PyObject *arg);
      static PyObject *t_FieldMatrix_getData(t_FieldMatrix *self);
      static PyObject *t_FieldMatrix_getEntry(t_FieldMatrix *self, PyObject *args);
      static PyObject *t_FieldMatrix_getField(t_FieldMatrix *self);
      static PyObject *t_FieldMatrix_getRow(t_FieldMatrix *self, PyObject *arg);
      static PyObject *t_FieldMatrix_getRowMatrix(t_FieldMatrix *self, PyObject *arg);
      static PyObject *t_FieldMatrix_getRowVector(t_FieldMatrix *self, PyObject *arg);
      static PyObject *t_FieldMatrix_getSubMatrix(t_FieldMatrix *self, PyObject *args);
      static PyObject *t_FieldMatrix_getTrace(t_FieldMatrix *self);
      static PyObject *t_FieldMatrix_multiply(t_FieldMatrix *self, PyObject *arg);
      static PyObject *t_FieldMatrix_multiplyEntry(t_FieldMatrix *self, PyObject *args);
      static PyObject *t_FieldMatrix_multiplyTransposed(t_FieldMatrix *self, PyObject *arg);
      static PyObject *t_FieldMatrix_operate(t_FieldMatrix *self, PyObject *args);
      static PyObject *t_FieldMatrix_power(t_FieldMatrix *self, PyObject *arg);
      static PyObject *t_FieldMatrix_preMultiply(t_FieldMatrix *self, PyObject *args);
      static PyObject *t_FieldMatrix_scalarAdd(t_FieldMatrix *self, PyObject *arg);
      static PyObject *t_FieldMatrix_scalarMultiply(t_FieldMatrix *self, PyObject *arg);
      static PyObject *t_FieldMatrix_setColumn(t_FieldMatrix *self, PyObject *args);
      static PyObject *t_FieldMatrix_setColumnMatrix(t_FieldMatrix *self, PyObject *args);
      static PyObject *t_FieldMatrix_setColumnVector(t_FieldMatrix *self, PyObject *args);
      static PyObject *t_FieldMatrix_setEntry(t_FieldMatrix *self, PyObject *args);
      static PyObject *t_FieldMatrix_setRow(t_FieldMatrix *self, PyObject *args);
      static PyObject *t_FieldMatrix_setRowMatrix(t_FieldMatrix *self, PyObject *args);
      static PyObject *t_FieldMatrix_setRowVector(t_FieldMatrix *self, PyObject *args);
      static PyObject *t_FieldMatrix_setSubMatrix(t_FieldMatrix *self, PyObject *args);
      static PyObject *t_FieldMatrix_subtract(t_FieldMatrix *self, PyObject *arg);
      static PyObject *t_FieldMatrix_transpose(t_FieldMatrix *self);
      static PyObject *t_FieldMatrix_transposeMultiply(t_FieldMatrix *self, PyObject *arg);
      static PyObject *t_FieldMatrix_walkInColumnOrder(t_FieldMatrix *self, PyObject *args);
      static PyObject *t_FieldMatrix_walkInOptimizedOrder(t_FieldMatrix *self, PyObject *args);
      static PyObject *t_FieldMatrix_walkInRowOrder(t_FieldMatrix *self, PyObject *args);
      static PyObject *t_FieldMatrix_get__data(t_FieldMatrix *self, void *data);
      static PyObject *t_FieldMatrix_get__field(t_FieldMatrix *self, void *data);
      static PyObject *t_FieldMatrix_get__trace(t_FieldMatrix *self, void *data);
      static PyObject *t_FieldMatrix_get__parameters_(t_FieldMatrix *self, void *data);
      static PyGetSetDef t_FieldMatrix__fields_[] = {
        DECLARE_GET_FIELD(t_FieldMatrix, data),
        DECLARE_GET_FIELD(t_FieldMatrix, field),
        DECLARE_GET_FIELD(t_FieldMatrix, trace),
        DECLARE_GET_FIELD(t_FieldMatrix, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_FieldMatrix__methods_[] = {
        DECLARE_METHOD(t_FieldMatrix, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldMatrix, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldMatrix, of_, METH_VARARGS),
        DECLARE_METHOD(t_FieldMatrix, add, METH_O),
        DECLARE_METHOD(t_FieldMatrix, addToEntry, METH_VARARGS),
        DECLARE_METHOD(t_FieldMatrix, blendArithmeticallyWith, METH_VARARGS),
        DECLARE_METHOD(t_FieldMatrix, copy, METH_NOARGS),
        DECLARE_METHOD(t_FieldMatrix, copySubMatrix, METH_VARARGS),
        DECLARE_METHOD(t_FieldMatrix, createMatrix, METH_VARARGS),
        DECLARE_METHOD(t_FieldMatrix, getColumn, METH_O),
        DECLARE_METHOD(t_FieldMatrix, getColumnMatrix, METH_O),
        DECLARE_METHOD(t_FieldMatrix, getColumnVector, METH_O),
        DECLARE_METHOD(t_FieldMatrix, getData, METH_NOARGS),
        DECLARE_METHOD(t_FieldMatrix, getEntry, METH_VARARGS),
        DECLARE_METHOD(t_FieldMatrix, getField, METH_NOARGS),
        DECLARE_METHOD(t_FieldMatrix, getRow, METH_O),
        DECLARE_METHOD(t_FieldMatrix, getRowMatrix, METH_O),
        DECLARE_METHOD(t_FieldMatrix, getRowVector, METH_O),
        DECLARE_METHOD(t_FieldMatrix, getSubMatrix, METH_VARARGS),
        DECLARE_METHOD(t_FieldMatrix, getTrace, METH_NOARGS),
        DECLARE_METHOD(t_FieldMatrix, multiply, METH_O),
        DECLARE_METHOD(t_FieldMatrix, multiplyEntry, METH_VARARGS),
        DECLARE_METHOD(t_FieldMatrix, multiplyTransposed, METH_O),
        DECLARE_METHOD(t_FieldMatrix, operate, METH_VARARGS),
        DECLARE_METHOD(t_FieldMatrix, power, METH_O),
        DECLARE_METHOD(t_FieldMatrix, preMultiply, METH_VARARGS),
        DECLARE_METHOD(t_FieldMatrix, scalarAdd, METH_O),
        DECLARE_METHOD(t_FieldMatrix, scalarMultiply, METH_O),
        DECLARE_METHOD(t_FieldMatrix, setColumn, METH_VARARGS),
        DECLARE_METHOD(t_FieldMatrix, setColumnMatrix, METH_VARARGS),
        DECLARE_METHOD(t_FieldMatrix, setColumnVector, METH_VARARGS),
        DECLARE_METHOD(t_FieldMatrix, setEntry, METH_VARARGS),
        DECLARE_METHOD(t_FieldMatrix, setRow, METH_VARARGS),
        DECLARE_METHOD(t_FieldMatrix, setRowMatrix, METH_VARARGS),
        DECLARE_METHOD(t_FieldMatrix, setRowVector, METH_VARARGS),
        DECLARE_METHOD(t_FieldMatrix, setSubMatrix, METH_VARARGS),
        DECLARE_METHOD(t_FieldMatrix, subtract, METH_O),
        DECLARE_METHOD(t_FieldMatrix, transpose, METH_NOARGS),
        DECLARE_METHOD(t_FieldMatrix, transposeMultiply, METH_O),
        DECLARE_METHOD(t_FieldMatrix, walkInColumnOrder, METH_VARARGS),
        DECLARE_METHOD(t_FieldMatrix, walkInOptimizedOrder, METH_VARARGS),
        DECLARE_METHOD(t_FieldMatrix, walkInRowOrder, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(FieldMatrix)[] = {
        { Py_tp_methods, t_FieldMatrix__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_FieldMatrix__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(FieldMatrix)[] = {
        &PY_TYPE_DEF(::org::hipparchus::linear::AnyMatrix),
        NULL
      };

      DEFINE_TYPE(FieldMatrix, t_FieldMatrix, FieldMatrix);
      PyObject *t_FieldMatrix::wrap_Object(const FieldMatrix& object, PyTypeObject *p0)
      {
        PyObject *obj = t_FieldMatrix::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_FieldMatrix *self = (t_FieldMatrix *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_FieldMatrix::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_FieldMatrix::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_FieldMatrix *self = (t_FieldMatrix *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_FieldMatrix::install(PyObject *module)
      {
        installType(&PY_TYPE(FieldMatrix), &PY_TYPE_DEF(FieldMatrix), module, "FieldMatrix", 0);
      }

      void t_FieldMatrix::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldMatrix), "class_", make_descriptor(FieldMatrix::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldMatrix), "wrapfn_", make_descriptor(t_FieldMatrix::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldMatrix), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_FieldMatrix_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, FieldMatrix::initializeClass, 1)))
          return NULL;
        return t_FieldMatrix::wrap_Object(FieldMatrix(((t_FieldMatrix *) arg)->object.this$));
      }
      static PyObject *t_FieldMatrix_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, FieldMatrix::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_FieldMatrix_of_(t_FieldMatrix *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static PyObject *t_FieldMatrix_add(t_FieldMatrix *self, PyObject *arg)
      {
        FieldMatrix a0((jobject) NULL);
        PyTypeObject **p0;
        FieldMatrix result((jobject) NULL);

        if (!parseArg(arg, "K", FieldMatrix::initializeClass, &a0, &p0, t_FieldMatrix::parameters_))
        {
          OBJ_CALL(result = self->object.add(a0));
          return t_FieldMatrix::wrap_Object(result, self->parameters[0]);
        }

        PyErr_SetArgsError((PyObject *) self, "add", arg);
        return NULL;
      }

      static PyObject *t_FieldMatrix_addToEntry(t_FieldMatrix *self, PyObject *args)
      {
        jint a0;
        jint a1;
        ::org::hipparchus::FieldElement a2((jobject) NULL);
        PyTypeObject **p2;

        if (!parseArgs(args, "IIK", ::org::hipparchus::FieldElement::initializeClass, &a0, &a1, &a2, &p2, ::org::hipparchus::t_FieldElement::parameters_))
        {
          OBJ_CALL(self->object.addToEntry(a0, a1, a2));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "addToEntry", args);
        return NULL;
      }

      static PyObject *t_FieldMatrix_blendArithmeticallyWith(t_FieldMatrix *self, PyObject *args)
      {
        FieldMatrix a0((jobject) NULL);
        PyTypeObject **p0;
        ::org::hipparchus::FieldElement a1((jobject) NULL);
        PyTypeObject **p1;
        FieldMatrix result((jobject) NULL);

        if (!parseArgs(args, "KK", FieldMatrix::initializeClass, ::org::hipparchus::FieldElement::initializeClass, &a0, &p0, t_FieldMatrix::parameters_, &a1, &p1, ::org::hipparchus::t_FieldElement::parameters_))
        {
          OBJ_CALL(result = self->object.blendArithmeticallyWith(a0, a1));
          return t_FieldMatrix::wrap_Object(result, self->parameters[0]);
        }

        PyErr_SetArgsError((PyObject *) self, "blendArithmeticallyWith", args);
        return NULL;
      }

      static PyObject *t_FieldMatrix_copy(t_FieldMatrix *self)
      {
        FieldMatrix result((jobject) NULL);
        OBJ_CALL(result = self->object.copy());
        return t_FieldMatrix::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_FieldMatrix_copySubMatrix(t_FieldMatrix *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 3:
          {
            JArray< jint > a0((jobject) NULL);
            JArray< jint > a1((jobject) NULL);
            JArray< JArray< ::org::hipparchus::FieldElement > > a2((jobject) NULL);
            PyTypeObject **p2;

            if (!parseArgs(args, "[I[I[[K", ::org::hipparchus::FieldElement::initializeClass, &a0, &a1, &a2, &p2, ::org::hipparchus::t_FieldElement::parameters_))
            {
              OBJ_CALL(self->object.copySubMatrix(a0, a1, a2));
              Py_RETURN_NONE;
            }
          }
          break;
         case 5:
          {
            jint a0;
            jint a1;
            jint a2;
            jint a3;
            JArray< JArray< ::org::hipparchus::FieldElement > > a4((jobject) NULL);
            PyTypeObject **p4;

            if (!parseArgs(args, "IIII[[K", ::org::hipparchus::FieldElement::initializeClass, &a0, &a1, &a2, &a3, &a4, &p4, ::org::hipparchus::t_FieldElement::parameters_))
            {
              OBJ_CALL(self->object.copySubMatrix(a0, a1, a2, a3, a4));
              Py_RETURN_NONE;
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "copySubMatrix", args);
        return NULL;
      }

      static PyObject *t_FieldMatrix_createMatrix(t_FieldMatrix *self, PyObject *args)
      {
        jint a0;
        jint a1;
        FieldMatrix result((jobject) NULL);

        if (!parseArgs(args, "II", &a0, &a1))
        {
          OBJ_CALL(result = self->object.createMatrix(a0, a1));
          return t_FieldMatrix::wrap_Object(result, self->parameters[0]);
        }

        PyErr_SetArgsError((PyObject *) self, "createMatrix", args);
        return NULL;
      }

      static PyObject *t_FieldMatrix_getColumn(t_FieldMatrix *self, PyObject *arg)
      {
        jint a0;
        JArray< ::org::hipparchus::FieldElement > result((jobject) NULL);

        if (!parseArg(arg, "I", &a0))
        {
          OBJ_CALL(result = self->object.getColumn(a0));
          return JArray<jobject>(result.this$).wrap(::org::hipparchus::t_FieldElement::wrap_jobject);
        }

        PyErr_SetArgsError((PyObject *) self, "getColumn", arg);
        return NULL;
      }

      static PyObject *t_FieldMatrix_getColumnMatrix(t_FieldMatrix *self, PyObject *arg)
      {
        jint a0;
        FieldMatrix result((jobject) NULL);

        if (!parseArg(arg, "I", &a0))
        {
          OBJ_CALL(result = self->object.getColumnMatrix(a0));
          return t_FieldMatrix::wrap_Object(result, self->parameters[0]);
        }

        PyErr_SetArgsError((PyObject *) self, "getColumnMatrix", arg);
        return NULL;
      }

      static PyObject *t_FieldMatrix_getColumnVector(t_FieldMatrix *self, PyObject *arg)
      {
        jint a0;
        ::org::hipparchus::linear::FieldVector result((jobject) NULL);

        if (!parseArg(arg, "I", &a0))
        {
          OBJ_CALL(result = self->object.getColumnVector(a0));
          return ::org::hipparchus::linear::t_FieldVector::wrap_Object(result, self->parameters[0]);
        }

        PyErr_SetArgsError((PyObject *) self, "getColumnVector", arg);
        return NULL;
      }

      static PyObject *t_FieldMatrix_getData(t_FieldMatrix *self)
      {
        JArray< JArray< ::org::hipparchus::FieldElement > > result((jobject) NULL);
        OBJ_CALL(result = self->object.getData());
        return JArray<jobject>(result.this$).wrap(NULL);
      }

      static PyObject *t_FieldMatrix_getEntry(t_FieldMatrix *self, PyObject *args)
      {
        jint a0;
        jint a1;
        ::org::hipparchus::FieldElement result((jobject) NULL);

        if (!parseArgs(args, "II", &a0, &a1))
        {
          OBJ_CALL(result = self->object.getEntry(a0, a1));
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_FieldElement::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "getEntry", args);
        return NULL;
      }

      static PyObject *t_FieldMatrix_getField(t_FieldMatrix *self)
      {
        ::org::hipparchus::Field result((jobject) NULL);
        OBJ_CALL(result = self->object.getField());
        return ::org::hipparchus::t_Field::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_FieldMatrix_getRow(t_FieldMatrix *self, PyObject *arg)
      {
        jint a0;
        JArray< ::org::hipparchus::FieldElement > result((jobject) NULL);

        if (!parseArg(arg, "I", &a0))
        {
          OBJ_CALL(result = self->object.getRow(a0));
          return JArray<jobject>(result.this$).wrap(::org::hipparchus::t_FieldElement::wrap_jobject);
        }

        PyErr_SetArgsError((PyObject *) self, "getRow", arg);
        return NULL;
      }

      static PyObject *t_FieldMatrix_getRowMatrix(t_FieldMatrix *self, PyObject *arg)
      {
        jint a0;
        FieldMatrix result((jobject) NULL);

        if (!parseArg(arg, "I", &a0))
        {
          OBJ_CALL(result = self->object.getRowMatrix(a0));
          return t_FieldMatrix::wrap_Object(result, self->parameters[0]);
        }

        PyErr_SetArgsError((PyObject *) self, "getRowMatrix", arg);
        return NULL;
      }

      static PyObject *t_FieldMatrix_getRowVector(t_FieldMatrix *self, PyObject *arg)
      {
        jint a0;
        ::org::hipparchus::linear::FieldVector result((jobject) NULL);

        if (!parseArg(arg, "I", &a0))
        {
          OBJ_CALL(result = self->object.getRowVector(a0));
          return ::org::hipparchus::linear::t_FieldVector::wrap_Object(result, self->parameters[0]);
        }

        PyErr_SetArgsError((PyObject *) self, "getRowVector", arg);
        return NULL;
      }

      static PyObject *t_FieldMatrix_getSubMatrix(t_FieldMatrix *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 2:
          {
            JArray< jint > a0((jobject) NULL);
            JArray< jint > a1((jobject) NULL);
            FieldMatrix result((jobject) NULL);

            if (!parseArgs(args, "[I[I", &a0, &a1))
            {
              OBJ_CALL(result = self->object.getSubMatrix(a0, a1));
              return t_FieldMatrix::wrap_Object(result, self->parameters[0]);
            }
          }
          break;
         case 4:
          {
            jint a0;
            jint a1;
            jint a2;
            jint a3;
            FieldMatrix result((jobject) NULL);

            if (!parseArgs(args, "IIII", &a0, &a1, &a2, &a3))
            {
              OBJ_CALL(result = self->object.getSubMatrix(a0, a1, a2, a3));
              return t_FieldMatrix::wrap_Object(result, self->parameters[0]);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "getSubMatrix", args);
        return NULL;
      }

      static PyObject *t_FieldMatrix_getTrace(t_FieldMatrix *self)
      {
        ::org::hipparchus::FieldElement result((jobject) NULL);
        OBJ_CALL(result = self->object.getTrace());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_FieldElement::wrap_Object(result);
      }

      static PyObject *t_FieldMatrix_multiply(t_FieldMatrix *self, PyObject *arg)
      {
        FieldMatrix a0((jobject) NULL);
        PyTypeObject **p0;
        FieldMatrix result((jobject) NULL);

        if (!parseArg(arg, "K", FieldMatrix::initializeClass, &a0, &p0, t_FieldMatrix::parameters_))
        {
          OBJ_CALL(result = self->object.multiply(a0));
          return t_FieldMatrix::wrap_Object(result, self->parameters[0]);
        }

        PyErr_SetArgsError((PyObject *) self, "multiply", arg);
        return NULL;
      }

      static PyObject *t_FieldMatrix_multiplyEntry(t_FieldMatrix *self, PyObject *args)
      {
        jint a0;
        jint a1;
        ::org::hipparchus::FieldElement a2((jobject) NULL);
        PyTypeObject **p2;

        if (!parseArgs(args, "IIK", ::org::hipparchus::FieldElement::initializeClass, &a0, &a1, &a2, &p2, ::org::hipparchus::t_FieldElement::parameters_))
        {
          OBJ_CALL(self->object.multiplyEntry(a0, a1, a2));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "multiplyEntry", args);
        return NULL;
      }

      static PyObject *t_FieldMatrix_multiplyTransposed(t_FieldMatrix *self, PyObject *arg)
      {
        FieldMatrix a0((jobject) NULL);
        PyTypeObject **p0;
        FieldMatrix result((jobject) NULL);

        if (!parseArg(arg, "K", FieldMatrix::initializeClass, &a0, &p0, t_FieldMatrix::parameters_))
        {
          OBJ_CALL(result = self->object.multiplyTransposed(a0));
          return t_FieldMatrix::wrap_Object(result, self->parameters[0]);
        }

        PyErr_SetArgsError((PyObject *) self, "multiplyTransposed", arg);
        return NULL;
      }

      static PyObject *t_FieldMatrix_operate(t_FieldMatrix *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            JArray< ::org::hipparchus::FieldElement > a0((jobject) NULL);
            PyTypeObject **p0;
            JArray< ::org::hipparchus::FieldElement > result((jobject) NULL);

            if (!parseArgs(args, "[K", ::org::hipparchus::FieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_FieldElement::parameters_))
            {
              OBJ_CALL(result = self->object.operate(a0));
              return JArray<jobject>(result.this$).wrap(::org::hipparchus::t_FieldElement::wrap_jobject);
            }
          }
          {
            ::org::hipparchus::linear::FieldVector a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::linear::FieldVector result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::linear::FieldVector::initializeClass, &a0, &p0, ::org::hipparchus::linear::t_FieldVector::parameters_))
            {
              OBJ_CALL(result = self->object.operate(a0));
              return ::org::hipparchus::linear::t_FieldVector::wrap_Object(result, self->parameters[0]);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "operate", args);
        return NULL;
      }

      static PyObject *t_FieldMatrix_power(t_FieldMatrix *self, PyObject *arg)
      {
        jint a0;
        FieldMatrix result((jobject) NULL);

        if (!parseArg(arg, "I", &a0))
        {
          OBJ_CALL(result = self->object.power(a0));
          return t_FieldMatrix::wrap_Object(result, self->parameters[0]);
        }

        PyErr_SetArgsError((PyObject *) self, "power", arg);
        return NULL;
      }

      static PyObject *t_FieldMatrix_preMultiply(t_FieldMatrix *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            JArray< ::org::hipparchus::FieldElement > a0((jobject) NULL);
            PyTypeObject **p0;
            JArray< ::org::hipparchus::FieldElement > result((jobject) NULL);

            if (!parseArgs(args, "[K", ::org::hipparchus::FieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_FieldElement::parameters_))
            {
              OBJ_CALL(result = self->object.preMultiply(a0));
              return JArray<jobject>(result.this$).wrap(::org::hipparchus::t_FieldElement::wrap_jobject);
            }
          }
          {
            FieldMatrix a0((jobject) NULL);
            PyTypeObject **p0;
            FieldMatrix result((jobject) NULL);

            if (!parseArgs(args, "K", FieldMatrix::initializeClass, &a0, &p0, t_FieldMatrix::parameters_))
            {
              OBJ_CALL(result = self->object.preMultiply(a0));
              return t_FieldMatrix::wrap_Object(result, self->parameters[0]);
            }
          }
          {
            ::org::hipparchus::linear::FieldVector a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::linear::FieldVector result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::linear::FieldVector::initializeClass, &a0, &p0, ::org::hipparchus::linear::t_FieldVector::parameters_))
            {
              OBJ_CALL(result = self->object.preMultiply(a0));
              return ::org::hipparchus::linear::t_FieldVector::wrap_Object(result, self->parameters[0]);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "preMultiply", args);
        return NULL;
      }

      static PyObject *t_FieldMatrix_scalarAdd(t_FieldMatrix *self, PyObject *arg)
      {
        ::org::hipparchus::FieldElement a0((jobject) NULL);
        PyTypeObject **p0;
        FieldMatrix result((jobject) NULL);

        if (!parseArg(arg, "K", ::org::hipparchus::FieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_FieldElement::parameters_))
        {
          OBJ_CALL(result = self->object.scalarAdd(a0));
          return t_FieldMatrix::wrap_Object(result, self->parameters[0]);
        }

        PyErr_SetArgsError((PyObject *) self, "scalarAdd", arg);
        return NULL;
      }

      static PyObject *t_FieldMatrix_scalarMultiply(t_FieldMatrix *self, PyObject *arg)
      {
        ::org::hipparchus::FieldElement a0((jobject) NULL);
        PyTypeObject **p0;
        FieldMatrix result((jobject) NULL);

        if (!parseArg(arg, "K", ::org::hipparchus::FieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_FieldElement::parameters_))
        {
          OBJ_CALL(result = self->object.scalarMultiply(a0));
          return t_FieldMatrix::wrap_Object(result, self->parameters[0]);
        }

        PyErr_SetArgsError((PyObject *) self, "scalarMultiply", arg);
        return NULL;
      }

      static PyObject *t_FieldMatrix_setColumn(t_FieldMatrix *self, PyObject *args)
      {
        jint a0;
        JArray< ::org::hipparchus::FieldElement > a1((jobject) NULL);
        PyTypeObject **p1;

        if (!parseArgs(args, "I[K", ::org::hipparchus::FieldElement::initializeClass, &a0, &a1, &p1, ::org::hipparchus::t_FieldElement::parameters_))
        {
          OBJ_CALL(self->object.setColumn(a0, a1));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "setColumn", args);
        return NULL;
      }

      static PyObject *t_FieldMatrix_setColumnMatrix(t_FieldMatrix *self, PyObject *args)
      {
        jint a0;
        FieldMatrix a1((jobject) NULL);
        PyTypeObject **p1;

        if (!parseArgs(args, "IK", FieldMatrix::initializeClass, &a0, &a1, &p1, t_FieldMatrix::parameters_))
        {
          OBJ_CALL(self->object.setColumnMatrix(a0, a1));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "setColumnMatrix", args);
        return NULL;
      }

      static PyObject *t_FieldMatrix_setColumnVector(t_FieldMatrix *self, PyObject *args)
      {
        jint a0;
        ::org::hipparchus::linear::FieldVector a1((jobject) NULL);
        PyTypeObject **p1;

        if (!parseArgs(args, "IK", ::org::hipparchus::linear::FieldVector::initializeClass, &a0, &a1, &p1, ::org::hipparchus::linear::t_FieldVector::parameters_))
        {
          OBJ_CALL(self->object.setColumnVector(a0, a1));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "setColumnVector", args);
        return NULL;
      }

      static PyObject *t_FieldMatrix_setEntry(t_FieldMatrix *self, PyObject *args)
      {
        jint a0;
        jint a1;
        ::org::hipparchus::FieldElement a2((jobject) NULL);
        PyTypeObject **p2;

        if (!parseArgs(args, "IIK", ::org::hipparchus::FieldElement::initializeClass, &a0, &a1, &a2, &p2, ::org::hipparchus::t_FieldElement::parameters_))
        {
          OBJ_CALL(self->object.setEntry(a0, a1, a2));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "setEntry", args);
        return NULL;
      }

      static PyObject *t_FieldMatrix_setRow(t_FieldMatrix *self, PyObject *args)
      {
        jint a0;
        JArray< ::org::hipparchus::FieldElement > a1((jobject) NULL);
        PyTypeObject **p1;

        if (!parseArgs(args, "I[K", ::org::hipparchus::FieldElement::initializeClass, &a0, &a1, &p1, ::org::hipparchus::t_FieldElement::parameters_))
        {
          OBJ_CALL(self->object.setRow(a0, a1));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "setRow", args);
        return NULL;
      }

      static PyObject *t_FieldMatrix_setRowMatrix(t_FieldMatrix *self, PyObject *args)
      {
        jint a0;
        FieldMatrix a1((jobject) NULL);
        PyTypeObject **p1;

        if (!parseArgs(args, "IK", FieldMatrix::initializeClass, &a0, &a1, &p1, t_FieldMatrix::parameters_))
        {
          OBJ_CALL(self->object.setRowMatrix(a0, a1));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "setRowMatrix", args);
        return NULL;
      }

      static PyObject *t_FieldMatrix_setRowVector(t_FieldMatrix *self, PyObject *args)
      {
        jint a0;
        ::org::hipparchus::linear::FieldVector a1((jobject) NULL);
        PyTypeObject **p1;

        if (!parseArgs(args, "IK", ::org::hipparchus::linear::FieldVector::initializeClass, &a0, &a1, &p1, ::org::hipparchus::linear::t_FieldVector::parameters_))
        {
          OBJ_CALL(self->object.setRowVector(a0, a1));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "setRowVector", args);
        return NULL;
      }

      static PyObject *t_FieldMatrix_setSubMatrix(t_FieldMatrix *self, PyObject *args)
      {
        JArray< JArray< ::org::hipparchus::FieldElement > > a0((jobject) NULL);
        PyTypeObject **p0;
        jint a1;
        jint a2;

        if (!parseArgs(args, "[[KII", ::org::hipparchus::FieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_FieldElement::parameters_, &a1, &a2))
        {
          OBJ_CALL(self->object.setSubMatrix(a0, a1, a2));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "setSubMatrix", args);
        return NULL;
      }

      static PyObject *t_FieldMatrix_subtract(t_FieldMatrix *self, PyObject *arg)
      {
        FieldMatrix a0((jobject) NULL);
        PyTypeObject **p0;
        FieldMatrix result((jobject) NULL);

        if (!parseArg(arg, "K", FieldMatrix::initializeClass, &a0, &p0, t_FieldMatrix::parameters_))
        {
          OBJ_CALL(result = self->object.subtract(a0));
          return t_FieldMatrix::wrap_Object(result, self->parameters[0]);
        }

        PyErr_SetArgsError((PyObject *) self, "subtract", arg);
        return NULL;
      }

      static PyObject *t_FieldMatrix_transpose(t_FieldMatrix *self)
      {
        FieldMatrix result((jobject) NULL);
        OBJ_CALL(result = self->object.transpose());
        return t_FieldMatrix::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_FieldMatrix_transposeMultiply(t_FieldMatrix *self, PyObject *arg)
      {
        FieldMatrix a0((jobject) NULL);
        PyTypeObject **p0;
        FieldMatrix result((jobject) NULL);

        if (!parseArg(arg, "K", FieldMatrix::initializeClass, &a0, &p0, t_FieldMatrix::parameters_))
        {
          OBJ_CALL(result = self->object.transposeMultiply(a0));
          return t_FieldMatrix::wrap_Object(result, self->parameters[0]);
        }

        PyErr_SetArgsError((PyObject *) self, "transposeMultiply", arg);
        return NULL;
      }

      static PyObject *t_FieldMatrix_walkInColumnOrder(t_FieldMatrix *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::hipparchus::linear::FieldMatrixChangingVisitor a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::FieldElement result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::linear::FieldMatrixChangingVisitor::initializeClass, &a0, &p0, ::org::hipparchus::linear::t_FieldMatrixChangingVisitor::parameters_))
            {
              OBJ_CALL(result = self->object.walkInColumnOrder(a0));
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_FieldElement::wrap_Object(result);
            }
          }
          {
            ::org::hipparchus::linear::FieldMatrixPreservingVisitor a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::FieldElement result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::linear::FieldMatrixPreservingVisitor::initializeClass, &a0, &p0, ::org::hipparchus::linear::t_FieldMatrixPreservingVisitor::parameters_))
            {
              OBJ_CALL(result = self->object.walkInColumnOrder(a0));
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_FieldElement::wrap_Object(result);
            }
          }
          break;
         case 5:
          {
            ::org::hipparchus::linear::FieldMatrixChangingVisitor a0((jobject) NULL);
            PyTypeObject **p0;
            jint a1;
            jint a2;
            jint a3;
            jint a4;
            ::org::hipparchus::FieldElement result((jobject) NULL);

            if (!parseArgs(args, "KIIII", ::org::hipparchus::linear::FieldMatrixChangingVisitor::initializeClass, &a0, &p0, ::org::hipparchus::linear::t_FieldMatrixChangingVisitor::parameters_, &a1, &a2, &a3, &a4))
            {
              OBJ_CALL(result = self->object.walkInColumnOrder(a0, a1, a2, a3, a4));
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_FieldElement::wrap_Object(result);
            }
          }
          {
            ::org::hipparchus::linear::FieldMatrixPreservingVisitor a0((jobject) NULL);
            PyTypeObject **p0;
            jint a1;
            jint a2;
            jint a3;
            jint a4;
            ::org::hipparchus::FieldElement result((jobject) NULL);

            if (!parseArgs(args, "KIIII", ::org::hipparchus::linear::FieldMatrixPreservingVisitor::initializeClass, &a0, &p0, ::org::hipparchus::linear::t_FieldMatrixPreservingVisitor::parameters_, &a1, &a2, &a3, &a4))
            {
              OBJ_CALL(result = self->object.walkInColumnOrder(a0, a1, a2, a3, a4));
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_FieldElement::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "walkInColumnOrder", args);
        return NULL;
      }

      static PyObject *t_FieldMatrix_walkInOptimizedOrder(t_FieldMatrix *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::hipparchus::linear::FieldMatrixChangingVisitor a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::FieldElement result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::linear::FieldMatrixChangingVisitor::initializeClass, &a0, &p0, ::org::hipparchus::linear::t_FieldMatrixChangingVisitor::parameters_))
            {
              OBJ_CALL(result = self->object.walkInOptimizedOrder(a0));
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_FieldElement::wrap_Object(result);
            }
          }
          {
            ::org::hipparchus::linear::FieldMatrixPreservingVisitor a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::FieldElement result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::linear::FieldMatrixPreservingVisitor::initializeClass, &a0, &p0, ::org::hipparchus::linear::t_FieldMatrixPreservingVisitor::parameters_))
            {
              OBJ_CALL(result = self->object.walkInOptimizedOrder(a0));
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_FieldElement::wrap_Object(result);
            }
          }
          break;
         case 5:
          {
            ::org::hipparchus::linear::FieldMatrixChangingVisitor a0((jobject) NULL);
            PyTypeObject **p0;
            jint a1;
            jint a2;
            jint a3;
            jint a4;
            ::org::hipparchus::FieldElement result((jobject) NULL);

            if (!parseArgs(args, "KIIII", ::org::hipparchus::linear::FieldMatrixChangingVisitor::initializeClass, &a0, &p0, ::org::hipparchus::linear::t_FieldMatrixChangingVisitor::parameters_, &a1, &a2, &a3, &a4))
            {
              OBJ_CALL(result = self->object.walkInOptimizedOrder(a0, a1, a2, a3, a4));
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_FieldElement::wrap_Object(result);
            }
          }
          {
            ::org::hipparchus::linear::FieldMatrixPreservingVisitor a0((jobject) NULL);
            PyTypeObject **p0;
            jint a1;
            jint a2;
            jint a3;
            jint a4;
            ::org::hipparchus::FieldElement result((jobject) NULL);

            if (!parseArgs(args, "KIIII", ::org::hipparchus::linear::FieldMatrixPreservingVisitor::initializeClass, &a0, &p0, ::org::hipparchus::linear::t_FieldMatrixPreservingVisitor::parameters_, &a1, &a2, &a3, &a4))
            {
              OBJ_CALL(result = self->object.walkInOptimizedOrder(a0, a1, a2, a3, a4));
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_FieldElement::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "walkInOptimizedOrder", args);
        return NULL;
      }

      static PyObject *t_FieldMatrix_walkInRowOrder(t_FieldMatrix *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::hipparchus::linear::FieldMatrixChangingVisitor a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::FieldElement result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::linear::FieldMatrixChangingVisitor::initializeClass, &a0, &p0, ::org::hipparchus::linear::t_FieldMatrixChangingVisitor::parameters_))
            {
              OBJ_CALL(result = self->object.walkInRowOrder(a0));
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_FieldElement::wrap_Object(result);
            }
          }
          {
            ::org::hipparchus::linear::FieldMatrixPreservingVisitor a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::FieldElement result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::linear::FieldMatrixPreservingVisitor::initializeClass, &a0, &p0, ::org::hipparchus::linear::t_FieldMatrixPreservingVisitor::parameters_))
            {
              OBJ_CALL(result = self->object.walkInRowOrder(a0));
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_FieldElement::wrap_Object(result);
            }
          }
          break;
         case 5:
          {
            ::org::hipparchus::linear::FieldMatrixChangingVisitor a0((jobject) NULL);
            PyTypeObject **p0;
            jint a1;
            jint a2;
            jint a3;
            jint a4;
            ::org::hipparchus::FieldElement result((jobject) NULL);

            if (!parseArgs(args, "KIIII", ::org::hipparchus::linear::FieldMatrixChangingVisitor::initializeClass, &a0, &p0, ::org::hipparchus::linear::t_FieldMatrixChangingVisitor::parameters_, &a1, &a2, &a3, &a4))
            {
              OBJ_CALL(result = self->object.walkInRowOrder(a0, a1, a2, a3, a4));
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_FieldElement::wrap_Object(result);
            }
          }
          {
            ::org::hipparchus::linear::FieldMatrixPreservingVisitor a0((jobject) NULL);
            PyTypeObject **p0;
            jint a1;
            jint a2;
            jint a3;
            jint a4;
            ::org::hipparchus::FieldElement result((jobject) NULL);

            if (!parseArgs(args, "KIIII", ::org::hipparchus::linear::FieldMatrixPreservingVisitor::initializeClass, &a0, &p0, ::org::hipparchus::linear::t_FieldMatrixPreservingVisitor::parameters_, &a1, &a2, &a3, &a4))
            {
              OBJ_CALL(result = self->object.walkInRowOrder(a0, a1, a2, a3, a4));
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_FieldElement::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "walkInRowOrder", args);
        return NULL;
      }
      static PyObject *t_FieldMatrix_get__parameters_(t_FieldMatrix *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }

      static PyObject *t_FieldMatrix_get__data(t_FieldMatrix *self, void *data)
      {
        JArray< JArray< ::org::hipparchus::FieldElement > > value((jobject) NULL);
        OBJ_CALL(value = self->object.getData());
        return JArray<jobject>(value.this$).wrap(NULL);
      }

      static PyObject *t_FieldMatrix_get__field(t_FieldMatrix *self, void *data)
      {
        ::org::hipparchus::Field value((jobject) NULL);
        OBJ_CALL(value = self->object.getField());
        return ::org::hipparchus::t_Field::wrap_Object(value);
      }

      static PyObject *t_FieldMatrix_get__trace(t_FieldMatrix *self, void *data)
      {
        ::org::hipparchus::FieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getTrace());
        return ::org::hipparchus::t_FieldElement::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/events/FilterType.h"
#include "org/orekit/propagation/events/FilterType.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace events {

        ::java::lang::Class *FilterType::class$ = NULL;
        jmethodID *FilterType::mids$ = NULL;
        bool FilterType::live$ = false;
        FilterType *FilterType::TRIGGER_ONLY_DECREASING_EVENTS = NULL;
        FilterType *FilterType::TRIGGER_ONLY_INCREASING_EVENTS = NULL;

        jclass FilterType::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/events/FilterType");

            mids$ = new jmethodID[max_mid];
            mids$[mid_valueOf_4d2fe7f8ce1b49be] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/propagation/events/FilterType;");
            mids$[mid_values_26bef6c1c252e0d4] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/propagation/events/FilterType;");
            mids$[mid_selectTransformer_c337672a17af8697] = env->getMethodID(cls, "selectTransformer", "(Lorg/orekit/propagation/events/Transformer;DZ)Lorg/orekit/propagation/events/Transformer;");
            mids$[mid_getTriggeredIncreasing_eee3de00fe971136] = env->getMethodID(cls, "getTriggeredIncreasing", "()Z");

            class$ = new ::java::lang::Class(cls);
            cls = (jclass) class$->this$;

            TRIGGER_ONLY_DECREASING_EVENTS = new FilterType(env->getStaticObjectField(cls, "TRIGGER_ONLY_DECREASING_EVENTS", "Lorg/orekit/propagation/events/FilterType;"));
            TRIGGER_ONLY_INCREASING_EVENTS = new FilterType(env->getStaticObjectField(cls, "TRIGGER_ONLY_INCREASING_EVENTS", "Lorg/orekit/propagation/events/FilterType;"));
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        FilterType FilterType::valueOf(const ::java::lang::String & a0)
        {
          jclass cls = env->getClass(initializeClass);
          return FilterType(env->callStaticObjectMethod(cls, mids$[mid_valueOf_4d2fe7f8ce1b49be], a0.this$));
        }

        JArray< FilterType > FilterType::values()
        {
          jclass cls = env->getClass(initializeClass);
          return JArray< FilterType >(env->callStaticObjectMethod(cls, mids$[mid_values_26bef6c1c252e0d4]));
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
        static PyObject *t_FilterType_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FilterType_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FilterType_of_(t_FilterType *self, PyObject *args);
        static PyObject *t_FilterType_valueOf(PyTypeObject *type, PyObject *args);
        static PyObject *t_FilterType_values(PyTypeObject *type);
        static PyObject *t_FilterType_get__parameters_(t_FilterType *self, void *data);
        static PyGetSetDef t_FilterType__fields_[] = {
          DECLARE_GET_FIELD(t_FilterType, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_FilterType__methods_[] = {
          DECLARE_METHOD(t_FilterType, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FilterType, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FilterType, of_, METH_VARARGS),
          DECLARE_METHOD(t_FilterType, valueOf, METH_VARARGS | METH_CLASS),
          DECLARE_METHOD(t_FilterType, values, METH_NOARGS | METH_CLASS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(FilterType)[] = {
          { Py_tp_methods, t_FilterType__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_FilterType__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(FilterType)[] = {
          &PY_TYPE_DEF(::java::lang::Enum),
          NULL
        };

        DEFINE_TYPE(FilterType, t_FilterType, FilterType);
        PyObject *t_FilterType::wrap_Object(const FilterType& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FilterType::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FilterType *self = (t_FilterType *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_FilterType::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FilterType::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FilterType *self = (t_FilterType *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_FilterType::install(PyObject *module)
        {
          installType(&PY_TYPE(FilterType), &PY_TYPE_DEF(FilterType), module, "FilterType", 0);
        }

        void t_FilterType::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(FilterType), "class_", make_descriptor(FilterType::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FilterType), "wrapfn_", make_descriptor(t_FilterType::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FilterType), "boxfn_", make_descriptor(boxObject));
          env->getClass(FilterType::initializeClass);
          PyObject_SetAttrString((PyObject *) PY_TYPE(FilterType), "TRIGGER_ONLY_DECREASING_EVENTS", make_descriptor(t_FilterType::wrap_Object(*FilterType::TRIGGER_ONLY_DECREASING_EVENTS)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FilterType), "TRIGGER_ONLY_INCREASING_EVENTS", make_descriptor(t_FilterType::wrap_Object(*FilterType::TRIGGER_ONLY_INCREASING_EVENTS)));
        }

        static PyObject *t_FilterType_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, FilterType::initializeClass, 1)))
            return NULL;
          return t_FilterType::wrap_Object(FilterType(((t_FilterType *) arg)->object.this$));
        }
        static PyObject *t_FilterType_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, FilterType::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_FilterType_of_(t_FilterType *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static PyObject *t_FilterType_valueOf(PyTypeObject *type, PyObject *args)
        {
          ::java::lang::String a0((jobject) NULL);
          FilterType result((jobject) NULL);

          if (!parseArgs(args, "s", &a0))
          {
            OBJ_CALL(result = ::org::orekit::propagation::events::FilterType::valueOf(a0));
            return t_FilterType::wrap_Object(result);
          }

          return callSuper(type, "valueOf", args, 2);
        }

        static PyObject *t_FilterType_values(PyTypeObject *type)
        {
          JArray< FilterType > result((jobject) NULL);
          OBJ_CALL(result = ::org::orekit::propagation::events::FilterType::values());
          return JArray<jobject>(result.this$).wrap(t_FilterType::wrap_jobject);
        }
        static PyObject *t_FilterType_get__parameters_(t_FilterType *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/linear/RRQRDecomposition.h"
#include "org/hipparchus/linear/DecompositionSolver.h"
#include "java/lang/Class.h"
#include "org/hipparchus/linear/RealMatrix.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace linear {

      ::java::lang::Class *RRQRDecomposition::class$ = NULL;
      jmethodID *RRQRDecomposition::mids$ = NULL;
      bool RRQRDecomposition::live$ = false;

      jclass RRQRDecomposition::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/linear/RRQRDecomposition");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_f5364c9a9d9cbd53] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/linear/RealMatrix;)V");
          mids$[mid_init$_dc02fdb8767f32bc] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/linear/RealMatrix;D)V");
          mids$[mid_getP_b2eebabce70526d8] = env->getMethodID(cls, "getP", "()Lorg/hipparchus/linear/RealMatrix;");
          mids$[mid_getRank_9e72cb20adb363fb] = env->getMethodID(cls, "getRank", "(D)I");
          mids$[mid_getSolver_ac3e6aafa2c6c596] = env->getMethodID(cls, "getSolver", "()Lorg/hipparchus/linear/DecompositionSolver;");
          mids$[mid_decompose_11ecdbb5af7ed67d] = env->getMethodID(cls, "decompose", "([[D)V");
          mids$[mid_performHouseholderReflection_5f60b0f0790bcf77] = env->getMethodID(cls, "performHouseholderReflection", "(I[[D)V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      RRQRDecomposition::RRQRDecomposition(const ::org::hipparchus::linear::RealMatrix & a0) : ::org::hipparchus::linear::QRDecomposition(env->newObject(initializeClass, &mids$, mid_init$_f5364c9a9d9cbd53, a0.this$)) {}

      RRQRDecomposition::RRQRDecomposition(const ::org::hipparchus::linear::RealMatrix & a0, jdouble a1) : ::org::hipparchus::linear::QRDecomposition(env->newObject(initializeClass, &mids$, mid_init$_dc02fdb8767f32bc, a0.this$, a1)) {}

      ::org::hipparchus::linear::RealMatrix RRQRDecomposition::getP() const
      {
        return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_getP_b2eebabce70526d8]));
      }

      jint RRQRDecomposition::getRank(jdouble a0) const
      {
        return env->callIntMethod(this$, mids$[mid_getRank_9e72cb20adb363fb], a0);
      }

      ::org::hipparchus::linear::DecompositionSolver RRQRDecomposition::getSolver() const
      {
        return ::org::hipparchus::linear::DecompositionSolver(env->callObjectMethod(this$, mids$[mid_getSolver_ac3e6aafa2c6c596]));
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
      static PyObject *t_RRQRDecomposition_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_RRQRDecomposition_instance_(PyTypeObject *type, PyObject *arg);
      static int t_RRQRDecomposition_init_(t_RRQRDecomposition *self, PyObject *args, PyObject *kwds);
      static PyObject *t_RRQRDecomposition_getP(t_RRQRDecomposition *self);
      static PyObject *t_RRQRDecomposition_getRank(t_RRQRDecomposition *self, PyObject *arg);
      static PyObject *t_RRQRDecomposition_getSolver(t_RRQRDecomposition *self, PyObject *args);
      static PyObject *t_RRQRDecomposition_get__p(t_RRQRDecomposition *self, void *data);
      static PyObject *t_RRQRDecomposition_get__solver(t_RRQRDecomposition *self, void *data);
      static PyGetSetDef t_RRQRDecomposition__fields_[] = {
        DECLARE_GET_FIELD(t_RRQRDecomposition, p),
        DECLARE_GET_FIELD(t_RRQRDecomposition, solver),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_RRQRDecomposition__methods_[] = {
        DECLARE_METHOD(t_RRQRDecomposition, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_RRQRDecomposition, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_RRQRDecomposition, getP, METH_NOARGS),
        DECLARE_METHOD(t_RRQRDecomposition, getRank, METH_O),
        DECLARE_METHOD(t_RRQRDecomposition, getSolver, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(RRQRDecomposition)[] = {
        { Py_tp_methods, t_RRQRDecomposition__methods_ },
        { Py_tp_init, (void *) t_RRQRDecomposition_init_ },
        { Py_tp_getset, t_RRQRDecomposition__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(RRQRDecomposition)[] = {
        &PY_TYPE_DEF(::org::hipparchus::linear::QRDecomposition),
        NULL
      };

      DEFINE_TYPE(RRQRDecomposition, t_RRQRDecomposition, RRQRDecomposition);

      void t_RRQRDecomposition::install(PyObject *module)
      {
        installType(&PY_TYPE(RRQRDecomposition), &PY_TYPE_DEF(RRQRDecomposition), module, "RRQRDecomposition", 0);
      }

      void t_RRQRDecomposition::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(RRQRDecomposition), "class_", make_descriptor(RRQRDecomposition::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(RRQRDecomposition), "wrapfn_", make_descriptor(t_RRQRDecomposition::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(RRQRDecomposition), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_RRQRDecomposition_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, RRQRDecomposition::initializeClass, 1)))
          return NULL;
        return t_RRQRDecomposition::wrap_Object(RRQRDecomposition(((t_RRQRDecomposition *) arg)->object.this$));
      }
      static PyObject *t_RRQRDecomposition_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, RRQRDecomposition::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_RRQRDecomposition_init_(t_RRQRDecomposition *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::hipparchus::linear::RealMatrix a0((jobject) NULL);
            RRQRDecomposition object((jobject) NULL);

            if (!parseArgs(args, "k", ::org::hipparchus::linear::RealMatrix::initializeClass, &a0))
            {
              INT_CALL(object = RRQRDecomposition(a0));
              self->object = object;
              break;
            }
          }
          goto err;
         case 2:
          {
            ::org::hipparchus::linear::RealMatrix a0((jobject) NULL);
            jdouble a1;
            RRQRDecomposition object((jobject) NULL);

            if (!parseArgs(args, "kD", ::org::hipparchus::linear::RealMatrix::initializeClass, &a0, &a1))
            {
              INT_CALL(object = RRQRDecomposition(a0, a1));
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

      static PyObject *t_RRQRDecomposition_getP(t_RRQRDecomposition *self)
      {
        ::org::hipparchus::linear::RealMatrix result((jobject) NULL);
        OBJ_CALL(result = self->object.getP());
        return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
      }

      static PyObject *t_RRQRDecomposition_getRank(t_RRQRDecomposition *self, PyObject *arg)
      {
        jdouble a0;
        jint result;

        if (!parseArg(arg, "D", &a0))
        {
          OBJ_CALL(result = self->object.getRank(a0));
          return PyLong_FromLong((long) result);
        }

        PyErr_SetArgsError((PyObject *) self, "getRank", arg);
        return NULL;
      }

      static PyObject *t_RRQRDecomposition_getSolver(t_RRQRDecomposition *self, PyObject *args)
      {
        ::org::hipparchus::linear::DecompositionSolver result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getSolver());
          return ::org::hipparchus::linear::t_DecompositionSolver::wrap_Object(result);
        }

        return callSuper(PY_TYPE(RRQRDecomposition), (PyObject *) self, "getSolver", args, 2);
      }

      static PyObject *t_RRQRDecomposition_get__p(t_RRQRDecomposition *self, void *data)
      {
        ::org::hipparchus::linear::RealMatrix value((jobject) NULL);
        OBJ_CALL(value = self->object.getP());
        return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(value);
      }

      static PyObject *t_RRQRDecomposition_get__solver(t_RRQRDecomposition *self, void *data)
      {
        ::org::hipparchus::linear::DecompositionSolver value((jobject) NULL);
        OBJ_CALL(value = self->object.getSolver());
        return ::org::hipparchus::linear::t_DecompositionSolver::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/orbits/FieldKeplerianOrbit.h"
#include "org/orekit/utils/FieldPVCoordinates.h"
#include "org/orekit/orbits/FieldKeplerianOrbit.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/hipparchus/Field.h"
#include "org/orekit/orbits/OrbitType.h"
#include "org/orekit/orbits/PositionAngleType.h"
#include "java/lang/Class.h"
#include "org/orekit/orbits/Orbit.h"
#include "org/orekit/frames/Frame.h"
#include "java/lang/IllegalArgumentException.h"
#include "org/orekit/orbits/KeplerianOrbit.h"
#include "java/lang/String.h"
#include "org/orekit/orbits/PositionAngleBased.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/orekit/utils/TimeStampedFieldPVCoordinates.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace orbits {

      ::java::lang::Class *FieldKeplerianOrbit::class$ = NULL;
      jmethodID *FieldKeplerianOrbit::mids$ = NULL;
      bool FieldKeplerianOrbit::live$ = false;

      jclass FieldKeplerianOrbit::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/orbits/FieldKeplerianOrbit");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_3e61171636c74f2c] = env->getMethodID(cls, "<init>", "(Lorg/orekit/orbits/FieldOrbit;)V");
          mids$[mid_init$_51408caef64de318] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/Field;Lorg/orekit/orbits/KeplerianOrbit;)V");
          mids$[mid_init$_0fcb30f8b968c16a] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/Field;Lorg/orekit/orbits/Orbit;)V");
          mids$[mid_init$_cc80ec5d9d193ad9] = env->getMethodID(cls, "<init>", "(Lorg/orekit/utils/TimeStampedFieldPVCoordinates;Lorg/orekit/frames/Frame;Lorg/hipparchus/CalculusFieldElement;)V");
          mids$[mid_init$_29a388389f8e2031] = env->getMethodID(cls, "<init>", "(Lorg/orekit/utils/FieldPVCoordinates;Lorg/orekit/frames/Frame;Lorg/orekit/time/FieldAbsoluteDate;Lorg/hipparchus/CalculusFieldElement;)V");
          mids$[mid_init$_bfc63e9af3b225c7] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/orbits/PositionAngleType;Lorg/orekit/frames/Frame;Lorg/orekit/time/FieldAbsoluteDate;Lorg/hipparchus/CalculusFieldElement;)V");
          mids$[mid_init$_b4fb0a8689671ebc] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/orbits/PositionAngleType;Lorg/orekit/frames/Frame;Lorg/orekit/time/FieldAbsoluteDate;Lorg/hipparchus/CalculusFieldElement;)V");
          mids$[mid_addKeplerContribution_210d5c728d3233b4] = env->getMethodID(cls, "addKeplerContribution", "(Lorg/orekit/orbits/PositionAngleType;Lorg/hipparchus/CalculusFieldElement;[Lorg/hipparchus/CalculusFieldElement;)V");
          mids$[mid_getA_08d37e3f77b7239d] = env->getMethodID(cls, "getA", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getADot_08d37e3f77b7239d] = env->getMethodID(cls, "getADot", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getAnomaly_1982048877fe3264] = env->getMethodID(cls, "getAnomaly", "(Lorg/orekit/orbits/PositionAngleType;)Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getAnomalyDot_1982048877fe3264] = env->getMethodID(cls, "getAnomalyDot", "(Lorg/orekit/orbits/PositionAngleType;)Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getCachedPositionAngleType_a6db4e6edefda4be] = env->getMethodID(cls, "getCachedPositionAngleType", "()Lorg/orekit/orbits/PositionAngleType;");
          mids$[mid_getE_08d37e3f77b7239d] = env->getMethodID(cls, "getE", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getEDot_08d37e3f77b7239d] = env->getMethodID(cls, "getEDot", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getEccentricAnomaly_08d37e3f77b7239d] = env->getMethodID(cls, "getEccentricAnomaly", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getEccentricAnomalyDot_08d37e3f77b7239d] = env->getMethodID(cls, "getEccentricAnomalyDot", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getEquinoctialEx_08d37e3f77b7239d] = env->getMethodID(cls, "getEquinoctialEx", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getEquinoctialExDot_08d37e3f77b7239d] = env->getMethodID(cls, "getEquinoctialExDot", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getEquinoctialEy_08d37e3f77b7239d] = env->getMethodID(cls, "getEquinoctialEy", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getEquinoctialEyDot_08d37e3f77b7239d] = env->getMethodID(cls, "getEquinoctialEyDot", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getHx_08d37e3f77b7239d] = env->getMethodID(cls, "getHx", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getHxDot_08d37e3f77b7239d] = env->getMethodID(cls, "getHxDot", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getHy_08d37e3f77b7239d] = env->getMethodID(cls, "getHy", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getHyDot_08d37e3f77b7239d] = env->getMethodID(cls, "getHyDot", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getI_08d37e3f77b7239d] = env->getMethodID(cls, "getI", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getIDot_08d37e3f77b7239d] = env->getMethodID(cls, "getIDot", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getLE_08d37e3f77b7239d] = env->getMethodID(cls, "getLE", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getLEDot_08d37e3f77b7239d] = env->getMethodID(cls, "getLEDot", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getLM_08d37e3f77b7239d] = env->getMethodID(cls, "getLM", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getLMDot_08d37e3f77b7239d] = env->getMethodID(cls, "getLMDot", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getLv_08d37e3f77b7239d] = env->getMethodID(cls, "getLv", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getLvDot_08d37e3f77b7239d] = env->getMethodID(cls, "getLvDot", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getMeanAnomaly_08d37e3f77b7239d] = env->getMethodID(cls, "getMeanAnomaly", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getMeanAnomalyDot_08d37e3f77b7239d] = env->getMethodID(cls, "getMeanAnomalyDot", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getPerigeeArgument_08d37e3f77b7239d] = env->getMethodID(cls, "getPerigeeArgument", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getPerigeeArgumentDot_08d37e3f77b7239d] = env->getMethodID(cls, "getPerigeeArgumentDot", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getRightAscensionOfAscendingNode_08d37e3f77b7239d] = env->getMethodID(cls, "getRightAscensionOfAscendingNode", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getRightAscensionOfAscendingNodeDot_08d37e3f77b7239d] = env->getMethodID(cls, "getRightAscensionOfAscendingNodeDot", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getTrueAnomaly_08d37e3f77b7239d] = env->getMethodID(cls, "getTrueAnomaly", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getTrueAnomalyDot_08d37e3f77b7239d] = env->getMethodID(cls, "getTrueAnomalyDot", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getType_495f818d3570b7f5] = env->getMethodID(cls, "getType", "()Lorg/orekit/orbits/OrbitType;");
          mids$[mid_hasDerivatives_eee3de00fe971136] = env->getMethodID(cls, "hasDerivatives", "()Z");
          mids$[mid_hasRates_eee3de00fe971136] = env->getMethodID(cls, "hasRates", "()Z");
          mids$[mid_removeRates_dee0bd698ab0e7f2] = env->getMethodID(cls, "removeRates", "()Lorg/orekit/orbits/FieldKeplerianOrbit;");
          mids$[mid_shiftedBy_8f749f06166e76cf] = env->getMethodID(cls, "shiftedBy", "(D)Lorg/orekit/orbits/FieldKeplerianOrbit;");
          mids$[mid_shiftedBy_d64db6b293506d39] = env->getMethodID(cls, "shiftedBy", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/orekit/orbits/FieldKeplerianOrbit;");
          mids$[mid_toOrbit_05c9859fe4d10dff] = env->getMethodID(cls, "toOrbit", "()Lorg/orekit/orbits/KeplerianOrbit;");
          mids$[mid_toString_d2c8eb4129821f0e] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");
          mids$[mid_initPosition_d1b42a6748e907f9] = env->getMethodID(cls, "initPosition", "()Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
          mids$[mid_initPVCoordinates_be698fa91827b9b2] = env->getMethodID(cls, "initPVCoordinates", "()Lorg/orekit/utils/TimeStampedFieldPVCoordinates;");
          mids$[mid_computeJacobianMeanWrtCartesian_4d010bb8d4780d51] = env->getMethodID(cls, "computeJacobianMeanWrtCartesian", "()[[Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_computeJacobianEccentricWrtCartesian_4d010bb8d4780d51] = env->getMethodID(cls, "computeJacobianEccentricWrtCartesian", "()[[Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_computeJacobianTrueWrtCartesian_4d010bb8d4780d51] = env->getMethodID(cls, "computeJacobianTrueWrtCartesian", "()[[Lorg/hipparchus/CalculusFieldElement;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      FieldKeplerianOrbit::FieldKeplerianOrbit(const ::org::orekit::orbits::FieldOrbit & a0) : ::org::orekit::orbits::FieldOrbit(env->newObject(initializeClass, &mids$, mid_init$_3e61171636c74f2c, a0.this$)) {}

      FieldKeplerianOrbit::FieldKeplerianOrbit(const ::org::hipparchus::Field & a0, const ::org::orekit::orbits::KeplerianOrbit & a1) : ::org::orekit::orbits::FieldOrbit(env->newObject(initializeClass, &mids$, mid_init$_51408caef64de318, a0.this$, a1.this$)) {}

      FieldKeplerianOrbit::FieldKeplerianOrbit(const ::org::hipparchus::Field & a0, const ::org::orekit::orbits::Orbit & a1) : ::org::orekit::orbits::FieldOrbit(env->newObject(initializeClass, &mids$, mid_init$_0fcb30f8b968c16a, a0.this$, a1.this$)) {}

      FieldKeplerianOrbit::FieldKeplerianOrbit(const ::org::orekit::utils::TimeStampedFieldPVCoordinates & a0, const ::org::orekit::frames::Frame & a1, const ::org::hipparchus::CalculusFieldElement & a2) : ::org::orekit::orbits::FieldOrbit(env->newObject(initializeClass, &mids$, mid_init$_cc80ec5d9d193ad9, a0.this$, a1.this$, a2.this$)) {}

      FieldKeplerianOrbit::FieldKeplerianOrbit(const ::org::orekit::utils::FieldPVCoordinates & a0, const ::org::orekit::frames::Frame & a1, const ::org::orekit::time::FieldAbsoluteDate & a2, const ::org::hipparchus::CalculusFieldElement & a3) : ::org::orekit::orbits::FieldOrbit(env->newObject(initializeClass, &mids$, mid_init$_29a388389f8e2031, a0.this$, a1.this$, a2.this$, a3.this$)) {}

      FieldKeplerianOrbit::FieldKeplerianOrbit(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::hipparchus::CalculusFieldElement & a1, const ::org::hipparchus::CalculusFieldElement & a2, const ::org::hipparchus::CalculusFieldElement & a3, const ::org::hipparchus::CalculusFieldElement & a4, const ::org::hipparchus::CalculusFieldElement & a5, const ::org::orekit::orbits::PositionAngleType & a6, const ::org::orekit::frames::Frame & a7, const ::org::orekit::time::FieldAbsoluteDate & a8, const ::org::hipparchus::CalculusFieldElement & a9) : ::org::orekit::orbits::FieldOrbit(env->newObject(initializeClass, &mids$, mid_init$_bfc63e9af3b225c7, a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$, a6.this$, a7.this$, a8.this$, a9.this$)) {}

      FieldKeplerianOrbit::FieldKeplerianOrbit(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::hipparchus::CalculusFieldElement & a1, const ::org::hipparchus::CalculusFieldElement & a2, const ::org::hipparchus::CalculusFieldElement & a3, const ::org::hipparchus::CalculusFieldElement & a4, const ::org::hipparchus::CalculusFieldElement & a5, const ::org::hipparchus::CalculusFieldElement & a6, const ::org::hipparchus::CalculusFieldElement & a7, const ::org::hipparchus::CalculusFieldElement & a8, const ::org::hipparchus::CalculusFieldElement & a9, const ::org::hipparchus::CalculusFieldElement & a10, const ::org::hipparchus::CalculusFieldElement & a11, const ::org::orekit::orbits::PositionAngleType & a12, const ::org::orekit::frames::Frame & a13, const ::org::orekit::time::FieldAbsoluteDate & a14, const ::org::hipparchus::CalculusFieldElement & a15) : ::org::orekit::orbits::FieldOrbit(env->newObject(initializeClass, &mids$, mid_init$_b4fb0a8689671ebc, a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$, a6.this$, a7.this$, a8.this$, a9.this$, a10.this$, a11.this$, a12.this$, a13.this$, a14.this$, a15.this$)) {}

      void FieldKeplerianOrbit::addKeplerContribution(const ::org::orekit::orbits::PositionAngleType & a0, const ::org::hipparchus::CalculusFieldElement & a1, const JArray< ::org::hipparchus::CalculusFieldElement > & a2) const
      {
        env->callVoidMethod(this$, mids$[mid_addKeplerContribution_210d5c728d3233b4], a0.this$, a1.this$, a2.this$);
      }

      ::org::hipparchus::CalculusFieldElement FieldKeplerianOrbit::getA() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getA_08d37e3f77b7239d]));
      }

      ::org::hipparchus::CalculusFieldElement FieldKeplerianOrbit::getADot() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getADot_08d37e3f77b7239d]));
      }

      ::org::hipparchus::CalculusFieldElement FieldKeplerianOrbit::getAnomaly(const ::org::orekit::orbits::PositionAngleType & a0) const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getAnomaly_1982048877fe3264], a0.this$));
      }

      ::org::hipparchus::CalculusFieldElement FieldKeplerianOrbit::getAnomalyDot(const ::org::orekit::orbits::PositionAngleType & a0) const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getAnomalyDot_1982048877fe3264], a0.this$));
      }

      ::org::orekit::orbits::PositionAngleType FieldKeplerianOrbit::getCachedPositionAngleType() const
      {
        return ::org::orekit::orbits::PositionAngleType(env->callObjectMethod(this$, mids$[mid_getCachedPositionAngleType_a6db4e6edefda4be]));
      }

      ::org::hipparchus::CalculusFieldElement FieldKeplerianOrbit::getE() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getE_08d37e3f77b7239d]));
      }

      ::org::hipparchus::CalculusFieldElement FieldKeplerianOrbit::getEDot() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getEDot_08d37e3f77b7239d]));
      }

      ::org::hipparchus::CalculusFieldElement FieldKeplerianOrbit::getEccentricAnomaly() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getEccentricAnomaly_08d37e3f77b7239d]));
      }

      ::org::hipparchus::CalculusFieldElement FieldKeplerianOrbit::getEccentricAnomalyDot() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getEccentricAnomalyDot_08d37e3f77b7239d]));
      }

      ::org::hipparchus::CalculusFieldElement FieldKeplerianOrbit::getEquinoctialEx() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getEquinoctialEx_08d37e3f77b7239d]));
      }

      ::org::hipparchus::CalculusFieldElement FieldKeplerianOrbit::getEquinoctialExDot() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getEquinoctialExDot_08d37e3f77b7239d]));
      }

      ::org::hipparchus::CalculusFieldElement FieldKeplerianOrbit::getEquinoctialEy() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getEquinoctialEy_08d37e3f77b7239d]));
      }

      ::org::hipparchus::CalculusFieldElement FieldKeplerianOrbit::getEquinoctialEyDot() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getEquinoctialEyDot_08d37e3f77b7239d]));
      }

      ::org::hipparchus::CalculusFieldElement FieldKeplerianOrbit::getHx() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getHx_08d37e3f77b7239d]));
      }

      ::org::hipparchus::CalculusFieldElement FieldKeplerianOrbit::getHxDot() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getHxDot_08d37e3f77b7239d]));
      }

      ::org::hipparchus::CalculusFieldElement FieldKeplerianOrbit::getHy() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getHy_08d37e3f77b7239d]));
      }

      ::org::hipparchus::CalculusFieldElement FieldKeplerianOrbit::getHyDot() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getHyDot_08d37e3f77b7239d]));
      }

      ::org::hipparchus::CalculusFieldElement FieldKeplerianOrbit::getI() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getI_08d37e3f77b7239d]));
      }

      ::org::hipparchus::CalculusFieldElement FieldKeplerianOrbit::getIDot() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getIDot_08d37e3f77b7239d]));
      }

      ::org::hipparchus::CalculusFieldElement FieldKeplerianOrbit::getLE() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getLE_08d37e3f77b7239d]));
      }

      ::org::hipparchus::CalculusFieldElement FieldKeplerianOrbit::getLEDot() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getLEDot_08d37e3f77b7239d]));
      }

      ::org::hipparchus::CalculusFieldElement FieldKeplerianOrbit::getLM() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getLM_08d37e3f77b7239d]));
      }

      ::org::hipparchus::CalculusFieldElement FieldKeplerianOrbit::getLMDot() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getLMDot_08d37e3f77b7239d]));
      }

      ::org::hipparchus::CalculusFieldElement FieldKeplerianOrbit::getLv() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getLv_08d37e3f77b7239d]));
      }

      ::org::hipparchus::CalculusFieldElement FieldKeplerianOrbit::getLvDot() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getLvDot_08d37e3f77b7239d]));
      }

      ::org::hipparchus::CalculusFieldElement FieldKeplerianOrbit::getMeanAnomaly() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getMeanAnomaly_08d37e3f77b7239d]));
      }

      ::org::hipparchus::CalculusFieldElement FieldKeplerianOrbit::getMeanAnomalyDot() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getMeanAnomalyDot_08d37e3f77b7239d]));
      }

      ::org::hipparchus::CalculusFieldElement FieldKeplerianOrbit::getPerigeeArgument() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getPerigeeArgument_08d37e3f77b7239d]));
      }

      ::org::hipparchus::CalculusFieldElement FieldKeplerianOrbit::getPerigeeArgumentDot() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getPerigeeArgumentDot_08d37e3f77b7239d]));
      }

      ::org::hipparchus::CalculusFieldElement FieldKeplerianOrbit::getRightAscensionOfAscendingNode() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getRightAscensionOfAscendingNode_08d37e3f77b7239d]));
      }

      ::org::hipparchus::CalculusFieldElement FieldKeplerianOrbit::getRightAscensionOfAscendingNodeDot() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getRightAscensionOfAscendingNodeDot_08d37e3f77b7239d]));
      }

      ::org::hipparchus::CalculusFieldElement FieldKeplerianOrbit::getTrueAnomaly() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getTrueAnomaly_08d37e3f77b7239d]));
      }

      ::org::hipparchus::CalculusFieldElement FieldKeplerianOrbit::getTrueAnomalyDot() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getTrueAnomalyDot_08d37e3f77b7239d]));
      }

      ::org::orekit::orbits::OrbitType FieldKeplerianOrbit::getType() const
      {
        return ::org::orekit::orbits::OrbitType(env->callObjectMethod(this$, mids$[mid_getType_495f818d3570b7f5]));
      }

      jboolean FieldKeplerianOrbit::hasDerivatives() const
      {
        return env->callBooleanMethod(this$, mids$[mid_hasDerivatives_eee3de00fe971136]);
      }

      jboolean FieldKeplerianOrbit::hasRates() const
      {
        return env->callBooleanMethod(this$, mids$[mid_hasRates_eee3de00fe971136]);
      }

      FieldKeplerianOrbit FieldKeplerianOrbit::removeRates() const
      {
        return FieldKeplerianOrbit(env->callObjectMethod(this$, mids$[mid_removeRates_dee0bd698ab0e7f2]));
      }

      FieldKeplerianOrbit FieldKeplerianOrbit::shiftedBy(jdouble a0) const
      {
        return FieldKeplerianOrbit(env->callObjectMethod(this$, mids$[mid_shiftedBy_8f749f06166e76cf], a0));
      }

      FieldKeplerianOrbit FieldKeplerianOrbit::shiftedBy(const ::org::hipparchus::CalculusFieldElement & a0) const
      {
        return FieldKeplerianOrbit(env->callObjectMethod(this$, mids$[mid_shiftedBy_d64db6b293506d39], a0.this$));
      }

      ::org::orekit::orbits::KeplerianOrbit FieldKeplerianOrbit::toOrbit() const
      {
        return ::org::orekit::orbits::KeplerianOrbit(env->callObjectMethod(this$, mids$[mid_toOrbit_05c9859fe4d10dff]));
      }

      ::java::lang::String FieldKeplerianOrbit::toString() const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_d2c8eb4129821f0e]));
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
      static PyObject *t_FieldKeplerianOrbit_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldKeplerianOrbit_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldKeplerianOrbit_of_(t_FieldKeplerianOrbit *self, PyObject *args);
      static int t_FieldKeplerianOrbit_init_(t_FieldKeplerianOrbit *self, PyObject *args, PyObject *kwds);
      static PyObject *t_FieldKeplerianOrbit_addKeplerContribution(t_FieldKeplerianOrbit *self, PyObject *args);
      static PyObject *t_FieldKeplerianOrbit_getA(t_FieldKeplerianOrbit *self, PyObject *args);
      static PyObject *t_FieldKeplerianOrbit_getADot(t_FieldKeplerianOrbit *self, PyObject *args);
      static PyObject *t_FieldKeplerianOrbit_getAnomaly(t_FieldKeplerianOrbit *self, PyObject *arg);
      static PyObject *t_FieldKeplerianOrbit_getAnomalyDot(t_FieldKeplerianOrbit *self, PyObject *arg);
      static PyObject *t_FieldKeplerianOrbit_getCachedPositionAngleType(t_FieldKeplerianOrbit *self);
      static PyObject *t_FieldKeplerianOrbit_getE(t_FieldKeplerianOrbit *self, PyObject *args);
      static PyObject *t_FieldKeplerianOrbit_getEDot(t_FieldKeplerianOrbit *self, PyObject *args);
      static PyObject *t_FieldKeplerianOrbit_getEccentricAnomaly(t_FieldKeplerianOrbit *self);
      static PyObject *t_FieldKeplerianOrbit_getEccentricAnomalyDot(t_FieldKeplerianOrbit *self);
      static PyObject *t_FieldKeplerianOrbit_getEquinoctialEx(t_FieldKeplerianOrbit *self, PyObject *args);
      static PyObject *t_FieldKeplerianOrbit_getEquinoctialExDot(t_FieldKeplerianOrbit *self, PyObject *args);
      static PyObject *t_FieldKeplerianOrbit_getEquinoctialEy(t_FieldKeplerianOrbit *self, PyObject *args);
      static PyObject *t_FieldKeplerianOrbit_getEquinoctialEyDot(t_FieldKeplerianOrbit *self, PyObject *args);
      static PyObject *t_FieldKeplerianOrbit_getHx(t_FieldKeplerianOrbit *self, PyObject *args);
      static PyObject *t_FieldKeplerianOrbit_getHxDot(t_FieldKeplerianOrbit *self, PyObject *args);
      static PyObject *t_FieldKeplerianOrbit_getHy(t_FieldKeplerianOrbit *self, PyObject *args);
      static PyObject *t_FieldKeplerianOrbit_getHyDot(t_FieldKeplerianOrbit *self, PyObject *args);
      static PyObject *t_FieldKeplerianOrbit_getI(t_FieldKeplerianOrbit *self, PyObject *args);
      static PyObject *t_FieldKeplerianOrbit_getIDot(t_FieldKeplerianOrbit *self, PyObject *args);
      static PyObject *t_FieldKeplerianOrbit_getLE(t_FieldKeplerianOrbit *self, PyObject *args);
      static PyObject *t_FieldKeplerianOrbit_getLEDot(t_FieldKeplerianOrbit *self, PyObject *args);
      static PyObject *t_FieldKeplerianOrbit_getLM(t_FieldKeplerianOrbit *self, PyObject *args);
      static PyObject *t_FieldKeplerianOrbit_getLMDot(t_FieldKeplerianOrbit *self, PyObject *args);
      static PyObject *t_FieldKeplerianOrbit_getLv(t_FieldKeplerianOrbit *self, PyObject *args);
      static PyObject *t_FieldKeplerianOrbit_getLvDot(t_FieldKeplerianOrbit *self, PyObject *args);
      static PyObject *t_FieldKeplerianOrbit_getMeanAnomaly(t_FieldKeplerianOrbit *self);
      static PyObject *t_FieldKeplerianOrbit_getMeanAnomalyDot(t_FieldKeplerianOrbit *self);
      static PyObject *t_FieldKeplerianOrbit_getPerigeeArgument(t_FieldKeplerianOrbit *self);
      static PyObject *t_FieldKeplerianOrbit_getPerigeeArgumentDot(t_FieldKeplerianOrbit *self);
      static PyObject *t_FieldKeplerianOrbit_getRightAscensionOfAscendingNode(t_FieldKeplerianOrbit *self);
      static PyObject *t_FieldKeplerianOrbit_getRightAscensionOfAscendingNodeDot(t_FieldKeplerianOrbit *self);
      static PyObject *t_FieldKeplerianOrbit_getTrueAnomaly(t_FieldKeplerianOrbit *self);
      static PyObject *t_FieldKeplerianOrbit_getTrueAnomalyDot(t_FieldKeplerianOrbit *self);
      static PyObject *t_FieldKeplerianOrbit_getType(t_FieldKeplerianOrbit *self, PyObject *args);
      static PyObject *t_FieldKeplerianOrbit_hasDerivatives(t_FieldKeplerianOrbit *self, PyObject *args);
      static PyObject *t_FieldKeplerianOrbit_hasRates(t_FieldKeplerianOrbit *self);
      static PyObject *t_FieldKeplerianOrbit_removeRates(t_FieldKeplerianOrbit *self);
      static PyObject *t_FieldKeplerianOrbit_shiftedBy(t_FieldKeplerianOrbit *self, PyObject *args);
      static PyObject *t_FieldKeplerianOrbit_toOrbit(t_FieldKeplerianOrbit *self, PyObject *args);
      static PyObject *t_FieldKeplerianOrbit_toString(t_FieldKeplerianOrbit *self, PyObject *args);
      static PyObject *t_FieldKeplerianOrbit_get__a(t_FieldKeplerianOrbit *self, void *data);
      static PyObject *t_FieldKeplerianOrbit_get__aDot(t_FieldKeplerianOrbit *self, void *data);
      static PyObject *t_FieldKeplerianOrbit_get__cachedPositionAngleType(t_FieldKeplerianOrbit *self, void *data);
      static PyObject *t_FieldKeplerianOrbit_get__e(t_FieldKeplerianOrbit *self, void *data);
      static PyObject *t_FieldKeplerianOrbit_get__eDot(t_FieldKeplerianOrbit *self, void *data);
      static PyObject *t_FieldKeplerianOrbit_get__eccentricAnomaly(t_FieldKeplerianOrbit *self, void *data);
      static PyObject *t_FieldKeplerianOrbit_get__eccentricAnomalyDot(t_FieldKeplerianOrbit *self, void *data);
      static PyObject *t_FieldKeplerianOrbit_get__equinoctialEx(t_FieldKeplerianOrbit *self, void *data);
      static PyObject *t_FieldKeplerianOrbit_get__equinoctialExDot(t_FieldKeplerianOrbit *self, void *data);
      static PyObject *t_FieldKeplerianOrbit_get__equinoctialEy(t_FieldKeplerianOrbit *self, void *data);
      static PyObject *t_FieldKeplerianOrbit_get__equinoctialEyDot(t_FieldKeplerianOrbit *self, void *data);
      static PyObject *t_FieldKeplerianOrbit_get__hx(t_FieldKeplerianOrbit *self, void *data);
      static PyObject *t_FieldKeplerianOrbit_get__hxDot(t_FieldKeplerianOrbit *self, void *data);
      static PyObject *t_FieldKeplerianOrbit_get__hy(t_FieldKeplerianOrbit *self, void *data);
      static PyObject *t_FieldKeplerianOrbit_get__hyDot(t_FieldKeplerianOrbit *self, void *data);
      static PyObject *t_FieldKeplerianOrbit_get__i(t_FieldKeplerianOrbit *self, void *data);
      static PyObject *t_FieldKeplerianOrbit_get__iDot(t_FieldKeplerianOrbit *self, void *data);
      static PyObject *t_FieldKeplerianOrbit_get__lE(t_FieldKeplerianOrbit *self, void *data);
      static PyObject *t_FieldKeplerianOrbit_get__lEDot(t_FieldKeplerianOrbit *self, void *data);
      static PyObject *t_FieldKeplerianOrbit_get__lM(t_FieldKeplerianOrbit *self, void *data);
      static PyObject *t_FieldKeplerianOrbit_get__lMDot(t_FieldKeplerianOrbit *self, void *data);
      static PyObject *t_FieldKeplerianOrbit_get__lv(t_FieldKeplerianOrbit *self, void *data);
      static PyObject *t_FieldKeplerianOrbit_get__lvDot(t_FieldKeplerianOrbit *self, void *data);
      static PyObject *t_FieldKeplerianOrbit_get__meanAnomaly(t_FieldKeplerianOrbit *self, void *data);
      static PyObject *t_FieldKeplerianOrbit_get__meanAnomalyDot(t_FieldKeplerianOrbit *self, void *data);
      static PyObject *t_FieldKeplerianOrbit_get__perigeeArgument(t_FieldKeplerianOrbit *self, void *data);
      static PyObject *t_FieldKeplerianOrbit_get__perigeeArgumentDot(t_FieldKeplerianOrbit *self, void *data);
      static PyObject *t_FieldKeplerianOrbit_get__rightAscensionOfAscendingNode(t_FieldKeplerianOrbit *self, void *data);
      static PyObject *t_FieldKeplerianOrbit_get__rightAscensionOfAscendingNodeDot(t_FieldKeplerianOrbit *self, void *data);
      static PyObject *t_FieldKeplerianOrbit_get__trueAnomaly(t_FieldKeplerianOrbit *self, void *data);
      static PyObject *t_FieldKeplerianOrbit_get__trueAnomalyDot(t_FieldKeplerianOrbit *self, void *data);
      static PyObject *t_FieldKeplerianOrbit_get__type(t_FieldKeplerianOrbit *self, void *data);
      static PyObject *t_FieldKeplerianOrbit_get__parameters_(t_FieldKeplerianOrbit *self, void *data);
      static PyGetSetDef t_FieldKeplerianOrbit__fields_[] = {
        DECLARE_GET_FIELD(t_FieldKeplerianOrbit, a),
        DECLARE_GET_FIELD(t_FieldKeplerianOrbit, aDot),
        DECLARE_GET_FIELD(t_FieldKeplerianOrbit, cachedPositionAngleType),
        DECLARE_GET_FIELD(t_FieldKeplerianOrbit, e),
        DECLARE_GET_FIELD(t_FieldKeplerianOrbit, eDot),
        DECLARE_GET_FIELD(t_FieldKeplerianOrbit, eccentricAnomaly),
        DECLARE_GET_FIELD(t_FieldKeplerianOrbit, eccentricAnomalyDot),
        DECLARE_GET_FIELD(t_FieldKeplerianOrbit, equinoctialEx),
        DECLARE_GET_FIELD(t_FieldKeplerianOrbit, equinoctialExDot),
        DECLARE_GET_FIELD(t_FieldKeplerianOrbit, equinoctialEy),
        DECLARE_GET_FIELD(t_FieldKeplerianOrbit, equinoctialEyDot),
        DECLARE_GET_FIELD(t_FieldKeplerianOrbit, hx),
        DECLARE_GET_FIELD(t_FieldKeplerianOrbit, hxDot),
        DECLARE_GET_FIELD(t_FieldKeplerianOrbit, hy),
        DECLARE_GET_FIELD(t_FieldKeplerianOrbit, hyDot),
        DECLARE_GET_FIELD(t_FieldKeplerianOrbit, i),
        DECLARE_GET_FIELD(t_FieldKeplerianOrbit, iDot),
        DECLARE_GET_FIELD(t_FieldKeplerianOrbit, lE),
        DECLARE_GET_FIELD(t_FieldKeplerianOrbit, lEDot),
        DECLARE_GET_FIELD(t_FieldKeplerianOrbit, lM),
        DECLARE_GET_FIELD(t_FieldKeplerianOrbit, lMDot),
        DECLARE_GET_FIELD(t_FieldKeplerianOrbit, lv),
        DECLARE_GET_FIELD(t_FieldKeplerianOrbit, lvDot),
        DECLARE_GET_FIELD(t_FieldKeplerianOrbit, meanAnomaly),
        DECLARE_GET_FIELD(t_FieldKeplerianOrbit, meanAnomalyDot),
        DECLARE_GET_FIELD(t_FieldKeplerianOrbit, perigeeArgument),
        DECLARE_GET_FIELD(t_FieldKeplerianOrbit, perigeeArgumentDot),
        DECLARE_GET_FIELD(t_FieldKeplerianOrbit, rightAscensionOfAscendingNode),
        DECLARE_GET_FIELD(t_FieldKeplerianOrbit, rightAscensionOfAscendingNodeDot),
        DECLARE_GET_FIELD(t_FieldKeplerianOrbit, trueAnomaly),
        DECLARE_GET_FIELD(t_FieldKeplerianOrbit, trueAnomalyDot),
        DECLARE_GET_FIELD(t_FieldKeplerianOrbit, type),
        DECLARE_GET_FIELD(t_FieldKeplerianOrbit, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_FieldKeplerianOrbit__methods_[] = {
        DECLARE_METHOD(t_FieldKeplerianOrbit, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldKeplerianOrbit, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldKeplerianOrbit, of_, METH_VARARGS),
        DECLARE_METHOD(t_FieldKeplerianOrbit, addKeplerContribution, METH_VARARGS),
        DECLARE_METHOD(t_FieldKeplerianOrbit, getA, METH_VARARGS),
        DECLARE_METHOD(t_FieldKeplerianOrbit, getADot, METH_VARARGS),
        DECLARE_METHOD(t_FieldKeplerianOrbit, getAnomaly, METH_O),
        DECLARE_METHOD(t_FieldKeplerianOrbit, getAnomalyDot, METH_O),
        DECLARE_METHOD(t_FieldKeplerianOrbit, getCachedPositionAngleType, METH_NOARGS),
        DECLARE_METHOD(t_FieldKeplerianOrbit, getE, METH_VARARGS),
        DECLARE_METHOD(t_FieldKeplerianOrbit, getEDot, METH_VARARGS),
        DECLARE_METHOD(t_FieldKeplerianOrbit, getEccentricAnomaly, METH_NOARGS),
        DECLARE_METHOD(t_FieldKeplerianOrbit, getEccentricAnomalyDot, METH_NOARGS),
        DECLARE_METHOD(t_FieldKeplerianOrbit, getEquinoctialEx, METH_VARARGS),
        DECLARE_METHOD(t_FieldKeplerianOrbit, getEquinoctialExDot, METH_VARARGS),
        DECLARE_METHOD(t_FieldKeplerianOrbit, getEquinoctialEy, METH_VARARGS),
        DECLARE_METHOD(t_FieldKeplerianOrbit, getEquinoctialEyDot, METH_VARARGS),
        DECLARE_METHOD(t_FieldKeplerianOrbit, getHx, METH_VARARGS),
        DECLARE_METHOD(t_FieldKeplerianOrbit, getHxDot, METH_VARARGS),
        DECLARE_METHOD(t_FieldKeplerianOrbit, getHy, METH_VARARGS),
        DECLARE_METHOD(t_FieldKeplerianOrbit, getHyDot, METH_VARARGS),
        DECLARE_METHOD(t_FieldKeplerianOrbit, getI, METH_VARARGS),
        DECLARE_METHOD(t_FieldKeplerianOrbit, getIDot, METH_VARARGS),
        DECLARE_METHOD(t_FieldKeplerianOrbit, getLE, METH_VARARGS),
        DECLARE_METHOD(t_FieldKeplerianOrbit, getLEDot, METH_VARARGS),
        DECLARE_METHOD(t_FieldKeplerianOrbit, getLM, METH_VARARGS),
        DECLARE_METHOD(t_FieldKeplerianOrbit, getLMDot, METH_VARARGS),
        DECLARE_METHOD(t_FieldKeplerianOrbit, getLv, METH_VARARGS),
        DECLARE_METHOD(t_FieldKeplerianOrbit, getLvDot, METH_VARARGS),
        DECLARE_METHOD(t_FieldKeplerianOrbit, getMeanAnomaly, METH_NOARGS),
        DECLARE_METHOD(t_FieldKeplerianOrbit, getMeanAnomalyDot, METH_NOARGS),
        DECLARE_METHOD(t_FieldKeplerianOrbit, getPerigeeArgument, METH_NOARGS),
        DECLARE_METHOD(t_FieldKeplerianOrbit, getPerigeeArgumentDot, METH_NOARGS),
        DECLARE_METHOD(t_FieldKeplerianOrbit, getRightAscensionOfAscendingNode, METH_NOARGS),
        DECLARE_METHOD(t_FieldKeplerianOrbit, getRightAscensionOfAscendingNodeDot, METH_NOARGS),
        DECLARE_METHOD(t_FieldKeplerianOrbit, getTrueAnomaly, METH_NOARGS),
        DECLARE_METHOD(t_FieldKeplerianOrbit, getTrueAnomalyDot, METH_NOARGS),
        DECLARE_METHOD(t_FieldKeplerianOrbit, getType, METH_VARARGS),
        DECLARE_METHOD(t_FieldKeplerianOrbit, hasDerivatives, METH_VARARGS),
        DECLARE_METHOD(t_FieldKeplerianOrbit, hasRates, METH_NOARGS),
        DECLARE_METHOD(t_FieldKeplerianOrbit, removeRates, METH_NOARGS),
        DECLARE_METHOD(t_FieldKeplerianOrbit, shiftedBy, METH_VARARGS),
        DECLARE_METHOD(t_FieldKeplerianOrbit, toOrbit, METH_VARARGS),
        DECLARE_METHOD(t_FieldKeplerianOrbit, toString, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(FieldKeplerianOrbit)[] = {
        { Py_tp_methods, t_FieldKeplerianOrbit__methods_ },
        { Py_tp_init, (void *) t_FieldKeplerianOrbit_init_ },
        { Py_tp_getset, t_FieldKeplerianOrbit__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(FieldKeplerianOrbit)[] = {
        &PY_TYPE_DEF(::org::orekit::orbits::FieldOrbit),
        NULL
      };

      DEFINE_TYPE(FieldKeplerianOrbit, t_FieldKeplerianOrbit, FieldKeplerianOrbit);
      PyObject *t_FieldKeplerianOrbit::wrap_Object(const FieldKeplerianOrbit& object, PyTypeObject *p0)
      {
        PyObject *obj = t_FieldKeplerianOrbit::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_FieldKeplerianOrbit *self = (t_FieldKeplerianOrbit *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_FieldKeplerianOrbit::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_FieldKeplerianOrbit::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_FieldKeplerianOrbit *self = (t_FieldKeplerianOrbit *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_FieldKeplerianOrbit::install(PyObject *module)
      {
        installType(&PY_TYPE(FieldKeplerianOrbit), &PY_TYPE_DEF(FieldKeplerianOrbit), module, "FieldKeplerianOrbit", 0);
      }

      void t_FieldKeplerianOrbit::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldKeplerianOrbit), "class_", make_descriptor(FieldKeplerianOrbit::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldKeplerianOrbit), "wrapfn_", make_descriptor(t_FieldKeplerianOrbit::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldKeplerianOrbit), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_FieldKeplerianOrbit_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, FieldKeplerianOrbit::initializeClass, 1)))
          return NULL;
        return t_FieldKeplerianOrbit::wrap_Object(FieldKeplerianOrbit(((t_FieldKeplerianOrbit *) arg)->object.this$));
      }
      static PyObject *t_FieldKeplerianOrbit_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, FieldKeplerianOrbit::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_FieldKeplerianOrbit_of_(t_FieldKeplerianOrbit *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static int t_FieldKeplerianOrbit_init_(t_FieldKeplerianOrbit *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::orekit::orbits::FieldOrbit a0((jobject) NULL);
            PyTypeObject **p0;
            FieldKeplerianOrbit object((jobject) NULL);

            if (!parseArgs(args, "K", ::org::orekit::orbits::FieldOrbit::initializeClass, &a0, &p0, ::org::orekit::orbits::t_FieldOrbit::parameters_))
            {
              INT_CALL(object = FieldKeplerianOrbit(a0));
              self->object = object;
              break;
            }
          }
          goto err;
         case 2:
          {
            ::org::hipparchus::Field a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::orbits::KeplerianOrbit a1((jobject) NULL);
            FieldKeplerianOrbit object((jobject) NULL);

            if (!parseArgs(args, "Kk", ::org::hipparchus::Field::initializeClass, ::org::orekit::orbits::KeplerianOrbit::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1))
            {
              INT_CALL(object = FieldKeplerianOrbit(a0, a1));
              self->object = object;
              break;
            }
          }
          {
            ::org::hipparchus::Field a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::orbits::Orbit a1((jobject) NULL);
            FieldKeplerianOrbit object((jobject) NULL);

            if (!parseArgs(args, "Kk", ::org::hipparchus::Field::initializeClass, ::org::orekit::orbits::Orbit::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1))
            {
              INT_CALL(object = FieldKeplerianOrbit(a0, a1));
              self->object = object;
              break;
            }
          }
          goto err;
         case 3:
          {
            ::org::orekit::utils::TimeStampedFieldPVCoordinates a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::frames::Frame a1((jobject) NULL);
            ::org::hipparchus::CalculusFieldElement a2((jobject) NULL);
            PyTypeObject **p2;
            FieldKeplerianOrbit object((jobject) NULL);

            if (!parseArgs(args, "KkK", ::org::orekit::utils::TimeStampedFieldPVCoordinates::initializeClass, ::org::orekit::frames::Frame::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::orekit::utils::t_TimeStampedFieldPVCoordinates::parameters_, &a1, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_))
            {
              INT_CALL(object = FieldKeplerianOrbit(a0, a1, a2));
              self->object = object;
              break;
            }
          }
          goto err;
         case 4:
          {
            ::org::orekit::utils::FieldPVCoordinates a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::frames::Frame a1((jobject) NULL);
            ::org::orekit::time::FieldAbsoluteDate a2((jobject) NULL);
            PyTypeObject **p2;
            ::org::hipparchus::CalculusFieldElement a3((jobject) NULL);
            PyTypeObject **p3;
            FieldKeplerianOrbit object((jobject) NULL);

            if (!parseArgs(args, "KkKK", ::org::orekit::utils::FieldPVCoordinates::initializeClass, ::org::orekit::frames::Frame::initializeClass, ::org::orekit::time::FieldAbsoluteDate::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::orekit::utils::t_FieldPVCoordinates::parameters_, &a1, &a2, &p2, ::org::orekit::time::t_FieldAbsoluteDate::parameters_, &a3, &p3, ::org::hipparchus::t_CalculusFieldElement::parameters_))
            {
              INT_CALL(object = FieldKeplerianOrbit(a0, a1, a2, a3));
              self->object = object;
              break;
            }
          }
          goto err;
         case 10:
          {
            ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::hipparchus::CalculusFieldElement a2((jobject) NULL);
            PyTypeObject **p2;
            ::org::hipparchus::CalculusFieldElement a3((jobject) NULL);
            PyTypeObject **p3;
            ::org::hipparchus::CalculusFieldElement a4((jobject) NULL);
            PyTypeObject **p4;
            ::org::hipparchus::CalculusFieldElement a5((jobject) NULL);
            PyTypeObject **p5;
            ::org::orekit::orbits::PositionAngleType a6((jobject) NULL);
            PyTypeObject **p6;
            ::org::orekit::frames::Frame a7((jobject) NULL);
            ::org::orekit::time::FieldAbsoluteDate a8((jobject) NULL);
            PyTypeObject **p8;
            ::org::hipparchus::CalculusFieldElement a9((jobject) NULL);
            PyTypeObject **p9;
            FieldKeplerianOrbit object((jobject) NULL);

            if (!parseArgs(args, "KKKKKKKkKK", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::orekit::orbits::PositionAngleType::initializeClass, ::org::orekit::frames::Frame::initializeClass, ::org::orekit::time::FieldAbsoluteDate::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a3, &p3, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a4, &p4, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a5, &p5, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a6, &p6, ::org::orekit::orbits::t_PositionAngleType::parameters_, &a7, &a8, &p8, ::org::orekit::time::t_FieldAbsoluteDate::parameters_, &a9, &p9, ::org::hipparchus::t_CalculusFieldElement::parameters_))
            {
              INT_CALL(object = FieldKeplerianOrbit(a0, a1, a2, a3, a4, a5, a6, a7, a8, a9));
              self->object = object;
              break;
            }
          }
          goto err;
         case 16:
          {
            ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::hipparchus::CalculusFieldElement a2((jobject) NULL);
            PyTypeObject **p2;
            ::org::hipparchus::CalculusFieldElement a3((jobject) NULL);
            PyTypeObject **p3;
            ::org::hipparchus::CalculusFieldElement a4((jobject) NULL);
            PyTypeObject **p4;
            ::org::hipparchus::CalculusFieldElement a5((jobject) NULL);
            PyTypeObject **p5;
            ::org::hipparchus::CalculusFieldElement a6((jobject) NULL);
            PyTypeObject **p6;
            ::org::hipparchus::CalculusFieldElement a7((jobject) NULL);
            PyTypeObject **p7;
            ::org::hipparchus::CalculusFieldElement a8((jobject) NULL);
            PyTypeObject **p8;
            ::org::hipparchus::CalculusFieldElement a9((jobject) NULL);
            PyTypeObject **p9;
            ::org::hipparchus::CalculusFieldElement a10((jobject) NULL);
            PyTypeObject **p10;
            ::org::hipparchus::CalculusFieldElement a11((jobject) NULL);
            PyTypeObject **p11;
            ::org::orekit::orbits::PositionAngleType a12((jobject) NULL);
            PyTypeObject **p12;
            ::org::orekit::frames::Frame a13((jobject) NULL);
            ::org::orekit::time::FieldAbsoluteDate a14((jobject) NULL);
            PyTypeObject **p14;
            ::org::hipparchus::CalculusFieldElement a15((jobject) NULL);
            PyTypeObject **p15;
            FieldKeplerianOrbit object((jobject) NULL);

            if (!parseArgs(args, "KKKKKKKKKKKKKkKK", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::orekit::orbits::PositionAngleType::initializeClass, ::org::orekit::frames::Frame::initializeClass, ::org::orekit::time::FieldAbsoluteDate::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a3, &p3, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a4, &p4, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a5, &p5, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a6, &p6, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a7, &p7, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a8, &p8, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a9, &p9, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a10, &p10, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a11, &p11, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a12, &p12, ::org::orekit::orbits::t_PositionAngleType::parameters_, &a13, &a14, &p14, ::org::orekit::time::t_FieldAbsoluteDate::parameters_, &a15, &p15, ::org::hipparchus::t_CalculusFieldElement::parameters_))
            {
              INT_CALL(object = FieldKeplerianOrbit(a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15));
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

      static PyObject *t_FieldKeplerianOrbit_addKeplerContribution(t_FieldKeplerianOrbit *self, PyObject *args)
      {
        ::org::orekit::orbits::PositionAngleType a0((jobject) NULL);
        PyTypeObject **p0;
        ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
        PyTypeObject **p1;
        JArray< ::org::hipparchus::CalculusFieldElement > a2((jobject) NULL);
        PyTypeObject **p2;

        if (!parseArgs(args, "KK[K", ::org::orekit::orbits::PositionAngleType::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::orekit::orbits::t_PositionAngleType::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_))
        {
          OBJ_CALL(self->object.addKeplerContribution(a0, a1, a2));
          Py_RETURN_NONE;
        }

        return callSuper(PY_TYPE(FieldKeplerianOrbit), (PyObject *) self, "addKeplerContribution", args, 2);
      }

      static PyObject *t_FieldKeplerianOrbit_getA(t_FieldKeplerianOrbit *self, PyObject *args)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getA());
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        return callSuper(PY_TYPE(FieldKeplerianOrbit), (PyObject *) self, "getA", args, 2);
      }

      static PyObject *t_FieldKeplerianOrbit_getADot(t_FieldKeplerianOrbit *self, PyObject *args)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getADot());
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        return callSuper(PY_TYPE(FieldKeplerianOrbit), (PyObject *) self, "getADot", args, 2);
      }

      static PyObject *t_FieldKeplerianOrbit_getAnomaly(t_FieldKeplerianOrbit *self, PyObject *arg)
      {
        ::org::orekit::orbits::PositionAngleType a0((jobject) NULL);
        PyTypeObject **p0;
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

        if (!parseArg(arg, "K", ::org::orekit::orbits::PositionAngleType::initializeClass, &a0, &p0, ::org::orekit::orbits::t_PositionAngleType::parameters_))
        {
          OBJ_CALL(result = self->object.getAnomaly(a0));
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "getAnomaly", arg);
        return NULL;
      }

      static PyObject *t_FieldKeplerianOrbit_getAnomalyDot(t_FieldKeplerianOrbit *self, PyObject *arg)
      {
        ::org::orekit::orbits::PositionAngleType a0((jobject) NULL);
        PyTypeObject **p0;
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

        if (!parseArg(arg, "K", ::org::orekit::orbits::PositionAngleType::initializeClass, &a0, &p0, ::org::orekit::orbits::t_PositionAngleType::parameters_))
        {
          OBJ_CALL(result = self->object.getAnomalyDot(a0));
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "getAnomalyDot", arg);
        return NULL;
      }

      static PyObject *t_FieldKeplerianOrbit_getCachedPositionAngleType(t_FieldKeplerianOrbit *self)
      {
        ::org::orekit::orbits::PositionAngleType result((jobject) NULL);
        OBJ_CALL(result = self->object.getCachedPositionAngleType());
        return ::org::orekit::orbits::t_PositionAngleType::wrap_Object(result);
      }

      static PyObject *t_FieldKeplerianOrbit_getE(t_FieldKeplerianOrbit *self, PyObject *args)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getE());
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        return callSuper(PY_TYPE(FieldKeplerianOrbit), (PyObject *) self, "getE", args, 2);
      }

      static PyObject *t_FieldKeplerianOrbit_getEDot(t_FieldKeplerianOrbit *self, PyObject *args)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getEDot());
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        return callSuper(PY_TYPE(FieldKeplerianOrbit), (PyObject *) self, "getEDot", args, 2);
      }

      static PyObject *t_FieldKeplerianOrbit_getEccentricAnomaly(t_FieldKeplerianOrbit *self)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
        OBJ_CALL(result = self->object.getEccentricAnomaly());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
      }

      static PyObject *t_FieldKeplerianOrbit_getEccentricAnomalyDot(t_FieldKeplerianOrbit *self)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
        OBJ_CALL(result = self->object.getEccentricAnomalyDot());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
      }

      static PyObject *t_FieldKeplerianOrbit_getEquinoctialEx(t_FieldKeplerianOrbit *self, PyObject *args)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getEquinoctialEx());
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        return callSuper(PY_TYPE(FieldKeplerianOrbit), (PyObject *) self, "getEquinoctialEx", args, 2);
      }

      static PyObject *t_FieldKeplerianOrbit_getEquinoctialExDot(t_FieldKeplerianOrbit *self, PyObject *args)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getEquinoctialExDot());
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        return callSuper(PY_TYPE(FieldKeplerianOrbit), (PyObject *) self, "getEquinoctialExDot", args, 2);
      }

      static PyObject *t_FieldKeplerianOrbit_getEquinoctialEy(t_FieldKeplerianOrbit *self, PyObject *args)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getEquinoctialEy());
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        return callSuper(PY_TYPE(FieldKeplerianOrbit), (PyObject *) self, "getEquinoctialEy", args, 2);
      }

      static PyObject *t_FieldKeplerianOrbit_getEquinoctialEyDot(t_FieldKeplerianOrbit *self, PyObject *args)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getEquinoctialEyDot());
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        return callSuper(PY_TYPE(FieldKeplerianOrbit), (PyObject *) self, "getEquinoctialEyDot", args, 2);
      }

      static PyObject *t_FieldKeplerianOrbit_getHx(t_FieldKeplerianOrbit *self, PyObject *args)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getHx());
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        return callSuper(PY_TYPE(FieldKeplerianOrbit), (PyObject *) self, "getHx", args, 2);
      }

      static PyObject *t_FieldKeplerianOrbit_getHxDot(t_FieldKeplerianOrbit *self, PyObject *args)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getHxDot());
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        return callSuper(PY_TYPE(FieldKeplerianOrbit), (PyObject *) self, "getHxDot", args, 2);
      }

      static PyObject *t_FieldKeplerianOrbit_getHy(t_FieldKeplerianOrbit *self, PyObject *args)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getHy());
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        return callSuper(PY_TYPE(FieldKeplerianOrbit), (PyObject *) self, "getHy", args, 2);
      }

      static PyObject *t_FieldKeplerianOrbit_getHyDot(t_FieldKeplerianOrbit *self, PyObject *args)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getHyDot());
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        return callSuper(PY_TYPE(FieldKeplerianOrbit), (PyObject *) self, "getHyDot", args, 2);
      }

      static PyObject *t_FieldKeplerianOrbit_getI(t_FieldKeplerianOrbit *self, PyObject *args)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getI());
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        return callSuper(PY_TYPE(FieldKeplerianOrbit), (PyObject *) self, "getI", args, 2);
      }

      static PyObject *t_FieldKeplerianOrbit_getIDot(t_FieldKeplerianOrbit *self, PyObject *args)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getIDot());
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        return callSuper(PY_TYPE(FieldKeplerianOrbit), (PyObject *) self, "getIDot", args, 2);
      }

      static PyObject *t_FieldKeplerianOrbit_getLE(t_FieldKeplerianOrbit *self, PyObject *args)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getLE());
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        return callSuper(PY_TYPE(FieldKeplerianOrbit), (PyObject *) self, "getLE", args, 2);
      }

      static PyObject *t_FieldKeplerianOrbit_getLEDot(t_FieldKeplerianOrbit *self, PyObject *args)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getLEDot());
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        return callSuper(PY_TYPE(FieldKeplerianOrbit), (PyObject *) self, "getLEDot", args, 2);
      }

      static PyObject *t_FieldKeplerianOrbit_getLM(t_FieldKeplerianOrbit *self, PyObject *args)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getLM());
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        return callSuper(PY_TYPE(FieldKeplerianOrbit), (PyObject *) self, "getLM", args, 2);
      }

      static PyObject *t_FieldKeplerianOrbit_getLMDot(t_FieldKeplerianOrbit *self, PyObject *args)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getLMDot());
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        return callSuper(PY_TYPE(FieldKeplerianOrbit), (PyObject *) self, "getLMDot", args, 2);
      }

      static PyObject *t_FieldKeplerianOrbit_getLv(t_FieldKeplerianOrbit *self, PyObject *args)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getLv());
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        return callSuper(PY_TYPE(FieldKeplerianOrbit), (PyObject *) self, "getLv", args, 2);
      }

      static PyObject *t_FieldKeplerianOrbit_getLvDot(t_FieldKeplerianOrbit *self, PyObject *args)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getLvDot());
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        return callSuper(PY_TYPE(FieldKeplerianOrbit), (PyObject *) self, "getLvDot", args, 2);
      }

      static PyObject *t_FieldKeplerianOrbit_getMeanAnomaly(t_FieldKeplerianOrbit *self)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
        OBJ_CALL(result = self->object.getMeanAnomaly());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
      }

      static PyObject *t_FieldKeplerianOrbit_getMeanAnomalyDot(t_FieldKeplerianOrbit *self)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
        OBJ_CALL(result = self->object.getMeanAnomalyDot());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
      }

      static PyObject *t_FieldKeplerianOrbit_getPerigeeArgument(t_FieldKeplerianOrbit *self)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
        OBJ_CALL(result = self->object.getPerigeeArgument());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
      }

      static PyObject *t_FieldKeplerianOrbit_getPerigeeArgumentDot(t_FieldKeplerianOrbit *self)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
        OBJ_CALL(result = self->object.getPerigeeArgumentDot());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
      }

      static PyObject *t_FieldKeplerianOrbit_getRightAscensionOfAscendingNode(t_FieldKeplerianOrbit *self)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
        OBJ_CALL(result = self->object.getRightAscensionOfAscendingNode());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
      }

      static PyObject *t_FieldKeplerianOrbit_getRightAscensionOfAscendingNodeDot(t_FieldKeplerianOrbit *self)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
        OBJ_CALL(result = self->object.getRightAscensionOfAscendingNodeDot());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
      }

      static PyObject *t_FieldKeplerianOrbit_getTrueAnomaly(t_FieldKeplerianOrbit *self)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
        OBJ_CALL(result = self->object.getTrueAnomaly());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
      }

      static PyObject *t_FieldKeplerianOrbit_getTrueAnomalyDot(t_FieldKeplerianOrbit *self)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
        OBJ_CALL(result = self->object.getTrueAnomalyDot());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
      }

      static PyObject *t_FieldKeplerianOrbit_getType(t_FieldKeplerianOrbit *self, PyObject *args)
      {
        ::org::orekit::orbits::OrbitType result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getType());
          return ::org::orekit::orbits::t_OrbitType::wrap_Object(result);
        }

        return callSuper(PY_TYPE(FieldKeplerianOrbit), (PyObject *) self, "getType", args, 2);
      }

      static PyObject *t_FieldKeplerianOrbit_hasDerivatives(t_FieldKeplerianOrbit *self, PyObject *args)
      {
        jboolean result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.hasDerivatives());
          Py_RETURN_BOOL(result);
        }

        return callSuper(PY_TYPE(FieldKeplerianOrbit), (PyObject *) self, "hasDerivatives", args, 2);
      }

      static PyObject *t_FieldKeplerianOrbit_hasRates(t_FieldKeplerianOrbit *self)
      {
        jboolean result;
        OBJ_CALL(result = self->object.hasRates());
        Py_RETURN_BOOL(result);
      }

      static PyObject *t_FieldKeplerianOrbit_removeRates(t_FieldKeplerianOrbit *self)
      {
        FieldKeplerianOrbit result((jobject) NULL);
        OBJ_CALL(result = self->object.removeRates());
        return t_FieldKeplerianOrbit::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_FieldKeplerianOrbit_shiftedBy(t_FieldKeplerianOrbit *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            jdouble a0;
            FieldKeplerianOrbit result((jobject) NULL);

            if (!parseArgs(args, "D", &a0))
            {
              OBJ_CALL(result = self->object.shiftedBy(a0));
              return t_FieldKeplerianOrbit::wrap_Object(result, self->parameters[0]);
            }
          }
          {
            ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
            PyTypeObject **p0;
            FieldKeplerianOrbit result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
            {
              OBJ_CALL(result = self->object.shiftedBy(a0));
              return t_FieldKeplerianOrbit::wrap_Object(result, self->parameters[0]);
            }
          }
        }

        return callSuper(PY_TYPE(FieldKeplerianOrbit), (PyObject *) self, "shiftedBy", args, 2);
      }

      static PyObject *t_FieldKeplerianOrbit_toOrbit(t_FieldKeplerianOrbit *self, PyObject *args)
      {
        ::org::orekit::orbits::KeplerianOrbit result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.toOrbit());
          return ::org::orekit::orbits::t_KeplerianOrbit::wrap_Object(result);
        }

        return callSuper(PY_TYPE(FieldKeplerianOrbit), (PyObject *) self, "toOrbit", args, 2);
      }

      static PyObject *t_FieldKeplerianOrbit_toString(t_FieldKeplerianOrbit *self, PyObject *args)
      {
        ::java::lang::String result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.toString());
          return j2p(result);
        }

        return callSuper(PY_TYPE(FieldKeplerianOrbit), (PyObject *) self, "toString", args, 2);
      }
      static PyObject *t_FieldKeplerianOrbit_get__parameters_(t_FieldKeplerianOrbit *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }

      static PyObject *t_FieldKeplerianOrbit_get__a(t_FieldKeplerianOrbit *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getA());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldKeplerianOrbit_get__aDot(t_FieldKeplerianOrbit *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getADot());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldKeplerianOrbit_get__cachedPositionAngleType(t_FieldKeplerianOrbit *self, void *data)
      {
        ::org::orekit::orbits::PositionAngleType value((jobject) NULL);
        OBJ_CALL(value = self->object.getCachedPositionAngleType());
        return ::org::orekit::orbits::t_PositionAngleType::wrap_Object(value);
      }

      static PyObject *t_FieldKeplerianOrbit_get__e(t_FieldKeplerianOrbit *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getE());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldKeplerianOrbit_get__eDot(t_FieldKeplerianOrbit *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getEDot());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldKeplerianOrbit_get__eccentricAnomaly(t_FieldKeplerianOrbit *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getEccentricAnomaly());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldKeplerianOrbit_get__eccentricAnomalyDot(t_FieldKeplerianOrbit *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getEccentricAnomalyDot());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldKeplerianOrbit_get__equinoctialEx(t_FieldKeplerianOrbit *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getEquinoctialEx());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldKeplerianOrbit_get__equinoctialExDot(t_FieldKeplerianOrbit *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getEquinoctialExDot());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldKeplerianOrbit_get__equinoctialEy(t_FieldKeplerianOrbit *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getEquinoctialEy());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldKeplerianOrbit_get__equinoctialEyDot(t_FieldKeplerianOrbit *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getEquinoctialEyDot());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldKeplerianOrbit_get__hx(t_FieldKeplerianOrbit *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getHx());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldKeplerianOrbit_get__hxDot(t_FieldKeplerianOrbit *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getHxDot());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldKeplerianOrbit_get__hy(t_FieldKeplerianOrbit *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getHy());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldKeplerianOrbit_get__hyDot(t_FieldKeplerianOrbit *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getHyDot());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldKeplerianOrbit_get__i(t_FieldKeplerianOrbit *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getI());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldKeplerianOrbit_get__iDot(t_FieldKeplerianOrbit *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getIDot());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldKeplerianOrbit_get__lE(t_FieldKeplerianOrbit *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getLE());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldKeplerianOrbit_get__lEDot(t_FieldKeplerianOrbit *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getLEDot());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldKeplerianOrbit_get__lM(t_FieldKeplerianOrbit *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getLM());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldKeplerianOrbit_get__lMDot(t_FieldKeplerianOrbit *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getLMDot());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldKeplerianOrbit_get__lv(t_FieldKeplerianOrbit *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getLv());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldKeplerianOrbit_get__lvDot(t_FieldKeplerianOrbit *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getLvDot());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldKeplerianOrbit_get__meanAnomaly(t_FieldKeplerianOrbit *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getMeanAnomaly());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldKeplerianOrbit_get__meanAnomalyDot(t_FieldKeplerianOrbit *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getMeanAnomalyDot());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldKeplerianOrbit_get__perigeeArgument(t_FieldKeplerianOrbit *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getPerigeeArgument());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldKeplerianOrbit_get__perigeeArgumentDot(t_FieldKeplerianOrbit *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getPerigeeArgumentDot());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldKeplerianOrbit_get__rightAscensionOfAscendingNode(t_FieldKeplerianOrbit *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getRightAscensionOfAscendingNode());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldKeplerianOrbit_get__rightAscensionOfAscendingNodeDot(t_FieldKeplerianOrbit *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getRightAscensionOfAscendingNodeDot());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldKeplerianOrbit_get__trueAnomaly(t_FieldKeplerianOrbit *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getTrueAnomaly());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldKeplerianOrbit_get__trueAnomalyDot(t_FieldKeplerianOrbit *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getTrueAnomalyDot());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldKeplerianOrbit_get__type(t_FieldKeplerianOrbit *self, void *data)
      {
        ::org::orekit::orbits::OrbitType value((jobject) NULL);
        OBJ_CALL(value = self->object.getType());
        return ::org::orekit::orbits::t_OrbitType::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/data/DataSource$ReaderOpener.h"
#include "java/io/Reader.h"
#include "java/io/IOException.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace data {

      ::java::lang::Class *DataSource$ReaderOpener::class$ = NULL;
      jmethodID *DataSource$ReaderOpener::mids$ = NULL;
      bool DataSource$ReaderOpener::live$ = false;

      jclass DataSource$ReaderOpener::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/data/DataSource$ReaderOpener");

          mids$ = new jmethodID[max_mid];
          mids$[mid_openOnce_0a92f974b39121e6] = env->getMethodID(cls, "openOnce", "()Ljava/io/Reader;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ::java::io::Reader DataSource$ReaderOpener::openOnce() const
      {
        return ::java::io::Reader(env->callObjectMethod(this$, mids$[mid_openOnce_0a92f974b39121e6]));
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
      static PyObject *t_DataSource$ReaderOpener_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_DataSource$ReaderOpener_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_DataSource$ReaderOpener_openOnce(t_DataSource$ReaderOpener *self);

      static PyMethodDef t_DataSource$ReaderOpener__methods_[] = {
        DECLARE_METHOD(t_DataSource$ReaderOpener, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_DataSource$ReaderOpener, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_DataSource$ReaderOpener, openOnce, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(DataSource$ReaderOpener)[] = {
        { Py_tp_methods, t_DataSource$ReaderOpener__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(DataSource$ReaderOpener)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(DataSource$ReaderOpener, t_DataSource$ReaderOpener, DataSource$ReaderOpener);

      void t_DataSource$ReaderOpener::install(PyObject *module)
      {
        installType(&PY_TYPE(DataSource$ReaderOpener), &PY_TYPE_DEF(DataSource$ReaderOpener), module, "DataSource$ReaderOpener", 0);
      }

      void t_DataSource$ReaderOpener::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(DataSource$ReaderOpener), "class_", make_descriptor(DataSource$ReaderOpener::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(DataSource$ReaderOpener), "wrapfn_", make_descriptor(t_DataSource$ReaderOpener::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(DataSource$ReaderOpener), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_DataSource$ReaderOpener_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, DataSource$ReaderOpener::initializeClass, 1)))
          return NULL;
        return t_DataSource$ReaderOpener::wrap_Object(DataSource$ReaderOpener(((t_DataSource$ReaderOpener *) arg)->object.this$));
      }
      static PyObject *t_DataSource$ReaderOpener_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, DataSource$ReaderOpener::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_DataSource$ReaderOpener_openOnce(t_DataSource$ReaderOpener *self)
      {
        ::java::io::Reader result((jobject) NULL);
        OBJ_CALL(result = self->object.openOnce());
        return ::java::io::t_Reader::wrap_Object(result);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/measurements/modifiers/BaseRangeRateIonosphericDelayModifier.h"
#include "java/util/List.h"
#include "java/lang/Class.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace modifiers {

          ::java::lang::Class *BaseRangeRateIonosphericDelayModifier::class$ = NULL;
          jmethodID *BaseRangeRateIonosphericDelayModifier::mids$ = NULL;
          bool BaseRangeRateIonosphericDelayModifier::live$ = false;

          jclass BaseRangeRateIonosphericDelayModifier::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/modifiers/BaseRangeRateIonosphericDelayModifier");

              mids$ = new jmethodID[max_mid];
              mids$[mid_getParametersDrivers_d751c1a57012b438] = env->getMethodID(cls, "getParametersDrivers", "()Ljava/util/List;");
              mids$[mid_getIonoModel_f3204fe1fff3f0ac] = env->getMethodID(cls, "getIonoModel", "()Lorg/orekit/models/earth/ionosphere/IonosphericModel;");
              mids$[mid_rangeRateErrorIonosphericModel_e648598eaaa5f94d] = env->getMethodID(cls, "rangeRateErrorIonosphericModel", "(Lorg/orekit/estimation/measurements/GroundStation;Lorg/orekit/propagation/FieldSpacecraftState;[Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_rangeRateErrorIonosphericModel_29b53a0d2fc3b115] = env->getMethodID(cls, "rangeRateErrorIonosphericModel", "(Lorg/orekit/estimation/measurements/GroundStation;Lorg/orekit/propagation/SpacecraftState;)D");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          ::java::util::List BaseRangeRateIonosphericDelayModifier::getParametersDrivers() const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getParametersDrivers_d751c1a57012b438]));
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
          static PyObject *t_BaseRangeRateIonosphericDelayModifier_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_BaseRangeRateIonosphericDelayModifier_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_BaseRangeRateIonosphericDelayModifier_getParametersDrivers(t_BaseRangeRateIonosphericDelayModifier *self);
          static PyObject *t_BaseRangeRateIonosphericDelayModifier_get__parametersDrivers(t_BaseRangeRateIonosphericDelayModifier *self, void *data);
          static PyGetSetDef t_BaseRangeRateIonosphericDelayModifier__fields_[] = {
            DECLARE_GET_FIELD(t_BaseRangeRateIonosphericDelayModifier, parametersDrivers),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_BaseRangeRateIonosphericDelayModifier__methods_[] = {
            DECLARE_METHOD(t_BaseRangeRateIonosphericDelayModifier, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_BaseRangeRateIonosphericDelayModifier, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_BaseRangeRateIonosphericDelayModifier, getParametersDrivers, METH_NOARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(BaseRangeRateIonosphericDelayModifier)[] = {
            { Py_tp_methods, t_BaseRangeRateIonosphericDelayModifier__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { Py_tp_getset, t_BaseRangeRateIonosphericDelayModifier__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(BaseRangeRateIonosphericDelayModifier)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(BaseRangeRateIonosphericDelayModifier, t_BaseRangeRateIonosphericDelayModifier, BaseRangeRateIonosphericDelayModifier);

          void t_BaseRangeRateIonosphericDelayModifier::install(PyObject *module)
          {
            installType(&PY_TYPE(BaseRangeRateIonosphericDelayModifier), &PY_TYPE_DEF(BaseRangeRateIonosphericDelayModifier), module, "BaseRangeRateIonosphericDelayModifier", 0);
          }

          void t_BaseRangeRateIonosphericDelayModifier::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(BaseRangeRateIonosphericDelayModifier), "class_", make_descriptor(BaseRangeRateIonosphericDelayModifier::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(BaseRangeRateIonosphericDelayModifier), "wrapfn_", make_descriptor(t_BaseRangeRateIonosphericDelayModifier::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(BaseRangeRateIonosphericDelayModifier), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_BaseRangeRateIonosphericDelayModifier_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, BaseRangeRateIonosphericDelayModifier::initializeClass, 1)))
              return NULL;
            return t_BaseRangeRateIonosphericDelayModifier::wrap_Object(BaseRangeRateIonosphericDelayModifier(((t_BaseRangeRateIonosphericDelayModifier *) arg)->object.this$));
          }
          static PyObject *t_BaseRangeRateIonosphericDelayModifier_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, BaseRangeRateIonosphericDelayModifier::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_BaseRangeRateIonosphericDelayModifier_getParametersDrivers(t_BaseRangeRateIonosphericDelayModifier *self)
          {
            ::java::util::List result((jobject) NULL);
            OBJ_CALL(result = self->object.getParametersDrivers());
            return ::java::util::t_List::wrap_Object(result, ::org::orekit::utils::PY_TYPE(ParameterDriver));
          }

          static PyObject *t_BaseRangeRateIonosphericDelayModifier_get__parametersDrivers(t_BaseRangeRateIonosphericDelayModifier *self, void *data)
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
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/optim/nonlinear/vector/leastsquares/LeastSquaresFactory.h"
#include "org/hipparchus/analysis/MultivariateVectorFunction.h"
#include "org/hipparchus/optim/ConvergenceChecker.h"
#include "org/hipparchus/optim/PointVectorValuePair.h"
#include "org/hipparchus/optim/nonlinear/vector/leastsquares/ParameterValidator.h"
#include "org/hipparchus/util/Incrementor.h"
#include "org/hipparchus/optim/nonlinear/vector/leastsquares/MultivariateJacobianFunction.h"
#include "java/lang/Class.h"
#include "org/hipparchus/analysis/MultivariateMatrixFunction.h"
#include "org/hipparchus/optim/nonlinear/vector/leastsquares/LeastSquaresProblem.h"
#include "org/hipparchus/optim/nonlinear/vector/leastsquares/LeastSquaresProblem$Evaluation.h"
#include "org/hipparchus/linear/RealMatrix.h"
#include "org/hipparchus/linear/RealVector.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace optim {
      namespace nonlinear {
        namespace vector {
          namespace leastsquares {

            ::java::lang::Class *LeastSquaresFactory::class$ = NULL;
            jmethodID *LeastSquaresFactory::mids$ = NULL;
            bool LeastSquaresFactory::live$ = false;

            jclass LeastSquaresFactory::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/hipparchus/optim/nonlinear/vector/leastsquares/LeastSquaresFactory");

                mids$ = new jmethodID[max_mid];
                mids$[mid_countEvaluations_b27ff71e2dfbc50d] = env->getStaticMethodID(cls, "countEvaluations", "(Lorg/hipparchus/optim/nonlinear/vector/leastsquares/LeastSquaresProblem;Lorg/hipparchus/util/Incrementor;)Lorg/hipparchus/optim/nonlinear/vector/leastsquares/LeastSquaresProblem;");
                mids$[mid_create_5f54f00a5eeef515] = env->getStaticMethodID(cls, "create", "(Lorg/hipparchus/optim/nonlinear/vector/leastsquares/MultivariateJacobianFunction;Lorg/hipparchus/linear/RealVector;Lorg/hipparchus/linear/RealVector;Lorg/hipparchus/optim/ConvergenceChecker;II)Lorg/hipparchus/optim/nonlinear/vector/leastsquares/LeastSquaresProblem;");
                mids$[mid_create_dfb8e4dfb091f1cf] = env->getStaticMethodID(cls, "create", "(Lorg/hipparchus/optim/nonlinear/vector/leastsquares/MultivariateJacobianFunction;Lorg/hipparchus/linear/RealVector;Lorg/hipparchus/linear/RealVector;Lorg/hipparchus/linear/RealMatrix;Lorg/hipparchus/optim/ConvergenceChecker;II)Lorg/hipparchus/optim/nonlinear/vector/leastsquares/LeastSquaresProblem;");
                mids$[mid_create_dcfc25f5b61af029] = env->getStaticMethodID(cls, "create", "(Lorg/hipparchus/analysis/MultivariateVectorFunction;Lorg/hipparchus/analysis/MultivariateMatrixFunction;[D[DLorg/hipparchus/linear/RealMatrix;Lorg/hipparchus/optim/ConvergenceChecker;II)Lorg/hipparchus/optim/nonlinear/vector/leastsquares/LeastSquaresProblem;");
                mids$[mid_create_c2c3c7c13d83953e] = env->getStaticMethodID(cls, "create", "(Lorg/hipparchus/optim/nonlinear/vector/leastsquares/MultivariateJacobianFunction;Lorg/hipparchus/linear/RealVector;Lorg/hipparchus/linear/RealVector;Lorg/hipparchus/linear/RealMatrix;Lorg/hipparchus/optim/ConvergenceChecker;IIZLorg/hipparchus/optim/nonlinear/vector/leastsquares/ParameterValidator;)Lorg/hipparchus/optim/nonlinear/vector/leastsquares/LeastSquaresProblem;");
                mids$[mid_evaluationChecker_54fd72b186a20f21] = env->getStaticMethodID(cls, "evaluationChecker", "(Lorg/hipparchus/optim/ConvergenceChecker;)Lorg/hipparchus/optim/ConvergenceChecker;");
                mids$[mid_model_f0d5667160012d0d] = env->getStaticMethodID(cls, "model", "(Lorg/hipparchus/analysis/MultivariateVectorFunction;Lorg/hipparchus/analysis/MultivariateMatrixFunction;)Lorg/hipparchus/optim/nonlinear/vector/leastsquares/MultivariateJacobianFunction;");
                mids$[mid_weightDiagonal_2615deba242b4f6b] = env->getStaticMethodID(cls, "weightDiagonal", "(Lorg/hipparchus/optim/nonlinear/vector/leastsquares/LeastSquaresProblem;Lorg/hipparchus/linear/RealVector;)Lorg/hipparchus/optim/nonlinear/vector/leastsquares/LeastSquaresProblem;");
                mids$[mid_weightMatrix_9ea72f16d18e4245] = env->getStaticMethodID(cls, "weightMatrix", "(Lorg/hipparchus/optim/nonlinear/vector/leastsquares/LeastSquaresProblem;Lorg/hipparchus/linear/RealMatrix;)Lorg/hipparchus/optim/nonlinear/vector/leastsquares/LeastSquaresProblem;");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            ::org::hipparchus::optim::nonlinear::vector::leastsquares::LeastSquaresProblem LeastSquaresFactory::countEvaluations(const ::org::hipparchus::optim::nonlinear::vector::leastsquares::LeastSquaresProblem & a0, const ::org::hipparchus::util::Incrementor & a1)
            {
              jclass cls = env->getClass(initializeClass);
              return ::org::hipparchus::optim::nonlinear::vector::leastsquares::LeastSquaresProblem(env->callStaticObjectMethod(cls, mids$[mid_countEvaluations_b27ff71e2dfbc50d], a0.this$, a1.this$));
            }

            ::org::hipparchus::optim::nonlinear::vector::leastsquares::LeastSquaresProblem LeastSquaresFactory::create(const ::org::hipparchus::optim::nonlinear::vector::leastsquares::MultivariateJacobianFunction & a0, const ::org::hipparchus::linear::RealVector & a1, const ::org::hipparchus::linear::RealVector & a2, const ::org::hipparchus::optim::ConvergenceChecker & a3, jint a4, jint a5)
            {
              jclass cls = env->getClass(initializeClass);
              return ::org::hipparchus::optim::nonlinear::vector::leastsquares::LeastSquaresProblem(env->callStaticObjectMethod(cls, mids$[mid_create_5f54f00a5eeef515], a0.this$, a1.this$, a2.this$, a3.this$, a4, a5));
            }

            ::org::hipparchus::optim::nonlinear::vector::leastsquares::LeastSquaresProblem LeastSquaresFactory::create(const ::org::hipparchus::optim::nonlinear::vector::leastsquares::MultivariateJacobianFunction & a0, const ::org::hipparchus::linear::RealVector & a1, const ::org::hipparchus::linear::RealVector & a2, const ::org::hipparchus::linear::RealMatrix & a3, const ::org::hipparchus::optim::ConvergenceChecker & a4, jint a5, jint a6)
            {
              jclass cls = env->getClass(initializeClass);
              return ::org::hipparchus::optim::nonlinear::vector::leastsquares::LeastSquaresProblem(env->callStaticObjectMethod(cls, mids$[mid_create_dfb8e4dfb091f1cf], a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5, a6));
            }

            ::org::hipparchus::optim::nonlinear::vector::leastsquares::LeastSquaresProblem LeastSquaresFactory::create(const ::org::hipparchus::analysis::MultivariateVectorFunction & a0, const ::org::hipparchus::analysis::MultivariateMatrixFunction & a1, const JArray< jdouble > & a2, const JArray< jdouble > & a3, const ::org::hipparchus::linear::RealMatrix & a4, const ::org::hipparchus::optim::ConvergenceChecker & a5, jint a6, jint a7)
            {
              jclass cls = env->getClass(initializeClass);
              return ::org::hipparchus::optim::nonlinear::vector::leastsquares::LeastSquaresProblem(env->callStaticObjectMethod(cls, mids$[mid_create_dcfc25f5b61af029], a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$, a6, a7));
            }

            ::org::hipparchus::optim::nonlinear::vector::leastsquares::LeastSquaresProblem LeastSquaresFactory::create(const ::org::hipparchus::optim::nonlinear::vector::leastsquares::MultivariateJacobianFunction & a0, const ::org::hipparchus::linear::RealVector & a1, const ::org::hipparchus::linear::RealVector & a2, const ::org::hipparchus::linear::RealMatrix & a3, const ::org::hipparchus::optim::ConvergenceChecker & a4, jint a5, jint a6, jboolean a7, const ::org::hipparchus::optim::nonlinear::vector::leastsquares::ParameterValidator & a8)
            {
              jclass cls = env->getClass(initializeClass);
              return ::org::hipparchus::optim::nonlinear::vector::leastsquares::LeastSquaresProblem(env->callStaticObjectMethod(cls, mids$[mid_create_c2c3c7c13d83953e], a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5, a6, a7, a8.this$));
            }

            ::org::hipparchus::optim::ConvergenceChecker LeastSquaresFactory::evaluationChecker(const ::org::hipparchus::optim::ConvergenceChecker & a0)
            {
              jclass cls = env->getClass(initializeClass);
              return ::org::hipparchus::optim::ConvergenceChecker(env->callStaticObjectMethod(cls, mids$[mid_evaluationChecker_54fd72b186a20f21], a0.this$));
            }

            ::org::hipparchus::optim::nonlinear::vector::leastsquares::MultivariateJacobianFunction LeastSquaresFactory::model(const ::org::hipparchus::analysis::MultivariateVectorFunction & a0, const ::org::hipparchus::analysis::MultivariateMatrixFunction & a1)
            {
              jclass cls = env->getClass(initializeClass);
              return ::org::hipparchus::optim::nonlinear::vector::leastsquares::MultivariateJacobianFunction(env->callStaticObjectMethod(cls, mids$[mid_model_f0d5667160012d0d], a0.this$, a1.this$));
            }

            ::org::hipparchus::optim::nonlinear::vector::leastsquares::LeastSquaresProblem LeastSquaresFactory::weightDiagonal(const ::org::hipparchus::optim::nonlinear::vector::leastsquares::LeastSquaresProblem & a0, const ::org::hipparchus::linear::RealVector & a1)
            {
              jclass cls = env->getClass(initializeClass);
              return ::org::hipparchus::optim::nonlinear::vector::leastsquares::LeastSquaresProblem(env->callStaticObjectMethod(cls, mids$[mid_weightDiagonal_2615deba242b4f6b], a0.this$, a1.this$));
            }

            ::org::hipparchus::optim::nonlinear::vector::leastsquares::LeastSquaresProblem LeastSquaresFactory::weightMatrix(const ::org::hipparchus::optim::nonlinear::vector::leastsquares::LeastSquaresProblem & a0, const ::org::hipparchus::linear::RealMatrix & a1)
            {
              jclass cls = env->getClass(initializeClass);
              return ::org::hipparchus::optim::nonlinear::vector::leastsquares::LeastSquaresProblem(env->callStaticObjectMethod(cls, mids$[mid_weightMatrix_9ea72f16d18e4245], a0.this$, a1.this$));
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
            static PyObject *t_LeastSquaresFactory_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_LeastSquaresFactory_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_LeastSquaresFactory_countEvaluations(PyTypeObject *type, PyObject *args);
            static PyObject *t_LeastSquaresFactory_create(PyTypeObject *type, PyObject *args);
            static PyObject *t_LeastSquaresFactory_evaluationChecker(PyTypeObject *type, PyObject *arg);
            static PyObject *t_LeastSquaresFactory_model(PyTypeObject *type, PyObject *args);
            static PyObject *t_LeastSquaresFactory_weightDiagonal(PyTypeObject *type, PyObject *args);
            static PyObject *t_LeastSquaresFactory_weightMatrix(PyTypeObject *type, PyObject *args);

            static PyMethodDef t_LeastSquaresFactory__methods_[] = {
              DECLARE_METHOD(t_LeastSquaresFactory, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_LeastSquaresFactory, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_LeastSquaresFactory, countEvaluations, METH_VARARGS | METH_CLASS),
              DECLARE_METHOD(t_LeastSquaresFactory, create, METH_VARARGS | METH_CLASS),
              DECLARE_METHOD(t_LeastSquaresFactory, evaluationChecker, METH_O | METH_CLASS),
              DECLARE_METHOD(t_LeastSquaresFactory, model, METH_VARARGS | METH_CLASS),
              DECLARE_METHOD(t_LeastSquaresFactory, weightDiagonal, METH_VARARGS | METH_CLASS),
              DECLARE_METHOD(t_LeastSquaresFactory, weightMatrix, METH_VARARGS | METH_CLASS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(LeastSquaresFactory)[] = {
              { Py_tp_methods, t_LeastSquaresFactory__methods_ },
              { Py_tp_init, (void *) abstract_init },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(LeastSquaresFactory)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(LeastSquaresFactory, t_LeastSquaresFactory, LeastSquaresFactory);

            void t_LeastSquaresFactory::install(PyObject *module)
            {
              installType(&PY_TYPE(LeastSquaresFactory), &PY_TYPE_DEF(LeastSquaresFactory), module, "LeastSquaresFactory", 0);
            }

            void t_LeastSquaresFactory::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(LeastSquaresFactory), "class_", make_descriptor(LeastSquaresFactory::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(LeastSquaresFactory), "wrapfn_", make_descriptor(t_LeastSquaresFactory::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(LeastSquaresFactory), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_LeastSquaresFactory_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, LeastSquaresFactory::initializeClass, 1)))
                return NULL;
              return t_LeastSquaresFactory::wrap_Object(LeastSquaresFactory(((t_LeastSquaresFactory *) arg)->object.this$));
            }
            static PyObject *t_LeastSquaresFactory_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, LeastSquaresFactory::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_LeastSquaresFactory_countEvaluations(PyTypeObject *type, PyObject *args)
            {
              ::org::hipparchus::optim::nonlinear::vector::leastsquares::LeastSquaresProblem a0((jobject) NULL);
              ::org::hipparchus::util::Incrementor a1((jobject) NULL);
              ::org::hipparchus::optim::nonlinear::vector::leastsquares::LeastSquaresProblem result((jobject) NULL);

              if (!parseArgs(args, "kk", ::org::hipparchus::optim::nonlinear::vector::leastsquares::LeastSquaresProblem::initializeClass, ::org::hipparchus::util::Incrementor::initializeClass, &a0, &a1))
              {
                OBJ_CALL(result = ::org::hipparchus::optim::nonlinear::vector::leastsquares::LeastSquaresFactory::countEvaluations(a0, a1));
                return ::org::hipparchus::optim::nonlinear::vector::leastsquares::t_LeastSquaresProblem::wrap_Object(result);
              }

              PyErr_SetArgsError(type, "countEvaluations", args);
              return NULL;
            }

            static PyObject *t_LeastSquaresFactory_create(PyTypeObject *type, PyObject *args)
            {
              switch (PyTuple_GET_SIZE(args)) {
               case 6:
                {
                  ::org::hipparchus::optim::nonlinear::vector::leastsquares::MultivariateJacobianFunction a0((jobject) NULL);
                  ::org::hipparchus::linear::RealVector a1((jobject) NULL);
                  ::org::hipparchus::linear::RealVector a2((jobject) NULL);
                  ::org::hipparchus::optim::ConvergenceChecker a3((jobject) NULL);
                  PyTypeObject **p3;
                  jint a4;
                  jint a5;
                  ::org::hipparchus::optim::nonlinear::vector::leastsquares::LeastSquaresProblem result((jobject) NULL);

                  if (!parseArgs(args, "kkkKII", ::org::hipparchus::optim::nonlinear::vector::leastsquares::MultivariateJacobianFunction::initializeClass, ::org::hipparchus::linear::RealVector::initializeClass, ::org::hipparchus::linear::RealVector::initializeClass, ::org::hipparchus::optim::ConvergenceChecker::initializeClass, &a0, &a1, &a2, &a3, &p3, ::org::hipparchus::optim::t_ConvergenceChecker::parameters_, &a4, &a5))
                  {
                    OBJ_CALL(result = ::org::hipparchus::optim::nonlinear::vector::leastsquares::LeastSquaresFactory::create(a0, a1, a2, a3, a4, a5));
                    return ::org::hipparchus::optim::nonlinear::vector::leastsquares::t_LeastSquaresProblem::wrap_Object(result);
                  }
                }
                break;
               case 7:
                {
                  ::org::hipparchus::optim::nonlinear::vector::leastsquares::MultivariateJacobianFunction a0((jobject) NULL);
                  ::org::hipparchus::linear::RealVector a1((jobject) NULL);
                  ::org::hipparchus::linear::RealVector a2((jobject) NULL);
                  ::org::hipparchus::linear::RealMatrix a3((jobject) NULL);
                  ::org::hipparchus::optim::ConvergenceChecker a4((jobject) NULL);
                  PyTypeObject **p4;
                  jint a5;
                  jint a6;
                  ::org::hipparchus::optim::nonlinear::vector::leastsquares::LeastSquaresProblem result((jobject) NULL);

                  if (!parseArgs(args, "kkkkKII", ::org::hipparchus::optim::nonlinear::vector::leastsquares::MultivariateJacobianFunction::initializeClass, ::org::hipparchus::linear::RealVector::initializeClass, ::org::hipparchus::linear::RealVector::initializeClass, ::org::hipparchus::linear::RealMatrix::initializeClass, ::org::hipparchus::optim::ConvergenceChecker::initializeClass, &a0, &a1, &a2, &a3, &a4, &p4, ::org::hipparchus::optim::t_ConvergenceChecker::parameters_, &a5, &a6))
                  {
                    OBJ_CALL(result = ::org::hipparchus::optim::nonlinear::vector::leastsquares::LeastSquaresFactory::create(a0, a1, a2, a3, a4, a5, a6));
                    return ::org::hipparchus::optim::nonlinear::vector::leastsquares::t_LeastSquaresProblem::wrap_Object(result);
                  }
                }
                break;
               case 8:
                {
                  ::org::hipparchus::analysis::MultivariateVectorFunction a0((jobject) NULL);
                  ::org::hipparchus::analysis::MultivariateMatrixFunction a1((jobject) NULL);
                  JArray< jdouble > a2((jobject) NULL);
                  JArray< jdouble > a3((jobject) NULL);
                  ::org::hipparchus::linear::RealMatrix a4((jobject) NULL);
                  ::org::hipparchus::optim::ConvergenceChecker a5((jobject) NULL);
                  PyTypeObject **p5;
                  jint a6;
                  jint a7;
                  ::org::hipparchus::optim::nonlinear::vector::leastsquares::LeastSquaresProblem result((jobject) NULL);

                  if (!parseArgs(args, "kk[D[DkKII", ::org::hipparchus::analysis::MultivariateVectorFunction::initializeClass, ::org::hipparchus::analysis::MultivariateMatrixFunction::initializeClass, ::org::hipparchus::linear::RealMatrix::initializeClass, ::org::hipparchus::optim::ConvergenceChecker::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5, &p5, ::org::hipparchus::optim::t_ConvergenceChecker::parameters_, &a6, &a7))
                  {
                    OBJ_CALL(result = ::org::hipparchus::optim::nonlinear::vector::leastsquares::LeastSquaresFactory::create(a0, a1, a2, a3, a4, a5, a6, a7));
                    return ::org::hipparchus::optim::nonlinear::vector::leastsquares::t_LeastSquaresProblem::wrap_Object(result);
                  }
                }
                break;
               case 9:
                {
                  ::org::hipparchus::optim::nonlinear::vector::leastsquares::MultivariateJacobianFunction a0((jobject) NULL);
                  ::org::hipparchus::linear::RealVector a1((jobject) NULL);
                  ::org::hipparchus::linear::RealVector a2((jobject) NULL);
                  ::org::hipparchus::linear::RealMatrix a3((jobject) NULL);
                  ::org::hipparchus::optim::ConvergenceChecker a4((jobject) NULL);
                  PyTypeObject **p4;
                  jint a5;
                  jint a6;
                  jboolean a7;
                  ::org::hipparchus::optim::nonlinear::vector::leastsquares::ParameterValidator a8((jobject) NULL);
                  ::org::hipparchus::optim::nonlinear::vector::leastsquares::LeastSquaresProblem result((jobject) NULL);

                  if (!parseArgs(args, "kkkkKIIZk", ::org::hipparchus::optim::nonlinear::vector::leastsquares::MultivariateJacobianFunction::initializeClass, ::org::hipparchus::linear::RealVector::initializeClass, ::org::hipparchus::linear::RealVector::initializeClass, ::org::hipparchus::linear::RealMatrix::initializeClass, ::org::hipparchus::optim::ConvergenceChecker::initializeClass, ::org::hipparchus::optim::nonlinear::vector::leastsquares::ParameterValidator::initializeClass, &a0, &a1, &a2, &a3, &a4, &p4, ::org::hipparchus::optim::t_ConvergenceChecker::parameters_, &a5, &a6, &a7, &a8))
                  {
                    OBJ_CALL(result = ::org::hipparchus::optim::nonlinear::vector::leastsquares::LeastSquaresFactory::create(a0, a1, a2, a3, a4, a5, a6, a7, a8));
                    return ::org::hipparchus::optim::nonlinear::vector::leastsquares::t_LeastSquaresProblem::wrap_Object(result);
                  }
                }
              }

              PyErr_SetArgsError(type, "create", args);
              return NULL;
            }

            static PyObject *t_LeastSquaresFactory_evaluationChecker(PyTypeObject *type, PyObject *arg)
            {
              ::org::hipparchus::optim::ConvergenceChecker a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::hipparchus::optim::ConvergenceChecker result((jobject) NULL);

              if (!parseArg(arg, "K", ::org::hipparchus::optim::ConvergenceChecker::initializeClass, &a0, &p0, ::org::hipparchus::optim::t_ConvergenceChecker::parameters_))
              {
                OBJ_CALL(result = ::org::hipparchus::optim::nonlinear::vector::leastsquares::LeastSquaresFactory::evaluationChecker(a0));
                return ::org::hipparchus::optim::t_ConvergenceChecker::wrap_Object(result, ::org::hipparchus::optim::nonlinear::vector::leastsquares::PY_TYPE(LeastSquaresProblem$Evaluation));
              }

              PyErr_SetArgsError(type, "evaluationChecker", arg);
              return NULL;
            }

            static PyObject *t_LeastSquaresFactory_model(PyTypeObject *type, PyObject *args)
            {
              ::org::hipparchus::analysis::MultivariateVectorFunction a0((jobject) NULL);
              ::org::hipparchus::analysis::MultivariateMatrixFunction a1((jobject) NULL);
              ::org::hipparchus::optim::nonlinear::vector::leastsquares::MultivariateJacobianFunction result((jobject) NULL);

              if (!parseArgs(args, "kk", ::org::hipparchus::analysis::MultivariateVectorFunction::initializeClass, ::org::hipparchus::analysis::MultivariateMatrixFunction::initializeClass, &a0, &a1))
              {
                OBJ_CALL(result = ::org::hipparchus::optim::nonlinear::vector::leastsquares::LeastSquaresFactory::model(a0, a1));
                return ::org::hipparchus::optim::nonlinear::vector::leastsquares::t_MultivariateJacobianFunction::wrap_Object(result);
              }

              PyErr_SetArgsError(type, "model", args);
              return NULL;
            }

            static PyObject *t_LeastSquaresFactory_weightDiagonal(PyTypeObject *type, PyObject *args)
            {
              ::org::hipparchus::optim::nonlinear::vector::leastsquares::LeastSquaresProblem a0((jobject) NULL);
              ::org::hipparchus::linear::RealVector a1((jobject) NULL);
              ::org::hipparchus::optim::nonlinear::vector::leastsquares::LeastSquaresProblem result((jobject) NULL);

              if (!parseArgs(args, "kk", ::org::hipparchus::optim::nonlinear::vector::leastsquares::LeastSquaresProblem::initializeClass, ::org::hipparchus::linear::RealVector::initializeClass, &a0, &a1))
              {
                OBJ_CALL(result = ::org::hipparchus::optim::nonlinear::vector::leastsquares::LeastSquaresFactory::weightDiagonal(a0, a1));
                return ::org::hipparchus::optim::nonlinear::vector::leastsquares::t_LeastSquaresProblem::wrap_Object(result);
              }

              PyErr_SetArgsError(type, "weightDiagonal", args);
              return NULL;
            }

            static PyObject *t_LeastSquaresFactory_weightMatrix(PyTypeObject *type, PyObject *args)
            {
              ::org::hipparchus::optim::nonlinear::vector::leastsquares::LeastSquaresProblem a0((jobject) NULL);
              ::org::hipparchus::linear::RealMatrix a1((jobject) NULL);
              ::org::hipparchus::optim::nonlinear::vector::leastsquares::LeastSquaresProblem result((jobject) NULL);

              if (!parseArgs(args, "kk", ::org::hipparchus::optim::nonlinear::vector::leastsquares::LeastSquaresProblem::initializeClass, ::org::hipparchus::linear::RealMatrix::initializeClass, &a0, &a1))
              {
                OBJ_CALL(result = ::org::hipparchus::optim::nonlinear::vector::leastsquares::LeastSquaresFactory::weightMatrix(a0, a1));
                return ::org::hipparchus::optim::nonlinear::vector::leastsquares::t_LeastSquaresProblem::wrap_Object(result);
              }

              PyErr_SetArgsError(type, "weightMatrix", args);
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
#include "org/hipparchus/distribution/continuous/GumbelDistribution.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace distribution {
      namespace continuous {

        ::java::lang::Class *GumbelDistribution::class$ = NULL;
        jmethodID *GumbelDistribution::mids$ = NULL;
        bool GumbelDistribution::live$ = false;

        jclass GumbelDistribution::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/distribution/continuous/GumbelDistribution");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_13edac039e8cc967] = env->getMethodID(cls, "<init>", "(DD)V");
            mids$[mid_cumulativeProbability_bf28ed64d6e8576b] = env->getMethodID(cls, "cumulativeProbability", "(D)D");
            mids$[mid_density_bf28ed64d6e8576b] = env->getMethodID(cls, "density", "(D)D");
            mids$[mid_getLocation_9981f74b2d109da6] = env->getMethodID(cls, "getLocation", "()D");
            mids$[mid_getNumericalMean_9981f74b2d109da6] = env->getMethodID(cls, "getNumericalMean", "()D");
            mids$[mid_getNumericalVariance_9981f74b2d109da6] = env->getMethodID(cls, "getNumericalVariance", "()D");
            mids$[mid_getScale_9981f74b2d109da6] = env->getMethodID(cls, "getScale", "()D");
            mids$[mid_getSupportLowerBound_9981f74b2d109da6] = env->getMethodID(cls, "getSupportLowerBound", "()D");
            mids$[mid_getSupportUpperBound_9981f74b2d109da6] = env->getMethodID(cls, "getSupportUpperBound", "()D");
            mids$[mid_inverseCumulativeProbability_bf28ed64d6e8576b] = env->getMethodID(cls, "inverseCumulativeProbability", "(D)D");
            mids$[mid_isSupportConnected_eee3de00fe971136] = env->getMethodID(cls, "isSupportConnected", "()Z");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        GumbelDistribution::GumbelDistribution(jdouble a0, jdouble a1) : ::org::hipparchus::distribution::continuous::AbstractRealDistribution(env->newObject(initializeClass, &mids$, mid_init$_13edac039e8cc967, a0, a1)) {}

        jdouble GumbelDistribution::cumulativeProbability(jdouble a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_cumulativeProbability_bf28ed64d6e8576b], a0);
        }

        jdouble GumbelDistribution::density(jdouble a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_density_bf28ed64d6e8576b], a0);
        }

        jdouble GumbelDistribution::getLocation() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getLocation_9981f74b2d109da6]);
        }

        jdouble GumbelDistribution::getNumericalMean() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getNumericalMean_9981f74b2d109da6]);
        }

        jdouble GumbelDistribution::getNumericalVariance() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getNumericalVariance_9981f74b2d109da6]);
        }

        jdouble GumbelDistribution::getScale() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getScale_9981f74b2d109da6]);
        }

        jdouble GumbelDistribution::getSupportLowerBound() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getSupportLowerBound_9981f74b2d109da6]);
        }

        jdouble GumbelDistribution::getSupportUpperBound() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getSupportUpperBound_9981f74b2d109da6]);
        }

        jdouble GumbelDistribution::inverseCumulativeProbability(jdouble a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_inverseCumulativeProbability_bf28ed64d6e8576b], a0);
        }

        jboolean GumbelDistribution::isSupportConnected() const
        {
          return env->callBooleanMethod(this$, mids$[mid_isSupportConnected_eee3de00fe971136]);
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
        static PyObject *t_GumbelDistribution_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_GumbelDistribution_instance_(PyTypeObject *type, PyObject *arg);
        static int t_GumbelDistribution_init_(t_GumbelDistribution *self, PyObject *args, PyObject *kwds);
        static PyObject *t_GumbelDistribution_cumulativeProbability(t_GumbelDistribution *self, PyObject *args);
        static PyObject *t_GumbelDistribution_density(t_GumbelDistribution *self, PyObject *args);
        static PyObject *t_GumbelDistribution_getLocation(t_GumbelDistribution *self);
        static PyObject *t_GumbelDistribution_getNumericalMean(t_GumbelDistribution *self, PyObject *args);
        static PyObject *t_GumbelDistribution_getNumericalVariance(t_GumbelDistribution *self, PyObject *args);
        static PyObject *t_GumbelDistribution_getScale(t_GumbelDistribution *self);
        static PyObject *t_GumbelDistribution_getSupportLowerBound(t_GumbelDistribution *self, PyObject *args);
        static PyObject *t_GumbelDistribution_getSupportUpperBound(t_GumbelDistribution *self, PyObject *args);
        static PyObject *t_GumbelDistribution_inverseCumulativeProbability(t_GumbelDistribution *self, PyObject *args);
        static PyObject *t_GumbelDistribution_isSupportConnected(t_GumbelDistribution *self, PyObject *args);
        static PyObject *t_GumbelDistribution_get__location(t_GumbelDistribution *self, void *data);
        static PyObject *t_GumbelDistribution_get__numericalMean(t_GumbelDistribution *self, void *data);
        static PyObject *t_GumbelDistribution_get__numericalVariance(t_GumbelDistribution *self, void *data);
        static PyObject *t_GumbelDistribution_get__scale(t_GumbelDistribution *self, void *data);
        static PyObject *t_GumbelDistribution_get__supportConnected(t_GumbelDistribution *self, void *data);
        static PyObject *t_GumbelDistribution_get__supportLowerBound(t_GumbelDistribution *self, void *data);
        static PyObject *t_GumbelDistribution_get__supportUpperBound(t_GumbelDistribution *self, void *data);
        static PyGetSetDef t_GumbelDistribution__fields_[] = {
          DECLARE_GET_FIELD(t_GumbelDistribution, location),
          DECLARE_GET_FIELD(t_GumbelDistribution, numericalMean),
          DECLARE_GET_FIELD(t_GumbelDistribution, numericalVariance),
          DECLARE_GET_FIELD(t_GumbelDistribution, scale),
          DECLARE_GET_FIELD(t_GumbelDistribution, supportConnected),
          DECLARE_GET_FIELD(t_GumbelDistribution, supportLowerBound),
          DECLARE_GET_FIELD(t_GumbelDistribution, supportUpperBound),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_GumbelDistribution__methods_[] = {
          DECLARE_METHOD(t_GumbelDistribution, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_GumbelDistribution, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_GumbelDistribution, cumulativeProbability, METH_VARARGS),
          DECLARE_METHOD(t_GumbelDistribution, density, METH_VARARGS),
          DECLARE_METHOD(t_GumbelDistribution, getLocation, METH_NOARGS),
          DECLARE_METHOD(t_GumbelDistribution, getNumericalMean, METH_VARARGS),
          DECLARE_METHOD(t_GumbelDistribution, getNumericalVariance, METH_VARARGS),
          DECLARE_METHOD(t_GumbelDistribution, getScale, METH_NOARGS),
          DECLARE_METHOD(t_GumbelDistribution, getSupportLowerBound, METH_VARARGS),
          DECLARE_METHOD(t_GumbelDistribution, getSupportUpperBound, METH_VARARGS),
          DECLARE_METHOD(t_GumbelDistribution, inverseCumulativeProbability, METH_VARARGS),
          DECLARE_METHOD(t_GumbelDistribution, isSupportConnected, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(GumbelDistribution)[] = {
          { Py_tp_methods, t_GumbelDistribution__methods_ },
          { Py_tp_init, (void *) t_GumbelDistribution_init_ },
          { Py_tp_getset, t_GumbelDistribution__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(GumbelDistribution)[] = {
          &PY_TYPE_DEF(::org::hipparchus::distribution::continuous::AbstractRealDistribution),
          NULL
        };

        DEFINE_TYPE(GumbelDistribution, t_GumbelDistribution, GumbelDistribution);

        void t_GumbelDistribution::install(PyObject *module)
        {
          installType(&PY_TYPE(GumbelDistribution), &PY_TYPE_DEF(GumbelDistribution), module, "GumbelDistribution", 0);
        }

        void t_GumbelDistribution::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(GumbelDistribution), "class_", make_descriptor(GumbelDistribution::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(GumbelDistribution), "wrapfn_", make_descriptor(t_GumbelDistribution::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(GumbelDistribution), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_GumbelDistribution_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, GumbelDistribution::initializeClass, 1)))
            return NULL;
          return t_GumbelDistribution::wrap_Object(GumbelDistribution(((t_GumbelDistribution *) arg)->object.this$));
        }
        static PyObject *t_GumbelDistribution_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, GumbelDistribution::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_GumbelDistribution_init_(t_GumbelDistribution *self, PyObject *args, PyObject *kwds)
        {
          jdouble a0;
          jdouble a1;
          GumbelDistribution object((jobject) NULL);

          if (!parseArgs(args, "DD", &a0, &a1))
          {
            INT_CALL(object = GumbelDistribution(a0, a1));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_GumbelDistribution_cumulativeProbability(t_GumbelDistribution *self, PyObject *args)
        {
          jdouble a0;
          jdouble result;

          if (!parseArgs(args, "D", &a0))
          {
            OBJ_CALL(result = self->object.cumulativeProbability(a0));
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(GumbelDistribution), (PyObject *) self, "cumulativeProbability", args, 2);
        }

        static PyObject *t_GumbelDistribution_density(t_GumbelDistribution *self, PyObject *args)
        {
          jdouble a0;
          jdouble result;

          if (!parseArgs(args, "D", &a0))
          {
            OBJ_CALL(result = self->object.density(a0));
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(GumbelDistribution), (PyObject *) self, "density", args, 2);
        }

        static PyObject *t_GumbelDistribution_getLocation(t_GumbelDistribution *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getLocation());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_GumbelDistribution_getNumericalMean(t_GumbelDistribution *self, PyObject *args)
        {
          jdouble result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getNumericalMean());
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(GumbelDistribution), (PyObject *) self, "getNumericalMean", args, 2);
        }

        static PyObject *t_GumbelDistribution_getNumericalVariance(t_GumbelDistribution *self, PyObject *args)
        {
          jdouble result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getNumericalVariance());
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(GumbelDistribution), (PyObject *) self, "getNumericalVariance", args, 2);
        }

        static PyObject *t_GumbelDistribution_getScale(t_GumbelDistribution *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getScale());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_GumbelDistribution_getSupportLowerBound(t_GumbelDistribution *self, PyObject *args)
        {
          jdouble result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getSupportLowerBound());
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(GumbelDistribution), (PyObject *) self, "getSupportLowerBound", args, 2);
        }

        static PyObject *t_GumbelDistribution_getSupportUpperBound(t_GumbelDistribution *self, PyObject *args)
        {
          jdouble result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getSupportUpperBound());
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(GumbelDistribution), (PyObject *) self, "getSupportUpperBound", args, 2);
        }

        static PyObject *t_GumbelDistribution_inverseCumulativeProbability(t_GumbelDistribution *self, PyObject *args)
        {
          jdouble a0;
          jdouble result;

          if (!parseArgs(args, "D", &a0))
          {
            OBJ_CALL(result = self->object.inverseCumulativeProbability(a0));
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(GumbelDistribution), (PyObject *) self, "inverseCumulativeProbability", args, 2);
        }

        static PyObject *t_GumbelDistribution_isSupportConnected(t_GumbelDistribution *self, PyObject *args)
        {
          jboolean result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.isSupportConnected());
            Py_RETURN_BOOL(result);
          }

          return callSuper(PY_TYPE(GumbelDistribution), (PyObject *) self, "isSupportConnected", args, 2);
        }

        static PyObject *t_GumbelDistribution_get__location(t_GumbelDistribution *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getLocation());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_GumbelDistribution_get__numericalMean(t_GumbelDistribution *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getNumericalMean());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_GumbelDistribution_get__numericalVariance(t_GumbelDistribution *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getNumericalVariance());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_GumbelDistribution_get__scale(t_GumbelDistribution *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getScale());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_GumbelDistribution_get__supportConnected(t_GumbelDistribution *self, void *data)
        {
          jboolean value;
          OBJ_CALL(value = self->object.isSupportConnected());
          Py_RETURN_BOOL(value);
        }

        static PyObject *t_GumbelDistribution_get__supportLowerBound(t_GumbelDistribution *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getSupportLowerBound());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_GumbelDistribution_get__supportUpperBound(t_GumbelDistribution *self, void *data)
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
#include "org/orekit/propagation/events/EventSlopeFilter.h"
#include "org/orekit/propagation/events/FilterType.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "org/orekit/propagation/events/EventDetector.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace events {

        ::java::lang::Class *EventSlopeFilter::class$ = NULL;
        jmethodID *EventSlopeFilter::mids$ = NULL;
        bool EventSlopeFilter::live$ = false;

        jclass EventSlopeFilter::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/events/EventSlopeFilter");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_482ce33f82f91e55] = env->getMethodID(cls, "<init>", "(Lorg/orekit/propagation/events/EventDetector;Lorg/orekit/propagation/events/FilterType;)V");
            mids$[mid_g_b443ba1cc794b916] = env->getMethodID(cls, "g", "(Lorg/orekit/propagation/SpacecraftState;)D");
            mids$[mid_getDetector_ebd847a60689999d] = env->getMethodID(cls, "getDetector", "()Lorg/orekit/propagation/events/EventDetector;");
            mids$[mid_getFilter_25839fba67b73b37] = env->getMethodID(cls, "getFilter", "()Lorg/orekit/propagation/events/FilterType;");
            mids$[mid_init_14deaae988292d42] = env->getMethodID(cls, "init", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/time/AbsoluteDate;)V");
            mids$[mid_create_57e65758709f9697] = env->getMethodID(cls, "create", "(Lorg/orekit/propagation/events/AdaptableInterval;DILorg/orekit/propagation/events/handlers/EventHandler;)Lorg/orekit/propagation/events/EventSlopeFilter;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        EventSlopeFilter::EventSlopeFilter(const ::org::orekit::propagation::events::EventDetector & a0, const ::org::orekit::propagation::events::FilterType & a1) : ::org::orekit::propagation::events::AbstractDetector(env->newObject(initializeClass, &mids$, mid_init$_482ce33f82f91e55, a0.this$, a1.this$)) {}

        jdouble EventSlopeFilter::g(const ::org::orekit::propagation::SpacecraftState & a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_g_b443ba1cc794b916], a0.this$);
        }

        ::org::orekit::propagation::events::EventDetector EventSlopeFilter::getDetector() const
        {
          return ::org::orekit::propagation::events::EventDetector(env->callObjectMethod(this$, mids$[mid_getDetector_ebd847a60689999d]));
        }

        ::org::orekit::propagation::events::FilterType EventSlopeFilter::getFilter() const
        {
          return ::org::orekit::propagation::events::FilterType(env->callObjectMethod(this$, mids$[mid_getFilter_25839fba67b73b37]));
        }

        void EventSlopeFilter::init(const ::org::orekit::propagation::SpacecraftState & a0, const ::org::orekit::time::AbsoluteDate & a1) const
        {
          env->callVoidMethod(this$, mids$[mid_init_14deaae988292d42], a0.this$, a1.this$);
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
        static PyObject *t_EventSlopeFilter_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_EventSlopeFilter_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_EventSlopeFilter_of_(t_EventSlopeFilter *self, PyObject *args);
        static int t_EventSlopeFilter_init_(t_EventSlopeFilter *self, PyObject *args, PyObject *kwds);
        static PyObject *t_EventSlopeFilter_g(t_EventSlopeFilter *self, PyObject *args);
        static PyObject *t_EventSlopeFilter_getDetector(t_EventSlopeFilter *self);
        static PyObject *t_EventSlopeFilter_getFilter(t_EventSlopeFilter *self);
        static PyObject *t_EventSlopeFilter_init(t_EventSlopeFilter *self, PyObject *args);
        static PyObject *t_EventSlopeFilter_get__detector(t_EventSlopeFilter *self, void *data);
        static PyObject *t_EventSlopeFilter_get__filter(t_EventSlopeFilter *self, void *data);
        static PyObject *t_EventSlopeFilter_get__parameters_(t_EventSlopeFilter *self, void *data);
        static PyGetSetDef t_EventSlopeFilter__fields_[] = {
          DECLARE_GET_FIELD(t_EventSlopeFilter, detector),
          DECLARE_GET_FIELD(t_EventSlopeFilter, filter),
          DECLARE_GET_FIELD(t_EventSlopeFilter, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_EventSlopeFilter__methods_[] = {
          DECLARE_METHOD(t_EventSlopeFilter, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_EventSlopeFilter, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_EventSlopeFilter, of_, METH_VARARGS),
          DECLARE_METHOD(t_EventSlopeFilter, g, METH_VARARGS),
          DECLARE_METHOD(t_EventSlopeFilter, getDetector, METH_NOARGS),
          DECLARE_METHOD(t_EventSlopeFilter, getFilter, METH_NOARGS),
          DECLARE_METHOD(t_EventSlopeFilter, init, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(EventSlopeFilter)[] = {
          { Py_tp_methods, t_EventSlopeFilter__methods_ },
          { Py_tp_init, (void *) t_EventSlopeFilter_init_ },
          { Py_tp_getset, t_EventSlopeFilter__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(EventSlopeFilter)[] = {
          &PY_TYPE_DEF(::org::orekit::propagation::events::AbstractDetector),
          NULL
        };

        DEFINE_TYPE(EventSlopeFilter, t_EventSlopeFilter, EventSlopeFilter);
        PyObject *t_EventSlopeFilter::wrap_Object(const EventSlopeFilter& object, PyTypeObject *p0)
        {
          PyObject *obj = t_EventSlopeFilter::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_EventSlopeFilter *self = (t_EventSlopeFilter *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_EventSlopeFilter::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_EventSlopeFilter::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_EventSlopeFilter *self = (t_EventSlopeFilter *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_EventSlopeFilter::install(PyObject *module)
        {
          installType(&PY_TYPE(EventSlopeFilter), &PY_TYPE_DEF(EventSlopeFilter), module, "EventSlopeFilter", 0);
        }

        void t_EventSlopeFilter::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(EventSlopeFilter), "class_", make_descriptor(EventSlopeFilter::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(EventSlopeFilter), "wrapfn_", make_descriptor(t_EventSlopeFilter::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(EventSlopeFilter), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_EventSlopeFilter_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, EventSlopeFilter::initializeClass, 1)))
            return NULL;
          return t_EventSlopeFilter::wrap_Object(EventSlopeFilter(((t_EventSlopeFilter *) arg)->object.this$));
        }
        static PyObject *t_EventSlopeFilter_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, EventSlopeFilter::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_EventSlopeFilter_of_(t_EventSlopeFilter *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_EventSlopeFilter_init_(t_EventSlopeFilter *self, PyObject *args, PyObject *kwds)
        {
          ::org::orekit::propagation::events::EventDetector a0((jobject) NULL);
          ::org::orekit::propagation::events::FilterType a1((jobject) NULL);
          PyTypeObject **p1;
          EventSlopeFilter object((jobject) NULL);

          if (!parseArgs(args, "kK", ::org::orekit::propagation::events::EventDetector::initializeClass, ::org::orekit::propagation::events::FilterType::initializeClass, &a0, &a1, &p1, ::org::orekit::propagation::events::t_FilterType::parameters_))
          {
            INT_CALL(object = EventSlopeFilter(a0, a1));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_EventSlopeFilter_g(t_EventSlopeFilter *self, PyObject *args)
        {
          ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
          jdouble result;

          if (!parseArgs(args, "k", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.g(a0));
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(EventSlopeFilter), (PyObject *) self, "g", args, 2);
        }

        static PyObject *t_EventSlopeFilter_getDetector(t_EventSlopeFilter *self)
        {
          ::org::orekit::propagation::events::EventDetector result((jobject) NULL);
          OBJ_CALL(result = self->object.getDetector());
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::orekit::propagation::events::t_EventDetector::wrap_Object(result);
        }

        static PyObject *t_EventSlopeFilter_getFilter(t_EventSlopeFilter *self)
        {
          ::org::orekit::propagation::events::FilterType result((jobject) NULL);
          OBJ_CALL(result = self->object.getFilter());
          return ::org::orekit::propagation::events::t_FilterType::wrap_Object(result);
        }

        static PyObject *t_EventSlopeFilter_init(t_EventSlopeFilter *self, PyObject *args)
        {
          ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
          ::org::orekit::time::AbsoluteDate a1((jobject) NULL);

          if (!parseArgs(args, "kk", ::org::orekit::propagation::SpacecraftState::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1))
          {
            OBJ_CALL(self->object.init(a0, a1));
            Py_RETURN_NONE;
          }

          return callSuper(PY_TYPE(EventSlopeFilter), (PyObject *) self, "init", args, 2);
        }
        static PyObject *t_EventSlopeFilter_get__parameters_(t_EventSlopeFilter *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_EventSlopeFilter_get__detector(t_EventSlopeFilter *self, void *data)
        {
          ::org::orekit::propagation::events::EventDetector value((jobject) NULL);
          OBJ_CALL(value = self->object.getDetector());
          return ::org::orekit::propagation::events::t_EventDetector::wrap_Object(value);
        }

        static PyObject *t_EventSlopeFilter_get__filter(t_EventSlopeFilter *self, void *data)
        {
          ::org::orekit::propagation::events::FilterType value((jobject) NULL);
          OBJ_CALL(value = self->object.getFilter());
          return ::org::orekit::propagation::events::t_FilterType::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/gnss/metric/parser/AbstractEncodedMessage.h"
#include "java/lang/Class.h"
#include "org/orekit/gnss/metric/parser/EncodedMessage.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace metric {
        namespace parser {

          ::java::lang::Class *AbstractEncodedMessage::class$ = NULL;
          jmethodID *AbstractEncodedMessage::mids$ = NULL;
          bool AbstractEncodedMessage::live$ = false;

          jclass AbstractEncodedMessage::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/gnss/metric/parser/AbstractEncodedMessage");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_ff7cb6c242604316] = env->getMethodID(cls, "<init>", "()V");
              mids$[mid_extractBits_3453f750066710ab] = env->getMethodID(cls, "extractBits", "(I)J");
              mids$[mid_start_ff7cb6c242604316] = env->getMethodID(cls, "start", "()V");
              mids$[mid_fetchByte_d6ab429752e7c267] = env->getMethodID(cls, "fetchByte", "()I");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          AbstractEncodedMessage::AbstractEncodedMessage() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_ff7cb6c242604316)) {}

          jlong AbstractEncodedMessage::extractBits(jint a0) const
          {
            return env->callLongMethod(this$, mids$[mid_extractBits_3453f750066710ab], a0);
          }

          void AbstractEncodedMessage::start() const
          {
            env->callVoidMethod(this$, mids$[mid_start_ff7cb6c242604316]);
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
          static PyObject *t_AbstractEncodedMessage_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_AbstractEncodedMessage_instance_(PyTypeObject *type, PyObject *arg);
          static int t_AbstractEncodedMessage_init_(t_AbstractEncodedMessage *self, PyObject *args, PyObject *kwds);
          static PyObject *t_AbstractEncodedMessage_extractBits(t_AbstractEncodedMessage *self, PyObject *arg);
          static PyObject *t_AbstractEncodedMessage_start(t_AbstractEncodedMessage *self);

          static PyMethodDef t_AbstractEncodedMessage__methods_[] = {
            DECLARE_METHOD(t_AbstractEncodedMessage, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_AbstractEncodedMessage, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_AbstractEncodedMessage, extractBits, METH_O),
            DECLARE_METHOD(t_AbstractEncodedMessage, start, METH_NOARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(AbstractEncodedMessage)[] = {
            { Py_tp_methods, t_AbstractEncodedMessage__methods_ },
            { Py_tp_init, (void *) t_AbstractEncodedMessage_init_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(AbstractEncodedMessage)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(AbstractEncodedMessage, t_AbstractEncodedMessage, AbstractEncodedMessage);

          void t_AbstractEncodedMessage::install(PyObject *module)
          {
            installType(&PY_TYPE(AbstractEncodedMessage), &PY_TYPE_DEF(AbstractEncodedMessage), module, "AbstractEncodedMessage", 0);
          }

          void t_AbstractEncodedMessage::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractEncodedMessage), "class_", make_descriptor(AbstractEncodedMessage::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractEncodedMessage), "wrapfn_", make_descriptor(t_AbstractEncodedMessage::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractEncodedMessage), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_AbstractEncodedMessage_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, AbstractEncodedMessage::initializeClass, 1)))
              return NULL;
            return t_AbstractEncodedMessage::wrap_Object(AbstractEncodedMessage(((t_AbstractEncodedMessage *) arg)->object.this$));
          }
          static PyObject *t_AbstractEncodedMessage_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, AbstractEncodedMessage::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_AbstractEncodedMessage_init_(t_AbstractEncodedMessage *self, PyObject *args, PyObject *kwds)
          {
            AbstractEncodedMessage object((jobject) NULL);

            INT_CALL(object = AbstractEncodedMessage());
            self->object = object;

            return 0;
          }

          static PyObject *t_AbstractEncodedMessage_extractBits(t_AbstractEncodedMessage *self, PyObject *arg)
          {
            jint a0;
            jlong result;

            if (!parseArg(arg, "I", &a0))
            {
              OBJ_CALL(result = self->object.extractBits(a0));
              return PyLong_FromLongLong((PY_LONG_LONG) result);
            }

            PyErr_SetArgsError((PyObject *) self, "extractBits", arg);
            return NULL;
          }

          static PyObject *t_AbstractEncodedMessage_start(t_AbstractEncodedMessage *self)
          {
            OBJ_CALL(self->object.start());
            Py_RETURN_NONE;
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/ndm/adm/AdmHeader.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace adm {

            ::java::lang::Class *AdmHeader::class$ = NULL;
            jmethodID *AdmHeader::mids$ = NULL;
            bool AdmHeader::live$ = false;

            jclass AdmHeader::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/adm/AdmHeader");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_ff7cb6c242604316] = env->getMethodID(cls, "<init>", "()V");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            AdmHeader::AdmHeader() : ::org::orekit::files::ccsds::section::Header(env->newObject(initializeClass, &mids$, mid_init$_ff7cb6c242604316)) {}
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
            static PyObject *t_AdmHeader_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_AdmHeader_instance_(PyTypeObject *type, PyObject *arg);
            static int t_AdmHeader_init_(t_AdmHeader *self, PyObject *args, PyObject *kwds);

            static PyMethodDef t_AdmHeader__methods_[] = {
              DECLARE_METHOD(t_AdmHeader, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_AdmHeader, instance_, METH_O | METH_CLASS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(AdmHeader)[] = {
              { Py_tp_methods, t_AdmHeader__methods_ },
              { Py_tp_init, (void *) t_AdmHeader_init_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(AdmHeader)[] = {
              &PY_TYPE_DEF(::org::orekit::files::ccsds::section::Header),
              NULL
            };

            DEFINE_TYPE(AdmHeader, t_AdmHeader, AdmHeader);

            void t_AdmHeader::install(PyObject *module)
            {
              installType(&PY_TYPE(AdmHeader), &PY_TYPE_DEF(AdmHeader), module, "AdmHeader", 0);
            }

            void t_AdmHeader::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(AdmHeader), "class_", make_descriptor(AdmHeader::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(AdmHeader), "wrapfn_", make_descriptor(t_AdmHeader::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(AdmHeader), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_AdmHeader_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, AdmHeader::initializeClass, 1)))
                return NULL;
              return t_AdmHeader::wrap_Object(AdmHeader(((t_AdmHeader *) arg)->object.this$));
            }
            static PyObject *t_AdmHeader_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, AdmHeader::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static int t_AdmHeader_init_(t_AdmHeader *self, PyObject *args, PyObject *kwds)
            {
              AdmHeader object((jobject) NULL);

              INT_CALL(object = AdmHeader());
              self->object = object;

              return 0;
            }
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/conversion/AdamsMoultonIntegratorBuilder.h"
#include "org/orekit/propagation/conversion/ODEIntegratorBuilder.h"
#include "java/lang/Class.h"
#include "org/orekit/orbits/Orbit.h"
#include "org/hipparchus/ode/AbstractIntegrator.h"
#include "org/orekit/orbits/OrbitType.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace conversion {

        ::java::lang::Class *AdamsMoultonIntegratorBuilder::class$ = NULL;
        jmethodID *AdamsMoultonIntegratorBuilder::mids$ = NULL;
        bool AdamsMoultonIntegratorBuilder::live$ = false;

        jclass AdamsMoultonIntegratorBuilder::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/conversion/AdamsMoultonIntegratorBuilder");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_2baad0ec229f7c27] = env->getMethodID(cls, "<init>", "(IDDD)V");
            mids$[mid_buildIntegrator_31c1ebb8b9cbaedc] = env->getMethodID(cls, "buildIntegrator", "(Lorg/orekit/orbits/Orbit;Lorg/orekit/orbits/OrbitType;)Lorg/hipparchus/ode/AbstractIntegrator;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        AdamsMoultonIntegratorBuilder::AdamsMoultonIntegratorBuilder(jint a0, jdouble a1, jdouble a2, jdouble a3) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_2baad0ec229f7c27, a0, a1, a2, a3)) {}

        ::org::hipparchus::ode::AbstractIntegrator AdamsMoultonIntegratorBuilder::buildIntegrator(const ::org::orekit::orbits::Orbit & a0, const ::org::orekit::orbits::OrbitType & a1) const
        {
          return ::org::hipparchus::ode::AbstractIntegrator(env->callObjectMethod(this$, mids$[mid_buildIntegrator_31c1ebb8b9cbaedc], a0.this$, a1.this$));
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
        static PyObject *t_AdamsMoultonIntegratorBuilder_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_AdamsMoultonIntegratorBuilder_instance_(PyTypeObject *type, PyObject *arg);
        static int t_AdamsMoultonIntegratorBuilder_init_(t_AdamsMoultonIntegratorBuilder *self, PyObject *args, PyObject *kwds);
        static PyObject *t_AdamsMoultonIntegratorBuilder_buildIntegrator(t_AdamsMoultonIntegratorBuilder *self, PyObject *args);

        static PyMethodDef t_AdamsMoultonIntegratorBuilder__methods_[] = {
          DECLARE_METHOD(t_AdamsMoultonIntegratorBuilder, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AdamsMoultonIntegratorBuilder, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AdamsMoultonIntegratorBuilder, buildIntegrator, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(AdamsMoultonIntegratorBuilder)[] = {
          { Py_tp_methods, t_AdamsMoultonIntegratorBuilder__methods_ },
          { Py_tp_init, (void *) t_AdamsMoultonIntegratorBuilder_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(AdamsMoultonIntegratorBuilder)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(AdamsMoultonIntegratorBuilder, t_AdamsMoultonIntegratorBuilder, AdamsMoultonIntegratorBuilder);

        void t_AdamsMoultonIntegratorBuilder::install(PyObject *module)
        {
          installType(&PY_TYPE(AdamsMoultonIntegratorBuilder), &PY_TYPE_DEF(AdamsMoultonIntegratorBuilder), module, "AdamsMoultonIntegratorBuilder", 0);
        }

        void t_AdamsMoultonIntegratorBuilder::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(AdamsMoultonIntegratorBuilder), "class_", make_descriptor(AdamsMoultonIntegratorBuilder::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AdamsMoultonIntegratorBuilder), "wrapfn_", make_descriptor(t_AdamsMoultonIntegratorBuilder::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AdamsMoultonIntegratorBuilder), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_AdamsMoultonIntegratorBuilder_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, AdamsMoultonIntegratorBuilder::initializeClass, 1)))
            return NULL;
          return t_AdamsMoultonIntegratorBuilder::wrap_Object(AdamsMoultonIntegratorBuilder(((t_AdamsMoultonIntegratorBuilder *) arg)->object.this$));
        }
        static PyObject *t_AdamsMoultonIntegratorBuilder_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, AdamsMoultonIntegratorBuilder::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_AdamsMoultonIntegratorBuilder_init_(t_AdamsMoultonIntegratorBuilder *self, PyObject *args, PyObject *kwds)
        {
          jint a0;
          jdouble a1;
          jdouble a2;
          jdouble a3;
          AdamsMoultonIntegratorBuilder object((jobject) NULL);

          if (!parseArgs(args, "IDDD", &a0, &a1, &a2, &a3))
          {
            INT_CALL(object = AdamsMoultonIntegratorBuilder(a0, a1, a2, a3));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_AdamsMoultonIntegratorBuilder_buildIntegrator(t_AdamsMoultonIntegratorBuilder *self, PyObject *args)
        {
          ::org::orekit::orbits::Orbit a0((jobject) NULL);
          ::org::orekit::orbits::OrbitType a1((jobject) NULL);
          PyTypeObject **p1;
          ::org::hipparchus::ode::AbstractIntegrator result((jobject) NULL);

          if (!parseArgs(args, "kK", ::org::orekit::orbits::Orbit::initializeClass, ::org::orekit::orbits::OrbitType::initializeClass, &a0, &a1, &p1, ::org::orekit::orbits::t_OrbitType::parameters_))
          {
            OBJ_CALL(result = self->object.buildIntegrator(a0, a1));
            return ::org::hipparchus::ode::t_AbstractIntegrator::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "buildIntegrator", args);
          return NULL;
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/bodies/BodyShape.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldVector3D.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/hipparchus/geometry/euclidean/threed/Line.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldLine.h"
#include "org/orekit/bodies/FieldGeodeticPoint.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/orekit/utils/TimeStampedPVCoordinates.h"
#include "org/orekit/frames/Frame.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "java/lang/Class.h"
#include "org/orekit/bodies/GeodeticPoint.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace bodies {

      ::java::lang::Class *BodyShape::class$ = NULL;
      jmethodID *BodyShape::mids$ = NULL;
      bool BodyShape::live$ = false;

      jclass BodyShape::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/bodies/BodyShape");

          mids$ = new jmethodID[max_mid];
          mids$[mid_getBodyFrame_cb151471db4570f0] = env->getMethodID(cls, "getBodyFrame", "()Lorg/orekit/frames/Frame;");
          mids$[mid_getIntersectionPoint_ade5649cae5a4672] = env->getMethodID(cls, "getIntersectionPoint", "(Lorg/hipparchus/geometry/euclidean/threed/FieldLine;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;Lorg/orekit/frames/Frame;Lorg/orekit/time/FieldAbsoluteDate;)Lorg/orekit/bodies/FieldGeodeticPoint;");
          mids$[mid_getIntersectionPoint_9f0bcc9c00772903] = env->getMethodID(cls, "getIntersectionPoint", "(Lorg/hipparchus/geometry/euclidean/threed/Line;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/orekit/frames/Frame;Lorg/orekit/time/AbsoluteDate;)Lorg/orekit/bodies/GeodeticPoint;");
          mids$[mid_projectToGround_28dd2a6cc35491d2] = env->getMethodID(cls, "projectToGround", "(Lorg/orekit/utils/TimeStampedPVCoordinates;Lorg/orekit/frames/Frame;)Lorg/orekit/utils/TimeStampedPVCoordinates;");
          mids$[mid_projectToGround_26b1db430bbeb49e] = env->getMethodID(cls, "projectToGround", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/orekit/time/AbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
          mids$[mid_transform_f974aaaf2e73b405] = env->getMethodID(cls, "transform", "(Lorg/orekit/bodies/FieldGeodeticPoint;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
          mids$[mid_transform_0bfc32b1890053a9] = env->getMethodID(cls, "transform", "(Lorg/orekit/bodies/GeodeticPoint;)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
          mids$[mid_transform_82a0f6c52928ba20] = env->getMethodID(cls, "transform", "(Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;Lorg/orekit/frames/Frame;Lorg/orekit/time/FieldAbsoluteDate;)Lorg/orekit/bodies/FieldGeodeticPoint;");
          mids$[mid_transform_52f3336802c12846] = env->getMethodID(cls, "transform", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/orekit/frames/Frame;Lorg/orekit/time/AbsoluteDate;)Lorg/orekit/bodies/GeodeticPoint;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ::org::orekit::frames::Frame BodyShape::getBodyFrame() const
      {
        return ::org::orekit::frames::Frame(env->callObjectMethod(this$, mids$[mid_getBodyFrame_cb151471db4570f0]));
      }

      ::org::orekit::bodies::FieldGeodeticPoint BodyShape::getIntersectionPoint(const ::org::hipparchus::geometry::euclidean::threed::FieldLine & a0, const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D & a1, const ::org::orekit::frames::Frame & a2, const ::org::orekit::time::FieldAbsoluteDate & a3) const
      {
        return ::org::orekit::bodies::FieldGeodeticPoint(env->callObjectMethod(this$, mids$[mid_getIntersectionPoint_ade5649cae5a4672], a0.this$, a1.this$, a2.this$, a3.this$));
      }

      ::org::orekit::bodies::GeodeticPoint BodyShape::getIntersectionPoint(const ::org::hipparchus::geometry::euclidean::threed::Line & a0, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a1, const ::org::orekit::frames::Frame & a2, const ::org::orekit::time::AbsoluteDate & a3) const
      {
        return ::org::orekit::bodies::GeodeticPoint(env->callObjectMethod(this$, mids$[mid_getIntersectionPoint_9f0bcc9c00772903], a0.this$, a1.this$, a2.this$, a3.this$));
      }

      ::org::orekit::utils::TimeStampedPVCoordinates BodyShape::projectToGround(const ::org::orekit::utils::TimeStampedPVCoordinates & a0, const ::org::orekit::frames::Frame & a1) const
      {
        return ::org::orekit::utils::TimeStampedPVCoordinates(env->callObjectMethod(this$, mids$[mid_projectToGround_28dd2a6cc35491d2], a0.this$, a1.this$));
      }

      ::org::hipparchus::geometry::euclidean::threed::Vector3D BodyShape::projectToGround(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0, const ::org::orekit::time::AbsoluteDate & a1, const ::org::orekit::frames::Frame & a2) const
      {
        return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_projectToGround_26b1db430bbeb49e], a0.this$, a1.this$, a2.this$));
      }

      ::org::hipparchus::geometry::euclidean::threed::FieldVector3D BodyShape::transform(const ::org::orekit::bodies::FieldGeodeticPoint & a0) const
      {
        return ::org::hipparchus::geometry::euclidean::threed::FieldVector3D(env->callObjectMethod(this$, mids$[mid_transform_f974aaaf2e73b405], a0.this$));
      }

      ::org::hipparchus::geometry::euclidean::threed::Vector3D BodyShape::transform(const ::org::orekit::bodies::GeodeticPoint & a0) const
      {
        return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_transform_0bfc32b1890053a9], a0.this$));
      }

      ::org::orekit::bodies::FieldGeodeticPoint BodyShape::transform(const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D & a0, const ::org::orekit::frames::Frame & a1, const ::org::orekit::time::FieldAbsoluteDate & a2) const
      {
        return ::org::orekit::bodies::FieldGeodeticPoint(env->callObjectMethod(this$, mids$[mid_transform_82a0f6c52928ba20], a0.this$, a1.this$, a2.this$));
      }

      ::org::orekit::bodies::GeodeticPoint BodyShape::transform(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0, const ::org::orekit::frames::Frame & a1, const ::org::orekit::time::AbsoluteDate & a2) const
      {
        return ::org::orekit::bodies::GeodeticPoint(env->callObjectMethod(this$, mids$[mid_transform_52f3336802c12846], a0.this$, a1.this$, a2.this$));
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
      static PyObject *t_BodyShape_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_BodyShape_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_BodyShape_getBodyFrame(t_BodyShape *self);
      static PyObject *t_BodyShape_getIntersectionPoint(t_BodyShape *self, PyObject *args);
      static PyObject *t_BodyShape_projectToGround(t_BodyShape *self, PyObject *args);
      static PyObject *t_BodyShape_transform(t_BodyShape *self, PyObject *args);
      static PyObject *t_BodyShape_get__bodyFrame(t_BodyShape *self, void *data);
      static PyGetSetDef t_BodyShape__fields_[] = {
        DECLARE_GET_FIELD(t_BodyShape, bodyFrame),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_BodyShape__methods_[] = {
        DECLARE_METHOD(t_BodyShape, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_BodyShape, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_BodyShape, getBodyFrame, METH_NOARGS),
        DECLARE_METHOD(t_BodyShape, getIntersectionPoint, METH_VARARGS),
        DECLARE_METHOD(t_BodyShape, projectToGround, METH_VARARGS),
        DECLARE_METHOD(t_BodyShape, transform, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(BodyShape)[] = {
        { Py_tp_methods, t_BodyShape__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_BodyShape__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(BodyShape)[] = {
        &PY_TYPE_DEF(::java::io::Serializable),
        NULL
      };

      DEFINE_TYPE(BodyShape, t_BodyShape, BodyShape);

      void t_BodyShape::install(PyObject *module)
      {
        installType(&PY_TYPE(BodyShape), &PY_TYPE_DEF(BodyShape), module, "BodyShape", 0);
      }

      void t_BodyShape::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(BodyShape), "class_", make_descriptor(BodyShape::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(BodyShape), "wrapfn_", make_descriptor(t_BodyShape::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(BodyShape), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_BodyShape_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, BodyShape::initializeClass, 1)))
          return NULL;
        return t_BodyShape::wrap_Object(BodyShape(((t_BodyShape *) arg)->object.this$));
      }
      static PyObject *t_BodyShape_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, BodyShape::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_BodyShape_getBodyFrame(t_BodyShape *self)
      {
        ::org::orekit::frames::Frame result((jobject) NULL);
        OBJ_CALL(result = self->object.getBodyFrame());
        return ::org::orekit::frames::t_Frame::wrap_Object(result);
      }

      static PyObject *t_BodyShape_getIntersectionPoint(t_BodyShape *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 4:
          {
            ::org::hipparchus::geometry::euclidean::threed::Line a0((jobject) NULL);
            ::org::hipparchus::geometry::euclidean::threed::Vector3D a1((jobject) NULL);
            ::org::orekit::frames::Frame a2((jobject) NULL);
            ::org::orekit::time::AbsoluteDate a3((jobject) NULL);
            ::org::orekit::bodies::GeodeticPoint result((jobject) NULL);

            if (!parseArgs(args, "kkkk", ::org::hipparchus::geometry::euclidean::threed::Line::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::orekit::frames::Frame::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1, &a2, &a3))
            {
              OBJ_CALL(result = self->object.getIntersectionPoint(a0, a1, a2, a3));
              return ::org::orekit::bodies::t_GeodeticPoint::wrap_Object(result);
            }
          }
          {
            ::org::hipparchus::geometry::euclidean::threed::FieldLine a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::geometry::euclidean::threed::FieldVector3D a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::orekit::frames::Frame a2((jobject) NULL);
            ::org::orekit::time::FieldAbsoluteDate a3((jobject) NULL);
            PyTypeObject **p3;
            ::org::orekit::bodies::FieldGeodeticPoint result((jobject) NULL);

            if (!parseArgs(args, "KKkK", ::org::hipparchus::geometry::euclidean::threed::FieldLine::initializeClass, ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::initializeClass, ::org::orekit::frames::Frame::initializeClass, ::org::orekit::time::FieldAbsoluteDate::initializeClass, &a0, &p0, ::org::hipparchus::geometry::euclidean::threed::t_FieldLine::parameters_, &a1, &p1, ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::parameters_, &a2, &a3, &p3, ::org::orekit::time::t_FieldAbsoluteDate::parameters_))
            {
              OBJ_CALL(result = self->object.getIntersectionPoint(a0, a1, a2, a3));
              return ::org::orekit::bodies::t_FieldGeodeticPoint::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "getIntersectionPoint", args);
        return NULL;
      }

      static PyObject *t_BodyShape_projectToGround(t_BodyShape *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 2:
          {
            ::org::orekit::utils::TimeStampedPVCoordinates a0((jobject) NULL);
            ::org::orekit::frames::Frame a1((jobject) NULL);
            ::org::orekit::utils::TimeStampedPVCoordinates result((jobject) NULL);

            if (!parseArgs(args, "kk", ::org::orekit::utils::TimeStampedPVCoordinates::initializeClass, ::org::orekit::frames::Frame::initializeClass, &a0, &a1))
            {
              OBJ_CALL(result = self->object.projectToGround(a0, a1));
              return ::org::orekit::utils::t_TimeStampedPVCoordinates::wrap_Object(result);
            }
          }
          break;
         case 3:
          {
            ::org::hipparchus::geometry::euclidean::threed::Vector3D a0((jobject) NULL);
            ::org::orekit::time::AbsoluteDate a1((jobject) NULL);
            ::org::orekit::frames::Frame a2((jobject) NULL);
            ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);

            if (!parseArgs(args, "kkk", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::frames::Frame::initializeClass, &a0, &a1, &a2))
            {
              OBJ_CALL(result = self->object.projectToGround(a0, a1, a2));
              return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "projectToGround", args);
        return NULL;
      }

      static PyObject *t_BodyShape_transform(t_BodyShape *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::orekit::bodies::FieldGeodeticPoint a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::geometry::euclidean::threed::FieldVector3D result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::orekit::bodies::FieldGeodeticPoint::initializeClass, &a0, &p0, ::org::orekit::bodies::t_FieldGeodeticPoint::parameters_))
            {
              OBJ_CALL(result = self->object.transform(a0));
              return ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(result);
            }
          }
          {
            ::org::orekit::bodies::GeodeticPoint a0((jobject) NULL);
            ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);

            if (!parseArgs(args, "k", ::org::orekit::bodies::GeodeticPoint::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.transform(a0));
              return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
            }
          }
          break;
         case 3:
          {
            ::org::hipparchus::geometry::euclidean::threed::Vector3D a0((jobject) NULL);
            ::org::orekit::frames::Frame a1((jobject) NULL);
            ::org::orekit::time::AbsoluteDate a2((jobject) NULL);
            ::org::orekit::bodies::GeodeticPoint result((jobject) NULL);

            if (!parseArgs(args, "kkk", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::orekit::frames::Frame::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1, &a2))
            {
              OBJ_CALL(result = self->object.transform(a0, a1, a2));
              return ::org::orekit::bodies::t_GeodeticPoint::wrap_Object(result);
            }
          }
          {
            ::org::hipparchus::geometry::euclidean::threed::FieldVector3D a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::frames::Frame a1((jobject) NULL);
            ::org::orekit::time::FieldAbsoluteDate a2((jobject) NULL);
            PyTypeObject **p2;
            ::org::orekit::bodies::FieldGeodeticPoint result((jobject) NULL);

            if (!parseArgs(args, "KkK", ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::initializeClass, ::org::orekit::frames::Frame::initializeClass, ::org::orekit::time::FieldAbsoluteDate::initializeClass, &a0, &p0, ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::parameters_, &a1, &a2, &p2, ::org::orekit::time::t_FieldAbsoluteDate::parameters_))
            {
              OBJ_CALL(result = self->object.transform(a0, a1, a2));
              return ::org::orekit::bodies::t_FieldGeodeticPoint::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "transform", args);
        return NULL;
      }

      static PyObject *t_BodyShape_get__bodyFrame(t_BodyShape *self, void *data)
      {
        ::org::orekit::frames::Frame value((jobject) NULL);
        OBJ_CALL(value = self->object.getBodyFrame());
        return ::org::orekit::frames::t_Frame::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/events/FieldFunctionalDetector.h"
#include "org/orekit/propagation/events/FieldFunctionalDetector.h"
#include "org/hipparchus/Field.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace events {

        ::java::lang::Class *FieldFunctionalDetector::class$ = NULL;
        jmethodID *FieldFunctionalDetector::mids$ = NULL;
        bool FieldFunctionalDetector::live$ = false;

        jclass FieldFunctionalDetector::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/events/FieldFunctionalDetector");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_a44abdd035f01345] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/Field;)V");
            mids$[mid_g_ac6fccc69d1b2d9e] = env->getMethodID(cls, "g", "(Lorg/orekit/propagation/FieldSpacecraftState;)Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_create_6f49639bb98a66a3] = env->getMethodID(cls, "create", "(Lorg/orekit/propagation/events/FieldAdaptableInterval;Lorg/hipparchus/CalculusFieldElement;ILorg/orekit/propagation/events/handlers/FieldEventHandler;)Lorg/orekit/propagation/events/FieldFunctionalDetector;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        FieldFunctionalDetector::FieldFunctionalDetector(const ::org::hipparchus::Field & a0) : ::org::orekit::propagation::events::FieldAbstractDetector(env->newObject(initializeClass, &mids$, mid_init$_a44abdd035f01345, a0.this$)) {}

        ::org::hipparchus::CalculusFieldElement FieldFunctionalDetector::g(const ::org::orekit::propagation::FieldSpacecraftState & a0) const
        {
          return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_g_ac6fccc69d1b2d9e], a0.this$));
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
        static PyObject *t_FieldFunctionalDetector_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldFunctionalDetector_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldFunctionalDetector_of_(t_FieldFunctionalDetector *self, PyObject *args);
        static int t_FieldFunctionalDetector_init_(t_FieldFunctionalDetector *self, PyObject *args, PyObject *kwds);
        static PyObject *t_FieldFunctionalDetector_g(t_FieldFunctionalDetector *self, PyObject *args);
        static PyObject *t_FieldFunctionalDetector_get__parameters_(t_FieldFunctionalDetector *self, void *data);
        static PyGetSetDef t_FieldFunctionalDetector__fields_[] = {
          DECLARE_GET_FIELD(t_FieldFunctionalDetector, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_FieldFunctionalDetector__methods_[] = {
          DECLARE_METHOD(t_FieldFunctionalDetector, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldFunctionalDetector, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldFunctionalDetector, of_, METH_VARARGS),
          DECLARE_METHOD(t_FieldFunctionalDetector, g, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(FieldFunctionalDetector)[] = {
          { Py_tp_methods, t_FieldFunctionalDetector__methods_ },
          { Py_tp_init, (void *) t_FieldFunctionalDetector_init_ },
          { Py_tp_getset, t_FieldFunctionalDetector__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(FieldFunctionalDetector)[] = {
          &PY_TYPE_DEF(::org::orekit::propagation::events::FieldAbstractDetector),
          NULL
        };

        DEFINE_TYPE(FieldFunctionalDetector, t_FieldFunctionalDetector, FieldFunctionalDetector);
        PyObject *t_FieldFunctionalDetector::wrap_Object(const FieldFunctionalDetector& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FieldFunctionalDetector::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldFunctionalDetector *self = (t_FieldFunctionalDetector *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_FieldFunctionalDetector::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FieldFunctionalDetector::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldFunctionalDetector *self = (t_FieldFunctionalDetector *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_FieldFunctionalDetector::install(PyObject *module)
        {
          installType(&PY_TYPE(FieldFunctionalDetector), &PY_TYPE_DEF(FieldFunctionalDetector), module, "FieldFunctionalDetector", 0);
        }

        void t_FieldFunctionalDetector::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldFunctionalDetector), "class_", make_descriptor(FieldFunctionalDetector::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldFunctionalDetector), "wrapfn_", make_descriptor(t_FieldFunctionalDetector::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldFunctionalDetector), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_FieldFunctionalDetector_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, FieldFunctionalDetector::initializeClass, 1)))
            return NULL;
          return t_FieldFunctionalDetector::wrap_Object(FieldFunctionalDetector(((t_FieldFunctionalDetector *) arg)->object.this$));
        }
        static PyObject *t_FieldFunctionalDetector_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, FieldFunctionalDetector::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_FieldFunctionalDetector_of_(t_FieldFunctionalDetector *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_FieldFunctionalDetector_init_(t_FieldFunctionalDetector *self, PyObject *args, PyObject *kwds)
        {
          ::org::hipparchus::Field a0((jobject) NULL);
          PyTypeObject **p0;
          FieldFunctionalDetector object((jobject) NULL);

          if (!parseArgs(args, "K", ::org::hipparchus::Field::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_))
          {
            INT_CALL(object = FieldFunctionalDetector(a0));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_FieldFunctionalDetector_g(t_FieldFunctionalDetector *self, PyObject *args)
        {
          ::org::orekit::propagation::FieldSpacecraftState a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

          if (!parseArgs(args, "K", ::org::orekit::propagation::FieldSpacecraftState::initializeClass, &a0, &p0, ::org::orekit::propagation::t_FieldSpacecraftState::parameters_))
          {
            OBJ_CALL(result = self->object.g(a0));
            return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
          }

          return callSuper(PY_TYPE(FieldFunctionalDetector), (PyObject *) self, "g", args, 2);
        }
        static PyObject *t_FieldFunctionalDetector_get__parameters_(t_FieldFunctionalDetector *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }
      }
    }
  }
}
