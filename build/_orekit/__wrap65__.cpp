#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/models/earth/tessellation/Tile.h"
#include "org/orekit/bodies/GeodeticPoint.h"
#include "java/lang/Class.h"
#include "java/io/Serializable.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace models {
      namespace earth {
        namespace tessellation {

          ::java::lang::Class *Tile::class$ = NULL;
          jmethodID *Tile::mids$ = NULL;
          bool Tile::live$ = false;

          jclass Tile::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/models/earth/tessellation/Tile");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_7df029de759df1fc] = env->getMethodID(cls, "<init>", "(Lorg/orekit/bodies/GeodeticPoint;Lorg/orekit/bodies/GeodeticPoint;Lorg/orekit/bodies/GeodeticPoint;Lorg/orekit/bodies/GeodeticPoint;)V");
              mids$[mid_getCenter_963915d358b1e63a] = env->getMethodID(cls, "getCenter", "()Lorg/orekit/bodies/GeodeticPoint;");
              mids$[mid_getInterpolatedPoint_b84fde9522d0f3b2] = env->getMethodID(cls, "getInterpolatedPoint", "(DD)Lorg/orekit/bodies/GeodeticPoint;");
              mids$[mid_getVertices_3134137071900945] = env->getMethodID(cls, "getVertices", "()[Lorg/orekit/bodies/GeodeticPoint;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          Tile::Tile(const ::org::orekit::bodies::GeodeticPoint & a0, const ::org::orekit::bodies::GeodeticPoint & a1, const ::org::orekit::bodies::GeodeticPoint & a2, const ::org::orekit::bodies::GeodeticPoint & a3) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_7df029de759df1fc, a0.this$, a1.this$, a2.this$, a3.this$)) {}

          ::org::orekit::bodies::GeodeticPoint Tile::getCenter() const
          {
            return ::org::orekit::bodies::GeodeticPoint(env->callObjectMethod(this$, mids$[mid_getCenter_963915d358b1e63a]));
          }

          ::org::orekit::bodies::GeodeticPoint Tile::getInterpolatedPoint(jdouble a0, jdouble a1) const
          {
            return ::org::orekit::bodies::GeodeticPoint(env->callObjectMethod(this$, mids$[mid_getInterpolatedPoint_b84fde9522d0f3b2], a0, a1));
          }

          JArray< ::org::orekit::bodies::GeodeticPoint > Tile::getVertices() const
          {
            return JArray< ::org::orekit::bodies::GeodeticPoint >(env->callObjectMethod(this$, mids$[mid_getVertices_3134137071900945]));
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
        namespace tessellation {
          static PyObject *t_Tile_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_Tile_instance_(PyTypeObject *type, PyObject *arg);
          static int t_Tile_init_(t_Tile *self, PyObject *args, PyObject *kwds);
          static PyObject *t_Tile_getCenter(t_Tile *self);
          static PyObject *t_Tile_getInterpolatedPoint(t_Tile *self, PyObject *args);
          static PyObject *t_Tile_getVertices(t_Tile *self);
          static PyObject *t_Tile_get__center(t_Tile *self, void *data);
          static PyObject *t_Tile_get__vertices(t_Tile *self, void *data);
          static PyGetSetDef t_Tile__fields_[] = {
            DECLARE_GET_FIELD(t_Tile, center),
            DECLARE_GET_FIELD(t_Tile, vertices),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_Tile__methods_[] = {
            DECLARE_METHOD(t_Tile, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_Tile, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_Tile, getCenter, METH_NOARGS),
            DECLARE_METHOD(t_Tile, getInterpolatedPoint, METH_VARARGS),
            DECLARE_METHOD(t_Tile, getVertices, METH_NOARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(Tile)[] = {
            { Py_tp_methods, t_Tile__methods_ },
            { Py_tp_init, (void *) t_Tile_init_ },
            { Py_tp_getset, t_Tile__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(Tile)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(Tile, t_Tile, Tile);

          void t_Tile::install(PyObject *module)
          {
            installType(&PY_TYPE(Tile), &PY_TYPE_DEF(Tile), module, "Tile", 0);
          }

          void t_Tile::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(Tile), "class_", make_descriptor(Tile::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Tile), "wrapfn_", make_descriptor(t_Tile::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Tile), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_Tile_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, Tile::initializeClass, 1)))
              return NULL;
            return t_Tile::wrap_Object(Tile(((t_Tile *) arg)->object.this$));
          }
          static PyObject *t_Tile_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, Tile::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_Tile_init_(t_Tile *self, PyObject *args, PyObject *kwds)
          {
            ::org::orekit::bodies::GeodeticPoint a0((jobject) NULL);
            ::org::orekit::bodies::GeodeticPoint a1((jobject) NULL);
            ::org::orekit::bodies::GeodeticPoint a2((jobject) NULL);
            ::org::orekit::bodies::GeodeticPoint a3((jobject) NULL);
            Tile object((jobject) NULL);

            if (!parseArgs(args, "kkkk", ::org::orekit::bodies::GeodeticPoint::initializeClass, ::org::orekit::bodies::GeodeticPoint::initializeClass, ::org::orekit::bodies::GeodeticPoint::initializeClass, ::org::orekit::bodies::GeodeticPoint::initializeClass, &a0, &a1, &a2, &a3))
            {
              INT_CALL(object = Tile(a0, a1, a2, a3));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_Tile_getCenter(t_Tile *self)
          {
            ::org::orekit::bodies::GeodeticPoint result((jobject) NULL);
            OBJ_CALL(result = self->object.getCenter());
            return ::org::orekit::bodies::t_GeodeticPoint::wrap_Object(result);
          }

          static PyObject *t_Tile_getInterpolatedPoint(t_Tile *self, PyObject *args)
          {
            jdouble a0;
            jdouble a1;
            ::org::orekit::bodies::GeodeticPoint result((jobject) NULL);

            if (!parseArgs(args, "DD", &a0, &a1))
            {
              OBJ_CALL(result = self->object.getInterpolatedPoint(a0, a1));
              return ::org::orekit::bodies::t_GeodeticPoint::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "getInterpolatedPoint", args);
            return NULL;
          }

          static PyObject *t_Tile_getVertices(t_Tile *self)
          {
            JArray< ::org::orekit::bodies::GeodeticPoint > result((jobject) NULL);
            OBJ_CALL(result = self->object.getVertices());
            return JArray<jobject>(result.this$).wrap(::org::orekit::bodies::t_GeodeticPoint::wrap_jobject);
          }

          static PyObject *t_Tile_get__center(t_Tile *self, void *data)
          {
            ::org::orekit::bodies::GeodeticPoint value((jobject) NULL);
            OBJ_CALL(value = self->object.getCenter());
            return ::org::orekit::bodies::t_GeodeticPoint::wrap_Object(value);
          }

          static PyObject *t_Tile_get__vertices(t_Tile *self, void *data)
          {
            JArray< ::org::orekit::bodies::GeodeticPoint > value((jobject) NULL);
            OBJ_CALL(value = self->object.getVertices());
            return JArray<jobject>(value.this$).wrap(::org::orekit::bodies::t_GeodeticPoint::wrap_jobject);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/ndm/adm/acm/AttitudeManeuverKey.h"
#include "org/orekit/files/ccsds/ndm/adm/acm/AttitudeManeuver.h"
#include "org/orekit/files/ccsds/utils/lexical/ParseToken.h"
#include "java/lang/Class.h"
#include "org/orekit/files/ccsds/utils/ContextBinding.h"
#include "java/lang/String.h"
#include "org/orekit/files/ccsds/ndm/adm/acm/AttitudeManeuverKey.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace adm {
            namespace acm {

              ::java::lang::Class *AttitudeManeuverKey::class$ = NULL;
              jmethodID *AttitudeManeuverKey::mids$ = NULL;
              bool AttitudeManeuverKey::live$ = false;
              AttitudeManeuverKey *AttitudeManeuverKey::ACTUATOR_USED = NULL;
              AttitudeManeuverKey *AttitudeManeuverKey::COMMENT = NULL;
              AttitudeManeuverKey *AttitudeManeuverKey::MAN_BEGIN_TIME = NULL;
              AttitudeManeuverKey *AttitudeManeuverKey::MAN_DURATION = NULL;
              AttitudeManeuverKey *AttitudeManeuverKey::MAN_END_TIME = NULL;
              AttitudeManeuverKey *AttitudeManeuverKey::MAN_ID = NULL;
              AttitudeManeuverKey *AttitudeManeuverKey::MAN_PREV_ID = NULL;
              AttitudeManeuverKey *AttitudeManeuverKey::MAN_PURPOSE = NULL;
              AttitudeManeuverKey *AttitudeManeuverKey::TARGET_ATTITUDE = NULL;
              AttitudeManeuverKey *AttitudeManeuverKey::TARGET_MOMENTUM = NULL;
              AttitudeManeuverKey *AttitudeManeuverKey::TARGET_MOM_FRAME = NULL;
              AttitudeManeuverKey *AttitudeManeuverKey::TARGET_SPINRATE = NULL;

              jclass AttitudeManeuverKey::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/adm/acm/AttitudeManeuverKey");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_process_85913089ad7b1168] = env->getMethodID(cls, "process", "(Lorg/orekit/files/ccsds/utils/lexical/ParseToken;Lorg/orekit/files/ccsds/utils/ContextBinding;Lorg/orekit/files/ccsds/ndm/adm/acm/AttitudeManeuver;)Z");
                  mids$[mid_valueOf_41811bddf1c5b0f2] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/files/ccsds/ndm/adm/acm/AttitudeManeuverKey;");
                  mids$[mid_values_c566490e76b0478b] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/files/ccsds/ndm/adm/acm/AttitudeManeuverKey;");

                  class$ = new ::java::lang::Class(cls);
                  cls = (jclass) class$->this$;

                  ACTUATOR_USED = new AttitudeManeuverKey(env->getStaticObjectField(cls, "ACTUATOR_USED", "Lorg/orekit/files/ccsds/ndm/adm/acm/AttitudeManeuverKey;"));
                  COMMENT = new AttitudeManeuverKey(env->getStaticObjectField(cls, "COMMENT", "Lorg/orekit/files/ccsds/ndm/adm/acm/AttitudeManeuverKey;"));
                  MAN_BEGIN_TIME = new AttitudeManeuverKey(env->getStaticObjectField(cls, "MAN_BEGIN_TIME", "Lorg/orekit/files/ccsds/ndm/adm/acm/AttitudeManeuverKey;"));
                  MAN_DURATION = new AttitudeManeuverKey(env->getStaticObjectField(cls, "MAN_DURATION", "Lorg/orekit/files/ccsds/ndm/adm/acm/AttitudeManeuverKey;"));
                  MAN_END_TIME = new AttitudeManeuverKey(env->getStaticObjectField(cls, "MAN_END_TIME", "Lorg/orekit/files/ccsds/ndm/adm/acm/AttitudeManeuverKey;"));
                  MAN_ID = new AttitudeManeuverKey(env->getStaticObjectField(cls, "MAN_ID", "Lorg/orekit/files/ccsds/ndm/adm/acm/AttitudeManeuverKey;"));
                  MAN_PREV_ID = new AttitudeManeuverKey(env->getStaticObjectField(cls, "MAN_PREV_ID", "Lorg/orekit/files/ccsds/ndm/adm/acm/AttitudeManeuverKey;"));
                  MAN_PURPOSE = new AttitudeManeuverKey(env->getStaticObjectField(cls, "MAN_PURPOSE", "Lorg/orekit/files/ccsds/ndm/adm/acm/AttitudeManeuverKey;"));
                  TARGET_ATTITUDE = new AttitudeManeuverKey(env->getStaticObjectField(cls, "TARGET_ATTITUDE", "Lorg/orekit/files/ccsds/ndm/adm/acm/AttitudeManeuverKey;"));
                  TARGET_MOMENTUM = new AttitudeManeuverKey(env->getStaticObjectField(cls, "TARGET_MOMENTUM", "Lorg/orekit/files/ccsds/ndm/adm/acm/AttitudeManeuverKey;"));
                  TARGET_MOM_FRAME = new AttitudeManeuverKey(env->getStaticObjectField(cls, "TARGET_MOM_FRAME", "Lorg/orekit/files/ccsds/ndm/adm/acm/AttitudeManeuverKey;"));
                  TARGET_SPINRATE = new AttitudeManeuverKey(env->getStaticObjectField(cls, "TARGET_SPINRATE", "Lorg/orekit/files/ccsds/ndm/adm/acm/AttitudeManeuverKey;"));
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              jboolean AttitudeManeuverKey::process(const ::org::orekit::files::ccsds::utils::lexical::ParseToken & a0, const ::org::orekit::files::ccsds::utils::ContextBinding & a1, const ::org::orekit::files::ccsds::ndm::adm::acm::AttitudeManeuver & a2) const
              {
                return env->callBooleanMethod(this$, mids$[mid_process_85913089ad7b1168], a0.this$, a1.this$, a2.this$);
              }

              AttitudeManeuverKey AttitudeManeuverKey::valueOf(const ::java::lang::String & a0)
              {
                jclass cls = env->getClass(initializeClass);
                return AttitudeManeuverKey(env->callStaticObjectMethod(cls, mids$[mid_valueOf_41811bddf1c5b0f2], a0.this$));
              }

              JArray< AttitudeManeuverKey > AttitudeManeuverKey::values()
              {
                jclass cls = env->getClass(initializeClass);
                return JArray< AttitudeManeuverKey >(env->callStaticObjectMethod(cls, mids$[mid_values_c566490e76b0478b]));
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
              static PyObject *t_AttitudeManeuverKey_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_AttitudeManeuverKey_instance_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_AttitudeManeuverKey_of_(t_AttitudeManeuverKey *self, PyObject *args);
              static PyObject *t_AttitudeManeuverKey_process(t_AttitudeManeuverKey *self, PyObject *args);
              static PyObject *t_AttitudeManeuverKey_valueOf(PyTypeObject *type, PyObject *args);
              static PyObject *t_AttitudeManeuverKey_values(PyTypeObject *type);
              static PyObject *t_AttitudeManeuverKey_get__parameters_(t_AttitudeManeuverKey *self, void *data);
              static PyGetSetDef t_AttitudeManeuverKey__fields_[] = {
                DECLARE_GET_FIELD(t_AttitudeManeuverKey, parameters_),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_AttitudeManeuverKey__methods_[] = {
                DECLARE_METHOD(t_AttitudeManeuverKey, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_AttitudeManeuverKey, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_AttitudeManeuverKey, of_, METH_VARARGS),
                DECLARE_METHOD(t_AttitudeManeuverKey, process, METH_VARARGS),
                DECLARE_METHOD(t_AttitudeManeuverKey, valueOf, METH_VARARGS | METH_CLASS),
                DECLARE_METHOD(t_AttitudeManeuverKey, values, METH_NOARGS | METH_CLASS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(AttitudeManeuverKey)[] = {
                { Py_tp_methods, t_AttitudeManeuverKey__methods_ },
                { Py_tp_init, (void *) abstract_init },
                { Py_tp_getset, t_AttitudeManeuverKey__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(AttitudeManeuverKey)[] = {
                &PY_TYPE_DEF(::java::lang::Enum),
                NULL
              };

              DEFINE_TYPE(AttitudeManeuverKey, t_AttitudeManeuverKey, AttitudeManeuverKey);
              PyObject *t_AttitudeManeuverKey::wrap_Object(const AttitudeManeuverKey& object, PyTypeObject *p0)
              {
                PyObject *obj = t_AttitudeManeuverKey::wrap_Object(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_AttitudeManeuverKey *self = (t_AttitudeManeuverKey *) obj;
                  self->parameters[0] = p0;
                }
                return obj;
              }

              PyObject *t_AttitudeManeuverKey::wrap_jobject(const jobject& object, PyTypeObject *p0)
              {
                PyObject *obj = t_AttitudeManeuverKey::wrap_jobject(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_AttitudeManeuverKey *self = (t_AttitudeManeuverKey *) obj;
                  self->parameters[0] = p0;
                }
                return obj;
              }

              void t_AttitudeManeuverKey::install(PyObject *module)
              {
                installType(&PY_TYPE(AttitudeManeuverKey), &PY_TYPE_DEF(AttitudeManeuverKey), module, "AttitudeManeuverKey", 0);
              }

              void t_AttitudeManeuverKey::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeManeuverKey), "class_", make_descriptor(AttitudeManeuverKey::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeManeuverKey), "wrapfn_", make_descriptor(t_AttitudeManeuverKey::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeManeuverKey), "boxfn_", make_descriptor(boxObject));
                env->getClass(AttitudeManeuverKey::initializeClass);
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeManeuverKey), "ACTUATOR_USED", make_descriptor(t_AttitudeManeuverKey::wrap_Object(*AttitudeManeuverKey::ACTUATOR_USED)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeManeuverKey), "COMMENT", make_descriptor(t_AttitudeManeuverKey::wrap_Object(*AttitudeManeuverKey::COMMENT)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeManeuverKey), "MAN_BEGIN_TIME", make_descriptor(t_AttitudeManeuverKey::wrap_Object(*AttitudeManeuverKey::MAN_BEGIN_TIME)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeManeuverKey), "MAN_DURATION", make_descriptor(t_AttitudeManeuverKey::wrap_Object(*AttitudeManeuverKey::MAN_DURATION)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeManeuverKey), "MAN_END_TIME", make_descriptor(t_AttitudeManeuverKey::wrap_Object(*AttitudeManeuverKey::MAN_END_TIME)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeManeuverKey), "MAN_ID", make_descriptor(t_AttitudeManeuverKey::wrap_Object(*AttitudeManeuverKey::MAN_ID)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeManeuverKey), "MAN_PREV_ID", make_descriptor(t_AttitudeManeuverKey::wrap_Object(*AttitudeManeuverKey::MAN_PREV_ID)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeManeuverKey), "MAN_PURPOSE", make_descriptor(t_AttitudeManeuverKey::wrap_Object(*AttitudeManeuverKey::MAN_PURPOSE)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeManeuverKey), "TARGET_ATTITUDE", make_descriptor(t_AttitudeManeuverKey::wrap_Object(*AttitudeManeuverKey::TARGET_ATTITUDE)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeManeuverKey), "TARGET_MOMENTUM", make_descriptor(t_AttitudeManeuverKey::wrap_Object(*AttitudeManeuverKey::TARGET_MOMENTUM)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeManeuverKey), "TARGET_MOM_FRAME", make_descriptor(t_AttitudeManeuverKey::wrap_Object(*AttitudeManeuverKey::TARGET_MOM_FRAME)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeManeuverKey), "TARGET_SPINRATE", make_descriptor(t_AttitudeManeuverKey::wrap_Object(*AttitudeManeuverKey::TARGET_SPINRATE)));
              }

              static PyObject *t_AttitudeManeuverKey_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, AttitudeManeuverKey::initializeClass, 1)))
                  return NULL;
                return t_AttitudeManeuverKey::wrap_Object(AttitudeManeuverKey(((t_AttitudeManeuverKey *) arg)->object.this$));
              }
              static PyObject *t_AttitudeManeuverKey_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, AttitudeManeuverKey::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static PyObject *t_AttitudeManeuverKey_of_(t_AttitudeManeuverKey *self, PyObject *args)
              {
                if (!parseArg(args, "T", 1, &(self->parameters)))
                  Py_RETURN_SELF;
                return PyErr_SetArgsError((PyObject *) self, "of_", args);
              }

              static PyObject *t_AttitudeManeuverKey_process(t_AttitudeManeuverKey *self, PyObject *args)
              {
                ::org::orekit::files::ccsds::utils::lexical::ParseToken a0((jobject) NULL);
                ::org::orekit::files::ccsds::utils::ContextBinding a1((jobject) NULL);
                ::org::orekit::files::ccsds::ndm::adm::acm::AttitudeManeuver a2((jobject) NULL);
                jboolean result;

                if (!parseArgs(args, "kkk", ::org::orekit::files::ccsds::utils::lexical::ParseToken::initializeClass, ::org::orekit::files::ccsds::utils::ContextBinding::initializeClass, ::org::orekit::files::ccsds::ndm::adm::acm::AttitudeManeuver::initializeClass, &a0, &a1, &a2))
                {
                  OBJ_CALL(result = self->object.process(a0, a1, a2));
                  Py_RETURN_BOOL(result);
                }

                PyErr_SetArgsError((PyObject *) self, "process", args);
                return NULL;
              }

              static PyObject *t_AttitudeManeuverKey_valueOf(PyTypeObject *type, PyObject *args)
              {
                ::java::lang::String a0((jobject) NULL);
                AttitudeManeuverKey result((jobject) NULL);

                if (!parseArgs(args, "s", &a0))
                {
                  OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::adm::acm::AttitudeManeuverKey::valueOf(a0));
                  return t_AttitudeManeuverKey::wrap_Object(result);
                }

                return callSuper(type, "valueOf", args, 2);
              }

              static PyObject *t_AttitudeManeuverKey_values(PyTypeObject *type)
              {
                JArray< AttitudeManeuverKey > result((jobject) NULL);
                OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::adm::acm::AttitudeManeuverKey::values());
                return JArray<jobject>(result.this$).wrap(t_AttitudeManeuverKey::wrap_jobject);
              }
              static PyObject *t_AttitudeManeuverKey_get__parameters_(t_AttitudeManeuverKey *self, void *data)
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
#include "org/orekit/propagation/numerical/GLONASSNumericalPropagator.h"
#include "org/orekit/attitudes/AttitudeProvider.h"
#include "org/orekit/data/DataContext.h"
#include "org/orekit/propagation/analytical/gnss/data/GLONASSOrbitalElements.h"
#include "org/orekit/frames/Frame.h"
#include "org/hipparchus/ode/nonstiff/ClassicalRungeKuttaIntegrator.h"
#include "java/lang/Class.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace numerical {

        ::java::lang::Class *GLONASSNumericalPropagator::class$ = NULL;
        jmethodID *GLONASSNumericalPropagator::mids$ = NULL;
        bool GLONASSNumericalPropagator::live$ = false;

        jclass GLONASSNumericalPropagator::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/numerical/GLONASSNumericalPropagator");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_ebe9ca91f2afbc9f] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/ode/nonstiff/ClassicalRungeKuttaIntegrator;Lorg/orekit/propagation/analytical/gnss/data/GLONASSOrbitalElements;Lorg/orekit/frames/Frame;Lorg/orekit/attitudes/AttitudeProvider;DLorg/orekit/data/DataContext;Z)V");
            mids$[mid_getGLONASSOrbitalElements_ecd6853fd3b2ef73] = env->getMethodID(cls, "getGLONASSOrbitalElements", "()Lorg/orekit/propagation/analytical/gnss/data/GLONASSOrbitalElements;");
            mids$[mid_propagate_4f0008999861ca31] = env->getMethodID(cls, "propagate", "(Lorg/orekit/time/AbsoluteDate;)Lorg/orekit/propagation/SpacecraftState;");
            mids$[mid_createMapper_74f07e2c0845997b] = env->getMethodID(cls, "createMapper", "(Lorg/orekit/time/AbsoluteDate;DLorg/orekit/orbits/OrbitType;Lorg/orekit/orbits/PositionAngleType;Lorg/orekit/attitudes/AttitudeProvider;Lorg/orekit/frames/Frame;)Lorg/orekit/propagation/integration/StateMapper;");
            mids$[mid_getMainStateEquations_8e0da39ae64099e8] = env->getMethodID(cls, "getMainStateEquations", "(Lorg/hipparchus/ode/ODEIntegrator;)Lorg/orekit/propagation/integration/AbstractIntegratedPropagator$MainStateEquations;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        GLONASSNumericalPropagator::GLONASSNumericalPropagator(const ::org::hipparchus::ode::nonstiff::ClassicalRungeKuttaIntegrator & a0, const ::org::orekit::propagation::analytical::gnss::data::GLONASSOrbitalElements & a1, const ::org::orekit::frames::Frame & a2, const ::org::orekit::attitudes::AttitudeProvider & a3, jdouble a4, const ::org::orekit::data::DataContext & a5, jboolean a6) : ::org::orekit::propagation::integration::AbstractIntegratedPropagator(env->newObject(initializeClass, &mids$, mid_init$_ebe9ca91f2afbc9f, a0.this$, a1.this$, a2.this$, a3.this$, a4, a5.this$, a6)) {}

        ::org::orekit::propagation::analytical::gnss::data::GLONASSOrbitalElements GLONASSNumericalPropagator::getGLONASSOrbitalElements() const
        {
          return ::org::orekit::propagation::analytical::gnss::data::GLONASSOrbitalElements(env->callObjectMethod(this$, mids$[mid_getGLONASSOrbitalElements_ecd6853fd3b2ef73]));
        }

        ::org::orekit::propagation::SpacecraftState GLONASSNumericalPropagator::propagate(const ::org::orekit::time::AbsoluteDate & a0) const
        {
          return ::org::orekit::propagation::SpacecraftState(env->callObjectMethod(this$, mids$[mid_propagate_4f0008999861ca31], a0.this$));
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
      namespace numerical {
        static PyObject *t_GLONASSNumericalPropagator_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_GLONASSNumericalPropagator_instance_(PyTypeObject *type, PyObject *arg);
        static int t_GLONASSNumericalPropagator_init_(t_GLONASSNumericalPropagator *self, PyObject *args, PyObject *kwds);
        static PyObject *t_GLONASSNumericalPropagator_getGLONASSOrbitalElements(t_GLONASSNumericalPropagator *self);
        static PyObject *t_GLONASSNumericalPropagator_propagate(t_GLONASSNumericalPropagator *self, PyObject *args);
        static PyObject *t_GLONASSNumericalPropagator_get__gLONASSOrbitalElements(t_GLONASSNumericalPropagator *self, void *data);
        static PyGetSetDef t_GLONASSNumericalPropagator__fields_[] = {
          DECLARE_GET_FIELD(t_GLONASSNumericalPropagator, gLONASSOrbitalElements),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_GLONASSNumericalPropagator__methods_[] = {
          DECLARE_METHOD(t_GLONASSNumericalPropagator, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_GLONASSNumericalPropagator, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_GLONASSNumericalPropagator, getGLONASSOrbitalElements, METH_NOARGS),
          DECLARE_METHOD(t_GLONASSNumericalPropagator, propagate, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(GLONASSNumericalPropagator)[] = {
          { Py_tp_methods, t_GLONASSNumericalPropagator__methods_ },
          { Py_tp_init, (void *) t_GLONASSNumericalPropagator_init_ },
          { Py_tp_getset, t_GLONASSNumericalPropagator__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(GLONASSNumericalPropagator)[] = {
          &PY_TYPE_DEF(::org::orekit::propagation::integration::AbstractIntegratedPropagator),
          NULL
        };

        DEFINE_TYPE(GLONASSNumericalPropagator, t_GLONASSNumericalPropagator, GLONASSNumericalPropagator);

        void t_GLONASSNumericalPropagator::install(PyObject *module)
        {
          installType(&PY_TYPE(GLONASSNumericalPropagator), &PY_TYPE_DEF(GLONASSNumericalPropagator), module, "GLONASSNumericalPropagator", 0);
        }

        void t_GLONASSNumericalPropagator::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(GLONASSNumericalPropagator), "class_", make_descriptor(GLONASSNumericalPropagator::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(GLONASSNumericalPropagator), "wrapfn_", make_descriptor(t_GLONASSNumericalPropagator::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(GLONASSNumericalPropagator), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_GLONASSNumericalPropagator_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, GLONASSNumericalPropagator::initializeClass, 1)))
            return NULL;
          return t_GLONASSNumericalPropagator::wrap_Object(GLONASSNumericalPropagator(((t_GLONASSNumericalPropagator *) arg)->object.this$));
        }
        static PyObject *t_GLONASSNumericalPropagator_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, GLONASSNumericalPropagator::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_GLONASSNumericalPropagator_init_(t_GLONASSNumericalPropagator *self, PyObject *args, PyObject *kwds)
        {
          ::org::hipparchus::ode::nonstiff::ClassicalRungeKuttaIntegrator a0((jobject) NULL);
          ::org::orekit::propagation::analytical::gnss::data::GLONASSOrbitalElements a1((jobject) NULL);
          ::org::orekit::frames::Frame a2((jobject) NULL);
          ::org::orekit::attitudes::AttitudeProvider a3((jobject) NULL);
          jdouble a4;
          ::org::orekit::data::DataContext a5((jobject) NULL);
          jboolean a6;
          GLONASSNumericalPropagator object((jobject) NULL);

          if (!parseArgs(args, "kkkkDkZ", ::org::hipparchus::ode::nonstiff::ClassicalRungeKuttaIntegrator::initializeClass, ::org::orekit::propagation::analytical::gnss::data::GLONASSOrbitalElements::initializeClass, ::org::orekit::frames::Frame::initializeClass, ::org::orekit::attitudes::AttitudeProvider::initializeClass, ::org::orekit::data::DataContext::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5, &a6))
          {
            INT_CALL(object = GLONASSNumericalPropagator(a0, a1, a2, a3, a4, a5, a6));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_GLONASSNumericalPropagator_getGLONASSOrbitalElements(t_GLONASSNumericalPropagator *self)
        {
          ::org::orekit::propagation::analytical::gnss::data::GLONASSOrbitalElements result((jobject) NULL);
          OBJ_CALL(result = self->object.getGLONASSOrbitalElements());
          return ::org::orekit::propagation::analytical::gnss::data::t_GLONASSOrbitalElements::wrap_Object(result);
        }

        static PyObject *t_GLONASSNumericalPropagator_propagate(t_GLONASSNumericalPropagator *self, PyObject *args)
        {
          ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
          ::org::orekit::propagation::SpacecraftState result((jobject) NULL);

          if (!parseArgs(args, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.propagate(a0));
            return ::org::orekit::propagation::t_SpacecraftState::wrap_Object(result);
          }

          return callSuper(PY_TYPE(GLONASSNumericalPropagator), (PyObject *) self, "propagate", args, 2);
        }

        static PyObject *t_GLONASSNumericalPropagator_get__gLONASSOrbitalElements(t_GLONASSNumericalPropagator *self, void *data)
        {
          ::org::orekit::propagation::analytical::gnss::data::GLONASSOrbitalElements value((jobject) NULL);
          OBJ_CALL(value = self->object.getGLONASSOrbitalElements());
          return ::org::orekit::propagation::analytical::gnss::data::t_GLONASSOrbitalElements::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/ode/FieldExpandableODE.h"
#include "org/hipparchus/ode/FieldODEState.h"
#include "org/hipparchus/ode/FieldEquationsMapper.h"
#include "org/hipparchus/ode/FieldSecondaryODE.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/hipparchus/ode/FieldOrdinaryDifferentialEquation.h"
#include "java/lang/Class.h"
#include "org/hipparchus/exception/MathIllegalStateException.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace ode {

      ::java::lang::Class *FieldExpandableODE::class$ = NULL;
      jmethodID *FieldExpandableODE::mids$ = NULL;
      bool FieldExpandableODE::live$ = false;

      jclass FieldExpandableODE::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/ode/FieldExpandableODE");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_ff09ebc92660a2da] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/ode/FieldOrdinaryDifferentialEquation;)V");
          mids$[mid_addSecondaryEquations_8a112e6c6fd08e8d] = env->getMethodID(cls, "addSecondaryEquations", "(Lorg/hipparchus/ode/FieldSecondaryODE;)I");
          mids$[mid_computeDerivatives_94164e01c2f25701] = env->getMethodID(cls, "computeDerivatives", "(Lorg/hipparchus/CalculusFieldElement;[Lorg/hipparchus/CalculusFieldElement;)[Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getMapper_e3ed330d4a98f3fc] = env->getMethodID(cls, "getMapper", "()Lorg/hipparchus/ode/FieldEquationsMapper;");
          mids$[mid_getPrimary_97b7f622ceff2f83] = env->getMethodID(cls, "getPrimary", "()Lorg/hipparchus/ode/FieldOrdinaryDifferentialEquation;");
          mids$[mid_init_c09b0b0bdb27b138] = env->getMethodID(cls, "init", "(Lorg/hipparchus/ode/FieldODEState;Lorg/hipparchus/CalculusFieldElement;)V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      FieldExpandableODE::FieldExpandableODE(const ::org::hipparchus::ode::FieldOrdinaryDifferentialEquation & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_ff09ebc92660a2da, a0.this$)) {}

      jint FieldExpandableODE::addSecondaryEquations(const ::org::hipparchus::ode::FieldSecondaryODE & a0) const
      {
        return env->callIntMethod(this$, mids$[mid_addSecondaryEquations_8a112e6c6fd08e8d], a0.this$);
      }

      JArray< ::org::hipparchus::CalculusFieldElement > FieldExpandableODE::computeDerivatives(const ::org::hipparchus::CalculusFieldElement & a0, const JArray< ::org::hipparchus::CalculusFieldElement > & a1) const
      {
        return JArray< ::org::hipparchus::CalculusFieldElement >(env->callObjectMethod(this$, mids$[mid_computeDerivatives_94164e01c2f25701], a0.this$, a1.this$));
      }

      ::org::hipparchus::ode::FieldEquationsMapper FieldExpandableODE::getMapper() const
      {
        return ::org::hipparchus::ode::FieldEquationsMapper(env->callObjectMethod(this$, mids$[mid_getMapper_e3ed330d4a98f3fc]));
      }

      ::org::hipparchus::ode::FieldOrdinaryDifferentialEquation FieldExpandableODE::getPrimary() const
      {
        return ::org::hipparchus::ode::FieldOrdinaryDifferentialEquation(env->callObjectMethod(this$, mids$[mid_getPrimary_97b7f622ceff2f83]));
      }

      void FieldExpandableODE::init(const ::org::hipparchus::ode::FieldODEState & a0, const ::org::hipparchus::CalculusFieldElement & a1) const
      {
        env->callVoidMethod(this$, mids$[mid_init_c09b0b0bdb27b138], a0.this$, a1.this$);
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
      static PyObject *t_FieldExpandableODE_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldExpandableODE_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldExpandableODE_of_(t_FieldExpandableODE *self, PyObject *args);
      static int t_FieldExpandableODE_init_(t_FieldExpandableODE *self, PyObject *args, PyObject *kwds);
      static PyObject *t_FieldExpandableODE_addSecondaryEquations(t_FieldExpandableODE *self, PyObject *arg);
      static PyObject *t_FieldExpandableODE_computeDerivatives(t_FieldExpandableODE *self, PyObject *args);
      static PyObject *t_FieldExpandableODE_getMapper(t_FieldExpandableODE *self);
      static PyObject *t_FieldExpandableODE_getPrimary(t_FieldExpandableODE *self);
      static PyObject *t_FieldExpandableODE_init(t_FieldExpandableODE *self, PyObject *args);
      static PyObject *t_FieldExpandableODE_get__mapper(t_FieldExpandableODE *self, void *data);
      static PyObject *t_FieldExpandableODE_get__primary(t_FieldExpandableODE *self, void *data);
      static PyObject *t_FieldExpandableODE_get__parameters_(t_FieldExpandableODE *self, void *data);
      static PyGetSetDef t_FieldExpandableODE__fields_[] = {
        DECLARE_GET_FIELD(t_FieldExpandableODE, mapper),
        DECLARE_GET_FIELD(t_FieldExpandableODE, primary),
        DECLARE_GET_FIELD(t_FieldExpandableODE, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_FieldExpandableODE__methods_[] = {
        DECLARE_METHOD(t_FieldExpandableODE, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldExpandableODE, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldExpandableODE, of_, METH_VARARGS),
        DECLARE_METHOD(t_FieldExpandableODE, addSecondaryEquations, METH_O),
        DECLARE_METHOD(t_FieldExpandableODE, computeDerivatives, METH_VARARGS),
        DECLARE_METHOD(t_FieldExpandableODE, getMapper, METH_NOARGS),
        DECLARE_METHOD(t_FieldExpandableODE, getPrimary, METH_NOARGS),
        DECLARE_METHOD(t_FieldExpandableODE, init, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(FieldExpandableODE)[] = {
        { Py_tp_methods, t_FieldExpandableODE__methods_ },
        { Py_tp_init, (void *) t_FieldExpandableODE_init_ },
        { Py_tp_getset, t_FieldExpandableODE__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(FieldExpandableODE)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(FieldExpandableODE, t_FieldExpandableODE, FieldExpandableODE);
      PyObject *t_FieldExpandableODE::wrap_Object(const FieldExpandableODE& object, PyTypeObject *p0)
      {
        PyObject *obj = t_FieldExpandableODE::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_FieldExpandableODE *self = (t_FieldExpandableODE *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_FieldExpandableODE::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_FieldExpandableODE::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_FieldExpandableODE *self = (t_FieldExpandableODE *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_FieldExpandableODE::install(PyObject *module)
      {
        installType(&PY_TYPE(FieldExpandableODE), &PY_TYPE_DEF(FieldExpandableODE), module, "FieldExpandableODE", 0);
      }

      void t_FieldExpandableODE::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldExpandableODE), "class_", make_descriptor(FieldExpandableODE::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldExpandableODE), "wrapfn_", make_descriptor(t_FieldExpandableODE::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldExpandableODE), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_FieldExpandableODE_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, FieldExpandableODE::initializeClass, 1)))
          return NULL;
        return t_FieldExpandableODE::wrap_Object(FieldExpandableODE(((t_FieldExpandableODE *) arg)->object.this$));
      }
      static PyObject *t_FieldExpandableODE_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, FieldExpandableODE::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_FieldExpandableODE_of_(t_FieldExpandableODE *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static int t_FieldExpandableODE_init_(t_FieldExpandableODE *self, PyObject *args, PyObject *kwds)
      {
        ::org::hipparchus::ode::FieldOrdinaryDifferentialEquation a0((jobject) NULL);
        PyTypeObject **p0;
        FieldExpandableODE object((jobject) NULL);

        if (!parseArgs(args, "K", ::org::hipparchus::ode::FieldOrdinaryDifferentialEquation::initializeClass, &a0, &p0, ::org::hipparchus::ode::t_FieldOrdinaryDifferentialEquation::parameters_))
        {
          INT_CALL(object = FieldExpandableODE(a0));
          self->object = object;
        }
        else
        {
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_FieldExpandableODE_addSecondaryEquations(t_FieldExpandableODE *self, PyObject *arg)
      {
        ::org::hipparchus::ode::FieldSecondaryODE a0((jobject) NULL);
        PyTypeObject **p0;
        jint result;

        if (!parseArg(arg, "K", ::org::hipparchus::ode::FieldSecondaryODE::initializeClass, &a0, &p0, ::org::hipparchus::ode::t_FieldSecondaryODE::parameters_))
        {
          OBJ_CALL(result = self->object.addSecondaryEquations(a0));
          return PyLong_FromLong((long) result);
        }

        PyErr_SetArgsError((PyObject *) self, "addSecondaryEquations", arg);
        return NULL;
      }

      static PyObject *t_FieldExpandableODE_computeDerivatives(t_FieldExpandableODE *self, PyObject *args)
      {
        ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
        PyTypeObject **p0;
        JArray< ::org::hipparchus::CalculusFieldElement > a1((jobject) NULL);
        PyTypeObject **p1;
        JArray< ::org::hipparchus::CalculusFieldElement > result((jobject) NULL);

        if (!parseArgs(args, "K[K", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_))
        {
          OBJ_CALL(result = self->object.computeDerivatives(a0, a1));
          return JArray<jobject>(result.this$).wrap(::org::hipparchus::t_CalculusFieldElement::wrap_jobject);
        }

        PyErr_SetArgsError((PyObject *) self, "computeDerivatives", args);
        return NULL;
      }

      static PyObject *t_FieldExpandableODE_getMapper(t_FieldExpandableODE *self)
      {
        ::org::hipparchus::ode::FieldEquationsMapper result((jobject) NULL);
        OBJ_CALL(result = self->object.getMapper());
        return ::org::hipparchus::ode::t_FieldEquationsMapper::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_FieldExpandableODE_getPrimary(t_FieldExpandableODE *self)
      {
        ::org::hipparchus::ode::FieldOrdinaryDifferentialEquation result((jobject) NULL);
        OBJ_CALL(result = self->object.getPrimary());
        return ::org::hipparchus::ode::t_FieldOrdinaryDifferentialEquation::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_FieldExpandableODE_init(t_FieldExpandableODE *self, PyObject *args)
      {
        ::org::hipparchus::ode::FieldODEState a0((jobject) NULL);
        PyTypeObject **p0;
        ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
        PyTypeObject **p1;

        if (!parseArgs(args, "KK", ::org::hipparchus::ode::FieldODEState::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::ode::t_FieldODEState::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_))
        {
          OBJ_CALL(self->object.init(a0, a1));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "init", args);
        return NULL;
      }
      static PyObject *t_FieldExpandableODE_get__parameters_(t_FieldExpandableODE *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }

      static PyObject *t_FieldExpandableODE_get__mapper(t_FieldExpandableODE *self, void *data)
      {
        ::org::hipparchus::ode::FieldEquationsMapper value((jobject) NULL);
        OBJ_CALL(value = self->object.getMapper());
        return ::org::hipparchus::ode::t_FieldEquationsMapper::wrap_Object(value);
      }

      static PyObject *t_FieldExpandableODE_get__primary(t_FieldExpandableODE *self, void *data)
      {
        ::org::hipparchus::ode::FieldOrdinaryDifferentialEquation value((jobject) NULL);
        OBJ_CALL(value = self->object.getPrimary());
        return ::org::hipparchus::ode::t_FieldOrdinaryDifferentialEquation::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/gnss/metric/messages/rtcm/ephemeris/Rtcm1045.h"
#include "java/lang/Class.h"
#include "org/orekit/gnss/metric/messages/rtcm/ephemeris/Rtcm1045Data.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace metric {
        namespace messages {
          namespace rtcm {
            namespace ephemeris {

              ::java::lang::Class *Rtcm1045::class$ = NULL;
              jmethodID *Rtcm1045::mids$ = NULL;
              bool Rtcm1045::live$ = false;

              jclass Rtcm1045::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/gnss/metric/messages/rtcm/ephemeris/Rtcm1045");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_init$_83e4b1ee71d7636f] = env->getMethodID(cls, "<init>", "(ILorg/orekit/gnss/metric/messages/rtcm/ephemeris/Rtcm1045Data;)V");

                  class$ = new ::java::lang::Class(cls);
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              Rtcm1045::Rtcm1045(jint a0, const ::org::orekit::gnss::metric::messages::rtcm::ephemeris::Rtcm1045Data & a1) : ::org::orekit::gnss::metric::messages::rtcm::ephemeris::RtcmEphemerisMessage(env->newObject(initializeClass, &mids$, mid_init$_83e4b1ee71d7636f, a0, a1.this$)) {}
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
              static PyObject *t_Rtcm1045_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_Rtcm1045_instance_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_Rtcm1045_of_(t_Rtcm1045 *self, PyObject *args);
              static int t_Rtcm1045_init_(t_Rtcm1045 *self, PyObject *args, PyObject *kwds);
              static PyObject *t_Rtcm1045_get__parameters_(t_Rtcm1045 *self, void *data);
              static PyGetSetDef t_Rtcm1045__fields_[] = {
                DECLARE_GET_FIELD(t_Rtcm1045, parameters_),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_Rtcm1045__methods_[] = {
                DECLARE_METHOD(t_Rtcm1045, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_Rtcm1045, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_Rtcm1045, of_, METH_VARARGS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(Rtcm1045)[] = {
                { Py_tp_methods, t_Rtcm1045__methods_ },
                { Py_tp_init, (void *) t_Rtcm1045_init_ },
                { Py_tp_getset, t_Rtcm1045__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(Rtcm1045)[] = {
                &PY_TYPE_DEF(::org::orekit::gnss::metric::messages::rtcm::ephemeris::RtcmEphemerisMessage),
                NULL
              };

              DEFINE_TYPE(Rtcm1045, t_Rtcm1045, Rtcm1045);
              PyObject *t_Rtcm1045::wrap_Object(const Rtcm1045& object, PyTypeObject *p0)
              {
                PyObject *obj = t_Rtcm1045::wrap_Object(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_Rtcm1045 *self = (t_Rtcm1045 *) obj;
                  self->parameters[0] = p0;
                }
                return obj;
              }

              PyObject *t_Rtcm1045::wrap_jobject(const jobject& object, PyTypeObject *p0)
              {
                PyObject *obj = t_Rtcm1045::wrap_jobject(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_Rtcm1045 *self = (t_Rtcm1045 *) obj;
                  self->parameters[0] = p0;
                }
                return obj;
              }

              void t_Rtcm1045::install(PyObject *module)
              {
                installType(&PY_TYPE(Rtcm1045), &PY_TYPE_DEF(Rtcm1045), module, "Rtcm1045", 0);
              }

              void t_Rtcm1045::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(Rtcm1045), "class_", make_descriptor(Rtcm1045::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(Rtcm1045), "wrapfn_", make_descriptor(t_Rtcm1045::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(Rtcm1045), "boxfn_", make_descriptor(boxObject));
              }

              static PyObject *t_Rtcm1045_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, Rtcm1045::initializeClass, 1)))
                  return NULL;
                return t_Rtcm1045::wrap_Object(Rtcm1045(((t_Rtcm1045 *) arg)->object.this$));
              }
              static PyObject *t_Rtcm1045_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, Rtcm1045::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static PyObject *t_Rtcm1045_of_(t_Rtcm1045 *self, PyObject *args)
              {
                if (!parseArg(args, "T", 1, &(self->parameters)))
                  Py_RETURN_SELF;
                return PyErr_SetArgsError((PyObject *) self, "of_", args);
              }

              static int t_Rtcm1045_init_(t_Rtcm1045 *self, PyObject *args, PyObject *kwds)
              {
                jint a0;
                ::org::orekit::gnss::metric::messages::rtcm::ephemeris::Rtcm1045Data a1((jobject) NULL);
                Rtcm1045 object((jobject) NULL);

                if (!parseArgs(args, "Ik", ::org::orekit::gnss::metric::messages::rtcm::ephemeris::Rtcm1045Data::initializeClass, &a0, &a1))
                {
                  INT_CALL(object = Rtcm1045(a0, a1));
                  self->object = object;
                  self->parameters[0] = ::org::orekit::gnss::metric::messages::rtcm::ephemeris::PY_TYPE(Rtcm1045Data);
                }
                else
                {
                  PyErr_SetArgsError((PyObject *) self, "__init__", args);
                  return -1;
                }

                return 0;
              }
              static PyObject *t_Rtcm1045_get__parameters_(t_Rtcm1045 *self, void *data)
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
#include "org/orekit/gnss/metric/messages/ssr/igm/SsrIgm07Data.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace metric {
        namespace messages {
          namespace ssr {
            namespace igm {

              ::java::lang::Class *SsrIgm07Data::class$ = NULL;
              jmethodID *SsrIgm07Data::mids$ = NULL;
              bool SsrIgm07Data::live$ = false;

              jclass SsrIgm07Data::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/gnss/metric/messages/ssr/igm/SsrIgm07Data");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_init$_a1fa5dae97ea5ed2] = env->getMethodID(cls, "<init>", "()V");
                  mids$[mid_getSsrUra_b74f83833fdad017] = env->getMethodID(cls, "getSsrUra", "()D");
                  mids$[mid_setSsrUra_8ba9fe7a847cecad] = env->getMethodID(cls, "setSsrUra", "(D)V");

                  class$ = new ::java::lang::Class(cls);
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              SsrIgm07Data::SsrIgm07Data() : ::org::orekit::gnss::metric::messages::ssr::igm::SsrIgmData(env->newObject(initializeClass, &mids$, mid_init$_a1fa5dae97ea5ed2)) {}

              jdouble SsrIgm07Data::getSsrUra() const
              {
                return env->callDoubleMethod(this$, mids$[mid_getSsrUra_b74f83833fdad017]);
              }

              void SsrIgm07Data::setSsrUra(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setSsrUra_8ba9fe7a847cecad], a0);
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
            namespace igm {
              static PyObject *t_SsrIgm07Data_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_SsrIgm07Data_instance_(PyTypeObject *type, PyObject *arg);
              static int t_SsrIgm07Data_init_(t_SsrIgm07Data *self, PyObject *args, PyObject *kwds);
              static PyObject *t_SsrIgm07Data_getSsrUra(t_SsrIgm07Data *self);
              static PyObject *t_SsrIgm07Data_setSsrUra(t_SsrIgm07Data *self, PyObject *arg);
              static PyObject *t_SsrIgm07Data_get__ssrUra(t_SsrIgm07Data *self, void *data);
              static int t_SsrIgm07Data_set__ssrUra(t_SsrIgm07Data *self, PyObject *arg, void *data);
              static PyGetSetDef t_SsrIgm07Data__fields_[] = {
                DECLARE_GETSET_FIELD(t_SsrIgm07Data, ssrUra),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_SsrIgm07Data__methods_[] = {
                DECLARE_METHOD(t_SsrIgm07Data, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_SsrIgm07Data, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_SsrIgm07Data, getSsrUra, METH_NOARGS),
                DECLARE_METHOD(t_SsrIgm07Data, setSsrUra, METH_O),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(SsrIgm07Data)[] = {
                { Py_tp_methods, t_SsrIgm07Data__methods_ },
                { Py_tp_init, (void *) t_SsrIgm07Data_init_ },
                { Py_tp_getset, t_SsrIgm07Data__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(SsrIgm07Data)[] = {
                &PY_TYPE_DEF(::org::orekit::gnss::metric::messages::ssr::igm::SsrIgmData),
                NULL
              };

              DEFINE_TYPE(SsrIgm07Data, t_SsrIgm07Data, SsrIgm07Data);

              void t_SsrIgm07Data::install(PyObject *module)
              {
                installType(&PY_TYPE(SsrIgm07Data), &PY_TYPE_DEF(SsrIgm07Data), module, "SsrIgm07Data", 0);
              }

              void t_SsrIgm07Data::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(SsrIgm07Data), "class_", make_descriptor(SsrIgm07Data::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(SsrIgm07Data), "wrapfn_", make_descriptor(t_SsrIgm07Data::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(SsrIgm07Data), "boxfn_", make_descriptor(boxObject));
              }

              static PyObject *t_SsrIgm07Data_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, SsrIgm07Data::initializeClass, 1)))
                  return NULL;
                return t_SsrIgm07Data::wrap_Object(SsrIgm07Data(((t_SsrIgm07Data *) arg)->object.this$));
              }
              static PyObject *t_SsrIgm07Data_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, SsrIgm07Data::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static int t_SsrIgm07Data_init_(t_SsrIgm07Data *self, PyObject *args, PyObject *kwds)
              {
                SsrIgm07Data object((jobject) NULL);

                INT_CALL(object = SsrIgm07Data());
                self->object = object;

                return 0;
              }

              static PyObject *t_SsrIgm07Data_getSsrUra(t_SsrIgm07Data *self)
              {
                jdouble result;
                OBJ_CALL(result = self->object.getSsrUra());
                return PyFloat_FromDouble((double) result);
              }

              static PyObject *t_SsrIgm07Data_setSsrUra(t_SsrIgm07Data *self, PyObject *arg)
              {
                jdouble a0;

                if (!parseArg(arg, "D", &a0))
                {
                  OBJ_CALL(self->object.setSsrUra(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setSsrUra", arg);
                return NULL;
              }

              static PyObject *t_SsrIgm07Data_get__ssrUra(t_SsrIgm07Data *self, void *data)
              {
                jdouble value;
                OBJ_CALL(value = self->object.getSsrUra());
                return PyFloat_FromDouble((double) value);
              }
              static int t_SsrIgm07Data_set__ssrUra(t_SsrIgm07Data *self, PyObject *arg, void *data)
              {
                {
                  jdouble value;
                  if (!parseArg(arg, "D", &value))
                  {
                    INT_CALL(self->object.setSsrUra(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "ssrUra", arg);
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
#include "org/orekit/rugged/utils/RoughVisibilityEstimator.h"
#include "java/util/List.h"
#include "org/orekit/utils/TimeStampedPVCoordinates.h"
#include "org/orekit/bodies/OneAxisEllipsoid.h"
#include "org/orekit/bodies/GeodeticPoint.h"
#include "org/orekit/frames/Frame.h"
#include "java/lang/Class.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace rugged {
      namespace utils {

        ::java::lang::Class *RoughVisibilityEstimator::class$ = NULL;
        jmethodID *RoughVisibilityEstimator::mids$ = NULL;
        bool RoughVisibilityEstimator::live$ = false;

        jclass RoughVisibilityEstimator::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/rugged/utils/RoughVisibilityEstimator");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_399876c4baaf92fd] = env->getMethodID(cls, "<init>", "(Lorg/orekit/bodies/OneAxisEllipsoid;Lorg/orekit/frames/Frame;Ljava/util/List;)V");
            mids$[mid_estimateVisibility_5a46fb2cb47f92a5] = env->getMethodID(cls, "estimateVisibility", "(Lorg/orekit/bodies/GeodeticPoint;)Lorg/orekit/time/AbsoluteDate;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        RoughVisibilityEstimator::RoughVisibilityEstimator(const ::org::orekit::bodies::OneAxisEllipsoid & a0, const ::org::orekit::frames::Frame & a1, const ::java::util::List & a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_399876c4baaf92fd, a0.this$, a1.this$, a2.this$)) {}

        ::org::orekit::time::AbsoluteDate RoughVisibilityEstimator::estimateVisibility(const ::org::orekit::bodies::GeodeticPoint & a0) const
        {
          return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_estimateVisibility_5a46fb2cb47f92a5], a0.this$));
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
      namespace utils {
        static PyObject *t_RoughVisibilityEstimator_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_RoughVisibilityEstimator_instance_(PyTypeObject *type, PyObject *arg);
        static int t_RoughVisibilityEstimator_init_(t_RoughVisibilityEstimator *self, PyObject *args, PyObject *kwds);
        static PyObject *t_RoughVisibilityEstimator_estimateVisibility(t_RoughVisibilityEstimator *self, PyObject *arg);

        static PyMethodDef t_RoughVisibilityEstimator__methods_[] = {
          DECLARE_METHOD(t_RoughVisibilityEstimator, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_RoughVisibilityEstimator, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_RoughVisibilityEstimator, estimateVisibility, METH_O),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(RoughVisibilityEstimator)[] = {
          { Py_tp_methods, t_RoughVisibilityEstimator__methods_ },
          { Py_tp_init, (void *) t_RoughVisibilityEstimator_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(RoughVisibilityEstimator)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(RoughVisibilityEstimator, t_RoughVisibilityEstimator, RoughVisibilityEstimator);

        void t_RoughVisibilityEstimator::install(PyObject *module)
        {
          installType(&PY_TYPE(RoughVisibilityEstimator), &PY_TYPE_DEF(RoughVisibilityEstimator), module, "RoughVisibilityEstimator", 0);
        }

        void t_RoughVisibilityEstimator::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(RoughVisibilityEstimator), "class_", make_descriptor(RoughVisibilityEstimator::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(RoughVisibilityEstimator), "wrapfn_", make_descriptor(t_RoughVisibilityEstimator::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(RoughVisibilityEstimator), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_RoughVisibilityEstimator_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, RoughVisibilityEstimator::initializeClass, 1)))
            return NULL;
          return t_RoughVisibilityEstimator::wrap_Object(RoughVisibilityEstimator(((t_RoughVisibilityEstimator *) arg)->object.this$));
        }
        static PyObject *t_RoughVisibilityEstimator_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, RoughVisibilityEstimator::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_RoughVisibilityEstimator_init_(t_RoughVisibilityEstimator *self, PyObject *args, PyObject *kwds)
        {
          ::org::orekit::bodies::OneAxisEllipsoid a0((jobject) NULL);
          ::org::orekit::frames::Frame a1((jobject) NULL);
          ::java::util::List a2((jobject) NULL);
          PyTypeObject **p2;
          RoughVisibilityEstimator object((jobject) NULL);

          if (!parseArgs(args, "kkK", ::org::orekit::bodies::OneAxisEllipsoid::initializeClass, ::org::orekit::frames::Frame::initializeClass, ::java::util::List::initializeClass, &a0, &a1, &a2, &p2, ::java::util::t_List::parameters_))
          {
            INT_CALL(object = RoughVisibilityEstimator(a0, a1, a2));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_RoughVisibilityEstimator_estimateVisibility(t_RoughVisibilityEstimator *self, PyObject *arg)
        {
          ::org::orekit::bodies::GeodeticPoint a0((jobject) NULL);
          ::org::orekit::time::AbsoluteDate result((jobject) NULL);

          if (!parseArg(arg, "k", ::org::orekit::bodies::GeodeticPoint::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.estimateVisibility(a0));
            return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "estimateVisibility", arg);
          return NULL;
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/utils/FieldArrayDictionary.h"
#include "java/util/Map.h"
#include "java/util/List.h"
#include "org/orekit/utils/FieldArrayDictionary.h"
#include "org/hipparchus/Field.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "java/lang/Class.h"
#include "org/orekit/utils/FieldArrayDictionary$Entry.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace utils {

      ::java::lang::Class *FieldArrayDictionary::class$ = NULL;
      jmethodID *FieldArrayDictionary::mids$ = NULL;
      bool FieldArrayDictionary::live$ = false;

      jclass FieldArrayDictionary::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/utils/FieldArrayDictionary");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_02ab84aa7626616d] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/Field;)V");
          mids$[mid_init$_9127f23cedcce237] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/Field;I)V");
          mids$[mid_init$_07915b48270dec6b] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/Field;Ljava/util/Map;)V");
          mids$[mid_clear_a1fa5dae97ea5ed2] = env->getMethodID(cls, "clear", "()V");
          mids$[mid_get_f25dcdbfa4b24501] = env->getMethodID(cls, "get", "(Ljava/lang/String;)[Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getData_e62d3bb06d56d7e3] = env->getMethodID(cls, "getData", "()Ljava/util/List;");
          mids$[mid_getEntry_bf08c4a3bb93e7cd] = env->getMethodID(cls, "getEntry", "(Ljava/lang/String;)Lorg/orekit/utils/FieldArrayDictionary$Entry;");
          mids$[mid_getField_04d1f63e17d5c5d4] = env->getMethodID(cls, "getField", "()Lorg/hipparchus/Field;");
          mids$[mid_put_6fb36758267c5870] = env->getMethodID(cls, "put", "(Ljava/lang/String;[D)V");
          mids$[mid_put_0090afa924af0a2d] = env->getMethodID(cls, "put", "(Ljava/lang/String;[Lorg/hipparchus/CalculusFieldElement;)V");
          mids$[mid_putAll_acb615aad9f2aad9] = env->getMethodID(cls, "putAll", "(Lorg/orekit/utils/FieldArrayDictionary;)V");
          mids$[mid_putAll_6648520b18d8ef1d] = env->getMethodID(cls, "putAll", "(Ljava/util/Map;)V");
          mids$[mid_remove_cde6b28e15c96b75] = env->getMethodID(cls, "remove", "(Ljava/lang/String;)Z");
          mids$[mid_size_55546ef6a647f39b] = env->getMethodID(cls, "size", "()I");
          mids$[mid_toMap_810bed48fafb0b9a] = env->getMethodID(cls, "toMap", "()Ljava/util/Map;");
          mids$[mid_toString_1c1fa1e935d6cdcf] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");
          mids$[mid_unmodifiableView_7c5d47860532e9d9] = env->getMethodID(cls, "unmodifiableView", "()Lorg/orekit/utils/FieldArrayDictionary;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      FieldArrayDictionary::FieldArrayDictionary(const ::org::hipparchus::Field & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_02ab84aa7626616d, a0.this$)) {}

      FieldArrayDictionary::FieldArrayDictionary(const ::org::hipparchus::Field & a0, jint a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_9127f23cedcce237, a0.this$, a1)) {}

      FieldArrayDictionary::FieldArrayDictionary(const ::org::hipparchus::Field & a0, const ::java::util::Map & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_07915b48270dec6b, a0.this$, a1.this$)) {}

      void FieldArrayDictionary::clear() const
      {
        env->callVoidMethod(this$, mids$[mid_clear_a1fa5dae97ea5ed2]);
      }

      JArray< ::org::hipparchus::CalculusFieldElement > FieldArrayDictionary::get$(const ::java::lang::String & a0) const
      {
        return JArray< ::org::hipparchus::CalculusFieldElement >(env->callObjectMethod(this$, mids$[mid_get_f25dcdbfa4b24501], a0.this$));
      }

      ::java::util::List FieldArrayDictionary::getData() const
      {
        return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getData_e62d3bb06d56d7e3]));
      }

      ::org::orekit::utils::FieldArrayDictionary$Entry FieldArrayDictionary::getEntry(const ::java::lang::String & a0) const
      {
        return ::org::orekit::utils::FieldArrayDictionary$Entry(env->callObjectMethod(this$, mids$[mid_getEntry_bf08c4a3bb93e7cd], a0.this$));
      }

      ::org::hipparchus::Field FieldArrayDictionary::getField() const
      {
        return ::org::hipparchus::Field(env->callObjectMethod(this$, mids$[mid_getField_04d1f63e17d5c5d4]));
      }

      void FieldArrayDictionary::put(const ::java::lang::String & a0, const JArray< jdouble > & a1) const
      {
        env->callVoidMethod(this$, mids$[mid_put_6fb36758267c5870], a0.this$, a1.this$);
      }

      void FieldArrayDictionary::put(const ::java::lang::String & a0, const JArray< ::org::hipparchus::CalculusFieldElement > & a1) const
      {
        env->callVoidMethod(this$, mids$[mid_put_0090afa924af0a2d], a0.this$, a1.this$);
      }

      void FieldArrayDictionary::putAll(const FieldArrayDictionary & a0) const
      {
        env->callVoidMethod(this$, mids$[mid_putAll_acb615aad9f2aad9], a0.this$);
      }

      void FieldArrayDictionary::putAll(const ::java::util::Map & a0) const
      {
        env->callVoidMethod(this$, mids$[mid_putAll_6648520b18d8ef1d], a0.this$);
      }

      jboolean FieldArrayDictionary::remove(const ::java::lang::String & a0) const
      {
        return env->callBooleanMethod(this$, mids$[mid_remove_cde6b28e15c96b75], a0.this$);
      }

      jint FieldArrayDictionary::size() const
      {
        return env->callIntMethod(this$, mids$[mid_size_55546ef6a647f39b]);
      }

      ::java::util::Map FieldArrayDictionary::toMap() const
      {
        return ::java::util::Map(env->callObjectMethod(this$, mids$[mid_toMap_810bed48fafb0b9a]));
      }

      ::java::lang::String FieldArrayDictionary::toString() const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_1c1fa1e935d6cdcf]));
      }

      FieldArrayDictionary FieldArrayDictionary::unmodifiableView() const
      {
        return FieldArrayDictionary(env->callObjectMethod(this$, mids$[mid_unmodifiableView_7c5d47860532e9d9]));
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
      static PyObject *t_FieldArrayDictionary_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldArrayDictionary_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldArrayDictionary_of_(t_FieldArrayDictionary *self, PyObject *args);
      static int t_FieldArrayDictionary_init_(t_FieldArrayDictionary *self, PyObject *args, PyObject *kwds);
      static PyObject *t_FieldArrayDictionary_clear(t_FieldArrayDictionary *self);
      static PyObject *t_FieldArrayDictionary_get(t_FieldArrayDictionary *self, PyObject *arg);
      static PyObject *t_FieldArrayDictionary_getData(t_FieldArrayDictionary *self);
      static PyObject *t_FieldArrayDictionary_getEntry(t_FieldArrayDictionary *self, PyObject *arg);
      static PyObject *t_FieldArrayDictionary_getField(t_FieldArrayDictionary *self);
      static PyObject *t_FieldArrayDictionary_put(t_FieldArrayDictionary *self, PyObject *args);
      static PyObject *t_FieldArrayDictionary_putAll(t_FieldArrayDictionary *self, PyObject *args);
      static PyObject *t_FieldArrayDictionary_remove(t_FieldArrayDictionary *self, PyObject *arg);
      static PyObject *t_FieldArrayDictionary_size(t_FieldArrayDictionary *self);
      static PyObject *t_FieldArrayDictionary_toMap(t_FieldArrayDictionary *self);
      static PyObject *t_FieldArrayDictionary_toString(t_FieldArrayDictionary *self, PyObject *args);
      static PyObject *t_FieldArrayDictionary_unmodifiableView(t_FieldArrayDictionary *self);
      static PyObject *t_FieldArrayDictionary_get__data(t_FieldArrayDictionary *self, void *data);
      static PyObject *t_FieldArrayDictionary_get__field(t_FieldArrayDictionary *self, void *data);
      static PyObject *t_FieldArrayDictionary_get__parameters_(t_FieldArrayDictionary *self, void *data);
      static PyGetSetDef t_FieldArrayDictionary__fields_[] = {
        DECLARE_GET_FIELD(t_FieldArrayDictionary, data),
        DECLARE_GET_FIELD(t_FieldArrayDictionary, field),
        DECLARE_GET_FIELD(t_FieldArrayDictionary, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_FieldArrayDictionary__methods_[] = {
        DECLARE_METHOD(t_FieldArrayDictionary, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldArrayDictionary, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldArrayDictionary, of_, METH_VARARGS),
        DECLARE_METHOD(t_FieldArrayDictionary, clear, METH_NOARGS),
        DECLARE_METHOD(t_FieldArrayDictionary, get, METH_O),
        DECLARE_METHOD(t_FieldArrayDictionary, getData, METH_NOARGS),
        DECLARE_METHOD(t_FieldArrayDictionary, getEntry, METH_O),
        DECLARE_METHOD(t_FieldArrayDictionary, getField, METH_NOARGS),
        DECLARE_METHOD(t_FieldArrayDictionary, put, METH_VARARGS),
        DECLARE_METHOD(t_FieldArrayDictionary, putAll, METH_VARARGS),
        DECLARE_METHOD(t_FieldArrayDictionary, remove, METH_O),
        DECLARE_METHOD(t_FieldArrayDictionary, size, METH_NOARGS),
        DECLARE_METHOD(t_FieldArrayDictionary, toMap, METH_NOARGS),
        DECLARE_METHOD(t_FieldArrayDictionary, toString, METH_VARARGS),
        DECLARE_METHOD(t_FieldArrayDictionary, unmodifiableView, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(FieldArrayDictionary)[] = {
        { Py_tp_methods, t_FieldArrayDictionary__methods_ },
        { Py_tp_init, (void *) t_FieldArrayDictionary_init_ },
        { Py_tp_getset, t_FieldArrayDictionary__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(FieldArrayDictionary)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(FieldArrayDictionary, t_FieldArrayDictionary, FieldArrayDictionary);
      PyObject *t_FieldArrayDictionary::wrap_Object(const FieldArrayDictionary& object, PyTypeObject *p0)
      {
        PyObject *obj = t_FieldArrayDictionary::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_FieldArrayDictionary *self = (t_FieldArrayDictionary *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_FieldArrayDictionary::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_FieldArrayDictionary::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_FieldArrayDictionary *self = (t_FieldArrayDictionary *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_FieldArrayDictionary::install(PyObject *module)
      {
        installType(&PY_TYPE(FieldArrayDictionary), &PY_TYPE_DEF(FieldArrayDictionary), module, "FieldArrayDictionary", 0);
      }

      void t_FieldArrayDictionary::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldArrayDictionary), "class_", make_descriptor(FieldArrayDictionary::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldArrayDictionary), "wrapfn_", make_descriptor(t_FieldArrayDictionary::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldArrayDictionary), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_FieldArrayDictionary_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, FieldArrayDictionary::initializeClass, 1)))
          return NULL;
        return t_FieldArrayDictionary::wrap_Object(FieldArrayDictionary(((t_FieldArrayDictionary *) arg)->object.this$));
      }
      static PyObject *t_FieldArrayDictionary_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, FieldArrayDictionary::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_FieldArrayDictionary_of_(t_FieldArrayDictionary *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static int t_FieldArrayDictionary_init_(t_FieldArrayDictionary *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::hipparchus::Field a0((jobject) NULL);
            PyTypeObject **p0;
            FieldArrayDictionary object((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::Field::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_))
            {
              INT_CALL(object = FieldArrayDictionary(a0));
              self->object = object;
              break;
            }
          }
          goto err;
         case 2:
          {
            ::org::hipparchus::Field a0((jobject) NULL);
            PyTypeObject **p0;
            jint a1;
            FieldArrayDictionary object((jobject) NULL);

            if (!parseArgs(args, "KI", ::org::hipparchus::Field::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1))
            {
              INT_CALL(object = FieldArrayDictionary(a0, a1));
              self->object = object;
              break;
            }
          }
          {
            ::org::hipparchus::Field a0((jobject) NULL);
            PyTypeObject **p0;
            ::java::util::Map a1((jobject) NULL);
            PyTypeObject **p1;
            FieldArrayDictionary object((jobject) NULL);

            if (!parseArgs(args, "KK", ::org::hipparchus::Field::initializeClass, ::java::util::Map::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1, &p1, ::java::util::t_Map::parameters_))
            {
              INT_CALL(object = FieldArrayDictionary(a0, a1));
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

      static PyObject *t_FieldArrayDictionary_clear(t_FieldArrayDictionary *self)
      {
        OBJ_CALL(self->object.clear());
        Py_RETURN_NONE;
      }

      static PyObject *t_FieldArrayDictionary_get(t_FieldArrayDictionary *self, PyObject *arg)
      {
        ::java::lang::String a0((jobject) NULL);
        JArray< ::org::hipparchus::CalculusFieldElement > result((jobject) NULL);

        if (!parseArg(arg, "s", &a0))
        {
          OBJ_CALL(result = self->object.get$(a0));
          return JArray<jobject>(result.this$).wrap(::org::hipparchus::t_CalculusFieldElement::wrap_jobject);
        }

        PyErr_SetArgsError((PyObject *) self, "get", arg);
        return NULL;
      }

      static PyObject *t_FieldArrayDictionary_getData(t_FieldArrayDictionary *self)
      {
        ::java::util::List result((jobject) NULL);
        OBJ_CALL(result = self->object.getData());
        return ::java::util::t_List::wrap_Object(result);
      }

      static PyObject *t_FieldArrayDictionary_getEntry(t_FieldArrayDictionary *self, PyObject *arg)
      {
        ::java::lang::String a0((jobject) NULL);
        ::org::orekit::utils::FieldArrayDictionary$Entry result((jobject) NULL);

        if (!parseArg(arg, "s", &a0))
        {
          OBJ_CALL(result = self->object.getEntry(a0));
          return ::org::orekit::utils::t_FieldArrayDictionary$Entry::wrap_Object(result, self->parameters[0]);
        }

        PyErr_SetArgsError((PyObject *) self, "getEntry", arg);
        return NULL;
      }

      static PyObject *t_FieldArrayDictionary_getField(t_FieldArrayDictionary *self)
      {
        ::org::hipparchus::Field result((jobject) NULL);
        OBJ_CALL(result = self->object.getField());
        return ::org::hipparchus::t_Field::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_FieldArrayDictionary_put(t_FieldArrayDictionary *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 2:
          {
            ::java::lang::String a0((jobject) NULL);
            JArray< jdouble > a1((jobject) NULL);

            if (!parseArgs(args, "s[D", &a0, &a1))
            {
              OBJ_CALL(self->object.put(a0, a1));
              Py_RETURN_NONE;
            }
          }
          {
            ::java::lang::String a0((jobject) NULL);
            JArray< ::org::hipparchus::CalculusFieldElement > a1((jobject) NULL);
            PyTypeObject **p1;

            if (!parseArgs(args, "s[K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_))
            {
              OBJ_CALL(self->object.put(a0, a1));
              Py_RETURN_NONE;
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "put", args);
        return NULL;
      }

      static PyObject *t_FieldArrayDictionary_putAll(t_FieldArrayDictionary *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            FieldArrayDictionary a0((jobject) NULL);
            PyTypeObject **p0;

            if (!parseArgs(args, "K", FieldArrayDictionary::initializeClass, &a0, &p0, t_FieldArrayDictionary::parameters_))
            {
              OBJ_CALL(self->object.putAll(a0));
              Py_RETURN_NONE;
            }
          }
          {
            ::java::util::Map a0((jobject) NULL);
            PyTypeObject **p0;

            if (!parseArgs(args, "K", ::java::util::Map::initializeClass, &a0, &p0, ::java::util::t_Map::parameters_))
            {
              OBJ_CALL(self->object.putAll(a0));
              Py_RETURN_NONE;
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "putAll", args);
        return NULL;
      }

      static PyObject *t_FieldArrayDictionary_remove(t_FieldArrayDictionary *self, PyObject *arg)
      {
        ::java::lang::String a0((jobject) NULL);
        jboolean result;

        if (!parseArg(arg, "s", &a0))
        {
          OBJ_CALL(result = self->object.remove(a0));
          Py_RETURN_BOOL(result);
        }

        PyErr_SetArgsError((PyObject *) self, "remove", arg);
        return NULL;
      }

      static PyObject *t_FieldArrayDictionary_size(t_FieldArrayDictionary *self)
      {
        jint result;
        OBJ_CALL(result = self->object.size());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_FieldArrayDictionary_toMap(t_FieldArrayDictionary *self)
      {
        ::java::util::Map result((jobject) NULL);
        OBJ_CALL(result = self->object.toMap());
        return ::java::util::t_Map::wrap_Object(result);
      }

      static PyObject *t_FieldArrayDictionary_toString(t_FieldArrayDictionary *self, PyObject *args)
      {
        ::java::lang::String result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.toString());
          return j2p(result);
        }

        return callSuper(PY_TYPE(FieldArrayDictionary), (PyObject *) self, "toString", args, 2);
      }

      static PyObject *t_FieldArrayDictionary_unmodifiableView(t_FieldArrayDictionary *self)
      {
        FieldArrayDictionary result((jobject) NULL);
        OBJ_CALL(result = self->object.unmodifiableView());
        return t_FieldArrayDictionary::wrap_Object(result, self->parameters[0]);
      }
      static PyObject *t_FieldArrayDictionary_get__parameters_(t_FieldArrayDictionary *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }

      static PyObject *t_FieldArrayDictionary_get__data(t_FieldArrayDictionary *self, void *data)
      {
        ::java::util::List value((jobject) NULL);
        OBJ_CALL(value = self->object.getData());
        return ::java::util::t_List::wrap_Object(value);
      }

      static PyObject *t_FieldArrayDictionary_get__field(t_FieldArrayDictionary *self, void *data)
      {
        ::org::hipparchus::Field value((jobject) NULL);
        OBJ_CALL(value = self->object.getField());
        return ::org::hipparchus::t_Field::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/special/elliptic/jacobi/FieldCopolarN.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace special {
      namespace elliptic {
        namespace jacobi {

          ::java::lang::Class *FieldCopolarN::class$ = NULL;
          jmethodID *FieldCopolarN::mids$ = NULL;
          bool FieldCopolarN::live$ = false;

          jclass FieldCopolarN::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/hipparchus/special/elliptic/jacobi/FieldCopolarN");

              mids$ = new jmethodID[max_mid];
              mids$[mid_cn_81520b552cb3fa26] = env->getMethodID(cls, "cn", "()Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_dn_81520b552cb3fa26] = env->getMethodID(cls, "dn", "()Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_sn_81520b552cb3fa26] = env->getMethodID(cls, "sn", "()Lorg/hipparchus/CalculusFieldElement;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          ::org::hipparchus::CalculusFieldElement FieldCopolarN::cn() const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_cn_81520b552cb3fa26]));
          }

          ::org::hipparchus::CalculusFieldElement FieldCopolarN::dn() const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_dn_81520b552cb3fa26]));
          }

          ::org::hipparchus::CalculusFieldElement FieldCopolarN::sn() const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_sn_81520b552cb3fa26]));
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
    namespace special {
      namespace elliptic {
        namespace jacobi {
          static PyObject *t_FieldCopolarN_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_FieldCopolarN_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_FieldCopolarN_of_(t_FieldCopolarN *self, PyObject *args);
          static PyObject *t_FieldCopolarN_cn(t_FieldCopolarN *self);
          static PyObject *t_FieldCopolarN_dn(t_FieldCopolarN *self);
          static PyObject *t_FieldCopolarN_sn(t_FieldCopolarN *self);
          static PyObject *t_FieldCopolarN_get__parameters_(t_FieldCopolarN *self, void *data);
          static PyGetSetDef t_FieldCopolarN__fields_[] = {
            DECLARE_GET_FIELD(t_FieldCopolarN, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_FieldCopolarN__methods_[] = {
            DECLARE_METHOD(t_FieldCopolarN, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_FieldCopolarN, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_FieldCopolarN, of_, METH_VARARGS),
            DECLARE_METHOD(t_FieldCopolarN, cn, METH_NOARGS),
            DECLARE_METHOD(t_FieldCopolarN, dn, METH_NOARGS),
            DECLARE_METHOD(t_FieldCopolarN, sn, METH_NOARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(FieldCopolarN)[] = {
            { Py_tp_methods, t_FieldCopolarN__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { Py_tp_getset, t_FieldCopolarN__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(FieldCopolarN)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(FieldCopolarN, t_FieldCopolarN, FieldCopolarN);
          PyObject *t_FieldCopolarN::wrap_Object(const FieldCopolarN& object, PyTypeObject *p0)
          {
            PyObject *obj = t_FieldCopolarN::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_FieldCopolarN *self = (t_FieldCopolarN *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          PyObject *t_FieldCopolarN::wrap_jobject(const jobject& object, PyTypeObject *p0)
          {
            PyObject *obj = t_FieldCopolarN::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_FieldCopolarN *self = (t_FieldCopolarN *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          void t_FieldCopolarN::install(PyObject *module)
          {
            installType(&PY_TYPE(FieldCopolarN), &PY_TYPE_DEF(FieldCopolarN), module, "FieldCopolarN", 0);
          }

          void t_FieldCopolarN::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(FieldCopolarN), "class_", make_descriptor(FieldCopolarN::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(FieldCopolarN), "wrapfn_", make_descriptor(t_FieldCopolarN::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(FieldCopolarN), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_FieldCopolarN_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, FieldCopolarN::initializeClass, 1)))
              return NULL;
            return t_FieldCopolarN::wrap_Object(FieldCopolarN(((t_FieldCopolarN *) arg)->object.this$));
          }
          static PyObject *t_FieldCopolarN_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, FieldCopolarN::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_FieldCopolarN_of_(t_FieldCopolarN *self, PyObject *args)
          {
            if (!parseArg(args, "T", 1, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static PyObject *t_FieldCopolarN_cn(t_FieldCopolarN *self)
          {
            ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
            OBJ_CALL(result = self->object.cn());
            return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
          }

          static PyObject *t_FieldCopolarN_dn(t_FieldCopolarN *self)
          {
            ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
            OBJ_CALL(result = self->object.dn());
            return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
          }

          static PyObject *t_FieldCopolarN_sn(t_FieldCopolarN *self)
          {
            ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
            OBJ_CALL(result = self->object.sn());
            return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
          }
          static PyObject *t_FieldCopolarN_get__parameters_(t_FieldCopolarN *self, void *data)
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
#include "org/orekit/estimation/measurements/modifiers/DynamicOutlierFilter.h"
#include "org/orekit/estimation/measurements/EstimatedMeasurement.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace modifiers {

          ::java::lang::Class *DynamicOutlierFilter::class$ = NULL;
          jmethodID *DynamicOutlierFilter::mids$ = NULL;
          bool DynamicOutlierFilter::live$ = false;

          jclass DynamicOutlierFilter::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/modifiers/DynamicOutlierFilter");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_d5322b8b512aeb26] = env->getMethodID(cls, "<init>", "(ID)V");
              mids$[mid_getSigma_25e1757a36c4dde2] = env->getMethodID(cls, "getSigma", "()[D");
              mids$[mid_modify_f784f7724d44a90a] = env->getMethodID(cls, "modify", "(Lorg/orekit/estimation/measurements/EstimatedMeasurement;)V");
              mids$[mid_setSigma_ab69da052b88f50c] = env->getMethodID(cls, "setSigma", "([D)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          DynamicOutlierFilter::DynamicOutlierFilter(jint a0, jdouble a1) : ::org::orekit::estimation::measurements::modifiers::OutlierFilter(env->newObject(initializeClass, &mids$, mid_init$_d5322b8b512aeb26, a0, a1)) {}

          JArray< jdouble > DynamicOutlierFilter::getSigma() const
          {
            return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getSigma_25e1757a36c4dde2]));
          }

          void DynamicOutlierFilter::modify(const ::org::orekit::estimation::measurements::EstimatedMeasurement & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_modify_f784f7724d44a90a], a0.this$);
          }

          void DynamicOutlierFilter::setSigma(const JArray< jdouble > & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setSigma_ab69da052b88f50c], a0.this$);
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
          static PyObject *t_DynamicOutlierFilter_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_DynamicOutlierFilter_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_DynamicOutlierFilter_of_(t_DynamicOutlierFilter *self, PyObject *args);
          static int t_DynamicOutlierFilter_init_(t_DynamicOutlierFilter *self, PyObject *args, PyObject *kwds);
          static PyObject *t_DynamicOutlierFilter_getSigma(t_DynamicOutlierFilter *self);
          static PyObject *t_DynamicOutlierFilter_modify(t_DynamicOutlierFilter *self, PyObject *args);
          static PyObject *t_DynamicOutlierFilter_setSigma(t_DynamicOutlierFilter *self, PyObject *arg);
          static PyObject *t_DynamicOutlierFilter_get__sigma(t_DynamicOutlierFilter *self, void *data);
          static int t_DynamicOutlierFilter_set__sigma(t_DynamicOutlierFilter *self, PyObject *arg, void *data);
          static PyObject *t_DynamicOutlierFilter_get__parameters_(t_DynamicOutlierFilter *self, void *data);
          static PyGetSetDef t_DynamicOutlierFilter__fields_[] = {
            DECLARE_GETSET_FIELD(t_DynamicOutlierFilter, sigma),
            DECLARE_GET_FIELD(t_DynamicOutlierFilter, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_DynamicOutlierFilter__methods_[] = {
            DECLARE_METHOD(t_DynamicOutlierFilter, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_DynamicOutlierFilter, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_DynamicOutlierFilter, of_, METH_VARARGS),
            DECLARE_METHOD(t_DynamicOutlierFilter, getSigma, METH_NOARGS),
            DECLARE_METHOD(t_DynamicOutlierFilter, modify, METH_VARARGS),
            DECLARE_METHOD(t_DynamicOutlierFilter, setSigma, METH_O),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(DynamicOutlierFilter)[] = {
            { Py_tp_methods, t_DynamicOutlierFilter__methods_ },
            { Py_tp_init, (void *) t_DynamicOutlierFilter_init_ },
            { Py_tp_getset, t_DynamicOutlierFilter__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(DynamicOutlierFilter)[] = {
            &PY_TYPE_DEF(::org::orekit::estimation::measurements::modifiers::OutlierFilter),
            NULL
          };

          DEFINE_TYPE(DynamicOutlierFilter, t_DynamicOutlierFilter, DynamicOutlierFilter);
          PyObject *t_DynamicOutlierFilter::wrap_Object(const DynamicOutlierFilter& object, PyTypeObject *p0)
          {
            PyObject *obj = t_DynamicOutlierFilter::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_DynamicOutlierFilter *self = (t_DynamicOutlierFilter *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          PyObject *t_DynamicOutlierFilter::wrap_jobject(const jobject& object, PyTypeObject *p0)
          {
            PyObject *obj = t_DynamicOutlierFilter::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_DynamicOutlierFilter *self = (t_DynamicOutlierFilter *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          void t_DynamicOutlierFilter::install(PyObject *module)
          {
            installType(&PY_TYPE(DynamicOutlierFilter), &PY_TYPE_DEF(DynamicOutlierFilter), module, "DynamicOutlierFilter", 0);
          }

          void t_DynamicOutlierFilter::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(DynamicOutlierFilter), "class_", make_descriptor(DynamicOutlierFilter::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(DynamicOutlierFilter), "wrapfn_", make_descriptor(t_DynamicOutlierFilter::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(DynamicOutlierFilter), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_DynamicOutlierFilter_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, DynamicOutlierFilter::initializeClass, 1)))
              return NULL;
            return t_DynamicOutlierFilter::wrap_Object(DynamicOutlierFilter(((t_DynamicOutlierFilter *) arg)->object.this$));
          }
          static PyObject *t_DynamicOutlierFilter_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, DynamicOutlierFilter::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_DynamicOutlierFilter_of_(t_DynamicOutlierFilter *self, PyObject *args)
          {
            if (!parseArg(args, "T", 1, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static int t_DynamicOutlierFilter_init_(t_DynamicOutlierFilter *self, PyObject *args, PyObject *kwds)
          {
            jint a0;
            jdouble a1;
            DynamicOutlierFilter object((jobject) NULL);

            if (!parseArgs(args, "ID", &a0, &a1))
            {
              INT_CALL(object = DynamicOutlierFilter(a0, a1));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_DynamicOutlierFilter_getSigma(t_DynamicOutlierFilter *self)
          {
            JArray< jdouble > result((jobject) NULL);
            OBJ_CALL(result = self->object.getSigma());
            return result.wrap();
          }

          static PyObject *t_DynamicOutlierFilter_modify(t_DynamicOutlierFilter *self, PyObject *args)
          {
            ::org::orekit::estimation::measurements::EstimatedMeasurement a0((jobject) NULL);
            PyTypeObject **p0;

            if (!parseArgs(args, "K", ::org::orekit::estimation::measurements::EstimatedMeasurement::initializeClass, &a0, &p0, ::org::orekit::estimation::measurements::t_EstimatedMeasurement::parameters_))
            {
              OBJ_CALL(self->object.modify(a0));
              Py_RETURN_NONE;
            }

            return callSuper(PY_TYPE(DynamicOutlierFilter), (PyObject *) self, "modify", args, 2);
          }

          static PyObject *t_DynamicOutlierFilter_setSigma(t_DynamicOutlierFilter *self, PyObject *arg)
          {
            JArray< jdouble > a0((jobject) NULL);

            if (!parseArg(arg, "[D", &a0))
            {
              OBJ_CALL(self->object.setSigma(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setSigma", arg);
            return NULL;
          }
          static PyObject *t_DynamicOutlierFilter_get__parameters_(t_DynamicOutlierFilter *self, void *data)
          {
            return typeParameters(self->parameters, sizeof(self->parameters));
          }

          static PyObject *t_DynamicOutlierFilter_get__sigma(t_DynamicOutlierFilter *self, void *data)
          {
            JArray< jdouble > value((jobject) NULL);
            OBJ_CALL(value = self->object.getSigma());
            return value.wrap();
          }
          static int t_DynamicOutlierFilter_set__sigma(t_DynamicOutlierFilter *self, PyObject *arg, void *data)
          {
            {
              JArray< jdouble > value((jobject) NULL);
              if (!parseArg(arg, "[D", &value))
              {
                INT_CALL(self->object.setSigma(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "sigma", arg);
            return -1;
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/random/UncorrelatedRandomVectorGenerator.h"
#include "org/hipparchus/random/RandomVectorGenerator.h"
#include "org/hipparchus/random/NormalizedRandomGenerator.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace random {

      ::java::lang::Class *UncorrelatedRandomVectorGenerator::class$ = NULL;
      jmethodID *UncorrelatedRandomVectorGenerator::mids$ = NULL;
      bool UncorrelatedRandomVectorGenerator::live$ = false;

      jclass UncorrelatedRandomVectorGenerator::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/random/UncorrelatedRandomVectorGenerator");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_fcdca7d25ee46770] = env->getMethodID(cls, "<init>", "(ILorg/hipparchus/random/NormalizedRandomGenerator;)V");
          mids$[mid_init$_6227cdf98fbe4b91] = env->getMethodID(cls, "<init>", "([D[DLorg/hipparchus/random/NormalizedRandomGenerator;)V");
          mids$[mid_nextVector_25e1757a36c4dde2] = env->getMethodID(cls, "nextVector", "()[D");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      UncorrelatedRandomVectorGenerator::UncorrelatedRandomVectorGenerator(jint a0, const ::org::hipparchus::random::NormalizedRandomGenerator & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_fcdca7d25ee46770, a0, a1.this$)) {}

      UncorrelatedRandomVectorGenerator::UncorrelatedRandomVectorGenerator(const JArray< jdouble > & a0, const JArray< jdouble > & a1, const ::org::hipparchus::random::NormalizedRandomGenerator & a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_6227cdf98fbe4b91, a0.this$, a1.this$, a2.this$)) {}

      JArray< jdouble > UncorrelatedRandomVectorGenerator::nextVector() const
      {
        return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_nextVector_25e1757a36c4dde2]));
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace hipparchus {
    namespace random {
      static PyObject *t_UncorrelatedRandomVectorGenerator_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_UncorrelatedRandomVectorGenerator_instance_(PyTypeObject *type, PyObject *arg);
      static int t_UncorrelatedRandomVectorGenerator_init_(t_UncorrelatedRandomVectorGenerator *self, PyObject *args, PyObject *kwds);
      static PyObject *t_UncorrelatedRandomVectorGenerator_nextVector(t_UncorrelatedRandomVectorGenerator *self);

      static PyMethodDef t_UncorrelatedRandomVectorGenerator__methods_[] = {
        DECLARE_METHOD(t_UncorrelatedRandomVectorGenerator, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_UncorrelatedRandomVectorGenerator, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_UncorrelatedRandomVectorGenerator, nextVector, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(UncorrelatedRandomVectorGenerator)[] = {
        { Py_tp_methods, t_UncorrelatedRandomVectorGenerator__methods_ },
        { Py_tp_init, (void *) t_UncorrelatedRandomVectorGenerator_init_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(UncorrelatedRandomVectorGenerator)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(UncorrelatedRandomVectorGenerator, t_UncorrelatedRandomVectorGenerator, UncorrelatedRandomVectorGenerator);

      void t_UncorrelatedRandomVectorGenerator::install(PyObject *module)
      {
        installType(&PY_TYPE(UncorrelatedRandomVectorGenerator), &PY_TYPE_DEF(UncorrelatedRandomVectorGenerator), module, "UncorrelatedRandomVectorGenerator", 0);
      }

      void t_UncorrelatedRandomVectorGenerator::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(UncorrelatedRandomVectorGenerator), "class_", make_descriptor(UncorrelatedRandomVectorGenerator::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(UncorrelatedRandomVectorGenerator), "wrapfn_", make_descriptor(t_UncorrelatedRandomVectorGenerator::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(UncorrelatedRandomVectorGenerator), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_UncorrelatedRandomVectorGenerator_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, UncorrelatedRandomVectorGenerator::initializeClass, 1)))
          return NULL;
        return t_UncorrelatedRandomVectorGenerator::wrap_Object(UncorrelatedRandomVectorGenerator(((t_UncorrelatedRandomVectorGenerator *) arg)->object.this$));
      }
      static PyObject *t_UncorrelatedRandomVectorGenerator_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, UncorrelatedRandomVectorGenerator::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_UncorrelatedRandomVectorGenerator_init_(t_UncorrelatedRandomVectorGenerator *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 2:
          {
            jint a0;
            ::org::hipparchus::random::NormalizedRandomGenerator a1((jobject) NULL);
            UncorrelatedRandomVectorGenerator object((jobject) NULL);

            if (!parseArgs(args, "Ik", ::org::hipparchus::random::NormalizedRandomGenerator::initializeClass, &a0, &a1))
            {
              INT_CALL(object = UncorrelatedRandomVectorGenerator(a0, a1));
              self->object = object;
              break;
            }
          }
          goto err;
         case 3:
          {
            JArray< jdouble > a0((jobject) NULL);
            JArray< jdouble > a1((jobject) NULL);
            ::org::hipparchus::random::NormalizedRandomGenerator a2((jobject) NULL);
            UncorrelatedRandomVectorGenerator object((jobject) NULL);

            if (!parseArgs(args, "[D[Dk", ::org::hipparchus::random::NormalizedRandomGenerator::initializeClass, &a0, &a1, &a2))
            {
              INT_CALL(object = UncorrelatedRandomVectorGenerator(a0, a1, a2));
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

      static PyObject *t_UncorrelatedRandomVectorGenerator_nextVector(t_UncorrelatedRandomVectorGenerator *self)
      {
        JArray< jdouble > result((jobject) NULL);
        OBJ_CALL(result = self->object.nextVector());
        return result.wrap();
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/semianalytical/dsst/forces/DSSTZonal.h"
#include "org/orekit/attitudes/AttitudeProvider.h"
#include "java/util/List.h"
#include "org/orekit/propagation/semianalytical/dsst/forces/FieldShortPeriodTerms.h"
#include "org/orekit/propagation/semianalytical/dsst/forces/DSSTForceModel.h"
#include "org/orekit/propagation/PropagationType.h"
#include "org/orekit/forces/gravity/potential/UnnormalizedSphericalHarmonicsProvider.h"
#include "org/hipparchus/CalculusFieldElement.h"
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

            ::java::lang::Class *DSSTZonal::class$ = NULL;
            jmethodID *DSSTZonal::mids$ = NULL;
            bool DSSTZonal::live$ = false;
            ::java::lang::String *DSSTZonal::SHORT_PERIOD_PREFIX = NULL;

            jclass DSSTZonal::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/propagation/semianalytical/dsst/forces/DSSTZonal");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_daf08711fd84cb1b] = env->getMethodID(cls, "<init>", "(Lorg/orekit/forces/gravity/potential/UnnormalizedSphericalHarmonicsProvider;)V");
                mids$[mid_init$_b37c5f576e1269fd] = env->getMethodID(cls, "<init>", "(Lorg/orekit/forces/gravity/potential/UnnormalizedSphericalHarmonicsProvider;III)V");
                mids$[mid_getMeanElementRate_7d3eb19aa1e75a63] = env->getMethodID(cls, "getMeanElementRate", "(Lorg/orekit/propagation/FieldSpacecraftState;Lorg/orekit/propagation/semianalytical/dsst/utilities/FieldAuxiliaryElements;[Lorg/hipparchus/CalculusFieldElement;)[Lorg/hipparchus/CalculusFieldElement;");
                mids$[mid_getMeanElementRate_0483a0f94731abef] = env->getMethodID(cls, "getMeanElementRate", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/propagation/semianalytical/dsst/utilities/AuxiliaryElements;[D)[D");
                mids$[mid_getParametersDrivers_e62d3bb06d56d7e3] = env->getMethodID(cls, "getParametersDrivers", "()Ljava/util/List;");
                mids$[mid_getProvider_35acea483e82034d] = env->getMethodID(cls, "getProvider", "()Lorg/orekit/forces/gravity/potential/UnnormalizedSphericalHarmonicsProvider;");
                mids$[mid_initializeShortPeriodTerms_6fb0c582e8925f89] = env->getMethodID(cls, "initializeShortPeriodTerms", "(Lorg/orekit/propagation/semianalytical/dsst/utilities/AuxiliaryElements;Lorg/orekit/propagation/PropagationType;[D)Ljava/util/List;");
                mids$[mid_initializeShortPeriodTerms_3144241334d46411] = env->getMethodID(cls, "initializeShortPeriodTerms", "(Lorg/orekit/propagation/semianalytical/dsst/utilities/FieldAuxiliaryElements;Lorg/orekit/propagation/PropagationType;[Lorg/hipparchus/CalculusFieldElement;)Ljava/util/List;");
                mids$[mid_registerAttitudeProvider_8e4d3ea100bc0095] = env->getMethodID(cls, "registerAttitudeProvider", "(Lorg/orekit/attitudes/AttitudeProvider;)V");
                mids$[mid_updateShortPeriodTerms_62f1ad39eb6f1276] = env->getMethodID(cls, "updateShortPeriodTerms", "([Lorg/hipparchus/CalculusFieldElement;[Lorg/orekit/propagation/FieldSpacecraftState;)V");
                mids$[mid_updateShortPeriodTerms_5401e749436ec3b7] = env->getMethodID(cls, "updateShortPeriodTerms", "([D[Lorg/orekit/propagation/SpacecraftState;)V");

                class$ = new ::java::lang::Class(cls);
                cls = (jclass) class$->this$;

                SHORT_PERIOD_PREFIX = new ::java::lang::String(env->getStaticObjectField(cls, "SHORT_PERIOD_PREFIX", "Ljava/lang/String;"));
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            DSSTZonal::DSSTZonal(const ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_daf08711fd84cb1b, a0.this$)) {}

            DSSTZonal::DSSTZonal(const ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider & a0, jint a1, jint a2, jint a3) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_b37c5f576e1269fd, a0.this$, a1, a2, a3)) {}

            JArray< ::org::hipparchus::CalculusFieldElement > DSSTZonal::getMeanElementRate(const ::org::orekit::propagation::FieldSpacecraftState & a0, const ::org::orekit::propagation::semianalytical::dsst::utilities::FieldAuxiliaryElements & a1, const JArray< ::org::hipparchus::CalculusFieldElement > & a2) const
            {
              return JArray< ::org::hipparchus::CalculusFieldElement >(env->callObjectMethod(this$, mids$[mid_getMeanElementRate_7d3eb19aa1e75a63], a0.this$, a1.this$, a2.this$));
            }

            JArray< jdouble > DSSTZonal::getMeanElementRate(const ::org::orekit::propagation::SpacecraftState & a0, const ::org::orekit::propagation::semianalytical::dsst::utilities::AuxiliaryElements & a1, const JArray< jdouble > & a2) const
            {
              return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getMeanElementRate_0483a0f94731abef], a0.this$, a1.this$, a2.this$));
            }

            ::java::util::List DSSTZonal::getParametersDrivers() const
            {
              return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getParametersDrivers_e62d3bb06d56d7e3]));
            }

            ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider DSSTZonal::getProvider() const
            {
              return ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider(env->callObjectMethod(this$, mids$[mid_getProvider_35acea483e82034d]));
            }

            ::java::util::List DSSTZonal::initializeShortPeriodTerms(const ::org::orekit::propagation::semianalytical::dsst::utilities::AuxiliaryElements & a0, const ::org::orekit::propagation::PropagationType & a1, const JArray< jdouble > & a2) const
            {
              return ::java::util::List(env->callObjectMethod(this$, mids$[mid_initializeShortPeriodTerms_6fb0c582e8925f89], a0.this$, a1.this$, a2.this$));
            }

            ::java::util::List DSSTZonal::initializeShortPeriodTerms(const ::org::orekit::propagation::semianalytical::dsst::utilities::FieldAuxiliaryElements & a0, const ::org::orekit::propagation::PropagationType & a1, const JArray< ::org::hipparchus::CalculusFieldElement > & a2) const
            {
              return ::java::util::List(env->callObjectMethod(this$, mids$[mid_initializeShortPeriodTerms_3144241334d46411], a0.this$, a1.this$, a2.this$));
            }

            void DSSTZonal::registerAttitudeProvider(const ::org::orekit::attitudes::AttitudeProvider & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_registerAttitudeProvider_8e4d3ea100bc0095], a0.this$);
            }

            void DSSTZonal::updateShortPeriodTerms(const JArray< ::org::hipparchus::CalculusFieldElement > & a0, const JArray< ::org::orekit::propagation::FieldSpacecraftState > & a1) const
            {
              env->callVoidMethod(this$, mids$[mid_updateShortPeriodTerms_62f1ad39eb6f1276], a0.this$, a1.this$);
            }

            void DSSTZonal::updateShortPeriodTerms(const JArray< jdouble > & a0, const JArray< ::org::orekit::propagation::SpacecraftState > & a1) const
            {
              env->callVoidMethod(this$, mids$[mid_updateShortPeriodTerms_5401e749436ec3b7], a0.this$, a1.this$);
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
            static PyObject *t_DSSTZonal_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_DSSTZonal_instance_(PyTypeObject *type, PyObject *arg);
            static int t_DSSTZonal_init_(t_DSSTZonal *self, PyObject *args, PyObject *kwds);
            static PyObject *t_DSSTZonal_getMeanElementRate(t_DSSTZonal *self, PyObject *args);
            static PyObject *t_DSSTZonal_getParametersDrivers(t_DSSTZonal *self);
            static PyObject *t_DSSTZonal_getProvider(t_DSSTZonal *self);
            static PyObject *t_DSSTZonal_initializeShortPeriodTerms(t_DSSTZonal *self, PyObject *args);
            static PyObject *t_DSSTZonal_registerAttitudeProvider(t_DSSTZonal *self, PyObject *arg);
            static PyObject *t_DSSTZonal_updateShortPeriodTerms(t_DSSTZonal *self, PyObject *args);
            static PyObject *t_DSSTZonal_get__parametersDrivers(t_DSSTZonal *self, void *data);
            static PyObject *t_DSSTZonal_get__provider(t_DSSTZonal *self, void *data);
            static PyGetSetDef t_DSSTZonal__fields_[] = {
              DECLARE_GET_FIELD(t_DSSTZonal, parametersDrivers),
              DECLARE_GET_FIELD(t_DSSTZonal, provider),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_DSSTZonal__methods_[] = {
              DECLARE_METHOD(t_DSSTZonal, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_DSSTZonal, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_DSSTZonal, getMeanElementRate, METH_VARARGS),
              DECLARE_METHOD(t_DSSTZonal, getParametersDrivers, METH_NOARGS),
              DECLARE_METHOD(t_DSSTZonal, getProvider, METH_NOARGS),
              DECLARE_METHOD(t_DSSTZonal, initializeShortPeriodTerms, METH_VARARGS),
              DECLARE_METHOD(t_DSSTZonal, registerAttitudeProvider, METH_O),
              DECLARE_METHOD(t_DSSTZonal, updateShortPeriodTerms, METH_VARARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(DSSTZonal)[] = {
              { Py_tp_methods, t_DSSTZonal__methods_ },
              { Py_tp_init, (void *) t_DSSTZonal_init_ },
              { Py_tp_getset, t_DSSTZonal__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(DSSTZonal)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(DSSTZonal, t_DSSTZonal, DSSTZonal);

            void t_DSSTZonal::install(PyObject *module)
            {
              installType(&PY_TYPE(DSSTZonal), &PY_TYPE_DEF(DSSTZonal), module, "DSSTZonal", 0);
            }

            void t_DSSTZonal::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(DSSTZonal), "class_", make_descriptor(DSSTZonal::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(DSSTZonal), "wrapfn_", make_descriptor(t_DSSTZonal::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(DSSTZonal), "boxfn_", make_descriptor(boxObject));
              env->getClass(DSSTZonal::initializeClass);
              PyObject_SetAttrString((PyObject *) PY_TYPE(DSSTZonal), "SHORT_PERIOD_PREFIX", make_descriptor(j2p(*DSSTZonal::SHORT_PERIOD_PREFIX)));
            }

            static PyObject *t_DSSTZonal_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, DSSTZonal::initializeClass, 1)))
                return NULL;
              return t_DSSTZonal::wrap_Object(DSSTZonal(((t_DSSTZonal *) arg)->object.this$));
            }
            static PyObject *t_DSSTZonal_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, DSSTZonal::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static int t_DSSTZonal_init_(t_DSSTZonal *self, PyObject *args, PyObject *kwds)
            {
              switch (PyTuple_GET_SIZE(args)) {
               case 1:
                {
                  ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider a0((jobject) NULL);
                  DSSTZonal object((jobject) NULL);

                  if (!parseArgs(args, "k", ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider::initializeClass, &a0))
                  {
                    INT_CALL(object = DSSTZonal(a0));
                    self->object = object;
                    break;
                  }
                }
                goto err;
               case 4:
                {
                  ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider a0((jobject) NULL);
                  jint a1;
                  jint a2;
                  jint a3;
                  DSSTZonal object((jobject) NULL);

                  if (!parseArgs(args, "kIII", ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider::initializeClass, &a0, &a1, &a2, &a3))
                  {
                    INT_CALL(object = DSSTZonal(a0, a1, a2, a3));
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

            static PyObject *t_DSSTZonal_getMeanElementRate(t_DSSTZonal *self, PyObject *args)
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

            static PyObject *t_DSSTZonal_getParametersDrivers(t_DSSTZonal *self)
            {
              ::java::util::List result((jobject) NULL);
              OBJ_CALL(result = self->object.getParametersDrivers());
              return ::java::util::t_List::wrap_Object(result, ::org::orekit::utils::PY_TYPE(ParameterDriver));
            }

            static PyObject *t_DSSTZonal_getProvider(t_DSSTZonal *self)
            {
              ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider result((jobject) NULL);
              OBJ_CALL(result = self->object.getProvider());
              return ::org::orekit::forces::gravity::potential::t_UnnormalizedSphericalHarmonicsProvider::wrap_Object(result);
            }

            static PyObject *t_DSSTZonal_initializeShortPeriodTerms(t_DSSTZonal *self, PyObject *args)
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

            static PyObject *t_DSSTZonal_registerAttitudeProvider(t_DSSTZonal *self, PyObject *arg)
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

            static PyObject *t_DSSTZonal_updateShortPeriodTerms(t_DSSTZonal *self, PyObject *args)
            {
              switch (PyTuple_GET_SIZE(args)) {
               case 2:
                {
                  JArray< jdouble > a0((jobject) NULL);
                  JArray< ::org::orekit::propagation::SpacecraftState > a1((jobject) NULL);

                  if (!parseArgs(args, "[D[k", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0, &a1))
                  {
                    OBJ_CALL(self->object.updateShortPeriodTerms(a0, a1));
                    Py_RETURN_NONE;
                  }
                }
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
              }

              PyErr_SetArgsError((PyObject *) self, "updateShortPeriodTerms", args);
              return NULL;
            }

            static PyObject *t_DSSTZonal_get__parametersDrivers(t_DSSTZonal *self, void *data)
            {
              ::java::util::List value((jobject) NULL);
              OBJ_CALL(value = self->object.getParametersDrivers());
              return ::java::util::t_List::wrap_Object(value);
            }

            static PyObject *t_DSSTZonal_get__provider(t_DSSTZonal *self, void *data)
            {
              ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider value((jobject) NULL);
              OBJ_CALL(value = self->object.getProvider());
              return ::org::orekit::forces::gravity::potential::t_UnnormalizedSphericalHarmonicsProvider::wrap_Object(value);
            }
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/models/earth/atmosphere/JB2008.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "org/orekit/models/earth/atmosphere/Atmosphere.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldVector3D.h"
#include "org/orekit/utils/PVCoordinatesProvider.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/models/earth/atmosphere/JB2008InputParameters.h"
#include "java/lang/Class.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/bodies/BodyShape.h"
#include "org/orekit/time/TimeScale.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace models {
      namespace earth {
        namespace atmosphere {

          ::java::lang::Class *JB2008::class$ = NULL;
          jmethodID *JB2008::mids$ = NULL;
          bool JB2008::live$ = false;

          jclass JB2008::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/models/earth/atmosphere/JB2008");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_ce95f715917b7e8f] = env->getMethodID(cls, "<init>", "(Lorg/orekit/models/earth/atmosphere/JB2008InputParameters;Lorg/orekit/utils/PVCoordinatesProvider;Lorg/orekit/bodies/BodyShape;)V");
              mids$[mid_init$_523c73ffda77d072] = env->getMethodID(cls, "<init>", "(Lorg/orekit/models/earth/atmosphere/JB2008InputParameters;Lorg/orekit/utils/PVCoordinatesProvider;Lorg/orekit/bodies/BodyShape;Lorg/orekit/time/TimeScale;)V");
              mids$[mid_getDensity_e9a4fc2340b58984] = env->getMethodID(cls, "getDensity", "(Lorg/orekit/time/FieldAbsoluteDate;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;Lorg/orekit/frames/Frame;)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_getDensity_58866e32a1c9318b] = env->getMethodID(cls, "getDensity", "(Lorg/orekit/time/AbsoluteDate;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/orekit/frames/Frame;)D");
              mids$[mid_getDensity_d60833e998e30fd8] = env->getMethodID(cls, "getDensity", "(DDDDDDDDDDDDDDD)D");
              mids$[mid_getDensity_8ad3e640311f3919] = env->getMethodID(cls, "getDensity", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;DDDDDDDDD)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_getFrame_2c51111cc6894ba1] = env->getMethodID(cls, "getFrame", "()Lorg/orekit/frames/Frame;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          JB2008::JB2008(const ::org::orekit::models::earth::atmosphere::JB2008InputParameters & a0, const ::org::orekit::utils::PVCoordinatesProvider & a1, const ::org::orekit::bodies::BodyShape & a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_ce95f715917b7e8f, a0.this$, a1.this$, a2.this$)) {}

          JB2008::JB2008(const ::org::orekit::models::earth::atmosphere::JB2008InputParameters & a0, const ::org::orekit::utils::PVCoordinatesProvider & a1, const ::org::orekit::bodies::BodyShape & a2, const ::org::orekit::time::TimeScale & a3) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_523c73ffda77d072, a0.this$, a1.this$, a2.this$, a3.this$)) {}

          ::org::hipparchus::CalculusFieldElement JB2008::getDensity(const ::org::orekit::time::FieldAbsoluteDate & a0, const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D & a1, const ::org::orekit::frames::Frame & a2) const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getDensity_e9a4fc2340b58984], a0.this$, a1.this$, a2.this$));
          }

          jdouble JB2008::getDensity(const ::org::orekit::time::AbsoluteDate & a0, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a1, const ::org::orekit::frames::Frame & a2) const
          {
            return env->callDoubleMethod(this$, mids$[mid_getDensity_58866e32a1c9318b], a0.this$, a1.this$, a2.this$);
          }

          jdouble JB2008::getDensity(jdouble a0, jdouble a1, jdouble a2, jdouble a3, jdouble a4, jdouble a5, jdouble a6, jdouble a7, jdouble a8, jdouble a9, jdouble a10, jdouble a11, jdouble a12, jdouble a13, jdouble a14) const
          {
            return env->callDoubleMethod(this$, mids$[mid_getDensity_d60833e998e30fd8], a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14);
          }

          ::org::hipparchus::CalculusFieldElement JB2008::getDensity(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::hipparchus::CalculusFieldElement & a1, const ::org::hipparchus::CalculusFieldElement & a2, const ::org::hipparchus::CalculusFieldElement & a3, const ::org::hipparchus::CalculusFieldElement & a4, const ::org::hipparchus::CalculusFieldElement & a5, jdouble a6, jdouble a7, jdouble a8, jdouble a9, jdouble a10, jdouble a11, jdouble a12, jdouble a13, jdouble a14) const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getDensity_8ad3e640311f3919], a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$, a6, a7, a8, a9, a10, a11, a12, a13, a14));
          }

          ::org::orekit::frames::Frame JB2008::getFrame() const
          {
            return ::org::orekit::frames::Frame(env->callObjectMethod(this$, mids$[mid_getFrame_2c51111cc6894ba1]));
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
          static PyObject *t_JB2008_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_JB2008_instance_(PyTypeObject *type, PyObject *arg);
          static int t_JB2008_init_(t_JB2008 *self, PyObject *args, PyObject *kwds);
          static PyObject *t_JB2008_getDensity(t_JB2008 *self, PyObject *args);
          static PyObject *t_JB2008_getFrame(t_JB2008 *self);
          static PyObject *t_JB2008_get__frame(t_JB2008 *self, void *data);
          static PyGetSetDef t_JB2008__fields_[] = {
            DECLARE_GET_FIELD(t_JB2008, frame),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_JB2008__methods_[] = {
            DECLARE_METHOD(t_JB2008, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_JB2008, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_JB2008, getDensity, METH_VARARGS),
            DECLARE_METHOD(t_JB2008, getFrame, METH_NOARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(JB2008)[] = {
            { Py_tp_methods, t_JB2008__methods_ },
            { Py_tp_init, (void *) t_JB2008_init_ },
            { Py_tp_getset, t_JB2008__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(JB2008)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(JB2008, t_JB2008, JB2008);

          void t_JB2008::install(PyObject *module)
          {
            installType(&PY_TYPE(JB2008), &PY_TYPE_DEF(JB2008), module, "JB2008", 0);
          }

          void t_JB2008::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(JB2008), "class_", make_descriptor(JB2008::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(JB2008), "wrapfn_", make_descriptor(t_JB2008::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(JB2008), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_JB2008_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, JB2008::initializeClass, 1)))
              return NULL;
            return t_JB2008::wrap_Object(JB2008(((t_JB2008 *) arg)->object.this$));
          }
          static PyObject *t_JB2008_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, JB2008::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_JB2008_init_(t_JB2008 *self, PyObject *args, PyObject *kwds)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 3:
              {
                ::org::orekit::models::earth::atmosphere::JB2008InputParameters a0((jobject) NULL);
                ::org::orekit::utils::PVCoordinatesProvider a1((jobject) NULL);
                ::org::orekit::bodies::BodyShape a2((jobject) NULL);
                JB2008 object((jobject) NULL);

                if (!parseArgs(args, "kkk", ::org::orekit::models::earth::atmosphere::JB2008InputParameters::initializeClass, ::org::orekit::utils::PVCoordinatesProvider::initializeClass, ::org::orekit::bodies::BodyShape::initializeClass, &a0, &a1, &a2))
                {
                  INT_CALL(object = JB2008(a0, a1, a2));
                  self->object = object;
                  break;
                }
              }
              goto err;
             case 4:
              {
                ::org::orekit::models::earth::atmosphere::JB2008InputParameters a0((jobject) NULL);
                ::org::orekit::utils::PVCoordinatesProvider a1((jobject) NULL);
                ::org::orekit::bodies::BodyShape a2((jobject) NULL);
                ::org::orekit::time::TimeScale a3((jobject) NULL);
                JB2008 object((jobject) NULL);

                if (!parseArgs(args, "kkkk", ::org::orekit::models::earth::atmosphere::JB2008InputParameters::initializeClass, ::org::orekit::utils::PVCoordinatesProvider::initializeClass, ::org::orekit::bodies::BodyShape::initializeClass, ::org::orekit::time::TimeScale::initializeClass, &a0, &a1, &a2, &a3))
                {
                  INT_CALL(object = JB2008(a0, a1, a2, a3));
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

          static PyObject *t_JB2008_getDensity(t_JB2008 *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 3:
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
              break;
             case 15:
              {
                jdouble a0;
                jdouble a1;
                jdouble a2;
                jdouble a3;
                jdouble a4;
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
                jdouble result;

                if (!parseArgs(args, "DDDDDDDDDDDDDDD", &a0, &a1, &a2, &a3, &a4, &a5, &a6, &a7, &a8, &a9, &a10, &a11, &a12, &a13, &a14))
                {
                  OBJ_CALL(result = self->object.getDensity(a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14));
                  return PyFloat_FromDouble((double) result);
                }
              }
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
                jdouble a6;
                jdouble a7;
                jdouble a8;
                jdouble a9;
                jdouble a10;
                jdouble a11;
                jdouble a12;
                jdouble a13;
                jdouble a14;
                ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                if (!parseArgs(args, "KKKKKKDDDDDDDDD", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a3, &p3, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a4, &p4, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a5, &p5, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a6, &a7, &a8, &a9, &a10, &a11, &a12, &a13, &a14))
                {
                  OBJ_CALL(result = self->object.getDensity(a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14));
                  return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                }
              }
            }

            PyErr_SetArgsError((PyObject *) self, "getDensity", args);
            return NULL;
          }

          static PyObject *t_JB2008_getFrame(t_JB2008 *self)
          {
            ::org::orekit::frames::Frame result((jobject) NULL);
            OBJ_CALL(result = self->object.getFrame());
            return ::org::orekit::frames::t_Frame::wrap_Object(result);
          }

          static PyObject *t_JB2008_get__frame(t_JB2008 *self, void *data)
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
#include "org/orekit/propagation/semianalytical/dsst/utilities/hansen/PolynomialFunctionMatrix.h"
#include "java/lang/Class.h"
#include "org/hipparchus/analysis/polynomials/PolynomialFunction.h"
#include "org/orekit/propagation/semianalytical/dsst/utilities/hansen/PolynomialFunctionMatrix.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace semianalytical {
        namespace dsst {
          namespace utilities {
            namespace hansen {

              ::java::lang::Class *PolynomialFunctionMatrix::class$ = NULL;
              jmethodID *PolynomialFunctionMatrix::mids$ = NULL;
              bool PolynomialFunctionMatrix::live$ = false;

              jclass PolynomialFunctionMatrix::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/propagation/semianalytical/dsst/utilities/hansen/PolynomialFunctionMatrix");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_add_ebc4cddf24c32c66] = env->getMethodID(cls, "add", "(Lorg/orekit/propagation/semianalytical/dsst/utilities/hansen/PolynomialFunctionMatrix;)Lorg/orekit/propagation/semianalytical/dsst/utilities/hansen/PolynomialFunctionMatrix;");
                  mids$[mid_getElem_1cd2ebb64c826c5c] = env->getMethodID(cls, "getElem", "(II)Lorg/hipparchus/analysis/polynomials/PolynomialFunction;");
                  mids$[mid_getMatrixLine_dee002994800a328] = env->getMethodID(cls, "getMatrixLine", "(I)[Lorg/hipparchus/analysis/polynomials/PolynomialFunction;");
                  mids$[mid_multiply_ebc4cddf24c32c66] = env->getMethodID(cls, "multiply", "(Lorg/orekit/propagation/semianalytical/dsst/utilities/hansen/PolynomialFunctionMatrix;)Lorg/orekit/propagation/semianalytical/dsst/utilities/hansen/PolynomialFunctionMatrix;");
                  mids$[mid_setElem_19223c9371fb6012] = env->getMethodID(cls, "setElem", "(IILorg/hipparchus/analysis/polynomials/PolynomialFunction;)V");
                  mids$[mid_setMatrix_515fac2355626ee6] = env->getMethodID(cls, "setMatrix", "([[Lorg/hipparchus/analysis/polynomials/PolynomialFunction;)V");
                  mids$[mid_setMatrixLine_285b5bc74aec1ed1] = env->getMethodID(cls, "setMatrixLine", "(I[Lorg/hipparchus/analysis/polynomials/PolynomialFunction;)V");

                  class$ = new ::java::lang::Class(cls);
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              PolynomialFunctionMatrix PolynomialFunctionMatrix::add(const PolynomialFunctionMatrix & a0) const
              {
                return PolynomialFunctionMatrix(env->callObjectMethod(this$, mids$[mid_add_ebc4cddf24c32c66], a0.this$));
              }

              ::org::hipparchus::analysis::polynomials::PolynomialFunction PolynomialFunctionMatrix::getElem(jint a0, jint a1) const
              {
                return ::org::hipparchus::analysis::polynomials::PolynomialFunction(env->callObjectMethod(this$, mids$[mid_getElem_1cd2ebb64c826c5c], a0, a1));
              }

              JArray< ::org::hipparchus::analysis::polynomials::PolynomialFunction > PolynomialFunctionMatrix::getMatrixLine(jint a0) const
              {
                return JArray< ::org::hipparchus::analysis::polynomials::PolynomialFunction >(env->callObjectMethod(this$, mids$[mid_getMatrixLine_dee002994800a328], a0));
              }

              PolynomialFunctionMatrix PolynomialFunctionMatrix::multiply(const PolynomialFunctionMatrix & a0) const
              {
                return PolynomialFunctionMatrix(env->callObjectMethod(this$, mids$[mid_multiply_ebc4cddf24c32c66], a0.this$));
              }

              void PolynomialFunctionMatrix::setElem(jint a0, jint a1, const ::org::hipparchus::analysis::polynomials::PolynomialFunction & a2) const
              {
                env->callVoidMethod(this$, mids$[mid_setElem_19223c9371fb6012], a0, a1, a2.this$);
              }

              void PolynomialFunctionMatrix::setMatrix(const JArray< JArray< ::org::hipparchus::analysis::polynomials::PolynomialFunction > > & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setMatrix_515fac2355626ee6], a0.this$);
              }

              void PolynomialFunctionMatrix::setMatrixLine(jint a0, const JArray< ::org::hipparchus::analysis::polynomials::PolynomialFunction > & a1) const
              {
                env->callVoidMethod(this$, mids$[mid_setMatrixLine_285b5bc74aec1ed1], a0, a1.this$);
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
    namespace propagation {
      namespace semianalytical {
        namespace dsst {
          namespace utilities {
            namespace hansen {
              static PyObject *t_PolynomialFunctionMatrix_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_PolynomialFunctionMatrix_instance_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_PolynomialFunctionMatrix_add(t_PolynomialFunctionMatrix *self, PyObject *arg);
              static PyObject *t_PolynomialFunctionMatrix_getElem(t_PolynomialFunctionMatrix *self, PyObject *args);
              static PyObject *t_PolynomialFunctionMatrix_getMatrixLine(t_PolynomialFunctionMatrix *self, PyObject *arg);
              static PyObject *t_PolynomialFunctionMatrix_multiply(t_PolynomialFunctionMatrix *self, PyObject *arg);
              static PyObject *t_PolynomialFunctionMatrix_setElem(t_PolynomialFunctionMatrix *self, PyObject *args);
              static PyObject *t_PolynomialFunctionMatrix_setMatrix(t_PolynomialFunctionMatrix *self, PyObject *arg);
              static PyObject *t_PolynomialFunctionMatrix_setMatrixLine(t_PolynomialFunctionMatrix *self, PyObject *args);
              static int t_PolynomialFunctionMatrix_set__matrix(t_PolynomialFunctionMatrix *self, PyObject *arg, void *data);
              static PyGetSetDef t_PolynomialFunctionMatrix__fields_[] = {
                DECLARE_SET_FIELD(t_PolynomialFunctionMatrix, matrix),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_PolynomialFunctionMatrix__methods_[] = {
                DECLARE_METHOD(t_PolynomialFunctionMatrix, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_PolynomialFunctionMatrix, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_PolynomialFunctionMatrix, add, METH_O),
                DECLARE_METHOD(t_PolynomialFunctionMatrix, getElem, METH_VARARGS),
                DECLARE_METHOD(t_PolynomialFunctionMatrix, getMatrixLine, METH_O),
                DECLARE_METHOD(t_PolynomialFunctionMatrix, multiply, METH_O),
                DECLARE_METHOD(t_PolynomialFunctionMatrix, setElem, METH_VARARGS),
                DECLARE_METHOD(t_PolynomialFunctionMatrix, setMatrix, METH_O),
                DECLARE_METHOD(t_PolynomialFunctionMatrix, setMatrixLine, METH_VARARGS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(PolynomialFunctionMatrix)[] = {
                { Py_tp_methods, t_PolynomialFunctionMatrix__methods_ },
                { Py_tp_init, (void *) abstract_init },
                { Py_tp_getset, t_PolynomialFunctionMatrix__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(PolynomialFunctionMatrix)[] = {
                &PY_TYPE_DEF(::java::lang::Object),
                NULL
              };

              DEFINE_TYPE(PolynomialFunctionMatrix, t_PolynomialFunctionMatrix, PolynomialFunctionMatrix);

              void t_PolynomialFunctionMatrix::install(PyObject *module)
              {
                installType(&PY_TYPE(PolynomialFunctionMatrix), &PY_TYPE_DEF(PolynomialFunctionMatrix), module, "PolynomialFunctionMatrix", 0);
              }

              void t_PolynomialFunctionMatrix::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(PolynomialFunctionMatrix), "class_", make_descriptor(PolynomialFunctionMatrix::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(PolynomialFunctionMatrix), "wrapfn_", make_descriptor(t_PolynomialFunctionMatrix::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(PolynomialFunctionMatrix), "boxfn_", make_descriptor(boxObject));
              }

              static PyObject *t_PolynomialFunctionMatrix_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, PolynomialFunctionMatrix::initializeClass, 1)))
                  return NULL;
                return t_PolynomialFunctionMatrix::wrap_Object(PolynomialFunctionMatrix(((t_PolynomialFunctionMatrix *) arg)->object.this$));
              }
              static PyObject *t_PolynomialFunctionMatrix_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, PolynomialFunctionMatrix::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static PyObject *t_PolynomialFunctionMatrix_add(t_PolynomialFunctionMatrix *self, PyObject *arg)
              {
                PolynomialFunctionMatrix a0((jobject) NULL);
                PolynomialFunctionMatrix result((jobject) NULL);

                if (!parseArg(arg, "k", PolynomialFunctionMatrix::initializeClass, &a0))
                {
                  OBJ_CALL(result = self->object.add(a0));
                  return t_PolynomialFunctionMatrix::wrap_Object(result);
                }

                PyErr_SetArgsError((PyObject *) self, "add", arg);
                return NULL;
              }

              static PyObject *t_PolynomialFunctionMatrix_getElem(t_PolynomialFunctionMatrix *self, PyObject *args)
              {
                jint a0;
                jint a1;
                ::org::hipparchus::analysis::polynomials::PolynomialFunction result((jobject) NULL);

                if (!parseArgs(args, "II", &a0, &a1))
                {
                  OBJ_CALL(result = self->object.getElem(a0, a1));
                  return ::org::hipparchus::analysis::polynomials::t_PolynomialFunction::wrap_Object(result);
                }

                PyErr_SetArgsError((PyObject *) self, "getElem", args);
                return NULL;
              }

              static PyObject *t_PolynomialFunctionMatrix_getMatrixLine(t_PolynomialFunctionMatrix *self, PyObject *arg)
              {
                jint a0;
                JArray< ::org::hipparchus::analysis::polynomials::PolynomialFunction > result((jobject) NULL);

                if (!parseArg(arg, "I", &a0))
                {
                  OBJ_CALL(result = self->object.getMatrixLine(a0));
                  return JArray<jobject>(result.this$).wrap(::org::hipparchus::analysis::polynomials::t_PolynomialFunction::wrap_jobject);
                }

                PyErr_SetArgsError((PyObject *) self, "getMatrixLine", arg);
                return NULL;
              }

              static PyObject *t_PolynomialFunctionMatrix_multiply(t_PolynomialFunctionMatrix *self, PyObject *arg)
              {
                PolynomialFunctionMatrix a0((jobject) NULL);
                PolynomialFunctionMatrix result((jobject) NULL);

                if (!parseArg(arg, "k", PolynomialFunctionMatrix::initializeClass, &a0))
                {
                  OBJ_CALL(result = self->object.multiply(a0));
                  return t_PolynomialFunctionMatrix::wrap_Object(result);
                }

                PyErr_SetArgsError((PyObject *) self, "multiply", arg);
                return NULL;
              }

              static PyObject *t_PolynomialFunctionMatrix_setElem(t_PolynomialFunctionMatrix *self, PyObject *args)
              {
                jint a0;
                jint a1;
                ::org::hipparchus::analysis::polynomials::PolynomialFunction a2((jobject) NULL);

                if (!parseArgs(args, "IIk", ::org::hipparchus::analysis::polynomials::PolynomialFunction::initializeClass, &a0, &a1, &a2))
                {
                  OBJ_CALL(self->object.setElem(a0, a1, a2));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setElem", args);
                return NULL;
              }

              static PyObject *t_PolynomialFunctionMatrix_setMatrix(t_PolynomialFunctionMatrix *self, PyObject *arg)
              {
                JArray< JArray< ::org::hipparchus::analysis::polynomials::PolynomialFunction > > a0((jobject) NULL);

                if (!parseArg(arg, "[[k", ::org::hipparchus::analysis::polynomials::PolynomialFunction::initializeClass, &a0))
                {
                  OBJ_CALL(self->object.setMatrix(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setMatrix", arg);
                return NULL;
              }

              static PyObject *t_PolynomialFunctionMatrix_setMatrixLine(t_PolynomialFunctionMatrix *self, PyObject *args)
              {
                jint a0;
                JArray< ::org::hipparchus::analysis::polynomials::PolynomialFunction > a1((jobject) NULL);

                if (!parseArgs(args, "I[k", ::org::hipparchus::analysis::polynomials::PolynomialFunction::initializeClass, &a0, &a1))
                {
                  OBJ_CALL(self->object.setMatrixLine(a0, a1));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setMatrixLine", args);
                return NULL;
              }

              static int t_PolynomialFunctionMatrix_set__matrix(t_PolynomialFunctionMatrix *self, PyObject *arg, void *data)
              {
                {
                  JArray< JArray< ::org::hipparchus::analysis::polynomials::PolynomialFunction > > value((jobject) NULL);
                  if (!parseArg(arg, "[[k", ::org::hipparchus::analysis::polynomials::PolynomialFunction::initializeClass, &value))
                  {
                    INT_CALL(self->object.setMatrix(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "matrix", arg);
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
#include "java/lang/Boolean.h"
#include "java/io/Serializable.h"
#include "java/lang/Class.h"
#include "java/lang/Boolean.h"
#include "java/lang/String.h"
#include "java/lang/Comparable.h"
#include "JArray.h"

namespace java {
  namespace lang {

    ::java::lang::Class *Boolean::class$ = NULL;
    jmethodID *Boolean::mids$ = NULL;
    bool Boolean::live$ = false;
    Boolean *Boolean::FALSE = NULL;
    Boolean *Boolean::TRUE = NULL;
    ::java::lang::Class *Boolean::TYPE = NULL;

    jclass Boolean::initializeClass(bool getOnly)
    {
      if (getOnly)
        return (jclass) (live$ ? class$->this$ : NULL);
      if (class$ == NULL)
      {
        jclass cls = (jclass) env->findClass("java/lang/Boolean");

        mids$ = new jmethodID[max_mid];
        mids$[mid_init$_734b91ac30d5f9b4] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;)V");
        mids$[mid_init$_fcb96c98de6fad04] = env->getMethodID(cls, "<init>", "(Z)V");
        mids$[mid_booleanValue_9ab94ac1dc23b105] = env->getMethodID(cls, "booleanValue", "()Z");
        mids$[mid_compare_d439599c85d4237f] = env->getStaticMethodID(cls, "compare", "(ZZ)I");
        mids$[mid_compareTo_f34dabd2737f37a6] = env->getMethodID(cls, "compareTo", "(Ljava/lang/Boolean;)I");
        mids$[mid_equals_460c5e2d9d51c6cc] = env->getMethodID(cls, "equals", "(Ljava/lang/Object;)Z");
        mids$[mid_getBoolean_cde6b28e15c96b75] = env->getStaticMethodID(cls, "getBoolean", "(Ljava/lang/String;)Z");
        mids$[mid_hashCode_55546ef6a647f39b] = env->getMethodID(cls, "hashCode", "()I");
        mids$[mid_hashCode_110a25fe6d930562] = env->getStaticMethodID(cls, "hashCode", "(Z)I");
        mids$[mid_logicalAnd_9409adb0789a48aa] = env->getStaticMethodID(cls, "logicalAnd", "(ZZ)Z");
        mids$[mid_logicalOr_9409adb0789a48aa] = env->getStaticMethodID(cls, "logicalOr", "(ZZ)Z");
        mids$[mid_logicalXor_9409adb0789a48aa] = env->getStaticMethodID(cls, "logicalXor", "(ZZ)Z");
        mids$[mid_parseBoolean_cde6b28e15c96b75] = env->getStaticMethodID(cls, "parseBoolean", "(Ljava/lang/String;)Z");
        mids$[mid_toString_1c1fa1e935d6cdcf] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");
        mids$[mid_toString_8603157c6408b5bf] = env->getStaticMethodID(cls, "toString", "(Z)Ljava/lang/String;");
        mids$[mid_valueOf_9b63694e0ae427e7] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Ljava/lang/Boolean;");
        mids$[mid_valueOf_87ed439fc437045b] = env->getStaticMethodID(cls, "valueOf", "(Z)Ljava/lang/Boolean;");

        class$ = new ::java::lang::Class(cls);
        cls = (jclass) class$->this$;

        FALSE = new Boolean(env->getStaticObjectField(cls, "FALSE", "Ljava/lang/Boolean;"));
        TRUE = new Boolean(env->getStaticObjectField(cls, "TRUE", "Ljava/lang/Boolean;"));
        TYPE = new ::java::lang::Class(env->getStaticObjectField(cls, "TYPE", "Ljava/lang/Class;"));
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    Boolean::Boolean(const ::java::lang::String & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_734b91ac30d5f9b4, a0.this$)) {}

    Boolean::Boolean(jboolean a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_fcb96c98de6fad04, a0)) {}

    jboolean Boolean::booleanValue() const
    {
      return env->callBooleanMethod(this$, mids$[mid_booleanValue_9ab94ac1dc23b105]);
    }

    jint Boolean::compare(jboolean a0, jboolean a1)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_compare_d439599c85d4237f], a0, a1);
    }

    jint Boolean::compareTo(const Boolean & a0) const
    {
      return env->callIntMethod(this$, mids$[mid_compareTo_f34dabd2737f37a6], a0.this$);
    }

    jboolean Boolean::equals(const ::java::lang::Object & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_equals_460c5e2d9d51c6cc], a0.this$);
    }

    jboolean Boolean::getBoolean(const ::java::lang::String & a0)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticBooleanMethod(cls, mids$[mid_getBoolean_cde6b28e15c96b75], a0.this$);
    }

    jint Boolean::hashCode() const
    {
      return env->callIntMethod(this$, mids$[mid_hashCode_55546ef6a647f39b]);
    }

    jint Boolean::hashCode(jboolean a0)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_hashCode_110a25fe6d930562], a0);
    }

    jboolean Boolean::logicalAnd(jboolean a0, jboolean a1)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticBooleanMethod(cls, mids$[mid_logicalAnd_9409adb0789a48aa], a0, a1);
    }

    jboolean Boolean::logicalOr(jboolean a0, jboolean a1)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticBooleanMethod(cls, mids$[mid_logicalOr_9409adb0789a48aa], a0, a1);
    }

    jboolean Boolean::logicalXor(jboolean a0, jboolean a1)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticBooleanMethod(cls, mids$[mid_logicalXor_9409adb0789a48aa], a0, a1);
    }

    jboolean Boolean::parseBoolean(const ::java::lang::String & a0)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticBooleanMethod(cls, mids$[mid_parseBoolean_cde6b28e15c96b75], a0.this$);
    }

    ::java::lang::String Boolean::toString() const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_1c1fa1e935d6cdcf]));
    }

    ::java::lang::String Boolean::toString(jboolean a0)
    {
      jclass cls = env->getClass(initializeClass);
      return ::java::lang::String(env->callStaticObjectMethod(cls, mids$[mid_toString_8603157c6408b5bf], a0));
    }

    Boolean Boolean::valueOf(const ::java::lang::String & a0)
    {
      jclass cls = env->getClass(initializeClass);
      return Boolean(env->callStaticObjectMethod(cls, mids$[mid_valueOf_9b63694e0ae427e7], a0.this$));
    }

    Boolean Boolean::valueOf(jboolean a0)
    {
      jclass cls = env->getClass(initializeClass);
      return Boolean(env->callStaticObjectMethod(cls, mids$[mid_valueOf_87ed439fc437045b], a0));
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace java {
  namespace lang {
    static PyObject *t_Boolean_cast_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Boolean_instance_(PyTypeObject *type, PyObject *arg);
    static int t_Boolean_init_(t_Boolean *self, PyObject *args, PyObject *kwds);
    static PyObject *t_Boolean_booleanValue(t_Boolean *self);
    static PyObject *t_Boolean_compare(PyTypeObject *type, PyObject *args);
    static PyObject *t_Boolean_compareTo(t_Boolean *self, PyObject *arg);
    static PyObject *t_Boolean_equals(t_Boolean *self, PyObject *args);
    static PyObject *t_Boolean_getBoolean(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Boolean_hashCode(t_Boolean *self, PyObject *args);
    static PyObject *t_Boolean_hashCode_(PyTypeObject *type, PyObject *args);
    static PyObject *t_Boolean_logicalAnd(PyTypeObject *type, PyObject *args);
    static PyObject *t_Boolean_logicalOr(PyTypeObject *type, PyObject *args);
    static PyObject *t_Boolean_logicalXor(PyTypeObject *type, PyObject *args);
    static PyObject *t_Boolean_parseBoolean(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Boolean_toString(t_Boolean *self, PyObject *args);
    static PyObject *t_Boolean_toString_(PyTypeObject *type, PyObject *args);
    static PyObject *t_Boolean_valueOf(PyTypeObject *type, PyObject *args);

    static PyMethodDef t_Boolean__methods_[] = {
      DECLARE_METHOD(t_Boolean, cast_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Boolean, instance_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Boolean, booleanValue, METH_NOARGS),
      DECLARE_METHOD(t_Boolean, compare, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_Boolean, compareTo, METH_O),
      DECLARE_METHOD(t_Boolean, equals, METH_VARARGS),
      DECLARE_METHOD(t_Boolean, getBoolean, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Boolean, hashCode, METH_VARARGS),
      DECLARE_METHOD(t_Boolean, hashCode_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Boolean, logicalAnd, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_Boolean, logicalOr, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_Boolean, logicalXor, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_Boolean, parseBoolean, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Boolean, toString, METH_VARARGS),
      DECLARE_METHOD(t_Boolean, toString_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Boolean, valueOf, METH_VARARGS | METH_CLASS),
      { NULL, NULL, 0, NULL }
    };

    static PyType_Slot PY_TYPE_SLOTS(Boolean)[] = {
      { Py_tp_methods, t_Boolean__methods_ },
      { Py_tp_init, (void *) t_Boolean_init_ },
      { 0, NULL }
    };

    static PyType_Def *PY_TYPE_BASES(Boolean)[] = {
      &PY_TYPE_DEF(::java::lang::Object),
      NULL
    };

    DEFINE_TYPE(Boolean, t_Boolean, Boolean);

    void t_Boolean::install(PyObject *module)
    {
      installType(&PY_TYPE(Boolean), &PY_TYPE_DEF(Boolean), module, "Boolean", 0);
    }

    void t_Boolean::initialize(PyObject *module)
    {
      PyObject_SetAttrString((PyObject *) PY_TYPE(Boolean), "class_", make_descriptor(Boolean::initializeClass, 1));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Boolean), "wrapfn_", make_descriptor(unboxBoolean));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Boolean), "boxfn_", make_descriptor(boxBoolean));
      env->getClass(Boolean::initializeClass);
      PyObject_SetAttrString((PyObject *) PY_TYPE(Boolean), "FALSE", make_descriptor(t_Boolean::wrap_Object(*Boolean::FALSE)));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Boolean), "TRUE", make_descriptor(t_Boolean::wrap_Object(*Boolean::TRUE)));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Boolean), "TYPE", make_descriptor(::java::lang::t_Class::wrap_Object(*Boolean::TYPE)));
    }

    static PyObject *t_Boolean_cast_(PyTypeObject *type, PyObject *arg)
    {
      if (!(arg = castCheck(arg, Boolean::initializeClass, 1)))
        return NULL;
      return t_Boolean::wrap_Object(Boolean(((t_Boolean *) arg)->object.this$));
    }
    static PyObject *t_Boolean_instance_(PyTypeObject *type, PyObject *arg)
    {
      if (!castCheck(arg, Boolean::initializeClass, 0))
        Py_RETURN_FALSE;
      Py_RETURN_TRUE;
    }

    static int t_Boolean_init_(t_Boolean *self, PyObject *args, PyObject *kwds)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 1:
        {
          ::java::lang::String a0((jobject) NULL);
          Boolean object((jobject) NULL);

          if (!parseArgs(args, "s", &a0))
          {
            INT_CALL(object = Boolean(a0));
            self->object = object;
            break;
          }
        }
        {
          jboolean a0;
          Boolean object((jobject) NULL);

          if (!parseArgs(args, "Z", &a0))
          {
            INT_CALL(object = Boolean(a0));
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

    static PyObject *t_Boolean_booleanValue(t_Boolean *self)
    {
      jboolean result;
      OBJ_CALL(result = self->object.booleanValue());
      Py_RETURN_BOOL(result);
    }

    static PyObject *t_Boolean_compare(PyTypeObject *type, PyObject *args)
    {
      jboolean a0;
      jboolean a1;
      jint result;

      if (!parseArgs(args, "ZZ", &a0, &a1))
      {
        OBJ_CALL(result = ::java::lang::Boolean::compare(a0, a1));
        return PyLong_FromLong((long) result);
      }

      PyErr_SetArgsError(type, "compare", args);
      return NULL;
    }

    static PyObject *t_Boolean_compareTo(t_Boolean *self, PyObject *arg)
    {
      Boolean a0((jobject) NULL);
      jint result;

      if (!parseArg(arg, "O", ::java::lang::PY_TYPE(Boolean), &a0))
      {
        OBJ_CALL(result = self->object.compareTo(a0));
        return PyLong_FromLong((long) result);
      }

      PyErr_SetArgsError((PyObject *) self, "compareTo", arg);
      return NULL;
    }

    static PyObject *t_Boolean_equals(t_Boolean *self, PyObject *args)
    {
      ::java::lang::Object a0((jobject) NULL);
      jboolean result;

      if (!parseArgs(args, "o", &a0))
      {
        OBJ_CALL(result = self->object.equals(a0));
        Py_RETURN_BOOL(result);
      }

      return callSuper(PY_TYPE(Boolean), (PyObject *) self, "equals", args, 2);
    }

    static PyObject *t_Boolean_getBoolean(PyTypeObject *type, PyObject *arg)
    {
      ::java::lang::String a0((jobject) NULL);
      jboolean result;

      if (!parseArg(arg, "s", &a0))
      {
        OBJ_CALL(result = ::java::lang::Boolean::getBoolean(a0));
        Py_RETURN_BOOL(result);
      }

      PyErr_SetArgsError(type, "getBoolean", arg);
      return NULL;
    }

    static PyObject *t_Boolean_hashCode(t_Boolean *self, PyObject *args)
    {
      jint result;

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.hashCode());
        return PyLong_FromLong((long) result);
      }

      return callSuper(PY_TYPE(Boolean), (PyObject *) self, "hashCode", args, 2);
    }

    static PyObject *t_Boolean_hashCode_(PyTypeObject *type, PyObject *args)
    {
      jboolean a0;
      jint result;

      if (!parseArgs(args, "Z", &a0))
      {
        OBJ_CALL(result = ::java::lang::Boolean::hashCode(a0));
        return PyLong_FromLong((long) result);
      }

      PyErr_SetArgsError(type, "hashCode_", args);
      return NULL;
    }

    static PyObject *t_Boolean_logicalAnd(PyTypeObject *type, PyObject *args)
    {
      jboolean a0;
      jboolean a1;
      jboolean result;

      if (!parseArgs(args, "ZZ", &a0, &a1))
      {
        OBJ_CALL(result = ::java::lang::Boolean::logicalAnd(a0, a1));
        Py_RETURN_BOOL(result);
      }

      PyErr_SetArgsError(type, "logicalAnd", args);
      return NULL;
    }

    static PyObject *t_Boolean_logicalOr(PyTypeObject *type, PyObject *args)
    {
      jboolean a0;
      jboolean a1;
      jboolean result;

      if (!parseArgs(args, "ZZ", &a0, &a1))
      {
        OBJ_CALL(result = ::java::lang::Boolean::logicalOr(a0, a1));
        Py_RETURN_BOOL(result);
      }

      PyErr_SetArgsError(type, "logicalOr", args);
      return NULL;
    }

    static PyObject *t_Boolean_logicalXor(PyTypeObject *type, PyObject *args)
    {
      jboolean a0;
      jboolean a1;
      jboolean result;

      if (!parseArgs(args, "ZZ", &a0, &a1))
      {
        OBJ_CALL(result = ::java::lang::Boolean::logicalXor(a0, a1));
        Py_RETURN_BOOL(result);
      }

      PyErr_SetArgsError(type, "logicalXor", args);
      return NULL;
    }

    static PyObject *t_Boolean_parseBoolean(PyTypeObject *type, PyObject *arg)
    {
      ::java::lang::String a0((jobject) NULL);
      jboolean result;

      if (!parseArg(arg, "s", &a0))
      {
        OBJ_CALL(result = ::java::lang::Boolean::parseBoolean(a0));
        Py_RETURN_BOOL(result);
      }

      PyErr_SetArgsError(type, "parseBoolean", arg);
      return NULL;
    }

    static PyObject *t_Boolean_toString(t_Boolean *self, PyObject *args)
    {
      ::java::lang::String result((jobject) NULL);

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.toString());
        return j2p(result);
      }

      return callSuper(PY_TYPE(Boolean), (PyObject *) self, "toString", args, 2);
    }

    static PyObject *t_Boolean_toString_(PyTypeObject *type, PyObject *args)
    {
      jboolean a0;
      ::java::lang::String result((jobject) NULL);

      if (!parseArgs(args, "Z", &a0))
      {
        OBJ_CALL(result = ::java::lang::Boolean::toString(a0));
        return j2p(result);
      }

      PyErr_SetArgsError(type, "toString_", args);
      return NULL;
    }

    static PyObject *t_Boolean_valueOf(PyTypeObject *type, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 1:
        {
          ::java::lang::String a0((jobject) NULL);
          Boolean result((jobject) NULL);

          if (!parseArgs(args, "s", &a0))
          {
            OBJ_CALL(result = ::java::lang::Boolean::valueOf(a0));
            return t_Boolean::wrap_Object(result);
          }
        }
        {
          jboolean a0;
          Boolean result((jobject) NULL);

          if (!parseArgs(args, "Z", &a0))
          {
            OBJ_CALL(result = ::java::lang::Boolean::valueOf(a0));
            return t_Boolean::wrap_Object(result);
          }
        }
      }

      PyErr_SetArgsError(type, "valueOf", args);
      return NULL;
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/rugged/los/LOSBuilder.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "org/orekit/rugged/los/TimeDependentLOS.h"
#include "java/util/List.h"
#include "org/orekit/rugged/los/LOSTransform.h"
#include "java/lang/Class.h"
#include "org/orekit/rugged/los/LOSBuilder.h"
#include "org/orekit/rugged/los/TimeIndependentLOSTransform.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace rugged {
      namespace los {

        ::java::lang::Class *LOSBuilder::class$ = NULL;
        jmethodID *LOSBuilder::mids$ = NULL;
        bool LOSBuilder::live$ = false;

        jclass LOSBuilder::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/rugged/los/LOSBuilder");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_0e7c3032c7c93ed3] = env->getMethodID(cls, "<init>", "(Ljava/util/List;)V");
            mids$[mid_addTransform_8bafb16e6f4ae7cb] = env->getMethodID(cls, "addTransform", "(Lorg/orekit/rugged/los/LOSTransform;)Lorg/orekit/rugged/los/LOSBuilder;");
            mids$[mid_addTransform_14f0023edd2a075a] = env->getMethodID(cls, "addTransform", "(Lorg/orekit/rugged/los/TimeIndependentLOSTransform;)Lorg/orekit/rugged/los/LOSBuilder;");
            mids$[mid_build_7b422055bdf6ad4c] = env->getMethodID(cls, "build", "()Lorg/orekit/rugged/los/TimeDependentLOS;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        LOSBuilder::LOSBuilder(const ::java::util::List & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0e7c3032c7c93ed3, a0.this$)) {}

        LOSBuilder LOSBuilder::addTransform(const ::org::orekit::rugged::los::LOSTransform & a0) const
        {
          return LOSBuilder(env->callObjectMethod(this$, mids$[mid_addTransform_8bafb16e6f4ae7cb], a0.this$));
        }

        LOSBuilder LOSBuilder::addTransform(const ::org::orekit::rugged::los::TimeIndependentLOSTransform & a0) const
        {
          return LOSBuilder(env->callObjectMethod(this$, mids$[mid_addTransform_14f0023edd2a075a], a0.this$));
        }

        ::org::orekit::rugged::los::TimeDependentLOS LOSBuilder::build() const
        {
          return ::org::orekit::rugged::los::TimeDependentLOS(env->callObjectMethod(this$, mids$[mid_build_7b422055bdf6ad4c]));
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
      namespace los {
        static PyObject *t_LOSBuilder_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_LOSBuilder_instance_(PyTypeObject *type, PyObject *arg);
        static int t_LOSBuilder_init_(t_LOSBuilder *self, PyObject *args, PyObject *kwds);
        static PyObject *t_LOSBuilder_addTransform(t_LOSBuilder *self, PyObject *args);
        static PyObject *t_LOSBuilder_build(t_LOSBuilder *self);

        static PyMethodDef t_LOSBuilder__methods_[] = {
          DECLARE_METHOD(t_LOSBuilder, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_LOSBuilder, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_LOSBuilder, addTransform, METH_VARARGS),
          DECLARE_METHOD(t_LOSBuilder, build, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(LOSBuilder)[] = {
          { Py_tp_methods, t_LOSBuilder__methods_ },
          { Py_tp_init, (void *) t_LOSBuilder_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(LOSBuilder)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(LOSBuilder, t_LOSBuilder, LOSBuilder);

        void t_LOSBuilder::install(PyObject *module)
        {
          installType(&PY_TYPE(LOSBuilder), &PY_TYPE_DEF(LOSBuilder), module, "LOSBuilder", 0);
        }

        void t_LOSBuilder::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(LOSBuilder), "class_", make_descriptor(LOSBuilder::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(LOSBuilder), "wrapfn_", make_descriptor(t_LOSBuilder::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(LOSBuilder), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_LOSBuilder_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, LOSBuilder::initializeClass, 1)))
            return NULL;
          return t_LOSBuilder::wrap_Object(LOSBuilder(((t_LOSBuilder *) arg)->object.this$));
        }
        static PyObject *t_LOSBuilder_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, LOSBuilder::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_LOSBuilder_init_(t_LOSBuilder *self, PyObject *args, PyObject *kwds)
        {
          ::java::util::List a0((jobject) NULL);
          PyTypeObject **p0;
          LOSBuilder object((jobject) NULL);

          if (!parseArgs(args, "K", ::java::util::List::initializeClass, &a0, &p0, ::java::util::t_List::parameters_))
          {
            INT_CALL(object = LOSBuilder(a0));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_LOSBuilder_addTransform(t_LOSBuilder *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              ::org::orekit::rugged::los::LOSTransform a0((jobject) NULL);
              LOSBuilder result((jobject) NULL);

              if (!parseArgs(args, "k", ::org::orekit::rugged::los::LOSTransform::initializeClass, &a0))
              {
                OBJ_CALL(result = self->object.addTransform(a0));
                return t_LOSBuilder::wrap_Object(result);
              }
            }
            {
              ::org::orekit::rugged::los::TimeIndependentLOSTransform a0((jobject) NULL);
              LOSBuilder result((jobject) NULL);

              if (!parseArgs(args, "k", ::org::orekit::rugged::los::TimeIndependentLOSTransform::initializeClass, &a0))
              {
                OBJ_CALL(result = self->object.addTransform(a0));
                return t_LOSBuilder::wrap_Object(result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "addTransform", args);
          return NULL;
        }

        static PyObject *t_LOSBuilder_build(t_LOSBuilder *self)
        {
          ::org::orekit::rugged::los::TimeDependentLOS result((jobject) NULL);
          OBJ_CALL(result = self->object.build());
          return ::org::orekit::rugged::los::t_TimeDependentLOS::wrap_Object(result);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/measurements/filtering/PythonHatchFilter.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace filtering {

          ::java::lang::Class *PythonHatchFilter::class$ = NULL;
          jmethodID *PythonHatchFilter::mids$ = NULL;
          bool PythonHatchFilter::live$ = false;

          jclass PythonHatchFilter::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/filtering/PythonHatchFilter");

              class$ = new ::java::lang::Class(cls);
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
    namespace estimation {
      namespace measurements {
        namespace filtering {
          static PyObject *t_PythonHatchFilter_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_PythonHatchFilter_instance_(PyTypeObject *type, PyObject *arg);

          static PyMethodDef t_PythonHatchFilter__methods_[] = {
            DECLARE_METHOD(t_PythonHatchFilter, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PythonHatchFilter, instance_, METH_O | METH_CLASS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(PythonHatchFilter)[] = {
            { Py_tp_methods, t_PythonHatchFilter__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(PythonHatchFilter)[] = {
            &PY_TYPE_DEF(::org::orekit::estimation::measurements::filtering::HatchFilter),
            NULL
          };

          DEFINE_TYPE(PythonHatchFilter, t_PythonHatchFilter, PythonHatchFilter);

          void t_PythonHatchFilter::install(PyObject *module)
          {
            installType(&PY_TYPE(PythonHatchFilter), &PY_TYPE_DEF(PythonHatchFilter), module, "PythonHatchFilter", 0);
          }

          void t_PythonHatchFilter::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonHatchFilter), "class_", make_descriptor(PythonHatchFilter::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonHatchFilter), "wrapfn_", make_descriptor(t_PythonHatchFilter::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonHatchFilter), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_PythonHatchFilter_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, PythonHatchFilter::initializeClass, 1)))
              return NULL;
            return t_PythonHatchFilter::wrap_Object(PythonHatchFilter(((t_PythonHatchFilter *) arg)->object.this$));
          }
          static PyObject *t_PythonHatchFilter_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, PythonHatchFilter::initializeClass, 0))
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
#include "org/orekit/frames/ITRFVersion$Converter.h"
#include "org/orekit/frames/FieldTransform.h"
#include "org/orekit/frames/TransformProvider.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/orekit/frames/Transform.h"
#include "org/orekit/frames/FieldStaticTransform.h"
#include "org/orekit/frames/StaticTransform.h"
#include "java/lang/Class.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/frames/ITRFVersion.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace frames {

      ::java::lang::Class *ITRFVersion$Converter::class$ = NULL;
      jmethodID *ITRFVersion$Converter::mids$ = NULL;
      bool ITRFVersion$Converter::live$ = false;

      jclass ITRFVersion$Converter::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/frames/ITRFVersion$Converter");

          mids$ = new jmethodID[max_mid];
          mids$[mid_getDestination_8bcdfad365f6d36a] = env->getMethodID(cls, "getDestination", "()Lorg/orekit/frames/ITRFVersion;");
          mids$[mid_getOrigin_8bcdfad365f6d36a] = env->getMethodID(cls, "getOrigin", "()Lorg/orekit/frames/ITRFVersion;");
          mids$[mid_getStaticTransform_5f13614b572308e8] = env->getMethodID(cls, "getStaticTransform", "(Lorg/orekit/time/AbsoluteDate;)Lorg/orekit/frames/StaticTransform;");
          mids$[mid_getStaticTransform_09ace34b8a3460b2] = env->getMethodID(cls, "getStaticTransform", "(Lorg/orekit/time/FieldAbsoluteDate;)Lorg/orekit/frames/FieldStaticTransform;");
          mids$[mid_getTransform_976d4bc81671ce42] = env->getMethodID(cls, "getTransform", "(Lorg/orekit/time/AbsoluteDate;)Lorg/orekit/frames/Transform;");
          mids$[mid_getTransform_7a8ca6856fe3fc9e] = env->getMethodID(cls, "getTransform", "(Lorg/orekit/time/FieldAbsoluteDate;)Lorg/orekit/frames/FieldTransform;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ::org::orekit::frames::ITRFVersion ITRFVersion$Converter::getDestination() const
      {
        return ::org::orekit::frames::ITRFVersion(env->callObjectMethod(this$, mids$[mid_getDestination_8bcdfad365f6d36a]));
      }

      ::org::orekit::frames::ITRFVersion ITRFVersion$Converter::getOrigin() const
      {
        return ::org::orekit::frames::ITRFVersion(env->callObjectMethod(this$, mids$[mid_getOrigin_8bcdfad365f6d36a]));
      }

      ::org::orekit::frames::StaticTransform ITRFVersion$Converter::getStaticTransform(const ::org::orekit::time::AbsoluteDate & a0) const
      {
        return ::org::orekit::frames::StaticTransform(env->callObjectMethod(this$, mids$[mid_getStaticTransform_5f13614b572308e8], a0.this$));
      }

      ::org::orekit::frames::FieldStaticTransform ITRFVersion$Converter::getStaticTransform(const ::org::orekit::time::FieldAbsoluteDate & a0) const
      {
        return ::org::orekit::frames::FieldStaticTransform(env->callObjectMethod(this$, mids$[mid_getStaticTransform_09ace34b8a3460b2], a0.this$));
      }

      ::org::orekit::frames::Transform ITRFVersion$Converter::getTransform(const ::org::orekit::time::AbsoluteDate & a0) const
      {
        return ::org::orekit::frames::Transform(env->callObjectMethod(this$, mids$[mid_getTransform_976d4bc81671ce42], a0.this$));
      }

      ::org::orekit::frames::FieldTransform ITRFVersion$Converter::getTransform(const ::org::orekit::time::FieldAbsoluteDate & a0) const
      {
        return ::org::orekit::frames::FieldTransform(env->callObjectMethod(this$, mids$[mid_getTransform_7a8ca6856fe3fc9e], a0.this$));
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
      static PyObject *t_ITRFVersion$Converter_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_ITRFVersion$Converter_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_ITRFVersion$Converter_of_(t_ITRFVersion$Converter *self, PyObject *args);
      static PyObject *t_ITRFVersion$Converter_getDestination(t_ITRFVersion$Converter *self);
      static PyObject *t_ITRFVersion$Converter_getOrigin(t_ITRFVersion$Converter *self);
      static PyObject *t_ITRFVersion$Converter_getStaticTransform(t_ITRFVersion$Converter *self, PyObject *args);
      static PyObject *t_ITRFVersion$Converter_getTransform(t_ITRFVersion$Converter *self, PyObject *args);
      static PyObject *t_ITRFVersion$Converter_get__destination(t_ITRFVersion$Converter *self, void *data);
      static PyObject *t_ITRFVersion$Converter_get__origin(t_ITRFVersion$Converter *self, void *data);
      static PyObject *t_ITRFVersion$Converter_get__parameters_(t_ITRFVersion$Converter *self, void *data);
      static PyGetSetDef t_ITRFVersion$Converter__fields_[] = {
        DECLARE_GET_FIELD(t_ITRFVersion$Converter, destination),
        DECLARE_GET_FIELD(t_ITRFVersion$Converter, origin),
        DECLARE_GET_FIELD(t_ITRFVersion$Converter, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_ITRFVersion$Converter__methods_[] = {
        DECLARE_METHOD(t_ITRFVersion$Converter, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_ITRFVersion$Converter, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_ITRFVersion$Converter, of_, METH_VARARGS),
        DECLARE_METHOD(t_ITRFVersion$Converter, getDestination, METH_NOARGS),
        DECLARE_METHOD(t_ITRFVersion$Converter, getOrigin, METH_NOARGS),
        DECLARE_METHOD(t_ITRFVersion$Converter, getStaticTransform, METH_VARARGS),
        DECLARE_METHOD(t_ITRFVersion$Converter, getTransform, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(ITRFVersion$Converter)[] = {
        { Py_tp_methods, t_ITRFVersion$Converter__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_ITRFVersion$Converter__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(ITRFVersion$Converter)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(ITRFVersion$Converter, t_ITRFVersion$Converter, ITRFVersion$Converter);
      PyObject *t_ITRFVersion$Converter::wrap_Object(const ITRFVersion$Converter& object, PyTypeObject *p0)
      {
        PyObject *obj = t_ITRFVersion$Converter::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_ITRFVersion$Converter *self = (t_ITRFVersion$Converter *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_ITRFVersion$Converter::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_ITRFVersion$Converter::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_ITRFVersion$Converter *self = (t_ITRFVersion$Converter *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_ITRFVersion$Converter::install(PyObject *module)
      {
        installType(&PY_TYPE(ITRFVersion$Converter), &PY_TYPE_DEF(ITRFVersion$Converter), module, "ITRFVersion$Converter", 0);
      }

      void t_ITRFVersion$Converter::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(ITRFVersion$Converter), "class_", make_descriptor(ITRFVersion$Converter::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ITRFVersion$Converter), "wrapfn_", make_descriptor(t_ITRFVersion$Converter::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ITRFVersion$Converter), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_ITRFVersion$Converter_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, ITRFVersion$Converter::initializeClass, 1)))
          return NULL;
        return t_ITRFVersion$Converter::wrap_Object(ITRFVersion$Converter(((t_ITRFVersion$Converter *) arg)->object.this$));
      }
      static PyObject *t_ITRFVersion$Converter_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, ITRFVersion$Converter::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_ITRFVersion$Converter_of_(t_ITRFVersion$Converter *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static PyObject *t_ITRFVersion$Converter_getDestination(t_ITRFVersion$Converter *self)
      {
        ::org::orekit::frames::ITRFVersion result((jobject) NULL);
        OBJ_CALL(result = self->object.getDestination());
        return ::org::orekit::frames::t_ITRFVersion::wrap_Object(result);
      }

      static PyObject *t_ITRFVersion$Converter_getOrigin(t_ITRFVersion$Converter *self)
      {
        ::org::orekit::frames::ITRFVersion result((jobject) NULL);
        OBJ_CALL(result = self->object.getOrigin());
        return ::org::orekit::frames::t_ITRFVersion::wrap_Object(result);
      }

      static PyObject *t_ITRFVersion$Converter_getStaticTransform(t_ITRFVersion$Converter *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            ::org::orekit::frames::StaticTransform result((jobject) NULL);

            if (!parseArgs(args, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.getStaticTransform(a0));
              return ::org::orekit::frames::t_StaticTransform::wrap_Object(result);
            }
          }
          {
            ::org::orekit::time::FieldAbsoluteDate a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::frames::FieldStaticTransform result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::orekit::time::FieldAbsoluteDate::initializeClass, &a0, &p0, ::org::orekit::time::t_FieldAbsoluteDate::parameters_))
            {
              OBJ_CALL(result = self->object.getStaticTransform(a0));
              return ::org::orekit::frames::t_FieldStaticTransform::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "getStaticTransform", args);
        return NULL;
      }

      static PyObject *t_ITRFVersion$Converter_getTransform(t_ITRFVersion$Converter *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            ::org::orekit::frames::Transform result((jobject) NULL);

            if (!parseArgs(args, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.getTransform(a0));
              return ::org::orekit::frames::t_Transform::wrap_Object(result);
            }
          }
          {
            ::org::orekit::time::FieldAbsoluteDate a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::frames::FieldTransform result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::orekit::time::FieldAbsoluteDate::initializeClass, &a0, &p0, ::org::orekit::time::t_FieldAbsoluteDate::parameters_))
            {
              OBJ_CALL(result = self->object.getTransform(a0));
              return ::org::orekit::frames::t_FieldTransform::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "getTransform", args);
        return NULL;
      }
      static PyObject *t_ITRFVersion$Converter_get__parameters_(t_ITRFVersion$Converter *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }

      static PyObject *t_ITRFVersion$Converter_get__destination(t_ITRFVersion$Converter *self, void *data)
      {
        ::org::orekit::frames::ITRFVersion value((jobject) NULL);
        OBJ_CALL(value = self->object.getDestination());
        return ::org::orekit::frames::t_ITRFVersion::wrap_Object(value);
      }

      static PyObject *t_ITRFVersion$Converter_get__origin(t_ITRFVersion$Converter *self, void *data)
      {
        ::org::orekit::frames::ITRFVersion value((jobject) NULL);
        OBJ_CALL(value = self->object.getOrigin());
        return ::org::orekit::frames::t_ITRFVersion::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/utils/lexical/ParseToken$IndexedStringConsumer.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace utils {
          namespace lexical {

            ::java::lang::Class *ParseToken$IndexedStringConsumer::class$ = NULL;
            jmethodID *ParseToken$IndexedStringConsumer::mids$ = NULL;
            bool ParseToken$IndexedStringConsumer::live$ = false;

            jclass ParseToken$IndexedStringConsumer::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/utils/lexical/ParseToken$IndexedStringConsumer");

                mids$ = new jmethodID[max_mid];
                mids$[mid_accept_5817b937d38eafc1] = env->getMethodID(cls, "accept", "(ILjava/lang/String;)V");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            void ParseToken$IndexedStringConsumer::accept(jint a0, const ::java::lang::String & a1) const
            {
              env->callVoidMethod(this$, mids$[mid_accept_5817b937d38eafc1], a0, a1.this$);
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
          namespace lexical {
            static PyObject *t_ParseToken$IndexedStringConsumer_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_ParseToken$IndexedStringConsumer_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_ParseToken$IndexedStringConsumer_accept(t_ParseToken$IndexedStringConsumer *self, PyObject *args);

            static PyMethodDef t_ParseToken$IndexedStringConsumer__methods_[] = {
              DECLARE_METHOD(t_ParseToken$IndexedStringConsumer, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_ParseToken$IndexedStringConsumer, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_ParseToken$IndexedStringConsumer, accept, METH_VARARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(ParseToken$IndexedStringConsumer)[] = {
              { Py_tp_methods, t_ParseToken$IndexedStringConsumer__methods_ },
              { Py_tp_init, (void *) abstract_init },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(ParseToken$IndexedStringConsumer)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(ParseToken$IndexedStringConsumer, t_ParseToken$IndexedStringConsumer, ParseToken$IndexedStringConsumer);

            void t_ParseToken$IndexedStringConsumer::install(PyObject *module)
            {
              installType(&PY_TYPE(ParseToken$IndexedStringConsumer), &PY_TYPE_DEF(ParseToken$IndexedStringConsumer), module, "ParseToken$IndexedStringConsumer", 0);
            }

            void t_ParseToken$IndexedStringConsumer::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(ParseToken$IndexedStringConsumer), "class_", make_descriptor(ParseToken$IndexedStringConsumer::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ParseToken$IndexedStringConsumer), "wrapfn_", make_descriptor(t_ParseToken$IndexedStringConsumer::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ParseToken$IndexedStringConsumer), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_ParseToken$IndexedStringConsumer_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, ParseToken$IndexedStringConsumer::initializeClass, 1)))
                return NULL;
              return t_ParseToken$IndexedStringConsumer::wrap_Object(ParseToken$IndexedStringConsumer(((t_ParseToken$IndexedStringConsumer *) arg)->object.this$));
            }
            static PyObject *t_ParseToken$IndexedStringConsumer_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, ParseToken$IndexedStringConsumer::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_ParseToken$IndexedStringConsumer_accept(t_ParseToken$IndexedStringConsumer *self, PyObject *args)
            {
              jint a0;
              ::java::lang::String a1((jobject) NULL);

              if (!parseArgs(args, "Is", &a0, &a1))
              {
                OBJ_CALL(self->object.accept(a0, a1));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "accept", args);
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
#include "org/hipparchus/ode/nonstiff/AdaptiveStepsizeFieldIntegrator.h"
#include "org/hipparchus/ode/FieldODEStateAndDerivative.h"
#include "org/hipparchus/ode/FieldEquationsMapper.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "org/hipparchus/Field.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "java/lang/Class.h"
#include "org/hipparchus/exception/MathIllegalStateException.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace ode {
      namespace nonstiff {

        ::java::lang::Class *AdaptiveStepsizeFieldIntegrator::class$ = NULL;
        jmethodID *AdaptiveStepsizeFieldIntegrator::mids$ = NULL;
        bool AdaptiveStepsizeFieldIntegrator::live$ = false;

        jclass AdaptiveStepsizeFieldIntegrator::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/ode/nonstiff/AdaptiveStepsizeFieldIntegrator");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_e38e4758cd604cc2] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/Field;Ljava/lang/String;DD[D[D)V");
            mids$[mid_init$_730e147117073a39] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/Field;Ljava/lang/String;DDDD)V");
            mids$[mid_getMaxStep_b74f83833fdad017] = env->getMethodID(cls, "getMaxStep", "()D");
            mids$[mid_getMinStep_b74f83833fdad017] = env->getMethodID(cls, "getMinStep", "()D");
            mids$[mid_initializeStep_6fef5455357abf9e] = env->getMethodID(cls, "initializeStep", "(ZI[Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/ode/FieldODEStateAndDerivative;Lorg/hipparchus/ode/FieldEquationsMapper;)D");
            mids$[mid_setInitialStepSize_8ba9fe7a847cecad] = env->getMethodID(cls, "setInitialStepSize", "(D)V");
            mids$[mid_setStepSizeControl_aa31b8b89ee72c31] = env->getMethodID(cls, "setStepSizeControl", "(DD[D[D)V");
            mids$[mid_setStepSizeControl_49f4b5153d696ea5] = env->getMethodID(cls, "setStepSizeControl", "(DDDD)V");
            mids$[mid_getStepSizeHelper_67c50c21236171f5] = env->getMethodID(cls, "getStepSizeHelper", "()Lorg/hipparchus/ode/nonstiff/StepsizeHelper;");
            mids$[mid_sanityChecks_c09b0b0bdb27b138] = env->getMethodID(cls, "sanityChecks", "(Lorg/hipparchus/ode/FieldODEState;Lorg/hipparchus/CalculusFieldElement;)V");
            mids$[mid_resetInternalState_a1fa5dae97ea5ed2] = env->getMethodID(cls, "resetInternalState", "()V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        AdaptiveStepsizeFieldIntegrator::AdaptiveStepsizeFieldIntegrator(const ::org::hipparchus::Field & a0, const ::java::lang::String & a1, jdouble a2, jdouble a3, const JArray< jdouble > & a4, const JArray< jdouble > & a5) : ::org::hipparchus::ode::AbstractFieldIntegrator(env->newObject(initializeClass, &mids$, mid_init$_e38e4758cd604cc2, a0.this$, a1.this$, a2, a3, a4.this$, a5.this$)) {}

        AdaptiveStepsizeFieldIntegrator::AdaptiveStepsizeFieldIntegrator(const ::org::hipparchus::Field & a0, const ::java::lang::String & a1, jdouble a2, jdouble a3, jdouble a4, jdouble a5) : ::org::hipparchus::ode::AbstractFieldIntegrator(env->newObject(initializeClass, &mids$, mid_init$_730e147117073a39, a0.this$, a1.this$, a2, a3, a4, a5)) {}

        jdouble AdaptiveStepsizeFieldIntegrator::getMaxStep() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getMaxStep_b74f83833fdad017]);
        }

        jdouble AdaptiveStepsizeFieldIntegrator::getMinStep() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getMinStep_b74f83833fdad017]);
        }

        jdouble AdaptiveStepsizeFieldIntegrator::initializeStep(jboolean a0, jint a1, const JArray< ::org::hipparchus::CalculusFieldElement > & a2, const ::org::hipparchus::ode::FieldODEStateAndDerivative & a3, const ::org::hipparchus::ode::FieldEquationsMapper & a4) const
        {
          return env->callDoubleMethod(this$, mids$[mid_initializeStep_6fef5455357abf9e], a0, a1, a2.this$, a3.this$, a4.this$);
        }

        void AdaptiveStepsizeFieldIntegrator::setInitialStepSize(jdouble a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setInitialStepSize_8ba9fe7a847cecad], a0);
        }

        void AdaptiveStepsizeFieldIntegrator::setStepSizeControl(jdouble a0, jdouble a1, const JArray< jdouble > & a2, const JArray< jdouble > & a3) const
        {
          env->callVoidMethod(this$, mids$[mid_setStepSizeControl_aa31b8b89ee72c31], a0, a1, a2.this$, a3.this$);
        }

        void AdaptiveStepsizeFieldIntegrator::setStepSizeControl(jdouble a0, jdouble a1, jdouble a2, jdouble a3) const
        {
          env->callVoidMethod(this$, mids$[mid_setStepSizeControl_49f4b5153d696ea5], a0, a1, a2, a3);
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
      namespace nonstiff {
        static PyObject *t_AdaptiveStepsizeFieldIntegrator_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_AdaptiveStepsizeFieldIntegrator_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_AdaptiveStepsizeFieldIntegrator_of_(t_AdaptiveStepsizeFieldIntegrator *self, PyObject *args);
        static int t_AdaptiveStepsizeFieldIntegrator_init_(t_AdaptiveStepsizeFieldIntegrator *self, PyObject *args, PyObject *kwds);
        static PyObject *t_AdaptiveStepsizeFieldIntegrator_getMaxStep(t_AdaptiveStepsizeFieldIntegrator *self);
        static PyObject *t_AdaptiveStepsizeFieldIntegrator_getMinStep(t_AdaptiveStepsizeFieldIntegrator *self);
        static PyObject *t_AdaptiveStepsizeFieldIntegrator_initializeStep(t_AdaptiveStepsizeFieldIntegrator *self, PyObject *args);
        static PyObject *t_AdaptiveStepsizeFieldIntegrator_setInitialStepSize(t_AdaptiveStepsizeFieldIntegrator *self, PyObject *arg);
        static PyObject *t_AdaptiveStepsizeFieldIntegrator_setStepSizeControl(t_AdaptiveStepsizeFieldIntegrator *self, PyObject *args);
        static int t_AdaptiveStepsizeFieldIntegrator_set__initialStepSize(t_AdaptiveStepsizeFieldIntegrator *self, PyObject *arg, void *data);
        static PyObject *t_AdaptiveStepsizeFieldIntegrator_get__maxStep(t_AdaptiveStepsizeFieldIntegrator *self, void *data);
        static PyObject *t_AdaptiveStepsizeFieldIntegrator_get__minStep(t_AdaptiveStepsizeFieldIntegrator *self, void *data);
        static PyObject *t_AdaptiveStepsizeFieldIntegrator_get__parameters_(t_AdaptiveStepsizeFieldIntegrator *self, void *data);
        static PyGetSetDef t_AdaptiveStepsizeFieldIntegrator__fields_[] = {
          DECLARE_SET_FIELD(t_AdaptiveStepsizeFieldIntegrator, initialStepSize),
          DECLARE_GET_FIELD(t_AdaptiveStepsizeFieldIntegrator, maxStep),
          DECLARE_GET_FIELD(t_AdaptiveStepsizeFieldIntegrator, minStep),
          DECLARE_GET_FIELD(t_AdaptiveStepsizeFieldIntegrator, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_AdaptiveStepsizeFieldIntegrator__methods_[] = {
          DECLARE_METHOD(t_AdaptiveStepsizeFieldIntegrator, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AdaptiveStepsizeFieldIntegrator, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AdaptiveStepsizeFieldIntegrator, of_, METH_VARARGS),
          DECLARE_METHOD(t_AdaptiveStepsizeFieldIntegrator, getMaxStep, METH_NOARGS),
          DECLARE_METHOD(t_AdaptiveStepsizeFieldIntegrator, getMinStep, METH_NOARGS),
          DECLARE_METHOD(t_AdaptiveStepsizeFieldIntegrator, initializeStep, METH_VARARGS),
          DECLARE_METHOD(t_AdaptiveStepsizeFieldIntegrator, setInitialStepSize, METH_O),
          DECLARE_METHOD(t_AdaptiveStepsizeFieldIntegrator, setStepSizeControl, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(AdaptiveStepsizeFieldIntegrator)[] = {
          { Py_tp_methods, t_AdaptiveStepsizeFieldIntegrator__methods_ },
          { Py_tp_init, (void *) t_AdaptiveStepsizeFieldIntegrator_init_ },
          { Py_tp_getset, t_AdaptiveStepsizeFieldIntegrator__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(AdaptiveStepsizeFieldIntegrator)[] = {
          &PY_TYPE_DEF(::org::hipparchus::ode::AbstractFieldIntegrator),
          NULL
        };

        DEFINE_TYPE(AdaptiveStepsizeFieldIntegrator, t_AdaptiveStepsizeFieldIntegrator, AdaptiveStepsizeFieldIntegrator);
        PyObject *t_AdaptiveStepsizeFieldIntegrator::wrap_Object(const AdaptiveStepsizeFieldIntegrator& object, PyTypeObject *p0)
        {
          PyObject *obj = t_AdaptiveStepsizeFieldIntegrator::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_AdaptiveStepsizeFieldIntegrator *self = (t_AdaptiveStepsizeFieldIntegrator *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_AdaptiveStepsizeFieldIntegrator::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_AdaptiveStepsizeFieldIntegrator::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_AdaptiveStepsizeFieldIntegrator *self = (t_AdaptiveStepsizeFieldIntegrator *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_AdaptiveStepsizeFieldIntegrator::install(PyObject *module)
        {
          installType(&PY_TYPE(AdaptiveStepsizeFieldIntegrator), &PY_TYPE_DEF(AdaptiveStepsizeFieldIntegrator), module, "AdaptiveStepsizeFieldIntegrator", 0);
        }

        void t_AdaptiveStepsizeFieldIntegrator::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(AdaptiveStepsizeFieldIntegrator), "class_", make_descriptor(AdaptiveStepsizeFieldIntegrator::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AdaptiveStepsizeFieldIntegrator), "wrapfn_", make_descriptor(t_AdaptiveStepsizeFieldIntegrator::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AdaptiveStepsizeFieldIntegrator), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_AdaptiveStepsizeFieldIntegrator_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, AdaptiveStepsizeFieldIntegrator::initializeClass, 1)))
            return NULL;
          return t_AdaptiveStepsizeFieldIntegrator::wrap_Object(AdaptiveStepsizeFieldIntegrator(((t_AdaptiveStepsizeFieldIntegrator *) arg)->object.this$));
        }
        static PyObject *t_AdaptiveStepsizeFieldIntegrator_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, AdaptiveStepsizeFieldIntegrator::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_AdaptiveStepsizeFieldIntegrator_of_(t_AdaptiveStepsizeFieldIntegrator *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_AdaptiveStepsizeFieldIntegrator_init_(t_AdaptiveStepsizeFieldIntegrator *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 6:
            {
              ::org::hipparchus::Field a0((jobject) NULL);
              PyTypeObject **p0;
              ::java::lang::String a1((jobject) NULL);
              jdouble a2;
              jdouble a3;
              JArray< jdouble > a4((jobject) NULL);
              JArray< jdouble > a5((jobject) NULL);
              AdaptiveStepsizeFieldIntegrator object((jobject) NULL);

              if (!parseArgs(args, "KsDD[D[D", ::org::hipparchus::Field::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1, &a2, &a3, &a4, &a5))
              {
                INT_CALL(object = AdaptiveStepsizeFieldIntegrator(a0, a1, a2, a3, a4, a5));
                self->object = object;
                break;
              }
            }
            {
              ::org::hipparchus::Field a0((jobject) NULL);
              PyTypeObject **p0;
              ::java::lang::String a1((jobject) NULL);
              jdouble a2;
              jdouble a3;
              jdouble a4;
              jdouble a5;
              AdaptiveStepsizeFieldIntegrator object((jobject) NULL);

              if (!parseArgs(args, "KsDDDD", ::org::hipparchus::Field::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1, &a2, &a3, &a4, &a5))
              {
                INT_CALL(object = AdaptiveStepsizeFieldIntegrator(a0, a1, a2, a3, a4, a5));
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

        static PyObject *t_AdaptiveStepsizeFieldIntegrator_getMaxStep(t_AdaptiveStepsizeFieldIntegrator *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getMaxStep());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_AdaptiveStepsizeFieldIntegrator_getMinStep(t_AdaptiveStepsizeFieldIntegrator *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getMinStep());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_AdaptiveStepsizeFieldIntegrator_initializeStep(t_AdaptiveStepsizeFieldIntegrator *self, PyObject *args)
        {
          jboolean a0;
          jint a1;
          JArray< ::org::hipparchus::CalculusFieldElement > a2((jobject) NULL);
          PyTypeObject **p2;
          ::org::hipparchus::ode::FieldODEStateAndDerivative a3((jobject) NULL);
          PyTypeObject **p3;
          ::org::hipparchus::ode::FieldEquationsMapper a4((jobject) NULL);
          PyTypeObject **p4;
          jdouble result;

          if (!parseArgs(args, "ZI[KKK", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::ode::FieldODEStateAndDerivative::initializeClass, ::org::hipparchus::ode::FieldEquationsMapper::initializeClass, &a0, &a1, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a3, &p3, ::org::hipparchus::ode::t_FieldODEStateAndDerivative::parameters_, &a4, &p4, ::org::hipparchus::ode::t_FieldEquationsMapper::parameters_))
          {
            OBJ_CALL(result = self->object.initializeStep(a0, a1, a2, a3, a4));
            return PyFloat_FromDouble((double) result);
          }

          PyErr_SetArgsError((PyObject *) self, "initializeStep", args);
          return NULL;
        }

        static PyObject *t_AdaptiveStepsizeFieldIntegrator_setInitialStepSize(t_AdaptiveStepsizeFieldIntegrator *self, PyObject *arg)
        {
          jdouble a0;

          if (!parseArg(arg, "D", &a0))
          {
            OBJ_CALL(self->object.setInitialStepSize(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setInitialStepSize", arg);
          return NULL;
        }

        static PyObject *t_AdaptiveStepsizeFieldIntegrator_setStepSizeControl(t_AdaptiveStepsizeFieldIntegrator *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 4:
            {
              jdouble a0;
              jdouble a1;
              JArray< jdouble > a2((jobject) NULL);
              JArray< jdouble > a3((jobject) NULL);

              if (!parseArgs(args, "DD[D[D", &a0, &a1, &a2, &a3))
              {
                OBJ_CALL(self->object.setStepSizeControl(a0, a1, a2, a3));
                Py_RETURN_NONE;
              }
            }
            {
              jdouble a0;
              jdouble a1;
              jdouble a2;
              jdouble a3;

              if (!parseArgs(args, "DDDD", &a0, &a1, &a2, &a3))
              {
                OBJ_CALL(self->object.setStepSizeControl(a0, a1, a2, a3));
                Py_RETURN_NONE;
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "setStepSizeControl", args);
          return NULL;
        }
        static PyObject *t_AdaptiveStepsizeFieldIntegrator_get__parameters_(t_AdaptiveStepsizeFieldIntegrator *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static int t_AdaptiveStepsizeFieldIntegrator_set__initialStepSize(t_AdaptiveStepsizeFieldIntegrator *self, PyObject *arg, void *data)
        {
          {
            jdouble value;
            if (!parseArg(arg, "D", &value))
            {
              INT_CALL(self->object.setInitialStepSize(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "initialStepSize", arg);
          return -1;
        }

        static PyObject *t_AdaptiveStepsizeFieldIntegrator_get__maxStep(t_AdaptiveStepsizeFieldIntegrator *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getMaxStep());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_AdaptiveStepsizeFieldIntegrator_get__minStep(t_AdaptiveStepsizeFieldIntegrator *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getMinStep());
          return PyFloat_FromDouble((double) value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/ndm/odm/ocm/OrbitCategory.h"
#include "java/lang/String.h"
#include "org/orekit/files/ccsds/ndm/odm/ocm/OrbitCategory.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace odm {
            namespace ocm {

              ::java::lang::Class *OrbitCategory::class$ = NULL;
              jmethodID *OrbitCategory::mids$ = NULL;
              bool OrbitCategory::live$ = false;
              OrbitCategory *OrbitCategory::EGO = NULL;
              OrbitCategory *OrbitCategory::ESO = NULL;
              OrbitCategory *OrbitCategory::GEO = NULL;
              OrbitCategory *OrbitCategory::GHO = NULL;
              OrbitCategory *OrbitCategory::GSO = NULL;
              OrbitCategory *OrbitCategory::GTO = NULL;
              OrbitCategory *OrbitCategory::HAO = NULL;
              OrbitCategory *OrbitCategory::HEO = NULL;
              OrbitCategory *OrbitCategory::IGO = NULL;
              OrbitCategory *OrbitCategory::LEO = NULL;
              OrbitCategory *OrbitCategory::LMO = NULL;
              OrbitCategory *OrbitCategory::MEO = NULL;
              OrbitCategory *OrbitCategory::MGO = NULL;
              OrbitCategory *OrbitCategory::NSO = NULL;
              OrbitCategory *OrbitCategory::UFO = NULL;

              jclass OrbitCategory::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/odm/ocm/OrbitCategory");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_toString_1c1fa1e935d6cdcf] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");
                  mids$[mid_valueOf_b687ea984f4d4377] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitCategory;");
                  mids$[mid_values_fb1dd1d00e06db3d] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitCategory;");

                  class$ = new ::java::lang::Class(cls);
                  cls = (jclass) class$->this$;

                  EGO = new OrbitCategory(env->getStaticObjectField(cls, "EGO", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitCategory;"));
                  ESO = new OrbitCategory(env->getStaticObjectField(cls, "ESO", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitCategory;"));
                  GEO = new OrbitCategory(env->getStaticObjectField(cls, "GEO", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitCategory;"));
                  GHO = new OrbitCategory(env->getStaticObjectField(cls, "GHO", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitCategory;"));
                  GSO = new OrbitCategory(env->getStaticObjectField(cls, "GSO", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitCategory;"));
                  GTO = new OrbitCategory(env->getStaticObjectField(cls, "GTO", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitCategory;"));
                  HAO = new OrbitCategory(env->getStaticObjectField(cls, "HAO", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitCategory;"));
                  HEO = new OrbitCategory(env->getStaticObjectField(cls, "HEO", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitCategory;"));
                  IGO = new OrbitCategory(env->getStaticObjectField(cls, "IGO", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitCategory;"));
                  LEO = new OrbitCategory(env->getStaticObjectField(cls, "LEO", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitCategory;"));
                  LMO = new OrbitCategory(env->getStaticObjectField(cls, "LMO", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitCategory;"));
                  MEO = new OrbitCategory(env->getStaticObjectField(cls, "MEO", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitCategory;"));
                  MGO = new OrbitCategory(env->getStaticObjectField(cls, "MGO", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitCategory;"));
                  NSO = new OrbitCategory(env->getStaticObjectField(cls, "NSO", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitCategory;"));
                  UFO = new OrbitCategory(env->getStaticObjectField(cls, "UFO", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitCategory;"));
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              ::java::lang::String OrbitCategory::toString() const
              {
                return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_1c1fa1e935d6cdcf]));
              }

              OrbitCategory OrbitCategory::valueOf(const ::java::lang::String & a0)
              {
                jclass cls = env->getClass(initializeClass);
                return OrbitCategory(env->callStaticObjectMethod(cls, mids$[mid_valueOf_b687ea984f4d4377], a0.this$));
              }

              JArray< OrbitCategory > OrbitCategory::values()
              {
                jclass cls = env->getClass(initializeClass);
                return JArray< OrbitCategory >(env->callStaticObjectMethod(cls, mids$[mid_values_fb1dd1d00e06db3d]));
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
              static PyObject *t_OrbitCategory_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_OrbitCategory_instance_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_OrbitCategory_of_(t_OrbitCategory *self, PyObject *args);
              static PyObject *t_OrbitCategory_toString(t_OrbitCategory *self, PyObject *args);
              static PyObject *t_OrbitCategory_valueOf(PyTypeObject *type, PyObject *args);
              static PyObject *t_OrbitCategory_values(PyTypeObject *type);
              static PyObject *t_OrbitCategory_get__parameters_(t_OrbitCategory *self, void *data);
              static PyGetSetDef t_OrbitCategory__fields_[] = {
                DECLARE_GET_FIELD(t_OrbitCategory, parameters_),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_OrbitCategory__methods_[] = {
                DECLARE_METHOD(t_OrbitCategory, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_OrbitCategory, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_OrbitCategory, of_, METH_VARARGS),
                DECLARE_METHOD(t_OrbitCategory, toString, METH_VARARGS),
                DECLARE_METHOD(t_OrbitCategory, valueOf, METH_VARARGS | METH_CLASS),
                DECLARE_METHOD(t_OrbitCategory, values, METH_NOARGS | METH_CLASS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(OrbitCategory)[] = {
                { Py_tp_methods, t_OrbitCategory__methods_ },
                { Py_tp_init, (void *) abstract_init },
                { Py_tp_getset, t_OrbitCategory__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(OrbitCategory)[] = {
                &PY_TYPE_DEF(::java::lang::Enum),
                NULL
              };

              DEFINE_TYPE(OrbitCategory, t_OrbitCategory, OrbitCategory);
              PyObject *t_OrbitCategory::wrap_Object(const OrbitCategory& object, PyTypeObject *p0)
              {
                PyObject *obj = t_OrbitCategory::wrap_Object(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_OrbitCategory *self = (t_OrbitCategory *) obj;
                  self->parameters[0] = p0;
                }
                return obj;
              }

              PyObject *t_OrbitCategory::wrap_jobject(const jobject& object, PyTypeObject *p0)
              {
                PyObject *obj = t_OrbitCategory::wrap_jobject(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_OrbitCategory *self = (t_OrbitCategory *) obj;
                  self->parameters[0] = p0;
                }
                return obj;
              }

              void t_OrbitCategory::install(PyObject *module)
              {
                installType(&PY_TYPE(OrbitCategory), &PY_TYPE_DEF(OrbitCategory), module, "OrbitCategory", 0);
              }

              void t_OrbitCategory::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitCategory), "class_", make_descriptor(OrbitCategory::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitCategory), "wrapfn_", make_descriptor(t_OrbitCategory::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitCategory), "boxfn_", make_descriptor(boxObject));
                env->getClass(OrbitCategory::initializeClass);
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitCategory), "EGO", make_descriptor(t_OrbitCategory::wrap_Object(*OrbitCategory::EGO)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitCategory), "ESO", make_descriptor(t_OrbitCategory::wrap_Object(*OrbitCategory::ESO)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitCategory), "GEO", make_descriptor(t_OrbitCategory::wrap_Object(*OrbitCategory::GEO)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitCategory), "GHO", make_descriptor(t_OrbitCategory::wrap_Object(*OrbitCategory::GHO)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitCategory), "GSO", make_descriptor(t_OrbitCategory::wrap_Object(*OrbitCategory::GSO)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitCategory), "GTO", make_descriptor(t_OrbitCategory::wrap_Object(*OrbitCategory::GTO)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitCategory), "HAO", make_descriptor(t_OrbitCategory::wrap_Object(*OrbitCategory::HAO)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitCategory), "HEO", make_descriptor(t_OrbitCategory::wrap_Object(*OrbitCategory::HEO)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitCategory), "IGO", make_descriptor(t_OrbitCategory::wrap_Object(*OrbitCategory::IGO)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitCategory), "LEO", make_descriptor(t_OrbitCategory::wrap_Object(*OrbitCategory::LEO)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitCategory), "LMO", make_descriptor(t_OrbitCategory::wrap_Object(*OrbitCategory::LMO)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitCategory), "MEO", make_descriptor(t_OrbitCategory::wrap_Object(*OrbitCategory::MEO)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitCategory), "MGO", make_descriptor(t_OrbitCategory::wrap_Object(*OrbitCategory::MGO)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitCategory), "NSO", make_descriptor(t_OrbitCategory::wrap_Object(*OrbitCategory::NSO)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitCategory), "UFO", make_descriptor(t_OrbitCategory::wrap_Object(*OrbitCategory::UFO)));
              }

              static PyObject *t_OrbitCategory_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, OrbitCategory::initializeClass, 1)))
                  return NULL;
                return t_OrbitCategory::wrap_Object(OrbitCategory(((t_OrbitCategory *) arg)->object.this$));
              }
              static PyObject *t_OrbitCategory_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, OrbitCategory::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static PyObject *t_OrbitCategory_of_(t_OrbitCategory *self, PyObject *args)
              {
                if (!parseArg(args, "T", 1, &(self->parameters)))
                  Py_RETURN_SELF;
                return PyErr_SetArgsError((PyObject *) self, "of_", args);
              }

              static PyObject *t_OrbitCategory_toString(t_OrbitCategory *self, PyObject *args)
              {
                ::java::lang::String result((jobject) NULL);

                if (!parseArgs(args, ""))
                {
                  OBJ_CALL(result = self->object.toString());
                  return j2p(result);
                }

                return callSuper(PY_TYPE(OrbitCategory), (PyObject *) self, "toString", args, 2);
              }

              static PyObject *t_OrbitCategory_valueOf(PyTypeObject *type, PyObject *args)
              {
                ::java::lang::String a0((jobject) NULL);
                OrbitCategory result((jobject) NULL);

                if (!parseArgs(args, "s", &a0))
                {
                  OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::odm::ocm::OrbitCategory::valueOf(a0));
                  return t_OrbitCategory::wrap_Object(result);
                }

                return callSuper(type, "valueOf", args, 2);
              }

              static PyObject *t_OrbitCategory_values(PyTypeObject *type)
              {
                JArray< OrbitCategory > result((jobject) NULL);
                OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::odm::ocm::OrbitCategory::values());
                return JArray<jobject>(result.this$).wrap(t_OrbitCategory::wrap_jobject);
              }
              static PyObject *t_OrbitCategory_get__parameters_(t_OrbitCategory *self, void *data)
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
#include "org/orekit/propagation/PythonBoundedPropagator.h"
#include "org/orekit/propagation/AdditionalStateProvider.h"
#include "org/orekit/propagation/EphemerisGenerator.h"
#include "org/orekit/attitudes/AttitudeProvider.h"
#include "java/util/List.h"
#include "org/orekit/propagation/sampling/StepHandlerMultiplexer.h"
#include "org/orekit/utils/TimeStampedPVCoordinates.h"
#include "java/lang/Throwable.h"
#include "java/util/Collection.h"
#include "org/orekit/propagation/BoundedPropagator.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/propagation/events/EventDetector.h"
#include "java/lang/Class.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/String.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {

      ::java::lang::Class *PythonBoundedPropagator::class$ = NULL;
      jmethodID *PythonBoundedPropagator::mids$ = NULL;
      bool PythonBoundedPropagator::live$ = false;

      jclass PythonBoundedPropagator::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/propagation/PythonBoundedPropagator");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_a1fa5dae97ea5ed2] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_addAdditionalStateProvider_40bf76e2f8bcdb6f] = env->getMethodID(cls, "addAdditionalStateProvider", "(Lorg/orekit/propagation/AdditionalStateProvider;)V");
          mids$[mid_addEventDetector_e13564f833403504] = env->getMethodID(cls, "addEventDetector", "(Lorg/orekit/propagation/events/EventDetector;)V");
          mids$[mid_clearEventsDetectors_a1fa5dae97ea5ed2] = env->getMethodID(cls, "clearEventsDetectors", "()V");
          mids$[mid_finalize_a1fa5dae97ea5ed2] = env->getMethodID(cls, "finalize", "()V");
          mids$[mid_getAdditionalStateProviders_e62d3bb06d56d7e3] = env->getMethodID(cls, "getAdditionalStateProviders", "()Ljava/util/List;");
          mids$[mid_getAttitudeProvider_331f12bb6017243b] = env->getMethodID(cls, "getAttitudeProvider", "()Lorg/orekit/attitudes/AttitudeProvider;");
          mids$[mid_getEphemerisGenerator_5df44e253e7e7782] = env->getMethodID(cls, "getEphemerisGenerator", "()Lorg/orekit/propagation/EphemerisGenerator;");
          mids$[mid_getEventsDetectors_cb666ea1a15f5210] = env->getMethodID(cls, "getEventsDetectors", "()Ljava/util/Collection;");
          mids$[mid_getFrame_2c51111cc6894ba1] = env->getMethodID(cls, "getFrame", "()Lorg/orekit/frames/Frame;");
          mids$[mid_getInitialState_9d155cc8314c99cf] = env->getMethodID(cls, "getInitialState", "()Lorg/orekit/propagation/SpacecraftState;");
          mids$[mid_getManagedAdditionalStates_0f94e41879ab7062] = env->getMethodID(cls, "getManagedAdditionalStates", "()[Ljava/lang/String;");
          mids$[mid_getMaxDate_c325492395d89b24] = env->getMethodID(cls, "getMaxDate", "()Lorg/orekit/time/AbsoluteDate;");
          mids$[mid_getMinDate_c325492395d89b24] = env->getMethodID(cls, "getMinDate", "()Lorg/orekit/time/AbsoluteDate;");
          mids$[mid_getMultiplexer_ec3241005499cbfa] = env->getMethodID(cls, "getMultiplexer", "()Lorg/orekit/propagation/sampling/StepHandlerMultiplexer;");
          mids$[mid_getPVCoordinates_e5d15ef236cd9ffe] = env->getMethodID(cls, "getPVCoordinates", "(Lorg/orekit/time/AbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/orekit/utils/TimeStampedPVCoordinates;");
          mids$[mid_isAdditionalStateManaged_cde6b28e15c96b75] = env->getMethodID(cls, "isAdditionalStateManaged", "(Ljava/lang/String;)Z");
          mids$[mid_propagate_4f0008999861ca31] = env->getMethodID(cls, "propagate", "(Lorg/orekit/time/AbsoluteDate;)Lorg/orekit/propagation/SpacecraftState;");
          mids$[mid_propagate_6845ec704c846b03] = env->getMethodID(cls, "propagate", "(Lorg/orekit/time/AbsoluteDate;Lorg/orekit/time/AbsoluteDate;)Lorg/orekit/propagation/SpacecraftState;");
          mids$[mid_pythonDecRef_a1fa5dae97ea5ed2] = env->getMethodID(cls, "pythonDecRef", "()V");
          mids$[mid_pythonExtension_6c0ce7e438e5ded4] = env->getMethodID(cls, "pythonExtension", "()J");
          mids$[mid_pythonExtension_3d7dd2314a0dd456] = env->getMethodID(cls, "pythonExtension", "(J)V");
          mids$[mid_resetInitialState_280c3390961e0a50] = env->getMethodID(cls, "resetInitialState", "(Lorg/orekit/propagation/SpacecraftState;)V");
          mids$[mid_setAttitudeProvider_8e4d3ea100bc0095] = env->getMethodID(cls, "setAttitudeProvider", "(Lorg/orekit/attitudes/AttitudeProvider;)V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      PythonBoundedPropagator::PythonBoundedPropagator() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_a1fa5dae97ea5ed2)) {}

      void PythonBoundedPropagator::finalize() const
      {
        env->callVoidMethod(this$, mids$[mid_finalize_a1fa5dae97ea5ed2]);
      }

      jlong PythonBoundedPropagator::pythonExtension() const
      {
        return env->callLongMethod(this$, mids$[mid_pythonExtension_6c0ce7e438e5ded4]);
      }

      void PythonBoundedPropagator::pythonExtension(jlong a0) const
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
      static PyObject *t_PythonBoundedPropagator_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_PythonBoundedPropagator_instance_(PyTypeObject *type, PyObject *arg);
      static int t_PythonBoundedPropagator_init_(t_PythonBoundedPropagator *self, PyObject *args, PyObject *kwds);
      static PyObject *t_PythonBoundedPropagator_finalize(t_PythonBoundedPropagator *self);
      static PyObject *t_PythonBoundedPropagator_pythonExtension(t_PythonBoundedPropagator *self, PyObject *args);
      static void JNICALL t_PythonBoundedPropagator_addAdditionalStateProvider0(JNIEnv *jenv, jobject jobj, jobject a0);
      static void JNICALL t_PythonBoundedPropagator_addEventDetector1(JNIEnv *jenv, jobject jobj, jobject a0);
      static void JNICALL t_PythonBoundedPropagator_clearEventsDetectors2(JNIEnv *jenv, jobject jobj);
      static jobject JNICALL t_PythonBoundedPropagator_getAdditionalStateProviders3(JNIEnv *jenv, jobject jobj);
      static jobject JNICALL t_PythonBoundedPropagator_getAttitudeProvider4(JNIEnv *jenv, jobject jobj);
      static jobject JNICALL t_PythonBoundedPropagator_getEphemerisGenerator5(JNIEnv *jenv, jobject jobj);
      static jobject JNICALL t_PythonBoundedPropagator_getEventsDetectors6(JNIEnv *jenv, jobject jobj);
      static jobject JNICALL t_PythonBoundedPropagator_getFrame7(JNIEnv *jenv, jobject jobj);
      static jobject JNICALL t_PythonBoundedPropagator_getInitialState8(JNIEnv *jenv, jobject jobj);
      static jobject JNICALL t_PythonBoundedPropagator_getManagedAdditionalStates9(JNIEnv *jenv, jobject jobj);
      static jobject JNICALL t_PythonBoundedPropagator_getMaxDate10(JNIEnv *jenv, jobject jobj);
      static jobject JNICALL t_PythonBoundedPropagator_getMinDate11(JNIEnv *jenv, jobject jobj);
      static jobject JNICALL t_PythonBoundedPropagator_getMultiplexer12(JNIEnv *jenv, jobject jobj);
      static jobject JNICALL t_PythonBoundedPropagator_getPVCoordinates13(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1);
      static jboolean JNICALL t_PythonBoundedPropagator_isAdditionalStateManaged14(JNIEnv *jenv, jobject jobj, jobject a0);
      static jobject JNICALL t_PythonBoundedPropagator_propagate15(JNIEnv *jenv, jobject jobj, jobject a0);
      static jobject JNICALL t_PythonBoundedPropagator_propagate16(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1);
      static void JNICALL t_PythonBoundedPropagator_pythonDecRef17(JNIEnv *jenv, jobject jobj);
      static void JNICALL t_PythonBoundedPropagator_resetInitialState18(JNIEnv *jenv, jobject jobj, jobject a0);
      static void JNICALL t_PythonBoundedPropagator_setAttitudeProvider19(JNIEnv *jenv, jobject jobj, jobject a0);
      static PyObject *t_PythonBoundedPropagator_get__self(t_PythonBoundedPropagator *self, void *data);
      static PyGetSetDef t_PythonBoundedPropagator__fields_[] = {
        DECLARE_GET_FIELD(t_PythonBoundedPropagator, self),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_PythonBoundedPropagator__methods_[] = {
        DECLARE_METHOD(t_PythonBoundedPropagator, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonBoundedPropagator, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonBoundedPropagator, finalize, METH_NOARGS),
        DECLARE_METHOD(t_PythonBoundedPropagator, pythonExtension, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(PythonBoundedPropagator)[] = {
        { Py_tp_methods, t_PythonBoundedPropagator__methods_ },
        { Py_tp_init, (void *) t_PythonBoundedPropagator_init_ },
        { Py_tp_getset, t_PythonBoundedPropagator__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(PythonBoundedPropagator)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(PythonBoundedPropagator, t_PythonBoundedPropagator, PythonBoundedPropagator);

      void t_PythonBoundedPropagator::install(PyObject *module)
      {
        installType(&PY_TYPE(PythonBoundedPropagator), &PY_TYPE_DEF(PythonBoundedPropagator), module, "PythonBoundedPropagator", 1);
      }

      void t_PythonBoundedPropagator::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonBoundedPropagator), "class_", make_descriptor(PythonBoundedPropagator::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonBoundedPropagator), "wrapfn_", make_descriptor(t_PythonBoundedPropagator::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonBoundedPropagator), "boxfn_", make_descriptor(boxObject));
        jclass cls = env->getClass(PythonBoundedPropagator::initializeClass);
        JNINativeMethod methods[] = {
          { "addAdditionalStateProvider", "(Lorg/orekit/propagation/AdditionalStateProvider;)V", (void *) t_PythonBoundedPropagator_addAdditionalStateProvider0 },
          { "addEventDetector", "(Lorg/orekit/propagation/events/EventDetector;)V", (void *) t_PythonBoundedPropagator_addEventDetector1 },
          { "clearEventsDetectors", "()V", (void *) t_PythonBoundedPropagator_clearEventsDetectors2 },
          { "getAdditionalStateProviders", "()Ljava/util/List;", (void *) t_PythonBoundedPropagator_getAdditionalStateProviders3 },
          { "getAttitudeProvider", "()Lorg/orekit/attitudes/AttitudeProvider;", (void *) t_PythonBoundedPropagator_getAttitudeProvider4 },
          { "getEphemerisGenerator", "()Lorg/orekit/propagation/EphemerisGenerator;", (void *) t_PythonBoundedPropagator_getEphemerisGenerator5 },
          { "getEventsDetectors", "()Ljava/util/Collection;", (void *) t_PythonBoundedPropagator_getEventsDetectors6 },
          { "getFrame", "()Lorg/orekit/frames/Frame;", (void *) t_PythonBoundedPropagator_getFrame7 },
          { "getInitialState", "()Lorg/orekit/propagation/SpacecraftState;", (void *) t_PythonBoundedPropagator_getInitialState8 },
          { "getManagedAdditionalStates", "()[Ljava/lang/String;", (void *) t_PythonBoundedPropagator_getManagedAdditionalStates9 },
          { "getMaxDate", "()Lorg/orekit/time/AbsoluteDate;", (void *) t_PythonBoundedPropagator_getMaxDate10 },
          { "getMinDate", "()Lorg/orekit/time/AbsoluteDate;", (void *) t_PythonBoundedPropagator_getMinDate11 },
          { "getMultiplexer", "()Lorg/orekit/propagation/sampling/StepHandlerMultiplexer;", (void *) t_PythonBoundedPropagator_getMultiplexer12 },
          { "getPVCoordinates", "(Lorg/orekit/time/AbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/orekit/utils/TimeStampedPVCoordinates;", (void *) t_PythonBoundedPropagator_getPVCoordinates13 },
          { "isAdditionalStateManaged", "(Ljava/lang/String;)Z", (void *) t_PythonBoundedPropagator_isAdditionalStateManaged14 },
          { "propagate", "(Lorg/orekit/time/AbsoluteDate;)Lorg/orekit/propagation/SpacecraftState;", (void *) t_PythonBoundedPropagator_propagate15 },
          { "propagate", "(Lorg/orekit/time/AbsoluteDate;Lorg/orekit/time/AbsoluteDate;)Lorg/orekit/propagation/SpacecraftState;", (void *) t_PythonBoundedPropagator_propagate16 },
          { "pythonDecRef", "()V", (void *) t_PythonBoundedPropagator_pythonDecRef17 },
          { "resetInitialState", "(Lorg/orekit/propagation/SpacecraftState;)V", (void *) t_PythonBoundedPropagator_resetInitialState18 },
          { "setAttitudeProvider", "(Lorg/orekit/attitudes/AttitudeProvider;)V", (void *) t_PythonBoundedPropagator_setAttitudeProvider19 },
        };
        env->registerNatives(cls, methods, 20);
      }

      static PyObject *t_PythonBoundedPropagator_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, PythonBoundedPropagator::initializeClass, 1)))
          return NULL;
        return t_PythonBoundedPropagator::wrap_Object(PythonBoundedPropagator(((t_PythonBoundedPropagator *) arg)->object.this$));
      }
      static PyObject *t_PythonBoundedPropagator_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, PythonBoundedPropagator::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_PythonBoundedPropagator_init_(t_PythonBoundedPropagator *self, PyObject *args, PyObject *kwds)
      {
        PythonBoundedPropagator object((jobject) NULL);

        INT_CALL(object = PythonBoundedPropagator());
        self->object = object;

        Py_INCREF((PyObject *) self);
        self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

        return 0;
      }

      static PyObject *t_PythonBoundedPropagator_finalize(t_PythonBoundedPropagator *self)
      {
        OBJ_CALL(self->object.finalize());
        Py_RETURN_NONE;
      }

      static PyObject *t_PythonBoundedPropagator_pythonExtension(t_PythonBoundedPropagator *self, PyObject *args)
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

      static void JNICALL t_PythonBoundedPropagator_addAdditionalStateProvider0(JNIEnv *jenv, jobject jobj, jobject a0)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonBoundedPropagator::mids$[PythonBoundedPropagator::mid_pythonExtension_6c0ce7e438e5ded4]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        PyObject *o0 = ::org::orekit::propagation::t_AdditionalStateProvider::wrap_Object(::org::orekit::propagation::AdditionalStateProvider(a0));
        PyObject *result = PyObject_CallMethod(obj, "addAdditionalStateProvider", "O", o0);
        Py_DECREF(o0);
        if (!result)
          throwPythonError();
        else
          Py_DECREF(result);
      }

      static void JNICALL t_PythonBoundedPropagator_addEventDetector1(JNIEnv *jenv, jobject jobj, jobject a0)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonBoundedPropagator::mids$[PythonBoundedPropagator::mid_pythonExtension_6c0ce7e438e5ded4]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        PyObject *o0 = ::org::orekit::propagation::events::t_EventDetector::wrap_Object(::org::orekit::propagation::events::EventDetector(a0));
        PyObject *result = PyObject_CallMethod(obj, "addEventDetector", "O", o0);
        Py_DECREF(o0);
        if (!result)
          throwPythonError();
        else
          Py_DECREF(result);
      }

      static void JNICALL t_PythonBoundedPropagator_clearEventsDetectors2(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonBoundedPropagator::mids$[PythonBoundedPropagator::mid_pythonExtension_6c0ce7e438e5ded4]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        PyObject *result = PyObject_CallMethod(obj, "clearEventsDetectors", "");
        if (!result)
          throwPythonError();
        else
          Py_DECREF(result);
      }

      static jobject JNICALL t_PythonBoundedPropagator_getAdditionalStateProviders3(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonBoundedPropagator::mids$[PythonBoundedPropagator::mid_pythonExtension_6c0ce7e438e5ded4]);
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

      static jobject JNICALL t_PythonBoundedPropagator_getAttitudeProvider4(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonBoundedPropagator::mids$[PythonBoundedPropagator::mid_pythonExtension_6c0ce7e438e5ded4]);
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

      static jobject JNICALL t_PythonBoundedPropagator_getEphemerisGenerator5(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonBoundedPropagator::mids$[PythonBoundedPropagator::mid_pythonExtension_6c0ce7e438e5ded4]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::propagation::EphemerisGenerator value((jobject) NULL);
        PyObject *result = PyObject_CallMethod(obj, "getEphemerisGenerator", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::propagation::EphemerisGenerator::initializeClass, &value))
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

      static jobject JNICALL t_PythonBoundedPropagator_getEventsDetectors6(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonBoundedPropagator::mids$[PythonBoundedPropagator::mid_pythonExtension_6c0ce7e438e5ded4]);
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

      static jobject JNICALL t_PythonBoundedPropagator_getFrame7(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonBoundedPropagator::mids$[PythonBoundedPropagator::mid_pythonExtension_6c0ce7e438e5ded4]);
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

      static jobject JNICALL t_PythonBoundedPropagator_getInitialState8(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonBoundedPropagator::mids$[PythonBoundedPropagator::mid_pythonExtension_6c0ce7e438e5ded4]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::propagation::SpacecraftState value((jobject) NULL);
        PyObject *result = PyObject_CallMethod(obj, "getInitialState", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::propagation::SpacecraftState::initializeClass, &value))
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

      static jobject JNICALL t_PythonBoundedPropagator_getManagedAdditionalStates9(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonBoundedPropagator::mids$[PythonBoundedPropagator::mid_pythonExtension_6c0ce7e438e5ded4]);
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

      static jobject JNICALL t_PythonBoundedPropagator_getMaxDate10(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonBoundedPropagator::mids$[PythonBoundedPropagator::mid_pythonExtension_6c0ce7e438e5ded4]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::time::AbsoluteDate value((jobject) NULL);
        PyObject *result = PyObject_CallMethod(obj, "getMaxDate", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &value))
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

      static jobject JNICALL t_PythonBoundedPropagator_getMinDate11(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonBoundedPropagator::mids$[PythonBoundedPropagator::mid_pythonExtension_6c0ce7e438e5ded4]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::time::AbsoluteDate value((jobject) NULL);
        PyObject *result = PyObject_CallMethod(obj, "getMinDate", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &value))
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

      static jobject JNICALL t_PythonBoundedPropagator_getMultiplexer12(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonBoundedPropagator::mids$[PythonBoundedPropagator::mid_pythonExtension_6c0ce7e438e5ded4]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::propagation::sampling::StepHandlerMultiplexer value((jobject) NULL);
        PyObject *result = PyObject_CallMethod(obj, "getMultiplexer", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::propagation::sampling::StepHandlerMultiplexer::initializeClass, &value))
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

      static jobject JNICALL t_PythonBoundedPropagator_getPVCoordinates13(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonBoundedPropagator::mids$[PythonBoundedPropagator::mid_pythonExtension_6c0ce7e438e5ded4]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::utils::TimeStampedPVCoordinates value((jobject) NULL);
        PyObject *o0 = ::org::orekit::time::t_AbsoluteDate::wrap_Object(::org::orekit::time::AbsoluteDate(a0));
        PyObject *o1 = ::org::orekit::frames::t_Frame::wrap_Object(::org::orekit::frames::Frame(a1));
        PyObject *result = PyObject_CallMethod(obj, "getPVCoordinates", "OO", o0, o1);
        Py_DECREF(o0);
        Py_DECREF(o1);
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::utils::TimeStampedPVCoordinates::initializeClass, &value))
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

      static jboolean JNICALL t_PythonBoundedPropagator_isAdditionalStateManaged14(JNIEnv *jenv, jobject jobj, jobject a0)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonBoundedPropagator::mids$[PythonBoundedPropagator::mid_pythonExtension_6c0ce7e438e5ded4]);
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

      static jobject JNICALL t_PythonBoundedPropagator_propagate15(JNIEnv *jenv, jobject jobj, jobject a0)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonBoundedPropagator::mids$[PythonBoundedPropagator::mid_pythonExtension_6c0ce7e438e5ded4]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::propagation::SpacecraftState value((jobject) NULL);
        PyObject *o0 = ::org::orekit::time::t_AbsoluteDate::wrap_Object(::org::orekit::time::AbsoluteDate(a0));
        PyObject *result = PyObject_CallMethod(obj, "propagate", "O", o0);
        Py_DECREF(o0);
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::propagation::SpacecraftState::initializeClass, &value))
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

      static jobject JNICALL t_PythonBoundedPropagator_propagate16(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonBoundedPropagator::mids$[PythonBoundedPropagator::mid_pythonExtension_6c0ce7e438e5ded4]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::propagation::SpacecraftState value((jobject) NULL);
        PyObject *o0 = ::org::orekit::time::t_AbsoluteDate::wrap_Object(::org::orekit::time::AbsoluteDate(a0));
        PyObject *o1 = ::org::orekit::time::t_AbsoluteDate::wrap_Object(::org::orekit::time::AbsoluteDate(a1));
        PyObject *result = PyObject_CallMethod(obj, "propagate", "OO", o0, o1);
        Py_DECREF(o0);
        Py_DECREF(o1);
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::propagation::SpacecraftState::initializeClass, &value))
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

      static void JNICALL t_PythonBoundedPropagator_pythonDecRef17(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonBoundedPropagator::mids$[PythonBoundedPropagator::mid_pythonExtension_6c0ce7e438e5ded4]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

        if (obj != NULL)
        {
          jenv->CallVoidMethod(jobj, PythonBoundedPropagator::mids$[PythonBoundedPropagator::mid_pythonExtension_3d7dd2314a0dd456], (jlong) 0);
          env->finalizeObject(jenv, obj);
        }
      }

      static void JNICALL t_PythonBoundedPropagator_resetInitialState18(JNIEnv *jenv, jobject jobj, jobject a0)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonBoundedPropagator::mids$[PythonBoundedPropagator::mid_pythonExtension_6c0ce7e438e5ded4]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        PyObject *o0 = ::org::orekit::propagation::t_SpacecraftState::wrap_Object(::org::orekit::propagation::SpacecraftState(a0));
        PyObject *result = PyObject_CallMethod(obj, "resetInitialState", "O", o0);
        Py_DECREF(o0);
        if (!result)
          throwPythonError();
        else
          Py_DECREF(result);
      }

      static void JNICALL t_PythonBoundedPropagator_setAttitudeProvider19(JNIEnv *jenv, jobject jobj, jobject a0)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonBoundedPropagator::mids$[PythonBoundedPropagator::mid_pythonExtension_6c0ce7e438e5ded4]);
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

      static PyObject *t_PythonBoundedPropagator_get__self(t_PythonBoundedPropagator *self, void *data)
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
#include "org/orekit/files/ccsds/ndm/odm/ocm/OcmElements.h"
#include "org/orekit/files/ccsds/ndm/odm/ocm/OcmElements.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace odm {
            namespace ocm {

              ::java::lang::Class *OcmElements::class$ = NULL;
              jmethodID *OcmElements::mids$ = NULL;
              bool OcmElements::live$ = false;
              OcmElements *OcmElements::COV = NULL;
              OcmElements *OcmElements::MAN = NULL;
              OcmElements *OcmElements::OD = NULL;
              OcmElements *OcmElements::ORB = NULL;
              OcmElements *OcmElements::PERT = NULL;
              OcmElements *OcmElements::PHYS = NULL;
              OcmElements *OcmElements::USER = NULL;

              jclass OcmElements::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/odm/ocm/OcmElements");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_valueOf_cd074624405aa766] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/files/ccsds/ndm/odm/ocm/OcmElements;");
                  mids$[mid_values_8e45c43803989d40] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/files/ccsds/ndm/odm/ocm/OcmElements;");

                  class$ = new ::java::lang::Class(cls);
                  cls = (jclass) class$->this$;

                  COV = new OcmElements(env->getStaticObjectField(cls, "COV", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OcmElements;"));
                  MAN = new OcmElements(env->getStaticObjectField(cls, "MAN", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OcmElements;"));
                  OD = new OcmElements(env->getStaticObjectField(cls, "OD", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OcmElements;"));
                  ORB = new OcmElements(env->getStaticObjectField(cls, "ORB", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OcmElements;"));
                  PERT = new OcmElements(env->getStaticObjectField(cls, "PERT", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OcmElements;"));
                  PHYS = new OcmElements(env->getStaticObjectField(cls, "PHYS", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OcmElements;"));
                  USER = new OcmElements(env->getStaticObjectField(cls, "USER", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OcmElements;"));
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              OcmElements OcmElements::valueOf(const ::java::lang::String & a0)
              {
                jclass cls = env->getClass(initializeClass);
                return OcmElements(env->callStaticObjectMethod(cls, mids$[mid_valueOf_cd074624405aa766], a0.this$));
              }

              JArray< OcmElements > OcmElements::values()
              {
                jclass cls = env->getClass(initializeClass);
                return JArray< OcmElements >(env->callStaticObjectMethod(cls, mids$[mid_values_8e45c43803989d40]));
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
              static PyObject *t_OcmElements_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_OcmElements_instance_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_OcmElements_of_(t_OcmElements *self, PyObject *args);
              static PyObject *t_OcmElements_valueOf(PyTypeObject *type, PyObject *args);
              static PyObject *t_OcmElements_values(PyTypeObject *type);
              static PyObject *t_OcmElements_get__parameters_(t_OcmElements *self, void *data);
              static PyGetSetDef t_OcmElements__fields_[] = {
                DECLARE_GET_FIELD(t_OcmElements, parameters_),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_OcmElements__methods_[] = {
                DECLARE_METHOD(t_OcmElements, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_OcmElements, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_OcmElements, of_, METH_VARARGS),
                DECLARE_METHOD(t_OcmElements, valueOf, METH_VARARGS | METH_CLASS),
                DECLARE_METHOD(t_OcmElements, values, METH_NOARGS | METH_CLASS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(OcmElements)[] = {
                { Py_tp_methods, t_OcmElements__methods_ },
                { Py_tp_init, (void *) abstract_init },
                { Py_tp_getset, t_OcmElements__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(OcmElements)[] = {
                &PY_TYPE_DEF(::java::lang::Enum),
                NULL
              };

              DEFINE_TYPE(OcmElements, t_OcmElements, OcmElements);
              PyObject *t_OcmElements::wrap_Object(const OcmElements& object, PyTypeObject *p0)
              {
                PyObject *obj = t_OcmElements::wrap_Object(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_OcmElements *self = (t_OcmElements *) obj;
                  self->parameters[0] = p0;
                }
                return obj;
              }

              PyObject *t_OcmElements::wrap_jobject(const jobject& object, PyTypeObject *p0)
              {
                PyObject *obj = t_OcmElements::wrap_jobject(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_OcmElements *self = (t_OcmElements *) obj;
                  self->parameters[0] = p0;
                }
                return obj;
              }

              void t_OcmElements::install(PyObject *module)
              {
                installType(&PY_TYPE(OcmElements), &PY_TYPE_DEF(OcmElements), module, "OcmElements", 0);
              }

              void t_OcmElements::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(OcmElements), "class_", make_descriptor(OcmElements::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OcmElements), "wrapfn_", make_descriptor(t_OcmElements::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OcmElements), "boxfn_", make_descriptor(boxObject));
                env->getClass(OcmElements::initializeClass);
                PyObject_SetAttrString((PyObject *) PY_TYPE(OcmElements), "COV", make_descriptor(t_OcmElements::wrap_Object(*OcmElements::COV)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OcmElements), "MAN", make_descriptor(t_OcmElements::wrap_Object(*OcmElements::MAN)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OcmElements), "OD", make_descriptor(t_OcmElements::wrap_Object(*OcmElements::OD)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OcmElements), "ORB", make_descriptor(t_OcmElements::wrap_Object(*OcmElements::ORB)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OcmElements), "PERT", make_descriptor(t_OcmElements::wrap_Object(*OcmElements::PERT)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OcmElements), "PHYS", make_descriptor(t_OcmElements::wrap_Object(*OcmElements::PHYS)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OcmElements), "USER", make_descriptor(t_OcmElements::wrap_Object(*OcmElements::USER)));
              }

              static PyObject *t_OcmElements_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, OcmElements::initializeClass, 1)))
                  return NULL;
                return t_OcmElements::wrap_Object(OcmElements(((t_OcmElements *) arg)->object.this$));
              }
              static PyObject *t_OcmElements_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, OcmElements::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static PyObject *t_OcmElements_of_(t_OcmElements *self, PyObject *args)
              {
                if (!parseArg(args, "T", 1, &(self->parameters)))
                  Py_RETURN_SELF;
                return PyErr_SetArgsError((PyObject *) self, "of_", args);
              }

              static PyObject *t_OcmElements_valueOf(PyTypeObject *type, PyObject *args)
              {
                ::java::lang::String a0((jobject) NULL);
                OcmElements result((jobject) NULL);

                if (!parseArgs(args, "s", &a0))
                {
                  OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::odm::ocm::OcmElements::valueOf(a0));
                  return t_OcmElements::wrap_Object(result);
                }

                return callSuper(type, "valueOf", args, 2);
              }

              static PyObject *t_OcmElements_values(PyTypeObject *type)
              {
                JArray< OcmElements > result((jobject) NULL);
                OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::odm::ocm::OcmElements::values());
                return JArray<jobject>(result.this$).wrap(t_OcmElements::wrap_jobject);
              }
              static PyObject *t_OcmElements_get__parameters_(t_OcmElements *self, void *data)
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
#include "org/orekit/files/ccsds/ndm/cdm/CdmRelativeMetadata.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "java/util/List.h"
#include "org/orekit/files/ccsds/definitions/TimeSystem.h"
#include "org/orekit/files/ccsds/ndm/cdm/ScreenVolumeShape.h"
#include "org/orekit/files/ccsds/definitions/PocMethodFacade.h"
#include "org/orekit/files/ccsds/ndm/cdm/ScreenType.h"
#include "java/lang/Enum.h"
#include "org/orekit/files/ccsds/ndm/cdm/ScreenVolumeFrame.h"
#include "java/lang/Class.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace cdm {

            ::java::lang::Class *CdmRelativeMetadata::class$ = NULL;
            jmethodID *CdmRelativeMetadata::mids$ = NULL;
            bool CdmRelativeMetadata::live$ = false;

            jclass CdmRelativeMetadata::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/cdm/CdmRelativeMetadata");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_a1fa5dae97ea5ed2] = env->getMethodID(cls, "<init>", "()V");
                mids$[mid_addComment_734b91ac30d5f9b4] = env->getMethodID(cls, "addComment", "(Ljava/lang/String;)V");
                mids$[mid_checkNotNull_df2b565e99c3c541] = env->getMethodID(cls, "checkNotNull", "(Ljava/lang/Object;Ljava/lang/Enum;)V");
                mids$[mid_checkScreenVolumeConditions_a1fa5dae97ea5ed2] = env->getMethodID(cls, "checkScreenVolumeConditions", "()V");
                mids$[mid_getApproachAngle_b74f83833fdad017] = env->getMethodID(cls, "getApproachAngle", "()D");
                mids$[mid_getCollisionPercentile_4d095d7a08163110] = env->getMethodID(cls, "getCollisionPercentile", "()[I");
                mids$[mid_getCollisionProbaMethod_2ddd040a83ad32b1] = env->getMethodID(cls, "getCollisionProbaMethod", "()Lorg/orekit/files/ccsds/definitions/PocMethodFacade;");
                mids$[mid_getCollisionProbability_b74f83833fdad017] = env->getMethodID(cls, "getCollisionProbability", "()D");
                mids$[mid_getComment_e62d3bb06d56d7e3] = env->getMethodID(cls, "getComment", "()Ljava/util/List;");
                mids$[mid_getConjunctionId_1c1fa1e935d6cdcf] = env->getMethodID(cls, "getConjunctionId", "()Ljava/lang/String;");
                mids$[mid_getMahalanobisDistance_b74f83833fdad017] = env->getMethodID(cls, "getMahalanobisDistance", "()D");
                mids$[mid_getMaxCollisionProbability_b74f83833fdad017] = env->getMethodID(cls, "getMaxCollisionProbability", "()D");
                mids$[mid_getMaxCollisionProbabilityMethod_2ddd040a83ad32b1] = env->getMethodID(cls, "getMaxCollisionProbabilityMethod", "()Lorg/orekit/files/ccsds/definitions/PocMethodFacade;");
                mids$[mid_getMissDistance_b74f83833fdad017] = env->getMethodID(cls, "getMissDistance", "()D");
                mids$[mid_getNextMessageEpoch_c325492395d89b24] = env->getMethodID(cls, "getNextMessageEpoch", "()Lorg/orekit/time/AbsoluteDate;");
                mids$[mid_getPreviousMessageEpoch_c325492395d89b24] = env->getMethodID(cls, "getPreviousMessageEpoch", "()Lorg/orekit/time/AbsoluteDate;");
                mids$[mid_getPreviousMessageId_1c1fa1e935d6cdcf] = env->getMethodID(cls, "getPreviousMessageId", "()Ljava/lang/String;");
                mids$[mid_getRelativePosition_8b724f8b4fdad1a2] = env->getMethodID(cls, "getRelativePosition", "()Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
                mids$[mid_getRelativeSpeed_b74f83833fdad017] = env->getMethodID(cls, "getRelativeSpeed", "()D");
                mids$[mid_getRelativeVelocity_8b724f8b4fdad1a2] = env->getMethodID(cls, "getRelativeVelocity", "()Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
                mids$[mid_getScreenEntryTime_c325492395d89b24] = env->getMethodID(cls, "getScreenEntryTime", "()Lorg/orekit/time/AbsoluteDate;");
                mids$[mid_getScreenExitTime_c325492395d89b24] = env->getMethodID(cls, "getScreenExitTime", "()Lorg/orekit/time/AbsoluteDate;");
                mids$[mid_getScreenPcThreshold_b74f83833fdad017] = env->getMethodID(cls, "getScreenPcThreshold", "()D");
                mids$[mid_getScreenType_b67da540ddec6964] = env->getMethodID(cls, "getScreenType", "()Lorg/orekit/files/ccsds/ndm/cdm/ScreenType;");
                mids$[mid_getScreenVolumeFrame_9c3a026fec3db9c9] = env->getMethodID(cls, "getScreenVolumeFrame", "()Lorg/orekit/files/ccsds/ndm/cdm/ScreenVolumeFrame;");
                mids$[mid_getScreenVolumeRadius_b74f83833fdad017] = env->getMethodID(cls, "getScreenVolumeRadius", "()D");
                mids$[mid_getScreenVolumeShape_443628f95af03066] = env->getMethodID(cls, "getScreenVolumeShape", "()Lorg/orekit/files/ccsds/ndm/cdm/ScreenVolumeShape;");
                mids$[mid_getScreenVolumeX_b74f83833fdad017] = env->getMethodID(cls, "getScreenVolumeX", "()D");
                mids$[mid_getScreenVolumeY_b74f83833fdad017] = env->getMethodID(cls, "getScreenVolumeY", "()D");
                mids$[mid_getScreenVolumeZ_b74f83833fdad017] = env->getMethodID(cls, "getScreenVolumeZ", "()D");
                mids$[mid_getSefiCollisionProbability_b74f83833fdad017] = env->getMethodID(cls, "getSefiCollisionProbability", "()D");
                mids$[mid_getSefiCollisionProbabilityMethod_2ddd040a83ad32b1] = env->getMethodID(cls, "getSefiCollisionProbabilityMethod", "()Lorg/orekit/files/ccsds/definitions/PocMethodFacade;");
                mids$[mid_getSefiFragmentationModel_1c1fa1e935d6cdcf] = env->getMethodID(cls, "getSefiFragmentationModel", "()Ljava/lang/String;");
                mids$[mid_getStartScreenPeriod_c325492395d89b24] = env->getMethodID(cls, "getStartScreenPeriod", "()Lorg/orekit/time/AbsoluteDate;");
                mids$[mid_getStopScreenPeriod_c325492395d89b24] = env->getMethodID(cls, "getStopScreenPeriod", "()Lorg/orekit/time/AbsoluteDate;");
                mids$[mid_getTca_c325492395d89b24] = env->getMethodID(cls, "getTca", "()Lorg/orekit/time/AbsoluteDate;");
                mids$[mid_getTimeSystem_91b7f51e80ad440f] = env->getMethodID(cls, "getTimeSystem", "()Lorg/orekit/files/ccsds/definitions/TimeSystem;");
                mids$[mid_setApproachAngle_8ba9fe7a847cecad] = env->getMethodID(cls, "setApproachAngle", "(D)V");
                mids$[mid_setCollisionPercentile_86a2769cb881d388] = env->getMethodID(cls, "setCollisionPercentile", "([I)V");
                mids$[mid_setCollisionProbaMethod_3d87a594d72256e8] = env->getMethodID(cls, "setCollisionProbaMethod", "(Lorg/orekit/files/ccsds/definitions/PocMethodFacade;)V");
                mids$[mid_setCollisionProbability_8ba9fe7a847cecad] = env->getMethodID(cls, "setCollisionProbability", "(D)V");
                mids$[mid_setConjunctionId_734b91ac30d5f9b4] = env->getMethodID(cls, "setConjunctionId", "(Ljava/lang/String;)V");
                mids$[mid_setMahalanobisDistance_8ba9fe7a847cecad] = env->getMethodID(cls, "setMahalanobisDistance", "(D)V");
                mids$[mid_setMaxCollisionProbability_8ba9fe7a847cecad] = env->getMethodID(cls, "setMaxCollisionProbability", "(D)V");
                mids$[mid_setMaxCollisionProbabilityMethod_3d87a594d72256e8] = env->getMethodID(cls, "setMaxCollisionProbabilityMethod", "(Lorg/orekit/files/ccsds/definitions/PocMethodFacade;)V");
                mids$[mid_setMissDistance_8ba9fe7a847cecad] = env->getMethodID(cls, "setMissDistance", "(D)V");
                mids$[mid_setNextMessageEpoch_02135a6ef25adb4b] = env->getMethodID(cls, "setNextMessageEpoch", "(Lorg/orekit/time/AbsoluteDate;)V");
                mids$[mid_setPreviousMessageEpoch_02135a6ef25adb4b] = env->getMethodID(cls, "setPreviousMessageEpoch", "(Lorg/orekit/time/AbsoluteDate;)V");
                mids$[mid_setPreviousMessageId_734b91ac30d5f9b4] = env->getMethodID(cls, "setPreviousMessageId", "(Ljava/lang/String;)V");
                mids$[mid_setRelativePositionN_8ba9fe7a847cecad] = env->getMethodID(cls, "setRelativePositionN", "(D)V");
                mids$[mid_setRelativePositionR_8ba9fe7a847cecad] = env->getMethodID(cls, "setRelativePositionR", "(D)V");
                mids$[mid_setRelativePositionT_8ba9fe7a847cecad] = env->getMethodID(cls, "setRelativePositionT", "(D)V");
                mids$[mid_setRelativeSpeed_8ba9fe7a847cecad] = env->getMethodID(cls, "setRelativeSpeed", "(D)V");
                mids$[mid_setRelativeVelocityN_8ba9fe7a847cecad] = env->getMethodID(cls, "setRelativeVelocityN", "(D)V");
                mids$[mid_setRelativeVelocityR_8ba9fe7a847cecad] = env->getMethodID(cls, "setRelativeVelocityR", "(D)V");
                mids$[mid_setRelativeVelocityT_8ba9fe7a847cecad] = env->getMethodID(cls, "setRelativeVelocityT", "(D)V");
                mids$[mid_setScreenEntryTime_02135a6ef25adb4b] = env->getMethodID(cls, "setScreenEntryTime", "(Lorg/orekit/time/AbsoluteDate;)V");
                mids$[mid_setScreenExitTime_02135a6ef25adb4b] = env->getMethodID(cls, "setScreenExitTime", "(Lorg/orekit/time/AbsoluteDate;)V");
                mids$[mid_setScreenPcThreshold_8ba9fe7a847cecad] = env->getMethodID(cls, "setScreenPcThreshold", "(D)V");
                mids$[mid_setScreenType_81521600a2b31dc8] = env->getMethodID(cls, "setScreenType", "(Lorg/orekit/files/ccsds/ndm/cdm/ScreenType;)V");
                mids$[mid_setScreenVolumeFrame_aa1003a1d7d3878a] = env->getMethodID(cls, "setScreenVolumeFrame", "(Lorg/orekit/files/ccsds/ndm/cdm/ScreenVolumeFrame;)V");
                mids$[mid_setScreenVolumeRadius_8ba9fe7a847cecad] = env->getMethodID(cls, "setScreenVolumeRadius", "(D)V");
                mids$[mid_setScreenVolumeShape_08871fc1aa7bd48b] = env->getMethodID(cls, "setScreenVolumeShape", "(Lorg/orekit/files/ccsds/ndm/cdm/ScreenVolumeShape;)V");
                mids$[mid_setScreenVolumeX_8ba9fe7a847cecad] = env->getMethodID(cls, "setScreenVolumeX", "(D)V");
                mids$[mid_setScreenVolumeY_8ba9fe7a847cecad] = env->getMethodID(cls, "setScreenVolumeY", "(D)V");
                mids$[mid_setScreenVolumeZ_8ba9fe7a847cecad] = env->getMethodID(cls, "setScreenVolumeZ", "(D)V");
                mids$[mid_setSefiCollisionProbability_8ba9fe7a847cecad] = env->getMethodID(cls, "setSefiCollisionProbability", "(D)V");
                mids$[mid_setSefiCollisionProbabilityMethod_3d87a594d72256e8] = env->getMethodID(cls, "setSefiCollisionProbabilityMethod", "(Lorg/orekit/files/ccsds/definitions/PocMethodFacade;)V");
                mids$[mid_setSefiFragmentationModel_734b91ac30d5f9b4] = env->getMethodID(cls, "setSefiFragmentationModel", "(Ljava/lang/String;)V");
                mids$[mid_setStartScreenPeriod_02135a6ef25adb4b] = env->getMethodID(cls, "setStartScreenPeriod", "(Lorg/orekit/time/AbsoluteDate;)V");
                mids$[mid_setStopScreenPeriod_02135a6ef25adb4b] = env->getMethodID(cls, "setStopScreenPeriod", "(Lorg/orekit/time/AbsoluteDate;)V");
                mids$[mid_setTca_02135a6ef25adb4b] = env->getMethodID(cls, "setTca", "(Lorg/orekit/time/AbsoluteDate;)V");
                mids$[mid_setTimeSystem_00f5ccc3311d9b97] = env->getMethodID(cls, "setTimeSystem", "(Lorg/orekit/files/ccsds/definitions/TimeSystem;)V");
                mids$[mid_validate_a1fa5dae97ea5ed2] = env->getMethodID(cls, "validate", "()V");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            CdmRelativeMetadata::CdmRelativeMetadata() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_a1fa5dae97ea5ed2)) {}

            void CdmRelativeMetadata::addComment(const ::java::lang::String & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_addComment_734b91ac30d5f9b4], a0.this$);
            }

            void CdmRelativeMetadata::checkNotNull(const ::java::lang::Object & a0, const ::java::lang::Enum & a1) const
            {
              env->callVoidMethod(this$, mids$[mid_checkNotNull_df2b565e99c3c541], a0.this$, a1.this$);
            }

            void CdmRelativeMetadata::checkScreenVolumeConditions() const
            {
              env->callVoidMethod(this$, mids$[mid_checkScreenVolumeConditions_a1fa5dae97ea5ed2]);
            }

            jdouble CdmRelativeMetadata::getApproachAngle() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getApproachAngle_b74f83833fdad017]);
            }

            JArray< jint > CdmRelativeMetadata::getCollisionPercentile() const
            {
              return JArray< jint >(env->callObjectMethod(this$, mids$[mid_getCollisionPercentile_4d095d7a08163110]));
            }

            ::org::orekit::files::ccsds::definitions::PocMethodFacade CdmRelativeMetadata::getCollisionProbaMethod() const
            {
              return ::org::orekit::files::ccsds::definitions::PocMethodFacade(env->callObjectMethod(this$, mids$[mid_getCollisionProbaMethod_2ddd040a83ad32b1]));
            }

            jdouble CdmRelativeMetadata::getCollisionProbability() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getCollisionProbability_b74f83833fdad017]);
            }

            ::java::util::List CdmRelativeMetadata::getComment() const
            {
              return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getComment_e62d3bb06d56d7e3]));
            }

            ::java::lang::String CdmRelativeMetadata::getConjunctionId() const
            {
              return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getConjunctionId_1c1fa1e935d6cdcf]));
            }

            jdouble CdmRelativeMetadata::getMahalanobisDistance() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getMahalanobisDistance_b74f83833fdad017]);
            }

            jdouble CdmRelativeMetadata::getMaxCollisionProbability() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getMaxCollisionProbability_b74f83833fdad017]);
            }

            ::org::orekit::files::ccsds::definitions::PocMethodFacade CdmRelativeMetadata::getMaxCollisionProbabilityMethod() const
            {
              return ::org::orekit::files::ccsds::definitions::PocMethodFacade(env->callObjectMethod(this$, mids$[mid_getMaxCollisionProbabilityMethod_2ddd040a83ad32b1]));
            }

            jdouble CdmRelativeMetadata::getMissDistance() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getMissDistance_b74f83833fdad017]);
            }

            ::org::orekit::time::AbsoluteDate CdmRelativeMetadata::getNextMessageEpoch() const
            {
              return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getNextMessageEpoch_c325492395d89b24]));
            }

            ::org::orekit::time::AbsoluteDate CdmRelativeMetadata::getPreviousMessageEpoch() const
            {
              return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getPreviousMessageEpoch_c325492395d89b24]));
            }

            ::java::lang::String CdmRelativeMetadata::getPreviousMessageId() const
            {
              return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getPreviousMessageId_1c1fa1e935d6cdcf]));
            }

            ::org::hipparchus::geometry::euclidean::threed::Vector3D CdmRelativeMetadata::getRelativePosition() const
            {
              return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getRelativePosition_8b724f8b4fdad1a2]));
            }

            jdouble CdmRelativeMetadata::getRelativeSpeed() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getRelativeSpeed_b74f83833fdad017]);
            }

            ::org::hipparchus::geometry::euclidean::threed::Vector3D CdmRelativeMetadata::getRelativeVelocity() const
            {
              return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getRelativeVelocity_8b724f8b4fdad1a2]));
            }

            ::org::orekit::time::AbsoluteDate CdmRelativeMetadata::getScreenEntryTime() const
            {
              return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getScreenEntryTime_c325492395d89b24]));
            }

            ::org::orekit::time::AbsoluteDate CdmRelativeMetadata::getScreenExitTime() const
            {
              return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getScreenExitTime_c325492395d89b24]));
            }

            jdouble CdmRelativeMetadata::getScreenPcThreshold() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getScreenPcThreshold_b74f83833fdad017]);
            }

            ::org::orekit::files::ccsds::ndm::cdm::ScreenType CdmRelativeMetadata::getScreenType() const
            {
              return ::org::orekit::files::ccsds::ndm::cdm::ScreenType(env->callObjectMethod(this$, mids$[mid_getScreenType_b67da540ddec6964]));
            }

            ::org::orekit::files::ccsds::ndm::cdm::ScreenVolumeFrame CdmRelativeMetadata::getScreenVolumeFrame() const
            {
              return ::org::orekit::files::ccsds::ndm::cdm::ScreenVolumeFrame(env->callObjectMethod(this$, mids$[mid_getScreenVolumeFrame_9c3a026fec3db9c9]));
            }

            jdouble CdmRelativeMetadata::getScreenVolumeRadius() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getScreenVolumeRadius_b74f83833fdad017]);
            }

            ::org::orekit::files::ccsds::ndm::cdm::ScreenVolumeShape CdmRelativeMetadata::getScreenVolumeShape() const
            {
              return ::org::orekit::files::ccsds::ndm::cdm::ScreenVolumeShape(env->callObjectMethod(this$, mids$[mid_getScreenVolumeShape_443628f95af03066]));
            }

            jdouble CdmRelativeMetadata::getScreenVolumeX() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getScreenVolumeX_b74f83833fdad017]);
            }

            jdouble CdmRelativeMetadata::getScreenVolumeY() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getScreenVolumeY_b74f83833fdad017]);
            }

            jdouble CdmRelativeMetadata::getScreenVolumeZ() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getScreenVolumeZ_b74f83833fdad017]);
            }

            jdouble CdmRelativeMetadata::getSefiCollisionProbability() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getSefiCollisionProbability_b74f83833fdad017]);
            }

            ::org::orekit::files::ccsds::definitions::PocMethodFacade CdmRelativeMetadata::getSefiCollisionProbabilityMethod() const
            {
              return ::org::orekit::files::ccsds::definitions::PocMethodFacade(env->callObjectMethod(this$, mids$[mid_getSefiCollisionProbabilityMethod_2ddd040a83ad32b1]));
            }

            ::java::lang::String CdmRelativeMetadata::getSefiFragmentationModel() const
            {
              return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getSefiFragmentationModel_1c1fa1e935d6cdcf]));
            }

            ::org::orekit::time::AbsoluteDate CdmRelativeMetadata::getStartScreenPeriod() const
            {
              return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getStartScreenPeriod_c325492395d89b24]));
            }

            ::org::orekit::time::AbsoluteDate CdmRelativeMetadata::getStopScreenPeriod() const
            {
              return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getStopScreenPeriod_c325492395d89b24]));
            }

            ::org::orekit::time::AbsoluteDate CdmRelativeMetadata::getTca() const
            {
              return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getTca_c325492395d89b24]));
            }

            ::org::orekit::files::ccsds::definitions::TimeSystem CdmRelativeMetadata::getTimeSystem() const
            {
              return ::org::orekit::files::ccsds::definitions::TimeSystem(env->callObjectMethod(this$, mids$[mid_getTimeSystem_91b7f51e80ad440f]));
            }

            void CdmRelativeMetadata::setApproachAngle(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setApproachAngle_8ba9fe7a847cecad], a0);
            }

            void CdmRelativeMetadata::setCollisionPercentile(const JArray< jint > & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setCollisionPercentile_86a2769cb881d388], a0.this$);
            }

            void CdmRelativeMetadata::setCollisionProbaMethod(const ::org::orekit::files::ccsds::definitions::PocMethodFacade & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setCollisionProbaMethod_3d87a594d72256e8], a0.this$);
            }

            void CdmRelativeMetadata::setCollisionProbability(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setCollisionProbability_8ba9fe7a847cecad], a0);
            }

            void CdmRelativeMetadata::setConjunctionId(const ::java::lang::String & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setConjunctionId_734b91ac30d5f9b4], a0.this$);
            }

            void CdmRelativeMetadata::setMahalanobisDistance(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setMahalanobisDistance_8ba9fe7a847cecad], a0);
            }

            void CdmRelativeMetadata::setMaxCollisionProbability(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setMaxCollisionProbability_8ba9fe7a847cecad], a0);
            }

            void CdmRelativeMetadata::setMaxCollisionProbabilityMethod(const ::org::orekit::files::ccsds::definitions::PocMethodFacade & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setMaxCollisionProbabilityMethod_3d87a594d72256e8], a0.this$);
            }

            void CdmRelativeMetadata::setMissDistance(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setMissDistance_8ba9fe7a847cecad], a0);
            }

            void CdmRelativeMetadata::setNextMessageEpoch(const ::org::orekit::time::AbsoluteDate & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setNextMessageEpoch_02135a6ef25adb4b], a0.this$);
            }

            void CdmRelativeMetadata::setPreviousMessageEpoch(const ::org::orekit::time::AbsoluteDate & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setPreviousMessageEpoch_02135a6ef25adb4b], a0.this$);
            }

            void CdmRelativeMetadata::setPreviousMessageId(const ::java::lang::String & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setPreviousMessageId_734b91ac30d5f9b4], a0.this$);
            }

            void CdmRelativeMetadata::setRelativePositionN(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setRelativePositionN_8ba9fe7a847cecad], a0);
            }

            void CdmRelativeMetadata::setRelativePositionR(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setRelativePositionR_8ba9fe7a847cecad], a0);
            }

            void CdmRelativeMetadata::setRelativePositionT(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setRelativePositionT_8ba9fe7a847cecad], a0);
            }

            void CdmRelativeMetadata::setRelativeSpeed(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setRelativeSpeed_8ba9fe7a847cecad], a0);
            }

            void CdmRelativeMetadata::setRelativeVelocityN(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setRelativeVelocityN_8ba9fe7a847cecad], a0);
            }

            void CdmRelativeMetadata::setRelativeVelocityR(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setRelativeVelocityR_8ba9fe7a847cecad], a0);
            }

            void CdmRelativeMetadata::setRelativeVelocityT(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setRelativeVelocityT_8ba9fe7a847cecad], a0);
            }

            void CdmRelativeMetadata::setScreenEntryTime(const ::org::orekit::time::AbsoluteDate & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setScreenEntryTime_02135a6ef25adb4b], a0.this$);
            }

            void CdmRelativeMetadata::setScreenExitTime(const ::org::orekit::time::AbsoluteDate & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setScreenExitTime_02135a6ef25adb4b], a0.this$);
            }

            void CdmRelativeMetadata::setScreenPcThreshold(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setScreenPcThreshold_8ba9fe7a847cecad], a0);
            }

            void CdmRelativeMetadata::setScreenType(const ::org::orekit::files::ccsds::ndm::cdm::ScreenType & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setScreenType_81521600a2b31dc8], a0.this$);
            }

            void CdmRelativeMetadata::setScreenVolumeFrame(const ::org::orekit::files::ccsds::ndm::cdm::ScreenVolumeFrame & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setScreenVolumeFrame_aa1003a1d7d3878a], a0.this$);
            }

            void CdmRelativeMetadata::setScreenVolumeRadius(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setScreenVolumeRadius_8ba9fe7a847cecad], a0);
            }

            void CdmRelativeMetadata::setScreenVolumeShape(const ::org::orekit::files::ccsds::ndm::cdm::ScreenVolumeShape & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setScreenVolumeShape_08871fc1aa7bd48b], a0.this$);
            }

            void CdmRelativeMetadata::setScreenVolumeX(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setScreenVolumeX_8ba9fe7a847cecad], a0);
            }

            void CdmRelativeMetadata::setScreenVolumeY(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setScreenVolumeY_8ba9fe7a847cecad], a0);
            }

            void CdmRelativeMetadata::setScreenVolumeZ(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setScreenVolumeZ_8ba9fe7a847cecad], a0);
            }

            void CdmRelativeMetadata::setSefiCollisionProbability(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setSefiCollisionProbability_8ba9fe7a847cecad], a0);
            }

            void CdmRelativeMetadata::setSefiCollisionProbabilityMethod(const ::org::orekit::files::ccsds::definitions::PocMethodFacade & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setSefiCollisionProbabilityMethod_3d87a594d72256e8], a0.this$);
            }

            void CdmRelativeMetadata::setSefiFragmentationModel(const ::java::lang::String & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setSefiFragmentationModel_734b91ac30d5f9b4], a0.this$);
            }

            void CdmRelativeMetadata::setStartScreenPeriod(const ::org::orekit::time::AbsoluteDate & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setStartScreenPeriod_02135a6ef25adb4b], a0.this$);
            }

            void CdmRelativeMetadata::setStopScreenPeriod(const ::org::orekit::time::AbsoluteDate & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setStopScreenPeriod_02135a6ef25adb4b], a0.this$);
            }

            void CdmRelativeMetadata::setTca(const ::org::orekit::time::AbsoluteDate & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setTca_02135a6ef25adb4b], a0.this$);
            }

            void CdmRelativeMetadata::setTimeSystem(const ::org::orekit::files::ccsds::definitions::TimeSystem & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setTimeSystem_00f5ccc3311d9b97], a0.this$);
            }

            void CdmRelativeMetadata::validate() const
            {
              env->callVoidMethod(this$, mids$[mid_validate_a1fa5dae97ea5ed2]);
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
            static PyObject *t_CdmRelativeMetadata_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_CdmRelativeMetadata_instance_(PyTypeObject *type, PyObject *arg);
            static int t_CdmRelativeMetadata_init_(t_CdmRelativeMetadata *self, PyObject *args, PyObject *kwds);
            static PyObject *t_CdmRelativeMetadata_addComment(t_CdmRelativeMetadata *self, PyObject *arg);
            static PyObject *t_CdmRelativeMetadata_checkNotNull(t_CdmRelativeMetadata *self, PyObject *args);
            static PyObject *t_CdmRelativeMetadata_checkScreenVolumeConditions(t_CdmRelativeMetadata *self);
            static PyObject *t_CdmRelativeMetadata_getApproachAngle(t_CdmRelativeMetadata *self);
            static PyObject *t_CdmRelativeMetadata_getCollisionPercentile(t_CdmRelativeMetadata *self);
            static PyObject *t_CdmRelativeMetadata_getCollisionProbaMethod(t_CdmRelativeMetadata *self);
            static PyObject *t_CdmRelativeMetadata_getCollisionProbability(t_CdmRelativeMetadata *self);
            static PyObject *t_CdmRelativeMetadata_getComment(t_CdmRelativeMetadata *self);
            static PyObject *t_CdmRelativeMetadata_getConjunctionId(t_CdmRelativeMetadata *self);
            static PyObject *t_CdmRelativeMetadata_getMahalanobisDistance(t_CdmRelativeMetadata *self);
            static PyObject *t_CdmRelativeMetadata_getMaxCollisionProbability(t_CdmRelativeMetadata *self);
            static PyObject *t_CdmRelativeMetadata_getMaxCollisionProbabilityMethod(t_CdmRelativeMetadata *self);
            static PyObject *t_CdmRelativeMetadata_getMissDistance(t_CdmRelativeMetadata *self);
            static PyObject *t_CdmRelativeMetadata_getNextMessageEpoch(t_CdmRelativeMetadata *self);
            static PyObject *t_CdmRelativeMetadata_getPreviousMessageEpoch(t_CdmRelativeMetadata *self);
            static PyObject *t_CdmRelativeMetadata_getPreviousMessageId(t_CdmRelativeMetadata *self);
            static PyObject *t_CdmRelativeMetadata_getRelativePosition(t_CdmRelativeMetadata *self);
            static PyObject *t_CdmRelativeMetadata_getRelativeSpeed(t_CdmRelativeMetadata *self);
            static PyObject *t_CdmRelativeMetadata_getRelativeVelocity(t_CdmRelativeMetadata *self);
            static PyObject *t_CdmRelativeMetadata_getScreenEntryTime(t_CdmRelativeMetadata *self);
            static PyObject *t_CdmRelativeMetadata_getScreenExitTime(t_CdmRelativeMetadata *self);
            static PyObject *t_CdmRelativeMetadata_getScreenPcThreshold(t_CdmRelativeMetadata *self);
            static PyObject *t_CdmRelativeMetadata_getScreenType(t_CdmRelativeMetadata *self);
            static PyObject *t_CdmRelativeMetadata_getScreenVolumeFrame(t_CdmRelativeMetadata *self);
            static PyObject *t_CdmRelativeMetadata_getScreenVolumeRadius(t_CdmRelativeMetadata *self);
            static PyObject *t_CdmRelativeMetadata_getScreenVolumeShape(t_CdmRelativeMetadata *self);
            static PyObject *t_CdmRelativeMetadata_getScreenVolumeX(t_CdmRelativeMetadata *self);
            static PyObject *t_CdmRelativeMetadata_getScreenVolumeY(t_CdmRelativeMetadata *self);
            static PyObject *t_CdmRelativeMetadata_getScreenVolumeZ(t_CdmRelativeMetadata *self);
            static PyObject *t_CdmRelativeMetadata_getSefiCollisionProbability(t_CdmRelativeMetadata *self);
            static PyObject *t_CdmRelativeMetadata_getSefiCollisionProbabilityMethod(t_CdmRelativeMetadata *self);
            static PyObject *t_CdmRelativeMetadata_getSefiFragmentationModel(t_CdmRelativeMetadata *self);
            static PyObject *t_CdmRelativeMetadata_getStartScreenPeriod(t_CdmRelativeMetadata *self);
            static PyObject *t_CdmRelativeMetadata_getStopScreenPeriod(t_CdmRelativeMetadata *self);
            static PyObject *t_CdmRelativeMetadata_getTca(t_CdmRelativeMetadata *self);
            static PyObject *t_CdmRelativeMetadata_getTimeSystem(t_CdmRelativeMetadata *self);
            static PyObject *t_CdmRelativeMetadata_setApproachAngle(t_CdmRelativeMetadata *self, PyObject *arg);
            static PyObject *t_CdmRelativeMetadata_setCollisionPercentile(t_CdmRelativeMetadata *self, PyObject *arg);
            static PyObject *t_CdmRelativeMetadata_setCollisionProbaMethod(t_CdmRelativeMetadata *self, PyObject *arg);
            static PyObject *t_CdmRelativeMetadata_setCollisionProbability(t_CdmRelativeMetadata *self, PyObject *arg);
            static PyObject *t_CdmRelativeMetadata_setConjunctionId(t_CdmRelativeMetadata *self, PyObject *arg);
            static PyObject *t_CdmRelativeMetadata_setMahalanobisDistance(t_CdmRelativeMetadata *self, PyObject *arg);
            static PyObject *t_CdmRelativeMetadata_setMaxCollisionProbability(t_CdmRelativeMetadata *self, PyObject *arg);
            static PyObject *t_CdmRelativeMetadata_setMaxCollisionProbabilityMethod(t_CdmRelativeMetadata *self, PyObject *arg);
            static PyObject *t_CdmRelativeMetadata_setMissDistance(t_CdmRelativeMetadata *self, PyObject *arg);
            static PyObject *t_CdmRelativeMetadata_setNextMessageEpoch(t_CdmRelativeMetadata *self, PyObject *arg);
            static PyObject *t_CdmRelativeMetadata_setPreviousMessageEpoch(t_CdmRelativeMetadata *self, PyObject *arg);
            static PyObject *t_CdmRelativeMetadata_setPreviousMessageId(t_CdmRelativeMetadata *self, PyObject *arg);
            static PyObject *t_CdmRelativeMetadata_setRelativePositionN(t_CdmRelativeMetadata *self, PyObject *arg);
            static PyObject *t_CdmRelativeMetadata_setRelativePositionR(t_CdmRelativeMetadata *self, PyObject *arg);
            static PyObject *t_CdmRelativeMetadata_setRelativePositionT(t_CdmRelativeMetadata *self, PyObject *arg);
            static PyObject *t_CdmRelativeMetadata_setRelativeSpeed(t_CdmRelativeMetadata *self, PyObject *arg);
            static PyObject *t_CdmRelativeMetadata_setRelativeVelocityN(t_CdmRelativeMetadata *self, PyObject *arg);
            static PyObject *t_CdmRelativeMetadata_setRelativeVelocityR(t_CdmRelativeMetadata *self, PyObject *arg);
            static PyObject *t_CdmRelativeMetadata_setRelativeVelocityT(t_CdmRelativeMetadata *self, PyObject *arg);
            static PyObject *t_CdmRelativeMetadata_setScreenEntryTime(t_CdmRelativeMetadata *self, PyObject *arg);
            static PyObject *t_CdmRelativeMetadata_setScreenExitTime(t_CdmRelativeMetadata *self, PyObject *arg);
            static PyObject *t_CdmRelativeMetadata_setScreenPcThreshold(t_CdmRelativeMetadata *self, PyObject *arg);
            static PyObject *t_CdmRelativeMetadata_setScreenType(t_CdmRelativeMetadata *self, PyObject *arg);
            static PyObject *t_CdmRelativeMetadata_setScreenVolumeFrame(t_CdmRelativeMetadata *self, PyObject *arg);
            static PyObject *t_CdmRelativeMetadata_setScreenVolumeRadius(t_CdmRelativeMetadata *self, PyObject *arg);
            static PyObject *t_CdmRelativeMetadata_setScreenVolumeShape(t_CdmRelativeMetadata *self, PyObject *arg);
            static PyObject *t_CdmRelativeMetadata_setScreenVolumeX(t_CdmRelativeMetadata *self, PyObject *arg);
            static PyObject *t_CdmRelativeMetadata_setScreenVolumeY(t_CdmRelativeMetadata *self, PyObject *arg);
            static PyObject *t_CdmRelativeMetadata_setScreenVolumeZ(t_CdmRelativeMetadata *self, PyObject *arg);
            static PyObject *t_CdmRelativeMetadata_setSefiCollisionProbability(t_CdmRelativeMetadata *self, PyObject *arg);
            static PyObject *t_CdmRelativeMetadata_setSefiCollisionProbabilityMethod(t_CdmRelativeMetadata *self, PyObject *arg);
            static PyObject *t_CdmRelativeMetadata_setSefiFragmentationModel(t_CdmRelativeMetadata *self, PyObject *arg);
            static PyObject *t_CdmRelativeMetadata_setStartScreenPeriod(t_CdmRelativeMetadata *self, PyObject *arg);
            static PyObject *t_CdmRelativeMetadata_setStopScreenPeriod(t_CdmRelativeMetadata *self, PyObject *arg);
            static PyObject *t_CdmRelativeMetadata_setTca(t_CdmRelativeMetadata *self, PyObject *arg);
            static PyObject *t_CdmRelativeMetadata_setTimeSystem(t_CdmRelativeMetadata *self, PyObject *arg);
            static PyObject *t_CdmRelativeMetadata_validate(t_CdmRelativeMetadata *self);
            static PyObject *t_CdmRelativeMetadata_get__approachAngle(t_CdmRelativeMetadata *self, void *data);
            static int t_CdmRelativeMetadata_set__approachAngle(t_CdmRelativeMetadata *self, PyObject *arg, void *data);
            static PyObject *t_CdmRelativeMetadata_get__collisionPercentile(t_CdmRelativeMetadata *self, void *data);
            static int t_CdmRelativeMetadata_set__collisionPercentile(t_CdmRelativeMetadata *self, PyObject *arg, void *data);
            static PyObject *t_CdmRelativeMetadata_get__collisionProbaMethod(t_CdmRelativeMetadata *self, void *data);
            static int t_CdmRelativeMetadata_set__collisionProbaMethod(t_CdmRelativeMetadata *self, PyObject *arg, void *data);
            static PyObject *t_CdmRelativeMetadata_get__collisionProbability(t_CdmRelativeMetadata *self, void *data);
            static int t_CdmRelativeMetadata_set__collisionProbability(t_CdmRelativeMetadata *self, PyObject *arg, void *data);
            static PyObject *t_CdmRelativeMetadata_get__comment(t_CdmRelativeMetadata *self, void *data);
            static PyObject *t_CdmRelativeMetadata_get__conjunctionId(t_CdmRelativeMetadata *self, void *data);
            static int t_CdmRelativeMetadata_set__conjunctionId(t_CdmRelativeMetadata *self, PyObject *arg, void *data);
            static PyObject *t_CdmRelativeMetadata_get__mahalanobisDistance(t_CdmRelativeMetadata *self, void *data);
            static int t_CdmRelativeMetadata_set__mahalanobisDistance(t_CdmRelativeMetadata *self, PyObject *arg, void *data);
            static PyObject *t_CdmRelativeMetadata_get__maxCollisionProbability(t_CdmRelativeMetadata *self, void *data);
            static int t_CdmRelativeMetadata_set__maxCollisionProbability(t_CdmRelativeMetadata *self, PyObject *arg, void *data);
            static PyObject *t_CdmRelativeMetadata_get__maxCollisionProbabilityMethod(t_CdmRelativeMetadata *self, void *data);
            static int t_CdmRelativeMetadata_set__maxCollisionProbabilityMethod(t_CdmRelativeMetadata *self, PyObject *arg, void *data);
            static PyObject *t_CdmRelativeMetadata_get__missDistance(t_CdmRelativeMetadata *self, void *data);
            static int t_CdmRelativeMetadata_set__missDistance(t_CdmRelativeMetadata *self, PyObject *arg, void *data);
            static PyObject *t_CdmRelativeMetadata_get__nextMessageEpoch(t_CdmRelativeMetadata *self, void *data);
            static int t_CdmRelativeMetadata_set__nextMessageEpoch(t_CdmRelativeMetadata *self, PyObject *arg, void *data);
            static PyObject *t_CdmRelativeMetadata_get__previousMessageEpoch(t_CdmRelativeMetadata *self, void *data);
            static int t_CdmRelativeMetadata_set__previousMessageEpoch(t_CdmRelativeMetadata *self, PyObject *arg, void *data);
            static PyObject *t_CdmRelativeMetadata_get__previousMessageId(t_CdmRelativeMetadata *self, void *data);
            static int t_CdmRelativeMetadata_set__previousMessageId(t_CdmRelativeMetadata *self, PyObject *arg, void *data);
            static PyObject *t_CdmRelativeMetadata_get__relativePosition(t_CdmRelativeMetadata *self, void *data);
            static int t_CdmRelativeMetadata_set__relativePositionN(t_CdmRelativeMetadata *self, PyObject *arg, void *data);
            static int t_CdmRelativeMetadata_set__relativePositionR(t_CdmRelativeMetadata *self, PyObject *arg, void *data);
            static int t_CdmRelativeMetadata_set__relativePositionT(t_CdmRelativeMetadata *self, PyObject *arg, void *data);
            static PyObject *t_CdmRelativeMetadata_get__relativeSpeed(t_CdmRelativeMetadata *self, void *data);
            static int t_CdmRelativeMetadata_set__relativeSpeed(t_CdmRelativeMetadata *self, PyObject *arg, void *data);
            static PyObject *t_CdmRelativeMetadata_get__relativeVelocity(t_CdmRelativeMetadata *self, void *data);
            static int t_CdmRelativeMetadata_set__relativeVelocityN(t_CdmRelativeMetadata *self, PyObject *arg, void *data);
            static int t_CdmRelativeMetadata_set__relativeVelocityR(t_CdmRelativeMetadata *self, PyObject *arg, void *data);
            static int t_CdmRelativeMetadata_set__relativeVelocityT(t_CdmRelativeMetadata *self, PyObject *arg, void *data);
            static PyObject *t_CdmRelativeMetadata_get__screenEntryTime(t_CdmRelativeMetadata *self, void *data);
            static int t_CdmRelativeMetadata_set__screenEntryTime(t_CdmRelativeMetadata *self, PyObject *arg, void *data);
            static PyObject *t_CdmRelativeMetadata_get__screenExitTime(t_CdmRelativeMetadata *self, void *data);
            static int t_CdmRelativeMetadata_set__screenExitTime(t_CdmRelativeMetadata *self, PyObject *arg, void *data);
            static PyObject *t_CdmRelativeMetadata_get__screenPcThreshold(t_CdmRelativeMetadata *self, void *data);
            static int t_CdmRelativeMetadata_set__screenPcThreshold(t_CdmRelativeMetadata *self, PyObject *arg, void *data);
            static PyObject *t_CdmRelativeMetadata_get__screenType(t_CdmRelativeMetadata *self, void *data);
            static int t_CdmRelativeMetadata_set__screenType(t_CdmRelativeMetadata *self, PyObject *arg, void *data);
            static PyObject *t_CdmRelativeMetadata_get__screenVolumeFrame(t_CdmRelativeMetadata *self, void *data);
            static int t_CdmRelativeMetadata_set__screenVolumeFrame(t_CdmRelativeMetadata *self, PyObject *arg, void *data);
            static PyObject *t_CdmRelativeMetadata_get__screenVolumeRadius(t_CdmRelativeMetadata *self, void *data);
            static int t_CdmRelativeMetadata_set__screenVolumeRadius(t_CdmRelativeMetadata *self, PyObject *arg, void *data);
            static PyObject *t_CdmRelativeMetadata_get__screenVolumeShape(t_CdmRelativeMetadata *self, void *data);
            static int t_CdmRelativeMetadata_set__screenVolumeShape(t_CdmRelativeMetadata *self, PyObject *arg, void *data);
            static PyObject *t_CdmRelativeMetadata_get__screenVolumeX(t_CdmRelativeMetadata *self, void *data);
            static int t_CdmRelativeMetadata_set__screenVolumeX(t_CdmRelativeMetadata *self, PyObject *arg, void *data);
            static PyObject *t_CdmRelativeMetadata_get__screenVolumeY(t_CdmRelativeMetadata *self, void *data);
            static int t_CdmRelativeMetadata_set__screenVolumeY(t_CdmRelativeMetadata *self, PyObject *arg, void *data);
            static PyObject *t_CdmRelativeMetadata_get__screenVolumeZ(t_CdmRelativeMetadata *self, void *data);
            static int t_CdmRelativeMetadata_set__screenVolumeZ(t_CdmRelativeMetadata *self, PyObject *arg, void *data);
            static PyObject *t_CdmRelativeMetadata_get__sefiCollisionProbability(t_CdmRelativeMetadata *self, void *data);
            static int t_CdmRelativeMetadata_set__sefiCollisionProbability(t_CdmRelativeMetadata *self, PyObject *arg, void *data);
            static PyObject *t_CdmRelativeMetadata_get__sefiCollisionProbabilityMethod(t_CdmRelativeMetadata *self, void *data);
            static int t_CdmRelativeMetadata_set__sefiCollisionProbabilityMethod(t_CdmRelativeMetadata *self, PyObject *arg, void *data);
            static PyObject *t_CdmRelativeMetadata_get__sefiFragmentationModel(t_CdmRelativeMetadata *self, void *data);
            static int t_CdmRelativeMetadata_set__sefiFragmentationModel(t_CdmRelativeMetadata *self, PyObject *arg, void *data);
            static PyObject *t_CdmRelativeMetadata_get__startScreenPeriod(t_CdmRelativeMetadata *self, void *data);
            static int t_CdmRelativeMetadata_set__startScreenPeriod(t_CdmRelativeMetadata *self, PyObject *arg, void *data);
            static PyObject *t_CdmRelativeMetadata_get__stopScreenPeriod(t_CdmRelativeMetadata *self, void *data);
            static int t_CdmRelativeMetadata_set__stopScreenPeriod(t_CdmRelativeMetadata *self, PyObject *arg, void *data);
            static PyObject *t_CdmRelativeMetadata_get__tca(t_CdmRelativeMetadata *self, void *data);
            static int t_CdmRelativeMetadata_set__tca(t_CdmRelativeMetadata *self, PyObject *arg, void *data);
            static PyObject *t_CdmRelativeMetadata_get__timeSystem(t_CdmRelativeMetadata *self, void *data);
            static int t_CdmRelativeMetadata_set__timeSystem(t_CdmRelativeMetadata *self, PyObject *arg, void *data);
            static PyGetSetDef t_CdmRelativeMetadata__fields_[] = {
              DECLARE_GETSET_FIELD(t_CdmRelativeMetadata, approachAngle),
              DECLARE_GETSET_FIELD(t_CdmRelativeMetadata, collisionPercentile),
              DECLARE_GETSET_FIELD(t_CdmRelativeMetadata, collisionProbaMethod),
              DECLARE_GETSET_FIELD(t_CdmRelativeMetadata, collisionProbability),
              DECLARE_GET_FIELD(t_CdmRelativeMetadata, comment),
              DECLARE_GETSET_FIELD(t_CdmRelativeMetadata, conjunctionId),
              DECLARE_GETSET_FIELD(t_CdmRelativeMetadata, mahalanobisDistance),
              DECLARE_GETSET_FIELD(t_CdmRelativeMetadata, maxCollisionProbability),
              DECLARE_GETSET_FIELD(t_CdmRelativeMetadata, maxCollisionProbabilityMethod),
              DECLARE_GETSET_FIELD(t_CdmRelativeMetadata, missDistance),
              DECLARE_GETSET_FIELD(t_CdmRelativeMetadata, nextMessageEpoch),
              DECLARE_GETSET_FIELD(t_CdmRelativeMetadata, previousMessageEpoch),
              DECLARE_GETSET_FIELD(t_CdmRelativeMetadata, previousMessageId),
              DECLARE_GET_FIELD(t_CdmRelativeMetadata, relativePosition),
              DECLARE_SET_FIELD(t_CdmRelativeMetadata, relativePositionN),
              DECLARE_SET_FIELD(t_CdmRelativeMetadata, relativePositionR),
              DECLARE_SET_FIELD(t_CdmRelativeMetadata, relativePositionT),
              DECLARE_GETSET_FIELD(t_CdmRelativeMetadata, relativeSpeed),
              DECLARE_GET_FIELD(t_CdmRelativeMetadata, relativeVelocity),
              DECLARE_SET_FIELD(t_CdmRelativeMetadata, relativeVelocityN),
              DECLARE_SET_FIELD(t_CdmRelativeMetadata, relativeVelocityR),
              DECLARE_SET_FIELD(t_CdmRelativeMetadata, relativeVelocityT),
              DECLARE_GETSET_FIELD(t_CdmRelativeMetadata, screenEntryTime),
              DECLARE_GETSET_FIELD(t_CdmRelativeMetadata, screenExitTime),
              DECLARE_GETSET_FIELD(t_CdmRelativeMetadata, screenPcThreshold),
              DECLARE_GETSET_FIELD(t_CdmRelativeMetadata, screenType),
              DECLARE_GETSET_FIELD(t_CdmRelativeMetadata, screenVolumeFrame),
              DECLARE_GETSET_FIELD(t_CdmRelativeMetadata, screenVolumeRadius),
              DECLARE_GETSET_FIELD(t_CdmRelativeMetadata, screenVolumeShape),
              DECLARE_GETSET_FIELD(t_CdmRelativeMetadata, screenVolumeX),
              DECLARE_GETSET_FIELD(t_CdmRelativeMetadata, screenVolumeY),
              DECLARE_GETSET_FIELD(t_CdmRelativeMetadata, screenVolumeZ),
              DECLARE_GETSET_FIELD(t_CdmRelativeMetadata, sefiCollisionProbability),
              DECLARE_GETSET_FIELD(t_CdmRelativeMetadata, sefiCollisionProbabilityMethod),
              DECLARE_GETSET_FIELD(t_CdmRelativeMetadata, sefiFragmentationModel),
              DECLARE_GETSET_FIELD(t_CdmRelativeMetadata, startScreenPeriod),
              DECLARE_GETSET_FIELD(t_CdmRelativeMetadata, stopScreenPeriod),
              DECLARE_GETSET_FIELD(t_CdmRelativeMetadata, tca),
              DECLARE_GETSET_FIELD(t_CdmRelativeMetadata, timeSystem),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_CdmRelativeMetadata__methods_[] = {
              DECLARE_METHOD(t_CdmRelativeMetadata, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_CdmRelativeMetadata, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_CdmRelativeMetadata, addComment, METH_O),
              DECLARE_METHOD(t_CdmRelativeMetadata, checkNotNull, METH_VARARGS),
              DECLARE_METHOD(t_CdmRelativeMetadata, checkScreenVolumeConditions, METH_NOARGS),
              DECLARE_METHOD(t_CdmRelativeMetadata, getApproachAngle, METH_NOARGS),
              DECLARE_METHOD(t_CdmRelativeMetadata, getCollisionPercentile, METH_NOARGS),
              DECLARE_METHOD(t_CdmRelativeMetadata, getCollisionProbaMethod, METH_NOARGS),
              DECLARE_METHOD(t_CdmRelativeMetadata, getCollisionProbability, METH_NOARGS),
              DECLARE_METHOD(t_CdmRelativeMetadata, getComment, METH_NOARGS),
              DECLARE_METHOD(t_CdmRelativeMetadata, getConjunctionId, METH_NOARGS),
              DECLARE_METHOD(t_CdmRelativeMetadata, getMahalanobisDistance, METH_NOARGS),
              DECLARE_METHOD(t_CdmRelativeMetadata, getMaxCollisionProbability, METH_NOARGS),
              DECLARE_METHOD(t_CdmRelativeMetadata, getMaxCollisionProbabilityMethod, METH_NOARGS),
              DECLARE_METHOD(t_CdmRelativeMetadata, getMissDistance, METH_NOARGS),
              DECLARE_METHOD(t_CdmRelativeMetadata, getNextMessageEpoch, METH_NOARGS),
              DECLARE_METHOD(t_CdmRelativeMetadata, getPreviousMessageEpoch, METH_NOARGS),
              DECLARE_METHOD(t_CdmRelativeMetadata, getPreviousMessageId, METH_NOARGS),
              DECLARE_METHOD(t_CdmRelativeMetadata, getRelativePosition, METH_NOARGS),
              DECLARE_METHOD(t_CdmRelativeMetadata, getRelativeSpeed, METH_NOARGS),
              DECLARE_METHOD(t_CdmRelativeMetadata, getRelativeVelocity, METH_NOARGS),
              DECLARE_METHOD(t_CdmRelativeMetadata, getScreenEntryTime, METH_NOARGS),
              DECLARE_METHOD(t_CdmRelativeMetadata, getScreenExitTime, METH_NOARGS),
              DECLARE_METHOD(t_CdmRelativeMetadata, getScreenPcThreshold, METH_NOARGS),
              DECLARE_METHOD(t_CdmRelativeMetadata, getScreenType, METH_NOARGS),
              DECLARE_METHOD(t_CdmRelativeMetadata, getScreenVolumeFrame, METH_NOARGS),
              DECLARE_METHOD(t_CdmRelativeMetadata, getScreenVolumeRadius, METH_NOARGS),
              DECLARE_METHOD(t_CdmRelativeMetadata, getScreenVolumeShape, METH_NOARGS),
              DECLARE_METHOD(t_CdmRelativeMetadata, getScreenVolumeX, METH_NOARGS),
              DECLARE_METHOD(t_CdmRelativeMetadata, getScreenVolumeY, METH_NOARGS),
              DECLARE_METHOD(t_CdmRelativeMetadata, getScreenVolumeZ, METH_NOARGS),
              DECLARE_METHOD(t_CdmRelativeMetadata, getSefiCollisionProbability, METH_NOARGS),
              DECLARE_METHOD(t_CdmRelativeMetadata, getSefiCollisionProbabilityMethod, METH_NOARGS),
              DECLARE_METHOD(t_CdmRelativeMetadata, getSefiFragmentationModel, METH_NOARGS),
              DECLARE_METHOD(t_CdmRelativeMetadata, getStartScreenPeriod, METH_NOARGS),
              DECLARE_METHOD(t_CdmRelativeMetadata, getStopScreenPeriod, METH_NOARGS),
              DECLARE_METHOD(t_CdmRelativeMetadata, getTca, METH_NOARGS),
              DECLARE_METHOD(t_CdmRelativeMetadata, getTimeSystem, METH_NOARGS),
              DECLARE_METHOD(t_CdmRelativeMetadata, setApproachAngle, METH_O),
              DECLARE_METHOD(t_CdmRelativeMetadata, setCollisionPercentile, METH_O),
              DECLARE_METHOD(t_CdmRelativeMetadata, setCollisionProbaMethod, METH_O),
              DECLARE_METHOD(t_CdmRelativeMetadata, setCollisionProbability, METH_O),
              DECLARE_METHOD(t_CdmRelativeMetadata, setConjunctionId, METH_O),
              DECLARE_METHOD(t_CdmRelativeMetadata, setMahalanobisDistance, METH_O),
              DECLARE_METHOD(t_CdmRelativeMetadata, setMaxCollisionProbability, METH_O),
              DECLARE_METHOD(t_CdmRelativeMetadata, setMaxCollisionProbabilityMethod, METH_O),
              DECLARE_METHOD(t_CdmRelativeMetadata, setMissDistance, METH_O),
              DECLARE_METHOD(t_CdmRelativeMetadata, setNextMessageEpoch, METH_O),
              DECLARE_METHOD(t_CdmRelativeMetadata, setPreviousMessageEpoch, METH_O),
              DECLARE_METHOD(t_CdmRelativeMetadata, setPreviousMessageId, METH_O),
              DECLARE_METHOD(t_CdmRelativeMetadata, setRelativePositionN, METH_O),
              DECLARE_METHOD(t_CdmRelativeMetadata, setRelativePositionR, METH_O),
              DECLARE_METHOD(t_CdmRelativeMetadata, setRelativePositionT, METH_O),
              DECLARE_METHOD(t_CdmRelativeMetadata, setRelativeSpeed, METH_O),
              DECLARE_METHOD(t_CdmRelativeMetadata, setRelativeVelocityN, METH_O),
              DECLARE_METHOD(t_CdmRelativeMetadata, setRelativeVelocityR, METH_O),
              DECLARE_METHOD(t_CdmRelativeMetadata, setRelativeVelocityT, METH_O),
              DECLARE_METHOD(t_CdmRelativeMetadata, setScreenEntryTime, METH_O),
              DECLARE_METHOD(t_CdmRelativeMetadata, setScreenExitTime, METH_O),
              DECLARE_METHOD(t_CdmRelativeMetadata, setScreenPcThreshold, METH_O),
              DECLARE_METHOD(t_CdmRelativeMetadata, setScreenType, METH_O),
              DECLARE_METHOD(t_CdmRelativeMetadata, setScreenVolumeFrame, METH_O),
              DECLARE_METHOD(t_CdmRelativeMetadata, setScreenVolumeRadius, METH_O),
              DECLARE_METHOD(t_CdmRelativeMetadata, setScreenVolumeShape, METH_O),
              DECLARE_METHOD(t_CdmRelativeMetadata, setScreenVolumeX, METH_O),
              DECLARE_METHOD(t_CdmRelativeMetadata, setScreenVolumeY, METH_O),
              DECLARE_METHOD(t_CdmRelativeMetadata, setScreenVolumeZ, METH_O),
              DECLARE_METHOD(t_CdmRelativeMetadata, setSefiCollisionProbability, METH_O),
              DECLARE_METHOD(t_CdmRelativeMetadata, setSefiCollisionProbabilityMethod, METH_O),
              DECLARE_METHOD(t_CdmRelativeMetadata, setSefiFragmentationModel, METH_O),
              DECLARE_METHOD(t_CdmRelativeMetadata, setStartScreenPeriod, METH_O),
              DECLARE_METHOD(t_CdmRelativeMetadata, setStopScreenPeriod, METH_O),
              DECLARE_METHOD(t_CdmRelativeMetadata, setTca, METH_O),
              DECLARE_METHOD(t_CdmRelativeMetadata, setTimeSystem, METH_O),
              DECLARE_METHOD(t_CdmRelativeMetadata, validate, METH_NOARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(CdmRelativeMetadata)[] = {
              { Py_tp_methods, t_CdmRelativeMetadata__methods_ },
              { Py_tp_init, (void *) t_CdmRelativeMetadata_init_ },
              { Py_tp_getset, t_CdmRelativeMetadata__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(CdmRelativeMetadata)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(CdmRelativeMetadata, t_CdmRelativeMetadata, CdmRelativeMetadata);

            void t_CdmRelativeMetadata::install(PyObject *module)
            {
              installType(&PY_TYPE(CdmRelativeMetadata), &PY_TYPE_DEF(CdmRelativeMetadata), module, "CdmRelativeMetadata", 0);
            }

            void t_CdmRelativeMetadata::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(CdmRelativeMetadata), "class_", make_descriptor(CdmRelativeMetadata::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CdmRelativeMetadata), "wrapfn_", make_descriptor(t_CdmRelativeMetadata::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CdmRelativeMetadata), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_CdmRelativeMetadata_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, CdmRelativeMetadata::initializeClass, 1)))
                return NULL;
              return t_CdmRelativeMetadata::wrap_Object(CdmRelativeMetadata(((t_CdmRelativeMetadata *) arg)->object.this$));
            }
            static PyObject *t_CdmRelativeMetadata_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, CdmRelativeMetadata::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static int t_CdmRelativeMetadata_init_(t_CdmRelativeMetadata *self, PyObject *args, PyObject *kwds)
            {
              CdmRelativeMetadata object((jobject) NULL);

              INT_CALL(object = CdmRelativeMetadata());
              self->object = object;

              return 0;
            }

            static PyObject *t_CdmRelativeMetadata_addComment(t_CdmRelativeMetadata *self, PyObject *arg)
            {
              ::java::lang::String a0((jobject) NULL);

              if (!parseArg(arg, "s", &a0))
              {
                OBJ_CALL(self->object.addComment(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "addComment", arg);
              return NULL;
            }

            static PyObject *t_CdmRelativeMetadata_checkNotNull(t_CdmRelativeMetadata *self, PyObject *args)
            {
              ::java::lang::Object a0((jobject) NULL);
              ::java::lang::Enum a1((jobject) NULL);
              PyTypeObject **p1;

              if (!parseArgs(args, "oK", ::java::lang::Enum::initializeClass, &a0, &a1, &p1, ::java::lang::t_Enum::parameters_))
              {
                OBJ_CALL(self->object.checkNotNull(a0, a1));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "checkNotNull", args);
              return NULL;
            }

            static PyObject *t_CdmRelativeMetadata_checkScreenVolumeConditions(t_CdmRelativeMetadata *self)
            {
              OBJ_CALL(self->object.checkScreenVolumeConditions());
              Py_RETURN_NONE;
            }

            static PyObject *t_CdmRelativeMetadata_getApproachAngle(t_CdmRelativeMetadata *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getApproachAngle());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_CdmRelativeMetadata_getCollisionPercentile(t_CdmRelativeMetadata *self)
            {
              JArray< jint > result((jobject) NULL);
              OBJ_CALL(result = self->object.getCollisionPercentile());
              return result.wrap();
            }

            static PyObject *t_CdmRelativeMetadata_getCollisionProbaMethod(t_CdmRelativeMetadata *self)
            {
              ::org::orekit::files::ccsds::definitions::PocMethodFacade result((jobject) NULL);
              OBJ_CALL(result = self->object.getCollisionProbaMethod());
              return ::org::orekit::files::ccsds::definitions::t_PocMethodFacade::wrap_Object(result);
            }

            static PyObject *t_CdmRelativeMetadata_getCollisionProbability(t_CdmRelativeMetadata *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getCollisionProbability());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_CdmRelativeMetadata_getComment(t_CdmRelativeMetadata *self)
            {
              ::java::util::List result((jobject) NULL);
              OBJ_CALL(result = self->object.getComment());
              return ::java::util::t_List::wrap_Object(result, ::java::lang::PY_TYPE(String));
            }

            static PyObject *t_CdmRelativeMetadata_getConjunctionId(t_CdmRelativeMetadata *self)
            {
              ::java::lang::String result((jobject) NULL);
              OBJ_CALL(result = self->object.getConjunctionId());
              return j2p(result);
            }

            static PyObject *t_CdmRelativeMetadata_getMahalanobisDistance(t_CdmRelativeMetadata *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getMahalanobisDistance());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_CdmRelativeMetadata_getMaxCollisionProbability(t_CdmRelativeMetadata *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getMaxCollisionProbability());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_CdmRelativeMetadata_getMaxCollisionProbabilityMethod(t_CdmRelativeMetadata *self)
            {
              ::org::orekit::files::ccsds::definitions::PocMethodFacade result((jobject) NULL);
              OBJ_CALL(result = self->object.getMaxCollisionProbabilityMethod());
              return ::org::orekit::files::ccsds::definitions::t_PocMethodFacade::wrap_Object(result);
            }

            static PyObject *t_CdmRelativeMetadata_getMissDistance(t_CdmRelativeMetadata *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getMissDistance());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_CdmRelativeMetadata_getNextMessageEpoch(t_CdmRelativeMetadata *self)
            {
              ::org::orekit::time::AbsoluteDate result((jobject) NULL);
              OBJ_CALL(result = self->object.getNextMessageEpoch());
              return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
            }

            static PyObject *t_CdmRelativeMetadata_getPreviousMessageEpoch(t_CdmRelativeMetadata *self)
            {
              ::org::orekit::time::AbsoluteDate result((jobject) NULL);
              OBJ_CALL(result = self->object.getPreviousMessageEpoch());
              return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
            }

            static PyObject *t_CdmRelativeMetadata_getPreviousMessageId(t_CdmRelativeMetadata *self)
            {
              ::java::lang::String result((jobject) NULL);
              OBJ_CALL(result = self->object.getPreviousMessageId());
              return j2p(result);
            }

            static PyObject *t_CdmRelativeMetadata_getRelativePosition(t_CdmRelativeMetadata *self)
            {
              ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);
              OBJ_CALL(result = self->object.getRelativePosition());
              return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
            }

            static PyObject *t_CdmRelativeMetadata_getRelativeSpeed(t_CdmRelativeMetadata *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getRelativeSpeed());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_CdmRelativeMetadata_getRelativeVelocity(t_CdmRelativeMetadata *self)
            {
              ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);
              OBJ_CALL(result = self->object.getRelativeVelocity());
              return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
            }

            static PyObject *t_CdmRelativeMetadata_getScreenEntryTime(t_CdmRelativeMetadata *self)
            {
              ::org::orekit::time::AbsoluteDate result((jobject) NULL);
              OBJ_CALL(result = self->object.getScreenEntryTime());
              return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
            }

            static PyObject *t_CdmRelativeMetadata_getScreenExitTime(t_CdmRelativeMetadata *self)
            {
              ::org::orekit::time::AbsoluteDate result((jobject) NULL);
              OBJ_CALL(result = self->object.getScreenExitTime());
              return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
            }

            static PyObject *t_CdmRelativeMetadata_getScreenPcThreshold(t_CdmRelativeMetadata *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getScreenPcThreshold());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_CdmRelativeMetadata_getScreenType(t_CdmRelativeMetadata *self)
            {
              ::org::orekit::files::ccsds::ndm::cdm::ScreenType result((jobject) NULL);
              OBJ_CALL(result = self->object.getScreenType());
              return ::org::orekit::files::ccsds::ndm::cdm::t_ScreenType::wrap_Object(result);
            }

            static PyObject *t_CdmRelativeMetadata_getScreenVolumeFrame(t_CdmRelativeMetadata *self)
            {
              ::org::orekit::files::ccsds::ndm::cdm::ScreenVolumeFrame result((jobject) NULL);
              OBJ_CALL(result = self->object.getScreenVolumeFrame());
              return ::org::orekit::files::ccsds::ndm::cdm::t_ScreenVolumeFrame::wrap_Object(result);
            }

            static PyObject *t_CdmRelativeMetadata_getScreenVolumeRadius(t_CdmRelativeMetadata *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getScreenVolumeRadius());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_CdmRelativeMetadata_getScreenVolumeShape(t_CdmRelativeMetadata *self)
            {
              ::org::orekit::files::ccsds::ndm::cdm::ScreenVolumeShape result((jobject) NULL);
              OBJ_CALL(result = self->object.getScreenVolumeShape());
              return ::org::orekit::files::ccsds::ndm::cdm::t_ScreenVolumeShape::wrap_Object(result);
            }

            static PyObject *t_CdmRelativeMetadata_getScreenVolumeX(t_CdmRelativeMetadata *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getScreenVolumeX());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_CdmRelativeMetadata_getScreenVolumeY(t_CdmRelativeMetadata *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getScreenVolumeY());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_CdmRelativeMetadata_getScreenVolumeZ(t_CdmRelativeMetadata *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getScreenVolumeZ());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_CdmRelativeMetadata_getSefiCollisionProbability(t_CdmRelativeMetadata *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getSefiCollisionProbability());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_CdmRelativeMetadata_getSefiCollisionProbabilityMethod(t_CdmRelativeMetadata *self)
            {
              ::org::orekit::files::ccsds::definitions::PocMethodFacade result((jobject) NULL);
              OBJ_CALL(result = self->object.getSefiCollisionProbabilityMethod());
              return ::org::orekit::files::ccsds::definitions::t_PocMethodFacade::wrap_Object(result);
            }

            static PyObject *t_CdmRelativeMetadata_getSefiFragmentationModel(t_CdmRelativeMetadata *self)
            {
              ::java::lang::String result((jobject) NULL);
              OBJ_CALL(result = self->object.getSefiFragmentationModel());
              return j2p(result);
            }

            static PyObject *t_CdmRelativeMetadata_getStartScreenPeriod(t_CdmRelativeMetadata *self)
            {
              ::org::orekit::time::AbsoluteDate result((jobject) NULL);
              OBJ_CALL(result = self->object.getStartScreenPeriod());
              return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
            }

            static PyObject *t_CdmRelativeMetadata_getStopScreenPeriod(t_CdmRelativeMetadata *self)
            {
              ::org::orekit::time::AbsoluteDate result((jobject) NULL);
              OBJ_CALL(result = self->object.getStopScreenPeriod());
              return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
            }

            static PyObject *t_CdmRelativeMetadata_getTca(t_CdmRelativeMetadata *self)
            {
              ::org::orekit::time::AbsoluteDate result((jobject) NULL);
              OBJ_CALL(result = self->object.getTca());
              return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
            }

            static PyObject *t_CdmRelativeMetadata_getTimeSystem(t_CdmRelativeMetadata *self)
            {
              ::org::orekit::files::ccsds::definitions::TimeSystem result((jobject) NULL);
              OBJ_CALL(result = self->object.getTimeSystem());
              return ::org::orekit::files::ccsds::definitions::t_TimeSystem::wrap_Object(result);
            }

            static PyObject *t_CdmRelativeMetadata_setApproachAngle(t_CdmRelativeMetadata *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setApproachAngle(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setApproachAngle", arg);
              return NULL;
            }

            static PyObject *t_CdmRelativeMetadata_setCollisionPercentile(t_CdmRelativeMetadata *self, PyObject *arg)
            {
              JArray< jint > a0((jobject) NULL);

              if (!parseArg(arg, "[I", &a0))
              {
                OBJ_CALL(self->object.setCollisionPercentile(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setCollisionPercentile", arg);
              return NULL;
            }

            static PyObject *t_CdmRelativeMetadata_setCollisionProbaMethod(t_CdmRelativeMetadata *self, PyObject *arg)
            {
              ::org::orekit::files::ccsds::definitions::PocMethodFacade a0((jobject) NULL);

              if (!parseArg(arg, "k", ::org::orekit::files::ccsds::definitions::PocMethodFacade::initializeClass, &a0))
              {
                OBJ_CALL(self->object.setCollisionProbaMethod(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setCollisionProbaMethod", arg);
              return NULL;
            }

            static PyObject *t_CdmRelativeMetadata_setCollisionProbability(t_CdmRelativeMetadata *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setCollisionProbability(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setCollisionProbability", arg);
              return NULL;
            }

            static PyObject *t_CdmRelativeMetadata_setConjunctionId(t_CdmRelativeMetadata *self, PyObject *arg)
            {
              ::java::lang::String a0((jobject) NULL);

              if (!parseArg(arg, "s", &a0))
              {
                OBJ_CALL(self->object.setConjunctionId(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setConjunctionId", arg);
              return NULL;
            }

            static PyObject *t_CdmRelativeMetadata_setMahalanobisDistance(t_CdmRelativeMetadata *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setMahalanobisDistance(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setMahalanobisDistance", arg);
              return NULL;
            }

            static PyObject *t_CdmRelativeMetadata_setMaxCollisionProbability(t_CdmRelativeMetadata *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setMaxCollisionProbability(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setMaxCollisionProbability", arg);
              return NULL;
            }

            static PyObject *t_CdmRelativeMetadata_setMaxCollisionProbabilityMethod(t_CdmRelativeMetadata *self, PyObject *arg)
            {
              ::org::orekit::files::ccsds::definitions::PocMethodFacade a0((jobject) NULL);

              if (!parseArg(arg, "k", ::org::orekit::files::ccsds::definitions::PocMethodFacade::initializeClass, &a0))
              {
                OBJ_CALL(self->object.setMaxCollisionProbabilityMethod(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setMaxCollisionProbabilityMethod", arg);
              return NULL;
            }

            static PyObject *t_CdmRelativeMetadata_setMissDistance(t_CdmRelativeMetadata *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setMissDistance(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setMissDistance", arg);
              return NULL;
            }

            static PyObject *t_CdmRelativeMetadata_setNextMessageEpoch(t_CdmRelativeMetadata *self, PyObject *arg)
            {
              ::org::orekit::time::AbsoluteDate a0((jobject) NULL);

              if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
              {
                OBJ_CALL(self->object.setNextMessageEpoch(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setNextMessageEpoch", arg);
              return NULL;
            }

            static PyObject *t_CdmRelativeMetadata_setPreviousMessageEpoch(t_CdmRelativeMetadata *self, PyObject *arg)
            {
              ::org::orekit::time::AbsoluteDate a0((jobject) NULL);

              if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
              {
                OBJ_CALL(self->object.setPreviousMessageEpoch(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setPreviousMessageEpoch", arg);
              return NULL;
            }

            static PyObject *t_CdmRelativeMetadata_setPreviousMessageId(t_CdmRelativeMetadata *self, PyObject *arg)
            {
              ::java::lang::String a0((jobject) NULL);

              if (!parseArg(arg, "s", &a0))
              {
                OBJ_CALL(self->object.setPreviousMessageId(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setPreviousMessageId", arg);
              return NULL;
            }

            static PyObject *t_CdmRelativeMetadata_setRelativePositionN(t_CdmRelativeMetadata *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setRelativePositionN(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setRelativePositionN", arg);
              return NULL;
            }

            static PyObject *t_CdmRelativeMetadata_setRelativePositionR(t_CdmRelativeMetadata *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setRelativePositionR(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setRelativePositionR", arg);
              return NULL;
            }

            static PyObject *t_CdmRelativeMetadata_setRelativePositionT(t_CdmRelativeMetadata *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setRelativePositionT(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setRelativePositionT", arg);
              return NULL;
            }

            static PyObject *t_CdmRelativeMetadata_setRelativeSpeed(t_CdmRelativeMetadata *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setRelativeSpeed(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setRelativeSpeed", arg);
              return NULL;
            }

            static PyObject *t_CdmRelativeMetadata_setRelativeVelocityN(t_CdmRelativeMetadata *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setRelativeVelocityN(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setRelativeVelocityN", arg);
              return NULL;
            }

            static PyObject *t_CdmRelativeMetadata_setRelativeVelocityR(t_CdmRelativeMetadata *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setRelativeVelocityR(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setRelativeVelocityR", arg);
              return NULL;
            }

            static PyObject *t_CdmRelativeMetadata_setRelativeVelocityT(t_CdmRelativeMetadata *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setRelativeVelocityT(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setRelativeVelocityT", arg);
              return NULL;
            }

            static PyObject *t_CdmRelativeMetadata_setScreenEntryTime(t_CdmRelativeMetadata *self, PyObject *arg)
            {
              ::org::orekit::time::AbsoluteDate a0((jobject) NULL);

              if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
              {
                OBJ_CALL(self->object.setScreenEntryTime(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setScreenEntryTime", arg);
              return NULL;
            }

            static PyObject *t_CdmRelativeMetadata_setScreenExitTime(t_CdmRelativeMetadata *self, PyObject *arg)
            {
              ::org::orekit::time::AbsoluteDate a0((jobject) NULL);

              if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
              {
                OBJ_CALL(self->object.setScreenExitTime(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setScreenExitTime", arg);
              return NULL;
            }

            static PyObject *t_CdmRelativeMetadata_setScreenPcThreshold(t_CdmRelativeMetadata *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setScreenPcThreshold(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setScreenPcThreshold", arg);
              return NULL;
            }

            static PyObject *t_CdmRelativeMetadata_setScreenType(t_CdmRelativeMetadata *self, PyObject *arg)
            {
              ::org::orekit::files::ccsds::ndm::cdm::ScreenType a0((jobject) NULL);
              PyTypeObject **p0;

              if (!parseArg(arg, "K", ::org::orekit::files::ccsds::ndm::cdm::ScreenType::initializeClass, &a0, &p0, ::org::orekit::files::ccsds::ndm::cdm::t_ScreenType::parameters_))
              {
                OBJ_CALL(self->object.setScreenType(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setScreenType", arg);
              return NULL;
            }

            static PyObject *t_CdmRelativeMetadata_setScreenVolumeFrame(t_CdmRelativeMetadata *self, PyObject *arg)
            {
              ::org::orekit::files::ccsds::ndm::cdm::ScreenVolumeFrame a0((jobject) NULL);
              PyTypeObject **p0;

              if (!parseArg(arg, "K", ::org::orekit::files::ccsds::ndm::cdm::ScreenVolumeFrame::initializeClass, &a0, &p0, ::org::orekit::files::ccsds::ndm::cdm::t_ScreenVolumeFrame::parameters_))
              {
                OBJ_CALL(self->object.setScreenVolumeFrame(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setScreenVolumeFrame", arg);
              return NULL;
            }

            static PyObject *t_CdmRelativeMetadata_setScreenVolumeRadius(t_CdmRelativeMetadata *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setScreenVolumeRadius(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setScreenVolumeRadius", arg);
              return NULL;
            }

            static PyObject *t_CdmRelativeMetadata_setScreenVolumeShape(t_CdmRelativeMetadata *self, PyObject *arg)
            {
              ::org::orekit::files::ccsds::ndm::cdm::ScreenVolumeShape a0((jobject) NULL);
              PyTypeObject **p0;

              if (!parseArg(arg, "K", ::org::orekit::files::ccsds::ndm::cdm::ScreenVolumeShape::initializeClass, &a0, &p0, ::org::orekit::files::ccsds::ndm::cdm::t_ScreenVolumeShape::parameters_))
              {
                OBJ_CALL(self->object.setScreenVolumeShape(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setScreenVolumeShape", arg);
              return NULL;
            }

            static PyObject *t_CdmRelativeMetadata_setScreenVolumeX(t_CdmRelativeMetadata *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setScreenVolumeX(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setScreenVolumeX", arg);
              return NULL;
            }

            static PyObject *t_CdmRelativeMetadata_setScreenVolumeY(t_CdmRelativeMetadata *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setScreenVolumeY(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setScreenVolumeY", arg);
              return NULL;
            }

            static PyObject *t_CdmRelativeMetadata_setScreenVolumeZ(t_CdmRelativeMetadata *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setScreenVolumeZ(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setScreenVolumeZ", arg);
              return NULL;
            }

            static PyObject *t_CdmRelativeMetadata_setSefiCollisionProbability(t_CdmRelativeMetadata *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setSefiCollisionProbability(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setSefiCollisionProbability", arg);
              return NULL;
            }

            static PyObject *t_CdmRelativeMetadata_setSefiCollisionProbabilityMethod(t_CdmRelativeMetadata *self, PyObject *arg)
            {
              ::org::orekit::files::ccsds::definitions::PocMethodFacade a0((jobject) NULL);

              if (!parseArg(arg, "k", ::org::orekit::files::ccsds::definitions::PocMethodFacade::initializeClass, &a0))
              {
                OBJ_CALL(self->object.setSefiCollisionProbabilityMethod(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setSefiCollisionProbabilityMethod", arg);
              return NULL;
            }

            static PyObject *t_CdmRelativeMetadata_setSefiFragmentationModel(t_CdmRelativeMetadata *self, PyObject *arg)
            {
              ::java::lang::String a0((jobject) NULL);

              if (!parseArg(arg, "s", &a0))
              {
                OBJ_CALL(self->object.setSefiFragmentationModel(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setSefiFragmentationModel", arg);
              return NULL;
            }

            static PyObject *t_CdmRelativeMetadata_setStartScreenPeriod(t_CdmRelativeMetadata *self, PyObject *arg)
            {
              ::org::orekit::time::AbsoluteDate a0((jobject) NULL);

              if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
              {
                OBJ_CALL(self->object.setStartScreenPeriod(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setStartScreenPeriod", arg);
              return NULL;
            }

            static PyObject *t_CdmRelativeMetadata_setStopScreenPeriod(t_CdmRelativeMetadata *self, PyObject *arg)
            {
              ::org::orekit::time::AbsoluteDate a0((jobject) NULL);

              if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
              {
                OBJ_CALL(self->object.setStopScreenPeriod(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setStopScreenPeriod", arg);
              return NULL;
            }

            static PyObject *t_CdmRelativeMetadata_setTca(t_CdmRelativeMetadata *self, PyObject *arg)
            {
              ::org::orekit::time::AbsoluteDate a0((jobject) NULL);

              if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
              {
                OBJ_CALL(self->object.setTca(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setTca", arg);
              return NULL;
            }

            static PyObject *t_CdmRelativeMetadata_setTimeSystem(t_CdmRelativeMetadata *self, PyObject *arg)
            {
              ::org::orekit::files::ccsds::definitions::TimeSystem a0((jobject) NULL);
              PyTypeObject **p0;

              if (!parseArg(arg, "K", ::org::orekit::files::ccsds::definitions::TimeSystem::initializeClass, &a0, &p0, ::org::orekit::files::ccsds::definitions::t_TimeSystem::parameters_))
              {
                OBJ_CALL(self->object.setTimeSystem(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setTimeSystem", arg);
              return NULL;
            }

            static PyObject *t_CdmRelativeMetadata_validate(t_CdmRelativeMetadata *self)
            {
              OBJ_CALL(self->object.validate());
              Py_RETURN_NONE;
            }

            static PyObject *t_CdmRelativeMetadata_get__approachAngle(t_CdmRelativeMetadata *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getApproachAngle());
              return PyFloat_FromDouble((double) value);
            }
            static int t_CdmRelativeMetadata_set__approachAngle(t_CdmRelativeMetadata *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setApproachAngle(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "approachAngle", arg);
              return -1;
            }

            static PyObject *t_CdmRelativeMetadata_get__collisionPercentile(t_CdmRelativeMetadata *self, void *data)
            {
              JArray< jint > value((jobject) NULL);
              OBJ_CALL(value = self->object.getCollisionPercentile());
              return value.wrap();
            }
            static int t_CdmRelativeMetadata_set__collisionPercentile(t_CdmRelativeMetadata *self, PyObject *arg, void *data)
            {
              {
                JArray< jint > value((jobject) NULL);
                if (!parseArg(arg, "[I", &value))
                {
                  INT_CALL(self->object.setCollisionPercentile(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "collisionPercentile", arg);
              return -1;
            }

            static PyObject *t_CdmRelativeMetadata_get__collisionProbaMethod(t_CdmRelativeMetadata *self, void *data)
            {
              ::org::orekit::files::ccsds::definitions::PocMethodFacade value((jobject) NULL);
              OBJ_CALL(value = self->object.getCollisionProbaMethod());
              return ::org::orekit::files::ccsds::definitions::t_PocMethodFacade::wrap_Object(value);
            }
            static int t_CdmRelativeMetadata_set__collisionProbaMethod(t_CdmRelativeMetadata *self, PyObject *arg, void *data)
            {
              {
                ::org::orekit::files::ccsds::definitions::PocMethodFacade value((jobject) NULL);
                if (!parseArg(arg, "k", ::org::orekit::files::ccsds::definitions::PocMethodFacade::initializeClass, &value))
                {
                  INT_CALL(self->object.setCollisionProbaMethod(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "collisionProbaMethod", arg);
              return -1;
            }

            static PyObject *t_CdmRelativeMetadata_get__collisionProbability(t_CdmRelativeMetadata *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getCollisionProbability());
              return PyFloat_FromDouble((double) value);
            }
            static int t_CdmRelativeMetadata_set__collisionProbability(t_CdmRelativeMetadata *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setCollisionProbability(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "collisionProbability", arg);
              return -1;
            }

            static PyObject *t_CdmRelativeMetadata_get__comment(t_CdmRelativeMetadata *self, void *data)
            {
              ::java::util::List value((jobject) NULL);
              OBJ_CALL(value = self->object.getComment());
              return ::java::util::t_List::wrap_Object(value);
            }

            static PyObject *t_CdmRelativeMetadata_get__conjunctionId(t_CdmRelativeMetadata *self, void *data)
            {
              ::java::lang::String value((jobject) NULL);
              OBJ_CALL(value = self->object.getConjunctionId());
              return j2p(value);
            }
            static int t_CdmRelativeMetadata_set__conjunctionId(t_CdmRelativeMetadata *self, PyObject *arg, void *data)
            {
              {
                ::java::lang::String value((jobject) NULL);
                if (!parseArg(arg, "s", &value))
                {
                  INT_CALL(self->object.setConjunctionId(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "conjunctionId", arg);
              return -1;
            }

            static PyObject *t_CdmRelativeMetadata_get__mahalanobisDistance(t_CdmRelativeMetadata *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getMahalanobisDistance());
              return PyFloat_FromDouble((double) value);
            }
            static int t_CdmRelativeMetadata_set__mahalanobisDistance(t_CdmRelativeMetadata *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setMahalanobisDistance(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "mahalanobisDistance", arg);
              return -1;
            }

            static PyObject *t_CdmRelativeMetadata_get__maxCollisionProbability(t_CdmRelativeMetadata *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getMaxCollisionProbability());
              return PyFloat_FromDouble((double) value);
            }
            static int t_CdmRelativeMetadata_set__maxCollisionProbability(t_CdmRelativeMetadata *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setMaxCollisionProbability(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "maxCollisionProbability", arg);
              return -1;
            }

            static PyObject *t_CdmRelativeMetadata_get__maxCollisionProbabilityMethod(t_CdmRelativeMetadata *self, void *data)
            {
              ::org::orekit::files::ccsds::definitions::PocMethodFacade value((jobject) NULL);
              OBJ_CALL(value = self->object.getMaxCollisionProbabilityMethod());
              return ::org::orekit::files::ccsds::definitions::t_PocMethodFacade::wrap_Object(value);
            }
            static int t_CdmRelativeMetadata_set__maxCollisionProbabilityMethod(t_CdmRelativeMetadata *self, PyObject *arg, void *data)
            {
              {
                ::org::orekit::files::ccsds::definitions::PocMethodFacade value((jobject) NULL);
                if (!parseArg(arg, "k", ::org::orekit::files::ccsds::definitions::PocMethodFacade::initializeClass, &value))
                {
                  INT_CALL(self->object.setMaxCollisionProbabilityMethod(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "maxCollisionProbabilityMethod", arg);
              return -1;
            }

            static PyObject *t_CdmRelativeMetadata_get__missDistance(t_CdmRelativeMetadata *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getMissDistance());
              return PyFloat_FromDouble((double) value);
            }
            static int t_CdmRelativeMetadata_set__missDistance(t_CdmRelativeMetadata *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setMissDistance(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "missDistance", arg);
              return -1;
            }

            static PyObject *t_CdmRelativeMetadata_get__nextMessageEpoch(t_CdmRelativeMetadata *self, void *data)
            {
              ::org::orekit::time::AbsoluteDate value((jobject) NULL);
              OBJ_CALL(value = self->object.getNextMessageEpoch());
              return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
            }
            static int t_CdmRelativeMetadata_set__nextMessageEpoch(t_CdmRelativeMetadata *self, PyObject *arg, void *data)
            {
              {
                ::org::orekit::time::AbsoluteDate value((jobject) NULL);
                if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &value))
                {
                  INT_CALL(self->object.setNextMessageEpoch(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "nextMessageEpoch", arg);
              return -1;
            }

            static PyObject *t_CdmRelativeMetadata_get__previousMessageEpoch(t_CdmRelativeMetadata *self, void *data)
            {
              ::org::orekit::time::AbsoluteDate value((jobject) NULL);
              OBJ_CALL(value = self->object.getPreviousMessageEpoch());
              return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
            }
            static int t_CdmRelativeMetadata_set__previousMessageEpoch(t_CdmRelativeMetadata *self, PyObject *arg, void *data)
            {
              {
                ::org::orekit::time::AbsoluteDate value((jobject) NULL);
                if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &value))
                {
                  INT_CALL(self->object.setPreviousMessageEpoch(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "previousMessageEpoch", arg);
              return -1;
            }

            static PyObject *t_CdmRelativeMetadata_get__previousMessageId(t_CdmRelativeMetadata *self, void *data)
            {
              ::java::lang::String value((jobject) NULL);
              OBJ_CALL(value = self->object.getPreviousMessageId());
              return j2p(value);
            }
            static int t_CdmRelativeMetadata_set__previousMessageId(t_CdmRelativeMetadata *self, PyObject *arg, void *data)
            {
              {
                ::java::lang::String value((jobject) NULL);
                if (!parseArg(arg, "s", &value))
                {
                  INT_CALL(self->object.setPreviousMessageId(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "previousMessageId", arg);
              return -1;
            }

            static PyObject *t_CdmRelativeMetadata_get__relativePosition(t_CdmRelativeMetadata *self, void *data)
            {
              ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
              OBJ_CALL(value = self->object.getRelativePosition());
              return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(value);
            }

            static int t_CdmRelativeMetadata_set__relativePositionN(t_CdmRelativeMetadata *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setRelativePositionN(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "relativePositionN", arg);
              return -1;
            }

            static int t_CdmRelativeMetadata_set__relativePositionR(t_CdmRelativeMetadata *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setRelativePositionR(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "relativePositionR", arg);
              return -1;
            }

            static int t_CdmRelativeMetadata_set__relativePositionT(t_CdmRelativeMetadata *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setRelativePositionT(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "relativePositionT", arg);
              return -1;
            }

            static PyObject *t_CdmRelativeMetadata_get__relativeSpeed(t_CdmRelativeMetadata *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getRelativeSpeed());
              return PyFloat_FromDouble((double) value);
            }
            static int t_CdmRelativeMetadata_set__relativeSpeed(t_CdmRelativeMetadata *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setRelativeSpeed(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "relativeSpeed", arg);
              return -1;
            }

            static PyObject *t_CdmRelativeMetadata_get__relativeVelocity(t_CdmRelativeMetadata *self, void *data)
            {
              ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
              OBJ_CALL(value = self->object.getRelativeVelocity());
              return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(value);
            }

            static int t_CdmRelativeMetadata_set__relativeVelocityN(t_CdmRelativeMetadata *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setRelativeVelocityN(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "relativeVelocityN", arg);
              return -1;
            }

            static int t_CdmRelativeMetadata_set__relativeVelocityR(t_CdmRelativeMetadata *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setRelativeVelocityR(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "relativeVelocityR", arg);
              return -1;
            }

            static int t_CdmRelativeMetadata_set__relativeVelocityT(t_CdmRelativeMetadata *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setRelativeVelocityT(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "relativeVelocityT", arg);
              return -1;
            }

            static PyObject *t_CdmRelativeMetadata_get__screenEntryTime(t_CdmRelativeMetadata *self, void *data)
            {
              ::org::orekit::time::AbsoluteDate value((jobject) NULL);
              OBJ_CALL(value = self->object.getScreenEntryTime());
              return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
            }
            static int t_CdmRelativeMetadata_set__screenEntryTime(t_CdmRelativeMetadata *self, PyObject *arg, void *data)
            {
              {
                ::org::orekit::time::AbsoluteDate value((jobject) NULL);
                if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &value))
                {
                  INT_CALL(self->object.setScreenEntryTime(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "screenEntryTime", arg);
              return -1;
            }

            static PyObject *t_CdmRelativeMetadata_get__screenExitTime(t_CdmRelativeMetadata *self, void *data)
            {
              ::org::orekit::time::AbsoluteDate value((jobject) NULL);
              OBJ_CALL(value = self->object.getScreenExitTime());
              return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
            }
            static int t_CdmRelativeMetadata_set__screenExitTime(t_CdmRelativeMetadata *self, PyObject *arg, void *data)
            {
              {
                ::org::orekit::time::AbsoluteDate value((jobject) NULL);
                if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &value))
                {
                  INT_CALL(self->object.setScreenExitTime(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "screenExitTime", arg);
              return -1;
            }

            static PyObject *t_CdmRelativeMetadata_get__screenPcThreshold(t_CdmRelativeMetadata *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getScreenPcThreshold());
              return PyFloat_FromDouble((double) value);
            }
            static int t_CdmRelativeMetadata_set__screenPcThreshold(t_CdmRelativeMetadata *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setScreenPcThreshold(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "screenPcThreshold", arg);
              return -1;
            }

            static PyObject *t_CdmRelativeMetadata_get__screenType(t_CdmRelativeMetadata *self, void *data)
            {
              ::org::orekit::files::ccsds::ndm::cdm::ScreenType value((jobject) NULL);
              OBJ_CALL(value = self->object.getScreenType());
              return ::org::orekit::files::ccsds::ndm::cdm::t_ScreenType::wrap_Object(value);
            }
            static int t_CdmRelativeMetadata_set__screenType(t_CdmRelativeMetadata *self, PyObject *arg, void *data)
            {
              {
                ::org::orekit::files::ccsds::ndm::cdm::ScreenType value((jobject) NULL);
                if (!parseArg(arg, "k", ::org::orekit::files::ccsds::ndm::cdm::ScreenType::initializeClass, &value))
                {
                  INT_CALL(self->object.setScreenType(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "screenType", arg);
              return -1;
            }

            static PyObject *t_CdmRelativeMetadata_get__screenVolumeFrame(t_CdmRelativeMetadata *self, void *data)
            {
              ::org::orekit::files::ccsds::ndm::cdm::ScreenVolumeFrame value((jobject) NULL);
              OBJ_CALL(value = self->object.getScreenVolumeFrame());
              return ::org::orekit::files::ccsds::ndm::cdm::t_ScreenVolumeFrame::wrap_Object(value);
            }
            static int t_CdmRelativeMetadata_set__screenVolumeFrame(t_CdmRelativeMetadata *self, PyObject *arg, void *data)
            {
              {
                ::org::orekit::files::ccsds::ndm::cdm::ScreenVolumeFrame value((jobject) NULL);
                if (!parseArg(arg, "k", ::org::orekit::files::ccsds::ndm::cdm::ScreenVolumeFrame::initializeClass, &value))
                {
                  INT_CALL(self->object.setScreenVolumeFrame(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "screenVolumeFrame", arg);
              return -1;
            }

            static PyObject *t_CdmRelativeMetadata_get__screenVolumeRadius(t_CdmRelativeMetadata *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getScreenVolumeRadius());
              return PyFloat_FromDouble((double) value);
            }
            static int t_CdmRelativeMetadata_set__screenVolumeRadius(t_CdmRelativeMetadata *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setScreenVolumeRadius(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "screenVolumeRadius", arg);
              return -1;
            }

            static PyObject *t_CdmRelativeMetadata_get__screenVolumeShape(t_CdmRelativeMetadata *self, void *data)
            {
              ::org::orekit::files::ccsds::ndm::cdm::ScreenVolumeShape value((jobject) NULL);
              OBJ_CALL(value = self->object.getScreenVolumeShape());
              return ::org::orekit::files::ccsds::ndm::cdm::t_ScreenVolumeShape::wrap_Object(value);
            }
            static int t_CdmRelativeMetadata_set__screenVolumeShape(t_CdmRelativeMetadata *self, PyObject *arg, void *data)
            {
              {
                ::org::orekit::files::ccsds::ndm::cdm::ScreenVolumeShape value((jobject) NULL);
                if (!parseArg(arg, "k", ::org::orekit::files::ccsds::ndm::cdm::ScreenVolumeShape::initializeClass, &value))
                {
                  INT_CALL(self->object.setScreenVolumeShape(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "screenVolumeShape", arg);
              return -1;
            }

            static PyObject *t_CdmRelativeMetadata_get__screenVolumeX(t_CdmRelativeMetadata *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getScreenVolumeX());
              return PyFloat_FromDouble((double) value);
            }
            static int t_CdmRelativeMetadata_set__screenVolumeX(t_CdmRelativeMetadata *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setScreenVolumeX(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "screenVolumeX", arg);
              return -1;
            }

            static PyObject *t_CdmRelativeMetadata_get__screenVolumeY(t_CdmRelativeMetadata *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getScreenVolumeY());
              return PyFloat_FromDouble((double) value);
            }
            static int t_CdmRelativeMetadata_set__screenVolumeY(t_CdmRelativeMetadata *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setScreenVolumeY(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "screenVolumeY", arg);
              return -1;
            }

            static PyObject *t_CdmRelativeMetadata_get__screenVolumeZ(t_CdmRelativeMetadata *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getScreenVolumeZ());
              return PyFloat_FromDouble((double) value);
            }
            static int t_CdmRelativeMetadata_set__screenVolumeZ(t_CdmRelativeMetadata *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setScreenVolumeZ(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "screenVolumeZ", arg);
              return -1;
            }

            static PyObject *t_CdmRelativeMetadata_get__sefiCollisionProbability(t_CdmRelativeMetadata *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getSefiCollisionProbability());
              return PyFloat_FromDouble((double) value);
            }
            static int t_CdmRelativeMetadata_set__sefiCollisionProbability(t_CdmRelativeMetadata *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setSefiCollisionProbability(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "sefiCollisionProbability", arg);
              return -1;
            }

            static PyObject *t_CdmRelativeMetadata_get__sefiCollisionProbabilityMethod(t_CdmRelativeMetadata *self, void *data)
            {
              ::org::orekit::files::ccsds::definitions::PocMethodFacade value((jobject) NULL);
              OBJ_CALL(value = self->object.getSefiCollisionProbabilityMethod());
              return ::org::orekit::files::ccsds::definitions::t_PocMethodFacade::wrap_Object(value);
            }
            static int t_CdmRelativeMetadata_set__sefiCollisionProbabilityMethod(t_CdmRelativeMetadata *self, PyObject *arg, void *data)
            {
              {
                ::org::orekit::files::ccsds::definitions::PocMethodFacade value((jobject) NULL);
                if (!parseArg(arg, "k", ::org::orekit::files::ccsds::definitions::PocMethodFacade::initializeClass, &value))
                {
                  INT_CALL(self->object.setSefiCollisionProbabilityMethod(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "sefiCollisionProbabilityMethod", arg);
              return -1;
            }

            static PyObject *t_CdmRelativeMetadata_get__sefiFragmentationModel(t_CdmRelativeMetadata *self, void *data)
            {
              ::java::lang::String value((jobject) NULL);
              OBJ_CALL(value = self->object.getSefiFragmentationModel());
              return j2p(value);
            }
            static int t_CdmRelativeMetadata_set__sefiFragmentationModel(t_CdmRelativeMetadata *self, PyObject *arg, void *data)
            {
              {
                ::java::lang::String value((jobject) NULL);
                if (!parseArg(arg, "s", &value))
                {
                  INT_CALL(self->object.setSefiFragmentationModel(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "sefiFragmentationModel", arg);
              return -1;
            }

            static PyObject *t_CdmRelativeMetadata_get__startScreenPeriod(t_CdmRelativeMetadata *self, void *data)
            {
              ::org::orekit::time::AbsoluteDate value((jobject) NULL);
              OBJ_CALL(value = self->object.getStartScreenPeriod());
              return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
            }
            static int t_CdmRelativeMetadata_set__startScreenPeriod(t_CdmRelativeMetadata *self, PyObject *arg, void *data)
            {
              {
                ::org::orekit::time::AbsoluteDate value((jobject) NULL);
                if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &value))
                {
                  INT_CALL(self->object.setStartScreenPeriod(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "startScreenPeriod", arg);
              return -1;
            }

            static PyObject *t_CdmRelativeMetadata_get__stopScreenPeriod(t_CdmRelativeMetadata *self, void *data)
            {
              ::org::orekit::time::AbsoluteDate value((jobject) NULL);
              OBJ_CALL(value = self->object.getStopScreenPeriod());
              return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
            }
            static int t_CdmRelativeMetadata_set__stopScreenPeriod(t_CdmRelativeMetadata *self, PyObject *arg, void *data)
            {
              {
                ::org::orekit::time::AbsoluteDate value((jobject) NULL);
                if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &value))
                {
                  INT_CALL(self->object.setStopScreenPeriod(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "stopScreenPeriod", arg);
              return -1;
            }

            static PyObject *t_CdmRelativeMetadata_get__tca(t_CdmRelativeMetadata *self, void *data)
            {
              ::org::orekit::time::AbsoluteDate value((jobject) NULL);
              OBJ_CALL(value = self->object.getTca());
              return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
            }
            static int t_CdmRelativeMetadata_set__tca(t_CdmRelativeMetadata *self, PyObject *arg, void *data)
            {
              {
                ::org::orekit::time::AbsoluteDate value((jobject) NULL);
                if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &value))
                {
                  INT_CALL(self->object.setTca(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "tca", arg);
              return -1;
            }

            static PyObject *t_CdmRelativeMetadata_get__timeSystem(t_CdmRelativeMetadata *self, void *data)
            {
              ::org::orekit::files::ccsds::definitions::TimeSystem value((jobject) NULL);
              OBJ_CALL(value = self->object.getTimeSystem());
              return ::org::orekit::files::ccsds::definitions::t_TimeSystem::wrap_Object(value);
            }
            static int t_CdmRelativeMetadata_set__timeSystem(t_CdmRelativeMetadata *self, PyObject *arg, void *data)
            {
              {
                ::org::orekit::files::ccsds::definitions::TimeSystem value((jobject) NULL);
                if (!parseArg(arg, "k", ::org::orekit::files::ccsds::definitions::TimeSystem::initializeClass, &value))
                {
                  INT_CALL(self->object.setTimeSystem(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "timeSystem", arg);
              return -1;
            }
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/frames/PythonLOF.h"
#include "org/orekit/utils/FieldPVCoordinates.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldRotation.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "java/lang/Throwable.h"
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

      ::java::lang::Class *PythonLOF::class$ = NULL;
      jmethodID *PythonLOF::mids$ = NULL;
      bool PythonLOF::live$ = false;

      jclass PythonLOF::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/frames/PythonLOF");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_a1fa5dae97ea5ed2] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_finalize_a1fa5dae97ea5ed2] = env->getMethodID(cls, "finalize", "()V");
          mids$[mid_getName_1c1fa1e935d6cdcf] = env->getMethodID(cls, "getName", "()Ljava/lang/String;");
          mids$[mid_pythonDecRef_a1fa5dae97ea5ed2] = env->getMethodID(cls, "pythonDecRef", "()V");
          mids$[mid_pythonExtension_6c0ce7e438e5ded4] = env->getMethodID(cls, "pythonExtension", "()J");
          mids$[mid_pythonExtension_3d7dd2314a0dd456] = env->getMethodID(cls, "pythonExtension", "(J)V");
          mids$[mid_rotationFromInertial_9c03210e4a66b8b3] = env->getMethodID(cls, "rotationFromInertial", "(Lorg/orekit/time/AbsoluteDate;Lorg/orekit/utils/PVCoordinates;)Lorg/hipparchus/geometry/euclidean/threed/Rotation;");
          mids$[mid_rotationFromInertial_8f928c19e9edde2b] = env->getMethodID(cls, "rotationFromInertial", "(Lorg/hipparchus/Field;Lorg/orekit/time/FieldAbsoluteDate;Lorg/orekit/utils/FieldPVCoordinates;)Lorg/hipparchus/geometry/euclidean/threed/FieldRotation;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      PythonLOF::PythonLOF() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_a1fa5dae97ea5ed2)) {}

      void PythonLOF::finalize() const
      {
        env->callVoidMethod(this$, mids$[mid_finalize_a1fa5dae97ea5ed2]);
      }

      jlong PythonLOF::pythonExtension() const
      {
        return env->callLongMethod(this$, mids$[mid_pythonExtension_6c0ce7e438e5ded4]);
      }

      void PythonLOF::pythonExtension(jlong a0) const
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
    namespace frames {
      static PyObject *t_PythonLOF_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_PythonLOF_instance_(PyTypeObject *type, PyObject *arg);
      static int t_PythonLOF_init_(t_PythonLOF *self, PyObject *args, PyObject *kwds);
      static PyObject *t_PythonLOF_finalize(t_PythonLOF *self);
      static PyObject *t_PythonLOF_pythonExtension(t_PythonLOF *self, PyObject *args);
      static jobject JNICALL t_PythonLOF_getName0(JNIEnv *jenv, jobject jobj);
      static void JNICALL t_PythonLOF_pythonDecRef1(JNIEnv *jenv, jobject jobj);
      static jobject JNICALL t_PythonLOF_rotationFromInertial2(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1);
      static jobject JNICALL t_PythonLOF_rotationFromInertial3(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jobject a2);
      static PyObject *t_PythonLOF_get__self(t_PythonLOF *self, void *data);
      static PyGetSetDef t_PythonLOF__fields_[] = {
        DECLARE_GET_FIELD(t_PythonLOF, self),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_PythonLOF__methods_[] = {
        DECLARE_METHOD(t_PythonLOF, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonLOF, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonLOF, finalize, METH_NOARGS),
        DECLARE_METHOD(t_PythonLOF, pythonExtension, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(PythonLOF)[] = {
        { Py_tp_methods, t_PythonLOF__methods_ },
        { Py_tp_init, (void *) t_PythonLOF_init_ },
        { Py_tp_getset, t_PythonLOF__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(PythonLOF)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(PythonLOF, t_PythonLOF, PythonLOF);

      void t_PythonLOF::install(PyObject *module)
      {
        installType(&PY_TYPE(PythonLOF), &PY_TYPE_DEF(PythonLOF), module, "PythonLOF", 1);
      }

      void t_PythonLOF::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonLOF), "class_", make_descriptor(PythonLOF::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonLOF), "wrapfn_", make_descriptor(t_PythonLOF::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonLOF), "boxfn_", make_descriptor(boxObject));
        jclass cls = env->getClass(PythonLOF::initializeClass);
        JNINativeMethod methods[] = {
          { "getName", "()Ljava/lang/String;", (void *) t_PythonLOF_getName0 },
          { "pythonDecRef", "()V", (void *) t_PythonLOF_pythonDecRef1 },
          { "rotationFromInertial", "(Lorg/orekit/time/AbsoluteDate;Lorg/orekit/utils/PVCoordinates;)Lorg/hipparchus/geometry/euclidean/threed/Rotation;", (void *) t_PythonLOF_rotationFromInertial2 },
          { "rotationFromInertial", "(Lorg/hipparchus/Field;Lorg/orekit/time/FieldAbsoluteDate;Lorg/orekit/utils/FieldPVCoordinates;)Lorg/hipparchus/geometry/euclidean/threed/FieldRotation;", (void *) t_PythonLOF_rotationFromInertial3 },
        };
        env->registerNatives(cls, methods, 4);
      }

      static PyObject *t_PythonLOF_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, PythonLOF::initializeClass, 1)))
          return NULL;
        return t_PythonLOF::wrap_Object(PythonLOF(((t_PythonLOF *) arg)->object.this$));
      }
      static PyObject *t_PythonLOF_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, PythonLOF::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_PythonLOF_init_(t_PythonLOF *self, PyObject *args, PyObject *kwds)
      {
        PythonLOF object((jobject) NULL);

        INT_CALL(object = PythonLOF());
        self->object = object;

        Py_INCREF((PyObject *) self);
        self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

        return 0;
      }

      static PyObject *t_PythonLOF_finalize(t_PythonLOF *self)
      {
        OBJ_CALL(self->object.finalize());
        Py_RETURN_NONE;
      }

      static PyObject *t_PythonLOF_pythonExtension(t_PythonLOF *self, PyObject *args)
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

      static jobject JNICALL t_PythonLOF_getName0(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonLOF::mids$[PythonLOF::mid_pythonExtension_6c0ce7e438e5ded4]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::java::lang::String value((jobject) NULL);
        PyObject *result = PyObject_CallMethod(obj, "getName", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "s", &value))
        {
          throwTypeError("getName", result);
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

      static void JNICALL t_PythonLOF_pythonDecRef1(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonLOF::mids$[PythonLOF::mid_pythonExtension_6c0ce7e438e5ded4]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

        if (obj != NULL)
        {
          jenv->CallVoidMethod(jobj, PythonLOF::mids$[PythonLOF::mid_pythonExtension_3d7dd2314a0dd456], (jlong) 0);
          env->finalizeObject(jenv, obj);
        }
      }

      static jobject JNICALL t_PythonLOF_rotationFromInertial2(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonLOF::mids$[PythonLOF::mid_pythonExtension_6c0ce7e438e5ded4]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::hipparchus::geometry::euclidean::threed::Rotation value((jobject) NULL);
        PyObject *o0 = ::org::orekit::time::t_AbsoluteDate::wrap_Object(::org::orekit::time::AbsoluteDate(a0));
        PyObject *o1 = ::org::orekit::utils::t_PVCoordinates::wrap_Object(::org::orekit::utils::PVCoordinates(a1));
        PyObject *result = PyObject_CallMethod(obj, "rotationFromInertial", "OO", o0, o1);
        Py_DECREF(o0);
        Py_DECREF(o1);
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::hipparchus::geometry::euclidean::threed::Rotation::initializeClass, &value))
        {
          throwTypeError("rotationFromInertial", result);
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

      static jobject JNICALL t_PythonLOF_rotationFromInertial3(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jobject a2)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonLOF::mids$[PythonLOF::mid_pythonExtension_6c0ce7e438e5ded4]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::hipparchus::geometry::euclidean::threed::FieldRotation value((jobject) NULL);
        PyObject *o0 = ::org::hipparchus::t_Field::wrap_Object(::org::hipparchus::Field(a0));
        PyObject *o1 = ::org::orekit::time::t_FieldAbsoluteDate::wrap_Object(::org::orekit::time::FieldAbsoluteDate(a1));
        PyObject *o2 = ::org::orekit::utils::t_FieldPVCoordinates::wrap_Object(::org::orekit::utils::FieldPVCoordinates(a2));
        PyObject *result = PyObject_CallMethod(obj, "rotationFromInertial", "OOO", o0, o1, o2);
        Py_DECREF(o0);
        Py_DECREF(o1);
        Py_DECREF(o2);
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::hipparchus::geometry::euclidean::threed::FieldRotation::initializeClass, &value))
        {
          throwTypeError("rotationFromInertial", result);
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

      static PyObject *t_PythonLOF_get__self(t_PythonLOF *self, void *data)
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
#include "org/orekit/files/ccsds/ndm/adm/acm/AttitudePhysicalProperties.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "org/orekit/files/ccsds/definitions/FrameFacade.h"
#include "java/lang/Class.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/hipparchus/linear/RealMatrix.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace adm {
            namespace acm {

              ::java::lang::Class *AttitudePhysicalProperties::class$ = NULL;
              jmethodID *AttitudePhysicalProperties::mids$ = NULL;
              bool AttitudePhysicalProperties::live$ = false;

              jclass AttitudePhysicalProperties::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/adm/acm/AttitudePhysicalProperties");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_init$_02135a6ef25adb4b] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/AbsoluteDate;)V");
                  mids$[mid_getCenterOfPressure_8b724f8b4fdad1a2] = env->getMethodID(cls, "getCenterOfPressure", "()Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
                  mids$[mid_getCenterOfPressureReferenceFrame_69d8be1b6b0a1a94] = env->getMethodID(cls, "getCenterOfPressureReferenceFrame", "()Lorg/orekit/files/ccsds/definitions/FrameFacade;");
                  mids$[mid_getDragCoefficient_b74f83833fdad017] = env->getMethodID(cls, "getDragCoefficient", "()D");
                  mids$[mid_getDryMass_b74f83833fdad017] = env->getMethodID(cls, "getDryMass", "()D");
                  mids$[mid_getInertiaMatrix_f77d745f2128c391] = env->getMethodID(cls, "getInertiaMatrix", "()Lorg/hipparchus/linear/RealMatrix;");
                  mids$[mid_getInertiaReferenceFrame_69d8be1b6b0a1a94] = env->getMethodID(cls, "getInertiaReferenceFrame", "()Lorg/orekit/files/ccsds/definitions/FrameFacade;");
                  mids$[mid_getWetMass_b74f83833fdad017] = env->getMethodID(cls, "getWetMass", "()D");
                  mids$[mid_setCenterOfPressure_1844f891addbac57] = env->getMethodID(cls, "setCenterOfPressure", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)V");
                  mids$[mid_setCenterOfPressureReferenceFrame_4755133c5c4c59be] = env->getMethodID(cls, "setCenterOfPressureReferenceFrame", "(Lorg/orekit/files/ccsds/definitions/FrameFacade;)V");
                  mids$[mid_setDragCoefficient_8ba9fe7a847cecad] = env->getMethodID(cls, "setDragCoefficient", "(D)V");
                  mids$[mid_setDryMass_8ba9fe7a847cecad] = env->getMethodID(cls, "setDryMass", "(D)V");
                  mids$[mid_setInertiaMatrixEntry_94fe8d9ffeb50676] = env->getMethodID(cls, "setInertiaMatrixEntry", "(IID)V");
                  mids$[mid_setInertiaReferenceFrame_4755133c5c4c59be] = env->getMethodID(cls, "setInertiaReferenceFrame", "(Lorg/orekit/files/ccsds/definitions/FrameFacade;)V");
                  mids$[mid_setWetMass_8ba9fe7a847cecad] = env->getMethodID(cls, "setWetMass", "(D)V");
                  mids$[mid_validate_8ba9fe7a847cecad] = env->getMethodID(cls, "validate", "(D)V");

                  class$ = new ::java::lang::Class(cls);
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              AttitudePhysicalProperties::AttitudePhysicalProperties(const ::org::orekit::time::AbsoluteDate & a0) : ::org::orekit::files::ccsds::section::CommentsContainer(env->newObject(initializeClass, &mids$, mid_init$_02135a6ef25adb4b, a0.this$)) {}

              ::org::hipparchus::geometry::euclidean::threed::Vector3D AttitudePhysicalProperties::getCenterOfPressure() const
              {
                return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getCenterOfPressure_8b724f8b4fdad1a2]));
              }

              ::org::orekit::files::ccsds::definitions::FrameFacade AttitudePhysicalProperties::getCenterOfPressureReferenceFrame() const
              {
                return ::org::orekit::files::ccsds::definitions::FrameFacade(env->callObjectMethod(this$, mids$[mid_getCenterOfPressureReferenceFrame_69d8be1b6b0a1a94]));
              }

              jdouble AttitudePhysicalProperties::getDragCoefficient() const
              {
                return env->callDoubleMethod(this$, mids$[mid_getDragCoefficient_b74f83833fdad017]);
              }

              jdouble AttitudePhysicalProperties::getDryMass() const
              {
                return env->callDoubleMethod(this$, mids$[mid_getDryMass_b74f83833fdad017]);
              }

              ::org::hipparchus::linear::RealMatrix AttitudePhysicalProperties::getInertiaMatrix() const
              {
                return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_getInertiaMatrix_f77d745f2128c391]));
              }

              ::org::orekit::files::ccsds::definitions::FrameFacade AttitudePhysicalProperties::getInertiaReferenceFrame() const
              {
                return ::org::orekit::files::ccsds::definitions::FrameFacade(env->callObjectMethod(this$, mids$[mid_getInertiaReferenceFrame_69d8be1b6b0a1a94]));
              }

              jdouble AttitudePhysicalProperties::getWetMass() const
              {
                return env->callDoubleMethod(this$, mids$[mid_getWetMass_b74f83833fdad017]);
              }

              void AttitudePhysicalProperties::setCenterOfPressure(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setCenterOfPressure_1844f891addbac57], a0.this$);
              }

              void AttitudePhysicalProperties::setCenterOfPressureReferenceFrame(const ::org::orekit::files::ccsds::definitions::FrameFacade & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setCenterOfPressureReferenceFrame_4755133c5c4c59be], a0.this$);
              }

              void AttitudePhysicalProperties::setDragCoefficient(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setDragCoefficient_8ba9fe7a847cecad], a0);
              }

              void AttitudePhysicalProperties::setDryMass(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setDryMass_8ba9fe7a847cecad], a0);
              }

              void AttitudePhysicalProperties::setInertiaMatrixEntry(jint a0, jint a1, jdouble a2) const
              {
                env->callVoidMethod(this$, mids$[mid_setInertiaMatrixEntry_94fe8d9ffeb50676], a0, a1, a2);
              }

              void AttitudePhysicalProperties::setInertiaReferenceFrame(const ::org::orekit::files::ccsds::definitions::FrameFacade & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setInertiaReferenceFrame_4755133c5c4c59be], a0.this$);
              }

              void AttitudePhysicalProperties::setWetMass(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setWetMass_8ba9fe7a847cecad], a0);
              }

              void AttitudePhysicalProperties::validate(jdouble a0) const
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
          namespace adm {
            namespace acm {
              static PyObject *t_AttitudePhysicalProperties_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_AttitudePhysicalProperties_instance_(PyTypeObject *type, PyObject *arg);
              static int t_AttitudePhysicalProperties_init_(t_AttitudePhysicalProperties *self, PyObject *args, PyObject *kwds);
              static PyObject *t_AttitudePhysicalProperties_getCenterOfPressure(t_AttitudePhysicalProperties *self);
              static PyObject *t_AttitudePhysicalProperties_getCenterOfPressureReferenceFrame(t_AttitudePhysicalProperties *self);
              static PyObject *t_AttitudePhysicalProperties_getDragCoefficient(t_AttitudePhysicalProperties *self);
              static PyObject *t_AttitudePhysicalProperties_getDryMass(t_AttitudePhysicalProperties *self);
              static PyObject *t_AttitudePhysicalProperties_getInertiaMatrix(t_AttitudePhysicalProperties *self);
              static PyObject *t_AttitudePhysicalProperties_getInertiaReferenceFrame(t_AttitudePhysicalProperties *self);
              static PyObject *t_AttitudePhysicalProperties_getWetMass(t_AttitudePhysicalProperties *self);
              static PyObject *t_AttitudePhysicalProperties_setCenterOfPressure(t_AttitudePhysicalProperties *self, PyObject *arg);
              static PyObject *t_AttitudePhysicalProperties_setCenterOfPressureReferenceFrame(t_AttitudePhysicalProperties *self, PyObject *arg);
              static PyObject *t_AttitudePhysicalProperties_setDragCoefficient(t_AttitudePhysicalProperties *self, PyObject *arg);
              static PyObject *t_AttitudePhysicalProperties_setDryMass(t_AttitudePhysicalProperties *self, PyObject *arg);
              static PyObject *t_AttitudePhysicalProperties_setInertiaMatrixEntry(t_AttitudePhysicalProperties *self, PyObject *args);
              static PyObject *t_AttitudePhysicalProperties_setInertiaReferenceFrame(t_AttitudePhysicalProperties *self, PyObject *arg);
              static PyObject *t_AttitudePhysicalProperties_setWetMass(t_AttitudePhysicalProperties *self, PyObject *arg);
              static PyObject *t_AttitudePhysicalProperties_validate(t_AttitudePhysicalProperties *self, PyObject *args);
              static PyObject *t_AttitudePhysicalProperties_get__centerOfPressure(t_AttitudePhysicalProperties *self, void *data);
              static int t_AttitudePhysicalProperties_set__centerOfPressure(t_AttitudePhysicalProperties *self, PyObject *arg, void *data);
              static PyObject *t_AttitudePhysicalProperties_get__centerOfPressureReferenceFrame(t_AttitudePhysicalProperties *self, void *data);
              static int t_AttitudePhysicalProperties_set__centerOfPressureReferenceFrame(t_AttitudePhysicalProperties *self, PyObject *arg, void *data);
              static PyObject *t_AttitudePhysicalProperties_get__dragCoefficient(t_AttitudePhysicalProperties *self, void *data);
              static int t_AttitudePhysicalProperties_set__dragCoefficient(t_AttitudePhysicalProperties *self, PyObject *arg, void *data);
              static PyObject *t_AttitudePhysicalProperties_get__dryMass(t_AttitudePhysicalProperties *self, void *data);
              static int t_AttitudePhysicalProperties_set__dryMass(t_AttitudePhysicalProperties *self, PyObject *arg, void *data);
              static PyObject *t_AttitudePhysicalProperties_get__inertiaMatrix(t_AttitudePhysicalProperties *self, void *data);
              static PyObject *t_AttitudePhysicalProperties_get__inertiaReferenceFrame(t_AttitudePhysicalProperties *self, void *data);
              static int t_AttitudePhysicalProperties_set__inertiaReferenceFrame(t_AttitudePhysicalProperties *self, PyObject *arg, void *data);
              static PyObject *t_AttitudePhysicalProperties_get__wetMass(t_AttitudePhysicalProperties *self, void *data);
              static int t_AttitudePhysicalProperties_set__wetMass(t_AttitudePhysicalProperties *self, PyObject *arg, void *data);
              static PyGetSetDef t_AttitudePhysicalProperties__fields_[] = {
                DECLARE_GETSET_FIELD(t_AttitudePhysicalProperties, centerOfPressure),
                DECLARE_GETSET_FIELD(t_AttitudePhysicalProperties, centerOfPressureReferenceFrame),
                DECLARE_GETSET_FIELD(t_AttitudePhysicalProperties, dragCoefficient),
                DECLARE_GETSET_FIELD(t_AttitudePhysicalProperties, dryMass),
                DECLARE_GET_FIELD(t_AttitudePhysicalProperties, inertiaMatrix),
                DECLARE_GETSET_FIELD(t_AttitudePhysicalProperties, inertiaReferenceFrame),
                DECLARE_GETSET_FIELD(t_AttitudePhysicalProperties, wetMass),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_AttitudePhysicalProperties__methods_[] = {
                DECLARE_METHOD(t_AttitudePhysicalProperties, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_AttitudePhysicalProperties, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_AttitudePhysicalProperties, getCenterOfPressure, METH_NOARGS),
                DECLARE_METHOD(t_AttitudePhysicalProperties, getCenterOfPressureReferenceFrame, METH_NOARGS),
                DECLARE_METHOD(t_AttitudePhysicalProperties, getDragCoefficient, METH_NOARGS),
                DECLARE_METHOD(t_AttitudePhysicalProperties, getDryMass, METH_NOARGS),
                DECLARE_METHOD(t_AttitudePhysicalProperties, getInertiaMatrix, METH_NOARGS),
                DECLARE_METHOD(t_AttitudePhysicalProperties, getInertiaReferenceFrame, METH_NOARGS),
                DECLARE_METHOD(t_AttitudePhysicalProperties, getWetMass, METH_NOARGS),
                DECLARE_METHOD(t_AttitudePhysicalProperties, setCenterOfPressure, METH_O),
                DECLARE_METHOD(t_AttitudePhysicalProperties, setCenterOfPressureReferenceFrame, METH_O),
                DECLARE_METHOD(t_AttitudePhysicalProperties, setDragCoefficient, METH_O),
                DECLARE_METHOD(t_AttitudePhysicalProperties, setDryMass, METH_O),
                DECLARE_METHOD(t_AttitudePhysicalProperties, setInertiaMatrixEntry, METH_VARARGS),
                DECLARE_METHOD(t_AttitudePhysicalProperties, setInertiaReferenceFrame, METH_O),
                DECLARE_METHOD(t_AttitudePhysicalProperties, setWetMass, METH_O),
                DECLARE_METHOD(t_AttitudePhysicalProperties, validate, METH_VARARGS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(AttitudePhysicalProperties)[] = {
                { Py_tp_methods, t_AttitudePhysicalProperties__methods_ },
                { Py_tp_init, (void *) t_AttitudePhysicalProperties_init_ },
                { Py_tp_getset, t_AttitudePhysicalProperties__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(AttitudePhysicalProperties)[] = {
                &PY_TYPE_DEF(::org::orekit::files::ccsds::section::CommentsContainer),
                NULL
              };

              DEFINE_TYPE(AttitudePhysicalProperties, t_AttitudePhysicalProperties, AttitudePhysicalProperties);

              void t_AttitudePhysicalProperties::install(PyObject *module)
              {
                installType(&PY_TYPE(AttitudePhysicalProperties), &PY_TYPE_DEF(AttitudePhysicalProperties), module, "AttitudePhysicalProperties", 0);
              }

              void t_AttitudePhysicalProperties::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudePhysicalProperties), "class_", make_descriptor(AttitudePhysicalProperties::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudePhysicalProperties), "wrapfn_", make_descriptor(t_AttitudePhysicalProperties::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudePhysicalProperties), "boxfn_", make_descriptor(boxObject));
              }

              static PyObject *t_AttitudePhysicalProperties_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, AttitudePhysicalProperties::initializeClass, 1)))
                  return NULL;
                return t_AttitudePhysicalProperties::wrap_Object(AttitudePhysicalProperties(((t_AttitudePhysicalProperties *) arg)->object.this$));
              }
              static PyObject *t_AttitudePhysicalProperties_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, AttitudePhysicalProperties::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static int t_AttitudePhysicalProperties_init_(t_AttitudePhysicalProperties *self, PyObject *args, PyObject *kwds)
              {
                ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
                AttitudePhysicalProperties object((jobject) NULL);

                if (!parseArgs(args, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
                {
                  INT_CALL(object = AttitudePhysicalProperties(a0));
                  self->object = object;
                }
                else
                {
                  PyErr_SetArgsError((PyObject *) self, "__init__", args);
                  return -1;
                }

                return 0;
              }

              static PyObject *t_AttitudePhysicalProperties_getCenterOfPressure(t_AttitudePhysicalProperties *self)
              {
                ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);
                OBJ_CALL(result = self->object.getCenterOfPressure());
                return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
              }

              static PyObject *t_AttitudePhysicalProperties_getCenterOfPressureReferenceFrame(t_AttitudePhysicalProperties *self)
              {
                ::org::orekit::files::ccsds::definitions::FrameFacade result((jobject) NULL);
                OBJ_CALL(result = self->object.getCenterOfPressureReferenceFrame());
                return ::org::orekit::files::ccsds::definitions::t_FrameFacade::wrap_Object(result);
              }

              static PyObject *t_AttitudePhysicalProperties_getDragCoefficient(t_AttitudePhysicalProperties *self)
              {
                jdouble result;
                OBJ_CALL(result = self->object.getDragCoefficient());
                return PyFloat_FromDouble((double) result);
              }

              static PyObject *t_AttitudePhysicalProperties_getDryMass(t_AttitudePhysicalProperties *self)
              {
                jdouble result;
                OBJ_CALL(result = self->object.getDryMass());
                return PyFloat_FromDouble((double) result);
              }

              static PyObject *t_AttitudePhysicalProperties_getInertiaMatrix(t_AttitudePhysicalProperties *self)
              {
                ::org::hipparchus::linear::RealMatrix result((jobject) NULL);
                OBJ_CALL(result = self->object.getInertiaMatrix());
                return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
              }

              static PyObject *t_AttitudePhysicalProperties_getInertiaReferenceFrame(t_AttitudePhysicalProperties *self)
              {
                ::org::orekit::files::ccsds::definitions::FrameFacade result((jobject) NULL);
                OBJ_CALL(result = self->object.getInertiaReferenceFrame());
                return ::org::orekit::files::ccsds::definitions::t_FrameFacade::wrap_Object(result);
              }

              static PyObject *t_AttitudePhysicalProperties_getWetMass(t_AttitudePhysicalProperties *self)
              {
                jdouble result;
                OBJ_CALL(result = self->object.getWetMass());
                return PyFloat_FromDouble((double) result);
              }

              static PyObject *t_AttitudePhysicalProperties_setCenterOfPressure(t_AttitudePhysicalProperties *self, PyObject *arg)
              {
                ::org::hipparchus::geometry::euclidean::threed::Vector3D a0((jobject) NULL);

                if (!parseArg(arg, "k", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0))
                {
                  OBJ_CALL(self->object.setCenterOfPressure(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setCenterOfPressure", arg);
                return NULL;
              }

              static PyObject *t_AttitudePhysicalProperties_setCenterOfPressureReferenceFrame(t_AttitudePhysicalProperties *self, PyObject *arg)
              {
                ::org::orekit::files::ccsds::definitions::FrameFacade a0((jobject) NULL);

                if (!parseArg(arg, "k", ::org::orekit::files::ccsds::definitions::FrameFacade::initializeClass, &a0))
                {
                  OBJ_CALL(self->object.setCenterOfPressureReferenceFrame(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setCenterOfPressureReferenceFrame", arg);
                return NULL;
              }

              static PyObject *t_AttitudePhysicalProperties_setDragCoefficient(t_AttitudePhysicalProperties *self, PyObject *arg)
              {
                jdouble a0;

                if (!parseArg(arg, "D", &a0))
                {
                  OBJ_CALL(self->object.setDragCoefficient(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setDragCoefficient", arg);
                return NULL;
              }

              static PyObject *t_AttitudePhysicalProperties_setDryMass(t_AttitudePhysicalProperties *self, PyObject *arg)
              {
                jdouble a0;

                if (!parseArg(arg, "D", &a0))
                {
                  OBJ_CALL(self->object.setDryMass(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setDryMass", arg);
                return NULL;
              }

              static PyObject *t_AttitudePhysicalProperties_setInertiaMatrixEntry(t_AttitudePhysicalProperties *self, PyObject *args)
              {
                jint a0;
                jint a1;
                jdouble a2;

                if (!parseArgs(args, "IID", &a0, &a1, &a2))
                {
                  OBJ_CALL(self->object.setInertiaMatrixEntry(a0, a1, a2));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setInertiaMatrixEntry", args);
                return NULL;
              }

              static PyObject *t_AttitudePhysicalProperties_setInertiaReferenceFrame(t_AttitudePhysicalProperties *self, PyObject *arg)
              {
                ::org::orekit::files::ccsds::definitions::FrameFacade a0((jobject) NULL);

                if (!parseArg(arg, "k", ::org::orekit::files::ccsds::definitions::FrameFacade::initializeClass, &a0))
                {
                  OBJ_CALL(self->object.setInertiaReferenceFrame(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setInertiaReferenceFrame", arg);
                return NULL;
              }

              static PyObject *t_AttitudePhysicalProperties_setWetMass(t_AttitudePhysicalProperties *self, PyObject *arg)
              {
                jdouble a0;

                if (!parseArg(arg, "D", &a0))
                {
                  OBJ_CALL(self->object.setWetMass(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setWetMass", arg);
                return NULL;
              }

              static PyObject *t_AttitudePhysicalProperties_validate(t_AttitudePhysicalProperties *self, PyObject *args)
              {
                jdouble a0;

                if (!parseArgs(args, "D", &a0))
                {
                  OBJ_CALL(self->object.validate(a0));
                  Py_RETURN_NONE;
                }

                return callSuper(PY_TYPE(AttitudePhysicalProperties), (PyObject *) self, "validate", args, 2);
              }

              static PyObject *t_AttitudePhysicalProperties_get__centerOfPressure(t_AttitudePhysicalProperties *self, void *data)
              {
                ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
                OBJ_CALL(value = self->object.getCenterOfPressure());
                return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(value);
              }
              static int t_AttitudePhysicalProperties_set__centerOfPressure(t_AttitudePhysicalProperties *self, PyObject *arg, void *data)
              {
                {
                  ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
                  if (!parseArg(arg, "k", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &value))
                  {
                    INT_CALL(self->object.setCenterOfPressure(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "centerOfPressure", arg);
                return -1;
              }

              static PyObject *t_AttitudePhysicalProperties_get__centerOfPressureReferenceFrame(t_AttitudePhysicalProperties *self, void *data)
              {
                ::org::orekit::files::ccsds::definitions::FrameFacade value((jobject) NULL);
                OBJ_CALL(value = self->object.getCenterOfPressureReferenceFrame());
                return ::org::orekit::files::ccsds::definitions::t_FrameFacade::wrap_Object(value);
              }
              static int t_AttitudePhysicalProperties_set__centerOfPressureReferenceFrame(t_AttitudePhysicalProperties *self, PyObject *arg, void *data)
              {
                {
                  ::org::orekit::files::ccsds::definitions::FrameFacade value((jobject) NULL);
                  if (!parseArg(arg, "k", ::org::orekit::files::ccsds::definitions::FrameFacade::initializeClass, &value))
                  {
                    INT_CALL(self->object.setCenterOfPressureReferenceFrame(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "centerOfPressureReferenceFrame", arg);
                return -1;
              }

              static PyObject *t_AttitudePhysicalProperties_get__dragCoefficient(t_AttitudePhysicalProperties *self, void *data)
              {
                jdouble value;
                OBJ_CALL(value = self->object.getDragCoefficient());
                return PyFloat_FromDouble((double) value);
              }
              static int t_AttitudePhysicalProperties_set__dragCoefficient(t_AttitudePhysicalProperties *self, PyObject *arg, void *data)
              {
                {
                  jdouble value;
                  if (!parseArg(arg, "D", &value))
                  {
                    INT_CALL(self->object.setDragCoefficient(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "dragCoefficient", arg);
                return -1;
              }

              static PyObject *t_AttitudePhysicalProperties_get__dryMass(t_AttitudePhysicalProperties *self, void *data)
              {
                jdouble value;
                OBJ_CALL(value = self->object.getDryMass());
                return PyFloat_FromDouble((double) value);
              }
              static int t_AttitudePhysicalProperties_set__dryMass(t_AttitudePhysicalProperties *self, PyObject *arg, void *data)
              {
                {
                  jdouble value;
                  if (!parseArg(arg, "D", &value))
                  {
                    INT_CALL(self->object.setDryMass(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "dryMass", arg);
                return -1;
              }

              static PyObject *t_AttitudePhysicalProperties_get__inertiaMatrix(t_AttitudePhysicalProperties *self, void *data)
              {
                ::org::hipparchus::linear::RealMatrix value((jobject) NULL);
                OBJ_CALL(value = self->object.getInertiaMatrix());
                return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(value);
              }

              static PyObject *t_AttitudePhysicalProperties_get__inertiaReferenceFrame(t_AttitudePhysicalProperties *self, void *data)
              {
                ::org::orekit::files::ccsds::definitions::FrameFacade value((jobject) NULL);
                OBJ_CALL(value = self->object.getInertiaReferenceFrame());
                return ::org::orekit::files::ccsds::definitions::t_FrameFacade::wrap_Object(value);
              }
              static int t_AttitudePhysicalProperties_set__inertiaReferenceFrame(t_AttitudePhysicalProperties *self, PyObject *arg, void *data)
              {
                {
                  ::org::orekit::files::ccsds::definitions::FrameFacade value((jobject) NULL);
                  if (!parseArg(arg, "k", ::org::orekit::files::ccsds::definitions::FrameFacade::initializeClass, &value))
                  {
                    INT_CALL(self->object.setInertiaReferenceFrame(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "inertiaReferenceFrame", arg);
                return -1;
              }

              static PyObject *t_AttitudePhysicalProperties_get__wetMass(t_AttitudePhysicalProperties *self, void *data)
              {
                jdouble value;
                OBJ_CALL(value = self->object.getWetMass());
                return PyFloat_FromDouble((double) value);
              }
              static int t_AttitudePhysicalProperties_set__wetMass(t_AttitudePhysicalProperties *self, PyObject *arg, void *data)
              {
                {
                  jdouble value;
                  if (!parseArg(arg, "D", &value))
                  {
                    INT_CALL(self->object.setWetMass(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "wetMass", arg);
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
#include "org/orekit/estimation/measurements/Range.h"
#include "org/orekit/estimation/measurements/Range.h"
#include "org/orekit/estimation/measurements/GroundStation.h"
#include "java/lang/Class.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/estimation/measurements/ObservableSatellite.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {

        ::java::lang::Class *Range::class$ = NULL;
        jmethodID *Range::mids$ = NULL;
        bool Range::live$ = false;
        ::java::lang::String *Range::MEASUREMENT_TYPE = NULL;

        jclass Range::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/Range");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_30a9252c5d1ad83a] = env->getMethodID(cls, "<init>", "(Lorg/orekit/estimation/measurements/GroundStation;ZLorg/orekit/time/AbsoluteDate;DDDLorg/orekit/estimation/measurements/ObservableSatellite;)V");
            mids$[mid_theoreticalEvaluationWithoutDerivatives_9347cf3b1f0dd85a] = env->getMethodID(cls, "theoreticalEvaluationWithoutDerivatives", "(II[Lorg/orekit/propagation/SpacecraftState;)Lorg/orekit/estimation/measurements/EstimatedMeasurementBase;");
            mids$[mid_theoreticalEvaluation_d598991c5cac8ab0] = env->getMethodID(cls, "theoreticalEvaluation", "(II[Lorg/orekit/propagation/SpacecraftState;)Lorg/orekit/estimation/measurements/EstimatedMeasurement;");

            class$ = new ::java::lang::Class(cls);
            cls = (jclass) class$->this$;

            MEASUREMENT_TYPE = new ::java::lang::String(env->getStaticObjectField(cls, "MEASUREMENT_TYPE", "Ljava/lang/String;"));
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        Range::Range(const ::org::orekit::estimation::measurements::GroundStation & a0, jboolean a1, const ::org::orekit::time::AbsoluteDate & a2, jdouble a3, jdouble a4, jdouble a5, const ::org::orekit::estimation::measurements::ObservableSatellite & a6) : ::org::orekit::estimation::measurements::GroundReceiverMeasurement(env->newObject(initializeClass, &mids$, mid_init$_30a9252c5d1ad83a, a0.this$, a1, a2.this$, a3, a4, a5, a6.this$)) {}
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
        static PyObject *t_Range_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_Range_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_Range_of_(t_Range *self, PyObject *args);
        static int t_Range_init_(t_Range *self, PyObject *args, PyObject *kwds);
        static PyObject *t_Range_get__parameters_(t_Range *self, void *data);
        static PyGetSetDef t_Range__fields_[] = {
          DECLARE_GET_FIELD(t_Range, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_Range__methods_[] = {
          DECLARE_METHOD(t_Range, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Range, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Range, of_, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(Range)[] = {
          { Py_tp_methods, t_Range__methods_ },
          { Py_tp_init, (void *) t_Range_init_ },
          { Py_tp_getset, t_Range__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(Range)[] = {
          &PY_TYPE_DEF(::org::orekit::estimation::measurements::GroundReceiverMeasurement),
          NULL
        };

        DEFINE_TYPE(Range, t_Range, Range);
        PyObject *t_Range::wrap_Object(const Range& object, PyTypeObject *p0)
        {
          PyObject *obj = t_Range::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_Range *self = (t_Range *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_Range::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_Range::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_Range *self = (t_Range *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_Range::install(PyObject *module)
        {
          installType(&PY_TYPE(Range), &PY_TYPE_DEF(Range), module, "Range", 0);
        }

        void t_Range::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(Range), "class_", make_descriptor(Range::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Range), "wrapfn_", make_descriptor(t_Range::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Range), "boxfn_", make_descriptor(boxObject));
          env->getClass(Range::initializeClass);
          PyObject_SetAttrString((PyObject *) PY_TYPE(Range), "MEASUREMENT_TYPE", make_descriptor(j2p(*Range::MEASUREMENT_TYPE)));
        }

        static PyObject *t_Range_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, Range::initializeClass, 1)))
            return NULL;
          return t_Range::wrap_Object(Range(((t_Range *) arg)->object.this$));
        }
        static PyObject *t_Range_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, Range::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_Range_of_(t_Range *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_Range_init_(t_Range *self, PyObject *args, PyObject *kwds)
        {
          ::org::orekit::estimation::measurements::GroundStation a0((jobject) NULL);
          jboolean a1;
          ::org::orekit::time::AbsoluteDate a2((jobject) NULL);
          jdouble a3;
          jdouble a4;
          jdouble a5;
          ::org::orekit::estimation::measurements::ObservableSatellite a6((jobject) NULL);
          Range object((jobject) NULL);

          if (!parseArgs(args, "kZkDDDk", ::org::orekit::estimation::measurements::GroundStation::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::estimation::measurements::ObservableSatellite::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5, &a6))
          {
            INT_CALL(object = Range(a0, a1, a2, a3, a4, a5, a6));
            self->object = object;
            self->parameters[0] = ::org::orekit::estimation::measurements::PY_TYPE(Range);
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }
        static PyObject *t_Range_get__parameters_(t_Range *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/models/earth/troposphere/MappingFunction.h"
#include "org/orekit/bodies/FieldGeodeticPoint.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/orekit/bodies/GeodeticPoint.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "java/lang/Class.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace models {
      namespace earth {
        namespace troposphere {

          ::java::lang::Class *MappingFunction::class$ = NULL;
          jmethodID *MappingFunction::mids$ = NULL;
          bool MappingFunction::live$ = false;

          jclass MappingFunction::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/models/earth/troposphere/MappingFunction");

              mids$ = new jmethodID[max_mid];
              mids$[mid_mappingFactors_6e118a7a5998051c] = env->getMethodID(cls, "mappingFactors", "(Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/bodies/FieldGeodeticPoint;Lorg/orekit/time/FieldAbsoluteDate;)[Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_mappingFactors_6dcded9cb7dee3c2] = env->getMethodID(cls, "mappingFactors", "(DLorg/orekit/bodies/GeodeticPoint;Lorg/orekit/time/AbsoluteDate;)[D");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          JArray< ::org::hipparchus::CalculusFieldElement > MappingFunction::mappingFactors(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::orekit::bodies::FieldGeodeticPoint & a1, const ::org::orekit::time::FieldAbsoluteDate & a2) const
          {
            return JArray< ::org::hipparchus::CalculusFieldElement >(env->callObjectMethod(this$, mids$[mid_mappingFactors_6e118a7a5998051c], a0.this$, a1.this$, a2.this$));
          }

          JArray< jdouble > MappingFunction::mappingFactors(jdouble a0, const ::org::orekit::bodies::GeodeticPoint & a1, const ::org::orekit::time::AbsoluteDate & a2) const
          {
            return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_mappingFactors_6dcded9cb7dee3c2], a0, a1.this$, a2.this$));
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
        namespace troposphere {
          static PyObject *t_MappingFunction_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_MappingFunction_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_MappingFunction_mappingFactors(t_MappingFunction *self, PyObject *args);

          static PyMethodDef t_MappingFunction__methods_[] = {
            DECLARE_METHOD(t_MappingFunction, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_MappingFunction, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_MappingFunction, mappingFactors, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(MappingFunction)[] = {
            { Py_tp_methods, t_MappingFunction__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(MappingFunction)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(MappingFunction, t_MappingFunction, MappingFunction);

          void t_MappingFunction::install(PyObject *module)
          {
            installType(&PY_TYPE(MappingFunction), &PY_TYPE_DEF(MappingFunction), module, "MappingFunction", 0);
          }

          void t_MappingFunction::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(MappingFunction), "class_", make_descriptor(MappingFunction::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(MappingFunction), "wrapfn_", make_descriptor(t_MappingFunction::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(MappingFunction), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_MappingFunction_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, MappingFunction::initializeClass, 1)))
              return NULL;
            return t_MappingFunction::wrap_Object(MappingFunction(((t_MappingFunction *) arg)->object.this$));
          }
          static PyObject *t_MappingFunction_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, MappingFunction::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_MappingFunction_mappingFactors(t_MappingFunction *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 3:
              {
                jdouble a0;
                ::org::orekit::bodies::GeodeticPoint a1((jobject) NULL);
                ::org::orekit::time::AbsoluteDate a2((jobject) NULL);
                JArray< jdouble > result((jobject) NULL);

                if (!parseArgs(args, "Dkk", ::org::orekit::bodies::GeodeticPoint::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1, &a2))
                {
                  OBJ_CALL(result = self->object.mappingFactors(a0, a1, a2));
                  return result.wrap();
                }
              }
              {
                ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::orekit::bodies::FieldGeodeticPoint a1((jobject) NULL);
                PyTypeObject **p1;
                ::org::orekit::time::FieldAbsoluteDate a2((jobject) NULL);
                PyTypeObject **p2;
                JArray< ::org::hipparchus::CalculusFieldElement > result((jobject) NULL);

                if (!parseArgs(args, "KKK", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::orekit::bodies::FieldGeodeticPoint::initializeClass, ::org::orekit::time::FieldAbsoluteDate::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::orekit::bodies::t_FieldGeodeticPoint::parameters_, &a2, &p2, ::org::orekit::time::t_FieldAbsoluteDate::parameters_))
                {
                  OBJ_CALL(result = self->object.mappingFactors(a0, a1, a2));
                  return JArray<jobject>(result.this$).wrap(::org::hipparchus::t_CalculusFieldElement::wrap_jobject);
                }
              }
            }

            PyErr_SetArgsError((PyObject *) self, "mappingFactors", args);
            return NULL;
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "java/util/ArrayDeque.h"
#include "java/util/Iterator.h"
#include "java/util/Spliterator.h"
#include "java/lang/Cloneable.h"
#include "java/io/Serializable.h"
#include "java/util/Collection.h"
#include "java/lang/Class.h"
#include "java/lang/Object.h"
#include "java/util/Deque.h"
#include "java/util/ArrayDeque.h"
#include "JArray.h"

namespace java {
  namespace util {

    ::java::lang::Class *ArrayDeque::class$ = NULL;
    jmethodID *ArrayDeque::mids$ = NULL;
    bool ArrayDeque::live$ = false;

    jclass ArrayDeque::initializeClass(bool getOnly)
    {
      if (getOnly)
        return (jclass) (live$ ? class$->this$ : NULL);
      if (class$ == NULL)
      {
        jclass cls = (jclass) env->findClass("java/util/ArrayDeque");

        mids$ = new jmethodID[max_mid];
        mids$[mid_init$_a1fa5dae97ea5ed2] = env->getMethodID(cls, "<init>", "()V");
        mids$[mid_init$_44ed599e93e8a30c] = env->getMethodID(cls, "<init>", "(I)V");
        mids$[mid_init$_7d8f123763cd893c] = env->getMethodID(cls, "<init>", "(Ljava/util/Collection;)V");
        mids$[mid_add_460c5e2d9d51c6cc] = env->getMethodID(cls, "add", "(Ljava/lang/Object;)Z");
        mids$[mid_addAll_801a92d34e44726e] = env->getMethodID(cls, "addAll", "(Ljava/util/Collection;)Z");
        mids$[mid_addFirst_55f3c894852c27a3] = env->getMethodID(cls, "addFirst", "(Ljava/lang/Object;)V");
        mids$[mid_addLast_55f3c894852c27a3] = env->getMethodID(cls, "addLast", "(Ljava/lang/Object;)V");
        mids$[mid_clear_a1fa5dae97ea5ed2] = env->getMethodID(cls, "clear", "()V");
        mids$[mid_clone_bf1e6dd1d8e5ce21] = env->getMethodID(cls, "clone", "()Ljava/util/ArrayDeque;");
        mids$[mid_contains_460c5e2d9d51c6cc] = env->getMethodID(cls, "contains", "(Ljava/lang/Object;)Z");
        mids$[mid_descendingIterator_fc7780bc5d5b73b0] = env->getMethodID(cls, "descendingIterator", "()Ljava/util/Iterator;");
        mids$[mid_element_541690f9ee81d3ad] = env->getMethodID(cls, "element", "()Ljava/lang/Object;");
        mids$[mid_getFirst_541690f9ee81d3ad] = env->getMethodID(cls, "getFirst", "()Ljava/lang/Object;");
        mids$[mid_getLast_541690f9ee81d3ad] = env->getMethodID(cls, "getLast", "()Ljava/lang/Object;");
        mids$[mid_isEmpty_9ab94ac1dc23b105] = env->getMethodID(cls, "isEmpty", "()Z");
        mids$[mid_iterator_fc7780bc5d5b73b0] = env->getMethodID(cls, "iterator", "()Ljava/util/Iterator;");
        mids$[mid_offer_460c5e2d9d51c6cc] = env->getMethodID(cls, "offer", "(Ljava/lang/Object;)Z");
        mids$[mid_offerFirst_460c5e2d9d51c6cc] = env->getMethodID(cls, "offerFirst", "(Ljava/lang/Object;)Z");
        mids$[mid_offerLast_460c5e2d9d51c6cc] = env->getMethodID(cls, "offerLast", "(Ljava/lang/Object;)Z");
        mids$[mid_peek_541690f9ee81d3ad] = env->getMethodID(cls, "peek", "()Ljava/lang/Object;");
        mids$[mid_peekFirst_541690f9ee81d3ad] = env->getMethodID(cls, "peekFirst", "()Ljava/lang/Object;");
        mids$[mid_peekLast_541690f9ee81d3ad] = env->getMethodID(cls, "peekLast", "()Ljava/lang/Object;");
        mids$[mid_poll_541690f9ee81d3ad] = env->getMethodID(cls, "poll", "()Ljava/lang/Object;");
        mids$[mid_pollFirst_541690f9ee81d3ad] = env->getMethodID(cls, "pollFirst", "()Ljava/lang/Object;");
        mids$[mid_pollLast_541690f9ee81d3ad] = env->getMethodID(cls, "pollLast", "()Ljava/lang/Object;");
        mids$[mid_pop_541690f9ee81d3ad] = env->getMethodID(cls, "pop", "()Ljava/lang/Object;");
        mids$[mid_push_55f3c894852c27a3] = env->getMethodID(cls, "push", "(Ljava/lang/Object;)V");
        mids$[mid_remove_541690f9ee81d3ad] = env->getMethodID(cls, "remove", "()Ljava/lang/Object;");
        mids$[mid_remove_460c5e2d9d51c6cc] = env->getMethodID(cls, "remove", "(Ljava/lang/Object;)Z");
        mids$[mid_removeAll_801a92d34e44726e] = env->getMethodID(cls, "removeAll", "(Ljava/util/Collection;)Z");
        mids$[mid_removeFirst_541690f9ee81d3ad] = env->getMethodID(cls, "removeFirst", "()Ljava/lang/Object;");
        mids$[mid_removeFirstOccurrence_460c5e2d9d51c6cc] = env->getMethodID(cls, "removeFirstOccurrence", "(Ljava/lang/Object;)Z");
        mids$[mid_removeLast_541690f9ee81d3ad] = env->getMethodID(cls, "removeLast", "()Ljava/lang/Object;");
        mids$[mid_removeLastOccurrence_460c5e2d9d51c6cc] = env->getMethodID(cls, "removeLastOccurrence", "(Ljava/lang/Object;)Z");
        mids$[mid_retainAll_801a92d34e44726e] = env->getMethodID(cls, "retainAll", "(Ljava/util/Collection;)Z");
        mids$[mid_size_55546ef6a647f39b] = env->getMethodID(cls, "size", "()I");
        mids$[mid_spliterator_fe8f811ebd6e639a] = env->getMethodID(cls, "spliterator", "()Ljava/util/Spliterator;");
        mids$[mid_toArray_24e2edd6319f4c5a] = env->getMethodID(cls, "toArray", "()[Ljava/lang/Object;");
        mids$[mid_toArray_70d423ae061f83d5] = env->getMethodID(cls, "toArray", "([Ljava/lang/Object;)[Ljava/lang/Object;");

        class$ = new ::java::lang::Class(cls);
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    ArrayDeque::ArrayDeque() : ::java::util::AbstractCollection(env->newObject(initializeClass, &mids$, mid_init$_a1fa5dae97ea5ed2)) {}

    ArrayDeque::ArrayDeque(jint a0) : ::java::util::AbstractCollection(env->newObject(initializeClass, &mids$, mid_init$_44ed599e93e8a30c, a0)) {}

    ArrayDeque::ArrayDeque(const ::java::util::Collection & a0) : ::java::util::AbstractCollection(env->newObject(initializeClass, &mids$, mid_init$_7d8f123763cd893c, a0.this$)) {}

    jboolean ArrayDeque::add(const ::java::lang::Object & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_add_460c5e2d9d51c6cc], a0.this$);
    }

    jboolean ArrayDeque::addAll(const ::java::util::Collection & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_addAll_801a92d34e44726e], a0.this$);
    }

    void ArrayDeque::addFirst(const ::java::lang::Object & a0) const
    {
      env->callVoidMethod(this$, mids$[mid_addFirst_55f3c894852c27a3], a0.this$);
    }

    void ArrayDeque::addLast(const ::java::lang::Object & a0) const
    {
      env->callVoidMethod(this$, mids$[mid_addLast_55f3c894852c27a3], a0.this$);
    }

    void ArrayDeque::clear() const
    {
      env->callVoidMethod(this$, mids$[mid_clear_a1fa5dae97ea5ed2]);
    }

    ArrayDeque ArrayDeque::clone() const
    {
      return ArrayDeque(env->callObjectMethod(this$, mids$[mid_clone_bf1e6dd1d8e5ce21]));
    }

    jboolean ArrayDeque::contains(const ::java::lang::Object & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_contains_460c5e2d9d51c6cc], a0.this$);
    }

    ::java::util::Iterator ArrayDeque::descendingIterator() const
    {
      return ::java::util::Iterator(env->callObjectMethod(this$, mids$[mid_descendingIterator_fc7780bc5d5b73b0]));
    }

    ::java::lang::Object ArrayDeque::element() const
    {
      return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_element_541690f9ee81d3ad]));
    }

    ::java::lang::Object ArrayDeque::getFirst() const
    {
      return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_getFirst_541690f9ee81d3ad]));
    }

    ::java::lang::Object ArrayDeque::getLast() const
    {
      return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_getLast_541690f9ee81d3ad]));
    }

    jboolean ArrayDeque::isEmpty() const
    {
      return env->callBooleanMethod(this$, mids$[mid_isEmpty_9ab94ac1dc23b105]);
    }

    ::java::util::Iterator ArrayDeque::iterator() const
    {
      return ::java::util::Iterator(env->callObjectMethod(this$, mids$[mid_iterator_fc7780bc5d5b73b0]));
    }

    jboolean ArrayDeque::offer(const ::java::lang::Object & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_offer_460c5e2d9d51c6cc], a0.this$);
    }

    jboolean ArrayDeque::offerFirst(const ::java::lang::Object & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_offerFirst_460c5e2d9d51c6cc], a0.this$);
    }

    jboolean ArrayDeque::offerLast(const ::java::lang::Object & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_offerLast_460c5e2d9d51c6cc], a0.this$);
    }

    ::java::lang::Object ArrayDeque::peek() const
    {
      return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_peek_541690f9ee81d3ad]));
    }

    ::java::lang::Object ArrayDeque::peekFirst() const
    {
      return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_peekFirst_541690f9ee81d3ad]));
    }

    ::java::lang::Object ArrayDeque::peekLast() const
    {
      return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_peekLast_541690f9ee81d3ad]));
    }

    ::java::lang::Object ArrayDeque::poll() const
    {
      return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_poll_541690f9ee81d3ad]));
    }

    ::java::lang::Object ArrayDeque::pollFirst() const
    {
      return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_pollFirst_541690f9ee81d3ad]));
    }

    ::java::lang::Object ArrayDeque::pollLast() const
    {
      return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_pollLast_541690f9ee81d3ad]));
    }

    ::java::lang::Object ArrayDeque::pop() const
    {
      return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_pop_541690f9ee81d3ad]));
    }

    void ArrayDeque::push(const ::java::lang::Object & a0) const
    {
      env->callVoidMethod(this$, mids$[mid_push_55f3c894852c27a3], a0.this$);
    }

    ::java::lang::Object ArrayDeque::remove() const
    {
      return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_remove_541690f9ee81d3ad]));
    }

    jboolean ArrayDeque::remove(const ::java::lang::Object & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_remove_460c5e2d9d51c6cc], a0.this$);
    }

    jboolean ArrayDeque::removeAll(const ::java::util::Collection & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_removeAll_801a92d34e44726e], a0.this$);
    }

    ::java::lang::Object ArrayDeque::removeFirst() const
    {
      return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_removeFirst_541690f9ee81d3ad]));
    }

    jboolean ArrayDeque::removeFirstOccurrence(const ::java::lang::Object & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_removeFirstOccurrence_460c5e2d9d51c6cc], a0.this$);
    }

    ::java::lang::Object ArrayDeque::removeLast() const
    {
      return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_removeLast_541690f9ee81d3ad]));
    }

    jboolean ArrayDeque::removeLastOccurrence(const ::java::lang::Object & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_removeLastOccurrence_460c5e2d9d51c6cc], a0.this$);
    }

    jboolean ArrayDeque::retainAll(const ::java::util::Collection & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_retainAll_801a92d34e44726e], a0.this$);
    }

    jint ArrayDeque::size() const
    {
      return env->callIntMethod(this$, mids$[mid_size_55546ef6a647f39b]);
    }

    ::java::util::Spliterator ArrayDeque::spliterator() const
    {
      return ::java::util::Spliterator(env->callObjectMethod(this$, mids$[mid_spliterator_fe8f811ebd6e639a]));
    }

    JArray< ::java::lang::Object > ArrayDeque::toArray() const
    {
      return JArray< ::java::lang::Object >(env->callObjectMethod(this$, mids$[mid_toArray_24e2edd6319f4c5a]));
    }

    JArray< ::java::lang::Object > ArrayDeque::toArray(const JArray< ::java::lang::Object > & a0) const
    {
      return JArray< ::java::lang::Object >(env->callObjectMethod(this$, mids$[mid_toArray_70d423ae061f83d5], a0.this$));
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace java {
  namespace util {
    static PyObject *t_ArrayDeque_cast_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_ArrayDeque_instance_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_ArrayDeque_of_(t_ArrayDeque *self, PyObject *args);
    static int t_ArrayDeque_init_(t_ArrayDeque *self, PyObject *args, PyObject *kwds);
    static PyObject *t_ArrayDeque_add(t_ArrayDeque *self, PyObject *args);
    static PyObject *t_ArrayDeque_addAll(t_ArrayDeque *self, PyObject *args);
    static PyObject *t_ArrayDeque_addFirst(t_ArrayDeque *self, PyObject *arg);
    static PyObject *t_ArrayDeque_addLast(t_ArrayDeque *self, PyObject *arg);
    static PyObject *t_ArrayDeque_clear(t_ArrayDeque *self, PyObject *args);
    static PyObject *t_ArrayDeque_clone(t_ArrayDeque *self);
    static PyObject *t_ArrayDeque_contains(t_ArrayDeque *self, PyObject *args);
    static PyObject *t_ArrayDeque_descendingIterator(t_ArrayDeque *self);
    static PyObject *t_ArrayDeque_element(t_ArrayDeque *self);
    static PyObject *t_ArrayDeque_getFirst(t_ArrayDeque *self);
    static PyObject *t_ArrayDeque_getLast(t_ArrayDeque *self);
    static PyObject *t_ArrayDeque_isEmpty(t_ArrayDeque *self, PyObject *args);
    static PyObject *t_ArrayDeque_iterator(t_ArrayDeque *self, PyObject *args);
    static PyObject *t_ArrayDeque_offer(t_ArrayDeque *self, PyObject *arg);
    static PyObject *t_ArrayDeque_offerFirst(t_ArrayDeque *self, PyObject *arg);
    static PyObject *t_ArrayDeque_offerLast(t_ArrayDeque *self, PyObject *arg);
    static PyObject *t_ArrayDeque_peek(t_ArrayDeque *self);
    static PyObject *t_ArrayDeque_peekFirst(t_ArrayDeque *self);
    static PyObject *t_ArrayDeque_peekLast(t_ArrayDeque *self);
    static PyObject *t_ArrayDeque_poll(t_ArrayDeque *self);
    static PyObject *t_ArrayDeque_pollFirst(t_ArrayDeque *self);
    static PyObject *t_ArrayDeque_pollLast(t_ArrayDeque *self);
    static PyObject *t_ArrayDeque_pop(t_ArrayDeque *self);
    static PyObject *t_ArrayDeque_push(t_ArrayDeque *self, PyObject *arg);
    static PyObject *t_ArrayDeque_remove(t_ArrayDeque *self, PyObject *args);
    static PyObject *t_ArrayDeque_removeAll(t_ArrayDeque *self, PyObject *args);
    static PyObject *t_ArrayDeque_removeFirst(t_ArrayDeque *self);
    static PyObject *t_ArrayDeque_removeFirstOccurrence(t_ArrayDeque *self, PyObject *arg);
    static PyObject *t_ArrayDeque_removeLast(t_ArrayDeque *self);
    static PyObject *t_ArrayDeque_removeLastOccurrence(t_ArrayDeque *self, PyObject *arg);
    static PyObject *t_ArrayDeque_retainAll(t_ArrayDeque *self, PyObject *args);
    static PyObject *t_ArrayDeque_size(t_ArrayDeque *self, PyObject *args);
    static PyObject *t_ArrayDeque_spliterator(t_ArrayDeque *self, PyObject *args);
    static PyObject *t_ArrayDeque_toArray(t_ArrayDeque *self, PyObject *args);
    static PyObject *t_ArrayDeque_get__empty(t_ArrayDeque *self, void *data);
    static PyObject *t_ArrayDeque_get__first(t_ArrayDeque *self, void *data);
    static PyObject *t_ArrayDeque_get__last(t_ArrayDeque *self, void *data);
    static PyObject *t_ArrayDeque_get__parameters_(t_ArrayDeque *self, void *data);
    static PyGetSetDef t_ArrayDeque__fields_[] = {
      DECLARE_GET_FIELD(t_ArrayDeque, empty),
      DECLARE_GET_FIELD(t_ArrayDeque, first),
      DECLARE_GET_FIELD(t_ArrayDeque, last),
      DECLARE_GET_FIELD(t_ArrayDeque, parameters_),
      { NULL, NULL, NULL, NULL, NULL }
    };

    static PyMethodDef t_ArrayDeque__methods_[] = {
      DECLARE_METHOD(t_ArrayDeque, cast_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_ArrayDeque, instance_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_ArrayDeque, of_, METH_VARARGS),
      DECLARE_METHOD(t_ArrayDeque, add, METH_VARARGS),
      DECLARE_METHOD(t_ArrayDeque, addAll, METH_VARARGS),
      DECLARE_METHOD(t_ArrayDeque, addFirst, METH_O),
      DECLARE_METHOD(t_ArrayDeque, addLast, METH_O),
      DECLARE_METHOD(t_ArrayDeque, clear, METH_VARARGS),
      DECLARE_METHOD(t_ArrayDeque, clone, METH_NOARGS),
      DECLARE_METHOD(t_ArrayDeque, contains, METH_VARARGS),
      DECLARE_METHOD(t_ArrayDeque, descendingIterator, METH_NOARGS),
      DECLARE_METHOD(t_ArrayDeque, element, METH_NOARGS),
      DECLARE_METHOD(t_ArrayDeque, getFirst, METH_NOARGS),
      DECLARE_METHOD(t_ArrayDeque, getLast, METH_NOARGS),
      DECLARE_METHOD(t_ArrayDeque, isEmpty, METH_VARARGS),
      DECLARE_METHOD(t_ArrayDeque, iterator, METH_VARARGS),
      DECLARE_METHOD(t_ArrayDeque, offer, METH_O),
      DECLARE_METHOD(t_ArrayDeque, offerFirst, METH_O),
      DECLARE_METHOD(t_ArrayDeque, offerLast, METH_O),
      DECLARE_METHOD(t_ArrayDeque, peek, METH_NOARGS),
      DECLARE_METHOD(t_ArrayDeque, peekFirst, METH_NOARGS),
      DECLARE_METHOD(t_ArrayDeque, peekLast, METH_NOARGS),
      DECLARE_METHOD(t_ArrayDeque, poll, METH_NOARGS),
      DECLARE_METHOD(t_ArrayDeque, pollFirst, METH_NOARGS),
      DECLARE_METHOD(t_ArrayDeque, pollLast, METH_NOARGS),
      DECLARE_METHOD(t_ArrayDeque, pop, METH_NOARGS),
      DECLARE_METHOD(t_ArrayDeque, push, METH_O),
      DECLARE_METHOD(t_ArrayDeque, remove, METH_VARARGS),
      DECLARE_METHOD(t_ArrayDeque, removeAll, METH_VARARGS),
      DECLARE_METHOD(t_ArrayDeque, removeFirst, METH_NOARGS),
      DECLARE_METHOD(t_ArrayDeque, removeFirstOccurrence, METH_O),
      DECLARE_METHOD(t_ArrayDeque, removeLast, METH_NOARGS),
      DECLARE_METHOD(t_ArrayDeque, removeLastOccurrence, METH_O),
      DECLARE_METHOD(t_ArrayDeque, retainAll, METH_VARARGS),
      DECLARE_METHOD(t_ArrayDeque, size, METH_VARARGS),
      DECLARE_METHOD(t_ArrayDeque, spliterator, METH_VARARGS),
      DECLARE_METHOD(t_ArrayDeque, toArray, METH_VARARGS),
      { NULL, NULL, 0, NULL }
    };

    static PyType_Slot PY_TYPE_SLOTS(ArrayDeque)[] = {
      { Py_tp_methods, t_ArrayDeque__methods_ },
      { Py_tp_init, (void *) t_ArrayDeque_init_ },
      { Py_tp_getset, t_ArrayDeque__fields_ },
      { Py_tp_iter, (void *) ((PyObject *(*)(t_ArrayDeque *)) get_generic_iterator< t_ArrayDeque >) },
      { Py_tp_iternext, (void *) 0 },
      { 0, NULL }
    };

    static PyType_Def *PY_TYPE_BASES(ArrayDeque)[] = {
      &PY_TYPE_DEF(::java::util::AbstractCollection),
      NULL
    };

    DEFINE_TYPE(ArrayDeque, t_ArrayDeque, ArrayDeque);
    PyObject *t_ArrayDeque::wrap_Object(const ArrayDeque& object, PyTypeObject *p0)
    {
      PyObject *obj = t_ArrayDeque::wrap_Object(object);
      if (obj != NULL && obj != Py_None)
      {
        t_ArrayDeque *self = (t_ArrayDeque *) obj;
        self->parameters[0] = p0;
      }
      return obj;
    }

    PyObject *t_ArrayDeque::wrap_jobject(const jobject& object, PyTypeObject *p0)
    {
      PyObject *obj = t_ArrayDeque::wrap_jobject(object);
      if (obj != NULL && obj != Py_None)
      {
        t_ArrayDeque *self = (t_ArrayDeque *) obj;
        self->parameters[0] = p0;
      }
      return obj;
    }

    void t_ArrayDeque::install(PyObject *module)
    {
      installType(&PY_TYPE(ArrayDeque), &PY_TYPE_DEF(ArrayDeque), module, "ArrayDeque", 0);
    }

    void t_ArrayDeque::initialize(PyObject *module)
    {
      PyObject_SetAttrString((PyObject *) PY_TYPE(ArrayDeque), "class_", make_descriptor(ArrayDeque::initializeClass, 1));
      PyObject_SetAttrString((PyObject *) PY_TYPE(ArrayDeque), "wrapfn_", make_descriptor(t_ArrayDeque::wrap_jobject));
      PyObject_SetAttrString((PyObject *) PY_TYPE(ArrayDeque), "boxfn_", make_descriptor(boxObject));
    }

    static PyObject *t_ArrayDeque_cast_(PyTypeObject *type, PyObject *arg)
    {
      if (!(arg = castCheck(arg, ArrayDeque::initializeClass, 1)))
        return NULL;
      return t_ArrayDeque::wrap_Object(ArrayDeque(((t_ArrayDeque *) arg)->object.this$));
    }
    static PyObject *t_ArrayDeque_instance_(PyTypeObject *type, PyObject *arg)
    {
      if (!castCheck(arg, ArrayDeque::initializeClass, 0))
        Py_RETURN_FALSE;
      Py_RETURN_TRUE;
    }

    static PyObject *t_ArrayDeque_of_(t_ArrayDeque *self, PyObject *args)
    {
      if (!parseArg(args, "T", 1, &(self->parameters)))
        Py_RETURN_SELF;
      return PyErr_SetArgsError((PyObject *) self, "of_", args);
    }

    static int t_ArrayDeque_init_(t_ArrayDeque *self, PyObject *args, PyObject *kwds)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 0:
        {
          ArrayDeque object((jobject) NULL);

          INT_CALL(object = ArrayDeque());
          self->object = object;
          break;
        }
       case 1:
        {
          jint a0;
          ArrayDeque object((jobject) NULL);

          if (!parseArgs(args, "I", &a0))
          {
            INT_CALL(object = ArrayDeque(a0));
            self->object = object;
            break;
          }
        }
        {
          ::java::util::Collection a0((jobject) NULL);
          PyTypeObject **p0;
          ArrayDeque object((jobject) NULL);

          if (!parseArgs(args, "K", ::java::util::Collection::initializeClass, &a0, &p0, ::java::util::t_Collection::parameters_))
          {
            INT_CALL(object = ArrayDeque(a0));
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

    static PyObject *t_ArrayDeque_add(t_ArrayDeque *self, PyObject *args)
    {
      ::java::lang::Object a0((jobject) NULL);
      jboolean result;

      if (!parseArgs(args, "O", self->parameters[0], &a0))
      {
        OBJ_CALL(result = self->object.add(a0));
        Py_RETURN_BOOL(result);
      }

      return callSuper(PY_TYPE(ArrayDeque), (PyObject *) self, "add", args, 2);
    }

    static PyObject *t_ArrayDeque_addAll(t_ArrayDeque *self, PyObject *args)
    {
      ::java::util::Collection a0((jobject) NULL);
      PyTypeObject **p0;
      jboolean result;

      if (!parseArgs(args, "K", ::java::util::Collection::initializeClass, &a0, &p0, ::java::util::t_Collection::parameters_))
      {
        OBJ_CALL(result = self->object.addAll(a0));
        Py_RETURN_BOOL(result);
      }

      return callSuper(PY_TYPE(ArrayDeque), (PyObject *) self, "addAll", args, 2);
    }

    static PyObject *t_ArrayDeque_addFirst(t_ArrayDeque *self, PyObject *arg)
    {
      ::java::lang::Object a0((jobject) NULL);

      if (!parseArg(arg, "O", self->parameters[0], &a0))
      {
        OBJ_CALL(self->object.addFirst(a0));
        Py_RETURN_NONE;
      }

      PyErr_SetArgsError((PyObject *) self, "addFirst", arg);
      return NULL;
    }

    static PyObject *t_ArrayDeque_addLast(t_ArrayDeque *self, PyObject *arg)
    {
      ::java::lang::Object a0((jobject) NULL);

      if (!parseArg(arg, "O", self->parameters[0], &a0))
      {
        OBJ_CALL(self->object.addLast(a0));
        Py_RETURN_NONE;
      }

      PyErr_SetArgsError((PyObject *) self, "addLast", arg);
      return NULL;
    }

    static PyObject *t_ArrayDeque_clear(t_ArrayDeque *self, PyObject *args)
    {

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(self->object.clear());
        Py_RETURN_NONE;
      }

      return callSuper(PY_TYPE(ArrayDeque), (PyObject *) self, "clear", args, 2);
    }

    static PyObject *t_ArrayDeque_clone(t_ArrayDeque *self)
    {
      ArrayDeque result((jobject) NULL);
      OBJ_CALL(result = self->object.clone());
      return t_ArrayDeque::wrap_Object(result, self->parameters[0]);
    }

    static PyObject *t_ArrayDeque_contains(t_ArrayDeque *self, PyObject *args)
    {
      ::java::lang::Object a0((jobject) NULL);
      jboolean result;

      if (!parseArgs(args, "o", &a0))
      {
        OBJ_CALL(result = self->object.contains(a0));
        Py_RETURN_BOOL(result);
      }

      return callSuper(PY_TYPE(ArrayDeque), (PyObject *) self, "contains", args, 2);
    }

    static PyObject *t_ArrayDeque_descendingIterator(t_ArrayDeque *self)
    {
      ::java::util::Iterator result((jobject) NULL);
      OBJ_CALL(result = self->object.descendingIterator());
      return ::java::util::t_Iterator::wrap_Object(result, self->parameters[0]);
    }

    static PyObject *t_ArrayDeque_element(t_ArrayDeque *self)
    {
      ::java::lang::Object result((jobject) NULL);
      OBJ_CALL(result = self->object.element());
      return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::java::lang::t_Object::wrap_Object(result);
    }

    static PyObject *t_ArrayDeque_getFirst(t_ArrayDeque *self)
    {
      ::java::lang::Object result((jobject) NULL);
      OBJ_CALL(result = self->object.getFirst());
      return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::java::lang::t_Object::wrap_Object(result);
    }

    static PyObject *t_ArrayDeque_getLast(t_ArrayDeque *self)
    {
      ::java::lang::Object result((jobject) NULL);
      OBJ_CALL(result = self->object.getLast());
      return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::java::lang::t_Object::wrap_Object(result);
    }

    static PyObject *t_ArrayDeque_isEmpty(t_ArrayDeque *self, PyObject *args)
    {
      jboolean result;

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.isEmpty());
        Py_RETURN_BOOL(result);
      }

      return callSuper(PY_TYPE(ArrayDeque), (PyObject *) self, "isEmpty", args, 2);
    }

    static PyObject *t_ArrayDeque_iterator(t_ArrayDeque *self, PyObject *args)
    {
      ::java::util::Iterator result((jobject) NULL);

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.iterator());
        return ::java::util::t_Iterator::wrap_Object(result, self->parameters[0]);
      }

      return callSuper(PY_TYPE(ArrayDeque), (PyObject *) self, "iterator", args, 2);
    }

    static PyObject *t_ArrayDeque_offer(t_ArrayDeque *self, PyObject *arg)
    {
      ::java::lang::Object a0((jobject) NULL);
      jboolean result;

      if (!parseArg(arg, "O", self->parameters[0], &a0))
      {
        OBJ_CALL(result = self->object.offer(a0));
        Py_RETURN_BOOL(result);
      }

      PyErr_SetArgsError((PyObject *) self, "offer", arg);
      return NULL;
    }

    static PyObject *t_ArrayDeque_offerFirst(t_ArrayDeque *self, PyObject *arg)
    {
      ::java::lang::Object a0((jobject) NULL);
      jboolean result;

      if (!parseArg(arg, "O", self->parameters[0], &a0))
      {
        OBJ_CALL(result = self->object.offerFirst(a0));
        Py_RETURN_BOOL(result);
      }

      PyErr_SetArgsError((PyObject *) self, "offerFirst", arg);
      return NULL;
    }

    static PyObject *t_ArrayDeque_offerLast(t_ArrayDeque *self, PyObject *arg)
    {
      ::java::lang::Object a0((jobject) NULL);
      jboolean result;

      if (!parseArg(arg, "O", self->parameters[0], &a0))
      {
        OBJ_CALL(result = self->object.offerLast(a0));
        Py_RETURN_BOOL(result);
      }

      PyErr_SetArgsError((PyObject *) self, "offerLast", arg);
      return NULL;
    }

    static PyObject *t_ArrayDeque_peek(t_ArrayDeque *self)
    {
      ::java::lang::Object result((jobject) NULL);
      OBJ_CALL(result = self->object.peek());
      return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::java::lang::t_Object::wrap_Object(result);
    }

    static PyObject *t_ArrayDeque_peekFirst(t_ArrayDeque *self)
    {
      ::java::lang::Object result((jobject) NULL);
      OBJ_CALL(result = self->object.peekFirst());
      return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::java::lang::t_Object::wrap_Object(result);
    }

    static PyObject *t_ArrayDeque_peekLast(t_ArrayDeque *self)
    {
      ::java::lang::Object result((jobject) NULL);
      OBJ_CALL(result = self->object.peekLast());
      return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::java::lang::t_Object::wrap_Object(result);
    }

    static PyObject *t_ArrayDeque_poll(t_ArrayDeque *self)
    {
      ::java::lang::Object result((jobject) NULL);
      OBJ_CALL(result = self->object.poll());
      return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::java::lang::t_Object::wrap_Object(result);
    }

    static PyObject *t_ArrayDeque_pollFirst(t_ArrayDeque *self)
    {
      ::java::lang::Object result((jobject) NULL);
      OBJ_CALL(result = self->object.pollFirst());
      return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::java::lang::t_Object::wrap_Object(result);
    }

    static PyObject *t_ArrayDeque_pollLast(t_ArrayDeque *self)
    {
      ::java::lang::Object result((jobject) NULL);
      OBJ_CALL(result = self->object.pollLast());
      return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::java::lang::t_Object::wrap_Object(result);
    }

    static PyObject *t_ArrayDeque_pop(t_ArrayDeque *self)
    {
      ::java::lang::Object result((jobject) NULL);
      OBJ_CALL(result = self->object.pop());
      return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::java::lang::t_Object::wrap_Object(result);
    }

    static PyObject *t_ArrayDeque_push(t_ArrayDeque *self, PyObject *arg)
    {
      ::java::lang::Object a0((jobject) NULL);

      if (!parseArg(arg, "O", self->parameters[0], &a0))
      {
        OBJ_CALL(self->object.push(a0));
        Py_RETURN_NONE;
      }

      PyErr_SetArgsError((PyObject *) self, "push", arg);
      return NULL;
    }

    static PyObject *t_ArrayDeque_remove(t_ArrayDeque *self, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 0:
        {
          ::java::lang::Object result((jobject) NULL);
          OBJ_CALL(result = self->object.remove());
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::java::lang::t_Object::wrap_Object(result);
        }
        break;
       case 1:
        {
          ::java::lang::Object a0((jobject) NULL);
          jboolean result;

          if (!parseArgs(args, "o", &a0))
          {
            OBJ_CALL(result = self->object.remove(a0));
            Py_RETURN_BOOL(result);
          }
        }
      }

      return callSuper(PY_TYPE(ArrayDeque), (PyObject *) self, "remove", args, 2);
    }

    static PyObject *t_ArrayDeque_removeAll(t_ArrayDeque *self, PyObject *args)
    {
      ::java::util::Collection a0((jobject) NULL);
      PyTypeObject **p0;
      jboolean result;

      if (!parseArgs(args, "K", ::java::util::Collection::initializeClass, &a0, &p0, ::java::util::t_Collection::parameters_))
      {
        OBJ_CALL(result = self->object.removeAll(a0));
        Py_RETURN_BOOL(result);
      }

      return callSuper(PY_TYPE(ArrayDeque), (PyObject *) self, "removeAll", args, 2);
    }

    static PyObject *t_ArrayDeque_removeFirst(t_ArrayDeque *self)
    {
      ::java::lang::Object result((jobject) NULL);
      OBJ_CALL(result = self->object.removeFirst());
      return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::java::lang::t_Object::wrap_Object(result);
    }

    static PyObject *t_ArrayDeque_removeFirstOccurrence(t_ArrayDeque *self, PyObject *arg)
    {
      ::java::lang::Object a0((jobject) NULL);
      jboolean result;

      if (!parseArg(arg, "o", &a0))
      {
        OBJ_CALL(result = self->object.removeFirstOccurrence(a0));
        Py_RETURN_BOOL(result);
      }

      PyErr_SetArgsError((PyObject *) self, "removeFirstOccurrence", arg);
      return NULL;
    }

    static PyObject *t_ArrayDeque_removeLast(t_ArrayDeque *self)
    {
      ::java::lang::Object result((jobject) NULL);
      OBJ_CALL(result = self->object.removeLast());
      return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::java::lang::t_Object::wrap_Object(result);
    }

    static PyObject *t_ArrayDeque_removeLastOccurrence(t_ArrayDeque *self, PyObject *arg)
    {
      ::java::lang::Object a0((jobject) NULL);
      jboolean result;

      if (!parseArg(arg, "o", &a0))
      {
        OBJ_CALL(result = self->object.removeLastOccurrence(a0));
        Py_RETURN_BOOL(result);
      }

      PyErr_SetArgsError((PyObject *) self, "removeLastOccurrence", arg);
      return NULL;
    }

    static PyObject *t_ArrayDeque_retainAll(t_ArrayDeque *self, PyObject *args)
    {
      ::java::util::Collection a0((jobject) NULL);
      PyTypeObject **p0;
      jboolean result;

      if (!parseArgs(args, "K", ::java::util::Collection::initializeClass, &a0, &p0, ::java::util::t_Collection::parameters_))
      {
        OBJ_CALL(result = self->object.retainAll(a0));
        Py_RETURN_BOOL(result);
      }

      return callSuper(PY_TYPE(ArrayDeque), (PyObject *) self, "retainAll", args, 2);
    }

    static PyObject *t_ArrayDeque_size(t_ArrayDeque *self, PyObject *args)
    {
      jint result;

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.size());
        return PyLong_FromLong((long) result);
      }

      return callSuper(PY_TYPE(ArrayDeque), (PyObject *) self, "size", args, 2);
    }

    static PyObject *t_ArrayDeque_spliterator(t_ArrayDeque *self, PyObject *args)
    {
      ::java::util::Spliterator result((jobject) NULL);

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.spliterator());
        return ::java::util::t_Spliterator::wrap_Object(result, self->parameters[0]);
      }

      return callSuper(PY_TYPE(ArrayDeque), (PyObject *) self, "spliterator", args, 2);
    }

    static PyObject *t_ArrayDeque_toArray(t_ArrayDeque *self, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 0:
        {
          JArray< ::java::lang::Object > result((jobject) NULL);
          OBJ_CALL(result = self->object.toArray());
          return JArray<jobject>(result.this$).wrap(::java::lang::t_Object::wrap_jobject);
        }
        break;
       case 1:
        {
          JArray< ::java::lang::Object > a0((jobject) NULL);
          JArray< ::java::lang::Object > result((jobject) NULL);

          if (!parseArgs(args, "[o", &a0))
          {
            OBJ_CALL(result = self->object.toArray(a0));
            return JArray<jobject>(result.this$).wrap(::java::lang::t_Object::wrap_jobject);
          }
        }
      }

      return callSuper(PY_TYPE(ArrayDeque), (PyObject *) self, "toArray", args, 2);
    }
    static PyObject *t_ArrayDeque_get__parameters_(t_ArrayDeque *self, void *data)
    {
      return typeParameters(self->parameters, sizeof(self->parameters));
    }

    static PyObject *t_ArrayDeque_get__empty(t_ArrayDeque *self, void *data)
    {
      jboolean value;
      OBJ_CALL(value = self->object.isEmpty());
      Py_RETURN_BOOL(value);
    }

    static PyObject *t_ArrayDeque_get__first(t_ArrayDeque *self, void *data)
    {
      ::java::lang::Object value((jobject) NULL);
      OBJ_CALL(value = self->object.getFirst());
      return ::java::lang::t_Object::wrap_Object(value);
    }

    static PyObject *t_ArrayDeque_get__last(t_ArrayDeque *self, void *data)
    {
      ::java::lang::Object value((jobject) NULL);
      OBJ_CALL(value = self->object.getLast());
      return ::java::lang::t_Object::wrap_Object(value);
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/utils/lexical/ParseToken$EnumListConsumer.h"
#include "java/util/List.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace utils {
          namespace lexical {

            ::java::lang::Class *ParseToken$EnumListConsumer::class$ = NULL;
            jmethodID *ParseToken$EnumListConsumer::mids$ = NULL;
            bool ParseToken$EnumListConsumer::live$ = false;

            jclass ParseToken$EnumListConsumer::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/utils/lexical/ParseToken$EnumListConsumer");

                mids$ = new jmethodID[max_mid];
                mids$[mid_accept_0e7c3032c7c93ed3] = env->getMethodID(cls, "accept", "(Ljava/util/List;)V");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            void ParseToken$EnumListConsumer::accept(const ::java::util::List & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_accept_0e7c3032c7c93ed3], a0.this$);
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
          namespace lexical {
            static PyObject *t_ParseToken$EnumListConsumer_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_ParseToken$EnumListConsumer_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_ParseToken$EnumListConsumer_of_(t_ParseToken$EnumListConsumer *self, PyObject *args);
            static PyObject *t_ParseToken$EnumListConsumer_accept(t_ParseToken$EnumListConsumer *self, PyObject *arg);
            static PyObject *t_ParseToken$EnumListConsumer_get__parameters_(t_ParseToken$EnumListConsumer *self, void *data);
            static PyGetSetDef t_ParseToken$EnumListConsumer__fields_[] = {
              DECLARE_GET_FIELD(t_ParseToken$EnumListConsumer, parameters_),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_ParseToken$EnumListConsumer__methods_[] = {
              DECLARE_METHOD(t_ParseToken$EnumListConsumer, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_ParseToken$EnumListConsumer, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_ParseToken$EnumListConsumer, of_, METH_VARARGS),
              DECLARE_METHOD(t_ParseToken$EnumListConsumer, accept, METH_O),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(ParseToken$EnumListConsumer)[] = {
              { Py_tp_methods, t_ParseToken$EnumListConsumer__methods_ },
              { Py_tp_init, (void *) abstract_init },
              { Py_tp_getset, t_ParseToken$EnumListConsumer__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(ParseToken$EnumListConsumer)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(ParseToken$EnumListConsumer, t_ParseToken$EnumListConsumer, ParseToken$EnumListConsumer);
            PyObject *t_ParseToken$EnumListConsumer::wrap_Object(const ParseToken$EnumListConsumer& object, PyTypeObject *p0)
            {
              PyObject *obj = t_ParseToken$EnumListConsumer::wrap_Object(object);
              if (obj != NULL && obj != Py_None)
              {
                t_ParseToken$EnumListConsumer *self = (t_ParseToken$EnumListConsumer *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            PyObject *t_ParseToken$EnumListConsumer::wrap_jobject(const jobject& object, PyTypeObject *p0)
            {
              PyObject *obj = t_ParseToken$EnumListConsumer::wrap_jobject(object);
              if (obj != NULL && obj != Py_None)
              {
                t_ParseToken$EnumListConsumer *self = (t_ParseToken$EnumListConsumer *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            void t_ParseToken$EnumListConsumer::install(PyObject *module)
            {
              installType(&PY_TYPE(ParseToken$EnumListConsumer), &PY_TYPE_DEF(ParseToken$EnumListConsumer), module, "ParseToken$EnumListConsumer", 0);
            }

            void t_ParseToken$EnumListConsumer::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(ParseToken$EnumListConsumer), "class_", make_descriptor(ParseToken$EnumListConsumer::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ParseToken$EnumListConsumer), "wrapfn_", make_descriptor(t_ParseToken$EnumListConsumer::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ParseToken$EnumListConsumer), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_ParseToken$EnumListConsumer_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, ParseToken$EnumListConsumer::initializeClass, 1)))
                return NULL;
              return t_ParseToken$EnumListConsumer::wrap_Object(ParseToken$EnumListConsumer(((t_ParseToken$EnumListConsumer *) arg)->object.this$));
            }
            static PyObject *t_ParseToken$EnumListConsumer_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, ParseToken$EnumListConsumer::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_ParseToken$EnumListConsumer_of_(t_ParseToken$EnumListConsumer *self, PyObject *args)
            {
              if (!parseArg(args, "T", 1, &(self->parameters)))
                Py_RETURN_SELF;
              return PyErr_SetArgsError((PyObject *) self, "of_", args);
            }

            static PyObject *t_ParseToken$EnumListConsumer_accept(t_ParseToken$EnumListConsumer *self, PyObject *arg)
            {
              ::java::util::List a0((jobject) NULL);
              PyTypeObject **p0;

              if (!parseArg(arg, "K", ::java::util::List::initializeClass, &a0, &p0, ::java::util::t_List::parameters_))
              {
                OBJ_CALL(self->object.accept(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "accept", arg);
              return NULL;
            }
            static PyObject *t_ParseToken$EnumListConsumer_get__parameters_(t_ParseToken$EnumListConsumer *self, void *data)
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
#include "org/orekit/files/ccsds/ndm/odm/OdmCommonMetadata.h"
#include "org/orekit/files/ccsds/definitions/FrameFacade.h"
#include "org/orekit/files/ccsds/definitions/BodyFacade.h"
#include "org/orekit/frames/Frame.h"
#include "java/lang/Class.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/files/ccsds/utils/ContextBinding.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace odm {

            ::java::lang::Class *OdmCommonMetadata::class$ = NULL;
            jmethodID *OdmCommonMetadata::mids$ = NULL;
            bool OdmCommonMetadata::live$ = false;

            jclass OdmCommonMetadata::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/odm/OdmCommonMetadata");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_a1fa5dae97ea5ed2] = env->getMethodID(cls, "<init>", "()V");
                mids$[mid_finalizeMetadata_db5d6d07a090d1f4] = env->getMethodID(cls, "finalizeMetadata", "(Lorg/orekit/files/ccsds/utils/ContextBinding;)V");
                mids$[mid_getCenter_52253a5b5c02abfe] = env->getMethodID(cls, "getCenter", "()Lorg/orekit/files/ccsds/definitions/BodyFacade;");
                mids$[mid_getFrame_2c51111cc6894ba1] = env->getMethodID(cls, "getFrame", "()Lorg/orekit/frames/Frame;");
                mids$[mid_getFrameEpoch_c325492395d89b24] = env->getMethodID(cls, "getFrameEpoch", "()Lorg/orekit/time/AbsoluteDate;");
                mids$[mid_getLaunchNumber_55546ef6a647f39b] = env->getMethodID(cls, "getLaunchNumber", "()I");
                mids$[mid_getLaunchPiece_1c1fa1e935d6cdcf] = env->getMethodID(cls, "getLaunchPiece", "()Ljava/lang/String;");
                mids$[mid_getLaunchYear_55546ef6a647f39b] = env->getMethodID(cls, "getLaunchYear", "()I");
                mids$[mid_getObjectID_1c1fa1e935d6cdcf] = env->getMethodID(cls, "getObjectID", "()Ljava/lang/String;");
                mids$[mid_getReferenceFrame_69d8be1b6b0a1a94] = env->getMethodID(cls, "getReferenceFrame", "()Lorg/orekit/files/ccsds/definitions/FrameFacade;");
                mids$[mid_setCenter_564458ee450fa323] = env->getMethodID(cls, "setCenter", "(Lorg/orekit/files/ccsds/definitions/BodyFacade;)V");
                mids$[mid_setFrameEpoch_02135a6ef25adb4b] = env->getMethodID(cls, "setFrameEpoch", "(Lorg/orekit/time/AbsoluteDate;)V");
                mids$[mid_setFrameEpochString_734b91ac30d5f9b4] = env->getMethodID(cls, "setFrameEpochString", "(Ljava/lang/String;)V");
                mids$[mid_setObjectID_734b91ac30d5f9b4] = env->getMethodID(cls, "setObjectID", "(Ljava/lang/String;)V");
                mids$[mid_setReferenceFrame_4755133c5c4c59be] = env->getMethodID(cls, "setReferenceFrame", "(Lorg/orekit/files/ccsds/definitions/FrameFacade;)V");
                mids$[mid_validate_8ba9fe7a847cecad] = env->getMethodID(cls, "validate", "(D)V");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            OdmCommonMetadata::OdmCommonMetadata() : ::org::orekit::files::ccsds::ndm::odm::OdmMetadata(env->newObject(initializeClass, &mids$, mid_init$_a1fa5dae97ea5ed2)) {}

            void OdmCommonMetadata::finalizeMetadata(const ::org::orekit::files::ccsds::utils::ContextBinding & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_finalizeMetadata_db5d6d07a090d1f4], a0.this$);
            }

            ::org::orekit::files::ccsds::definitions::BodyFacade OdmCommonMetadata::getCenter() const
            {
              return ::org::orekit::files::ccsds::definitions::BodyFacade(env->callObjectMethod(this$, mids$[mid_getCenter_52253a5b5c02abfe]));
            }

            ::org::orekit::frames::Frame OdmCommonMetadata::getFrame() const
            {
              return ::org::orekit::frames::Frame(env->callObjectMethod(this$, mids$[mid_getFrame_2c51111cc6894ba1]));
            }

            ::org::orekit::time::AbsoluteDate OdmCommonMetadata::getFrameEpoch() const
            {
              return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getFrameEpoch_c325492395d89b24]));
            }

            jint OdmCommonMetadata::getLaunchNumber() const
            {
              return env->callIntMethod(this$, mids$[mid_getLaunchNumber_55546ef6a647f39b]);
            }

            ::java::lang::String OdmCommonMetadata::getLaunchPiece() const
            {
              return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getLaunchPiece_1c1fa1e935d6cdcf]));
            }

            jint OdmCommonMetadata::getLaunchYear() const
            {
              return env->callIntMethod(this$, mids$[mid_getLaunchYear_55546ef6a647f39b]);
            }

            ::java::lang::String OdmCommonMetadata::getObjectID() const
            {
              return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getObjectID_1c1fa1e935d6cdcf]));
            }

            ::org::orekit::files::ccsds::definitions::FrameFacade OdmCommonMetadata::getReferenceFrame() const
            {
              return ::org::orekit::files::ccsds::definitions::FrameFacade(env->callObjectMethod(this$, mids$[mid_getReferenceFrame_69d8be1b6b0a1a94]));
            }

            void OdmCommonMetadata::setCenter(const ::org::orekit::files::ccsds::definitions::BodyFacade & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setCenter_564458ee450fa323], a0.this$);
            }

            void OdmCommonMetadata::setFrameEpoch(const ::org::orekit::time::AbsoluteDate & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setFrameEpoch_02135a6ef25adb4b], a0.this$);
            }

            void OdmCommonMetadata::setFrameEpochString(const ::java::lang::String & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setFrameEpochString_734b91ac30d5f9b4], a0.this$);
            }

            void OdmCommonMetadata::setObjectID(const ::java::lang::String & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setObjectID_734b91ac30d5f9b4], a0.this$);
            }

            void OdmCommonMetadata::setReferenceFrame(const ::org::orekit::files::ccsds::definitions::FrameFacade & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setReferenceFrame_4755133c5c4c59be], a0.this$);
            }

            void OdmCommonMetadata::validate(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_validate_8ba9fe7a847cecad], a0);
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
            static PyObject *t_OdmCommonMetadata_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_OdmCommonMetadata_instance_(PyTypeObject *type, PyObject *arg);
            static int t_OdmCommonMetadata_init_(t_OdmCommonMetadata *self, PyObject *args, PyObject *kwds);
            static PyObject *t_OdmCommonMetadata_finalizeMetadata(t_OdmCommonMetadata *self, PyObject *arg);
            static PyObject *t_OdmCommonMetadata_getCenter(t_OdmCommonMetadata *self);
            static PyObject *t_OdmCommonMetadata_getFrame(t_OdmCommonMetadata *self);
            static PyObject *t_OdmCommonMetadata_getFrameEpoch(t_OdmCommonMetadata *self);
            static PyObject *t_OdmCommonMetadata_getLaunchNumber(t_OdmCommonMetadata *self);
            static PyObject *t_OdmCommonMetadata_getLaunchPiece(t_OdmCommonMetadata *self);
            static PyObject *t_OdmCommonMetadata_getLaunchYear(t_OdmCommonMetadata *self);
            static PyObject *t_OdmCommonMetadata_getObjectID(t_OdmCommonMetadata *self);
            static PyObject *t_OdmCommonMetadata_getReferenceFrame(t_OdmCommonMetadata *self);
            static PyObject *t_OdmCommonMetadata_setCenter(t_OdmCommonMetadata *self, PyObject *arg);
            static PyObject *t_OdmCommonMetadata_setFrameEpoch(t_OdmCommonMetadata *self, PyObject *arg);
            static PyObject *t_OdmCommonMetadata_setFrameEpochString(t_OdmCommonMetadata *self, PyObject *arg);
            static PyObject *t_OdmCommonMetadata_setObjectID(t_OdmCommonMetadata *self, PyObject *arg);
            static PyObject *t_OdmCommonMetadata_setReferenceFrame(t_OdmCommonMetadata *self, PyObject *arg);
            static PyObject *t_OdmCommonMetadata_validate(t_OdmCommonMetadata *self, PyObject *args);
            static PyObject *t_OdmCommonMetadata_get__center(t_OdmCommonMetadata *self, void *data);
            static int t_OdmCommonMetadata_set__center(t_OdmCommonMetadata *self, PyObject *arg, void *data);
            static PyObject *t_OdmCommonMetadata_get__frame(t_OdmCommonMetadata *self, void *data);
            static PyObject *t_OdmCommonMetadata_get__frameEpoch(t_OdmCommonMetadata *self, void *data);
            static int t_OdmCommonMetadata_set__frameEpoch(t_OdmCommonMetadata *self, PyObject *arg, void *data);
            static int t_OdmCommonMetadata_set__frameEpochString(t_OdmCommonMetadata *self, PyObject *arg, void *data);
            static PyObject *t_OdmCommonMetadata_get__launchNumber(t_OdmCommonMetadata *self, void *data);
            static PyObject *t_OdmCommonMetadata_get__launchPiece(t_OdmCommonMetadata *self, void *data);
            static PyObject *t_OdmCommonMetadata_get__launchYear(t_OdmCommonMetadata *self, void *data);
            static PyObject *t_OdmCommonMetadata_get__objectID(t_OdmCommonMetadata *self, void *data);
            static int t_OdmCommonMetadata_set__objectID(t_OdmCommonMetadata *self, PyObject *arg, void *data);
            static PyObject *t_OdmCommonMetadata_get__referenceFrame(t_OdmCommonMetadata *self, void *data);
            static int t_OdmCommonMetadata_set__referenceFrame(t_OdmCommonMetadata *self, PyObject *arg, void *data);
            static PyGetSetDef t_OdmCommonMetadata__fields_[] = {
              DECLARE_GETSET_FIELD(t_OdmCommonMetadata, center),
              DECLARE_GET_FIELD(t_OdmCommonMetadata, frame),
              DECLARE_GETSET_FIELD(t_OdmCommonMetadata, frameEpoch),
              DECLARE_SET_FIELD(t_OdmCommonMetadata, frameEpochString),
              DECLARE_GET_FIELD(t_OdmCommonMetadata, launchNumber),
              DECLARE_GET_FIELD(t_OdmCommonMetadata, launchPiece),
              DECLARE_GET_FIELD(t_OdmCommonMetadata, launchYear),
              DECLARE_GETSET_FIELD(t_OdmCommonMetadata, objectID),
              DECLARE_GETSET_FIELD(t_OdmCommonMetadata, referenceFrame),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_OdmCommonMetadata__methods_[] = {
              DECLARE_METHOD(t_OdmCommonMetadata, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_OdmCommonMetadata, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_OdmCommonMetadata, finalizeMetadata, METH_O),
              DECLARE_METHOD(t_OdmCommonMetadata, getCenter, METH_NOARGS),
              DECLARE_METHOD(t_OdmCommonMetadata, getFrame, METH_NOARGS),
              DECLARE_METHOD(t_OdmCommonMetadata, getFrameEpoch, METH_NOARGS),
              DECLARE_METHOD(t_OdmCommonMetadata, getLaunchNumber, METH_NOARGS),
              DECLARE_METHOD(t_OdmCommonMetadata, getLaunchPiece, METH_NOARGS),
              DECLARE_METHOD(t_OdmCommonMetadata, getLaunchYear, METH_NOARGS),
              DECLARE_METHOD(t_OdmCommonMetadata, getObjectID, METH_NOARGS),
              DECLARE_METHOD(t_OdmCommonMetadata, getReferenceFrame, METH_NOARGS),
              DECLARE_METHOD(t_OdmCommonMetadata, setCenter, METH_O),
              DECLARE_METHOD(t_OdmCommonMetadata, setFrameEpoch, METH_O),
              DECLARE_METHOD(t_OdmCommonMetadata, setFrameEpochString, METH_O),
              DECLARE_METHOD(t_OdmCommonMetadata, setObjectID, METH_O),
              DECLARE_METHOD(t_OdmCommonMetadata, setReferenceFrame, METH_O),
              DECLARE_METHOD(t_OdmCommonMetadata, validate, METH_VARARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(OdmCommonMetadata)[] = {
              { Py_tp_methods, t_OdmCommonMetadata__methods_ },
              { Py_tp_init, (void *) t_OdmCommonMetadata_init_ },
              { Py_tp_getset, t_OdmCommonMetadata__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(OdmCommonMetadata)[] = {
              &PY_TYPE_DEF(::org::orekit::files::ccsds::ndm::odm::OdmMetadata),
              NULL
            };

            DEFINE_TYPE(OdmCommonMetadata, t_OdmCommonMetadata, OdmCommonMetadata);

            void t_OdmCommonMetadata::install(PyObject *module)
            {
              installType(&PY_TYPE(OdmCommonMetadata), &PY_TYPE_DEF(OdmCommonMetadata), module, "OdmCommonMetadata", 0);
            }

            void t_OdmCommonMetadata::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(OdmCommonMetadata), "class_", make_descriptor(OdmCommonMetadata::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(OdmCommonMetadata), "wrapfn_", make_descriptor(t_OdmCommonMetadata::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(OdmCommonMetadata), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_OdmCommonMetadata_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, OdmCommonMetadata::initializeClass, 1)))
                return NULL;
              return t_OdmCommonMetadata::wrap_Object(OdmCommonMetadata(((t_OdmCommonMetadata *) arg)->object.this$));
            }
            static PyObject *t_OdmCommonMetadata_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, OdmCommonMetadata::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static int t_OdmCommonMetadata_init_(t_OdmCommonMetadata *self, PyObject *args, PyObject *kwds)
            {
              OdmCommonMetadata object((jobject) NULL);

              INT_CALL(object = OdmCommonMetadata());
              self->object = object;

              return 0;
            }

            static PyObject *t_OdmCommonMetadata_finalizeMetadata(t_OdmCommonMetadata *self, PyObject *arg)
            {
              ::org::orekit::files::ccsds::utils::ContextBinding a0((jobject) NULL);

              if (!parseArg(arg, "k", ::org::orekit::files::ccsds::utils::ContextBinding::initializeClass, &a0))
              {
                OBJ_CALL(self->object.finalizeMetadata(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "finalizeMetadata", arg);
              return NULL;
            }

            static PyObject *t_OdmCommonMetadata_getCenter(t_OdmCommonMetadata *self)
            {
              ::org::orekit::files::ccsds::definitions::BodyFacade result((jobject) NULL);
              OBJ_CALL(result = self->object.getCenter());
              return ::org::orekit::files::ccsds::definitions::t_BodyFacade::wrap_Object(result);
            }

            static PyObject *t_OdmCommonMetadata_getFrame(t_OdmCommonMetadata *self)
            {
              ::org::orekit::frames::Frame result((jobject) NULL);
              OBJ_CALL(result = self->object.getFrame());
              return ::org::orekit::frames::t_Frame::wrap_Object(result);
            }

            static PyObject *t_OdmCommonMetadata_getFrameEpoch(t_OdmCommonMetadata *self)
            {
              ::org::orekit::time::AbsoluteDate result((jobject) NULL);
              OBJ_CALL(result = self->object.getFrameEpoch());
              return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
            }

            static PyObject *t_OdmCommonMetadata_getLaunchNumber(t_OdmCommonMetadata *self)
            {
              jint result;
              OBJ_CALL(result = self->object.getLaunchNumber());
              return PyLong_FromLong((long) result);
            }

            static PyObject *t_OdmCommonMetadata_getLaunchPiece(t_OdmCommonMetadata *self)
            {
              ::java::lang::String result((jobject) NULL);
              OBJ_CALL(result = self->object.getLaunchPiece());
              return j2p(result);
            }

            static PyObject *t_OdmCommonMetadata_getLaunchYear(t_OdmCommonMetadata *self)
            {
              jint result;
              OBJ_CALL(result = self->object.getLaunchYear());
              return PyLong_FromLong((long) result);
            }

            static PyObject *t_OdmCommonMetadata_getObjectID(t_OdmCommonMetadata *self)
            {
              ::java::lang::String result((jobject) NULL);
              OBJ_CALL(result = self->object.getObjectID());
              return j2p(result);
            }

            static PyObject *t_OdmCommonMetadata_getReferenceFrame(t_OdmCommonMetadata *self)
            {
              ::org::orekit::files::ccsds::definitions::FrameFacade result((jobject) NULL);
              OBJ_CALL(result = self->object.getReferenceFrame());
              return ::org::orekit::files::ccsds::definitions::t_FrameFacade::wrap_Object(result);
            }

            static PyObject *t_OdmCommonMetadata_setCenter(t_OdmCommonMetadata *self, PyObject *arg)
            {
              ::org::orekit::files::ccsds::definitions::BodyFacade a0((jobject) NULL);

              if (!parseArg(arg, "k", ::org::orekit::files::ccsds::definitions::BodyFacade::initializeClass, &a0))
              {
                OBJ_CALL(self->object.setCenter(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setCenter", arg);
              return NULL;
            }

            static PyObject *t_OdmCommonMetadata_setFrameEpoch(t_OdmCommonMetadata *self, PyObject *arg)
            {
              ::org::orekit::time::AbsoluteDate a0((jobject) NULL);

              if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
              {
                OBJ_CALL(self->object.setFrameEpoch(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setFrameEpoch", arg);
              return NULL;
            }

            static PyObject *t_OdmCommonMetadata_setFrameEpochString(t_OdmCommonMetadata *self, PyObject *arg)
            {
              ::java::lang::String a0((jobject) NULL);

              if (!parseArg(arg, "s", &a0))
              {
                OBJ_CALL(self->object.setFrameEpochString(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setFrameEpochString", arg);
              return NULL;
            }

            static PyObject *t_OdmCommonMetadata_setObjectID(t_OdmCommonMetadata *self, PyObject *arg)
            {
              ::java::lang::String a0((jobject) NULL);

              if (!parseArg(arg, "s", &a0))
              {
                OBJ_CALL(self->object.setObjectID(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setObjectID", arg);
              return NULL;
            }

            static PyObject *t_OdmCommonMetadata_setReferenceFrame(t_OdmCommonMetadata *self, PyObject *arg)
            {
              ::org::orekit::files::ccsds::definitions::FrameFacade a0((jobject) NULL);

              if (!parseArg(arg, "k", ::org::orekit::files::ccsds::definitions::FrameFacade::initializeClass, &a0))
              {
                OBJ_CALL(self->object.setReferenceFrame(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setReferenceFrame", arg);
              return NULL;
            }

            static PyObject *t_OdmCommonMetadata_validate(t_OdmCommonMetadata *self, PyObject *args)
            {
              jdouble a0;

              if (!parseArgs(args, "D", &a0))
              {
                OBJ_CALL(self->object.validate(a0));
                Py_RETURN_NONE;
              }

              return callSuper(PY_TYPE(OdmCommonMetadata), (PyObject *) self, "validate", args, 2);
            }

            static PyObject *t_OdmCommonMetadata_get__center(t_OdmCommonMetadata *self, void *data)
            {
              ::org::orekit::files::ccsds::definitions::BodyFacade value((jobject) NULL);
              OBJ_CALL(value = self->object.getCenter());
              return ::org::orekit::files::ccsds::definitions::t_BodyFacade::wrap_Object(value);
            }
            static int t_OdmCommonMetadata_set__center(t_OdmCommonMetadata *self, PyObject *arg, void *data)
            {
              {
                ::org::orekit::files::ccsds::definitions::BodyFacade value((jobject) NULL);
                if (!parseArg(arg, "k", ::org::orekit::files::ccsds::definitions::BodyFacade::initializeClass, &value))
                {
                  INT_CALL(self->object.setCenter(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "center", arg);
              return -1;
            }

            static PyObject *t_OdmCommonMetadata_get__frame(t_OdmCommonMetadata *self, void *data)
            {
              ::org::orekit::frames::Frame value((jobject) NULL);
              OBJ_CALL(value = self->object.getFrame());
              return ::org::orekit::frames::t_Frame::wrap_Object(value);
            }

            static PyObject *t_OdmCommonMetadata_get__frameEpoch(t_OdmCommonMetadata *self, void *data)
            {
              ::org::orekit::time::AbsoluteDate value((jobject) NULL);
              OBJ_CALL(value = self->object.getFrameEpoch());
              return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
            }
            static int t_OdmCommonMetadata_set__frameEpoch(t_OdmCommonMetadata *self, PyObject *arg, void *data)
            {
              {
                ::org::orekit::time::AbsoluteDate value((jobject) NULL);
                if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &value))
                {
                  INT_CALL(self->object.setFrameEpoch(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "frameEpoch", arg);
              return -1;
            }

            static int t_OdmCommonMetadata_set__frameEpochString(t_OdmCommonMetadata *self, PyObject *arg, void *data)
            {
              {
                ::java::lang::String value((jobject) NULL);
                if (!parseArg(arg, "s", &value))
                {
                  INT_CALL(self->object.setFrameEpochString(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "frameEpochString", arg);
              return -1;
            }

            static PyObject *t_OdmCommonMetadata_get__launchNumber(t_OdmCommonMetadata *self, void *data)
            {
              jint value;
              OBJ_CALL(value = self->object.getLaunchNumber());
              return PyLong_FromLong((long) value);
            }

            static PyObject *t_OdmCommonMetadata_get__launchPiece(t_OdmCommonMetadata *self, void *data)
            {
              ::java::lang::String value((jobject) NULL);
              OBJ_CALL(value = self->object.getLaunchPiece());
              return j2p(value);
            }

            static PyObject *t_OdmCommonMetadata_get__launchYear(t_OdmCommonMetadata *self, void *data)
            {
              jint value;
              OBJ_CALL(value = self->object.getLaunchYear());
              return PyLong_FromLong((long) value);
            }

            static PyObject *t_OdmCommonMetadata_get__objectID(t_OdmCommonMetadata *self, void *data)
            {
              ::java::lang::String value((jobject) NULL);
              OBJ_CALL(value = self->object.getObjectID());
              return j2p(value);
            }
            static int t_OdmCommonMetadata_set__objectID(t_OdmCommonMetadata *self, PyObject *arg, void *data)
            {
              {
                ::java::lang::String value((jobject) NULL);
                if (!parseArg(arg, "s", &value))
                {
                  INT_CALL(self->object.setObjectID(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "objectID", arg);
              return -1;
            }

            static PyObject *t_OdmCommonMetadata_get__referenceFrame(t_OdmCommonMetadata *self, void *data)
            {
              ::org::orekit::files::ccsds::definitions::FrameFacade value((jobject) NULL);
              OBJ_CALL(value = self->object.getReferenceFrame());
              return ::org::orekit::files::ccsds::definitions::t_FrameFacade::wrap_Object(value);
            }
            static int t_OdmCommonMetadata_set__referenceFrame(t_OdmCommonMetadata *self, PyObject *arg, void *data)
            {
              {
                ::org::orekit::files::ccsds::definitions::FrameFacade value((jobject) NULL);
                if (!parseArg(arg, "k", ::org::orekit::files::ccsds::definitions::FrameFacade::initializeClass, &value))
                {
                  INT_CALL(self->object.setReferenceFrame(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "referenceFrame", arg);
              return -1;
            }
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/analysis/integration/gauss/FieldLaguerreRuleFactory.h"
#include "org/hipparchus/util/Pair.h"
#include "org/hipparchus/Field.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "java/lang/Class.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace integration {
        namespace gauss {

          ::java::lang::Class *FieldLaguerreRuleFactory::class$ = NULL;
          jmethodID *FieldLaguerreRuleFactory::mids$ = NULL;
          bool FieldLaguerreRuleFactory::live$ = false;

          jclass FieldLaguerreRuleFactory::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/hipparchus/analysis/integration/gauss/FieldLaguerreRuleFactory");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_02ab84aa7626616d] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/Field;)V");
              mids$[mid_computeRule_acde278e36767299] = env->getMethodID(cls, "computeRule", "(I)Lorg/hipparchus/util/Pair;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          FieldLaguerreRuleFactory::FieldLaguerreRuleFactory(const ::org::hipparchus::Field & a0) : ::org::hipparchus::analysis::integration::gauss::FieldAbstractRuleFactory(env->newObject(initializeClass, &mids$, mid_init$_02ab84aa7626616d, a0.this$)) {}

          ::org::hipparchus::util::Pair FieldLaguerreRuleFactory::computeRule(jint a0) const
          {
            return ::org::hipparchus::util::Pair(env->callObjectMethod(this$, mids$[mid_computeRule_acde278e36767299], a0));
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
    namespace analysis {
      namespace integration {
        namespace gauss {
          static PyObject *t_FieldLaguerreRuleFactory_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_FieldLaguerreRuleFactory_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_FieldLaguerreRuleFactory_of_(t_FieldLaguerreRuleFactory *self, PyObject *args);
          static int t_FieldLaguerreRuleFactory_init_(t_FieldLaguerreRuleFactory *self, PyObject *args, PyObject *kwds);
          static PyObject *t_FieldLaguerreRuleFactory_computeRule(t_FieldLaguerreRuleFactory *self, PyObject *arg);
          static PyObject *t_FieldLaguerreRuleFactory_get__parameters_(t_FieldLaguerreRuleFactory *self, void *data);
          static PyGetSetDef t_FieldLaguerreRuleFactory__fields_[] = {
            DECLARE_GET_FIELD(t_FieldLaguerreRuleFactory, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_FieldLaguerreRuleFactory__methods_[] = {
            DECLARE_METHOD(t_FieldLaguerreRuleFactory, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_FieldLaguerreRuleFactory, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_FieldLaguerreRuleFactory, of_, METH_VARARGS),
            DECLARE_METHOD(t_FieldLaguerreRuleFactory, computeRule, METH_O),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(FieldLaguerreRuleFactory)[] = {
            { Py_tp_methods, t_FieldLaguerreRuleFactory__methods_ },
            { Py_tp_init, (void *) t_FieldLaguerreRuleFactory_init_ },
            { Py_tp_getset, t_FieldLaguerreRuleFactory__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(FieldLaguerreRuleFactory)[] = {
            &PY_TYPE_DEF(::org::hipparchus::analysis::integration::gauss::FieldAbstractRuleFactory),
            NULL
          };

          DEFINE_TYPE(FieldLaguerreRuleFactory, t_FieldLaguerreRuleFactory, FieldLaguerreRuleFactory);
          PyObject *t_FieldLaguerreRuleFactory::wrap_Object(const FieldLaguerreRuleFactory& object, PyTypeObject *p0)
          {
            PyObject *obj = t_FieldLaguerreRuleFactory::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_FieldLaguerreRuleFactory *self = (t_FieldLaguerreRuleFactory *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          PyObject *t_FieldLaguerreRuleFactory::wrap_jobject(const jobject& object, PyTypeObject *p0)
          {
            PyObject *obj = t_FieldLaguerreRuleFactory::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_FieldLaguerreRuleFactory *self = (t_FieldLaguerreRuleFactory *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          void t_FieldLaguerreRuleFactory::install(PyObject *module)
          {
            installType(&PY_TYPE(FieldLaguerreRuleFactory), &PY_TYPE_DEF(FieldLaguerreRuleFactory), module, "FieldLaguerreRuleFactory", 0);
          }

          void t_FieldLaguerreRuleFactory::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(FieldLaguerreRuleFactory), "class_", make_descriptor(FieldLaguerreRuleFactory::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(FieldLaguerreRuleFactory), "wrapfn_", make_descriptor(t_FieldLaguerreRuleFactory::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(FieldLaguerreRuleFactory), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_FieldLaguerreRuleFactory_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, FieldLaguerreRuleFactory::initializeClass, 1)))
              return NULL;
            return t_FieldLaguerreRuleFactory::wrap_Object(FieldLaguerreRuleFactory(((t_FieldLaguerreRuleFactory *) arg)->object.this$));
          }
          static PyObject *t_FieldLaguerreRuleFactory_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, FieldLaguerreRuleFactory::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_FieldLaguerreRuleFactory_of_(t_FieldLaguerreRuleFactory *self, PyObject *args)
          {
            if (!parseArg(args, "T", 1, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static int t_FieldLaguerreRuleFactory_init_(t_FieldLaguerreRuleFactory *self, PyObject *args, PyObject *kwds)
          {
            ::org::hipparchus::Field a0((jobject) NULL);
            PyTypeObject **p0;
            FieldLaguerreRuleFactory object((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::Field::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_))
            {
              INT_CALL(object = FieldLaguerreRuleFactory(a0));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_FieldLaguerreRuleFactory_computeRule(t_FieldLaguerreRuleFactory *self, PyObject *arg)
          {
            jint a0;
            ::org::hipparchus::util::Pair result((jobject) NULL);

            if (!parseArg(arg, "I", &a0))
            {
              OBJ_CALL(result = self->object.computeRule(a0));
              return ::org::hipparchus::util::t_Pair::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "computeRule", arg);
            return NULL;
          }
          static PyObject *t_FieldLaguerreRuleFactory_get__parameters_(t_FieldLaguerreRuleFactory *self, void *data)
          {
            return typeParameters(self->parameters, sizeof(self->parameters));
          }
        }
      }
    }
  }
}
