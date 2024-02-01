#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/ndm/adm/AttitudeEndpoints.h"
#include "org/orekit/files/ccsds/definitions/FrameFacade.h"
#include "org/orekit/utils/FieldPVCoordinatesProvider.h"
#include "java/lang/Enum.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/files/ccsds/ndm/adm/AttitudeEndpoints.h"
#include "org/orekit/attitudes/FieldAttitude.h"
#include "java/lang/Class.h"
#include "org/orekit/attitudes/AttitudeBuilder.h"
#include "org/orekit/attitudes/Attitude.h"
#include "org/orekit/utils/TimeStampedAngularCoordinates.h"
#include "org/orekit/utils/TimeStampedFieldAngularCoordinates.h"
#include "java/lang/String.h"
#include "org/orekit/utils/PVCoordinatesProvider.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace adm {

            ::java::lang::Class *AttitudeEndpoints::class$ = NULL;
            jmethodID *AttitudeEndpoints::mids$ = NULL;
            bool AttitudeEndpoints::live$ = false;
            ::java::lang::String *AttitudeEndpoints::A2B = NULL;
            ::java::lang::String *AttitudeEndpoints::B2A = NULL;

            jclass AttitudeEndpoints::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/adm/AttitudeEndpoints");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_ff7cb6c242604316] = env->getMethodID(cls, "<init>", "()V");
                mids$[mid_build_16f6708eb1cda684] = env->getMethodID(cls, "build", "(Lorg/orekit/frames/Frame;Lorg/orekit/utils/FieldPVCoordinatesProvider;Lorg/orekit/utils/TimeStampedFieldAngularCoordinates;)Lorg/orekit/attitudes/FieldAttitude;");
                mids$[mid_build_11d80d4c91effa8b] = env->getMethodID(cls, "build", "(Lorg/orekit/frames/Frame;Lorg/orekit/utils/PVCoordinatesProvider;Lorg/orekit/utils/TimeStampedAngularCoordinates;)Lorg/orekit/attitudes/Attitude;");
                mids$[mid_checkExternalFrame_46ccf4dfaef9abfa] = env->getMethodID(cls, "checkExternalFrame", "(Ljava/lang/Enum;Ljava/lang/Enum;)V");
                mids$[mid_checkMandatoryEntriesExceptExternalFrame_4e5c1103238b9e37] = env->getMethodID(cls, "checkMandatoryEntriesExceptExternalFrame", "(DLjava/lang/Enum;Ljava/lang/Enum;Ljava/lang/Enum;)V");
                mids$[mid_getExternalFrame_0fc1562b68204151] = env->getMethodID(cls, "getExternalFrame", "()Lorg/orekit/files/ccsds/definitions/FrameFacade;");
                mids$[mid_getFrameA_0fc1562b68204151] = env->getMethodID(cls, "getFrameA", "()Lorg/orekit/files/ccsds/definitions/FrameFacade;");
                mids$[mid_getFrameB_0fc1562b68204151] = env->getMethodID(cls, "getFrameB", "()Lorg/orekit/files/ccsds/definitions/FrameFacade;");
                mids$[mid_getSpacecraftBodyFrame_0fc1562b68204151] = env->getMethodID(cls, "getSpacecraftBodyFrame", "()Lorg/orekit/files/ccsds/definitions/FrameFacade;");
                mids$[mid_isA2b_eee3de00fe971136] = env->getMethodID(cls, "isA2b", "()Z");
                mids$[mid_isCompatibleWith_1bd54c9a3aa91939] = env->getMethodID(cls, "isCompatibleWith", "(Lorg/orekit/files/ccsds/ndm/adm/AttitudeEndpoints;)Z");
                mids$[mid_isExternal2SpacecraftBody_eee3de00fe971136] = env->getMethodID(cls, "isExternal2SpacecraftBody", "()Z");
                mids$[mid_setA2b_b35db77cae58639e] = env->getMethodID(cls, "setA2b", "(Z)V");
                mids$[mid_setFrameA_2c8b859a72c0094e] = env->getMethodID(cls, "setFrameA", "(Lorg/orekit/files/ccsds/definitions/FrameFacade;)V");
                mids$[mid_setFrameB_2c8b859a72c0094e] = env->getMethodID(cls, "setFrameB", "(Lorg/orekit/files/ccsds/definitions/FrameFacade;)V");
                mids$[mid_toString_d2c8eb4129821f0e] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");

                class$ = new ::java::lang::Class(cls);
                cls = (jclass) class$->this$;

                A2B = new ::java::lang::String(env->getStaticObjectField(cls, "A2B", "Ljava/lang/String;"));
                B2A = new ::java::lang::String(env->getStaticObjectField(cls, "B2A", "Ljava/lang/String;"));
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            AttitudeEndpoints::AttitudeEndpoints() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_ff7cb6c242604316)) {}

            ::org::orekit::attitudes::FieldAttitude AttitudeEndpoints::build(const ::org::orekit::frames::Frame & a0, const ::org::orekit::utils::FieldPVCoordinatesProvider & a1, const ::org::orekit::utils::TimeStampedFieldAngularCoordinates & a2) const
            {
              return ::org::orekit::attitudes::FieldAttitude(env->callObjectMethod(this$, mids$[mid_build_16f6708eb1cda684], a0.this$, a1.this$, a2.this$));
            }

            ::org::orekit::attitudes::Attitude AttitudeEndpoints::build(const ::org::orekit::frames::Frame & a0, const ::org::orekit::utils::PVCoordinatesProvider & a1, const ::org::orekit::utils::TimeStampedAngularCoordinates & a2) const
            {
              return ::org::orekit::attitudes::Attitude(env->callObjectMethod(this$, mids$[mid_build_11d80d4c91effa8b], a0.this$, a1.this$, a2.this$));
            }

            void AttitudeEndpoints::checkExternalFrame(const ::java::lang::Enum & a0, const ::java::lang::Enum & a1) const
            {
              env->callVoidMethod(this$, mids$[mid_checkExternalFrame_46ccf4dfaef9abfa], a0.this$, a1.this$);
            }

            void AttitudeEndpoints::checkMandatoryEntriesExceptExternalFrame(jdouble a0, const ::java::lang::Enum & a1, const ::java::lang::Enum & a2, const ::java::lang::Enum & a3) const
            {
              env->callVoidMethod(this$, mids$[mid_checkMandatoryEntriesExceptExternalFrame_4e5c1103238b9e37], a0, a1.this$, a2.this$, a3.this$);
            }

            ::org::orekit::files::ccsds::definitions::FrameFacade AttitudeEndpoints::getExternalFrame() const
            {
              return ::org::orekit::files::ccsds::definitions::FrameFacade(env->callObjectMethod(this$, mids$[mid_getExternalFrame_0fc1562b68204151]));
            }

            ::org::orekit::files::ccsds::definitions::FrameFacade AttitudeEndpoints::getFrameA() const
            {
              return ::org::orekit::files::ccsds::definitions::FrameFacade(env->callObjectMethod(this$, mids$[mid_getFrameA_0fc1562b68204151]));
            }

            ::org::orekit::files::ccsds::definitions::FrameFacade AttitudeEndpoints::getFrameB() const
            {
              return ::org::orekit::files::ccsds::definitions::FrameFacade(env->callObjectMethod(this$, mids$[mid_getFrameB_0fc1562b68204151]));
            }

            ::org::orekit::files::ccsds::definitions::FrameFacade AttitudeEndpoints::getSpacecraftBodyFrame() const
            {
              return ::org::orekit::files::ccsds::definitions::FrameFacade(env->callObjectMethod(this$, mids$[mid_getSpacecraftBodyFrame_0fc1562b68204151]));
            }

            jboolean AttitudeEndpoints::isA2b() const
            {
              return env->callBooleanMethod(this$, mids$[mid_isA2b_eee3de00fe971136]);
            }

            jboolean AttitudeEndpoints::isCompatibleWith(const AttitudeEndpoints & a0) const
            {
              return env->callBooleanMethod(this$, mids$[mid_isCompatibleWith_1bd54c9a3aa91939], a0.this$);
            }

            jboolean AttitudeEndpoints::isExternal2SpacecraftBody() const
            {
              return env->callBooleanMethod(this$, mids$[mid_isExternal2SpacecraftBody_eee3de00fe971136]);
            }

            void AttitudeEndpoints::setA2b(jboolean a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setA2b_b35db77cae58639e], a0);
            }

            void AttitudeEndpoints::setFrameA(const ::org::orekit::files::ccsds::definitions::FrameFacade & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setFrameA_2c8b859a72c0094e], a0.this$);
            }

            void AttitudeEndpoints::setFrameB(const ::org::orekit::files::ccsds::definitions::FrameFacade & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setFrameB_2c8b859a72c0094e], a0.this$);
            }

            ::java::lang::String AttitudeEndpoints::toString() const
            {
              return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_d2c8eb4129821f0e]));
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
            static PyObject *t_AttitudeEndpoints_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_AttitudeEndpoints_instance_(PyTypeObject *type, PyObject *arg);
            static int t_AttitudeEndpoints_init_(t_AttitudeEndpoints *self, PyObject *args, PyObject *kwds);
            static PyObject *t_AttitudeEndpoints_build(t_AttitudeEndpoints *self, PyObject *args);
            static PyObject *t_AttitudeEndpoints_checkExternalFrame(t_AttitudeEndpoints *self, PyObject *args);
            static PyObject *t_AttitudeEndpoints_checkMandatoryEntriesExceptExternalFrame(t_AttitudeEndpoints *self, PyObject *args);
            static PyObject *t_AttitudeEndpoints_getExternalFrame(t_AttitudeEndpoints *self);
            static PyObject *t_AttitudeEndpoints_getFrameA(t_AttitudeEndpoints *self);
            static PyObject *t_AttitudeEndpoints_getFrameB(t_AttitudeEndpoints *self);
            static PyObject *t_AttitudeEndpoints_getSpacecraftBodyFrame(t_AttitudeEndpoints *self);
            static PyObject *t_AttitudeEndpoints_isA2b(t_AttitudeEndpoints *self);
            static PyObject *t_AttitudeEndpoints_isCompatibleWith(t_AttitudeEndpoints *self, PyObject *arg);
            static PyObject *t_AttitudeEndpoints_isExternal2SpacecraftBody(t_AttitudeEndpoints *self);
            static PyObject *t_AttitudeEndpoints_setA2b(t_AttitudeEndpoints *self, PyObject *arg);
            static PyObject *t_AttitudeEndpoints_setFrameA(t_AttitudeEndpoints *self, PyObject *arg);
            static PyObject *t_AttitudeEndpoints_setFrameB(t_AttitudeEndpoints *self, PyObject *arg);
            static PyObject *t_AttitudeEndpoints_toString(t_AttitudeEndpoints *self, PyObject *args);
            static PyObject *t_AttitudeEndpoints_get__a2b(t_AttitudeEndpoints *self, void *data);
            static int t_AttitudeEndpoints_set__a2b(t_AttitudeEndpoints *self, PyObject *arg, void *data);
            static PyObject *t_AttitudeEndpoints_get__external2SpacecraftBody(t_AttitudeEndpoints *self, void *data);
            static PyObject *t_AttitudeEndpoints_get__externalFrame(t_AttitudeEndpoints *self, void *data);
            static PyObject *t_AttitudeEndpoints_get__frameA(t_AttitudeEndpoints *self, void *data);
            static int t_AttitudeEndpoints_set__frameA(t_AttitudeEndpoints *self, PyObject *arg, void *data);
            static PyObject *t_AttitudeEndpoints_get__frameB(t_AttitudeEndpoints *self, void *data);
            static int t_AttitudeEndpoints_set__frameB(t_AttitudeEndpoints *self, PyObject *arg, void *data);
            static PyObject *t_AttitudeEndpoints_get__spacecraftBodyFrame(t_AttitudeEndpoints *self, void *data);
            static PyGetSetDef t_AttitudeEndpoints__fields_[] = {
              DECLARE_GETSET_FIELD(t_AttitudeEndpoints, a2b),
              DECLARE_GET_FIELD(t_AttitudeEndpoints, external2SpacecraftBody),
              DECLARE_GET_FIELD(t_AttitudeEndpoints, externalFrame),
              DECLARE_GETSET_FIELD(t_AttitudeEndpoints, frameA),
              DECLARE_GETSET_FIELD(t_AttitudeEndpoints, frameB),
              DECLARE_GET_FIELD(t_AttitudeEndpoints, spacecraftBodyFrame),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_AttitudeEndpoints__methods_[] = {
              DECLARE_METHOD(t_AttitudeEndpoints, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_AttitudeEndpoints, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_AttitudeEndpoints, build, METH_VARARGS),
              DECLARE_METHOD(t_AttitudeEndpoints, checkExternalFrame, METH_VARARGS),
              DECLARE_METHOD(t_AttitudeEndpoints, checkMandatoryEntriesExceptExternalFrame, METH_VARARGS),
              DECLARE_METHOD(t_AttitudeEndpoints, getExternalFrame, METH_NOARGS),
              DECLARE_METHOD(t_AttitudeEndpoints, getFrameA, METH_NOARGS),
              DECLARE_METHOD(t_AttitudeEndpoints, getFrameB, METH_NOARGS),
              DECLARE_METHOD(t_AttitudeEndpoints, getSpacecraftBodyFrame, METH_NOARGS),
              DECLARE_METHOD(t_AttitudeEndpoints, isA2b, METH_NOARGS),
              DECLARE_METHOD(t_AttitudeEndpoints, isCompatibleWith, METH_O),
              DECLARE_METHOD(t_AttitudeEndpoints, isExternal2SpacecraftBody, METH_NOARGS),
              DECLARE_METHOD(t_AttitudeEndpoints, setA2b, METH_O),
              DECLARE_METHOD(t_AttitudeEndpoints, setFrameA, METH_O),
              DECLARE_METHOD(t_AttitudeEndpoints, setFrameB, METH_O),
              DECLARE_METHOD(t_AttitudeEndpoints, toString, METH_VARARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(AttitudeEndpoints)[] = {
              { Py_tp_methods, t_AttitudeEndpoints__methods_ },
              { Py_tp_init, (void *) t_AttitudeEndpoints_init_ },
              { Py_tp_getset, t_AttitudeEndpoints__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(AttitudeEndpoints)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(AttitudeEndpoints, t_AttitudeEndpoints, AttitudeEndpoints);

            void t_AttitudeEndpoints::install(PyObject *module)
            {
              installType(&PY_TYPE(AttitudeEndpoints), &PY_TYPE_DEF(AttitudeEndpoints), module, "AttitudeEndpoints", 0);
            }

            void t_AttitudeEndpoints::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeEndpoints), "class_", make_descriptor(AttitudeEndpoints::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeEndpoints), "wrapfn_", make_descriptor(t_AttitudeEndpoints::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeEndpoints), "boxfn_", make_descriptor(boxObject));
              env->getClass(AttitudeEndpoints::initializeClass);
              PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeEndpoints), "A2B", make_descriptor(j2p(*AttitudeEndpoints::A2B)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeEndpoints), "B2A", make_descriptor(j2p(*AttitudeEndpoints::B2A)));
            }

            static PyObject *t_AttitudeEndpoints_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, AttitudeEndpoints::initializeClass, 1)))
                return NULL;
              return t_AttitudeEndpoints::wrap_Object(AttitudeEndpoints(((t_AttitudeEndpoints *) arg)->object.this$));
            }
            static PyObject *t_AttitudeEndpoints_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, AttitudeEndpoints::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static int t_AttitudeEndpoints_init_(t_AttitudeEndpoints *self, PyObject *args, PyObject *kwds)
            {
              AttitudeEndpoints object((jobject) NULL);

              INT_CALL(object = AttitudeEndpoints());
              self->object = object;

              return 0;
            }

            static PyObject *t_AttitudeEndpoints_build(t_AttitudeEndpoints *self, PyObject *args)
            {
              switch (PyTuple_GET_SIZE(args)) {
               case 3:
                {
                  ::org::orekit::frames::Frame a0((jobject) NULL);
                  ::org::orekit::utils::PVCoordinatesProvider a1((jobject) NULL);
                  ::org::orekit::utils::TimeStampedAngularCoordinates a2((jobject) NULL);
                  ::org::orekit::attitudes::Attitude result((jobject) NULL);

                  if (!parseArgs(args, "kkk", ::org::orekit::frames::Frame::initializeClass, ::org::orekit::utils::PVCoordinatesProvider::initializeClass, ::org::orekit::utils::TimeStampedAngularCoordinates::initializeClass, &a0, &a1, &a2))
                  {
                    OBJ_CALL(result = self->object.build(a0, a1, a2));
                    return ::org::orekit::attitudes::t_Attitude::wrap_Object(result);
                  }
                }
                {
                  ::org::orekit::frames::Frame a0((jobject) NULL);
                  ::org::orekit::utils::FieldPVCoordinatesProvider a1((jobject) NULL);
                  PyTypeObject **p1;
                  ::org::orekit::utils::TimeStampedFieldAngularCoordinates a2((jobject) NULL);
                  PyTypeObject **p2;
                  ::org::orekit::attitudes::FieldAttitude result((jobject) NULL);

                  if (!parseArgs(args, "kKK", ::org::orekit::frames::Frame::initializeClass, ::org::orekit::utils::FieldPVCoordinatesProvider::initializeClass, ::org::orekit::utils::TimeStampedFieldAngularCoordinates::initializeClass, &a0, &a1, &p1, ::org::orekit::utils::t_FieldPVCoordinatesProvider::parameters_, &a2, &p2, ::org::orekit::utils::t_TimeStampedFieldAngularCoordinates::parameters_))
                  {
                    OBJ_CALL(result = self->object.build(a0, a1, a2));
                    return ::org::orekit::attitudes::t_FieldAttitude::wrap_Object(result);
                  }
                }
              }

              PyErr_SetArgsError((PyObject *) self, "build", args);
              return NULL;
            }

            static PyObject *t_AttitudeEndpoints_checkExternalFrame(t_AttitudeEndpoints *self, PyObject *args)
            {
              ::java::lang::Enum a0((jobject) NULL);
              PyTypeObject **p0;
              ::java::lang::Enum a1((jobject) NULL);
              PyTypeObject **p1;

              if (!parseArgs(args, "KK", ::java::lang::Enum::initializeClass, ::java::lang::Enum::initializeClass, &a0, &p0, ::java::lang::t_Enum::parameters_, &a1, &p1, ::java::lang::t_Enum::parameters_))
              {
                OBJ_CALL(self->object.checkExternalFrame(a0, a1));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "checkExternalFrame", args);
              return NULL;
            }

            static PyObject *t_AttitudeEndpoints_checkMandatoryEntriesExceptExternalFrame(t_AttitudeEndpoints *self, PyObject *args)
            {
              jdouble a0;
              ::java::lang::Enum a1((jobject) NULL);
              PyTypeObject **p1;
              ::java::lang::Enum a2((jobject) NULL);
              PyTypeObject **p2;
              ::java::lang::Enum a3((jobject) NULL);
              PyTypeObject **p3;

              if (!parseArgs(args, "DKKK", ::java::lang::Enum::initializeClass, ::java::lang::Enum::initializeClass, ::java::lang::Enum::initializeClass, &a0, &a1, &p1, ::java::lang::t_Enum::parameters_, &a2, &p2, ::java::lang::t_Enum::parameters_, &a3, &p3, ::java::lang::t_Enum::parameters_))
              {
                OBJ_CALL(self->object.checkMandatoryEntriesExceptExternalFrame(a0, a1, a2, a3));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "checkMandatoryEntriesExceptExternalFrame", args);
              return NULL;
            }

            static PyObject *t_AttitudeEndpoints_getExternalFrame(t_AttitudeEndpoints *self)
            {
              ::org::orekit::files::ccsds::definitions::FrameFacade result((jobject) NULL);
              OBJ_CALL(result = self->object.getExternalFrame());
              return ::org::orekit::files::ccsds::definitions::t_FrameFacade::wrap_Object(result);
            }

            static PyObject *t_AttitudeEndpoints_getFrameA(t_AttitudeEndpoints *self)
            {
              ::org::orekit::files::ccsds::definitions::FrameFacade result((jobject) NULL);
              OBJ_CALL(result = self->object.getFrameA());
              return ::org::orekit::files::ccsds::definitions::t_FrameFacade::wrap_Object(result);
            }

            static PyObject *t_AttitudeEndpoints_getFrameB(t_AttitudeEndpoints *self)
            {
              ::org::orekit::files::ccsds::definitions::FrameFacade result((jobject) NULL);
              OBJ_CALL(result = self->object.getFrameB());
              return ::org::orekit::files::ccsds::definitions::t_FrameFacade::wrap_Object(result);
            }

            static PyObject *t_AttitudeEndpoints_getSpacecraftBodyFrame(t_AttitudeEndpoints *self)
            {
              ::org::orekit::files::ccsds::definitions::FrameFacade result((jobject) NULL);
              OBJ_CALL(result = self->object.getSpacecraftBodyFrame());
              return ::org::orekit::files::ccsds::definitions::t_FrameFacade::wrap_Object(result);
            }

            static PyObject *t_AttitudeEndpoints_isA2b(t_AttitudeEndpoints *self)
            {
              jboolean result;
              OBJ_CALL(result = self->object.isA2b());
              Py_RETURN_BOOL(result);
            }

            static PyObject *t_AttitudeEndpoints_isCompatibleWith(t_AttitudeEndpoints *self, PyObject *arg)
            {
              AttitudeEndpoints a0((jobject) NULL);
              jboolean result;

              if (!parseArg(arg, "k", AttitudeEndpoints::initializeClass, &a0))
              {
                OBJ_CALL(result = self->object.isCompatibleWith(a0));
                Py_RETURN_BOOL(result);
              }

              PyErr_SetArgsError((PyObject *) self, "isCompatibleWith", arg);
              return NULL;
            }

            static PyObject *t_AttitudeEndpoints_isExternal2SpacecraftBody(t_AttitudeEndpoints *self)
            {
              jboolean result;
              OBJ_CALL(result = self->object.isExternal2SpacecraftBody());
              Py_RETURN_BOOL(result);
            }

            static PyObject *t_AttitudeEndpoints_setA2b(t_AttitudeEndpoints *self, PyObject *arg)
            {
              jboolean a0;

              if (!parseArg(arg, "Z", &a0))
              {
                OBJ_CALL(self->object.setA2b(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setA2b", arg);
              return NULL;
            }

            static PyObject *t_AttitudeEndpoints_setFrameA(t_AttitudeEndpoints *self, PyObject *arg)
            {
              ::org::orekit::files::ccsds::definitions::FrameFacade a0((jobject) NULL);

              if (!parseArg(arg, "k", ::org::orekit::files::ccsds::definitions::FrameFacade::initializeClass, &a0))
              {
                OBJ_CALL(self->object.setFrameA(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setFrameA", arg);
              return NULL;
            }

            static PyObject *t_AttitudeEndpoints_setFrameB(t_AttitudeEndpoints *self, PyObject *arg)
            {
              ::org::orekit::files::ccsds::definitions::FrameFacade a0((jobject) NULL);

              if (!parseArg(arg, "k", ::org::orekit::files::ccsds::definitions::FrameFacade::initializeClass, &a0))
              {
                OBJ_CALL(self->object.setFrameB(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setFrameB", arg);
              return NULL;
            }

            static PyObject *t_AttitudeEndpoints_toString(t_AttitudeEndpoints *self, PyObject *args)
            {
              ::java::lang::String result((jobject) NULL);

              if (!parseArgs(args, ""))
              {
                OBJ_CALL(result = self->object.toString());
                return j2p(result);
              }

              return callSuper(PY_TYPE(AttitudeEndpoints), (PyObject *) self, "toString", args, 2);
            }

            static PyObject *t_AttitudeEndpoints_get__a2b(t_AttitudeEndpoints *self, void *data)
            {
              jboolean value;
              OBJ_CALL(value = self->object.isA2b());
              Py_RETURN_BOOL(value);
            }
            static int t_AttitudeEndpoints_set__a2b(t_AttitudeEndpoints *self, PyObject *arg, void *data)
            {
              {
                jboolean value;
                if (!parseArg(arg, "Z", &value))
                {
                  INT_CALL(self->object.setA2b(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "a2b", arg);
              return -1;
            }

            static PyObject *t_AttitudeEndpoints_get__external2SpacecraftBody(t_AttitudeEndpoints *self, void *data)
            {
              jboolean value;
              OBJ_CALL(value = self->object.isExternal2SpacecraftBody());
              Py_RETURN_BOOL(value);
            }

            static PyObject *t_AttitudeEndpoints_get__externalFrame(t_AttitudeEndpoints *self, void *data)
            {
              ::org::orekit::files::ccsds::definitions::FrameFacade value((jobject) NULL);
              OBJ_CALL(value = self->object.getExternalFrame());
              return ::org::orekit::files::ccsds::definitions::t_FrameFacade::wrap_Object(value);
            }

            static PyObject *t_AttitudeEndpoints_get__frameA(t_AttitudeEndpoints *self, void *data)
            {
              ::org::orekit::files::ccsds::definitions::FrameFacade value((jobject) NULL);
              OBJ_CALL(value = self->object.getFrameA());
              return ::org::orekit::files::ccsds::definitions::t_FrameFacade::wrap_Object(value);
            }
            static int t_AttitudeEndpoints_set__frameA(t_AttitudeEndpoints *self, PyObject *arg, void *data)
            {
              {
                ::org::orekit::files::ccsds::definitions::FrameFacade value((jobject) NULL);
                if (!parseArg(arg, "k", ::org::orekit::files::ccsds::definitions::FrameFacade::initializeClass, &value))
                {
                  INT_CALL(self->object.setFrameA(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "frameA", arg);
              return -1;
            }

            static PyObject *t_AttitudeEndpoints_get__frameB(t_AttitudeEndpoints *self, void *data)
            {
              ::org::orekit::files::ccsds::definitions::FrameFacade value((jobject) NULL);
              OBJ_CALL(value = self->object.getFrameB());
              return ::org::orekit::files::ccsds::definitions::t_FrameFacade::wrap_Object(value);
            }
            static int t_AttitudeEndpoints_set__frameB(t_AttitudeEndpoints *self, PyObject *arg, void *data)
            {
              {
                ::org::orekit::files::ccsds::definitions::FrameFacade value((jobject) NULL);
                if (!parseArg(arg, "k", ::org::orekit::files::ccsds::definitions::FrameFacade::initializeClass, &value))
                {
                  INT_CALL(self->object.setFrameB(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "frameB", arg);
              return -1;
            }

            static PyObject *t_AttitudeEndpoints_get__spacecraftBodyFrame(t_AttitudeEndpoints *self, void *data)
            {
              ::org::orekit::files::ccsds::definitions::FrameFacade value((jobject) NULL);
              OBJ_CALL(value = self->object.getSpacecraftBodyFrame());
              return ::org::orekit::files::ccsds::definitions::t_FrameFacade::wrap_Object(value);
            }
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/random/UniformRandomGenerator.h"
#include "org/hipparchus/random/NormalizedRandomGenerator.h"
#include "org/hipparchus/random/RandomGenerator.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace random {

      ::java::lang::Class *UniformRandomGenerator::class$ = NULL;
      jmethodID *UniformRandomGenerator::mids$ = NULL;
      bool UniformRandomGenerator::live$ = false;

      jclass UniformRandomGenerator::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/random/UniformRandomGenerator");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_e24b125c6ff6cc8c] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/random/RandomGenerator;)V");
          mids$[mid_nextNormalizedDouble_9981f74b2d109da6] = env->getMethodID(cls, "nextNormalizedDouble", "()D");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      UniformRandomGenerator::UniformRandomGenerator(const ::org::hipparchus::random::RandomGenerator & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_e24b125c6ff6cc8c, a0.this$)) {}

      jdouble UniformRandomGenerator::nextNormalizedDouble() const
      {
        return env->callDoubleMethod(this$, mids$[mid_nextNormalizedDouble_9981f74b2d109da6]);
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
      static PyObject *t_UniformRandomGenerator_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_UniformRandomGenerator_instance_(PyTypeObject *type, PyObject *arg);
      static int t_UniformRandomGenerator_init_(t_UniformRandomGenerator *self, PyObject *args, PyObject *kwds);
      static PyObject *t_UniformRandomGenerator_nextNormalizedDouble(t_UniformRandomGenerator *self);

      static PyMethodDef t_UniformRandomGenerator__methods_[] = {
        DECLARE_METHOD(t_UniformRandomGenerator, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_UniformRandomGenerator, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_UniformRandomGenerator, nextNormalizedDouble, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(UniformRandomGenerator)[] = {
        { Py_tp_methods, t_UniformRandomGenerator__methods_ },
        { Py_tp_init, (void *) t_UniformRandomGenerator_init_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(UniformRandomGenerator)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(UniformRandomGenerator, t_UniformRandomGenerator, UniformRandomGenerator);

      void t_UniformRandomGenerator::install(PyObject *module)
      {
        installType(&PY_TYPE(UniformRandomGenerator), &PY_TYPE_DEF(UniformRandomGenerator), module, "UniformRandomGenerator", 0);
      }

      void t_UniformRandomGenerator::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(UniformRandomGenerator), "class_", make_descriptor(UniformRandomGenerator::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(UniformRandomGenerator), "wrapfn_", make_descriptor(t_UniformRandomGenerator::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(UniformRandomGenerator), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_UniformRandomGenerator_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, UniformRandomGenerator::initializeClass, 1)))
          return NULL;
        return t_UniformRandomGenerator::wrap_Object(UniformRandomGenerator(((t_UniformRandomGenerator *) arg)->object.this$));
      }
      static PyObject *t_UniformRandomGenerator_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, UniformRandomGenerator::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_UniformRandomGenerator_init_(t_UniformRandomGenerator *self, PyObject *args, PyObject *kwds)
      {
        ::org::hipparchus::random::RandomGenerator a0((jobject) NULL);
        UniformRandomGenerator object((jobject) NULL);

        if (!parseArgs(args, "k", ::org::hipparchus::random::RandomGenerator::initializeClass, &a0))
        {
          INT_CALL(object = UniformRandomGenerator(a0));
          self->object = object;
        }
        else
        {
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_UniformRandomGenerator_nextNormalizedDouble(t_UniformRandomGenerator *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.nextNormalizedDouble());
        return PyFloat_FromDouble((double) result);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/semianalytical/dsst/utilities/hansen/PolynomialFunctionMatrix.h"
#include "org/hipparchus/analysis/polynomials/PolynomialFunction.h"
#include "java/lang/Class.h"
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
                  mids$[mid_add_a39e250cb1ed0404] = env->getMethodID(cls, "add", "(Lorg/orekit/propagation/semianalytical/dsst/utilities/hansen/PolynomialFunctionMatrix;)Lorg/orekit/propagation/semianalytical/dsst/utilities/hansen/PolynomialFunctionMatrix;");
                  mids$[mid_getElem_4aace0e1cd1edd30] = env->getMethodID(cls, "getElem", "(II)Lorg/hipparchus/analysis/polynomials/PolynomialFunction;");
                  mids$[mid_getMatrixLine_fcfa756790026850] = env->getMethodID(cls, "getMatrixLine", "(I)[Lorg/hipparchus/analysis/polynomials/PolynomialFunction;");
                  mids$[mid_multiply_a39e250cb1ed0404] = env->getMethodID(cls, "multiply", "(Lorg/orekit/propagation/semianalytical/dsst/utilities/hansen/PolynomialFunctionMatrix;)Lorg/orekit/propagation/semianalytical/dsst/utilities/hansen/PolynomialFunctionMatrix;");
                  mids$[mid_setElem_08c9fe425e068939] = env->getMethodID(cls, "setElem", "(IILorg/hipparchus/analysis/polynomials/PolynomialFunction;)V");
                  mids$[mid_setMatrix_0d308af53609a988] = env->getMethodID(cls, "setMatrix", "([[Lorg/hipparchus/analysis/polynomials/PolynomialFunction;)V");
                  mids$[mid_setMatrixLine_a247c570c3ab5398] = env->getMethodID(cls, "setMatrixLine", "(I[Lorg/hipparchus/analysis/polynomials/PolynomialFunction;)V");

                  class$ = new ::java::lang::Class(cls);
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              PolynomialFunctionMatrix PolynomialFunctionMatrix::add(const PolynomialFunctionMatrix & a0) const
              {
                return PolynomialFunctionMatrix(env->callObjectMethod(this$, mids$[mid_add_a39e250cb1ed0404], a0.this$));
              }

              ::org::hipparchus::analysis::polynomials::PolynomialFunction PolynomialFunctionMatrix::getElem(jint a0, jint a1) const
              {
                return ::org::hipparchus::analysis::polynomials::PolynomialFunction(env->callObjectMethod(this$, mids$[mid_getElem_4aace0e1cd1edd30], a0, a1));
              }

              JArray< ::org::hipparchus::analysis::polynomials::PolynomialFunction > PolynomialFunctionMatrix::getMatrixLine(jint a0) const
              {
                return JArray< ::org::hipparchus::analysis::polynomials::PolynomialFunction >(env->callObjectMethod(this$, mids$[mid_getMatrixLine_fcfa756790026850], a0));
              }

              PolynomialFunctionMatrix PolynomialFunctionMatrix::multiply(const PolynomialFunctionMatrix & a0) const
              {
                return PolynomialFunctionMatrix(env->callObjectMethod(this$, mids$[mid_multiply_a39e250cb1ed0404], a0.this$));
              }

              void PolynomialFunctionMatrix::setElem(jint a0, jint a1, const ::org::hipparchus::analysis::polynomials::PolynomialFunction & a2) const
              {
                env->callVoidMethod(this$, mids$[mid_setElem_08c9fe425e068939], a0, a1, a2.this$);
              }

              void PolynomialFunctionMatrix::setMatrix(const JArray< JArray< ::org::hipparchus::analysis::polynomials::PolynomialFunction > > & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setMatrix_0d308af53609a988], a0.this$);
              }

              void PolynomialFunctionMatrix::setMatrixLine(jint a0, const JArray< ::org::hipparchus::analysis::polynomials::PolynomialFunction > & a1) const
              {
                env->callVoidMethod(this$, mids$[mid_setMatrixLine_a247c570c3ab5398], a0, a1.this$);
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
#include "org/orekit/propagation/conversion/PythonPropagatorConverter.h"
#include "java/util/List.h"
#include "java/lang/Throwable.h"
#include "org/orekit/propagation/conversion/PropagatorConverter.h"
#include "org/orekit/propagation/Propagator.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace conversion {

        ::java::lang::Class *PythonPropagatorConverter::class$ = NULL;
        jmethodID *PythonPropagatorConverter::mids$ = NULL;
        bool PythonPropagatorConverter::live$ = false;

        jclass PythonPropagatorConverter::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/conversion/PythonPropagatorConverter");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_ff7cb6c242604316] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_convert_1713a56b457259e7] = env->getMethodID(cls, "convert", "(Ljava/util/List;Z[Ljava/lang/String;)Lorg/orekit/propagation/Propagator;");
            mids$[mid_convert_94ab750de1114aab] = env->getMethodID(cls, "convert", "(Ljava/util/List;ZLjava/util/List;)Lorg/orekit/propagation/Propagator;");
            mids$[mid_convert_ed6ecec71abaa7e7] = env->getMethodID(cls, "convert", "(Lorg/orekit/propagation/Propagator;DI[Ljava/lang/String;)Lorg/orekit/propagation/Propagator;");
            mids$[mid_convert_f1a727d7b3be4da6] = env->getMethodID(cls, "convert", "(Lorg/orekit/propagation/Propagator;DILjava/util/List;)Lorg/orekit/propagation/Propagator;");
            mids$[mid_finalize_ff7cb6c242604316] = env->getMethodID(cls, "finalize", "()V");
            mids$[mid_pythonDecRef_ff7cb6c242604316] = env->getMethodID(cls, "pythonDecRef", "()V");
            mids$[mid_pythonExtension_42c72b98e3c2e08a] = env->getMethodID(cls, "pythonExtension", "()J");
            mids$[mid_pythonExtension_f5bbab7e97879358] = env->getMethodID(cls, "pythonExtension", "(J)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        PythonPropagatorConverter::PythonPropagatorConverter() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_ff7cb6c242604316)) {}

        void PythonPropagatorConverter::finalize() const
        {
          env->callVoidMethod(this$, mids$[mid_finalize_ff7cb6c242604316]);
        }

        jlong PythonPropagatorConverter::pythonExtension() const
        {
          return env->callLongMethod(this$, mids$[mid_pythonExtension_42c72b98e3c2e08a]);
        }

        void PythonPropagatorConverter::pythonExtension(jlong a0) const
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
    namespace propagation {
      namespace conversion {
        static PyObject *t_PythonPropagatorConverter_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_PythonPropagatorConverter_instance_(PyTypeObject *type, PyObject *arg);
        static int t_PythonPropagatorConverter_init_(t_PythonPropagatorConverter *self, PyObject *args, PyObject *kwds);
        static PyObject *t_PythonPropagatorConverter_finalize(t_PythonPropagatorConverter *self);
        static PyObject *t_PythonPropagatorConverter_pythonExtension(t_PythonPropagatorConverter *self, PyObject *args);
        static jobject JNICALL t_PythonPropagatorConverter_convert0(JNIEnv *jenv, jobject jobj, jobject a0, jboolean a1, jobject a2);
        static jobject JNICALL t_PythonPropagatorConverter_convert1(JNIEnv *jenv, jobject jobj, jobject a0, jboolean a1, jobject a2);
        static jobject JNICALL t_PythonPropagatorConverter_convert2(JNIEnv *jenv, jobject jobj, jobject a0, jdouble a1, jint a2, jobject a3);
        static jobject JNICALL t_PythonPropagatorConverter_convert3(JNIEnv *jenv, jobject jobj, jobject a0, jdouble a1, jint a2, jobject a3);
        static void JNICALL t_PythonPropagatorConverter_pythonDecRef4(JNIEnv *jenv, jobject jobj);
        static PyObject *t_PythonPropagatorConverter_get__self(t_PythonPropagatorConverter *self, void *data);
        static PyGetSetDef t_PythonPropagatorConverter__fields_[] = {
          DECLARE_GET_FIELD(t_PythonPropagatorConverter, self),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_PythonPropagatorConverter__methods_[] = {
          DECLARE_METHOD(t_PythonPropagatorConverter, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonPropagatorConverter, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonPropagatorConverter, finalize, METH_NOARGS),
          DECLARE_METHOD(t_PythonPropagatorConverter, pythonExtension, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(PythonPropagatorConverter)[] = {
          { Py_tp_methods, t_PythonPropagatorConverter__methods_ },
          { Py_tp_init, (void *) t_PythonPropagatorConverter_init_ },
          { Py_tp_getset, t_PythonPropagatorConverter__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(PythonPropagatorConverter)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(PythonPropagatorConverter, t_PythonPropagatorConverter, PythonPropagatorConverter);

        void t_PythonPropagatorConverter::install(PyObject *module)
        {
          installType(&PY_TYPE(PythonPropagatorConverter), &PY_TYPE_DEF(PythonPropagatorConverter), module, "PythonPropagatorConverter", 1);
        }

        void t_PythonPropagatorConverter::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonPropagatorConverter), "class_", make_descriptor(PythonPropagatorConverter::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonPropagatorConverter), "wrapfn_", make_descriptor(t_PythonPropagatorConverter::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonPropagatorConverter), "boxfn_", make_descriptor(boxObject));
          jclass cls = env->getClass(PythonPropagatorConverter::initializeClass);
          JNINativeMethod methods[] = {
            { "convert", "(Ljava/util/List;Z[Ljava/lang/String;)Lorg/orekit/propagation/Propagator;", (void *) t_PythonPropagatorConverter_convert0 },
            { "convert", "(Ljava/util/List;ZLjava/util/List;)Lorg/orekit/propagation/Propagator;", (void *) t_PythonPropagatorConverter_convert1 },
            { "convert", "(Lorg/orekit/propagation/Propagator;DI[Ljava/lang/String;)Lorg/orekit/propagation/Propagator;", (void *) t_PythonPropagatorConverter_convert2 },
            { "convert", "(Lorg/orekit/propagation/Propagator;DILjava/util/List;)Lorg/orekit/propagation/Propagator;", (void *) t_PythonPropagatorConverter_convert3 },
            { "pythonDecRef", "()V", (void *) t_PythonPropagatorConverter_pythonDecRef4 },
          };
          env->registerNatives(cls, methods, 5);
        }

        static PyObject *t_PythonPropagatorConverter_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, PythonPropagatorConverter::initializeClass, 1)))
            return NULL;
          return t_PythonPropagatorConverter::wrap_Object(PythonPropagatorConverter(((t_PythonPropagatorConverter *) arg)->object.this$));
        }
        static PyObject *t_PythonPropagatorConverter_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, PythonPropagatorConverter::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_PythonPropagatorConverter_init_(t_PythonPropagatorConverter *self, PyObject *args, PyObject *kwds)
        {
          PythonPropagatorConverter object((jobject) NULL);

          INT_CALL(object = PythonPropagatorConverter());
          self->object = object;

          Py_INCREF((PyObject *) self);
          self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

          return 0;
        }

        static PyObject *t_PythonPropagatorConverter_finalize(t_PythonPropagatorConverter *self)
        {
          OBJ_CALL(self->object.finalize());
          Py_RETURN_NONE;
        }

        static PyObject *t_PythonPropagatorConverter_pythonExtension(t_PythonPropagatorConverter *self, PyObject *args)
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

        static jobject JNICALL t_PythonPropagatorConverter_convert0(JNIEnv *jenv, jobject jobj, jobject a0, jboolean a1, jobject a2)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonPropagatorConverter::mids$[PythonPropagatorConverter::mid_pythonExtension_42c72b98e3c2e08a]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          ::org::orekit::propagation::Propagator value((jobject) NULL);
          PyObject *o0 = ::java::util::t_List::wrap_Object(::java::util::List(a0));
          PyObject *o1 = (a1 ? Py_True : Py_False);
          PyObject *o2 = JArray<jstring>(a2).wrap();
          PyObject *result = PyObject_CallMethod(obj, "convert", "OOO", o0, o1, o2);
          Py_DECREF(o0);
          Py_DECREF(o2);
          if (!result)
            throwPythonError();
          else if (parseArg(result, "k", ::org::orekit::propagation::Propagator::initializeClass, &value))
          {
            throwTypeError("convert", result);
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

        static jobject JNICALL t_PythonPropagatorConverter_convert1(JNIEnv *jenv, jobject jobj, jobject a0, jboolean a1, jobject a2)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonPropagatorConverter::mids$[PythonPropagatorConverter::mid_pythonExtension_42c72b98e3c2e08a]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          ::org::orekit::propagation::Propagator value((jobject) NULL);
          PyObject *o0 = ::java::util::t_List::wrap_Object(::java::util::List(a0));
          PyObject *o1 = (a1 ? Py_True : Py_False);
          PyObject *o2 = ::java::util::t_List::wrap_Object(::java::util::List(a2));
          PyObject *result = PyObject_CallMethod(obj, "convert", "OOO", o0, o1, o2);
          Py_DECREF(o0);
          Py_DECREF(o2);
          if (!result)
            throwPythonError();
          else if (parseArg(result, "k", ::org::orekit::propagation::Propagator::initializeClass, &value))
          {
            throwTypeError("convert", result);
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

        static jobject JNICALL t_PythonPropagatorConverter_convert2(JNIEnv *jenv, jobject jobj, jobject a0, jdouble a1, jint a2, jobject a3)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonPropagatorConverter::mids$[PythonPropagatorConverter::mid_pythonExtension_42c72b98e3c2e08a]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          ::org::orekit::propagation::Propagator value((jobject) NULL);
          PyObject *o0 = ::org::orekit::propagation::t_Propagator::wrap_Object(::org::orekit::propagation::Propagator(a0));
          PyObject *o3 = JArray<jstring>(a3).wrap();
          PyObject *result = PyObject_CallMethod(obj, "convert", "OdiO", o0, (double) a1, (int) a2, o3);
          Py_DECREF(o0);
          Py_DECREF(o3);
          if (!result)
            throwPythonError();
          else if (parseArg(result, "k", ::org::orekit::propagation::Propagator::initializeClass, &value))
          {
            throwTypeError("convert", result);
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

        static jobject JNICALL t_PythonPropagatorConverter_convert3(JNIEnv *jenv, jobject jobj, jobject a0, jdouble a1, jint a2, jobject a3)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonPropagatorConverter::mids$[PythonPropagatorConverter::mid_pythonExtension_42c72b98e3c2e08a]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          ::org::orekit::propagation::Propagator value((jobject) NULL);
          PyObject *o0 = ::org::orekit::propagation::t_Propagator::wrap_Object(::org::orekit::propagation::Propagator(a0));
          PyObject *o3 = ::java::util::t_List::wrap_Object(::java::util::List(a3));
          PyObject *result = PyObject_CallMethod(obj, "convert", "OdiO", o0, (double) a1, (int) a2, o3);
          Py_DECREF(o0);
          Py_DECREF(o3);
          if (!result)
            throwPythonError();
          else if (parseArg(result, "k", ::org::orekit::propagation::Propagator::initializeClass, &value))
          {
            throwTypeError("convert", result);
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

        static void JNICALL t_PythonPropagatorConverter_pythonDecRef4(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonPropagatorConverter::mids$[PythonPropagatorConverter::mid_pythonExtension_42c72b98e3c2e08a]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

          if (obj != NULL)
          {
            jenv->CallVoidMethod(jobj, PythonPropagatorConverter::mids$[PythonPropagatorConverter::mid_pythonExtension_f5bbab7e97879358], (jlong) 0);
            env->finalizeObject(jenv, obj);
          }
        }

        static PyObject *t_PythonPropagatorConverter_get__self(t_PythonPropagatorConverter *self, void *data)
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
#include "org/hipparchus/geometry/partitioning/Embedding.h"
#include "org/hipparchus/geometry/Point.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace geometry {
      namespace partitioning {

        ::java::lang::Class *Embedding::class$ = NULL;
        jmethodID *Embedding::mids$ = NULL;
        bool Embedding::live$ = false;

        jclass Embedding::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/geometry/partitioning/Embedding");

            mids$ = new jmethodID[max_mid];
            mids$[mid_toSpace_ff0c84956c63705d] = env->getMethodID(cls, "toSpace", "(Lorg/hipparchus/geometry/Point;)Lorg/hipparchus/geometry/Point;");
            mids$[mid_toSubSpace_ff0c84956c63705d] = env->getMethodID(cls, "toSubSpace", "(Lorg/hipparchus/geometry/Point;)Lorg/hipparchus/geometry/Point;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ::org::hipparchus::geometry::Point Embedding::toSpace(const ::org::hipparchus::geometry::Point & a0) const
        {
          return ::org::hipparchus::geometry::Point(env->callObjectMethod(this$, mids$[mid_toSpace_ff0c84956c63705d], a0.this$));
        }

        ::org::hipparchus::geometry::Point Embedding::toSubSpace(const ::org::hipparchus::geometry::Point & a0) const
        {
          return ::org::hipparchus::geometry::Point(env->callObjectMethod(this$, mids$[mid_toSubSpace_ff0c84956c63705d], a0.this$));
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
    namespace geometry {
      namespace partitioning {
        static PyObject *t_Embedding_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_Embedding_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_Embedding_of_(t_Embedding *self, PyObject *args);
        static PyObject *t_Embedding_toSpace(t_Embedding *self, PyObject *arg);
        static PyObject *t_Embedding_toSubSpace(t_Embedding *self, PyObject *arg);
        static PyObject *t_Embedding_get__parameters_(t_Embedding *self, void *data);
        static PyGetSetDef t_Embedding__fields_[] = {
          DECLARE_GET_FIELD(t_Embedding, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_Embedding__methods_[] = {
          DECLARE_METHOD(t_Embedding, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Embedding, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Embedding, of_, METH_VARARGS),
          DECLARE_METHOD(t_Embedding, toSpace, METH_O),
          DECLARE_METHOD(t_Embedding, toSubSpace, METH_O),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(Embedding)[] = {
          { Py_tp_methods, t_Embedding__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_Embedding__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(Embedding)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(Embedding, t_Embedding, Embedding);
        PyObject *t_Embedding::wrap_Object(const Embedding& object, PyTypeObject *p0, PyTypeObject *p1)
        {
          PyObject *obj = t_Embedding::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_Embedding *self = (t_Embedding *) obj;
            self->parameters[0] = p0;
            self->parameters[1] = p1;
          }
          return obj;
        }

        PyObject *t_Embedding::wrap_jobject(const jobject& object, PyTypeObject *p0, PyTypeObject *p1)
        {
          PyObject *obj = t_Embedding::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_Embedding *self = (t_Embedding *) obj;
            self->parameters[0] = p0;
            self->parameters[1] = p1;
          }
          return obj;
        }

        void t_Embedding::install(PyObject *module)
        {
          installType(&PY_TYPE(Embedding), &PY_TYPE_DEF(Embedding), module, "Embedding", 0);
        }

        void t_Embedding::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(Embedding), "class_", make_descriptor(Embedding::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Embedding), "wrapfn_", make_descriptor(t_Embedding::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Embedding), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_Embedding_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, Embedding::initializeClass, 1)))
            return NULL;
          return t_Embedding::wrap_Object(Embedding(((t_Embedding *) arg)->object.this$));
        }
        static PyObject *t_Embedding_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, Embedding::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_Embedding_of_(t_Embedding *self, PyObject *args)
        {
          if (!parseArg(args, "T", 2, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static PyObject *t_Embedding_toSpace(t_Embedding *self, PyObject *arg)
        {
          ::org::hipparchus::geometry::Point a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::hipparchus::geometry::Point result((jobject) NULL);

          if (!parseArg(arg, "K", ::org::hipparchus::geometry::Point::initializeClass, &a0, &p0, ::org::hipparchus::geometry::t_Point::parameters_))
          {
            OBJ_CALL(result = self->object.toSpace(a0));
            return ::org::hipparchus::geometry::t_Point::wrap_Object(result, self->parameters[0]);
          }

          PyErr_SetArgsError((PyObject *) self, "toSpace", arg);
          return NULL;
        }

        static PyObject *t_Embedding_toSubSpace(t_Embedding *self, PyObject *arg)
        {
          ::org::hipparchus::geometry::Point a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::hipparchus::geometry::Point result((jobject) NULL);

          if (!parseArg(arg, "K", ::org::hipparchus::geometry::Point::initializeClass, &a0, &p0, ::org::hipparchus::geometry::t_Point::parameters_))
          {
            OBJ_CALL(result = self->object.toSubSpace(a0));
            return ::org::hipparchus::geometry::t_Point::wrap_Object(result, self->parameters[1]);
          }

          PyErr_SetArgsError((PyObject *) self, "toSubSpace", arg);
          return NULL;
        }
        static PyObject *t_Embedding_get__parameters_(t_Embedding *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/ode/FieldEquationsMapper.h"
#include "java/io/Serializable.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "org/hipparchus/ode/FieldODEStateAndDerivative.h"
#include "java/lang/Class.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace ode {

      ::java::lang::Class *FieldEquationsMapper::class$ = NULL;
      jmethodID *FieldEquationsMapper::mids$ = NULL;
      bool FieldEquationsMapper::live$ = false;

      jclass FieldEquationsMapper::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/ode/FieldEquationsMapper");

          mids$ = new jmethodID[max_mid];
          mids$[mid_extractEquationData_d165cd7576e69a5a] = env->getMethodID(cls, "extractEquationData", "(I[Lorg/hipparchus/CalculusFieldElement;)[Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getNumberOfEquations_d6ab429752e7c267] = env->getMethodID(cls, "getNumberOfEquations", "()I");
          mids$[mid_getTotalDimension_d6ab429752e7c267] = env->getMethodID(cls, "getTotalDimension", "()I");
          mids$[mid_insertEquationData_7d0026cf0755dda0] = env->getMethodID(cls, "insertEquationData", "(I[Lorg/hipparchus/CalculusFieldElement;[Lorg/hipparchus/CalculusFieldElement;)V");
          mids$[mid_mapStateAndDerivative_107457b3d57b6f3a] = env->getMethodID(cls, "mapStateAndDerivative", "(Lorg/hipparchus/CalculusFieldElement;[Lorg/hipparchus/CalculusFieldElement;[Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/ode/FieldODEStateAndDerivative;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      JArray< ::org::hipparchus::CalculusFieldElement > FieldEquationsMapper::extractEquationData(jint a0, const JArray< ::org::hipparchus::CalculusFieldElement > & a1) const
      {
        return JArray< ::org::hipparchus::CalculusFieldElement >(env->callObjectMethod(this$, mids$[mid_extractEquationData_d165cd7576e69a5a], a0, a1.this$));
      }

      jint FieldEquationsMapper::getNumberOfEquations() const
      {
        return env->callIntMethod(this$, mids$[mid_getNumberOfEquations_d6ab429752e7c267]);
      }

      jint FieldEquationsMapper::getTotalDimension() const
      {
        return env->callIntMethod(this$, mids$[mid_getTotalDimension_d6ab429752e7c267]);
      }

      void FieldEquationsMapper::insertEquationData(jint a0, const JArray< ::org::hipparchus::CalculusFieldElement > & a1, const JArray< ::org::hipparchus::CalculusFieldElement > & a2) const
      {
        env->callVoidMethod(this$, mids$[mid_insertEquationData_7d0026cf0755dda0], a0, a1.this$, a2.this$);
      }

      ::org::hipparchus::ode::FieldODEStateAndDerivative FieldEquationsMapper::mapStateAndDerivative(const ::org::hipparchus::CalculusFieldElement & a0, const JArray< ::org::hipparchus::CalculusFieldElement > & a1, const JArray< ::org::hipparchus::CalculusFieldElement > & a2) const
      {
        return ::org::hipparchus::ode::FieldODEStateAndDerivative(env->callObjectMethod(this$, mids$[mid_mapStateAndDerivative_107457b3d57b6f3a], a0.this$, a1.this$, a2.this$));
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
      static PyObject *t_FieldEquationsMapper_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldEquationsMapper_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldEquationsMapper_of_(t_FieldEquationsMapper *self, PyObject *args);
      static PyObject *t_FieldEquationsMapper_extractEquationData(t_FieldEquationsMapper *self, PyObject *args);
      static PyObject *t_FieldEquationsMapper_getNumberOfEquations(t_FieldEquationsMapper *self);
      static PyObject *t_FieldEquationsMapper_getTotalDimension(t_FieldEquationsMapper *self);
      static PyObject *t_FieldEquationsMapper_insertEquationData(t_FieldEquationsMapper *self, PyObject *args);
      static PyObject *t_FieldEquationsMapper_mapStateAndDerivative(t_FieldEquationsMapper *self, PyObject *args);
      static PyObject *t_FieldEquationsMapper_get__numberOfEquations(t_FieldEquationsMapper *self, void *data);
      static PyObject *t_FieldEquationsMapper_get__totalDimension(t_FieldEquationsMapper *self, void *data);
      static PyObject *t_FieldEquationsMapper_get__parameters_(t_FieldEquationsMapper *self, void *data);
      static PyGetSetDef t_FieldEquationsMapper__fields_[] = {
        DECLARE_GET_FIELD(t_FieldEquationsMapper, numberOfEquations),
        DECLARE_GET_FIELD(t_FieldEquationsMapper, totalDimension),
        DECLARE_GET_FIELD(t_FieldEquationsMapper, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_FieldEquationsMapper__methods_[] = {
        DECLARE_METHOD(t_FieldEquationsMapper, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldEquationsMapper, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldEquationsMapper, of_, METH_VARARGS),
        DECLARE_METHOD(t_FieldEquationsMapper, extractEquationData, METH_VARARGS),
        DECLARE_METHOD(t_FieldEquationsMapper, getNumberOfEquations, METH_NOARGS),
        DECLARE_METHOD(t_FieldEquationsMapper, getTotalDimension, METH_NOARGS),
        DECLARE_METHOD(t_FieldEquationsMapper, insertEquationData, METH_VARARGS),
        DECLARE_METHOD(t_FieldEquationsMapper, mapStateAndDerivative, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(FieldEquationsMapper)[] = {
        { Py_tp_methods, t_FieldEquationsMapper__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_FieldEquationsMapper__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(FieldEquationsMapper)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(FieldEquationsMapper, t_FieldEquationsMapper, FieldEquationsMapper);
      PyObject *t_FieldEquationsMapper::wrap_Object(const FieldEquationsMapper& object, PyTypeObject *p0)
      {
        PyObject *obj = t_FieldEquationsMapper::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_FieldEquationsMapper *self = (t_FieldEquationsMapper *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_FieldEquationsMapper::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_FieldEquationsMapper::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_FieldEquationsMapper *self = (t_FieldEquationsMapper *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_FieldEquationsMapper::install(PyObject *module)
      {
        installType(&PY_TYPE(FieldEquationsMapper), &PY_TYPE_DEF(FieldEquationsMapper), module, "FieldEquationsMapper", 0);
      }

      void t_FieldEquationsMapper::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldEquationsMapper), "class_", make_descriptor(FieldEquationsMapper::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldEquationsMapper), "wrapfn_", make_descriptor(t_FieldEquationsMapper::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldEquationsMapper), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_FieldEquationsMapper_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, FieldEquationsMapper::initializeClass, 1)))
          return NULL;
        return t_FieldEquationsMapper::wrap_Object(FieldEquationsMapper(((t_FieldEquationsMapper *) arg)->object.this$));
      }
      static PyObject *t_FieldEquationsMapper_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, FieldEquationsMapper::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_FieldEquationsMapper_of_(t_FieldEquationsMapper *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static PyObject *t_FieldEquationsMapper_extractEquationData(t_FieldEquationsMapper *self, PyObject *args)
      {
        jint a0;
        JArray< ::org::hipparchus::CalculusFieldElement > a1((jobject) NULL);
        PyTypeObject **p1;
        JArray< ::org::hipparchus::CalculusFieldElement > result((jobject) NULL);

        if (!parseArgs(args, "I[K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_))
        {
          OBJ_CALL(result = self->object.extractEquationData(a0, a1));
          return JArray<jobject>(result.this$).wrap(::org::hipparchus::t_CalculusFieldElement::wrap_jobject);
        }

        PyErr_SetArgsError((PyObject *) self, "extractEquationData", args);
        return NULL;
      }

      static PyObject *t_FieldEquationsMapper_getNumberOfEquations(t_FieldEquationsMapper *self)
      {
        jint result;
        OBJ_CALL(result = self->object.getNumberOfEquations());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_FieldEquationsMapper_getTotalDimension(t_FieldEquationsMapper *self)
      {
        jint result;
        OBJ_CALL(result = self->object.getTotalDimension());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_FieldEquationsMapper_insertEquationData(t_FieldEquationsMapper *self, PyObject *args)
      {
        jint a0;
        JArray< ::org::hipparchus::CalculusFieldElement > a1((jobject) NULL);
        PyTypeObject **p1;
        JArray< ::org::hipparchus::CalculusFieldElement > a2((jobject) NULL);
        PyTypeObject **p2;

        if (!parseArgs(args, "I[K[K", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_))
        {
          OBJ_CALL(self->object.insertEquationData(a0, a1, a2));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "insertEquationData", args);
        return NULL;
      }

      static PyObject *t_FieldEquationsMapper_mapStateAndDerivative(t_FieldEquationsMapper *self, PyObject *args)
      {
        ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
        PyTypeObject **p0;
        JArray< ::org::hipparchus::CalculusFieldElement > a1((jobject) NULL);
        PyTypeObject **p1;
        JArray< ::org::hipparchus::CalculusFieldElement > a2((jobject) NULL);
        PyTypeObject **p2;
        ::org::hipparchus::ode::FieldODEStateAndDerivative result((jobject) NULL);

        if (!parseArgs(args, "K[K[K", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_))
        {
          OBJ_CALL(result = self->object.mapStateAndDerivative(a0, a1, a2));
          return ::org::hipparchus::ode::t_FieldODEStateAndDerivative::wrap_Object(result, self->parameters[0]);
        }

        PyErr_SetArgsError((PyObject *) self, "mapStateAndDerivative", args);
        return NULL;
      }
      static PyObject *t_FieldEquationsMapper_get__parameters_(t_FieldEquationsMapper *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }

      static PyObject *t_FieldEquationsMapper_get__numberOfEquations(t_FieldEquationsMapper *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getNumberOfEquations());
        return PyLong_FromLong((long) value);
      }

      static PyObject *t_FieldEquationsMapper_get__totalDimension(t_FieldEquationsMapper *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getTotalDimension());
        return PyLong_FromLong((long) value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/ode/nonstiff/AdaptiveStepsizeIntegrator.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "java/lang/Class.h"
#include "org/hipparchus/ode/ODEStateAndDerivative.h"
#include "org/hipparchus/exception/MathIllegalStateException.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace ode {
      namespace nonstiff {

        ::java::lang::Class *AdaptiveStepsizeIntegrator::class$ = NULL;
        jmethodID *AdaptiveStepsizeIntegrator::mids$ = NULL;
        bool AdaptiveStepsizeIntegrator::live$ = false;

        jclass AdaptiveStepsizeIntegrator::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/ode/nonstiff/AdaptiveStepsizeIntegrator");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_d6318b18b89a5370] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;DD[D[D)V");
            mids$[mid_init$_628c7a380d836cba] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;DDDD)V");
            mids$[mid_getMaxStep_9981f74b2d109da6] = env->getMethodID(cls, "getMaxStep", "()D");
            mids$[mid_getMinStep_9981f74b2d109da6] = env->getMethodID(cls, "getMinStep", "()D");
            mids$[mid_initializeStep_aad73fce3c1fe5f2] = env->getMethodID(cls, "initializeStep", "(ZI[DLorg/hipparchus/ode/ODEStateAndDerivative;)D");
            mids$[mid_setInitialStepSize_1ad26e8c8c0cd65b] = env->getMethodID(cls, "setInitialStepSize", "(D)V");
            mids$[mid_setStepSizeControl_e3195482263a60ce] = env->getMethodID(cls, "setStepSizeControl", "(DD[D[D)V");
            mids$[mid_setStepSizeControl_cd5724127cc72e96] = env->getMethodID(cls, "setStepSizeControl", "(DDDD)V");
            mids$[mid_getStepSizeHelper_4e1e04b2e648c6b6] = env->getMethodID(cls, "getStepSizeHelper", "()Lorg/hipparchus/ode/nonstiff/StepsizeHelper;");
            mids$[mid_sanityChecks_e6ba2f1f75657f6f] = env->getMethodID(cls, "sanityChecks", "(Lorg/hipparchus/ode/ODEState;D)V");
            mids$[mid_resetInternalState_ff7cb6c242604316] = env->getMethodID(cls, "resetInternalState", "()V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        AdaptiveStepsizeIntegrator::AdaptiveStepsizeIntegrator(const ::java::lang::String & a0, jdouble a1, jdouble a2, const JArray< jdouble > & a3, const JArray< jdouble > & a4) : ::org::hipparchus::ode::AbstractIntegrator(env->newObject(initializeClass, &mids$, mid_init$_d6318b18b89a5370, a0.this$, a1, a2, a3.this$, a4.this$)) {}

        AdaptiveStepsizeIntegrator::AdaptiveStepsizeIntegrator(const ::java::lang::String & a0, jdouble a1, jdouble a2, jdouble a3, jdouble a4) : ::org::hipparchus::ode::AbstractIntegrator(env->newObject(initializeClass, &mids$, mid_init$_628c7a380d836cba, a0.this$, a1, a2, a3, a4)) {}

        jdouble AdaptiveStepsizeIntegrator::getMaxStep() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getMaxStep_9981f74b2d109da6]);
        }

        jdouble AdaptiveStepsizeIntegrator::getMinStep() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getMinStep_9981f74b2d109da6]);
        }

        jdouble AdaptiveStepsizeIntegrator::initializeStep(jboolean a0, jint a1, const JArray< jdouble > & a2, const ::org::hipparchus::ode::ODEStateAndDerivative & a3) const
        {
          return env->callDoubleMethod(this$, mids$[mid_initializeStep_aad73fce3c1fe5f2], a0, a1, a2.this$, a3.this$);
        }

        void AdaptiveStepsizeIntegrator::setInitialStepSize(jdouble a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setInitialStepSize_1ad26e8c8c0cd65b], a0);
        }

        void AdaptiveStepsizeIntegrator::setStepSizeControl(jdouble a0, jdouble a1, const JArray< jdouble > & a2, const JArray< jdouble > & a3) const
        {
          env->callVoidMethod(this$, mids$[mid_setStepSizeControl_e3195482263a60ce], a0, a1, a2.this$, a3.this$);
        }

        void AdaptiveStepsizeIntegrator::setStepSizeControl(jdouble a0, jdouble a1, jdouble a2, jdouble a3) const
        {
          env->callVoidMethod(this$, mids$[mid_setStepSizeControl_cd5724127cc72e96], a0, a1, a2, a3);
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
        static PyObject *t_AdaptiveStepsizeIntegrator_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_AdaptiveStepsizeIntegrator_instance_(PyTypeObject *type, PyObject *arg);
        static int t_AdaptiveStepsizeIntegrator_init_(t_AdaptiveStepsizeIntegrator *self, PyObject *args, PyObject *kwds);
        static PyObject *t_AdaptiveStepsizeIntegrator_getMaxStep(t_AdaptiveStepsizeIntegrator *self);
        static PyObject *t_AdaptiveStepsizeIntegrator_getMinStep(t_AdaptiveStepsizeIntegrator *self);
        static PyObject *t_AdaptiveStepsizeIntegrator_initializeStep(t_AdaptiveStepsizeIntegrator *self, PyObject *args);
        static PyObject *t_AdaptiveStepsizeIntegrator_setInitialStepSize(t_AdaptiveStepsizeIntegrator *self, PyObject *arg);
        static PyObject *t_AdaptiveStepsizeIntegrator_setStepSizeControl(t_AdaptiveStepsizeIntegrator *self, PyObject *args);
        static int t_AdaptiveStepsizeIntegrator_set__initialStepSize(t_AdaptiveStepsizeIntegrator *self, PyObject *arg, void *data);
        static PyObject *t_AdaptiveStepsizeIntegrator_get__maxStep(t_AdaptiveStepsizeIntegrator *self, void *data);
        static PyObject *t_AdaptiveStepsizeIntegrator_get__minStep(t_AdaptiveStepsizeIntegrator *self, void *data);
        static PyGetSetDef t_AdaptiveStepsizeIntegrator__fields_[] = {
          DECLARE_SET_FIELD(t_AdaptiveStepsizeIntegrator, initialStepSize),
          DECLARE_GET_FIELD(t_AdaptiveStepsizeIntegrator, maxStep),
          DECLARE_GET_FIELD(t_AdaptiveStepsizeIntegrator, minStep),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_AdaptiveStepsizeIntegrator__methods_[] = {
          DECLARE_METHOD(t_AdaptiveStepsizeIntegrator, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AdaptiveStepsizeIntegrator, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AdaptiveStepsizeIntegrator, getMaxStep, METH_NOARGS),
          DECLARE_METHOD(t_AdaptiveStepsizeIntegrator, getMinStep, METH_NOARGS),
          DECLARE_METHOD(t_AdaptiveStepsizeIntegrator, initializeStep, METH_VARARGS),
          DECLARE_METHOD(t_AdaptiveStepsizeIntegrator, setInitialStepSize, METH_O),
          DECLARE_METHOD(t_AdaptiveStepsizeIntegrator, setStepSizeControl, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(AdaptiveStepsizeIntegrator)[] = {
          { Py_tp_methods, t_AdaptiveStepsizeIntegrator__methods_ },
          { Py_tp_init, (void *) t_AdaptiveStepsizeIntegrator_init_ },
          { Py_tp_getset, t_AdaptiveStepsizeIntegrator__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(AdaptiveStepsizeIntegrator)[] = {
          &PY_TYPE_DEF(::org::hipparchus::ode::AbstractIntegrator),
          NULL
        };

        DEFINE_TYPE(AdaptiveStepsizeIntegrator, t_AdaptiveStepsizeIntegrator, AdaptiveStepsizeIntegrator);

        void t_AdaptiveStepsizeIntegrator::install(PyObject *module)
        {
          installType(&PY_TYPE(AdaptiveStepsizeIntegrator), &PY_TYPE_DEF(AdaptiveStepsizeIntegrator), module, "AdaptiveStepsizeIntegrator", 0);
        }

        void t_AdaptiveStepsizeIntegrator::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(AdaptiveStepsizeIntegrator), "class_", make_descriptor(AdaptiveStepsizeIntegrator::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AdaptiveStepsizeIntegrator), "wrapfn_", make_descriptor(t_AdaptiveStepsizeIntegrator::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AdaptiveStepsizeIntegrator), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_AdaptiveStepsizeIntegrator_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, AdaptiveStepsizeIntegrator::initializeClass, 1)))
            return NULL;
          return t_AdaptiveStepsizeIntegrator::wrap_Object(AdaptiveStepsizeIntegrator(((t_AdaptiveStepsizeIntegrator *) arg)->object.this$));
        }
        static PyObject *t_AdaptiveStepsizeIntegrator_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, AdaptiveStepsizeIntegrator::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_AdaptiveStepsizeIntegrator_init_(t_AdaptiveStepsizeIntegrator *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 5:
            {
              ::java::lang::String a0((jobject) NULL);
              jdouble a1;
              jdouble a2;
              JArray< jdouble > a3((jobject) NULL);
              JArray< jdouble > a4((jobject) NULL);
              AdaptiveStepsizeIntegrator object((jobject) NULL);

              if (!parseArgs(args, "sDD[D[D", &a0, &a1, &a2, &a3, &a4))
              {
                INT_CALL(object = AdaptiveStepsizeIntegrator(a0, a1, a2, a3, a4));
                self->object = object;
                break;
              }
            }
            {
              ::java::lang::String a0((jobject) NULL);
              jdouble a1;
              jdouble a2;
              jdouble a3;
              jdouble a4;
              AdaptiveStepsizeIntegrator object((jobject) NULL);

              if (!parseArgs(args, "sDDDD", &a0, &a1, &a2, &a3, &a4))
              {
                INT_CALL(object = AdaptiveStepsizeIntegrator(a0, a1, a2, a3, a4));
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

        static PyObject *t_AdaptiveStepsizeIntegrator_getMaxStep(t_AdaptiveStepsizeIntegrator *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getMaxStep());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_AdaptiveStepsizeIntegrator_getMinStep(t_AdaptiveStepsizeIntegrator *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getMinStep());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_AdaptiveStepsizeIntegrator_initializeStep(t_AdaptiveStepsizeIntegrator *self, PyObject *args)
        {
          jboolean a0;
          jint a1;
          JArray< jdouble > a2((jobject) NULL);
          ::org::hipparchus::ode::ODEStateAndDerivative a3((jobject) NULL);
          jdouble result;

          if (!parseArgs(args, "ZI[Dk", ::org::hipparchus::ode::ODEStateAndDerivative::initializeClass, &a0, &a1, &a2, &a3))
          {
            OBJ_CALL(result = self->object.initializeStep(a0, a1, a2, a3));
            return PyFloat_FromDouble((double) result);
          }

          PyErr_SetArgsError((PyObject *) self, "initializeStep", args);
          return NULL;
        }

        static PyObject *t_AdaptiveStepsizeIntegrator_setInitialStepSize(t_AdaptiveStepsizeIntegrator *self, PyObject *arg)
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

        static PyObject *t_AdaptiveStepsizeIntegrator_setStepSizeControl(t_AdaptiveStepsizeIntegrator *self, PyObject *args)
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

        static int t_AdaptiveStepsizeIntegrator_set__initialStepSize(t_AdaptiveStepsizeIntegrator *self, PyObject *arg, void *data)
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

        static PyObject *t_AdaptiveStepsizeIntegrator_get__maxStep(t_AdaptiveStepsizeIntegrator *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getMaxStep());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_AdaptiveStepsizeIntegrator_get__minStep(t_AdaptiveStepsizeIntegrator *self, void *data)
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
#include "java/lang/Character.h"
#include "java/lang/CharSequence.h"
#include "java/io/Serializable.h"
#include "java/lang/Character.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "java/lang/Comparable.h"
#include "JArray.h"

namespace java {
  namespace lang {

    ::java::lang::Class *Character::class$ = NULL;
    jmethodID *Character::mids$ = NULL;
    bool Character::live$ = false;
    jint Character::BYTES = (jint) 0;
    jbyte Character::COMBINING_SPACING_MARK = (jbyte) 0;
    jbyte Character::CONNECTOR_PUNCTUATION = (jbyte) 0;
    jbyte Character::CONTROL = (jbyte) 0;
    jbyte Character::CURRENCY_SYMBOL = (jbyte) 0;
    jbyte Character::DASH_PUNCTUATION = (jbyte) 0;
    jbyte Character::DECIMAL_DIGIT_NUMBER = (jbyte) 0;
    jbyte Character::DIRECTIONALITY_ARABIC_NUMBER = (jbyte) 0;
    jbyte Character::DIRECTIONALITY_BOUNDARY_NEUTRAL = (jbyte) 0;
    jbyte Character::DIRECTIONALITY_COMMON_NUMBER_SEPARATOR = (jbyte) 0;
    jbyte Character::DIRECTIONALITY_EUROPEAN_NUMBER = (jbyte) 0;
    jbyte Character::DIRECTIONALITY_EUROPEAN_NUMBER_SEPARATOR = (jbyte) 0;
    jbyte Character::DIRECTIONALITY_EUROPEAN_NUMBER_TERMINATOR = (jbyte) 0;
    jbyte Character::DIRECTIONALITY_FIRST_STRONG_ISOLATE = (jbyte) 0;
    jbyte Character::DIRECTIONALITY_LEFT_TO_RIGHT = (jbyte) 0;
    jbyte Character::DIRECTIONALITY_LEFT_TO_RIGHT_EMBEDDING = (jbyte) 0;
    jbyte Character::DIRECTIONALITY_LEFT_TO_RIGHT_ISOLATE = (jbyte) 0;
    jbyte Character::DIRECTIONALITY_LEFT_TO_RIGHT_OVERRIDE = (jbyte) 0;
    jbyte Character::DIRECTIONALITY_NONSPACING_MARK = (jbyte) 0;
    jbyte Character::DIRECTIONALITY_OTHER_NEUTRALS = (jbyte) 0;
    jbyte Character::DIRECTIONALITY_PARAGRAPH_SEPARATOR = (jbyte) 0;
    jbyte Character::DIRECTIONALITY_POP_DIRECTIONAL_FORMAT = (jbyte) 0;
    jbyte Character::DIRECTIONALITY_POP_DIRECTIONAL_ISOLATE = (jbyte) 0;
    jbyte Character::DIRECTIONALITY_RIGHT_TO_LEFT = (jbyte) 0;
    jbyte Character::DIRECTIONALITY_RIGHT_TO_LEFT_ARABIC = (jbyte) 0;
    jbyte Character::DIRECTIONALITY_RIGHT_TO_LEFT_EMBEDDING = (jbyte) 0;
    jbyte Character::DIRECTIONALITY_RIGHT_TO_LEFT_ISOLATE = (jbyte) 0;
    jbyte Character::DIRECTIONALITY_RIGHT_TO_LEFT_OVERRIDE = (jbyte) 0;
    jbyte Character::DIRECTIONALITY_SEGMENT_SEPARATOR = (jbyte) 0;
    jbyte Character::DIRECTIONALITY_UNDEFINED = (jbyte) 0;
    jbyte Character::DIRECTIONALITY_WHITESPACE = (jbyte) 0;
    jbyte Character::ENCLOSING_MARK = (jbyte) 0;
    jbyte Character::END_PUNCTUATION = (jbyte) 0;
    jbyte Character::FINAL_QUOTE_PUNCTUATION = (jbyte) 0;
    jbyte Character::FORMAT = (jbyte) 0;
    jbyte Character::INITIAL_QUOTE_PUNCTUATION = (jbyte) 0;
    jbyte Character::LETTER_NUMBER = (jbyte) 0;
    jbyte Character::LINE_SEPARATOR = (jbyte) 0;
    jbyte Character::LOWERCASE_LETTER = (jbyte) 0;
    jbyte Character::MATH_SYMBOL = (jbyte) 0;
    jint Character::MAX_CODE_POINT = (jint) 0;
    jchar Character::MAX_HIGH_SURROGATE = (jchar) 0;
    jchar Character::MAX_LOW_SURROGATE = (jchar) 0;
    jint Character::MAX_RADIX = (jint) 0;
    jchar Character::MAX_SURROGATE = (jchar) 0;
    jchar Character::MAX_VALUE = (jchar) 0;
    jint Character::MIN_CODE_POINT = (jint) 0;
    jchar Character::MIN_HIGH_SURROGATE = (jchar) 0;
    jchar Character::MIN_LOW_SURROGATE = (jchar) 0;
    jint Character::MIN_RADIX = (jint) 0;
    jint Character::MIN_SUPPLEMENTARY_CODE_POINT = (jint) 0;
    jchar Character::MIN_SURROGATE = (jchar) 0;
    jchar Character::MIN_VALUE = (jchar) 0;
    jbyte Character::MODIFIER_LETTER = (jbyte) 0;
    jbyte Character::MODIFIER_SYMBOL = (jbyte) 0;
    jbyte Character::NON_SPACING_MARK = (jbyte) 0;
    jbyte Character::OTHER_LETTER = (jbyte) 0;
    jbyte Character::OTHER_NUMBER = (jbyte) 0;
    jbyte Character::OTHER_PUNCTUATION = (jbyte) 0;
    jbyte Character::OTHER_SYMBOL = (jbyte) 0;
    jbyte Character::PARAGRAPH_SEPARATOR = (jbyte) 0;
    jbyte Character::PRIVATE_USE = (jbyte) 0;
    jint Character::SIZE = (jint) 0;
    jbyte Character::SPACE_SEPARATOR = (jbyte) 0;
    jbyte Character::START_PUNCTUATION = (jbyte) 0;
    jbyte Character::SURROGATE = (jbyte) 0;
    jbyte Character::TITLECASE_LETTER = (jbyte) 0;
    ::java::lang::Class *Character::TYPE = NULL;
    jbyte Character::UNASSIGNED = (jbyte) 0;
    jbyte Character::UPPERCASE_LETTER = (jbyte) 0;

    jclass Character::initializeClass(bool getOnly)
    {
      if (getOnly)
        return (jclass) (live$ ? class$->this$ : NULL);
      if (class$ == NULL)
      {
        jclass cls = (jclass) env->findClass("java/lang/Character");

        mids$ = new jmethodID[max_mid];
        mids$[mid_init$_e8d07df586815a42] = env->getMethodID(cls, "<init>", "(C)V");
        mids$[mid_charCount_d938fc64e8c6df2d] = env->getStaticMethodID(cls, "charCount", "(I)I");
        mids$[mid_charValue_153df32fe8b51cb6] = env->getMethodID(cls, "charValue", "()C");
        mids$[mid_codePointAt_b02bbbd170d2fcab] = env->getStaticMethodID(cls, "codePointAt", "([CI)I");
        mids$[mid_codePointAt_476f0175409db7b1] = env->getStaticMethodID(cls, "codePointAt", "(Ljava/lang/CharSequence;I)I");
        mids$[mid_codePointAt_1f255a7d724a5165] = env->getStaticMethodID(cls, "codePointAt", "([CII)I");
        mids$[mid_codePointBefore_b02bbbd170d2fcab] = env->getStaticMethodID(cls, "codePointBefore", "([CI)I");
        mids$[mid_codePointBefore_476f0175409db7b1] = env->getStaticMethodID(cls, "codePointBefore", "(Ljava/lang/CharSequence;I)I");
        mids$[mid_codePointBefore_1f255a7d724a5165] = env->getStaticMethodID(cls, "codePointBefore", "([CII)I");
        mids$[mid_codePointCount_1f255a7d724a5165] = env->getStaticMethodID(cls, "codePointCount", "([CII)I");
        mids$[mid_codePointCount_9df436cfc781a40e] = env->getStaticMethodID(cls, "codePointCount", "(Ljava/lang/CharSequence;II)I");
        mids$[mid_codePointOf_84fe1f8fbbcb0268] = env->getStaticMethodID(cls, "codePointOf", "(Ljava/lang/String;)I");
        mids$[mid_compare_e8954842228aac27] = env->getStaticMethodID(cls, "compare", "(CC)I");
        mids$[mid_compareTo_17fa0763069cc198] = env->getMethodID(cls, "compareTo", "(Ljava/lang/Character;)I");
        mids$[mid_digit_4a20c422dd799f2c] = env->getStaticMethodID(cls, "digit", "(CI)I");
        mids$[mid_digit_91b9e1e34b2235d5] = env->getStaticMethodID(cls, "digit", "(II)I");
        mids$[mid_equals_72faff9b05f5ed5e] = env->getMethodID(cls, "equals", "(Ljava/lang/Object;)Z");
        mids$[mid_forDigit_1da7a9e502a29fc9] = env->getStaticMethodID(cls, "forDigit", "(II)C");
        mids$[mid_getDirectionality_65d0e7c7b6622f46] = env->getStaticMethodID(cls, "getDirectionality", "(C)B");
        mids$[mid_getDirectionality_18c5b8ad844d9d5c] = env->getStaticMethodID(cls, "getDirectionality", "(I)B");
        mids$[mid_getName_c81987d6b0e2977a] = env->getStaticMethodID(cls, "getName", "(I)Ljava/lang/String;");
        mids$[mid_getNumericValue_62edd80a8fb142bf] = env->getStaticMethodID(cls, "getNumericValue", "(C)I");
        mids$[mid_getNumericValue_d938fc64e8c6df2d] = env->getStaticMethodID(cls, "getNumericValue", "(I)I");
        mids$[mid_getType_62edd80a8fb142bf] = env->getStaticMethodID(cls, "getType", "(C)I");
        mids$[mid_getType_d938fc64e8c6df2d] = env->getStaticMethodID(cls, "getType", "(I)I");
        mids$[mid_hashCode_d6ab429752e7c267] = env->getMethodID(cls, "hashCode", "()I");
        mids$[mid_hashCode_62edd80a8fb142bf] = env->getStaticMethodID(cls, "hashCode", "(C)I");
        mids$[mid_highSurrogate_80723b5d4f0fdfa2] = env->getStaticMethodID(cls, "highSurrogate", "(I)C");
        mids$[mid_isAlphabetic_e24caac814db1df5] = env->getStaticMethodID(cls, "isAlphabetic", "(I)Z");
        mids$[mid_isBmpCodePoint_e24caac814db1df5] = env->getStaticMethodID(cls, "isBmpCodePoint", "(I)Z");
        mids$[mid_isDefined_6086956fa8cb2297] = env->getStaticMethodID(cls, "isDefined", "(C)Z");
        mids$[mid_isDefined_e24caac814db1df5] = env->getStaticMethodID(cls, "isDefined", "(I)Z");
        mids$[mid_isDigit_6086956fa8cb2297] = env->getStaticMethodID(cls, "isDigit", "(C)Z");
        mids$[mid_isDigit_e24caac814db1df5] = env->getStaticMethodID(cls, "isDigit", "(I)Z");
        mids$[mid_isHighSurrogate_6086956fa8cb2297] = env->getStaticMethodID(cls, "isHighSurrogate", "(C)Z");
        mids$[mid_isISOControl_6086956fa8cb2297] = env->getStaticMethodID(cls, "isISOControl", "(C)Z");
        mids$[mid_isISOControl_e24caac814db1df5] = env->getStaticMethodID(cls, "isISOControl", "(I)Z");
        mids$[mid_isIdentifierIgnorable_6086956fa8cb2297] = env->getStaticMethodID(cls, "isIdentifierIgnorable", "(C)Z");
        mids$[mid_isIdentifierIgnorable_e24caac814db1df5] = env->getStaticMethodID(cls, "isIdentifierIgnorable", "(I)Z");
        mids$[mid_isIdeographic_e24caac814db1df5] = env->getStaticMethodID(cls, "isIdeographic", "(I)Z");
        mids$[mid_isJavaIdentifierPart_6086956fa8cb2297] = env->getStaticMethodID(cls, "isJavaIdentifierPart", "(C)Z");
        mids$[mid_isJavaIdentifierPart_e24caac814db1df5] = env->getStaticMethodID(cls, "isJavaIdentifierPart", "(I)Z");
        mids$[mid_isJavaIdentifierStart_6086956fa8cb2297] = env->getStaticMethodID(cls, "isJavaIdentifierStart", "(C)Z");
        mids$[mid_isJavaIdentifierStart_e24caac814db1df5] = env->getStaticMethodID(cls, "isJavaIdentifierStart", "(I)Z");
        mids$[mid_isJavaLetter_6086956fa8cb2297] = env->getStaticMethodID(cls, "isJavaLetter", "(C)Z");
        mids$[mid_isJavaLetterOrDigit_6086956fa8cb2297] = env->getStaticMethodID(cls, "isJavaLetterOrDigit", "(C)Z");
        mids$[mid_isLetter_6086956fa8cb2297] = env->getStaticMethodID(cls, "isLetter", "(C)Z");
        mids$[mid_isLetter_e24caac814db1df5] = env->getStaticMethodID(cls, "isLetter", "(I)Z");
        mids$[mid_isLetterOrDigit_6086956fa8cb2297] = env->getStaticMethodID(cls, "isLetterOrDigit", "(C)Z");
        mids$[mid_isLetterOrDigit_e24caac814db1df5] = env->getStaticMethodID(cls, "isLetterOrDigit", "(I)Z");
        mids$[mid_isLowSurrogate_6086956fa8cb2297] = env->getStaticMethodID(cls, "isLowSurrogate", "(C)Z");
        mids$[mid_isLowerCase_6086956fa8cb2297] = env->getStaticMethodID(cls, "isLowerCase", "(C)Z");
        mids$[mid_isLowerCase_e24caac814db1df5] = env->getStaticMethodID(cls, "isLowerCase", "(I)Z");
        mids$[mid_isMirrored_6086956fa8cb2297] = env->getStaticMethodID(cls, "isMirrored", "(C)Z");
        mids$[mid_isMirrored_e24caac814db1df5] = env->getStaticMethodID(cls, "isMirrored", "(I)Z");
        mids$[mid_isSpace_6086956fa8cb2297] = env->getStaticMethodID(cls, "isSpace", "(C)Z");
        mids$[mid_isSpaceChar_6086956fa8cb2297] = env->getStaticMethodID(cls, "isSpaceChar", "(C)Z");
        mids$[mid_isSpaceChar_e24caac814db1df5] = env->getStaticMethodID(cls, "isSpaceChar", "(I)Z");
        mids$[mid_isSupplementaryCodePoint_e24caac814db1df5] = env->getStaticMethodID(cls, "isSupplementaryCodePoint", "(I)Z");
        mids$[mid_isSurrogate_6086956fa8cb2297] = env->getStaticMethodID(cls, "isSurrogate", "(C)Z");
        mids$[mid_isSurrogatePair_3f0bc9a17399b9f1] = env->getStaticMethodID(cls, "isSurrogatePair", "(CC)Z");
        mids$[mid_isTitleCase_6086956fa8cb2297] = env->getStaticMethodID(cls, "isTitleCase", "(C)Z");
        mids$[mid_isTitleCase_e24caac814db1df5] = env->getStaticMethodID(cls, "isTitleCase", "(I)Z");
        mids$[mid_isUnicodeIdentifierPart_6086956fa8cb2297] = env->getStaticMethodID(cls, "isUnicodeIdentifierPart", "(C)Z");
        mids$[mid_isUnicodeIdentifierPart_e24caac814db1df5] = env->getStaticMethodID(cls, "isUnicodeIdentifierPart", "(I)Z");
        mids$[mid_isUnicodeIdentifierStart_6086956fa8cb2297] = env->getStaticMethodID(cls, "isUnicodeIdentifierStart", "(C)Z");
        mids$[mid_isUnicodeIdentifierStart_e24caac814db1df5] = env->getStaticMethodID(cls, "isUnicodeIdentifierStart", "(I)Z");
        mids$[mid_isUpperCase_6086956fa8cb2297] = env->getStaticMethodID(cls, "isUpperCase", "(C)Z");
        mids$[mid_isUpperCase_e24caac814db1df5] = env->getStaticMethodID(cls, "isUpperCase", "(I)Z");
        mids$[mid_isValidCodePoint_e24caac814db1df5] = env->getStaticMethodID(cls, "isValidCodePoint", "(I)Z");
        mids$[mid_isWhitespace_6086956fa8cb2297] = env->getStaticMethodID(cls, "isWhitespace", "(C)Z");
        mids$[mid_isWhitespace_e24caac814db1df5] = env->getStaticMethodID(cls, "isWhitespace", "(I)Z");
        mids$[mid_lowSurrogate_80723b5d4f0fdfa2] = env->getStaticMethodID(cls, "lowSurrogate", "(I)C");
        mids$[mid_offsetByCodePoints_9df436cfc781a40e] = env->getStaticMethodID(cls, "offsetByCodePoints", "(Ljava/lang/CharSequence;II)I");
        mids$[mid_offsetByCodePoints_ed2b2ed2981f0162] = env->getStaticMethodID(cls, "offsetByCodePoints", "([CIIII)I");
        mids$[mid_reverseBytes_fbf0bc309b9508c6] = env->getStaticMethodID(cls, "reverseBytes", "(C)C");
        mids$[mid_toChars_c8887dd513ec1d3b] = env->getStaticMethodID(cls, "toChars", "(I)[C");
        mids$[mid_toChars_04ee0426a82aa3d5] = env->getStaticMethodID(cls, "toChars", "(I[CI)I");
        mids$[mid_toCodePoint_e8954842228aac27] = env->getStaticMethodID(cls, "toCodePoint", "(CC)I");
        mids$[mid_toLowerCase_fbf0bc309b9508c6] = env->getStaticMethodID(cls, "toLowerCase", "(C)C");
        mids$[mid_toLowerCase_d938fc64e8c6df2d] = env->getStaticMethodID(cls, "toLowerCase", "(I)I");
        mids$[mid_toString_d2c8eb4129821f0e] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");
        mids$[mid_toString_53bd6cb431dc0332] = env->getStaticMethodID(cls, "toString", "(C)Ljava/lang/String;");
        mids$[mid_toString_c81987d6b0e2977a] = env->getStaticMethodID(cls, "toString", "(I)Ljava/lang/String;");
        mids$[mid_toTitleCase_fbf0bc309b9508c6] = env->getStaticMethodID(cls, "toTitleCase", "(C)C");
        mids$[mid_toTitleCase_d938fc64e8c6df2d] = env->getStaticMethodID(cls, "toTitleCase", "(I)I");
        mids$[mid_toUpperCase_fbf0bc309b9508c6] = env->getStaticMethodID(cls, "toUpperCase", "(C)C");
        mids$[mid_toUpperCase_d938fc64e8c6df2d] = env->getStaticMethodID(cls, "toUpperCase", "(I)I");
        mids$[mid_valueOf_190c77a13da8b632] = env->getStaticMethodID(cls, "valueOf", "(C)Ljava/lang/Character;");

        class$ = new ::java::lang::Class(cls);
        cls = (jclass) class$->this$;

        BYTES = env->getStaticIntField(cls, "BYTES");
        COMBINING_SPACING_MARK = env->getStaticByteField(cls, "COMBINING_SPACING_MARK");
        CONNECTOR_PUNCTUATION = env->getStaticByteField(cls, "CONNECTOR_PUNCTUATION");
        CONTROL = env->getStaticByteField(cls, "CONTROL");
        CURRENCY_SYMBOL = env->getStaticByteField(cls, "CURRENCY_SYMBOL");
        DASH_PUNCTUATION = env->getStaticByteField(cls, "DASH_PUNCTUATION");
        DECIMAL_DIGIT_NUMBER = env->getStaticByteField(cls, "DECIMAL_DIGIT_NUMBER");
        DIRECTIONALITY_ARABIC_NUMBER = env->getStaticByteField(cls, "DIRECTIONALITY_ARABIC_NUMBER");
        DIRECTIONALITY_BOUNDARY_NEUTRAL = env->getStaticByteField(cls, "DIRECTIONALITY_BOUNDARY_NEUTRAL");
        DIRECTIONALITY_COMMON_NUMBER_SEPARATOR = env->getStaticByteField(cls, "DIRECTIONALITY_COMMON_NUMBER_SEPARATOR");
        DIRECTIONALITY_EUROPEAN_NUMBER = env->getStaticByteField(cls, "DIRECTIONALITY_EUROPEAN_NUMBER");
        DIRECTIONALITY_EUROPEAN_NUMBER_SEPARATOR = env->getStaticByteField(cls, "DIRECTIONALITY_EUROPEAN_NUMBER_SEPARATOR");
        DIRECTIONALITY_EUROPEAN_NUMBER_TERMINATOR = env->getStaticByteField(cls, "DIRECTIONALITY_EUROPEAN_NUMBER_TERMINATOR");
        DIRECTIONALITY_FIRST_STRONG_ISOLATE = env->getStaticByteField(cls, "DIRECTIONALITY_FIRST_STRONG_ISOLATE");
        DIRECTIONALITY_LEFT_TO_RIGHT = env->getStaticByteField(cls, "DIRECTIONALITY_LEFT_TO_RIGHT");
        DIRECTIONALITY_LEFT_TO_RIGHT_EMBEDDING = env->getStaticByteField(cls, "DIRECTIONALITY_LEFT_TO_RIGHT_EMBEDDING");
        DIRECTIONALITY_LEFT_TO_RIGHT_ISOLATE = env->getStaticByteField(cls, "DIRECTIONALITY_LEFT_TO_RIGHT_ISOLATE");
        DIRECTIONALITY_LEFT_TO_RIGHT_OVERRIDE = env->getStaticByteField(cls, "DIRECTIONALITY_LEFT_TO_RIGHT_OVERRIDE");
        DIRECTIONALITY_NONSPACING_MARK = env->getStaticByteField(cls, "DIRECTIONALITY_NONSPACING_MARK");
        DIRECTIONALITY_OTHER_NEUTRALS = env->getStaticByteField(cls, "DIRECTIONALITY_OTHER_NEUTRALS");
        DIRECTIONALITY_PARAGRAPH_SEPARATOR = env->getStaticByteField(cls, "DIRECTIONALITY_PARAGRAPH_SEPARATOR");
        DIRECTIONALITY_POP_DIRECTIONAL_FORMAT = env->getStaticByteField(cls, "DIRECTIONALITY_POP_DIRECTIONAL_FORMAT");
        DIRECTIONALITY_POP_DIRECTIONAL_ISOLATE = env->getStaticByteField(cls, "DIRECTIONALITY_POP_DIRECTIONAL_ISOLATE");
        DIRECTIONALITY_RIGHT_TO_LEFT = env->getStaticByteField(cls, "DIRECTIONALITY_RIGHT_TO_LEFT");
        DIRECTIONALITY_RIGHT_TO_LEFT_ARABIC = env->getStaticByteField(cls, "DIRECTIONALITY_RIGHT_TO_LEFT_ARABIC");
        DIRECTIONALITY_RIGHT_TO_LEFT_EMBEDDING = env->getStaticByteField(cls, "DIRECTIONALITY_RIGHT_TO_LEFT_EMBEDDING");
        DIRECTIONALITY_RIGHT_TO_LEFT_ISOLATE = env->getStaticByteField(cls, "DIRECTIONALITY_RIGHT_TO_LEFT_ISOLATE");
        DIRECTIONALITY_RIGHT_TO_LEFT_OVERRIDE = env->getStaticByteField(cls, "DIRECTIONALITY_RIGHT_TO_LEFT_OVERRIDE");
        DIRECTIONALITY_SEGMENT_SEPARATOR = env->getStaticByteField(cls, "DIRECTIONALITY_SEGMENT_SEPARATOR");
        DIRECTIONALITY_UNDEFINED = env->getStaticByteField(cls, "DIRECTIONALITY_UNDEFINED");
        DIRECTIONALITY_WHITESPACE = env->getStaticByteField(cls, "DIRECTIONALITY_WHITESPACE");
        ENCLOSING_MARK = env->getStaticByteField(cls, "ENCLOSING_MARK");
        END_PUNCTUATION = env->getStaticByteField(cls, "END_PUNCTUATION");
        FINAL_QUOTE_PUNCTUATION = env->getStaticByteField(cls, "FINAL_QUOTE_PUNCTUATION");
        FORMAT = env->getStaticByteField(cls, "FORMAT");
        INITIAL_QUOTE_PUNCTUATION = env->getStaticByteField(cls, "INITIAL_QUOTE_PUNCTUATION");
        LETTER_NUMBER = env->getStaticByteField(cls, "LETTER_NUMBER");
        LINE_SEPARATOR = env->getStaticByteField(cls, "LINE_SEPARATOR");
        LOWERCASE_LETTER = env->getStaticByteField(cls, "LOWERCASE_LETTER");
        MATH_SYMBOL = env->getStaticByteField(cls, "MATH_SYMBOL");
        MAX_CODE_POINT = env->getStaticIntField(cls, "MAX_CODE_POINT");
        MAX_HIGH_SURROGATE = env->getStaticCharField(cls, "MAX_HIGH_SURROGATE");
        MAX_LOW_SURROGATE = env->getStaticCharField(cls, "MAX_LOW_SURROGATE");
        MAX_RADIX = env->getStaticIntField(cls, "MAX_RADIX");
        MAX_SURROGATE = env->getStaticCharField(cls, "MAX_SURROGATE");
        MAX_VALUE = env->getStaticCharField(cls, "MAX_VALUE");
        MIN_CODE_POINT = env->getStaticIntField(cls, "MIN_CODE_POINT");
        MIN_HIGH_SURROGATE = env->getStaticCharField(cls, "MIN_HIGH_SURROGATE");
        MIN_LOW_SURROGATE = env->getStaticCharField(cls, "MIN_LOW_SURROGATE");
        MIN_RADIX = env->getStaticIntField(cls, "MIN_RADIX");
        MIN_SUPPLEMENTARY_CODE_POINT = env->getStaticIntField(cls, "MIN_SUPPLEMENTARY_CODE_POINT");
        MIN_SURROGATE = env->getStaticCharField(cls, "MIN_SURROGATE");
        MIN_VALUE = env->getStaticCharField(cls, "MIN_VALUE");
        MODIFIER_LETTER = env->getStaticByteField(cls, "MODIFIER_LETTER");
        MODIFIER_SYMBOL = env->getStaticByteField(cls, "MODIFIER_SYMBOL");
        NON_SPACING_MARK = env->getStaticByteField(cls, "NON_SPACING_MARK");
        OTHER_LETTER = env->getStaticByteField(cls, "OTHER_LETTER");
        OTHER_NUMBER = env->getStaticByteField(cls, "OTHER_NUMBER");
        OTHER_PUNCTUATION = env->getStaticByteField(cls, "OTHER_PUNCTUATION");
        OTHER_SYMBOL = env->getStaticByteField(cls, "OTHER_SYMBOL");
        PARAGRAPH_SEPARATOR = env->getStaticByteField(cls, "PARAGRAPH_SEPARATOR");
        PRIVATE_USE = env->getStaticByteField(cls, "PRIVATE_USE");
        SIZE = env->getStaticIntField(cls, "SIZE");
        SPACE_SEPARATOR = env->getStaticByteField(cls, "SPACE_SEPARATOR");
        START_PUNCTUATION = env->getStaticByteField(cls, "START_PUNCTUATION");
        SURROGATE = env->getStaticByteField(cls, "SURROGATE");
        TITLECASE_LETTER = env->getStaticByteField(cls, "TITLECASE_LETTER");
        TYPE = new ::java::lang::Class(env->getStaticObjectField(cls, "TYPE", "Ljava/lang/Class;"));
        UNASSIGNED = env->getStaticByteField(cls, "UNASSIGNED");
        UPPERCASE_LETTER = env->getStaticByteField(cls, "UPPERCASE_LETTER");
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    Character::Character(jchar a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_e8d07df586815a42, a0)) {}

    jint Character::charCount(jint a0)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_charCount_d938fc64e8c6df2d], a0);
    }

    jchar Character::charValue() const
    {
      return env->callCharMethod(this$, mids$[mid_charValue_153df32fe8b51cb6]);
    }

    jint Character::codePointAt(const JArray< jchar > & a0, jint a1)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_codePointAt_b02bbbd170d2fcab], a0.this$, a1);
    }

    jint Character::codePointAt(const ::java::lang::CharSequence & a0, jint a1)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_codePointAt_476f0175409db7b1], a0.this$, a1);
    }

    jint Character::codePointAt(const JArray< jchar > & a0, jint a1, jint a2)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_codePointAt_1f255a7d724a5165], a0.this$, a1, a2);
    }

    jint Character::codePointBefore(const JArray< jchar > & a0, jint a1)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_codePointBefore_b02bbbd170d2fcab], a0.this$, a1);
    }

    jint Character::codePointBefore(const ::java::lang::CharSequence & a0, jint a1)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_codePointBefore_476f0175409db7b1], a0.this$, a1);
    }

    jint Character::codePointBefore(const JArray< jchar > & a0, jint a1, jint a2)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_codePointBefore_1f255a7d724a5165], a0.this$, a1, a2);
    }

    jint Character::codePointCount(const JArray< jchar > & a0, jint a1, jint a2)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_codePointCount_1f255a7d724a5165], a0.this$, a1, a2);
    }

    jint Character::codePointCount(const ::java::lang::CharSequence & a0, jint a1, jint a2)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_codePointCount_9df436cfc781a40e], a0.this$, a1, a2);
    }

    jint Character::codePointOf(const ::java::lang::String & a0)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_codePointOf_84fe1f8fbbcb0268], a0.this$);
    }

    jint Character::compare(jchar a0, jchar a1)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_compare_e8954842228aac27], a0, a1);
    }

    jint Character::compareTo(const Character & a0) const
    {
      return env->callIntMethod(this$, mids$[mid_compareTo_17fa0763069cc198], a0.this$);
    }

    jint Character::digit(jchar a0, jint a1)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_digit_4a20c422dd799f2c], a0, a1);
    }

    jint Character::digit(jint a0, jint a1)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_digit_91b9e1e34b2235d5], a0, a1);
    }

    jboolean Character::equals(const ::java::lang::Object & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_equals_72faff9b05f5ed5e], a0.this$);
    }

    jchar Character::forDigit(jint a0, jint a1)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticCharMethod(cls, mids$[mid_forDigit_1da7a9e502a29fc9], a0, a1);
    }

    jbyte Character::getDirectionality(jchar a0)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticByteMethod(cls, mids$[mid_getDirectionality_65d0e7c7b6622f46], a0);
    }

    jbyte Character::getDirectionality(jint a0)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticByteMethod(cls, mids$[mid_getDirectionality_18c5b8ad844d9d5c], a0);
    }

    ::java::lang::String Character::getName(jint a0)
    {
      jclass cls = env->getClass(initializeClass);
      return ::java::lang::String(env->callStaticObjectMethod(cls, mids$[mid_getName_c81987d6b0e2977a], a0));
    }

    jint Character::getNumericValue(jchar a0)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_getNumericValue_62edd80a8fb142bf], a0);
    }

    jint Character::getNumericValue(jint a0)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_getNumericValue_d938fc64e8c6df2d], a0);
    }

    jint Character::getType(jchar a0)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_getType_62edd80a8fb142bf], a0);
    }

    jint Character::getType(jint a0)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_getType_d938fc64e8c6df2d], a0);
    }

    jint Character::hashCode() const
    {
      return env->callIntMethod(this$, mids$[mid_hashCode_d6ab429752e7c267]);
    }

    jint Character::hashCode(jchar a0)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_hashCode_62edd80a8fb142bf], a0);
    }

    jchar Character::highSurrogate(jint a0)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticCharMethod(cls, mids$[mid_highSurrogate_80723b5d4f0fdfa2], a0);
    }

    jboolean Character::isAlphabetic(jint a0)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticBooleanMethod(cls, mids$[mid_isAlphabetic_e24caac814db1df5], a0);
    }

    jboolean Character::isBmpCodePoint(jint a0)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticBooleanMethod(cls, mids$[mid_isBmpCodePoint_e24caac814db1df5], a0);
    }

    jboolean Character::isDefined(jchar a0)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticBooleanMethod(cls, mids$[mid_isDefined_6086956fa8cb2297], a0);
    }

    jboolean Character::isDefined(jint a0)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticBooleanMethod(cls, mids$[mid_isDefined_e24caac814db1df5], a0);
    }

    jboolean Character::isDigit(jchar a0)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticBooleanMethod(cls, mids$[mid_isDigit_6086956fa8cb2297], a0);
    }

    jboolean Character::isDigit(jint a0)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticBooleanMethod(cls, mids$[mid_isDigit_e24caac814db1df5], a0);
    }

    jboolean Character::isHighSurrogate(jchar a0)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticBooleanMethod(cls, mids$[mid_isHighSurrogate_6086956fa8cb2297], a0);
    }

    jboolean Character::isISOControl(jchar a0)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticBooleanMethod(cls, mids$[mid_isISOControl_6086956fa8cb2297], a0);
    }

    jboolean Character::isISOControl(jint a0)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticBooleanMethod(cls, mids$[mid_isISOControl_e24caac814db1df5], a0);
    }

    jboolean Character::isIdentifierIgnorable(jchar a0)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticBooleanMethod(cls, mids$[mid_isIdentifierIgnorable_6086956fa8cb2297], a0);
    }

    jboolean Character::isIdentifierIgnorable(jint a0)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticBooleanMethod(cls, mids$[mid_isIdentifierIgnorable_e24caac814db1df5], a0);
    }

    jboolean Character::isIdeographic(jint a0)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticBooleanMethod(cls, mids$[mid_isIdeographic_e24caac814db1df5], a0);
    }

    jboolean Character::isJavaIdentifierPart(jchar a0)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticBooleanMethod(cls, mids$[mid_isJavaIdentifierPart_6086956fa8cb2297], a0);
    }

    jboolean Character::isJavaIdentifierPart(jint a0)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticBooleanMethod(cls, mids$[mid_isJavaIdentifierPart_e24caac814db1df5], a0);
    }

    jboolean Character::isJavaIdentifierStart(jchar a0)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticBooleanMethod(cls, mids$[mid_isJavaIdentifierStart_6086956fa8cb2297], a0);
    }

    jboolean Character::isJavaIdentifierStart(jint a0)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticBooleanMethod(cls, mids$[mid_isJavaIdentifierStart_e24caac814db1df5], a0);
    }

    jboolean Character::isJavaLetter(jchar a0)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticBooleanMethod(cls, mids$[mid_isJavaLetter_6086956fa8cb2297], a0);
    }

    jboolean Character::isJavaLetterOrDigit(jchar a0)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticBooleanMethod(cls, mids$[mid_isJavaLetterOrDigit_6086956fa8cb2297], a0);
    }

    jboolean Character::isLetter(jchar a0)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticBooleanMethod(cls, mids$[mid_isLetter_6086956fa8cb2297], a0);
    }

    jboolean Character::isLetter(jint a0)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticBooleanMethod(cls, mids$[mid_isLetter_e24caac814db1df5], a0);
    }

    jboolean Character::isLetterOrDigit(jchar a0)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticBooleanMethod(cls, mids$[mid_isLetterOrDigit_6086956fa8cb2297], a0);
    }

    jboolean Character::isLetterOrDigit(jint a0)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticBooleanMethod(cls, mids$[mid_isLetterOrDigit_e24caac814db1df5], a0);
    }

    jboolean Character::isLowSurrogate(jchar a0)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticBooleanMethod(cls, mids$[mid_isLowSurrogate_6086956fa8cb2297], a0);
    }

    jboolean Character::isLowerCase(jchar a0)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticBooleanMethod(cls, mids$[mid_isLowerCase_6086956fa8cb2297], a0);
    }

    jboolean Character::isLowerCase(jint a0)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticBooleanMethod(cls, mids$[mid_isLowerCase_e24caac814db1df5], a0);
    }

    jboolean Character::isMirrored(jchar a0)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticBooleanMethod(cls, mids$[mid_isMirrored_6086956fa8cb2297], a0);
    }

    jboolean Character::isMirrored(jint a0)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticBooleanMethod(cls, mids$[mid_isMirrored_e24caac814db1df5], a0);
    }

    jboolean Character::isSpace(jchar a0)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticBooleanMethod(cls, mids$[mid_isSpace_6086956fa8cb2297], a0);
    }

    jboolean Character::isSpaceChar(jchar a0)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticBooleanMethod(cls, mids$[mid_isSpaceChar_6086956fa8cb2297], a0);
    }

    jboolean Character::isSpaceChar(jint a0)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticBooleanMethod(cls, mids$[mid_isSpaceChar_e24caac814db1df5], a0);
    }

    jboolean Character::isSupplementaryCodePoint(jint a0)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticBooleanMethod(cls, mids$[mid_isSupplementaryCodePoint_e24caac814db1df5], a0);
    }

    jboolean Character::isSurrogate(jchar a0)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticBooleanMethod(cls, mids$[mid_isSurrogate_6086956fa8cb2297], a0);
    }

    jboolean Character::isSurrogatePair(jchar a0, jchar a1)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticBooleanMethod(cls, mids$[mid_isSurrogatePair_3f0bc9a17399b9f1], a0, a1);
    }

    jboolean Character::isTitleCase(jchar a0)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticBooleanMethod(cls, mids$[mid_isTitleCase_6086956fa8cb2297], a0);
    }

    jboolean Character::isTitleCase(jint a0)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticBooleanMethod(cls, mids$[mid_isTitleCase_e24caac814db1df5], a0);
    }

    jboolean Character::isUnicodeIdentifierPart(jchar a0)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticBooleanMethod(cls, mids$[mid_isUnicodeIdentifierPart_6086956fa8cb2297], a0);
    }

    jboolean Character::isUnicodeIdentifierPart(jint a0)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticBooleanMethod(cls, mids$[mid_isUnicodeIdentifierPart_e24caac814db1df5], a0);
    }

    jboolean Character::isUnicodeIdentifierStart(jchar a0)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticBooleanMethod(cls, mids$[mid_isUnicodeIdentifierStart_6086956fa8cb2297], a0);
    }

    jboolean Character::isUnicodeIdentifierStart(jint a0)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticBooleanMethod(cls, mids$[mid_isUnicodeIdentifierStart_e24caac814db1df5], a0);
    }

    jboolean Character::isUpperCase(jchar a0)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticBooleanMethod(cls, mids$[mid_isUpperCase_6086956fa8cb2297], a0);
    }

    jboolean Character::isUpperCase(jint a0)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticBooleanMethod(cls, mids$[mid_isUpperCase_e24caac814db1df5], a0);
    }

    jboolean Character::isValidCodePoint(jint a0)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticBooleanMethod(cls, mids$[mid_isValidCodePoint_e24caac814db1df5], a0);
    }

    jboolean Character::isWhitespace(jchar a0)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticBooleanMethod(cls, mids$[mid_isWhitespace_6086956fa8cb2297], a0);
    }

    jboolean Character::isWhitespace(jint a0)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticBooleanMethod(cls, mids$[mid_isWhitespace_e24caac814db1df5], a0);
    }

    jchar Character::lowSurrogate(jint a0)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticCharMethod(cls, mids$[mid_lowSurrogate_80723b5d4f0fdfa2], a0);
    }

    jint Character::offsetByCodePoints(const ::java::lang::CharSequence & a0, jint a1, jint a2)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_offsetByCodePoints_9df436cfc781a40e], a0.this$, a1, a2);
    }

    jint Character::offsetByCodePoints(const JArray< jchar > & a0, jint a1, jint a2, jint a3, jint a4)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_offsetByCodePoints_ed2b2ed2981f0162], a0.this$, a1, a2, a3, a4);
    }

    jchar Character::reverseBytes(jchar a0)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticCharMethod(cls, mids$[mid_reverseBytes_fbf0bc309b9508c6], a0);
    }

    JArray< jchar > Character::toChars(jint a0)
    {
      jclass cls = env->getClass(initializeClass);
      return JArray< jchar >(env->callStaticObjectMethod(cls, mids$[mid_toChars_c8887dd513ec1d3b], a0));
    }

    jint Character::toChars(jint a0, const JArray< jchar > & a1, jint a2)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_toChars_04ee0426a82aa3d5], a0, a1.this$, a2);
    }

    jint Character::toCodePoint(jchar a0, jchar a1)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_toCodePoint_e8954842228aac27], a0, a1);
    }

    jchar Character::toLowerCase(jchar a0)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticCharMethod(cls, mids$[mid_toLowerCase_fbf0bc309b9508c6], a0);
    }

    jint Character::toLowerCase(jint a0)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_toLowerCase_d938fc64e8c6df2d], a0);
    }

    ::java::lang::String Character::toString() const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_d2c8eb4129821f0e]));
    }

    ::java::lang::String Character::toString(jchar a0)
    {
      jclass cls = env->getClass(initializeClass);
      return ::java::lang::String(env->callStaticObjectMethod(cls, mids$[mid_toString_53bd6cb431dc0332], a0));
    }

    ::java::lang::String Character::toString(jint a0)
    {
      jclass cls = env->getClass(initializeClass);
      return ::java::lang::String(env->callStaticObjectMethod(cls, mids$[mid_toString_c81987d6b0e2977a], a0));
    }

    jchar Character::toTitleCase(jchar a0)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticCharMethod(cls, mids$[mid_toTitleCase_fbf0bc309b9508c6], a0);
    }

    jint Character::toTitleCase(jint a0)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_toTitleCase_d938fc64e8c6df2d], a0);
    }

    jchar Character::toUpperCase(jchar a0)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticCharMethod(cls, mids$[mid_toUpperCase_fbf0bc309b9508c6], a0);
    }

    jint Character::toUpperCase(jint a0)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_toUpperCase_d938fc64e8c6df2d], a0);
    }

    Character Character::valueOf(jchar a0)
    {
      jclass cls = env->getClass(initializeClass);
      return Character(env->callStaticObjectMethod(cls, mids$[mid_valueOf_190c77a13da8b632], a0));
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace java {
  namespace lang {
    static PyObject *t_Character_cast_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Character_instance_(PyTypeObject *type, PyObject *arg);
    static int t_Character_init_(t_Character *self, PyObject *args, PyObject *kwds);
    static PyObject *t_Character_charCount(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Character_charValue(t_Character *self);
    static PyObject *t_Character_codePointAt(PyTypeObject *type, PyObject *args);
    static PyObject *t_Character_codePointBefore(PyTypeObject *type, PyObject *args);
    static PyObject *t_Character_codePointCount(PyTypeObject *type, PyObject *args);
    static PyObject *t_Character_codePointOf(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Character_compare(PyTypeObject *type, PyObject *args);
    static PyObject *t_Character_compareTo(t_Character *self, PyObject *arg);
    static PyObject *t_Character_digit(PyTypeObject *type, PyObject *args);
    static PyObject *t_Character_equals(t_Character *self, PyObject *args);
    static PyObject *t_Character_forDigit(PyTypeObject *type, PyObject *args);
    static PyObject *t_Character_getDirectionality(PyTypeObject *type, PyObject *args);
    static PyObject *t_Character_getName(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Character_getNumericValue(PyTypeObject *type, PyObject *args);
    static PyObject *t_Character_getType(PyTypeObject *type, PyObject *args);
    static PyObject *t_Character_hashCode(t_Character *self, PyObject *args);
    static PyObject *t_Character_hashCode_(PyTypeObject *type, PyObject *args);
    static PyObject *t_Character_highSurrogate(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Character_isAlphabetic(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Character_isBmpCodePoint(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Character_isDefined(PyTypeObject *type, PyObject *args);
    static PyObject *t_Character_isDigit(PyTypeObject *type, PyObject *args);
    static PyObject *t_Character_isHighSurrogate(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Character_isISOControl(PyTypeObject *type, PyObject *args);
    static PyObject *t_Character_isIdentifierIgnorable(PyTypeObject *type, PyObject *args);
    static PyObject *t_Character_isIdeographic(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Character_isJavaIdentifierPart(PyTypeObject *type, PyObject *args);
    static PyObject *t_Character_isJavaIdentifierStart(PyTypeObject *type, PyObject *args);
    static PyObject *t_Character_isJavaLetter(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Character_isJavaLetterOrDigit(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Character_isLetter(PyTypeObject *type, PyObject *args);
    static PyObject *t_Character_isLetterOrDigit(PyTypeObject *type, PyObject *args);
    static PyObject *t_Character_isLowSurrogate(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Character_isLowerCase(PyTypeObject *type, PyObject *args);
    static PyObject *t_Character_isMirrored(PyTypeObject *type, PyObject *args);
    static PyObject *t_Character_isSpace(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Character_isSpaceChar(PyTypeObject *type, PyObject *args);
    static PyObject *t_Character_isSupplementaryCodePoint(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Character_isSurrogate(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Character_isSurrogatePair(PyTypeObject *type, PyObject *args);
    static PyObject *t_Character_isTitleCase(PyTypeObject *type, PyObject *args);
    static PyObject *t_Character_isUnicodeIdentifierPart(PyTypeObject *type, PyObject *args);
    static PyObject *t_Character_isUnicodeIdentifierStart(PyTypeObject *type, PyObject *args);
    static PyObject *t_Character_isUpperCase(PyTypeObject *type, PyObject *args);
    static PyObject *t_Character_isValidCodePoint(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Character_isWhitespace(PyTypeObject *type, PyObject *args);
    static PyObject *t_Character_lowSurrogate(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Character_offsetByCodePoints(PyTypeObject *type, PyObject *args);
    static PyObject *t_Character_reverseBytes(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Character_toChars(PyTypeObject *type, PyObject *args);
    static PyObject *t_Character_toCodePoint(PyTypeObject *type, PyObject *args);
    static PyObject *t_Character_toLowerCase(PyTypeObject *type, PyObject *args);
    static PyObject *t_Character_toString(t_Character *self, PyObject *args);
    static PyObject *t_Character_toString_(PyTypeObject *type, PyObject *args);
    static PyObject *t_Character_toTitleCase(PyTypeObject *type, PyObject *args);
    static PyObject *t_Character_toUpperCase(PyTypeObject *type, PyObject *args);
    static PyObject *t_Character_valueOf(PyTypeObject *type, PyObject *arg);

    static PyMethodDef t_Character__methods_[] = {
      DECLARE_METHOD(t_Character, cast_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Character, instance_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Character, charCount, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Character, charValue, METH_NOARGS),
      DECLARE_METHOD(t_Character, codePointAt, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_Character, codePointBefore, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_Character, codePointCount, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_Character, codePointOf, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Character, compare, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_Character, compareTo, METH_O),
      DECLARE_METHOD(t_Character, digit, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_Character, equals, METH_VARARGS),
      DECLARE_METHOD(t_Character, forDigit, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_Character, getDirectionality, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_Character, getName, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Character, getNumericValue, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_Character, getType, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_Character, hashCode, METH_VARARGS),
      DECLARE_METHOD(t_Character, hashCode_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Character, highSurrogate, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Character, isAlphabetic, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Character, isBmpCodePoint, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Character, isDefined, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_Character, isDigit, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_Character, isHighSurrogate, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Character, isISOControl, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_Character, isIdentifierIgnorable, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_Character, isIdeographic, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Character, isJavaIdentifierPart, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_Character, isJavaIdentifierStart, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_Character, isJavaLetter, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Character, isJavaLetterOrDigit, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Character, isLetter, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_Character, isLetterOrDigit, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_Character, isLowSurrogate, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Character, isLowerCase, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_Character, isMirrored, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_Character, isSpace, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Character, isSpaceChar, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_Character, isSupplementaryCodePoint, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Character, isSurrogate, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Character, isSurrogatePair, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_Character, isTitleCase, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_Character, isUnicodeIdentifierPart, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_Character, isUnicodeIdentifierStart, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_Character, isUpperCase, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_Character, isValidCodePoint, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Character, isWhitespace, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_Character, lowSurrogate, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Character, offsetByCodePoints, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_Character, reverseBytes, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Character, toChars, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_Character, toCodePoint, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_Character, toLowerCase, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_Character, toString, METH_VARARGS),
      DECLARE_METHOD(t_Character, toString_, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_Character, toTitleCase, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_Character, toUpperCase, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_Character, valueOf, METH_O | METH_CLASS),
      { NULL, NULL, 0, NULL }
    };

    static PyType_Slot PY_TYPE_SLOTS(Character)[] = {
      { Py_tp_methods, t_Character__methods_ },
      { Py_tp_init, (void *) t_Character_init_ },
      { 0, NULL }
    };

    static PyType_Def *PY_TYPE_BASES(Character)[] = {
      &PY_TYPE_DEF(::java::lang::Object),
      NULL
    };

    DEFINE_TYPE(Character, t_Character, Character);

    void t_Character::install(PyObject *module)
    {
      installType(&PY_TYPE(Character), &PY_TYPE_DEF(Character), module, "Character", 0);
    }

    void t_Character::initialize(PyObject *module)
    {
      PyObject_SetAttrString((PyObject *) PY_TYPE(Character), "class_", make_descriptor(Character::initializeClass, 1));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Character), "wrapfn_", make_descriptor(unboxCharacter));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Character), "boxfn_", make_descriptor(boxCharacter));
      env->getClass(Character::initializeClass);
      PyObject_SetAttrString((PyObject *) PY_TYPE(Character), "BYTES", make_descriptor(Character::BYTES));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Character), "COMBINING_SPACING_MARK", make_descriptor(Character::COMBINING_SPACING_MARK));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Character), "CONNECTOR_PUNCTUATION", make_descriptor(Character::CONNECTOR_PUNCTUATION));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Character), "CONTROL", make_descriptor(Character::CONTROL));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Character), "CURRENCY_SYMBOL", make_descriptor(Character::CURRENCY_SYMBOL));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Character), "DASH_PUNCTUATION", make_descriptor(Character::DASH_PUNCTUATION));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Character), "DECIMAL_DIGIT_NUMBER", make_descriptor(Character::DECIMAL_DIGIT_NUMBER));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Character), "DIRECTIONALITY_ARABIC_NUMBER", make_descriptor(Character::DIRECTIONALITY_ARABIC_NUMBER));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Character), "DIRECTIONALITY_BOUNDARY_NEUTRAL", make_descriptor(Character::DIRECTIONALITY_BOUNDARY_NEUTRAL));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Character), "DIRECTIONALITY_COMMON_NUMBER_SEPARATOR", make_descriptor(Character::DIRECTIONALITY_COMMON_NUMBER_SEPARATOR));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Character), "DIRECTIONALITY_EUROPEAN_NUMBER", make_descriptor(Character::DIRECTIONALITY_EUROPEAN_NUMBER));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Character), "DIRECTIONALITY_EUROPEAN_NUMBER_SEPARATOR", make_descriptor(Character::DIRECTIONALITY_EUROPEAN_NUMBER_SEPARATOR));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Character), "DIRECTIONALITY_EUROPEAN_NUMBER_TERMINATOR", make_descriptor(Character::DIRECTIONALITY_EUROPEAN_NUMBER_TERMINATOR));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Character), "DIRECTIONALITY_FIRST_STRONG_ISOLATE", make_descriptor(Character::DIRECTIONALITY_FIRST_STRONG_ISOLATE));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Character), "DIRECTIONALITY_LEFT_TO_RIGHT", make_descriptor(Character::DIRECTIONALITY_LEFT_TO_RIGHT));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Character), "DIRECTIONALITY_LEFT_TO_RIGHT_EMBEDDING", make_descriptor(Character::DIRECTIONALITY_LEFT_TO_RIGHT_EMBEDDING));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Character), "DIRECTIONALITY_LEFT_TO_RIGHT_ISOLATE", make_descriptor(Character::DIRECTIONALITY_LEFT_TO_RIGHT_ISOLATE));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Character), "DIRECTIONALITY_LEFT_TO_RIGHT_OVERRIDE", make_descriptor(Character::DIRECTIONALITY_LEFT_TO_RIGHT_OVERRIDE));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Character), "DIRECTIONALITY_NONSPACING_MARK", make_descriptor(Character::DIRECTIONALITY_NONSPACING_MARK));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Character), "DIRECTIONALITY_OTHER_NEUTRALS", make_descriptor(Character::DIRECTIONALITY_OTHER_NEUTRALS));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Character), "DIRECTIONALITY_PARAGRAPH_SEPARATOR", make_descriptor(Character::DIRECTIONALITY_PARAGRAPH_SEPARATOR));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Character), "DIRECTIONALITY_POP_DIRECTIONAL_FORMAT", make_descriptor(Character::DIRECTIONALITY_POP_DIRECTIONAL_FORMAT));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Character), "DIRECTIONALITY_POP_DIRECTIONAL_ISOLATE", make_descriptor(Character::DIRECTIONALITY_POP_DIRECTIONAL_ISOLATE));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Character), "DIRECTIONALITY_RIGHT_TO_LEFT", make_descriptor(Character::DIRECTIONALITY_RIGHT_TO_LEFT));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Character), "DIRECTIONALITY_RIGHT_TO_LEFT_ARABIC", make_descriptor(Character::DIRECTIONALITY_RIGHT_TO_LEFT_ARABIC));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Character), "DIRECTIONALITY_RIGHT_TO_LEFT_EMBEDDING", make_descriptor(Character::DIRECTIONALITY_RIGHT_TO_LEFT_EMBEDDING));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Character), "DIRECTIONALITY_RIGHT_TO_LEFT_ISOLATE", make_descriptor(Character::DIRECTIONALITY_RIGHT_TO_LEFT_ISOLATE));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Character), "DIRECTIONALITY_RIGHT_TO_LEFT_OVERRIDE", make_descriptor(Character::DIRECTIONALITY_RIGHT_TO_LEFT_OVERRIDE));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Character), "DIRECTIONALITY_SEGMENT_SEPARATOR", make_descriptor(Character::DIRECTIONALITY_SEGMENT_SEPARATOR));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Character), "DIRECTIONALITY_UNDEFINED", make_descriptor(Character::DIRECTIONALITY_UNDEFINED));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Character), "DIRECTIONALITY_WHITESPACE", make_descriptor(Character::DIRECTIONALITY_WHITESPACE));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Character), "ENCLOSING_MARK", make_descriptor(Character::ENCLOSING_MARK));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Character), "END_PUNCTUATION", make_descriptor(Character::END_PUNCTUATION));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Character), "FINAL_QUOTE_PUNCTUATION", make_descriptor(Character::FINAL_QUOTE_PUNCTUATION));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Character), "FORMAT", make_descriptor(Character::FORMAT));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Character), "INITIAL_QUOTE_PUNCTUATION", make_descriptor(Character::INITIAL_QUOTE_PUNCTUATION));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Character), "LETTER_NUMBER", make_descriptor(Character::LETTER_NUMBER));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Character), "LINE_SEPARATOR", make_descriptor(Character::LINE_SEPARATOR));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Character), "LOWERCASE_LETTER", make_descriptor(Character::LOWERCASE_LETTER));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Character), "MATH_SYMBOL", make_descriptor(Character::MATH_SYMBOL));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Character), "MAX_CODE_POINT", make_descriptor(Character::MAX_CODE_POINT));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Character), "MAX_HIGH_SURROGATE", make_descriptor(Character::MAX_HIGH_SURROGATE));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Character), "MAX_LOW_SURROGATE", make_descriptor(Character::MAX_LOW_SURROGATE));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Character), "MAX_RADIX", make_descriptor(Character::MAX_RADIX));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Character), "MAX_SURROGATE", make_descriptor(Character::MAX_SURROGATE));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Character), "MAX_VALUE", make_descriptor(Character::MAX_VALUE));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Character), "MIN_CODE_POINT", make_descriptor(Character::MIN_CODE_POINT));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Character), "MIN_HIGH_SURROGATE", make_descriptor(Character::MIN_HIGH_SURROGATE));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Character), "MIN_LOW_SURROGATE", make_descriptor(Character::MIN_LOW_SURROGATE));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Character), "MIN_RADIX", make_descriptor(Character::MIN_RADIX));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Character), "MIN_SUPPLEMENTARY_CODE_POINT", make_descriptor(Character::MIN_SUPPLEMENTARY_CODE_POINT));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Character), "MIN_SURROGATE", make_descriptor(Character::MIN_SURROGATE));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Character), "MIN_VALUE", make_descriptor(Character::MIN_VALUE));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Character), "MODIFIER_LETTER", make_descriptor(Character::MODIFIER_LETTER));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Character), "MODIFIER_SYMBOL", make_descriptor(Character::MODIFIER_SYMBOL));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Character), "NON_SPACING_MARK", make_descriptor(Character::NON_SPACING_MARK));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Character), "OTHER_LETTER", make_descriptor(Character::OTHER_LETTER));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Character), "OTHER_NUMBER", make_descriptor(Character::OTHER_NUMBER));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Character), "OTHER_PUNCTUATION", make_descriptor(Character::OTHER_PUNCTUATION));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Character), "OTHER_SYMBOL", make_descriptor(Character::OTHER_SYMBOL));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Character), "PARAGRAPH_SEPARATOR", make_descriptor(Character::PARAGRAPH_SEPARATOR));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Character), "PRIVATE_USE", make_descriptor(Character::PRIVATE_USE));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Character), "SIZE", make_descriptor(Character::SIZE));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Character), "SPACE_SEPARATOR", make_descriptor(Character::SPACE_SEPARATOR));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Character), "START_PUNCTUATION", make_descriptor(Character::START_PUNCTUATION));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Character), "SURROGATE", make_descriptor(Character::SURROGATE));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Character), "TITLECASE_LETTER", make_descriptor(Character::TITLECASE_LETTER));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Character), "TYPE", make_descriptor(::java::lang::t_Class::wrap_Object(*Character::TYPE)));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Character), "UNASSIGNED", make_descriptor(Character::UNASSIGNED));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Character), "UPPERCASE_LETTER", make_descriptor(Character::UPPERCASE_LETTER));
    }

    static PyObject *t_Character_cast_(PyTypeObject *type, PyObject *arg)
    {
      if (!(arg = castCheck(arg, Character::initializeClass, 1)))
        return NULL;
      return t_Character::wrap_Object(Character(((t_Character *) arg)->object.this$));
    }
    static PyObject *t_Character_instance_(PyTypeObject *type, PyObject *arg)
    {
      if (!castCheck(arg, Character::initializeClass, 0))
        Py_RETURN_FALSE;
      Py_RETURN_TRUE;
    }

    static int t_Character_init_(t_Character *self, PyObject *args, PyObject *kwds)
    {
      jchar a0;
      Character object((jobject) NULL);

      if (!parseArgs(args, "C", &a0))
      {
        INT_CALL(object = Character(a0));
        self->object = object;
      }
      else
      {
        PyErr_SetArgsError((PyObject *) self, "__init__", args);
        return -1;
      }

      return 0;
    }

    static PyObject *t_Character_charCount(PyTypeObject *type, PyObject *arg)
    {
      jint a0;
      jint result;

      if (!parseArg(arg, "I", &a0))
      {
        OBJ_CALL(result = ::java::lang::Character::charCount(a0));
        return PyLong_FromLong((long) result);
      }

      PyErr_SetArgsError(type, "charCount", arg);
      return NULL;
    }

    static PyObject *t_Character_charValue(t_Character *self)
    {
      jchar result;
      OBJ_CALL(result = self->object.charValue());
      return c2p(result);
    }

    static PyObject *t_Character_codePointAt(PyTypeObject *type, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 2:
        {
          JArray< jchar > a0((jobject) NULL);
          jint a1;
          jint result;

          if (!parseArgs(args, "[CI", &a0, &a1))
          {
            OBJ_CALL(result = ::java::lang::Character::codePointAt(a0, a1));
            return PyLong_FromLong((long) result);
          }
        }
        {
          ::java::lang::CharSequence a0((jobject) NULL);
          jint a1;
          jint result;

          if (!parseArgs(args, "OI", ::java::lang::PY_TYPE(CharSequence), &a0, &a1))
          {
            OBJ_CALL(result = ::java::lang::Character::codePointAt(a0, a1));
            return PyLong_FromLong((long) result);
          }
        }
        break;
       case 3:
        {
          JArray< jchar > a0((jobject) NULL);
          jint a1;
          jint a2;
          jint result;

          if (!parseArgs(args, "[CII", &a0, &a1, &a2))
          {
            OBJ_CALL(result = ::java::lang::Character::codePointAt(a0, a1, a2));
            return PyLong_FromLong((long) result);
          }
        }
      }

      PyErr_SetArgsError(type, "codePointAt", args);
      return NULL;
    }

    static PyObject *t_Character_codePointBefore(PyTypeObject *type, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 2:
        {
          JArray< jchar > a0((jobject) NULL);
          jint a1;
          jint result;

          if (!parseArgs(args, "[CI", &a0, &a1))
          {
            OBJ_CALL(result = ::java::lang::Character::codePointBefore(a0, a1));
            return PyLong_FromLong((long) result);
          }
        }
        {
          ::java::lang::CharSequence a0((jobject) NULL);
          jint a1;
          jint result;

          if (!parseArgs(args, "OI", ::java::lang::PY_TYPE(CharSequence), &a0, &a1))
          {
            OBJ_CALL(result = ::java::lang::Character::codePointBefore(a0, a1));
            return PyLong_FromLong((long) result);
          }
        }
        break;
       case 3:
        {
          JArray< jchar > a0((jobject) NULL);
          jint a1;
          jint a2;
          jint result;

          if (!parseArgs(args, "[CII", &a0, &a1, &a2))
          {
            OBJ_CALL(result = ::java::lang::Character::codePointBefore(a0, a1, a2));
            return PyLong_FromLong((long) result);
          }
        }
      }

      PyErr_SetArgsError(type, "codePointBefore", args);
      return NULL;
    }

    static PyObject *t_Character_codePointCount(PyTypeObject *type, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 3:
        {
          JArray< jchar > a0((jobject) NULL);
          jint a1;
          jint a2;
          jint result;

          if (!parseArgs(args, "[CII", &a0, &a1, &a2))
          {
            OBJ_CALL(result = ::java::lang::Character::codePointCount(a0, a1, a2));
            return PyLong_FromLong((long) result);
          }
        }
        {
          ::java::lang::CharSequence a0((jobject) NULL);
          jint a1;
          jint a2;
          jint result;

          if (!parseArgs(args, "OII", ::java::lang::PY_TYPE(CharSequence), &a0, &a1, &a2))
          {
            OBJ_CALL(result = ::java::lang::Character::codePointCount(a0, a1, a2));
            return PyLong_FromLong((long) result);
          }
        }
      }

      PyErr_SetArgsError(type, "codePointCount", args);
      return NULL;
    }

    static PyObject *t_Character_codePointOf(PyTypeObject *type, PyObject *arg)
    {
      ::java::lang::String a0((jobject) NULL);
      jint result;

      if (!parseArg(arg, "s", &a0))
      {
        OBJ_CALL(result = ::java::lang::Character::codePointOf(a0));
        return PyLong_FromLong((long) result);
      }

      PyErr_SetArgsError(type, "codePointOf", arg);
      return NULL;
    }

    static PyObject *t_Character_compare(PyTypeObject *type, PyObject *args)
    {
      jchar a0;
      jchar a1;
      jint result;

      if (!parseArgs(args, "CC", &a0, &a1))
      {
        OBJ_CALL(result = ::java::lang::Character::compare(a0, a1));
        return PyLong_FromLong((long) result);
      }

      PyErr_SetArgsError(type, "compare", args);
      return NULL;
    }

    static PyObject *t_Character_compareTo(t_Character *self, PyObject *arg)
    {
      Character a0((jobject) NULL);
      jint result;

      if (!parseArg(arg, "O", ::java::lang::PY_TYPE(Character), &a0))
      {
        OBJ_CALL(result = self->object.compareTo(a0));
        return PyLong_FromLong((long) result);
      }

      PyErr_SetArgsError((PyObject *) self, "compareTo", arg);
      return NULL;
    }

    static PyObject *t_Character_digit(PyTypeObject *type, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 2:
        {
          jchar a0;
          jint a1;
          jint result;

          if (!parseArgs(args, "CI", &a0, &a1))
          {
            OBJ_CALL(result = ::java::lang::Character::digit(a0, a1));
            return PyLong_FromLong((long) result);
          }
        }
        {
          jint a0;
          jint a1;
          jint result;

          if (!parseArgs(args, "II", &a0, &a1))
          {
            OBJ_CALL(result = ::java::lang::Character::digit(a0, a1));
            return PyLong_FromLong((long) result);
          }
        }
      }

      PyErr_SetArgsError(type, "digit", args);
      return NULL;
    }

    static PyObject *t_Character_equals(t_Character *self, PyObject *args)
    {
      ::java::lang::Object a0((jobject) NULL);
      jboolean result;

      if (!parseArgs(args, "o", &a0))
      {
        OBJ_CALL(result = self->object.equals(a0));
        Py_RETURN_BOOL(result);
      }

      return callSuper(PY_TYPE(Character), (PyObject *) self, "equals", args, 2);
    }

    static PyObject *t_Character_forDigit(PyTypeObject *type, PyObject *args)
    {
      jint a0;
      jint a1;
      jchar result;

      if (!parseArgs(args, "II", &a0, &a1))
      {
        OBJ_CALL(result = ::java::lang::Character::forDigit(a0, a1));
        return c2p(result);
      }

      PyErr_SetArgsError(type, "forDigit", args);
      return NULL;
    }

    static PyObject *t_Character_getDirectionality(PyTypeObject *type, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 1:
        {
          jchar a0;
          jbyte result;

          if (!parseArgs(args, "C", &a0))
          {
            OBJ_CALL(result = ::java::lang::Character::getDirectionality(a0));
            return PyLong_FromLong((long) result);
          }
        }
        {
          jint a0;
          jbyte result;

          if (!parseArgs(args, "I", &a0))
          {
            OBJ_CALL(result = ::java::lang::Character::getDirectionality(a0));
            return PyLong_FromLong((long) result);
          }
        }
      }

      PyErr_SetArgsError(type, "getDirectionality", args);
      return NULL;
    }

    static PyObject *t_Character_getName(PyTypeObject *type, PyObject *arg)
    {
      jint a0;
      ::java::lang::String result((jobject) NULL);

      if (!parseArg(arg, "I", &a0))
      {
        OBJ_CALL(result = ::java::lang::Character::getName(a0));
        return j2p(result);
      }

      PyErr_SetArgsError(type, "getName", arg);
      return NULL;
    }

    static PyObject *t_Character_getNumericValue(PyTypeObject *type, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 1:
        {
          jchar a0;
          jint result;

          if (!parseArgs(args, "C", &a0))
          {
            OBJ_CALL(result = ::java::lang::Character::getNumericValue(a0));
            return PyLong_FromLong((long) result);
          }
        }
        {
          jint a0;
          jint result;

          if (!parseArgs(args, "I", &a0))
          {
            OBJ_CALL(result = ::java::lang::Character::getNumericValue(a0));
            return PyLong_FromLong((long) result);
          }
        }
      }

      PyErr_SetArgsError(type, "getNumericValue", args);
      return NULL;
    }

    static PyObject *t_Character_getType(PyTypeObject *type, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 1:
        {
          jchar a0;
          jint result;

          if (!parseArgs(args, "C", &a0))
          {
            OBJ_CALL(result = ::java::lang::Character::getType(a0));
            return PyLong_FromLong((long) result);
          }
        }
        {
          jint a0;
          jint result;

          if (!parseArgs(args, "I", &a0))
          {
            OBJ_CALL(result = ::java::lang::Character::getType(a0));
            return PyLong_FromLong((long) result);
          }
        }
      }

      PyErr_SetArgsError(type, "getType", args);
      return NULL;
    }

    static PyObject *t_Character_hashCode(t_Character *self, PyObject *args)
    {
      jint result;

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.hashCode());
        return PyLong_FromLong((long) result);
      }

      return callSuper(PY_TYPE(Character), (PyObject *) self, "hashCode", args, 2);
    }

    static PyObject *t_Character_hashCode_(PyTypeObject *type, PyObject *args)
    {
      jchar a0;
      jint result;

      if (!parseArgs(args, "C", &a0))
      {
        OBJ_CALL(result = ::java::lang::Character::hashCode(a0));
        return PyLong_FromLong((long) result);
      }

      PyErr_SetArgsError(type, "hashCode_", args);
      return NULL;
    }

    static PyObject *t_Character_highSurrogate(PyTypeObject *type, PyObject *arg)
    {
      jint a0;
      jchar result;

      if (!parseArg(arg, "I", &a0))
      {
        OBJ_CALL(result = ::java::lang::Character::highSurrogate(a0));
        return c2p(result);
      }

      PyErr_SetArgsError(type, "highSurrogate", arg);
      return NULL;
    }

    static PyObject *t_Character_isAlphabetic(PyTypeObject *type, PyObject *arg)
    {
      jint a0;
      jboolean result;

      if (!parseArg(arg, "I", &a0))
      {
        OBJ_CALL(result = ::java::lang::Character::isAlphabetic(a0));
        Py_RETURN_BOOL(result);
      }

      PyErr_SetArgsError(type, "isAlphabetic", arg);
      return NULL;
    }

    static PyObject *t_Character_isBmpCodePoint(PyTypeObject *type, PyObject *arg)
    {
      jint a0;
      jboolean result;

      if (!parseArg(arg, "I", &a0))
      {
        OBJ_CALL(result = ::java::lang::Character::isBmpCodePoint(a0));
        Py_RETURN_BOOL(result);
      }

      PyErr_SetArgsError(type, "isBmpCodePoint", arg);
      return NULL;
    }

    static PyObject *t_Character_isDefined(PyTypeObject *type, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 1:
        {
          jchar a0;
          jboolean result;

          if (!parseArgs(args, "C", &a0))
          {
            OBJ_CALL(result = ::java::lang::Character::isDefined(a0));
            Py_RETURN_BOOL(result);
          }
        }
        {
          jint a0;
          jboolean result;

          if (!parseArgs(args, "I", &a0))
          {
            OBJ_CALL(result = ::java::lang::Character::isDefined(a0));
            Py_RETURN_BOOL(result);
          }
        }
      }

      PyErr_SetArgsError(type, "isDefined", args);
      return NULL;
    }

    static PyObject *t_Character_isDigit(PyTypeObject *type, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 1:
        {
          jchar a0;
          jboolean result;

          if (!parseArgs(args, "C", &a0))
          {
            OBJ_CALL(result = ::java::lang::Character::isDigit(a0));
            Py_RETURN_BOOL(result);
          }
        }
        {
          jint a0;
          jboolean result;

          if (!parseArgs(args, "I", &a0))
          {
            OBJ_CALL(result = ::java::lang::Character::isDigit(a0));
            Py_RETURN_BOOL(result);
          }
        }
      }

      PyErr_SetArgsError(type, "isDigit", args);
      return NULL;
    }

    static PyObject *t_Character_isHighSurrogate(PyTypeObject *type, PyObject *arg)
    {
      jchar a0;
      jboolean result;

      if (!parseArg(arg, "C", &a0))
      {
        OBJ_CALL(result = ::java::lang::Character::isHighSurrogate(a0));
        Py_RETURN_BOOL(result);
      }

      PyErr_SetArgsError(type, "isHighSurrogate", arg);
      return NULL;
    }

    static PyObject *t_Character_isISOControl(PyTypeObject *type, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 1:
        {
          jchar a0;
          jboolean result;

          if (!parseArgs(args, "C", &a0))
          {
            OBJ_CALL(result = ::java::lang::Character::isISOControl(a0));
            Py_RETURN_BOOL(result);
          }
        }
        {
          jint a0;
          jboolean result;

          if (!parseArgs(args, "I", &a0))
          {
            OBJ_CALL(result = ::java::lang::Character::isISOControl(a0));
            Py_RETURN_BOOL(result);
          }
        }
      }

      PyErr_SetArgsError(type, "isISOControl", args);
      return NULL;
    }

    static PyObject *t_Character_isIdentifierIgnorable(PyTypeObject *type, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 1:
        {
          jchar a0;
          jboolean result;

          if (!parseArgs(args, "C", &a0))
          {
            OBJ_CALL(result = ::java::lang::Character::isIdentifierIgnorable(a0));
            Py_RETURN_BOOL(result);
          }
        }
        {
          jint a0;
          jboolean result;

          if (!parseArgs(args, "I", &a0))
          {
            OBJ_CALL(result = ::java::lang::Character::isIdentifierIgnorable(a0));
            Py_RETURN_BOOL(result);
          }
        }
      }

      PyErr_SetArgsError(type, "isIdentifierIgnorable", args);
      return NULL;
    }

    static PyObject *t_Character_isIdeographic(PyTypeObject *type, PyObject *arg)
    {
      jint a0;
      jboolean result;

      if (!parseArg(arg, "I", &a0))
      {
        OBJ_CALL(result = ::java::lang::Character::isIdeographic(a0));
        Py_RETURN_BOOL(result);
      }

      PyErr_SetArgsError(type, "isIdeographic", arg);
      return NULL;
    }

    static PyObject *t_Character_isJavaIdentifierPart(PyTypeObject *type, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 1:
        {
          jchar a0;
          jboolean result;

          if (!parseArgs(args, "C", &a0))
          {
            OBJ_CALL(result = ::java::lang::Character::isJavaIdentifierPart(a0));
            Py_RETURN_BOOL(result);
          }
        }
        {
          jint a0;
          jboolean result;

          if (!parseArgs(args, "I", &a0))
          {
            OBJ_CALL(result = ::java::lang::Character::isJavaIdentifierPart(a0));
            Py_RETURN_BOOL(result);
          }
        }
      }

      PyErr_SetArgsError(type, "isJavaIdentifierPart", args);
      return NULL;
    }

    static PyObject *t_Character_isJavaIdentifierStart(PyTypeObject *type, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 1:
        {
          jchar a0;
          jboolean result;

          if (!parseArgs(args, "C", &a0))
          {
            OBJ_CALL(result = ::java::lang::Character::isJavaIdentifierStart(a0));
            Py_RETURN_BOOL(result);
          }
        }
        {
          jint a0;
          jboolean result;

          if (!parseArgs(args, "I", &a0))
          {
            OBJ_CALL(result = ::java::lang::Character::isJavaIdentifierStart(a0));
            Py_RETURN_BOOL(result);
          }
        }
      }

      PyErr_SetArgsError(type, "isJavaIdentifierStart", args);
      return NULL;
    }

    static PyObject *t_Character_isJavaLetter(PyTypeObject *type, PyObject *arg)
    {
      jchar a0;
      jboolean result;

      if (!parseArg(arg, "C", &a0))
      {
        OBJ_CALL(result = ::java::lang::Character::isJavaLetter(a0));
        Py_RETURN_BOOL(result);
      }

      PyErr_SetArgsError(type, "isJavaLetter", arg);
      return NULL;
    }

    static PyObject *t_Character_isJavaLetterOrDigit(PyTypeObject *type, PyObject *arg)
    {
      jchar a0;
      jboolean result;

      if (!parseArg(arg, "C", &a0))
      {
        OBJ_CALL(result = ::java::lang::Character::isJavaLetterOrDigit(a0));
        Py_RETURN_BOOL(result);
      }

      PyErr_SetArgsError(type, "isJavaLetterOrDigit", arg);
      return NULL;
    }

    static PyObject *t_Character_isLetter(PyTypeObject *type, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 1:
        {
          jchar a0;
          jboolean result;

          if (!parseArgs(args, "C", &a0))
          {
            OBJ_CALL(result = ::java::lang::Character::isLetter(a0));
            Py_RETURN_BOOL(result);
          }
        }
        {
          jint a0;
          jboolean result;

          if (!parseArgs(args, "I", &a0))
          {
            OBJ_CALL(result = ::java::lang::Character::isLetter(a0));
            Py_RETURN_BOOL(result);
          }
        }
      }

      PyErr_SetArgsError(type, "isLetter", args);
      return NULL;
    }

    static PyObject *t_Character_isLetterOrDigit(PyTypeObject *type, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 1:
        {
          jchar a0;
          jboolean result;

          if (!parseArgs(args, "C", &a0))
          {
            OBJ_CALL(result = ::java::lang::Character::isLetterOrDigit(a0));
            Py_RETURN_BOOL(result);
          }
        }
        {
          jint a0;
          jboolean result;

          if (!parseArgs(args, "I", &a0))
          {
            OBJ_CALL(result = ::java::lang::Character::isLetterOrDigit(a0));
            Py_RETURN_BOOL(result);
          }
        }
      }

      PyErr_SetArgsError(type, "isLetterOrDigit", args);
      return NULL;
    }

    static PyObject *t_Character_isLowSurrogate(PyTypeObject *type, PyObject *arg)
    {
      jchar a0;
      jboolean result;

      if (!parseArg(arg, "C", &a0))
      {
        OBJ_CALL(result = ::java::lang::Character::isLowSurrogate(a0));
        Py_RETURN_BOOL(result);
      }

      PyErr_SetArgsError(type, "isLowSurrogate", arg);
      return NULL;
    }

    static PyObject *t_Character_isLowerCase(PyTypeObject *type, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 1:
        {
          jchar a0;
          jboolean result;

          if (!parseArgs(args, "C", &a0))
          {
            OBJ_CALL(result = ::java::lang::Character::isLowerCase(a0));
            Py_RETURN_BOOL(result);
          }
        }
        {
          jint a0;
          jboolean result;

          if (!parseArgs(args, "I", &a0))
          {
            OBJ_CALL(result = ::java::lang::Character::isLowerCase(a0));
            Py_RETURN_BOOL(result);
          }
        }
      }

      PyErr_SetArgsError(type, "isLowerCase", args);
      return NULL;
    }

    static PyObject *t_Character_isMirrored(PyTypeObject *type, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 1:
        {
          jchar a0;
          jboolean result;

          if (!parseArgs(args, "C", &a0))
          {
            OBJ_CALL(result = ::java::lang::Character::isMirrored(a0));
            Py_RETURN_BOOL(result);
          }
        }
        {
          jint a0;
          jboolean result;

          if (!parseArgs(args, "I", &a0))
          {
            OBJ_CALL(result = ::java::lang::Character::isMirrored(a0));
            Py_RETURN_BOOL(result);
          }
        }
      }

      PyErr_SetArgsError(type, "isMirrored", args);
      return NULL;
    }

    static PyObject *t_Character_isSpace(PyTypeObject *type, PyObject *arg)
    {
      jchar a0;
      jboolean result;

      if (!parseArg(arg, "C", &a0))
      {
        OBJ_CALL(result = ::java::lang::Character::isSpace(a0));
        Py_RETURN_BOOL(result);
      }

      PyErr_SetArgsError(type, "isSpace", arg);
      return NULL;
    }

    static PyObject *t_Character_isSpaceChar(PyTypeObject *type, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 1:
        {
          jchar a0;
          jboolean result;

          if (!parseArgs(args, "C", &a0))
          {
            OBJ_CALL(result = ::java::lang::Character::isSpaceChar(a0));
            Py_RETURN_BOOL(result);
          }
        }
        {
          jint a0;
          jboolean result;

          if (!parseArgs(args, "I", &a0))
          {
            OBJ_CALL(result = ::java::lang::Character::isSpaceChar(a0));
            Py_RETURN_BOOL(result);
          }
        }
      }

      PyErr_SetArgsError(type, "isSpaceChar", args);
      return NULL;
    }

    static PyObject *t_Character_isSupplementaryCodePoint(PyTypeObject *type, PyObject *arg)
    {
      jint a0;
      jboolean result;

      if (!parseArg(arg, "I", &a0))
      {
        OBJ_CALL(result = ::java::lang::Character::isSupplementaryCodePoint(a0));
        Py_RETURN_BOOL(result);
      }

      PyErr_SetArgsError(type, "isSupplementaryCodePoint", arg);
      return NULL;
    }

    static PyObject *t_Character_isSurrogate(PyTypeObject *type, PyObject *arg)
    {
      jchar a0;
      jboolean result;

      if (!parseArg(arg, "C", &a0))
      {
        OBJ_CALL(result = ::java::lang::Character::isSurrogate(a0));
        Py_RETURN_BOOL(result);
      }

      PyErr_SetArgsError(type, "isSurrogate", arg);
      return NULL;
    }

    static PyObject *t_Character_isSurrogatePair(PyTypeObject *type, PyObject *args)
    {
      jchar a0;
      jchar a1;
      jboolean result;

      if (!parseArgs(args, "CC", &a0, &a1))
      {
        OBJ_CALL(result = ::java::lang::Character::isSurrogatePair(a0, a1));
        Py_RETURN_BOOL(result);
      }

      PyErr_SetArgsError(type, "isSurrogatePair", args);
      return NULL;
    }

    static PyObject *t_Character_isTitleCase(PyTypeObject *type, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 1:
        {
          jchar a0;
          jboolean result;

          if (!parseArgs(args, "C", &a0))
          {
            OBJ_CALL(result = ::java::lang::Character::isTitleCase(a0));
            Py_RETURN_BOOL(result);
          }
        }
        {
          jint a0;
          jboolean result;

          if (!parseArgs(args, "I", &a0))
          {
            OBJ_CALL(result = ::java::lang::Character::isTitleCase(a0));
            Py_RETURN_BOOL(result);
          }
        }
      }

      PyErr_SetArgsError(type, "isTitleCase", args);
      return NULL;
    }

    static PyObject *t_Character_isUnicodeIdentifierPart(PyTypeObject *type, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 1:
        {
          jchar a0;
          jboolean result;

          if (!parseArgs(args, "C", &a0))
          {
            OBJ_CALL(result = ::java::lang::Character::isUnicodeIdentifierPart(a0));
            Py_RETURN_BOOL(result);
          }
        }
        {
          jint a0;
          jboolean result;

          if (!parseArgs(args, "I", &a0))
          {
            OBJ_CALL(result = ::java::lang::Character::isUnicodeIdentifierPart(a0));
            Py_RETURN_BOOL(result);
          }
        }
      }

      PyErr_SetArgsError(type, "isUnicodeIdentifierPart", args);
      return NULL;
    }

    static PyObject *t_Character_isUnicodeIdentifierStart(PyTypeObject *type, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 1:
        {
          jchar a0;
          jboolean result;

          if (!parseArgs(args, "C", &a0))
          {
            OBJ_CALL(result = ::java::lang::Character::isUnicodeIdentifierStart(a0));
            Py_RETURN_BOOL(result);
          }
        }
        {
          jint a0;
          jboolean result;

          if (!parseArgs(args, "I", &a0))
          {
            OBJ_CALL(result = ::java::lang::Character::isUnicodeIdentifierStart(a0));
            Py_RETURN_BOOL(result);
          }
        }
      }

      PyErr_SetArgsError(type, "isUnicodeIdentifierStart", args);
      return NULL;
    }

    static PyObject *t_Character_isUpperCase(PyTypeObject *type, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 1:
        {
          jchar a0;
          jboolean result;

          if (!parseArgs(args, "C", &a0))
          {
            OBJ_CALL(result = ::java::lang::Character::isUpperCase(a0));
            Py_RETURN_BOOL(result);
          }
        }
        {
          jint a0;
          jboolean result;

          if (!parseArgs(args, "I", &a0))
          {
            OBJ_CALL(result = ::java::lang::Character::isUpperCase(a0));
            Py_RETURN_BOOL(result);
          }
        }
      }

      PyErr_SetArgsError(type, "isUpperCase", args);
      return NULL;
    }

    static PyObject *t_Character_isValidCodePoint(PyTypeObject *type, PyObject *arg)
    {
      jint a0;
      jboolean result;

      if (!parseArg(arg, "I", &a0))
      {
        OBJ_CALL(result = ::java::lang::Character::isValidCodePoint(a0));
        Py_RETURN_BOOL(result);
      }

      PyErr_SetArgsError(type, "isValidCodePoint", arg);
      return NULL;
    }

    static PyObject *t_Character_isWhitespace(PyTypeObject *type, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 1:
        {
          jchar a0;
          jboolean result;

          if (!parseArgs(args, "C", &a0))
          {
            OBJ_CALL(result = ::java::lang::Character::isWhitespace(a0));
            Py_RETURN_BOOL(result);
          }
        }
        {
          jint a0;
          jboolean result;

          if (!parseArgs(args, "I", &a0))
          {
            OBJ_CALL(result = ::java::lang::Character::isWhitespace(a0));
            Py_RETURN_BOOL(result);
          }
        }
      }

      PyErr_SetArgsError(type, "isWhitespace", args);
      return NULL;
    }

    static PyObject *t_Character_lowSurrogate(PyTypeObject *type, PyObject *arg)
    {
      jint a0;
      jchar result;

      if (!parseArg(arg, "I", &a0))
      {
        OBJ_CALL(result = ::java::lang::Character::lowSurrogate(a0));
        return c2p(result);
      }

      PyErr_SetArgsError(type, "lowSurrogate", arg);
      return NULL;
    }

    static PyObject *t_Character_offsetByCodePoints(PyTypeObject *type, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 3:
        {
          ::java::lang::CharSequence a0((jobject) NULL);
          jint a1;
          jint a2;
          jint result;

          if (!parseArgs(args, "OII", ::java::lang::PY_TYPE(CharSequence), &a0, &a1, &a2))
          {
            OBJ_CALL(result = ::java::lang::Character::offsetByCodePoints(a0, a1, a2));
            return PyLong_FromLong((long) result);
          }
        }
        break;
       case 5:
        {
          JArray< jchar > a0((jobject) NULL);
          jint a1;
          jint a2;
          jint a3;
          jint a4;
          jint result;

          if (!parseArgs(args, "[CIIII", &a0, &a1, &a2, &a3, &a4))
          {
            OBJ_CALL(result = ::java::lang::Character::offsetByCodePoints(a0, a1, a2, a3, a4));
            return PyLong_FromLong((long) result);
          }
        }
      }

      PyErr_SetArgsError(type, "offsetByCodePoints", args);
      return NULL;
    }

    static PyObject *t_Character_reverseBytes(PyTypeObject *type, PyObject *arg)
    {
      jchar a0;
      jchar result;

      if (!parseArg(arg, "C", &a0))
      {
        OBJ_CALL(result = ::java::lang::Character::reverseBytes(a0));
        return c2p(result);
      }

      PyErr_SetArgsError(type, "reverseBytes", arg);
      return NULL;
    }

    static PyObject *t_Character_toChars(PyTypeObject *type, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 1:
        {
          jint a0;
          JArray< jchar > result((jobject) NULL);

          if (!parseArgs(args, "I", &a0))
          {
            OBJ_CALL(result = ::java::lang::Character::toChars(a0));
            return result.wrap();
          }
        }
        break;
       case 3:
        {
          jint a0;
          JArray< jchar > a1((jobject) NULL);
          jint a2;
          jint result;

          if (!parseArgs(args, "I[CI", &a0, &a1, &a2))
          {
            OBJ_CALL(result = ::java::lang::Character::toChars(a0, a1, a2));
            return PyLong_FromLong((long) result);
          }
        }
      }

      PyErr_SetArgsError(type, "toChars", args);
      return NULL;
    }

    static PyObject *t_Character_toCodePoint(PyTypeObject *type, PyObject *args)
    {
      jchar a0;
      jchar a1;
      jint result;

      if (!parseArgs(args, "CC", &a0, &a1))
      {
        OBJ_CALL(result = ::java::lang::Character::toCodePoint(a0, a1));
        return PyLong_FromLong((long) result);
      }

      PyErr_SetArgsError(type, "toCodePoint", args);
      return NULL;
    }

    static PyObject *t_Character_toLowerCase(PyTypeObject *type, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 1:
        {
          jchar a0;
          jchar result;

          if (!parseArgs(args, "C", &a0))
          {
            OBJ_CALL(result = ::java::lang::Character::toLowerCase(a0));
            return c2p(result);
          }
        }
        {
          jint a0;
          jint result;

          if (!parseArgs(args, "I", &a0))
          {
            OBJ_CALL(result = ::java::lang::Character::toLowerCase(a0));
            return PyLong_FromLong((long) result);
          }
        }
      }

      PyErr_SetArgsError(type, "toLowerCase", args);
      return NULL;
    }

    static PyObject *t_Character_toString(t_Character *self, PyObject *args)
    {
      ::java::lang::String result((jobject) NULL);

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.toString());
        return j2p(result);
      }

      return callSuper(PY_TYPE(Character), (PyObject *) self, "toString", args, 2);
    }

    static PyObject *t_Character_toString_(PyTypeObject *type, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 1:
        {
          jchar a0;
          ::java::lang::String result((jobject) NULL);

          if (!parseArgs(args, "C", &a0))
          {
            OBJ_CALL(result = ::java::lang::Character::toString(a0));
            return j2p(result);
          }
        }
        {
          jint a0;
          ::java::lang::String result((jobject) NULL);

          if (!parseArgs(args, "I", &a0))
          {
            OBJ_CALL(result = ::java::lang::Character::toString(a0));
            return j2p(result);
          }
        }
      }

      PyErr_SetArgsError(type, "toString_", args);
      return NULL;
    }

    static PyObject *t_Character_toTitleCase(PyTypeObject *type, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 1:
        {
          jchar a0;
          jchar result;

          if (!parseArgs(args, "C", &a0))
          {
            OBJ_CALL(result = ::java::lang::Character::toTitleCase(a0));
            return c2p(result);
          }
        }
        {
          jint a0;
          jint result;

          if (!parseArgs(args, "I", &a0))
          {
            OBJ_CALL(result = ::java::lang::Character::toTitleCase(a0));
            return PyLong_FromLong((long) result);
          }
        }
      }

      PyErr_SetArgsError(type, "toTitleCase", args);
      return NULL;
    }

    static PyObject *t_Character_toUpperCase(PyTypeObject *type, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 1:
        {
          jchar a0;
          jchar result;

          if (!parseArgs(args, "C", &a0))
          {
            OBJ_CALL(result = ::java::lang::Character::toUpperCase(a0));
            return c2p(result);
          }
        }
        {
          jint a0;
          jint result;

          if (!parseArgs(args, "I", &a0))
          {
            OBJ_CALL(result = ::java::lang::Character::toUpperCase(a0));
            return PyLong_FromLong((long) result);
          }
        }
      }

      PyErr_SetArgsError(type, "toUpperCase", args);
      return NULL;
    }

    static PyObject *t_Character_valueOf(PyTypeObject *type, PyObject *arg)
    {
      jchar a0;
      Character result((jobject) NULL);

      if (!parseArg(arg, "C", &a0))
      {
        OBJ_CALL(result = ::java::lang::Character::valueOf(a0));
        return t_Character::wrap_Object(result);
      }

      PyErr_SetArgsError(type, "valueOf", arg);
      return NULL;
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/gnss/metric/messages/ssr/igm/SsrIgm06.h"
#include "org/orekit/gnss/metric/messages/ssr/igm/SsrIgm06Header.h"
#include "java/util/List.h"
#include "java/util/Map.h"
#include "org/orekit/gnss/SatelliteSystem.h"
#include "org/orekit/gnss/metric/messages/ssr/igm/SsrIgm06Data.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace metric {
        namespace messages {
          namespace ssr {
            namespace igm {

              ::java::lang::Class *SsrIgm06::class$ = NULL;
              jmethodID *SsrIgm06::mids$ = NULL;
              bool SsrIgm06::live$ = false;

              jclass SsrIgm06::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/gnss/metric/messages/ssr/igm/SsrIgm06");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_init$_f79d477d0b7e2708] = env->getMethodID(cls, "<init>", "(ILorg/orekit/gnss/SatelliteSystem;Lorg/orekit/gnss/metric/messages/ssr/igm/SsrIgm06Header;Ljava/util/List;)V");
                  mids$[mid_getSsrIgm06Data_dbcb8bbac6b35e0d] = env->getMethodID(cls, "getSsrIgm06Data", "()Ljava/util/Map;");

                  class$ = new ::java::lang::Class(cls);
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              SsrIgm06::SsrIgm06(jint a0, const ::org::orekit::gnss::SatelliteSystem & a1, const ::org::orekit::gnss::metric::messages::ssr::igm::SsrIgm06Header & a2, const ::java::util::List & a3) : ::org::orekit::gnss::metric::messages::ssr::igm::SsrIgmMessage(env->newObject(initializeClass, &mids$, mid_init$_f79d477d0b7e2708, a0, a1.this$, a2.this$, a3.this$)) {}

              ::java::util::Map SsrIgm06::getSsrIgm06Data() const
              {
                return ::java::util::Map(env->callObjectMethod(this$, mids$[mid_getSsrIgm06Data_dbcb8bbac6b35e0d]));
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
              static PyObject *t_SsrIgm06_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_SsrIgm06_instance_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_SsrIgm06_of_(t_SsrIgm06 *self, PyObject *args);
              static int t_SsrIgm06_init_(t_SsrIgm06 *self, PyObject *args, PyObject *kwds);
              static PyObject *t_SsrIgm06_getSsrIgm06Data(t_SsrIgm06 *self);
              static PyObject *t_SsrIgm06_get__ssrIgm06Data(t_SsrIgm06 *self, void *data);
              static PyObject *t_SsrIgm06_get__parameters_(t_SsrIgm06 *self, void *data);
              static PyGetSetDef t_SsrIgm06__fields_[] = {
                DECLARE_GET_FIELD(t_SsrIgm06, ssrIgm06Data),
                DECLARE_GET_FIELD(t_SsrIgm06, parameters_),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_SsrIgm06__methods_[] = {
                DECLARE_METHOD(t_SsrIgm06, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_SsrIgm06, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_SsrIgm06, of_, METH_VARARGS),
                DECLARE_METHOD(t_SsrIgm06, getSsrIgm06Data, METH_NOARGS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(SsrIgm06)[] = {
                { Py_tp_methods, t_SsrIgm06__methods_ },
                { Py_tp_init, (void *) t_SsrIgm06_init_ },
                { Py_tp_getset, t_SsrIgm06__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(SsrIgm06)[] = {
                &PY_TYPE_DEF(::org::orekit::gnss::metric::messages::ssr::igm::SsrIgmMessage),
                NULL
              };

              DEFINE_TYPE(SsrIgm06, t_SsrIgm06, SsrIgm06);
              PyObject *t_SsrIgm06::wrap_Object(const SsrIgm06& object, PyTypeObject *p0, PyTypeObject *p1)
              {
                PyObject *obj = t_SsrIgm06::wrap_Object(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_SsrIgm06 *self = (t_SsrIgm06 *) obj;
                  self->parameters[0] = p0;
                  self->parameters[1] = p1;
                }
                return obj;
              }

              PyObject *t_SsrIgm06::wrap_jobject(const jobject& object, PyTypeObject *p0, PyTypeObject *p1)
              {
                PyObject *obj = t_SsrIgm06::wrap_jobject(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_SsrIgm06 *self = (t_SsrIgm06 *) obj;
                  self->parameters[0] = p0;
                  self->parameters[1] = p1;
                }
                return obj;
              }

              void t_SsrIgm06::install(PyObject *module)
              {
                installType(&PY_TYPE(SsrIgm06), &PY_TYPE_DEF(SsrIgm06), module, "SsrIgm06", 0);
              }

              void t_SsrIgm06::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(SsrIgm06), "class_", make_descriptor(SsrIgm06::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(SsrIgm06), "wrapfn_", make_descriptor(t_SsrIgm06::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(SsrIgm06), "boxfn_", make_descriptor(boxObject));
              }

              static PyObject *t_SsrIgm06_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, SsrIgm06::initializeClass, 1)))
                  return NULL;
                return t_SsrIgm06::wrap_Object(SsrIgm06(((t_SsrIgm06 *) arg)->object.this$));
              }
              static PyObject *t_SsrIgm06_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, SsrIgm06::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static PyObject *t_SsrIgm06_of_(t_SsrIgm06 *self, PyObject *args)
              {
                if (!parseArg(args, "T", 2, &(self->parameters)))
                  Py_RETURN_SELF;
                return PyErr_SetArgsError((PyObject *) self, "of_", args);
              }

              static int t_SsrIgm06_init_(t_SsrIgm06 *self, PyObject *args, PyObject *kwds)
              {
                jint a0;
                ::org::orekit::gnss::SatelliteSystem a1((jobject) NULL);
                PyTypeObject **p1;
                ::org::orekit::gnss::metric::messages::ssr::igm::SsrIgm06Header a2((jobject) NULL);
                ::java::util::List a3((jobject) NULL);
                PyTypeObject **p3;
                SsrIgm06 object((jobject) NULL);

                if (!parseArgs(args, "IKkK", ::org::orekit::gnss::SatelliteSystem::initializeClass, ::org::orekit::gnss::metric::messages::ssr::igm::SsrIgm06Header::initializeClass, ::java::util::List::initializeClass, &a0, &a1, &p1, ::org::orekit::gnss::t_SatelliteSystem::parameters_, &a2, &a3, &p3, ::java::util::t_List::parameters_))
                {
                  INT_CALL(object = SsrIgm06(a0, a1, a2, a3));
                  self->object = object;
                  self->parameters[0] = ::org::orekit::gnss::metric::messages::ssr::igm::PY_TYPE(SsrIgm06Header);
                  self->parameters[1] = ::org::orekit::gnss::metric::messages::ssr::igm::PY_TYPE(SsrIgm06Data);
                }
                else
                {
                  PyErr_SetArgsError((PyObject *) self, "__init__", args);
                  return -1;
                }

                return 0;
              }

              static PyObject *t_SsrIgm06_getSsrIgm06Data(t_SsrIgm06 *self)
              {
                ::java::util::Map result((jobject) NULL);
                OBJ_CALL(result = self->object.getSsrIgm06Data());
                return ::java::util::t_Map::wrap_Object(result);
              }
              static PyObject *t_SsrIgm06_get__parameters_(t_SsrIgm06 *self, void *data)
              {
                return typeParameters(self->parameters, sizeof(self->parameters));
              }

              static PyObject *t_SsrIgm06_get__ssrIgm06Data(t_SsrIgm06 *self, void *data)
              {
                ::java::util::Map value((jobject) NULL);
                OBJ_CALL(value = self->object.getSsrIgm06Data());
                return ::java::util::t_Map::wrap_Object(value);
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
#include "org/hipparchus/random/SynchronizedRandomGenerator.h"
#include "org/hipparchus/random/RandomGenerator.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace random {

      ::java::lang::Class *SynchronizedRandomGenerator::class$ = NULL;
      jmethodID *SynchronizedRandomGenerator::mids$ = NULL;
      bool SynchronizedRandomGenerator::live$ = false;

      jclass SynchronizedRandomGenerator::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/random/SynchronizedRandomGenerator");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_e24b125c6ff6cc8c] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/random/RandomGenerator;)V");
          mids$[mid_nextBoolean_eee3de00fe971136] = env->getMethodID(cls, "nextBoolean", "()Z");
          mids$[mid_nextBytes_bba2a19638de22ff] = env->getMethodID(cls, "nextBytes", "([B)V");
          mids$[mid_nextBytes_e4288ba5fbf20d28] = env->getMethodID(cls, "nextBytes", "([BII)V");
          mids$[mid_nextDouble_9981f74b2d109da6] = env->getMethodID(cls, "nextDouble", "()D");
          mids$[mid_nextFloat_0e3b995f823d65ff] = env->getMethodID(cls, "nextFloat", "()F");
          mids$[mid_nextGaussian_9981f74b2d109da6] = env->getMethodID(cls, "nextGaussian", "()D");
          mids$[mid_nextInt_d6ab429752e7c267] = env->getMethodID(cls, "nextInt", "()I");
          mids$[mid_nextInt_d938fc64e8c6df2d] = env->getMethodID(cls, "nextInt", "(I)I");
          mids$[mid_nextLong_42c72b98e3c2e08a] = env->getMethodID(cls, "nextLong", "()J");
          mids$[mid_nextLong_1eaf6eb0a3f3163f] = env->getMethodID(cls, "nextLong", "(J)J");
          mids$[mid_setSeed_d43202153dd284f7] = env->getMethodID(cls, "setSeed", "([I)V");
          mids$[mid_setSeed_8fd427ab23829bf5] = env->getMethodID(cls, "setSeed", "(I)V");
          mids$[mid_setSeed_f5bbab7e97879358] = env->getMethodID(cls, "setSeed", "(J)V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      SynchronizedRandomGenerator::SynchronizedRandomGenerator(const ::org::hipparchus::random::RandomGenerator & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_e24b125c6ff6cc8c, a0.this$)) {}

      jboolean SynchronizedRandomGenerator::nextBoolean() const
      {
        return env->callBooleanMethod(this$, mids$[mid_nextBoolean_eee3de00fe971136]);
      }

      void SynchronizedRandomGenerator::nextBytes(const JArray< jbyte > & a0) const
      {
        env->callVoidMethod(this$, mids$[mid_nextBytes_bba2a19638de22ff], a0.this$);
      }

      void SynchronizedRandomGenerator::nextBytes(const JArray< jbyte > & a0, jint a1, jint a2) const
      {
        env->callVoidMethod(this$, mids$[mid_nextBytes_e4288ba5fbf20d28], a0.this$, a1, a2);
      }

      jdouble SynchronizedRandomGenerator::nextDouble() const
      {
        return env->callDoubleMethod(this$, mids$[mid_nextDouble_9981f74b2d109da6]);
      }

      jfloat SynchronizedRandomGenerator::nextFloat() const
      {
        return env->callFloatMethod(this$, mids$[mid_nextFloat_0e3b995f823d65ff]);
      }

      jdouble SynchronizedRandomGenerator::nextGaussian() const
      {
        return env->callDoubleMethod(this$, mids$[mid_nextGaussian_9981f74b2d109da6]);
      }

      jint SynchronizedRandomGenerator::nextInt() const
      {
        return env->callIntMethod(this$, mids$[mid_nextInt_d6ab429752e7c267]);
      }

      jint SynchronizedRandomGenerator::nextInt(jint a0) const
      {
        return env->callIntMethod(this$, mids$[mid_nextInt_d938fc64e8c6df2d], a0);
      }

      jlong SynchronizedRandomGenerator::nextLong() const
      {
        return env->callLongMethod(this$, mids$[mid_nextLong_42c72b98e3c2e08a]);
      }

      jlong SynchronizedRandomGenerator::nextLong(jlong a0) const
      {
        return env->callLongMethod(this$, mids$[mid_nextLong_1eaf6eb0a3f3163f], a0);
      }

      void SynchronizedRandomGenerator::setSeed(const JArray< jint > & a0) const
      {
        env->callVoidMethod(this$, mids$[mid_setSeed_d43202153dd284f7], a0.this$);
      }

      void SynchronizedRandomGenerator::setSeed(jint a0) const
      {
        env->callVoidMethod(this$, mids$[mid_setSeed_8fd427ab23829bf5], a0);
      }

      void SynchronizedRandomGenerator::setSeed(jlong a0) const
      {
        env->callVoidMethod(this$, mids$[mid_setSeed_f5bbab7e97879358], a0);
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
      static PyObject *t_SynchronizedRandomGenerator_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_SynchronizedRandomGenerator_instance_(PyTypeObject *type, PyObject *arg);
      static int t_SynchronizedRandomGenerator_init_(t_SynchronizedRandomGenerator *self, PyObject *args, PyObject *kwds);
      static PyObject *t_SynchronizedRandomGenerator_nextBoolean(t_SynchronizedRandomGenerator *self);
      static PyObject *t_SynchronizedRandomGenerator_nextBytes(t_SynchronizedRandomGenerator *self, PyObject *args);
      static PyObject *t_SynchronizedRandomGenerator_nextDouble(t_SynchronizedRandomGenerator *self);
      static PyObject *t_SynchronizedRandomGenerator_nextFloat(t_SynchronizedRandomGenerator *self);
      static PyObject *t_SynchronizedRandomGenerator_nextGaussian(t_SynchronizedRandomGenerator *self);
      static PyObject *t_SynchronizedRandomGenerator_nextInt(t_SynchronizedRandomGenerator *self, PyObject *args);
      static PyObject *t_SynchronizedRandomGenerator_nextLong(t_SynchronizedRandomGenerator *self, PyObject *args);
      static PyObject *t_SynchronizedRandomGenerator_setSeed(t_SynchronizedRandomGenerator *self, PyObject *args);
      static int t_SynchronizedRandomGenerator_set__seed(t_SynchronizedRandomGenerator *self, PyObject *arg, void *data);
      static PyGetSetDef t_SynchronizedRandomGenerator__fields_[] = {
        DECLARE_SET_FIELD(t_SynchronizedRandomGenerator, seed),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_SynchronizedRandomGenerator__methods_[] = {
        DECLARE_METHOD(t_SynchronizedRandomGenerator, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_SynchronizedRandomGenerator, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_SynchronizedRandomGenerator, nextBoolean, METH_NOARGS),
        DECLARE_METHOD(t_SynchronizedRandomGenerator, nextBytes, METH_VARARGS),
        DECLARE_METHOD(t_SynchronizedRandomGenerator, nextDouble, METH_NOARGS),
        DECLARE_METHOD(t_SynchronizedRandomGenerator, nextFloat, METH_NOARGS),
        DECLARE_METHOD(t_SynchronizedRandomGenerator, nextGaussian, METH_NOARGS),
        DECLARE_METHOD(t_SynchronizedRandomGenerator, nextInt, METH_VARARGS),
        DECLARE_METHOD(t_SynchronizedRandomGenerator, nextLong, METH_VARARGS),
        DECLARE_METHOD(t_SynchronizedRandomGenerator, setSeed, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(SynchronizedRandomGenerator)[] = {
        { Py_tp_methods, t_SynchronizedRandomGenerator__methods_ },
        { Py_tp_init, (void *) t_SynchronizedRandomGenerator_init_ },
        { Py_tp_getset, t_SynchronizedRandomGenerator__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(SynchronizedRandomGenerator)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(SynchronizedRandomGenerator, t_SynchronizedRandomGenerator, SynchronizedRandomGenerator);

      void t_SynchronizedRandomGenerator::install(PyObject *module)
      {
        installType(&PY_TYPE(SynchronizedRandomGenerator), &PY_TYPE_DEF(SynchronizedRandomGenerator), module, "SynchronizedRandomGenerator", 0);
      }

      void t_SynchronizedRandomGenerator::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(SynchronizedRandomGenerator), "class_", make_descriptor(SynchronizedRandomGenerator::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(SynchronizedRandomGenerator), "wrapfn_", make_descriptor(t_SynchronizedRandomGenerator::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(SynchronizedRandomGenerator), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_SynchronizedRandomGenerator_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, SynchronizedRandomGenerator::initializeClass, 1)))
          return NULL;
        return t_SynchronizedRandomGenerator::wrap_Object(SynchronizedRandomGenerator(((t_SynchronizedRandomGenerator *) arg)->object.this$));
      }
      static PyObject *t_SynchronizedRandomGenerator_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, SynchronizedRandomGenerator::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_SynchronizedRandomGenerator_init_(t_SynchronizedRandomGenerator *self, PyObject *args, PyObject *kwds)
      {
        ::org::hipparchus::random::RandomGenerator a0((jobject) NULL);
        SynchronizedRandomGenerator object((jobject) NULL);

        if (!parseArgs(args, "k", ::org::hipparchus::random::RandomGenerator::initializeClass, &a0))
        {
          INT_CALL(object = SynchronizedRandomGenerator(a0));
          self->object = object;
        }
        else
        {
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_SynchronizedRandomGenerator_nextBoolean(t_SynchronizedRandomGenerator *self)
      {
        jboolean result;
        OBJ_CALL(result = self->object.nextBoolean());
        Py_RETURN_BOOL(result);
      }

      static PyObject *t_SynchronizedRandomGenerator_nextBytes(t_SynchronizedRandomGenerator *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            JArray< jbyte > a0((jobject) NULL);

            if (!parseArgs(args, "[B", &a0))
            {
              OBJ_CALL(self->object.nextBytes(a0));
              Py_RETURN_NONE;
            }
          }
          break;
         case 3:
          {
            JArray< jbyte > a0((jobject) NULL);
            jint a1;
            jint a2;

            if (!parseArgs(args, "[BII", &a0, &a1, &a2))
            {
              OBJ_CALL(self->object.nextBytes(a0, a1, a2));
              Py_RETURN_NONE;
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "nextBytes", args);
        return NULL;
      }

      static PyObject *t_SynchronizedRandomGenerator_nextDouble(t_SynchronizedRandomGenerator *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.nextDouble());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_SynchronizedRandomGenerator_nextFloat(t_SynchronizedRandomGenerator *self)
      {
        jfloat result;
        OBJ_CALL(result = self->object.nextFloat());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_SynchronizedRandomGenerator_nextGaussian(t_SynchronizedRandomGenerator *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.nextGaussian());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_SynchronizedRandomGenerator_nextInt(t_SynchronizedRandomGenerator *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 0:
          {
            jint result;
            OBJ_CALL(result = self->object.nextInt());
            return PyLong_FromLong((long) result);
          }
          break;
         case 1:
          {
            jint a0;
            jint result;

            if (!parseArgs(args, "I", &a0))
            {
              OBJ_CALL(result = self->object.nextInt(a0));
              return PyLong_FromLong((long) result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "nextInt", args);
        return NULL;
      }

      static PyObject *t_SynchronizedRandomGenerator_nextLong(t_SynchronizedRandomGenerator *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 0:
          {
            jlong result;
            OBJ_CALL(result = self->object.nextLong());
            return PyLong_FromLongLong((PY_LONG_LONG) result);
          }
          break;
         case 1:
          {
            jlong a0;
            jlong result;

            if (!parseArgs(args, "J", &a0))
            {
              OBJ_CALL(result = self->object.nextLong(a0));
              return PyLong_FromLongLong((PY_LONG_LONG) result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "nextLong", args);
        return NULL;
      }

      static PyObject *t_SynchronizedRandomGenerator_setSeed(t_SynchronizedRandomGenerator *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            JArray< jint > a0((jobject) NULL);

            if (!parseArgs(args, "[I", &a0))
            {
              OBJ_CALL(self->object.setSeed(a0));
              Py_RETURN_NONE;
            }
          }
          {
            jint a0;

            if (!parseArgs(args, "I", &a0))
            {
              OBJ_CALL(self->object.setSeed(a0));
              Py_RETURN_NONE;
            }
          }
          {
            jlong a0;

            if (!parseArgs(args, "J", &a0))
            {
              OBJ_CALL(self->object.setSeed(a0));
              Py_RETURN_NONE;
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "setSeed", args);
        return NULL;
      }

      static int t_SynchronizedRandomGenerator_set__seed(t_SynchronizedRandomGenerator *self, PyObject *arg, void *data)
      {
        {
          JArray< jint > value((jobject) NULL);
          if (!parseArg(arg, "[I", &value))
          {
            INT_CALL(self->object.setSeed(value));
            return 0;
          }
        }
        {
          jint value;
          if (!parseArg(arg, "I", &value))
          {
            INT_CALL(self->object.setSeed(value));
            return 0;
          }
        }
        {
          jlong value;
          if (!parseArg(arg, "J", &value))
          {
            INT_CALL(self->object.setSeed(value));
            return 0;
          }
        }
        PyErr_SetArgsError((PyObject *) self, "seed", arg);
        return -1;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/general/OrekitEphemerisFile$OrekitEphemerisSegment.h"
#include "java/util/List.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/utils/CartesianDerivativesFilter.h"
#include "org/orekit/utils/TimeStampedPVCoordinates.h"
#include "org/orekit/files/general/EphemerisFile$EphemerisSegment.h"
#include "java/lang/Class.h"
#include "org/orekit/frames/Frame.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace general {

        ::java::lang::Class *OrekitEphemerisFile$OrekitEphemerisSegment::class$ = NULL;
        jmethodID *OrekitEphemerisFile$OrekitEphemerisSegment::mids$ = NULL;
        bool OrekitEphemerisFile$OrekitEphemerisSegment::live$ = false;

        jclass OrekitEphemerisFile$OrekitEphemerisSegment::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/files/general/OrekitEphemerisFile$OrekitEphemerisSegment");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_0a80307afd202110] = env->getMethodID(cls, "<init>", "(Ljava/util/List;Lorg/orekit/frames/Frame;DI)V");
            mids$[mid_getAvailableDerivatives_b9dfc27d8c56b5de] = env->getMethodID(cls, "getAvailableDerivatives", "()Lorg/orekit/utils/CartesianDerivativesFilter;");
            mids$[mid_getCoordinates_d751c1a57012b438] = env->getMethodID(cls, "getCoordinates", "()Ljava/util/List;");
            mids$[mid_getFrame_cb151471db4570f0] = env->getMethodID(cls, "getFrame", "()Lorg/orekit/frames/Frame;");
            mids$[mid_getInertialFrame_cb151471db4570f0] = env->getMethodID(cls, "getInertialFrame", "()Lorg/orekit/frames/Frame;");
            mids$[mid_getInterpolationSamples_d6ab429752e7c267] = env->getMethodID(cls, "getInterpolationSamples", "()I");
            mids$[mid_getMu_9981f74b2d109da6] = env->getMethodID(cls, "getMu", "()D");
            mids$[mid_getStart_80e11148db499dda] = env->getMethodID(cls, "getStart", "()Lorg/orekit/time/AbsoluteDate;");
            mids$[mid_getStop_80e11148db499dda] = env->getMethodID(cls, "getStop", "()Lorg/orekit/time/AbsoluteDate;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        OrekitEphemerisFile$OrekitEphemerisSegment::OrekitEphemerisFile$OrekitEphemerisSegment(const ::java::util::List & a0, const ::org::orekit::frames::Frame & a1, jdouble a2, jint a3) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0a80307afd202110, a0.this$, a1.this$, a2, a3)) {}

        ::org::orekit::utils::CartesianDerivativesFilter OrekitEphemerisFile$OrekitEphemerisSegment::getAvailableDerivatives() const
        {
          return ::org::orekit::utils::CartesianDerivativesFilter(env->callObjectMethod(this$, mids$[mid_getAvailableDerivatives_b9dfc27d8c56b5de]));
        }

        ::java::util::List OrekitEphemerisFile$OrekitEphemerisSegment::getCoordinates() const
        {
          return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getCoordinates_d751c1a57012b438]));
        }

        ::org::orekit::frames::Frame OrekitEphemerisFile$OrekitEphemerisSegment::getFrame() const
        {
          return ::org::orekit::frames::Frame(env->callObjectMethod(this$, mids$[mid_getFrame_cb151471db4570f0]));
        }

        ::org::orekit::frames::Frame OrekitEphemerisFile$OrekitEphemerisSegment::getInertialFrame() const
        {
          return ::org::orekit::frames::Frame(env->callObjectMethod(this$, mids$[mid_getInertialFrame_cb151471db4570f0]));
        }

        jint OrekitEphemerisFile$OrekitEphemerisSegment::getInterpolationSamples() const
        {
          return env->callIntMethod(this$, mids$[mid_getInterpolationSamples_d6ab429752e7c267]);
        }

        jdouble OrekitEphemerisFile$OrekitEphemerisSegment::getMu() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getMu_9981f74b2d109da6]);
        }

        ::org::orekit::time::AbsoluteDate OrekitEphemerisFile$OrekitEphemerisSegment::getStart() const
        {
          return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getStart_80e11148db499dda]));
        }

        ::org::orekit::time::AbsoluteDate OrekitEphemerisFile$OrekitEphemerisSegment::getStop() const
        {
          return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getStop_80e11148db499dda]));
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
        static PyObject *t_OrekitEphemerisFile$OrekitEphemerisSegment_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_OrekitEphemerisFile$OrekitEphemerisSegment_instance_(PyTypeObject *type, PyObject *arg);
        static int t_OrekitEphemerisFile$OrekitEphemerisSegment_init_(t_OrekitEphemerisFile$OrekitEphemerisSegment *self, PyObject *args, PyObject *kwds);
        static PyObject *t_OrekitEphemerisFile$OrekitEphemerisSegment_getAvailableDerivatives(t_OrekitEphemerisFile$OrekitEphemerisSegment *self);
        static PyObject *t_OrekitEphemerisFile$OrekitEphemerisSegment_getCoordinates(t_OrekitEphemerisFile$OrekitEphemerisSegment *self);
        static PyObject *t_OrekitEphemerisFile$OrekitEphemerisSegment_getFrame(t_OrekitEphemerisFile$OrekitEphemerisSegment *self);
        static PyObject *t_OrekitEphemerisFile$OrekitEphemerisSegment_getInertialFrame(t_OrekitEphemerisFile$OrekitEphemerisSegment *self);
        static PyObject *t_OrekitEphemerisFile$OrekitEphemerisSegment_getInterpolationSamples(t_OrekitEphemerisFile$OrekitEphemerisSegment *self);
        static PyObject *t_OrekitEphemerisFile$OrekitEphemerisSegment_getMu(t_OrekitEphemerisFile$OrekitEphemerisSegment *self);
        static PyObject *t_OrekitEphemerisFile$OrekitEphemerisSegment_getStart(t_OrekitEphemerisFile$OrekitEphemerisSegment *self);
        static PyObject *t_OrekitEphemerisFile$OrekitEphemerisSegment_getStop(t_OrekitEphemerisFile$OrekitEphemerisSegment *self);
        static PyObject *t_OrekitEphemerisFile$OrekitEphemerisSegment_get__availableDerivatives(t_OrekitEphemerisFile$OrekitEphemerisSegment *self, void *data);
        static PyObject *t_OrekitEphemerisFile$OrekitEphemerisSegment_get__coordinates(t_OrekitEphemerisFile$OrekitEphemerisSegment *self, void *data);
        static PyObject *t_OrekitEphemerisFile$OrekitEphemerisSegment_get__frame(t_OrekitEphemerisFile$OrekitEphemerisSegment *self, void *data);
        static PyObject *t_OrekitEphemerisFile$OrekitEphemerisSegment_get__inertialFrame(t_OrekitEphemerisFile$OrekitEphemerisSegment *self, void *data);
        static PyObject *t_OrekitEphemerisFile$OrekitEphemerisSegment_get__interpolationSamples(t_OrekitEphemerisFile$OrekitEphemerisSegment *self, void *data);
        static PyObject *t_OrekitEphemerisFile$OrekitEphemerisSegment_get__mu(t_OrekitEphemerisFile$OrekitEphemerisSegment *self, void *data);
        static PyObject *t_OrekitEphemerisFile$OrekitEphemerisSegment_get__start(t_OrekitEphemerisFile$OrekitEphemerisSegment *self, void *data);
        static PyObject *t_OrekitEphemerisFile$OrekitEphemerisSegment_get__stop(t_OrekitEphemerisFile$OrekitEphemerisSegment *self, void *data);
        static PyGetSetDef t_OrekitEphemerisFile$OrekitEphemerisSegment__fields_[] = {
          DECLARE_GET_FIELD(t_OrekitEphemerisFile$OrekitEphemerisSegment, availableDerivatives),
          DECLARE_GET_FIELD(t_OrekitEphemerisFile$OrekitEphemerisSegment, coordinates),
          DECLARE_GET_FIELD(t_OrekitEphemerisFile$OrekitEphemerisSegment, frame),
          DECLARE_GET_FIELD(t_OrekitEphemerisFile$OrekitEphemerisSegment, inertialFrame),
          DECLARE_GET_FIELD(t_OrekitEphemerisFile$OrekitEphemerisSegment, interpolationSamples),
          DECLARE_GET_FIELD(t_OrekitEphemerisFile$OrekitEphemerisSegment, mu),
          DECLARE_GET_FIELD(t_OrekitEphemerisFile$OrekitEphemerisSegment, start),
          DECLARE_GET_FIELD(t_OrekitEphemerisFile$OrekitEphemerisSegment, stop),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_OrekitEphemerisFile$OrekitEphemerisSegment__methods_[] = {
          DECLARE_METHOD(t_OrekitEphemerisFile$OrekitEphemerisSegment, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_OrekitEphemerisFile$OrekitEphemerisSegment, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_OrekitEphemerisFile$OrekitEphemerisSegment, getAvailableDerivatives, METH_NOARGS),
          DECLARE_METHOD(t_OrekitEphemerisFile$OrekitEphemerisSegment, getCoordinates, METH_NOARGS),
          DECLARE_METHOD(t_OrekitEphemerisFile$OrekitEphemerisSegment, getFrame, METH_NOARGS),
          DECLARE_METHOD(t_OrekitEphemerisFile$OrekitEphemerisSegment, getInertialFrame, METH_NOARGS),
          DECLARE_METHOD(t_OrekitEphemerisFile$OrekitEphemerisSegment, getInterpolationSamples, METH_NOARGS),
          DECLARE_METHOD(t_OrekitEphemerisFile$OrekitEphemerisSegment, getMu, METH_NOARGS),
          DECLARE_METHOD(t_OrekitEphemerisFile$OrekitEphemerisSegment, getStart, METH_NOARGS),
          DECLARE_METHOD(t_OrekitEphemerisFile$OrekitEphemerisSegment, getStop, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(OrekitEphemerisFile$OrekitEphemerisSegment)[] = {
          { Py_tp_methods, t_OrekitEphemerisFile$OrekitEphemerisSegment__methods_ },
          { Py_tp_init, (void *) t_OrekitEphemerisFile$OrekitEphemerisSegment_init_ },
          { Py_tp_getset, t_OrekitEphemerisFile$OrekitEphemerisSegment__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(OrekitEphemerisFile$OrekitEphemerisSegment)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(OrekitEphemerisFile$OrekitEphemerisSegment, t_OrekitEphemerisFile$OrekitEphemerisSegment, OrekitEphemerisFile$OrekitEphemerisSegment);

        void t_OrekitEphemerisFile$OrekitEphemerisSegment::install(PyObject *module)
        {
          installType(&PY_TYPE(OrekitEphemerisFile$OrekitEphemerisSegment), &PY_TYPE_DEF(OrekitEphemerisFile$OrekitEphemerisSegment), module, "OrekitEphemerisFile$OrekitEphemerisSegment", 0);
        }

        void t_OrekitEphemerisFile$OrekitEphemerisSegment::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitEphemerisFile$OrekitEphemerisSegment), "class_", make_descriptor(OrekitEphemerisFile$OrekitEphemerisSegment::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitEphemerisFile$OrekitEphemerisSegment), "wrapfn_", make_descriptor(t_OrekitEphemerisFile$OrekitEphemerisSegment::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitEphemerisFile$OrekitEphemerisSegment), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_OrekitEphemerisFile$OrekitEphemerisSegment_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, OrekitEphemerisFile$OrekitEphemerisSegment::initializeClass, 1)))
            return NULL;
          return t_OrekitEphemerisFile$OrekitEphemerisSegment::wrap_Object(OrekitEphemerisFile$OrekitEphemerisSegment(((t_OrekitEphemerisFile$OrekitEphemerisSegment *) arg)->object.this$));
        }
        static PyObject *t_OrekitEphemerisFile$OrekitEphemerisSegment_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, OrekitEphemerisFile$OrekitEphemerisSegment::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_OrekitEphemerisFile$OrekitEphemerisSegment_init_(t_OrekitEphemerisFile$OrekitEphemerisSegment *self, PyObject *args, PyObject *kwds)
        {
          ::java::util::List a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::orekit::frames::Frame a1((jobject) NULL);
          jdouble a2;
          jint a3;
          OrekitEphemerisFile$OrekitEphemerisSegment object((jobject) NULL);

          if (!parseArgs(args, "KkDI", ::java::util::List::initializeClass, ::org::orekit::frames::Frame::initializeClass, &a0, &p0, ::java::util::t_List::parameters_, &a1, &a2, &a3))
          {
            INT_CALL(object = OrekitEphemerisFile$OrekitEphemerisSegment(a0, a1, a2, a3));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_OrekitEphemerisFile$OrekitEphemerisSegment_getAvailableDerivatives(t_OrekitEphemerisFile$OrekitEphemerisSegment *self)
        {
          ::org::orekit::utils::CartesianDerivativesFilter result((jobject) NULL);
          OBJ_CALL(result = self->object.getAvailableDerivatives());
          return ::org::orekit::utils::t_CartesianDerivativesFilter::wrap_Object(result);
        }

        static PyObject *t_OrekitEphemerisFile$OrekitEphemerisSegment_getCoordinates(t_OrekitEphemerisFile$OrekitEphemerisSegment *self)
        {
          ::java::util::List result((jobject) NULL);
          OBJ_CALL(result = self->object.getCoordinates());
          return ::java::util::t_List::wrap_Object(result, ::org::orekit::utils::PY_TYPE(TimeStampedPVCoordinates));
        }

        static PyObject *t_OrekitEphemerisFile$OrekitEphemerisSegment_getFrame(t_OrekitEphemerisFile$OrekitEphemerisSegment *self)
        {
          ::org::orekit::frames::Frame result((jobject) NULL);
          OBJ_CALL(result = self->object.getFrame());
          return ::org::orekit::frames::t_Frame::wrap_Object(result);
        }

        static PyObject *t_OrekitEphemerisFile$OrekitEphemerisSegment_getInertialFrame(t_OrekitEphemerisFile$OrekitEphemerisSegment *self)
        {
          ::org::orekit::frames::Frame result((jobject) NULL);
          OBJ_CALL(result = self->object.getInertialFrame());
          return ::org::orekit::frames::t_Frame::wrap_Object(result);
        }

        static PyObject *t_OrekitEphemerisFile$OrekitEphemerisSegment_getInterpolationSamples(t_OrekitEphemerisFile$OrekitEphemerisSegment *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getInterpolationSamples());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_OrekitEphemerisFile$OrekitEphemerisSegment_getMu(t_OrekitEphemerisFile$OrekitEphemerisSegment *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getMu());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_OrekitEphemerisFile$OrekitEphemerisSegment_getStart(t_OrekitEphemerisFile$OrekitEphemerisSegment *self)
        {
          ::org::orekit::time::AbsoluteDate result((jobject) NULL);
          OBJ_CALL(result = self->object.getStart());
          return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
        }

        static PyObject *t_OrekitEphemerisFile$OrekitEphemerisSegment_getStop(t_OrekitEphemerisFile$OrekitEphemerisSegment *self)
        {
          ::org::orekit::time::AbsoluteDate result((jobject) NULL);
          OBJ_CALL(result = self->object.getStop());
          return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
        }

        static PyObject *t_OrekitEphemerisFile$OrekitEphemerisSegment_get__availableDerivatives(t_OrekitEphemerisFile$OrekitEphemerisSegment *self, void *data)
        {
          ::org::orekit::utils::CartesianDerivativesFilter value((jobject) NULL);
          OBJ_CALL(value = self->object.getAvailableDerivatives());
          return ::org::orekit::utils::t_CartesianDerivativesFilter::wrap_Object(value);
        }

        static PyObject *t_OrekitEphemerisFile$OrekitEphemerisSegment_get__coordinates(t_OrekitEphemerisFile$OrekitEphemerisSegment *self, void *data)
        {
          ::java::util::List value((jobject) NULL);
          OBJ_CALL(value = self->object.getCoordinates());
          return ::java::util::t_List::wrap_Object(value);
        }

        static PyObject *t_OrekitEphemerisFile$OrekitEphemerisSegment_get__frame(t_OrekitEphemerisFile$OrekitEphemerisSegment *self, void *data)
        {
          ::org::orekit::frames::Frame value((jobject) NULL);
          OBJ_CALL(value = self->object.getFrame());
          return ::org::orekit::frames::t_Frame::wrap_Object(value);
        }

        static PyObject *t_OrekitEphemerisFile$OrekitEphemerisSegment_get__inertialFrame(t_OrekitEphemerisFile$OrekitEphemerisSegment *self, void *data)
        {
          ::org::orekit::frames::Frame value((jobject) NULL);
          OBJ_CALL(value = self->object.getInertialFrame());
          return ::org::orekit::frames::t_Frame::wrap_Object(value);
        }

        static PyObject *t_OrekitEphemerisFile$OrekitEphemerisSegment_get__interpolationSamples(t_OrekitEphemerisFile$OrekitEphemerisSegment *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getInterpolationSamples());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_OrekitEphemerisFile$OrekitEphemerisSegment_get__mu(t_OrekitEphemerisFile$OrekitEphemerisSegment *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getMu());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_OrekitEphemerisFile$OrekitEphemerisSegment_get__start(t_OrekitEphemerisFile$OrekitEphemerisSegment *self, void *data)
        {
          ::org::orekit::time::AbsoluteDate value((jobject) NULL);
          OBJ_CALL(value = self->object.getStart());
          return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
        }

        static PyObject *t_OrekitEphemerisFile$OrekitEphemerisSegment_get__stop(t_OrekitEphemerisFile$OrekitEphemerisSegment *self, void *data)
        {
          ::org::orekit::time::AbsoluteDate value((jobject) NULL);
          OBJ_CALL(value = self->object.getStop());
          return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/utils/WaypointPVBuilder$InterpolationFactory.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/bodies/OneAxisEllipsoid.h"
#include "java/lang/Class.h"
#include "org/orekit/bodies/GeodeticPoint.h"
#include "org/orekit/utils/PVCoordinatesProvider.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace utils {

      ::java::lang::Class *WaypointPVBuilder$InterpolationFactory::class$ = NULL;
      jmethodID *WaypointPVBuilder$InterpolationFactory::mids$ = NULL;
      bool WaypointPVBuilder$InterpolationFactory::live$ = false;

      jclass WaypointPVBuilder$InterpolationFactory::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/utils/WaypointPVBuilder$InterpolationFactory");

          mids$ = new jmethodID[max_mid];
          mids$[mid_create_be5be19638e066b8] = env->getMethodID(cls, "create", "(Lorg/orekit/time/AbsoluteDate;Lorg/orekit/bodies/GeodeticPoint;Lorg/orekit/time/AbsoluteDate;Lorg/orekit/bodies/GeodeticPoint;Lorg/orekit/bodies/OneAxisEllipsoid;)Lorg/orekit/utils/PVCoordinatesProvider;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ::org::orekit::utils::PVCoordinatesProvider WaypointPVBuilder$InterpolationFactory::create(const ::org::orekit::time::AbsoluteDate & a0, const ::org::orekit::bodies::GeodeticPoint & a1, const ::org::orekit::time::AbsoluteDate & a2, const ::org::orekit::bodies::GeodeticPoint & a3, const ::org::orekit::bodies::OneAxisEllipsoid & a4) const
      {
        return ::org::orekit::utils::PVCoordinatesProvider(env->callObjectMethod(this$, mids$[mid_create_be5be19638e066b8], a0.this$, a1.this$, a2.this$, a3.this$, a4.this$));
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
      static PyObject *t_WaypointPVBuilder$InterpolationFactory_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_WaypointPVBuilder$InterpolationFactory_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_WaypointPVBuilder$InterpolationFactory_create(t_WaypointPVBuilder$InterpolationFactory *self, PyObject *args);

      static PyMethodDef t_WaypointPVBuilder$InterpolationFactory__methods_[] = {
        DECLARE_METHOD(t_WaypointPVBuilder$InterpolationFactory, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_WaypointPVBuilder$InterpolationFactory, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_WaypointPVBuilder$InterpolationFactory, create, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(WaypointPVBuilder$InterpolationFactory)[] = {
        { Py_tp_methods, t_WaypointPVBuilder$InterpolationFactory__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(WaypointPVBuilder$InterpolationFactory)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(WaypointPVBuilder$InterpolationFactory, t_WaypointPVBuilder$InterpolationFactory, WaypointPVBuilder$InterpolationFactory);

      void t_WaypointPVBuilder$InterpolationFactory::install(PyObject *module)
      {
        installType(&PY_TYPE(WaypointPVBuilder$InterpolationFactory), &PY_TYPE_DEF(WaypointPVBuilder$InterpolationFactory), module, "WaypointPVBuilder$InterpolationFactory", 0);
      }

      void t_WaypointPVBuilder$InterpolationFactory::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(WaypointPVBuilder$InterpolationFactory), "class_", make_descriptor(WaypointPVBuilder$InterpolationFactory::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(WaypointPVBuilder$InterpolationFactory), "wrapfn_", make_descriptor(t_WaypointPVBuilder$InterpolationFactory::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(WaypointPVBuilder$InterpolationFactory), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_WaypointPVBuilder$InterpolationFactory_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, WaypointPVBuilder$InterpolationFactory::initializeClass, 1)))
          return NULL;
        return t_WaypointPVBuilder$InterpolationFactory::wrap_Object(WaypointPVBuilder$InterpolationFactory(((t_WaypointPVBuilder$InterpolationFactory *) arg)->object.this$));
      }
      static PyObject *t_WaypointPVBuilder$InterpolationFactory_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, WaypointPVBuilder$InterpolationFactory::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_WaypointPVBuilder$InterpolationFactory_create(t_WaypointPVBuilder$InterpolationFactory *self, PyObject *args)
      {
        ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
        ::org::orekit::bodies::GeodeticPoint a1((jobject) NULL);
        ::org::orekit::time::AbsoluteDate a2((jobject) NULL);
        ::org::orekit::bodies::GeodeticPoint a3((jobject) NULL);
        ::org::orekit::bodies::OneAxisEllipsoid a4((jobject) NULL);
        ::org::orekit::utils::PVCoordinatesProvider result((jobject) NULL);

        if (!parseArgs(args, "kkkkk", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::bodies::GeodeticPoint::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::bodies::GeodeticPoint::initializeClass, ::org::orekit::bodies::OneAxisEllipsoid::initializeClass, &a0, &a1, &a2, &a3, &a4))
        {
          OBJ_CALL(result = self->object.create(a0, a1, a2, a3, a4));
          return ::org::orekit::utils::t_PVCoordinatesProvider::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "create", args);
        return NULL;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/section/KvnStructureKey.h"
#include "org/orekit/files/ccsds/utils/lexical/ParseToken.h"
#include "org/orekit/files/ccsds/utils/parsing/AbstractConstituentParser.h"
#include "java/lang/Class.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "org/orekit/files/ccsds/section/KvnStructureKey.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace section {

          ::java::lang::Class *KvnStructureKey::class$ = NULL;
          jmethodID *KvnStructureKey::mids$ = NULL;
          bool KvnStructureKey::live$ = false;
          KvnStructureKey *KvnStructureKey::DATA = NULL;
          KvnStructureKey *KvnStructureKey::META = NULL;

          jclass KvnStructureKey::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/section/KvnStructureKey");

              mids$ = new jmethodID[max_mid];
              mids$[mid_process_7dcff8364717845d] = env->getMethodID(cls, "process", "(Lorg/orekit/files/ccsds/utils/lexical/ParseToken;Lorg/orekit/files/ccsds/utils/parsing/AbstractConstituentParser;)Z");
              mids$[mid_valueOf_fd55f36d1cf9d170] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/files/ccsds/section/KvnStructureKey;");
              mids$[mid_values_be224d2d828c5e16] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/files/ccsds/section/KvnStructureKey;");

              class$ = new ::java::lang::Class(cls);
              cls = (jclass) class$->this$;

              DATA = new KvnStructureKey(env->getStaticObjectField(cls, "DATA", "Lorg/orekit/files/ccsds/section/KvnStructureKey;"));
              META = new KvnStructureKey(env->getStaticObjectField(cls, "META", "Lorg/orekit/files/ccsds/section/KvnStructureKey;"));
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          jboolean KvnStructureKey::process(const ::org::orekit::files::ccsds::utils::lexical::ParseToken & a0, const ::org::orekit::files::ccsds::utils::parsing::AbstractConstituentParser & a1) const
          {
            return env->callBooleanMethod(this$, mids$[mid_process_7dcff8364717845d], a0.this$, a1.this$);
          }

          KvnStructureKey KvnStructureKey::valueOf(const ::java::lang::String & a0)
          {
            jclass cls = env->getClass(initializeClass);
            return KvnStructureKey(env->callStaticObjectMethod(cls, mids$[mid_valueOf_fd55f36d1cf9d170], a0.this$));
          }

          JArray< KvnStructureKey > KvnStructureKey::values()
          {
            jclass cls = env->getClass(initializeClass);
            return JArray< KvnStructureKey >(env->callStaticObjectMethod(cls, mids$[mid_values_be224d2d828c5e16]));
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
        namespace section {
          static PyObject *t_KvnStructureKey_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_KvnStructureKey_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_KvnStructureKey_of_(t_KvnStructureKey *self, PyObject *args);
          static PyObject *t_KvnStructureKey_process(t_KvnStructureKey *self, PyObject *args);
          static PyObject *t_KvnStructureKey_valueOf(PyTypeObject *type, PyObject *args);
          static PyObject *t_KvnStructureKey_values(PyTypeObject *type);
          static PyObject *t_KvnStructureKey_get__parameters_(t_KvnStructureKey *self, void *data);
          static PyGetSetDef t_KvnStructureKey__fields_[] = {
            DECLARE_GET_FIELD(t_KvnStructureKey, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_KvnStructureKey__methods_[] = {
            DECLARE_METHOD(t_KvnStructureKey, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_KvnStructureKey, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_KvnStructureKey, of_, METH_VARARGS),
            DECLARE_METHOD(t_KvnStructureKey, process, METH_VARARGS),
            DECLARE_METHOD(t_KvnStructureKey, valueOf, METH_VARARGS | METH_CLASS),
            DECLARE_METHOD(t_KvnStructureKey, values, METH_NOARGS | METH_CLASS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(KvnStructureKey)[] = {
            { Py_tp_methods, t_KvnStructureKey__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { Py_tp_getset, t_KvnStructureKey__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(KvnStructureKey)[] = {
            &PY_TYPE_DEF(::java::lang::Enum),
            NULL
          };

          DEFINE_TYPE(KvnStructureKey, t_KvnStructureKey, KvnStructureKey);
          PyObject *t_KvnStructureKey::wrap_Object(const KvnStructureKey& object, PyTypeObject *p0)
          {
            PyObject *obj = t_KvnStructureKey::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_KvnStructureKey *self = (t_KvnStructureKey *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          PyObject *t_KvnStructureKey::wrap_jobject(const jobject& object, PyTypeObject *p0)
          {
            PyObject *obj = t_KvnStructureKey::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_KvnStructureKey *self = (t_KvnStructureKey *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          void t_KvnStructureKey::install(PyObject *module)
          {
            installType(&PY_TYPE(KvnStructureKey), &PY_TYPE_DEF(KvnStructureKey), module, "KvnStructureKey", 0);
          }

          void t_KvnStructureKey::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(KvnStructureKey), "class_", make_descriptor(KvnStructureKey::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(KvnStructureKey), "wrapfn_", make_descriptor(t_KvnStructureKey::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(KvnStructureKey), "boxfn_", make_descriptor(boxObject));
            env->getClass(KvnStructureKey::initializeClass);
            PyObject_SetAttrString((PyObject *) PY_TYPE(KvnStructureKey), "DATA", make_descriptor(t_KvnStructureKey::wrap_Object(*KvnStructureKey::DATA)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(KvnStructureKey), "META", make_descriptor(t_KvnStructureKey::wrap_Object(*KvnStructureKey::META)));
          }

          static PyObject *t_KvnStructureKey_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, KvnStructureKey::initializeClass, 1)))
              return NULL;
            return t_KvnStructureKey::wrap_Object(KvnStructureKey(((t_KvnStructureKey *) arg)->object.this$));
          }
          static PyObject *t_KvnStructureKey_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, KvnStructureKey::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_KvnStructureKey_of_(t_KvnStructureKey *self, PyObject *args)
          {
            if (!parseArg(args, "T", 1, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static PyObject *t_KvnStructureKey_process(t_KvnStructureKey *self, PyObject *args)
          {
            ::org::orekit::files::ccsds::utils::lexical::ParseToken a0((jobject) NULL);
            ::org::orekit::files::ccsds::utils::parsing::AbstractConstituentParser a1((jobject) NULL);
            PyTypeObject **p1;
            jboolean result;

            if (!parseArgs(args, "kK", ::org::orekit::files::ccsds::utils::lexical::ParseToken::initializeClass, ::org::orekit::files::ccsds::utils::parsing::AbstractConstituentParser::initializeClass, &a0, &a1, &p1, ::org::orekit::files::ccsds::utils::parsing::t_AbstractConstituentParser::parameters_))
            {
              OBJ_CALL(result = self->object.process(a0, a1));
              Py_RETURN_BOOL(result);
            }

            PyErr_SetArgsError((PyObject *) self, "process", args);
            return NULL;
          }

          static PyObject *t_KvnStructureKey_valueOf(PyTypeObject *type, PyObject *args)
          {
            ::java::lang::String a0((jobject) NULL);
            KvnStructureKey result((jobject) NULL);

            if (!parseArgs(args, "s", &a0))
            {
              OBJ_CALL(result = ::org::orekit::files::ccsds::section::KvnStructureKey::valueOf(a0));
              return t_KvnStructureKey::wrap_Object(result);
            }

            return callSuper(type, "valueOf", args, 2);
          }

          static PyObject *t_KvnStructureKey_values(PyTypeObject *type)
          {
            JArray< KvnStructureKey > result((jobject) NULL);
            OBJ_CALL(result = ::org::orekit::files::ccsds::section::KvnStructureKey::values());
            return JArray<jobject>(result.this$).wrap(t_KvnStructureKey::wrap_jobject);
          }
          static PyObject *t_KvnStructureKey_get__parameters_(t_KvnStructureKey *self, void *data)
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
#include "org/orekit/gnss/metric/messages/ssr/igm/SsrIgm06Header.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace metric {
        namespace messages {
          namespace ssr {
            namespace igm {

              ::java::lang::Class *SsrIgm06Header::class$ = NULL;
              jmethodID *SsrIgm06Header::mids$ = NULL;
              bool SsrIgm06Header::live$ = false;

              jclass SsrIgm06Header::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/gnss/metric/messages/ssr/igm/SsrIgm06Header");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_init$_ff7cb6c242604316] = env->getMethodID(cls, "<init>", "()V");
                  mids$[mid_isConsistencyMaintained_eee3de00fe971136] = env->getMethodID(cls, "isConsistencyMaintained", "()Z");
                  mids$[mid_isMelbourneWubbenaConsistencyMaintained_eee3de00fe971136] = env->getMethodID(cls, "isMelbourneWubbenaConsistencyMaintained", "()Z");
                  mids$[mid_setIsConsistencyMaintained_b35db77cae58639e] = env->getMethodID(cls, "setIsConsistencyMaintained", "(Z)V");
                  mids$[mid_setIsMelbourneWubbenaConsistencyMaintained_b35db77cae58639e] = env->getMethodID(cls, "setIsMelbourneWubbenaConsistencyMaintained", "(Z)V");

                  class$ = new ::java::lang::Class(cls);
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              SsrIgm06Header::SsrIgm06Header() : ::org::orekit::gnss::metric::messages::ssr::igm::SsrIgmHeader(env->newObject(initializeClass, &mids$, mid_init$_ff7cb6c242604316)) {}

              jboolean SsrIgm06Header::isConsistencyMaintained() const
              {
                return env->callBooleanMethod(this$, mids$[mid_isConsistencyMaintained_eee3de00fe971136]);
              }

              jboolean SsrIgm06Header::isMelbourneWubbenaConsistencyMaintained() const
              {
                return env->callBooleanMethod(this$, mids$[mid_isMelbourneWubbenaConsistencyMaintained_eee3de00fe971136]);
              }

              void SsrIgm06Header::setIsConsistencyMaintained(jboolean a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setIsConsistencyMaintained_b35db77cae58639e], a0);
              }

              void SsrIgm06Header::setIsMelbourneWubbenaConsistencyMaintained(jboolean a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setIsMelbourneWubbenaConsistencyMaintained_b35db77cae58639e], a0);
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
              static PyObject *t_SsrIgm06Header_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_SsrIgm06Header_instance_(PyTypeObject *type, PyObject *arg);
              static int t_SsrIgm06Header_init_(t_SsrIgm06Header *self, PyObject *args, PyObject *kwds);
              static PyObject *t_SsrIgm06Header_isConsistencyMaintained(t_SsrIgm06Header *self);
              static PyObject *t_SsrIgm06Header_isMelbourneWubbenaConsistencyMaintained(t_SsrIgm06Header *self);
              static PyObject *t_SsrIgm06Header_setIsConsistencyMaintained(t_SsrIgm06Header *self, PyObject *arg);
              static PyObject *t_SsrIgm06Header_setIsMelbourneWubbenaConsistencyMaintained(t_SsrIgm06Header *self, PyObject *arg);
              static PyObject *t_SsrIgm06Header_get__consistencyMaintained(t_SsrIgm06Header *self, void *data);
              static PyObject *t_SsrIgm06Header_get__melbourneWubbenaConsistencyMaintained(t_SsrIgm06Header *self, void *data);
              static PyGetSetDef t_SsrIgm06Header__fields_[] = {
                DECLARE_GET_FIELD(t_SsrIgm06Header, consistencyMaintained),
                DECLARE_GET_FIELD(t_SsrIgm06Header, melbourneWubbenaConsistencyMaintained),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_SsrIgm06Header__methods_[] = {
                DECLARE_METHOD(t_SsrIgm06Header, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_SsrIgm06Header, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_SsrIgm06Header, isConsistencyMaintained, METH_NOARGS),
                DECLARE_METHOD(t_SsrIgm06Header, isMelbourneWubbenaConsistencyMaintained, METH_NOARGS),
                DECLARE_METHOD(t_SsrIgm06Header, setIsConsistencyMaintained, METH_O),
                DECLARE_METHOD(t_SsrIgm06Header, setIsMelbourneWubbenaConsistencyMaintained, METH_O),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(SsrIgm06Header)[] = {
                { Py_tp_methods, t_SsrIgm06Header__methods_ },
                { Py_tp_init, (void *) t_SsrIgm06Header_init_ },
                { Py_tp_getset, t_SsrIgm06Header__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(SsrIgm06Header)[] = {
                &PY_TYPE_DEF(::org::orekit::gnss::metric::messages::ssr::igm::SsrIgmHeader),
                NULL
              };

              DEFINE_TYPE(SsrIgm06Header, t_SsrIgm06Header, SsrIgm06Header);

              void t_SsrIgm06Header::install(PyObject *module)
              {
                installType(&PY_TYPE(SsrIgm06Header), &PY_TYPE_DEF(SsrIgm06Header), module, "SsrIgm06Header", 0);
              }

              void t_SsrIgm06Header::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(SsrIgm06Header), "class_", make_descriptor(SsrIgm06Header::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(SsrIgm06Header), "wrapfn_", make_descriptor(t_SsrIgm06Header::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(SsrIgm06Header), "boxfn_", make_descriptor(boxObject));
              }

              static PyObject *t_SsrIgm06Header_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, SsrIgm06Header::initializeClass, 1)))
                  return NULL;
                return t_SsrIgm06Header::wrap_Object(SsrIgm06Header(((t_SsrIgm06Header *) arg)->object.this$));
              }
              static PyObject *t_SsrIgm06Header_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, SsrIgm06Header::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static int t_SsrIgm06Header_init_(t_SsrIgm06Header *self, PyObject *args, PyObject *kwds)
              {
                SsrIgm06Header object((jobject) NULL);

                INT_CALL(object = SsrIgm06Header());
                self->object = object;

                return 0;
              }

              static PyObject *t_SsrIgm06Header_isConsistencyMaintained(t_SsrIgm06Header *self)
              {
                jboolean result;
                OBJ_CALL(result = self->object.isConsistencyMaintained());
                Py_RETURN_BOOL(result);
              }

              static PyObject *t_SsrIgm06Header_isMelbourneWubbenaConsistencyMaintained(t_SsrIgm06Header *self)
              {
                jboolean result;
                OBJ_CALL(result = self->object.isMelbourneWubbenaConsistencyMaintained());
                Py_RETURN_BOOL(result);
              }

              static PyObject *t_SsrIgm06Header_setIsConsistencyMaintained(t_SsrIgm06Header *self, PyObject *arg)
              {
                jboolean a0;

                if (!parseArg(arg, "Z", &a0))
                {
                  OBJ_CALL(self->object.setIsConsistencyMaintained(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setIsConsistencyMaintained", arg);
                return NULL;
              }

              static PyObject *t_SsrIgm06Header_setIsMelbourneWubbenaConsistencyMaintained(t_SsrIgm06Header *self, PyObject *arg)
              {
                jboolean a0;

                if (!parseArg(arg, "Z", &a0))
                {
                  OBJ_CALL(self->object.setIsMelbourneWubbenaConsistencyMaintained(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setIsMelbourneWubbenaConsistencyMaintained", arg);
                return NULL;
              }

              static PyObject *t_SsrIgm06Header_get__consistencyMaintained(t_SsrIgm06Header *self, void *data)
              {
                jboolean value;
                OBJ_CALL(value = self->object.isConsistencyMaintained());
                Py_RETURN_BOOL(value);
              }

              static PyObject *t_SsrIgm06Header_get__melbourneWubbenaConsistencyMaintained(t_SsrIgm06Header *self, void *data)
              {
                jboolean value;
                OBJ_CALL(value = self->object.isMelbourneWubbenaConsistencyMaintained());
                Py_RETURN_BOOL(value);
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
#include "org/hipparchus/special/elliptic/jacobi/CopolarC.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace special {
      namespace elliptic {
        namespace jacobi {

          ::java::lang::Class *CopolarC::class$ = NULL;
          jmethodID *CopolarC::mids$ = NULL;
          bool CopolarC::live$ = false;

          jclass CopolarC::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/hipparchus/special/elliptic/jacobi/CopolarC");

              mids$ = new jmethodID[max_mid];
              mids$[mid_dc_9981f74b2d109da6] = env->getMethodID(cls, "dc", "()D");
              mids$[mid_nc_9981f74b2d109da6] = env->getMethodID(cls, "nc", "()D");
              mids$[mid_sc_9981f74b2d109da6] = env->getMethodID(cls, "sc", "()D");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          jdouble CopolarC::dc() const
          {
            return env->callDoubleMethod(this$, mids$[mid_dc_9981f74b2d109da6]);
          }

          jdouble CopolarC::nc() const
          {
            return env->callDoubleMethod(this$, mids$[mid_nc_9981f74b2d109da6]);
          }

          jdouble CopolarC::sc() const
          {
            return env->callDoubleMethod(this$, mids$[mid_sc_9981f74b2d109da6]);
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
          static PyObject *t_CopolarC_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_CopolarC_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_CopolarC_dc(t_CopolarC *self);
          static PyObject *t_CopolarC_nc(t_CopolarC *self);
          static PyObject *t_CopolarC_sc(t_CopolarC *self);

          static PyMethodDef t_CopolarC__methods_[] = {
            DECLARE_METHOD(t_CopolarC, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_CopolarC, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_CopolarC, dc, METH_NOARGS),
            DECLARE_METHOD(t_CopolarC, nc, METH_NOARGS),
            DECLARE_METHOD(t_CopolarC, sc, METH_NOARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(CopolarC)[] = {
            { Py_tp_methods, t_CopolarC__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(CopolarC)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(CopolarC, t_CopolarC, CopolarC);

          void t_CopolarC::install(PyObject *module)
          {
            installType(&PY_TYPE(CopolarC), &PY_TYPE_DEF(CopolarC), module, "CopolarC", 0);
          }

          void t_CopolarC::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(CopolarC), "class_", make_descriptor(CopolarC::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(CopolarC), "wrapfn_", make_descriptor(t_CopolarC::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(CopolarC), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_CopolarC_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, CopolarC::initializeClass, 1)))
              return NULL;
            return t_CopolarC::wrap_Object(CopolarC(((t_CopolarC *) arg)->object.this$));
          }
          static PyObject *t_CopolarC_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, CopolarC::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_CopolarC_dc(t_CopolarC *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.dc());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_CopolarC_nc(t_CopolarC *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.nc());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_CopolarC_sc(t_CopolarC *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.sc());
            return PyFloat_FromDouble((double) result);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/stat/descriptive/moment/GeometricMean.h"
#include "org/hipparchus/stat/descriptive/moment/GeometricMean.h"
#include "org/hipparchus/stat/descriptive/AggregatableStatistic.h"
#include "java/io/Serializable.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "java/lang/Class.h"
#include "org/hipparchus/stat/descriptive/summary/SumOfLogs.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace stat {
      namespace descriptive {
        namespace moment {

          ::java::lang::Class *GeometricMean::class$ = NULL;
          jmethodID *GeometricMean::mids$ = NULL;
          bool GeometricMean::live$ = false;

          jclass GeometricMean::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/hipparchus/stat/descriptive/moment/GeometricMean");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_ff7cb6c242604316] = env->getMethodID(cls, "<init>", "()V");
              mids$[mid_init$_36a30fff2b6ee27c] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/stat/descriptive/summary/SumOfLogs;)V");
              mids$[mid_aggregate_9d417ab40feb5691] = env->getMethodID(cls, "aggregate", "(Lorg/hipparchus/stat/descriptive/moment/GeometricMean;)V");
              mids$[mid_clear_ff7cb6c242604316] = env->getMethodID(cls, "clear", "()V");
              mids$[mid_copy_338a3fd864bc17df] = env->getMethodID(cls, "copy", "()Lorg/hipparchus/stat/descriptive/moment/GeometricMean;");
              mids$[mid_evaluate_620ea098e5f0da00] = env->getMethodID(cls, "evaluate", "([DII)D");
              mids$[mid_getN_42c72b98e3c2e08a] = env->getMethodID(cls, "getN", "()J");
              mids$[mid_getResult_9981f74b2d109da6] = env->getMethodID(cls, "getResult", "()D");
              mids$[mid_increment_1ad26e8c8c0cd65b] = env->getMethodID(cls, "increment", "(D)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          GeometricMean::GeometricMean() : ::org::hipparchus::stat::descriptive::AbstractStorelessUnivariateStatistic(env->newObject(initializeClass, &mids$, mid_init$_ff7cb6c242604316)) {}

          GeometricMean::GeometricMean(const ::org::hipparchus::stat::descriptive::summary::SumOfLogs & a0) : ::org::hipparchus::stat::descriptive::AbstractStorelessUnivariateStatistic(env->newObject(initializeClass, &mids$, mid_init$_36a30fff2b6ee27c, a0.this$)) {}

          void GeometricMean::aggregate(const GeometricMean & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_aggregate_9d417ab40feb5691], a0.this$);
          }

          void GeometricMean::clear() const
          {
            env->callVoidMethod(this$, mids$[mid_clear_ff7cb6c242604316]);
          }

          GeometricMean GeometricMean::copy() const
          {
            return GeometricMean(env->callObjectMethod(this$, mids$[mid_copy_338a3fd864bc17df]));
          }

          jdouble GeometricMean::evaluate(const JArray< jdouble > & a0, jint a1, jint a2) const
          {
            return env->callDoubleMethod(this$, mids$[mid_evaluate_620ea098e5f0da00], a0.this$, a1, a2);
          }

          jlong GeometricMean::getN() const
          {
            return env->callLongMethod(this$, mids$[mid_getN_42c72b98e3c2e08a]);
          }

          jdouble GeometricMean::getResult() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getResult_9981f74b2d109da6]);
          }

          void GeometricMean::increment(jdouble a0) const
          {
            env->callVoidMethod(this$, mids$[mid_increment_1ad26e8c8c0cd65b], a0);
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
    namespace stat {
      namespace descriptive {
        namespace moment {
          static PyObject *t_GeometricMean_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_GeometricMean_instance_(PyTypeObject *type, PyObject *arg);
          static int t_GeometricMean_init_(t_GeometricMean *self, PyObject *args, PyObject *kwds);
          static PyObject *t_GeometricMean_aggregate(t_GeometricMean *self, PyObject *arg);
          static PyObject *t_GeometricMean_clear(t_GeometricMean *self, PyObject *args);
          static PyObject *t_GeometricMean_copy(t_GeometricMean *self, PyObject *args);
          static PyObject *t_GeometricMean_evaluate(t_GeometricMean *self, PyObject *args);
          static PyObject *t_GeometricMean_getN(t_GeometricMean *self, PyObject *args);
          static PyObject *t_GeometricMean_getResult(t_GeometricMean *self, PyObject *args);
          static PyObject *t_GeometricMean_increment(t_GeometricMean *self, PyObject *args);
          static PyObject *t_GeometricMean_get__n(t_GeometricMean *self, void *data);
          static PyObject *t_GeometricMean_get__result(t_GeometricMean *self, void *data);
          static PyGetSetDef t_GeometricMean__fields_[] = {
            DECLARE_GET_FIELD(t_GeometricMean, n),
            DECLARE_GET_FIELD(t_GeometricMean, result),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_GeometricMean__methods_[] = {
            DECLARE_METHOD(t_GeometricMean, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_GeometricMean, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_GeometricMean, aggregate, METH_O),
            DECLARE_METHOD(t_GeometricMean, clear, METH_VARARGS),
            DECLARE_METHOD(t_GeometricMean, copy, METH_VARARGS),
            DECLARE_METHOD(t_GeometricMean, evaluate, METH_VARARGS),
            DECLARE_METHOD(t_GeometricMean, getN, METH_VARARGS),
            DECLARE_METHOD(t_GeometricMean, getResult, METH_VARARGS),
            DECLARE_METHOD(t_GeometricMean, increment, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(GeometricMean)[] = {
            { Py_tp_methods, t_GeometricMean__methods_ },
            { Py_tp_init, (void *) t_GeometricMean_init_ },
            { Py_tp_getset, t_GeometricMean__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(GeometricMean)[] = {
            &PY_TYPE_DEF(::org::hipparchus::stat::descriptive::AbstractStorelessUnivariateStatistic),
            NULL
          };

          DEFINE_TYPE(GeometricMean, t_GeometricMean, GeometricMean);

          void t_GeometricMean::install(PyObject *module)
          {
            installType(&PY_TYPE(GeometricMean), &PY_TYPE_DEF(GeometricMean), module, "GeometricMean", 0);
          }

          void t_GeometricMean::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(GeometricMean), "class_", make_descriptor(GeometricMean::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(GeometricMean), "wrapfn_", make_descriptor(t_GeometricMean::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(GeometricMean), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_GeometricMean_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, GeometricMean::initializeClass, 1)))
              return NULL;
            return t_GeometricMean::wrap_Object(GeometricMean(((t_GeometricMean *) arg)->object.this$));
          }
          static PyObject *t_GeometricMean_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, GeometricMean::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_GeometricMean_init_(t_GeometricMean *self, PyObject *args, PyObject *kwds)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 0:
              {
                GeometricMean object((jobject) NULL);

                INT_CALL(object = GeometricMean());
                self->object = object;
                break;
              }
             case 1:
              {
                ::org::hipparchus::stat::descriptive::summary::SumOfLogs a0((jobject) NULL);
                GeometricMean object((jobject) NULL);

                if (!parseArgs(args, "k", ::org::hipparchus::stat::descriptive::summary::SumOfLogs::initializeClass, &a0))
                {
                  INT_CALL(object = GeometricMean(a0));
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

          static PyObject *t_GeometricMean_aggregate(t_GeometricMean *self, PyObject *arg)
          {
            GeometricMean a0((jobject) NULL);

            if (!parseArg(arg, "k", GeometricMean::initializeClass, &a0))
            {
              OBJ_CALL(self->object.aggregate(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "aggregate", arg);
            return NULL;
          }

          static PyObject *t_GeometricMean_clear(t_GeometricMean *self, PyObject *args)
          {

            if (!parseArgs(args, ""))
            {
              OBJ_CALL(self->object.clear());
              Py_RETURN_NONE;
            }

            return callSuper(PY_TYPE(GeometricMean), (PyObject *) self, "clear", args, 2);
          }

          static PyObject *t_GeometricMean_copy(t_GeometricMean *self, PyObject *args)
          {
            GeometricMean result((jobject) NULL);

            if (!parseArgs(args, ""))
            {
              OBJ_CALL(result = self->object.copy());
              return t_GeometricMean::wrap_Object(result);
            }

            return callSuper(PY_TYPE(GeometricMean), (PyObject *) self, "copy", args, 2);
          }

          static PyObject *t_GeometricMean_evaluate(t_GeometricMean *self, PyObject *args)
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

            return callSuper(PY_TYPE(GeometricMean), (PyObject *) self, "evaluate", args, 2);
          }

          static PyObject *t_GeometricMean_getN(t_GeometricMean *self, PyObject *args)
          {
            jlong result;

            if (!parseArgs(args, ""))
            {
              OBJ_CALL(result = self->object.getN());
              return PyLong_FromLongLong((PY_LONG_LONG) result);
            }

            return callSuper(PY_TYPE(GeometricMean), (PyObject *) self, "getN", args, 2);
          }

          static PyObject *t_GeometricMean_getResult(t_GeometricMean *self, PyObject *args)
          {
            jdouble result;

            if (!parseArgs(args, ""))
            {
              OBJ_CALL(result = self->object.getResult());
              return PyFloat_FromDouble((double) result);
            }

            return callSuper(PY_TYPE(GeometricMean), (PyObject *) self, "getResult", args, 2);
          }

          static PyObject *t_GeometricMean_increment(t_GeometricMean *self, PyObject *args)
          {
            jdouble a0;

            if (!parseArgs(args, "D", &a0))
            {
              OBJ_CALL(self->object.increment(a0));
              Py_RETURN_NONE;
            }

            return callSuper(PY_TYPE(GeometricMean), (PyObject *) self, "increment", args, 2);
          }

          static PyObject *t_GeometricMean_get__n(t_GeometricMean *self, void *data)
          {
            jlong value;
            OBJ_CALL(value = self->object.getN());
            return PyLong_FromLongLong((PY_LONG_LONG) value);
          }

          static PyObject *t_GeometricMean_get__result(t_GeometricMean *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getResult());
            return PyFloat_FromDouble((double) value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/analysis/function/Sigmoid$Parametric.h"
#include "org/hipparchus/analysis/ParametricUnivariateFunction.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "org/hipparchus/exception/NullArgumentException.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace function {

        ::java::lang::Class *Sigmoid$Parametric::class$ = NULL;
        jmethodID *Sigmoid$Parametric::mids$ = NULL;
        bool Sigmoid$Parametric::live$ = false;

        jclass Sigmoid$Parametric::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/function/Sigmoid$Parametric");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_ff7cb6c242604316] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_gradient_bfc955188bf36f2c] = env->getMethodID(cls, "gradient", "(D[D)[D");
            mids$[mid_value_4f42c7a8793320e4] = env->getMethodID(cls, "value", "(D[D)D");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        Sigmoid$Parametric::Sigmoid$Parametric() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_ff7cb6c242604316)) {}

        JArray< jdouble > Sigmoid$Parametric::gradient(jdouble a0, const JArray< jdouble > & a1) const
        {
          return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_gradient_bfc955188bf36f2c], a0, a1.this$));
        }

        jdouble Sigmoid$Parametric::value(jdouble a0, const JArray< jdouble > & a1) const
        {
          return env->callDoubleMethod(this$, mids$[mid_value_4f42c7a8793320e4], a0, a1.this$);
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
        static PyObject *t_Sigmoid$Parametric_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_Sigmoid$Parametric_instance_(PyTypeObject *type, PyObject *arg);
        static int t_Sigmoid$Parametric_init_(t_Sigmoid$Parametric *self, PyObject *args, PyObject *kwds);
        static PyObject *t_Sigmoid$Parametric_gradient(t_Sigmoid$Parametric *self, PyObject *args);
        static PyObject *t_Sigmoid$Parametric_value(t_Sigmoid$Parametric *self, PyObject *args);

        static PyMethodDef t_Sigmoid$Parametric__methods_[] = {
          DECLARE_METHOD(t_Sigmoid$Parametric, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Sigmoid$Parametric, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Sigmoid$Parametric, gradient, METH_VARARGS),
          DECLARE_METHOD(t_Sigmoid$Parametric, value, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(Sigmoid$Parametric)[] = {
          { Py_tp_methods, t_Sigmoid$Parametric__methods_ },
          { Py_tp_init, (void *) t_Sigmoid$Parametric_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(Sigmoid$Parametric)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(Sigmoid$Parametric, t_Sigmoid$Parametric, Sigmoid$Parametric);

        void t_Sigmoid$Parametric::install(PyObject *module)
        {
          installType(&PY_TYPE(Sigmoid$Parametric), &PY_TYPE_DEF(Sigmoid$Parametric), module, "Sigmoid$Parametric", 0);
        }

        void t_Sigmoid$Parametric::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(Sigmoid$Parametric), "class_", make_descriptor(Sigmoid$Parametric::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Sigmoid$Parametric), "wrapfn_", make_descriptor(t_Sigmoid$Parametric::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Sigmoid$Parametric), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_Sigmoid$Parametric_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, Sigmoid$Parametric::initializeClass, 1)))
            return NULL;
          return t_Sigmoid$Parametric::wrap_Object(Sigmoid$Parametric(((t_Sigmoid$Parametric *) arg)->object.this$));
        }
        static PyObject *t_Sigmoid$Parametric_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, Sigmoid$Parametric::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_Sigmoid$Parametric_init_(t_Sigmoid$Parametric *self, PyObject *args, PyObject *kwds)
        {
          Sigmoid$Parametric object((jobject) NULL);

          INT_CALL(object = Sigmoid$Parametric());
          self->object = object;

          return 0;
        }

        static PyObject *t_Sigmoid$Parametric_gradient(t_Sigmoid$Parametric *self, PyObject *args)
        {
          jdouble a0;
          JArray< jdouble > a1((jobject) NULL);
          JArray< jdouble > result((jobject) NULL);

          if (!parseArgs(args, "D[D", &a0, &a1))
          {
            OBJ_CALL(result = self->object.gradient(a0, a1));
            return result.wrap();
          }

          PyErr_SetArgsError((PyObject *) self, "gradient", args);
          return NULL;
        }

        static PyObject *t_Sigmoid$Parametric_value(t_Sigmoid$Parametric *self, PyObject *args)
        {
          jdouble a0;
          JArray< jdouble > a1((jobject) NULL);
          jdouble result;

          if (!parseArgs(args, "D[D", &a0, &a1))
          {
            OBJ_CALL(result = self->object.value(a0, a1));
            return PyFloat_FromDouble((double) result);
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
#include "org/orekit/utils/CartesianDerivativesFilter.h"
#include "org/orekit/utils/CartesianDerivativesFilter.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "java/lang/IllegalArgumentException.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace utils {

      ::java::lang::Class *CartesianDerivativesFilter::class$ = NULL;
      jmethodID *CartesianDerivativesFilter::mids$ = NULL;
      bool CartesianDerivativesFilter::live$ = false;
      CartesianDerivativesFilter *CartesianDerivativesFilter::USE_P = NULL;
      CartesianDerivativesFilter *CartesianDerivativesFilter::USE_PV = NULL;
      CartesianDerivativesFilter *CartesianDerivativesFilter::USE_PVA = NULL;

      jclass CartesianDerivativesFilter::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/utils/CartesianDerivativesFilter");

          mids$ = new jmethodID[max_mid];
          mids$[mid_getFilter_4ea55c50f76fe240] = env->getStaticMethodID(cls, "getFilter", "(I)Lorg/orekit/utils/CartesianDerivativesFilter;");
          mids$[mid_getMaxOrder_d6ab429752e7c267] = env->getMethodID(cls, "getMaxOrder", "()I");
          mids$[mid_valueOf_77ff8b9facb6c7f0] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/utils/CartesianDerivativesFilter;");
          mids$[mid_values_62aac2887a7867fd] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/utils/CartesianDerivativesFilter;");

          class$ = new ::java::lang::Class(cls);
          cls = (jclass) class$->this$;

          USE_P = new CartesianDerivativesFilter(env->getStaticObjectField(cls, "USE_P", "Lorg/orekit/utils/CartesianDerivativesFilter;"));
          USE_PV = new CartesianDerivativesFilter(env->getStaticObjectField(cls, "USE_PV", "Lorg/orekit/utils/CartesianDerivativesFilter;"));
          USE_PVA = new CartesianDerivativesFilter(env->getStaticObjectField(cls, "USE_PVA", "Lorg/orekit/utils/CartesianDerivativesFilter;"));
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      CartesianDerivativesFilter CartesianDerivativesFilter::getFilter(jint a0)
      {
        jclass cls = env->getClass(initializeClass);
        return CartesianDerivativesFilter(env->callStaticObjectMethod(cls, mids$[mid_getFilter_4ea55c50f76fe240], a0));
      }

      jint CartesianDerivativesFilter::getMaxOrder() const
      {
        return env->callIntMethod(this$, mids$[mid_getMaxOrder_d6ab429752e7c267]);
      }

      CartesianDerivativesFilter CartesianDerivativesFilter::valueOf(const ::java::lang::String & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return CartesianDerivativesFilter(env->callStaticObjectMethod(cls, mids$[mid_valueOf_77ff8b9facb6c7f0], a0.this$));
      }

      JArray< CartesianDerivativesFilter > CartesianDerivativesFilter::values()
      {
        jclass cls = env->getClass(initializeClass);
        return JArray< CartesianDerivativesFilter >(env->callStaticObjectMethod(cls, mids$[mid_values_62aac2887a7867fd]));
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
      static PyObject *t_CartesianDerivativesFilter_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_CartesianDerivativesFilter_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_CartesianDerivativesFilter_of_(t_CartesianDerivativesFilter *self, PyObject *args);
      static PyObject *t_CartesianDerivativesFilter_getFilter(PyTypeObject *type, PyObject *arg);
      static PyObject *t_CartesianDerivativesFilter_getMaxOrder(t_CartesianDerivativesFilter *self);
      static PyObject *t_CartesianDerivativesFilter_valueOf(PyTypeObject *type, PyObject *args);
      static PyObject *t_CartesianDerivativesFilter_values(PyTypeObject *type);
      static PyObject *t_CartesianDerivativesFilter_get__maxOrder(t_CartesianDerivativesFilter *self, void *data);
      static PyObject *t_CartesianDerivativesFilter_get__parameters_(t_CartesianDerivativesFilter *self, void *data);
      static PyGetSetDef t_CartesianDerivativesFilter__fields_[] = {
        DECLARE_GET_FIELD(t_CartesianDerivativesFilter, maxOrder),
        DECLARE_GET_FIELD(t_CartesianDerivativesFilter, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_CartesianDerivativesFilter__methods_[] = {
        DECLARE_METHOD(t_CartesianDerivativesFilter, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_CartesianDerivativesFilter, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_CartesianDerivativesFilter, of_, METH_VARARGS),
        DECLARE_METHOD(t_CartesianDerivativesFilter, getFilter, METH_O | METH_CLASS),
        DECLARE_METHOD(t_CartesianDerivativesFilter, getMaxOrder, METH_NOARGS),
        DECLARE_METHOD(t_CartesianDerivativesFilter, valueOf, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_CartesianDerivativesFilter, values, METH_NOARGS | METH_CLASS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(CartesianDerivativesFilter)[] = {
        { Py_tp_methods, t_CartesianDerivativesFilter__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_CartesianDerivativesFilter__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(CartesianDerivativesFilter)[] = {
        &PY_TYPE_DEF(::java::lang::Enum),
        NULL
      };

      DEFINE_TYPE(CartesianDerivativesFilter, t_CartesianDerivativesFilter, CartesianDerivativesFilter);
      PyObject *t_CartesianDerivativesFilter::wrap_Object(const CartesianDerivativesFilter& object, PyTypeObject *p0)
      {
        PyObject *obj = t_CartesianDerivativesFilter::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_CartesianDerivativesFilter *self = (t_CartesianDerivativesFilter *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_CartesianDerivativesFilter::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_CartesianDerivativesFilter::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_CartesianDerivativesFilter *self = (t_CartesianDerivativesFilter *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_CartesianDerivativesFilter::install(PyObject *module)
      {
        installType(&PY_TYPE(CartesianDerivativesFilter), &PY_TYPE_DEF(CartesianDerivativesFilter), module, "CartesianDerivativesFilter", 0);
      }

      void t_CartesianDerivativesFilter::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(CartesianDerivativesFilter), "class_", make_descriptor(CartesianDerivativesFilter::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(CartesianDerivativesFilter), "wrapfn_", make_descriptor(t_CartesianDerivativesFilter::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(CartesianDerivativesFilter), "boxfn_", make_descriptor(boxObject));
        env->getClass(CartesianDerivativesFilter::initializeClass);
        PyObject_SetAttrString((PyObject *) PY_TYPE(CartesianDerivativesFilter), "USE_P", make_descriptor(t_CartesianDerivativesFilter::wrap_Object(*CartesianDerivativesFilter::USE_P)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(CartesianDerivativesFilter), "USE_PV", make_descriptor(t_CartesianDerivativesFilter::wrap_Object(*CartesianDerivativesFilter::USE_PV)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(CartesianDerivativesFilter), "USE_PVA", make_descriptor(t_CartesianDerivativesFilter::wrap_Object(*CartesianDerivativesFilter::USE_PVA)));
      }

      static PyObject *t_CartesianDerivativesFilter_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, CartesianDerivativesFilter::initializeClass, 1)))
          return NULL;
        return t_CartesianDerivativesFilter::wrap_Object(CartesianDerivativesFilter(((t_CartesianDerivativesFilter *) arg)->object.this$));
      }
      static PyObject *t_CartesianDerivativesFilter_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, CartesianDerivativesFilter::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_CartesianDerivativesFilter_of_(t_CartesianDerivativesFilter *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static PyObject *t_CartesianDerivativesFilter_getFilter(PyTypeObject *type, PyObject *arg)
      {
        jint a0;
        CartesianDerivativesFilter result((jobject) NULL);

        if (!parseArg(arg, "I", &a0))
        {
          OBJ_CALL(result = ::org::orekit::utils::CartesianDerivativesFilter::getFilter(a0));
          return t_CartesianDerivativesFilter::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "getFilter", arg);
        return NULL;
      }

      static PyObject *t_CartesianDerivativesFilter_getMaxOrder(t_CartesianDerivativesFilter *self)
      {
        jint result;
        OBJ_CALL(result = self->object.getMaxOrder());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_CartesianDerivativesFilter_valueOf(PyTypeObject *type, PyObject *args)
      {
        ::java::lang::String a0((jobject) NULL);
        CartesianDerivativesFilter result((jobject) NULL);

        if (!parseArgs(args, "s", &a0))
        {
          OBJ_CALL(result = ::org::orekit::utils::CartesianDerivativesFilter::valueOf(a0));
          return t_CartesianDerivativesFilter::wrap_Object(result);
        }

        return callSuper(type, "valueOf", args, 2);
      }

      static PyObject *t_CartesianDerivativesFilter_values(PyTypeObject *type)
      {
        JArray< CartesianDerivativesFilter > result((jobject) NULL);
        OBJ_CALL(result = ::org::orekit::utils::CartesianDerivativesFilter::values());
        return JArray<jobject>(result.this$).wrap(t_CartesianDerivativesFilter::wrap_jobject);
      }
      static PyObject *t_CartesianDerivativesFilter_get__parameters_(t_CartesianDerivativesFilter *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }

      static PyObject *t_CartesianDerivativesFilter_get__maxOrder(t_CartesianDerivativesFilter *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getMaxOrder());
        return PyLong_FromLong((long) value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/ssa/collision/shorttermencounter/probability/twod/FieldShortTermEncounter2DDefinition.h"
#include "org/orekit/propagation/FieldStateCovariance.h"
#include "org/orekit/ssa/collision/shorttermencounter/probability/twod/ShortTermEncounter2DDefinition.h"
#include "org/hipparchus/linear/FieldMatrix.h"
#include "org/hipparchus/geometry/euclidean/twod/FieldVector2D.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/orekit/frames/encounter/EncounterLOF.h"
#include "org/orekit/orbits/FieldOrbit.h"
#include "java/lang/Class.h"
#include "org/orekit/utils/FieldPVCoordinates.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/orekit/frames/encounter/EncounterLOFType.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace ssa {
      namespace collision {
        namespace shorttermencounter {
          namespace probability {
            namespace twod {

              ::java::lang::Class *FieldShortTermEncounter2DDefinition::class$ = NULL;
              jmethodID *FieldShortTermEncounter2DDefinition::mids$ = NULL;
              bool FieldShortTermEncounter2DDefinition::live$ = false;

              jclass FieldShortTermEncounter2DDefinition::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/ssa/collision/shorttermencounter/probability/twod/FieldShortTermEncounter2DDefinition");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_init$_08f07ab22d4b435b] = env->getMethodID(cls, "<init>", "(Lorg/orekit/orbits/FieldOrbit;Lorg/orekit/propagation/FieldStateCovariance;Lorg/orekit/orbits/FieldOrbit;Lorg/orekit/propagation/FieldStateCovariance;Lorg/hipparchus/CalculusFieldElement;)V");
                  mids$[mid_init$_ba391950ea4463a5] = env->getMethodID(cls, "<init>", "(Lorg/orekit/orbits/FieldOrbit;Lorg/orekit/propagation/FieldStateCovariance;Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/orbits/FieldOrbit;Lorg/orekit/propagation/FieldStateCovariance;Lorg/hipparchus/CalculusFieldElement;)V");
                  mids$[mid_init$_98b0ba8986570da3] = env->getMethodID(cls, "<init>", "(Lorg/orekit/orbits/FieldOrbit;Lorg/orekit/propagation/FieldStateCovariance;Lorg/orekit/orbits/FieldOrbit;Lorg/orekit/propagation/FieldStateCovariance;Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/frames/encounter/EncounterLOFType;D)V");
                  mids$[mid_init$_eebdd76ed59e9860] = env->getMethodID(cls, "<init>", "(Lorg/orekit/orbits/FieldOrbit;Lorg/orekit/propagation/FieldStateCovariance;Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/orbits/FieldOrbit;Lorg/orekit/propagation/FieldStateCovariance;Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/frames/encounter/EncounterLOFType;D)V");
                  mids$[mid_computeCombinedCovarianceInEncounterFrame_af363084ecd31b97] = env->getMethodID(cls, "computeCombinedCovarianceInEncounterFrame", "()Lorg/orekit/propagation/FieldStateCovariance;");
                  mids$[mid_computeCombinedCovarianceInReferenceTNW_af363084ecd31b97] = env->getMethodID(cls, "computeCombinedCovarianceInReferenceTNW", "()Lorg/orekit/propagation/FieldStateCovariance;");
                  mids$[mid_computeCoppolaEncounterDuration_08d37e3f77b7239d] = env->getMethodID(cls, "computeCoppolaEncounterDuration", "()Lorg/hipparchus/CalculusFieldElement;");
                  mids$[mid_computeMahalanobisDistance_08d37e3f77b7239d] = env->getMethodID(cls, "computeMahalanobisDistance", "()Lorg/hipparchus/CalculusFieldElement;");
                  mids$[mid_computeMahalanobisDistance_e3d0ff3c0584eadf] = env->getMethodID(cls, "computeMahalanobisDistance", "(D)Lorg/hipparchus/CalculusFieldElement;");
                  mids$[mid_computeMissDistance_08d37e3f77b7239d] = env->getMethodID(cls, "computeMissDistance", "()Lorg/hipparchus/CalculusFieldElement;");
                  mids$[mid_computeOtherPositionInCollisionPlane_da02c7b325187877] = env->getMethodID(cls, "computeOtherPositionInCollisionPlane", "()Lorg/hipparchus/geometry/euclidean/twod/FieldVector2D;");
                  mids$[mid_computeOtherPositionInRotatedCollisionPlane_da02c7b325187877] = env->getMethodID(cls, "computeOtherPositionInRotatedCollisionPlane", "()Lorg/hipparchus/geometry/euclidean/twod/FieldVector2D;");
                  mids$[mid_computeOtherPositionInRotatedCollisionPlane_a95623cddc5b1016] = env->getMethodID(cls, "computeOtherPositionInRotatedCollisionPlane", "(D)Lorg/hipparchus/geometry/euclidean/twod/FieldVector2D;");
                  mids$[mid_computeOtherRelativeToReferencePVInReferenceInertial_345fc9bafd1687ff] = env->getMethodID(cls, "computeOtherRelativeToReferencePVInReferenceInertial", "()Lorg/orekit/utils/FieldPVCoordinates;");
                  mids$[mid_computeProjectedAndDiagonalizedCombinedPositionalCovarianceMatrix_02883dbbe5db44ac] = env->getMethodID(cls, "computeProjectedAndDiagonalizedCombinedPositionalCovarianceMatrix", "()Lorg/hipparchus/linear/FieldMatrix;");
                  mids$[mid_computeProjectedCombinedPositionalCovarianceMatrix_02883dbbe5db44ac] = env->getMethodID(cls, "computeProjectedCombinedPositionalCovarianceMatrix", "()Lorg/hipparchus/linear/FieldMatrix;");
                  mids$[mid_computeReferenceInertialToCollisionPlaneProjectionMatrix_02883dbbe5db44ac] = env->getMethodID(cls, "computeReferenceInertialToCollisionPlaneProjectionMatrix", "()Lorg/hipparchus/linear/FieldMatrix;");
                  mids$[mid_computeSquaredMahalanobisDistance_08d37e3f77b7239d] = env->getMethodID(cls, "computeSquaredMahalanobisDistance", "()Lorg/hipparchus/CalculusFieldElement;");
                  mids$[mid_computeSquaredMahalanobisDistance_e3d0ff3c0584eadf] = env->getMethodID(cls, "computeSquaredMahalanobisDistance", "(D)Lorg/hipparchus/CalculusFieldElement;");
                  mids$[mid_computeSquaredMahalanobisDistance_3e396511c662586f] = env->getStaticMethodID(cls, "computeSquaredMahalanobisDistance", "(Lorg/hipparchus/geometry/euclidean/twod/FieldVector2D;Lorg/hipparchus/linear/FieldMatrix;)Lorg/hipparchus/CalculusFieldElement;");
                  mids$[mid_computeSquaredMahalanobisDistance_d2c2bcf9f0e55408] = env->getStaticMethodID(cls, "computeSquaredMahalanobisDistance", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
                  mids$[mid_getCombinedRadius_08d37e3f77b7239d] = env->getMethodID(cls, "getCombinedRadius", "()Lorg/hipparchus/CalculusFieldElement;");
                  mids$[mid_getEncounterFrame_b6d8b1833bbc692c] = env->getMethodID(cls, "getEncounterFrame", "()Lorg/orekit/frames/encounter/EncounterLOF;");
                  mids$[mid_getOtherAtTCA_5b5bea4bdba413a2] = env->getMethodID(cls, "getOtherAtTCA", "()Lorg/orekit/orbits/FieldOrbit;");
                  mids$[mid_getOtherCovariance_af363084ecd31b97] = env->getMethodID(cls, "getOtherCovariance", "()Lorg/orekit/propagation/FieldStateCovariance;");
                  mids$[mid_getReferenceAtTCA_5b5bea4bdba413a2] = env->getMethodID(cls, "getReferenceAtTCA", "()Lorg/orekit/orbits/FieldOrbit;");
                  mids$[mid_getReferenceCovariance_af363084ecd31b97] = env->getMethodID(cls, "getReferenceCovariance", "()Lorg/orekit/propagation/FieldStateCovariance;");
                  mids$[mid_getTca_1fea28374011eef5] = env->getMethodID(cls, "getTca", "()Lorg/orekit/time/FieldAbsoluteDate;");
                  mids$[mid_toEncounter_d2002ff8b0b095ba] = env->getMethodID(cls, "toEncounter", "()Lorg/orekit/ssa/collision/shorttermencounter/probability/twod/ShortTermEncounter2DDefinition;");

                  class$ = new ::java::lang::Class(cls);
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              FieldShortTermEncounter2DDefinition::FieldShortTermEncounter2DDefinition(const ::org::orekit::orbits::FieldOrbit & a0, const ::org::orekit::propagation::FieldStateCovariance & a1, const ::org::orekit::orbits::FieldOrbit & a2, const ::org::orekit::propagation::FieldStateCovariance & a3, const ::org::hipparchus::CalculusFieldElement & a4) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_08f07ab22d4b435b, a0.this$, a1.this$, a2.this$, a3.this$, a4.this$)) {}

              FieldShortTermEncounter2DDefinition::FieldShortTermEncounter2DDefinition(const ::org::orekit::orbits::FieldOrbit & a0, const ::org::orekit::propagation::FieldStateCovariance & a1, const ::org::hipparchus::CalculusFieldElement & a2, const ::org::orekit::orbits::FieldOrbit & a3, const ::org::orekit::propagation::FieldStateCovariance & a4, const ::org::hipparchus::CalculusFieldElement & a5) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_ba391950ea4463a5, a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$)) {}

              FieldShortTermEncounter2DDefinition::FieldShortTermEncounter2DDefinition(const ::org::orekit::orbits::FieldOrbit & a0, const ::org::orekit::propagation::FieldStateCovariance & a1, const ::org::orekit::orbits::FieldOrbit & a2, const ::org::orekit::propagation::FieldStateCovariance & a3, const ::org::hipparchus::CalculusFieldElement & a4, const ::org::orekit::frames::encounter::EncounterLOFType & a5, jdouble a6) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_98b0ba8986570da3, a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$, a6)) {}

              FieldShortTermEncounter2DDefinition::FieldShortTermEncounter2DDefinition(const ::org::orekit::orbits::FieldOrbit & a0, const ::org::orekit::propagation::FieldStateCovariance & a1, const ::org::hipparchus::CalculusFieldElement & a2, const ::org::orekit::orbits::FieldOrbit & a3, const ::org::orekit::propagation::FieldStateCovariance & a4, const ::org::hipparchus::CalculusFieldElement & a5, const ::org::orekit::frames::encounter::EncounterLOFType & a6, jdouble a7) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_eebdd76ed59e9860, a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$, a6.this$, a7)) {}

              ::org::orekit::propagation::FieldStateCovariance FieldShortTermEncounter2DDefinition::computeCombinedCovarianceInEncounterFrame() const
              {
                return ::org::orekit::propagation::FieldStateCovariance(env->callObjectMethod(this$, mids$[mid_computeCombinedCovarianceInEncounterFrame_af363084ecd31b97]));
              }

              ::org::orekit::propagation::FieldStateCovariance FieldShortTermEncounter2DDefinition::computeCombinedCovarianceInReferenceTNW() const
              {
                return ::org::orekit::propagation::FieldStateCovariance(env->callObjectMethod(this$, mids$[mid_computeCombinedCovarianceInReferenceTNW_af363084ecd31b97]));
              }

              ::org::hipparchus::CalculusFieldElement FieldShortTermEncounter2DDefinition::computeCoppolaEncounterDuration() const
              {
                return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_computeCoppolaEncounterDuration_08d37e3f77b7239d]));
              }

              ::org::hipparchus::CalculusFieldElement FieldShortTermEncounter2DDefinition::computeMahalanobisDistance() const
              {
                return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_computeMahalanobisDistance_08d37e3f77b7239d]));
              }

              ::org::hipparchus::CalculusFieldElement FieldShortTermEncounter2DDefinition::computeMahalanobisDistance(jdouble a0) const
              {
                return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_computeMahalanobisDistance_e3d0ff3c0584eadf], a0));
              }

              ::org::hipparchus::CalculusFieldElement FieldShortTermEncounter2DDefinition::computeMissDistance() const
              {
                return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_computeMissDistance_08d37e3f77b7239d]));
              }

              ::org::hipparchus::geometry::euclidean::twod::FieldVector2D FieldShortTermEncounter2DDefinition::computeOtherPositionInCollisionPlane() const
              {
                return ::org::hipparchus::geometry::euclidean::twod::FieldVector2D(env->callObjectMethod(this$, mids$[mid_computeOtherPositionInCollisionPlane_da02c7b325187877]));
              }

              ::org::hipparchus::geometry::euclidean::twod::FieldVector2D FieldShortTermEncounter2DDefinition::computeOtherPositionInRotatedCollisionPlane() const
              {
                return ::org::hipparchus::geometry::euclidean::twod::FieldVector2D(env->callObjectMethod(this$, mids$[mid_computeOtherPositionInRotatedCollisionPlane_da02c7b325187877]));
              }

              ::org::hipparchus::geometry::euclidean::twod::FieldVector2D FieldShortTermEncounter2DDefinition::computeOtherPositionInRotatedCollisionPlane(jdouble a0) const
              {
                return ::org::hipparchus::geometry::euclidean::twod::FieldVector2D(env->callObjectMethod(this$, mids$[mid_computeOtherPositionInRotatedCollisionPlane_a95623cddc5b1016], a0));
              }

              ::org::orekit::utils::FieldPVCoordinates FieldShortTermEncounter2DDefinition::computeOtherRelativeToReferencePVInReferenceInertial() const
              {
                return ::org::orekit::utils::FieldPVCoordinates(env->callObjectMethod(this$, mids$[mid_computeOtherRelativeToReferencePVInReferenceInertial_345fc9bafd1687ff]));
              }

              ::org::hipparchus::linear::FieldMatrix FieldShortTermEncounter2DDefinition::computeProjectedAndDiagonalizedCombinedPositionalCovarianceMatrix() const
              {
                return ::org::hipparchus::linear::FieldMatrix(env->callObjectMethod(this$, mids$[mid_computeProjectedAndDiagonalizedCombinedPositionalCovarianceMatrix_02883dbbe5db44ac]));
              }

              ::org::hipparchus::linear::FieldMatrix FieldShortTermEncounter2DDefinition::computeProjectedCombinedPositionalCovarianceMatrix() const
              {
                return ::org::hipparchus::linear::FieldMatrix(env->callObjectMethod(this$, mids$[mid_computeProjectedCombinedPositionalCovarianceMatrix_02883dbbe5db44ac]));
              }

              ::org::hipparchus::linear::FieldMatrix FieldShortTermEncounter2DDefinition::computeReferenceInertialToCollisionPlaneProjectionMatrix() const
              {
                return ::org::hipparchus::linear::FieldMatrix(env->callObjectMethod(this$, mids$[mid_computeReferenceInertialToCollisionPlaneProjectionMatrix_02883dbbe5db44ac]));
              }

              ::org::hipparchus::CalculusFieldElement FieldShortTermEncounter2DDefinition::computeSquaredMahalanobisDistance() const
              {
                return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_computeSquaredMahalanobisDistance_08d37e3f77b7239d]));
              }

              ::org::hipparchus::CalculusFieldElement FieldShortTermEncounter2DDefinition::computeSquaredMahalanobisDistance(jdouble a0) const
              {
                return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_computeSquaredMahalanobisDistance_e3d0ff3c0584eadf], a0));
              }

              ::org::hipparchus::CalculusFieldElement FieldShortTermEncounter2DDefinition::computeSquaredMahalanobisDistance(const ::org::hipparchus::geometry::euclidean::twod::FieldVector2D & a0, const ::org::hipparchus::linear::FieldMatrix & a1)
              {
                jclass cls = env->getClass(initializeClass);
                return ::org::hipparchus::CalculusFieldElement(env->callStaticObjectMethod(cls, mids$[mid_computeSquaredMahalanobisDistance_3e396511c662586f], a0.this$, a1.this$));
              }

              ::org::hipparchus::CalculusFieldElement FieldShortTermEncounter2DDefinition::computeSquaredMahalanobisDistance(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::hipparchus::CalculusFieldElement & a1, const ::org::hipparchus::CalculusFieldElement & a2, const ::org::hipparchus::CalculusFieldElement & a3)
              {
                jclass cls = env->getClass(initializeClass);
                return ::org::hipparchus::CalculusFieldElement(env->callStaticObjectMethod(cls, mids$[mid_computeSquaredMahalanobisDistance_d2c2bcf9f0e55408], a0.this$, a1.this$, a2.this$, a3.this$));
              }

              ::org::hipparchus::CalculusFieldElement FieldShortTermEncounter2DDefinition::getCombinedRadius() const
              {
                return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getCombinedRadius_08d37e3f77b7239d]));
              }

              ::org::orekit::frames::encounter::EncounterLOF FieldShortTermEncounter2DDefinition::getEncounterFrame() const
              {
                return ::org::orekit::frames::encounter::EncounterLOF(env->callObjectMethod(this$, mids$[mid_getEncounterFrame_b6d8b1833bbc692c]));
              }

              ::org::orekit::orbits::FieldOrbit FieldShortTermEncounter2DDefinition::getOtherAtTCA() const
              {
                return ::org::orekit::orbits::FieldOrbit(env->callObjectMethod(this$, mids$[mid_getOtherAtTCA_5b5bea4bdba413a2]));
              }

              ::org::orekit::propagation::FieldStateCovariance FieldShortTermEncounter2DDefinition::getOtherCovariance() const
              {
                return ::org::orekit::propagation::FieldStateCovariance(env->callObjectMethod(this$, mids$[mid_getOtherCovariance_af363084ecd31b97]));
              }

              ::org::orekit::orbits::FieldOrbit FieldShortTermEncounter2DDefinition::getReferenceAtTCA() const
              {
                return ::org::orekit::orbits::FieldOrbit(env->callObjectMethod(this$, mids$[mid_getReferenceAtTCA_5b5bea4bdba413a2]));
              }

              ::org::orekit::propagation::FieldStateCovariance FieldShortTermEncounter2DDefinition::getReferenceCovariance() const
              {
                return ::org::orekit::propagation::FieldStateCovariance(env->callObjectMethod(this$, mids$[mid_getReferenceCovariance_af363084ecd31b97]));
              }

              ::org::orekit::time::FieldAbsoluteDate FieldShortTermEncounter2DDefinition::getTca() const
              {
                return ::org::orekit::time::FieldAbsoluteDate(env->callObjectMethod(this$, mids$[mid_getTca_1fea28374011eef5]));
              }

              ::org::orekit::ssa::collision::shorttermencounter::probability::twod::ShortTermEncounter2DDefinition FieldShortTermEncounter2DDefinition::toEncounter() const
              {
                return ::org::orekit::ssa::collision::shorttermencounter::probability::twod::ShortTermEncounter2DDefinition(env->callObjectMethod(this$, mids$[mid_toEncounter_d2002ff8b0b095ba]));
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
    namespace ssa {
      namespace collision {
        namespace shorttermencounter {
          namespace probability {
            namespace twod {
              static PyObject *t_FieldShortTermEncounter2DDefinition_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_FieldShortTermEncounter2DDefinition_instance_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_FieldShortTermEncounter2DDefinition_of_(t_FieldShortTermEncounter2DDefinition *self, PyObject *args);
              static int t_FieldShortTermEncounter2DDefinition_init_(t_FieldShortTermEncounter2DDefinition *self, PyObject *args, PyObject *kwds);
              static PyObject *t_FieldShortTermEncounter2DDefinition_computeCombinedCovarianceInEncounterFrame(t_FieldShortTermEncounter2DDefinition *self);
              static PyObject *t_FieldShortTermEncounter2DDefinition_computeCombinedCovarianceInReferenceTNW(t_FieldShortTermEncounter2DDefinition *self);
              static PyObject *t_FieldShortTermEncounter2DDefinition_computeCoppolaEncounterDuration(t_FieldShortTermEncounter2DDefinition *self);
              static PyObject *t_FieldShortTermEncounter2DDefinition_computeMahalanobisDistance(t_FieldShortTermEncounter2DDefinition *self, PyObject *args);
              static PyObject *t_FieldShortTermEncounter2DDefinition_computeMissDistance(t_FieldShortTermEncounter2DDefinition *self);
              static PyObject *t_FieldShortTermEncounter2DDefinition_computeOtherPositionInCollisionPlane(t_FieldShortTermEncounter2DDefinition *self);
              static PyObject *t_FieldShortTermEncounter2DDefinition_computeOtherPositionInRotatedCollisionPlane(t_FieldShortTermEncounter2DDefinition *self, PyObject *args);
              static PyObject *t_FieldShortTermEncounter2DDefinition_computeOtherRelativeToReferencePVInReferenceInertial(t_FieldShortTermEncounter2DDefinition *self);
              static PyObject *t_FieldShortTermEncounter2DDefinition_computeProjectedAndDiagonalizedCombinedPositionalCovarianceMatrix(t_FieldShortTermEncounter2DDefinition *self);
              static PyObject *t_FieldShortTermEncounter2DDefinition_computeProjectedCombinedPositionalCovarianceMatrix(t_FieldShortTermEncounter2DDefinition *self);
              static PyObject *t_FieldShortTermEncounter2DDefinition_computeReferenceInertialToCollisionPlaneProjectionMatrix(t_FieldShortTermEncounter2DDefinition *self);
              static PyObject *t_FieldShortTermEncounter2DDefinition_computeSquaredMahalanobisDistance(t_FieldShortTermEncounter2DDefinition *self, PyObject *args);
              static PyObject *t_FieldShortTermEncounter2DDefinition_computeSquaredMahalanobisDistance_(PyTypeObject *type, PyObject *args);
              static PyObject *t_FieldShortTermEncounter2DDefinition_getCombinedRadius(t_FieldShortTermEncounter2DDefinition *self);
              static PyObject *t_FieldShortTermEncounter2DDefinition_getEncounterFrame(t_FieldShortTermEncounter2DDefinition *self);
              static PyObject *t_FieldShortTermEncounter2DDefinition_getOtherAtTCA(t_FieldShortTermEncounter2DDefinition *self);
              static PyObject *t_FieldShortTermEncounter2DDefinition_getOtherCovariance(t_FieldShortTermEncounter2DDefinition *self);
              static PyObject *t_FieldShortTermEncounter2DDefinition_getReferenceAtTCA(t_FieldShortTermEncounter2DDefinition *self);
              static PyObject *t_FieldShortTermEncounter2DDefinition_getReferenceCovariance(t_FieldShortTermEncounter2DDefinition *self);
              static PyObject *t_FieldShortTermEncounter2DDefinition_getTca(t_FieldShortTermEncounter2DDefinition *self);
              static PyObject *t_FieldShortTermEncounter2DDefinition_toEncounter(t_FieldShortTermEncounter2DDefinition *self);
              static PyObject *t_FieldShortTermEncounter2DDefinition_get__combinedRadius(t_FieldShortTermEncounter2DDefinition *self, void *data);
              static PyObject *t_FieldShortTermEncounter2DDefinition_get__encounterFrame(t_FieldShortTermEncounter2DDefinition *self, void *data);
              static PyObject *t_FieldShortTermEncounter2DDefinition_get__otherAtTCA(t_FieldShortTermEncounter2DDefinition *self, void *data);
              static PyObject *t_FieldShortTermEncounter2DDefinition_get__otherCovariance(t_FieldShortTermEncounter2DDefinition *self, void *data);
              static PyObject *t_FieldShortTermEncounter2DDefinition_get__referenceAtTCA(t_FieldShortTermEncounter2DDefinition *self, void *data);
              static PyObject *t_FieldShortTermEncounter2DDefinition_get__referenceCovariance(t_FieldShortTermEncounter2DDefinition *self, void *data);
              static PyObject *t_FieldShortTermEncounter2DDefinition_get__tca(t_FieldShortTermEncounter2DDefinition *self, void *data);
              static PyObject *t_FieldShortTermEncounter2DDefinition_get__parameters_(t_FieldShortTermEncounter2DDefinition *self, void *data);
              static PyGetSetDef t_FieldShortTermEncounter2DDefinition__fields_[] = {
                DECLARE_GET_FIELD(t_FieldShortTermEncounter2DDefinition, combinedRadius),
                DECLARE_GET_FIELD(t_FieldShortTermEncounter2DDefinition, encounterFrame),
                DECLARE_GET_FIELD(t_FieldShortTermEncounter2DDefinition, otherAtTCA),
                DECLARE_GET_FIELD(t_FieldShortTermEncounter2DDefinition, otherCovariance),
                DECLARE_GET_FIELD(t_FieldShortTermEncounter2DDefinition, referenceAtTCA),
                DECLARE_GET_FIELD(t_FieldShortTermEncounter2DDefinition, referenceCovariance),
                DECLARE_GET_FIELD(t_FieldShortTermEncounter2DDefinition, tca),
                DECLARE_GET_FIELD(t_FieldShortTermEncounter2DDefinition, parameters_),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_FieldShortTermEncounter2DDefinition__methods_[] = {
                DECLARE_METHOD(t_FieldShortTermEncounter2DDefinition, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_FieldShortTermEncounter2DDefinition, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_FieldShortTermEncounter2DDefinition, of_, METH_VARARGS),
                DECLARE_METHOD(t_FieldShortTermEncounter2DDefinition, computeCombinedCovarianceInEncounterFrame, METH_NOARGS),
                DECLARE_METHOD(t_FieldShortTermEncounter2DDefinition, computeCombinedCovarianceInReferenceTNW, METH_NOARGS),
                DECLARE_METHOD(t_FieldShortTermEncounter2DDefinition, computeCoppolaEncounterDuration, METH_NOARGS),
                DECLARE_METHOD(t_FieldShortTermEncounter2DDefinition, computeMahalanobisDistance, METH_VARARGS),
                DECLARE_METHOD(t_FieldShortTermEncounter2DDefinition, computeMissDistance, METH_NOARGS),
                DECLARE_METHOD(t_FieldShortTermEncounter2DDefinition, computeOtherPositionInCollisionPlane, METH_NOARGS),
                DECLARE_METHOD(t_FieldShortTermEncounter2DDefinition, computeOtherPositionInRotatedCollisionPlane, METH_VARARGS),
                DECLARE_METHOD(t_FieldShortTermEncounter2DDefinition, computeOtherRelativeToReferencePVInReferenceInertial, METH_NOARGS),
                DECLARE_METHOD(t_FieldShortTermEncounter2DDefinition, computeProjectedAndDiagonalizedCombinedPositionalCovarianceMatrix, METH_NOARGS),
                DECLARE_METHOD(t_FieldShortTermEncounter2DDefinition, computeProjectedCombinedPositionalCovarianceMatrix, METH_NOARGS),
                DECLARE_METHOD(t_FieldShortTermEncounter2DDefinition, computeReferenceInertialToCollisionPlaneProjectionMatrix, METH_NOARGS),
                DECLARE_METHOD(t_FieldShortTermEncounter2DDefinition, computeSquaredMahalanobisDistance, METH_VARARGS),
                DECLARE_METHOD(t_FieldShortTermEncounter2DDefinition, computeSquaredMahalanobisDistance_, METH_VARARGS | METH_CLASS),
                DECLARE_METHOD(t_FieldShortTermEncounter2DDefinition, getCombinedRadius, METH_NOARGS),
                DECLARE_METHOD(t_FieldShortTermEncounter2DDefinition, getEncounterFrame, METH_NOARGS),
                DECLARE_METHOD(t_FieldShortTermEncounter2DDefinition, getOtherAtTCA, METH_NOARGS),
                DECLARE_METHOD(t_FieldShortTermEncounter2DDefinition, getOtherCovariance, METH_NOARGS),
                DECLARE_METHOD(t_FieldShortTermEncounter2DDefinition, getReferenceAtTCA, METH_NOARGS),
                DECLARE_METHOD(t_FieldShortTermEncounter2DDefinition, getReferenceCovariance, METH_NOARGS),
                DECLARE_METHOD(t_FieldShortTermEncounter2DDefinition, getTca, METH_NOARGS),
                DECLARE_METHOD(t_FieldShortTermEncounter2DDefinition, toEncounter, METH_NOARGS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(FieldShortTermEncounter2DDefinition)[] = {
                { Py_tp_methods, t_FieldShortTermEncounter2DDefinition__methods_ },
                { Py_tp_init, (void *) t_FieldShortTermEncounter2DDefinition_init_ },
                { Py_tp_getset, t_FieldShortTermEncounter2DDefinition__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(FieldShortTermEncounter2DDefinition)[] = {
                &PY_TYPE_DEF(::java::lang::Object),
                NULL
              };

              DEFINE_TYPE(FieldShortTermEncounter2DDefinition, t_FieldShortTermEncounter2DDefinition, FieldShortTermEncounter2DDefinition);
              PyObject *t_FieldShortTermEncounter2DDefinition::wrap_Object(const FieldShortTermEncounter2DDefinition& object, PyTypeObject *p0)
              {
                PyObject *obj = t_FieldShortTermEncounter2DDefinition::wrap_Object(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_FieldShortTermEncounter2DDefinition *self = (t_FieldShortTermEncounter2DDefinition *) obj;
                  self->parameters[0] = p0;
                }
                return obj;
              }

              PyObject *t_FieldShortTermEncounter2DDefinition::wrap_jobject(const jobject& object, PyTypeObject *p0)
              {
                PyObject *obj = t_FieldShortTermEncounter2DDefinition::wrap_jobject(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_FieldShortTermEncounter2DDefinition *self = (t_FieldShortTermEncounter2DDefinition *) obj;
                  self->parameters[0] = p0;
                }
                return obj;
              }

              void t_FieldShortTermEncounter2DDefinition::install(PyObject *module)
              {
                installType(&PY_TYPE(FieldShortTermEncounter2DDefinition), &PY_TYPE_DEF(FieldShortTermEncounter2DDefinition), module, "FieldShortTermEncounter2DDefinition", 0);
              }

              void t_FieldShortTermEncounter2DDefinition::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(FieldShortTermEncounter2DDefinition), "class_", make_descriptor(FieldShortTermEncounter2DDefinition::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(FieldShortTermEncounter2DDefinition), "wrapfn_", make_descriptor(t_FieldShortTermEncounter2DDefinition::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(FieldShortTermEncounter2DDefinition), "boxfn_", make_descriptor(boxObject));
              }

              static PyObject *t_FieldShortTermEncounter2DDefinition_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, FieldShortTermEncounter2DDefinition::initializeClass, 1)))
                  return NULL;
                return t_FieldShortTermEncounter2DDefinition::wrap_Object(FieldShortTermEncounter2DDefinition(((t_FieldShortTermEncounter2DDefinition *) arg)->object.this$));
              }
              static PyObject *t_FieldShortTermEncounter2DDefinition_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, FieldShortTermEncounter2DDefinition::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static PyObject *t_FieldShortTermEncounter2DDefinition_of_(t_FieldShortTermEncounter2DDefinition *self, PyObject *args)
              {
                if (!parseArg(args, "T", 1, &(self->parameters)))
                  Py_RETURN_SELF;
                return PyErr_SetArgsError((PyObject *) self, "of_", args);
              }

              static int t_FieldShortTermEncounter2DDefinition_init_(t_FieldShortTermEncounter2DDefinition *self, PyObject *args, PyObject *kwds)
              {
                switch (PyTuple_GET_SIZE(args)) {
                 case 5:
                  {
                    ::org::orekit::orbits::FieldOrbit a0((jobject) NULL);
                    PyTypeObject **p0;
                    ::org::orekit::propagation::FieldStateCovariance a1((jobject) NULL);
                    PyTypeObject **p1;
                    ::org::orekit::orbits::FieldOrbit a2((jobject) NULL);
                    PyTypeObject **p2;
                    ::org::orekit::propagation::FieldStateCovariance a3((jobject) NULL);
                    PyTypeObject **p3;
                    ::org::hipparchus::CalculusFieldElement a4((jobject) NULL);
                    PyTypeObject **p4;
                    FieldShortTermEncounter2DDefinition object((jobject) NULL);

                    if (!parseArgs(args, "KKKKK", ::org::orekit::orbits::FieldOrbit::initializeClass, ::org::orekit::propagation::FieldStateCovariance::initializeClass, ::org::orekit::orbits::FieldOrbit::initializeClass, ::org::orekit::propagation::FieldStateCovariance::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::orekit::orbits::t_FieldOrbit::parameters_, &a1, &p1, ::org::orekit::propagation::t_FieldStateCovariance::parameters_, &a2, &p2, ::org::orekit::orbits::t_FieldOrbit::parameters_, &a3, &p3, ::org::orekit::propagation::t_FieldStateCovariance::parameters_, &a4, &p4, ::org::hipparchus::t_CalculusFieldElement::parameters_))
                    {
                      INT_CALL(object = FieldShortTermEncounter2DDefinition(a0, a1, a2, a3, a4));
                      self->object = object;
                      break;
                    }
                  }
                  goto err;
                 case 6:
                  {
                    ::org::orekit::orbits::FieldOrbit a0((jobject) NULL);
                    PyTypeObject **p0;
                    ::org::orekit::propagation::FieldStateCovariance a1((jobject) NULL);
                    PyTypeObject **p1;
                    ::org::hipparchus::CalculusFieldElement a2((jobject) NULL);
                    PyTypeObject **p2;
                    ::org::orekit::orbits::FieldOrbit a3((jobject) NULL);
                    PyTypeObject **p3;
                    ::org::orekit::propagation::FieldStateCovariance a4((jobject) NULL);
                    PyTypeObject **p4;
                    ::org::hipparchus::CalculusFieldElement a5((jobject) NULL);
                    PyTypeObject **p5;
                    FieldShortTermEncounter2DDefinition object((jobject) NULL);

                    if (!parseArgs(args, "KKKKKK", ::org::orekit::orbits::FieldOrbit::initializeClass, ::org::orekit::propagation::FieldStateCovariance::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::orekit::orbits::FieldOrbit::initializeClass, ::org::orekit::propagation::FieldStateCovariance::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::orekit::orbits::t_FieldOrbit::parameters_, &a1, &p1, ::org::orekit::propagation::t_FieldStateCovariance::parameters_, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a3, &p3, ::org::orekit::orbits::t_FieldOrbit::parameters_, &a4, &p4, ::org::orekit::propagation::t_FieldStateCovariance::parameters_, &a5, &p5, ::org::hipparchus::t_CalculusFieldElement::parameters_))
                    {
                      INT_CALL(object = FieldShortTermEncounter2DDefinition(a0, a1, a2, a3, a4, a5));
                      self->object = object;
                      break;
                    }
                  }
                  goto err;
                 case 7:
                  {
                    ::org::orekit::orbits::FieldOrbit a0((jobject) NULL);
                    PyTypeObject **p0;
                    ::org::orekit::propagation::FieldStateCovariance a1((jobject) NULL);
                    PyTypeObject **p1;
                    ::org::orekit::orbits::FieldOrbit a2((jobject) NULL);
                    PyTypeObject **p2;
                    ::org::orekit::propagation::FieldStateCovariance a3((jobject) NULL);
                    PyTypeObject **p3;
                    ::org::hipparchus::CalculusFieldElement a4((jobject) NULL);
                    PyTypeObject **p4;
                    ::org::orekit::frames::encounter::EncounterLOFType a5((jobject) NULL);
                    PyTypeObject **p5;
                    jdouble a6;
                    FieldShortTermEncounter2DDefinition object((jobject) NULL);

                    if (!parseArgs(args, "KKKKKKD", ::org::orekit::orbits::FieldOrbit::initializeClass, ::org::orekit::propagation::FieldStateCovariance::initializeClass, ::org::orekit::orbits::FieldOrbit::initializeClass, ::org::orekit::propagation::FieldStateCovariance::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::orekit::frames::encounter::EncounterLOFType::initializeClass, &a0, &p0, ::org::orekit::orbits::t_FieldOrbit::parameters_, &a1, &p1, ::org::orekit::propagation::t_FieldStateCovariance::parameters_, &a2, &p2, ::org::orekit::orbits::t_FieldOrbit::parameters_, &a3, &p3, ::org::orekit::propagation::t_FieldStateCovariance::parameters_, &a4, &p4, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a5, &p5, ::org::orekit::frames::encounter::t_EncounterLOFType::parameters_, &a6))
                    {
                      INT_CALL(object = FieldShortTermEncounter2DDefinition(a0, a1, a2, a3, a4, a5, a6));
                      self->object = object;
                      break;
                    }
                  }
                  goto err;
                 case 8:
                  {
                    ::org::orekit::orbits::FieldOrbit a0((jobject) NULL);
                    PyTypeObject **p0;
                    ::org::orekit::propagation::FieldStateCovariance a1((jobject) NULL);
                    PyTypeObject **p1;
                    ::org::hipparchus::CalculusFieldElement a2((jobject) NULL);
                    PyTypeObject **p2;
                    ::org::orekit::orbits::FieldOrbit a3((jobject) NULL);
                    PyTypeObject **p3;
                    ::org::orekit::propagation::FieldStateCovariance a4((jobject) NULL);
                    PyTypeObject **p4;
                    ::org::hipparchus::CalculusFieldElement a5((jobject) NULL);
                    PyTypeObject **p5;
                    ::org::orekit::frames::encounter::EncounterLOFType a6((jobject) NULL);
                    PyTypeObject **p6;
                    jdouble a7;
                    FieldShortTermEncounter2DDefinition object((jobject) NULL);

                    if (!parseArgs(args, "KKKKKKKD", ::org::orekit::orbits::FieldOrbit::initializeClass, ::org::orekit::propagation::FieldStateCovariance::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::orekit::orbits::FieldOrbit::initializeClass, ::org::orekit::propagation::FieldStateCovariance::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::orekit::frames::encounter::EncounterLOFType::initializeClass, &a0, &p0, ::org::orekit::orbits::t_FieldOrbit::parameters_, &a1, &p1, ::org::orekit::propagation::t_FieldStateCovariance::parameters_, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a3, &p3, ::org::orekit::orbits::t_FieldOrbit::parameters_, &a4, &p4, ::org::orekit::propagation::t_FieldStateCovariance::parameters_, &a5, &p5, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a6, &p6, ::org::orekit::frames::encounter::t_EncounterLOFType::parameters_, &a7))
                    {
                      INT_CALL(object = FieldShortTermEncounter2DDefinition(a0, a1, a2, a3, a4, a5, a6, a7));
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

              static PyObject *t_FieldShortTermEncounter2DDefinition_computeCombinedCovarianceInEncounterFrame(t_FieldShortTermEncounter2DDefinition *self)
              {
                ::org::orekit::propagation::FieldStateCovariance result((jobject) NULL);
                OBJ_CALL(result = self->object.computeCombinedCovarianceInEncounterFrame());
                return ::org::orekit::propagation::t_FieldStateCovariance::wrap_Object(result, self->parameters[0]);
              }

              static PyObject *t_FieldShortTermEncounter2DDefinition_computeCombinedCovarianceInReferenceTNW(t_FieldShortTermEncounter2DDefinition *self)
              {
                ::org::orekit::propagation::FieldStateCovariance result((jobject) NULL);
                OBJ_CALL(result = self->object.computeCombinedCovarianceInReferenceTNW());
                return ::org::orekit::propagation::t_FieldStateCovariance::wrap_Object(result, self->parameters[0]);
              }

              static PyObject *t_FieldShortTermEncounter2DDefinition_computeCoppolaEncounterDuration(t_FieldShortTermEncounter2DDefinition *self)
              {
                ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
                OBJ_CALL(result = self->object.computeCoppolaEncounterDuration());
                return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
              }

              static PyObject *t_FieldShortTermEncounter2DDefinition_computeMahalanobisDistance(t_FieldShortTermEncounter2DDefinition *self, PyObject *args)
              {
                switch (PyTuple_GET_SIZE(args)) {
                 case 0:
                  {
                    ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
                    OBJ_CALL(result = self->object.computeMahalanobisDistance());
                    return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                  }
                  break;
                 case 1:
                  {
                    jdouble a0;
                    ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                    if (!parseArgs(args, "D", &a0))
                    {
                      OBJ_CALL(result = self->object.computeMahalanobisDistance(a0));
                      return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                    }
                  }
                }

                PyErr_SetArgsError((PyObject *) self, "computeMahalanobisDistance", args);
                return NULL;
              }

              static PyObject *t_FieldShortTermEncounter2DDefinition_computeMissDistance(t_FieldShortTermEncounter2DDefinition *self)
              {
                ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
                OBJ_CALL(result = self->object.computeMissDistance());
                return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
              }

              static PyObject *t_FieldShortTermEncounter2DDefinition_computeOtherPositionInCollisionPlane(t_FieldShortTermEncounter2DDefinition *self)
              {
                ::org::hipparchus::geometry::euclidean::twod::FieldVector2D result((jobject) NULL);
                OBJ_CALL(result = self->object.computeOtherPositionInCollisionPlane());
                return ::org::hipparchus::geometry::euclidean::twod::t_FieldVector2D::wrap_Object(result, self->parameters[0]);
              }

              static PyObject *t_FieldShortTermEncounter2DDefinition_computeOtherPositionInRotatedCollisionPlane(t_FieldShortTermEncounter2DDefinition *self, PyObject *args)
              {
                switch (PyTuple_GET_SIZE(args)) {
                 case 0:
                  {
                    ::org::hipparchus::geometry::euclidean::twod::FieldVector2D result((jobject) NULL);
                    OBJ_CALL(result = self->object.computeOtherPositionInRotatedCollisionPlane());
                    return ::org::hipparchus::geometry::euclidean::twod::t_FieldVector2D::wrap_Object(result, self->parameters[0]);
                  }
                  break;
                 case 1:
                  {
                    jdouble a0;
                    ::org::hipparchus::geometry::euclidean::twod::FieldVector2D result((jobject) NULL);

                    if (!parseArgs(args, "D", &a0))
                    {
                      OBJ_CALL(result = self->object.computeOtherPositionInRotatedCollisionPlane(a0));
                      return ::org::hipparchus::geometry::euclidean::twod::t_FieldVector2D::wrap_Object(result, self->parameters[0]);
                    }
                  }
                }

                PyErr_SetArgsError((PyObject *) self, "computeOtherPositionInRotatedCollisionPlane", args);
                return NULL;
              }

              static PyObject *t_FieldShortTermEncounter2DDefinition_computeOtherRelativeToReferencePVInReferenceInertial(t_FieldShortTermEncounter2DDefinition *self)
              {
                ::org::orekit::utils::FieldPVCoordinates result((jobject) NULL);
                OBJ_CALL(result = self->object.computeOtherRelativeToReferencePVInReferenceInertial());
                return ::org::orekit::utils::t_FieldPVCoordinates::wrap_Object(result, self->parameters[0]);
              }

              static PyObject *t_FieldShortTermEncounter2DDefinition_computeProjectedAndDiagonalizedCombinedPositionalCovarianceMatrix(t_FieldShortTermEncounter2DDefinition *self)
              {
                ::org::hipparchus::linear::FieldMatrix result((jobject) NULL);
                OBJ_CALL(result = self->object.computeProjectedAndDiagonalizedCombinedPositionalCovarianceMatrix());
                return ::org::hipparchus::linear::t_FieldMatrix::wrap_Object(result, self->parameters[0]);
              }

              static PyObject *t_FieldShortTermEncounter2DDefinition_computeProjectedCombinedPositionalCovarianceMatrix(t_FieldShortTermEncounter2DDefinition *self)
              {
                ::org::hipparchus::linear::FieldMatrix result((jobject) NULL);
                OBJ_CALL(result = self->object.computeProjectedCombinedPositionalCovarianceMatrix());
                return ::org::hipparchus::linear::t_FieldMatrix::wrap_Object(result, self->parameters[0]);
              }

              static PyObject *t_FieldShortTermEncounter2DDefinition_computeReferenceInertialToCollisionPlaneProjectionMatrix(t_FieldShortTermEncounter2DDefinition *self)
              {
                ::org::hipparchus::linear::FieldMatrix result((jobject) NULL);
                OBJ_CALL(result = self->object.computeReferenceInertialToCollisionPlaneProjectionMatrix());
                return ::org::hipparchus::linear::t_FieldMatrix::wrap_Object(result, self->parameters[0]);
              }

              static PyObject *t_FieldShortTermEncounter2DDefinition_computeSquaredMahalanobisDistance(t_FieldShortTermEncounter2DDefinition *self, PyObject *args)
              {
                switch (PyTuple_GET_SIZE(args)) {
                 case 0:
                  {
                    ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
                    OBJ_CALL(result = self->object.computeSquaredMahalanobisDistance());
                    return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                  }
                  break;
                 case 1:
                  {
                    jdouble a0;
                    ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                    if (!parseArgs(args, "D", &a0))
                    {
                      OBJ_CALL(result = self->object.computeSquaredMahalanobisDistance(a0));
                      return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                    }
                  }
                }

                PyErr_SetArgsError((PyObject *) self, "computeSquaredMahalanobisDistance", args);
                return NULL;
              }

              static PyObject *t_FieldShortTermEncounter2DDefinition_computeSquaredMahalanobisDistance_(PyTypeObject *type, PyObject *args)
              {
                switch (PyTuple_GET_SIZE(args)) {
                 case 2:
                  {
                    ::org::hipparchus::geometry::euclidean::twod::FieldVector2D a0((jobject) NULL);
                    PyTypeObject **p0;
                    ::org::hipparchus::linear::FieldMatrix a1((jobject) NULL);
                    PyTypeObject **p1;
                    ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                    if (!parseArgs(args, "KK", ::org::hipparchus::geometry::euclidean::twod::FieldVector2D::initializeClass, ::org::hipparchus::linear::FieldMatrix::initializeClass, &a0, &p0, ::org::hipparchus::geometry::euclidean::twod::t_FieldVector2D::parameters_, &a1, &p1, ::org::hipparchus::linear::t_FieldMatrix::parameters_))
                    {
                      OBJ_CALL(result = ::org::orekit::ssa::collision::shorttermencounter::probability::twod::FieldShortTermEncounter2DDefinition::computeSquaredMahalanobisDistance(a0, a1));
                      return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                    }
                  }
                  break;
                 case 4:
                  {
                    ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
                    PyTypeObject **p0;
                    ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
                    PyTypeObject **p1;
                    ::org::hipparchus::CalculusFieldElement a2((jobject) NULL);
                    PyTypeObject **p2;
                    ::org::hipparchus::CalculusFieldElement a3((jobject) NULL);
                    PyTypeObject **p3;
                    ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                    if (!parseArgs(args, "KKKK", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a3, &p3, ::org::hipparchus::t_CalculusFieldElement::parameters_))
                    {
                      OBJ_CALL(result = ::org::orekit::ssa::collision::shorttermencounter::probability::twod::FieldShortTermEncounter2DDefinition::computeSquaredMahalanobisDistance(a0, a1, a2, a3));
                      return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                    }
                  }
                }

                PyErr_SetArgsError(type, "computeSquaredMahalanobisDistance_", args);
                return NULL;
              }

              static PyObject *t_FieldShortTermEncounter2DDefinition_getCombinedRadius(t_FieldShortTermEncounter2DDefinition *self)
              {
                ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
                OBJ_CALL(result = self->object.getCombinedRadius());
                return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
              }

              static PyObject *t_FieldShortTermEncounter2DDefinition_getEncounterFrame(t_FieldShortTermEncounter2DDefinition *self)
              {
                ::org::orekit::frames::encounter::EncounterLOF result((jobject) NULL);
                OBJ_CALL(result = self->object.getEncounterFrame());
                return ::org::orekit::frames::encounter::t_EncounterLOF::wrap_Object(result);
              }

              static PyObject *t_FieldShortTermEncounter2DDefinition_getOtherAtTCA(t_FieldShortTermEncounter2DDefinition *self)
              {
                ::org::orekit::orbits::FieldOrbit result((jobject) NULL);
                OBJ_CALL(result = self->object.getOtherAtTCA());
                return ::org::orekit::orbits::t_FieldOrbit::wrap_Object(result, self->parameters[0]);
              }

              static PyObject *t_FieldShortTermEncounter2DDefinition_getOtherCovariance(t_FieldShortTermEncounter2DDefinition *self)
              {
                ::org::orekit::propagation::FieldStateCovariance result((jobject) NULL);
                OBJ_CALL(result = self->object.getOtherCovariance());
                return ::org::orekit::propagation::t_FieldStateCovariance::wrap_Object(result, self->parameters[0]);
              }

              static PyObject *t_FieldShortTermEncounter2DDefinition_getReferenceAtTCA(t_FieldShortTermEncounter2DDefinition *self)
              {
                ::org::orekit::orbits::FieldOrbit result((jobject) NULL);
                OBJ_CALL(result = self->object.getReferenceAtTCA());
                return ::org::orekit::orbits::t_FieldOrbit::wrap_Object(result, self->parameters[0]);
              }

              static PyObject *t_FieldShortTermEncounter2DDefinition_getReferenceCovariance(t_FieldShortTermEncounter2DDefinition *self)
              {
                ::org::orekit::propagation::FieldStateCovariance result((jobject) NULL);
                OBJ_CALL(result = self->object.getReferenceCovariance());
                return ::org::orekit::propagation::t_FieldStateCovariance::wrap_Object(result, self->parameters[0]);
              }

              static PyObject *t_FieldShortTermEncounter2DDefinition_getTca(t_FieldShortTermEncounter2DDefinition *self)
              {
                ::org::orekit::time::FieldAbsoluteDate result((jobject) NULL);
                OBJ_CALL(result = self->object.getTca());
                return ::org::orekit::time::t_FieldAbsoluteDate::wrap_Object(result, self->parameters[0]);
              }

              static PyObject *t_FieldShortTermEncounter2DDefinition_toEncounter(t_FieldShortTermEncounter2DDefinition *self)
              {
                ::org::orekit::ssa::collision::shorttermencounter::probability::twod::ShortTermEncounter2DDefinition result((jobject) NULL);
                OBJ_CALL(result = self->object.toEncounter());
                return ::org::orekit::ssa::collision::shorttermencounter::probability::twod::t_ShortTermEncounter2DDefinition::wrap_Object(result);
              }
              static PyObject *t_FieldShortTermEncounter2DDefinition_get__parameters_(t_FieldShortTermEncounter2DDefinition *self, void *data)
              {
                return typeParameters(self->parameters, sizeof(self->parameters));
              }

              static PyObject *t_FieldShortTermEncounter2DDefinition_get__combinedRadius(t_FieldShortTermEncounter2DDefinition *self, void *data)
              {
                ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
                OBJ_CALL(value = self->object.getCombinedRadius());
                return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
              }

              static PyObject *t_FieldShortTermEncounter2DDefinition_get__encounterFrame(t_FieldShortTermEncounter2DDefinition *self, void *data)
              {
                ::org::orekit::frames::encounter::EncounterLOF value((jobject) NULL);
                OBJ_CALL(value = self->object.getEncounterFrame());
                return ::org::orekit::frames::encounter::t_EncounterLOF::wrap_Object(value);
              }

              static PyObject *t_FieldShortTermEncounter2DDefinition_get__otherAtTCA(t_FieldShortTermEncounter2DDefinition *self, void *data)
              {
                ::org::orekit::orbits::FieldOrbit value((jobject) NULL);
                OBJ_CALL(value = self->object.getOtherAtTCA());
                return ::org::orekit::orbits::t_FieldOrbit::wrap_Object(value);
              }

              static PyObject *t_FieldShortTermEncounter2DDefinition_get__otherCovariance(t_FieldShortTermEncounter2DDefinition *self, void *data)
              {
                ::org::orekit::propagation::FieldStateCovariance value((jobject) NULL);
                OBJ_CALL(value = self->object.getOtherCovariance());
                return ::org::orekit::propagation::t_FieldStateCovariance::wrap_Object(value);
              }

              static PyObject *t_FieldShortTermEncounter2DDefinition_get__referenceAtTCA(t_FieldShortTermEncounter2DDefinition *self, void *data)
              {
                ::org::orekit::orbits::FieldOrbit value((jobject) NULL);
                OBJ_CALL(value = self->object.getReferenceAtTCA());
                return ::org::orekit::orbits::t_FieldOrbit::wrap_Object(value);
              }

              static PyObject *t_FieldShortTermEncounter2DDefinition_get__referenceCovariance(t_FieldShortTermEncounter2DDefinition *self, void *data)
              {
                ::org::orekit::propagation::FieldStateCovariance value((jobject) NULL);
                OBJ_CALL(value = self->object.getReferenceCovariance());
                return ::org::orekit::propagation::t_FieldStateCovariance::wrap_Object(value);
              }

              static PyObject *t_FieldShortTermEncounter2DDefinition_get__tca(t_FieldShortTermEncounter2DDefinition *self, void *data)
              {
                ::org::orekit::time::FieldAbsoluteDate value((jobject) NULL);
                OBJ_CALL(value = self->object.getTca());
                return ::org::orekit::time::t_FieldAbsoluteDate::wrap_Object(value);
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
#include "org/orekit/forces/gravity/potential/EGMFormatReader.h"
#include "java/io/IOException.h"
#include "java/text/ParseException.h"
#include "java/io/InputStream.h"
#include "org/orekit/forces/gravity/potential/RawSphericalHarmonicsProvider.h"
#include "java/lang/Class.h"
#include "org/orekit/errors/OrekitException.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace forces {
      namespace gravity {
        namespace potential {

          ::java::lang::Class *EGMFormatReader::class$ = NULL;
          jmethodID *EGMFormatReader::mids$ = NULL;
          bool EGMFormatReader::live$ = false;

          jclass EGMFormatReader::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/forces/gravity/potential/EGMFormatReader");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_c5d48f261709aa3e] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;Z)V");
              mids$[mid_init$_5fe41df3540f9ec3] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;ZZ)V");
              mids$[mid_getProvider_0c94c2344ee8a0fa] = env->getMethodID(cls, "getProvider", "(ZII)Lorg/orekit/forces/gravity/potential/RawSphericalHarmonicsProvider;");
              mids$[mid_loadData_bec0f846e5ec73da] = env->getMethodID(cls, "loadData", "(Ljava/io/InputStream;Ljava/lang/String;)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          EGMFormatReader::EGMFormatReader(const ::java::lang::String & a0, jboolean a1) : ::org::orekit::forces::gravity::potential::PotentialCoefficientsReader(env->newObject(initializeClass, &mids$, mid_init$_c5d48f261709aa3e, a0.this$, a1)) {}

          EGMFormatReader::EGMFormatReader(const ::java::lang::String & a0, jboolean a1, jboolean a2) : ::org::orekit::forces::gravity::potential::PotentialCoefficientsReader(env->newObject(initializeClass, &mids$, mid_init$_5fe41df3540f9ec3, a0.this$, a1, a2)) {}

          ::org::orekit::forces::gravity::potential::RawSphericalHarmonicsProvider EGMFormatReader::getProvider(jboolean a0, jint a1, jint a2) const
          {
            return ::org::orekit::forces::gravity::potential::RawSphericalHarmonicsProvider(env->callObjectMethod(this$, mids$[mid_getProvider_0c94c2344ee8a0fa], a0, a1, a2));
          }

          void EGMFormatReader::loadData(const ::java::io::InputStream & a0, const ::java::lang::String & a1) const
          {
            env->callVoidMethod(this$, mids$[mid_loadData_bec0f846e5ec73da], a0.this$, a1.this$);
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
          static PyObject *t_EGMFormatReader_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_EGMFormatReader_instance_(PyTypeObject *type, PyObject *arg);
          static int t_EGMFormatReader_init_(t_EGMFormatReader *self, PyObject *args, PyObject *kwds);
          static PyObject *t_EGMFormatReader_getProvider(t_EGMFormatReader *self, PyObject *args);
          static PyObject *t_EGMFormatReader_loadData(t_EGMFormatReader *self, PyObject *args);

          static PyMethodDef t_EGMFormatReader__methods_[] = {
            DECLARE_METHOD(t_EGMFormatReader, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_EGMFormatReader, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_EGMFormatReader, getProvider, METH_VARARGS),
            DECLARE_METHOD(t_EGMFormatReader, loadData, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(EGMFormatReader)[] = {
            { Py_tp_methods, t_EGMFormatReader__methods_ },
            { Py_tp_init, (void *) t_EGMFormatReader_init_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(EGMFormatReader)[] = {
            &PY_TYPE_DEF(::org::orekit::forces::gravity::potential::PotentialCoefficientsReader),
            NULL
          };

          DEFINE_TYPE(EGMFormatReader, t_EGMFormatReader, EGMFormatReader);

          void t_EGMFormatReader::install(PyObject *module)
          {
            installType(&PY_TYPE(EGMFormatReader), &PY_TYPE_DEF(EGMFormatReader), module, "EGMFormatReader", 0);
          }

          void t_EGMFormatReader::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(EGMFormatReader), "class_", make_descriptor(EGMFormatReader::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(EGMFormatReader), "wrapfn_", make_descriptor(t_EGMFormatReader::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(EGMFormatReader), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_EGMFormatReader_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, EGMFormatReader::initializeClass, 1)))
              return NULL;
            return t_EGMFormatReader::wrap_Object(EGMFormatReader(((t_EGMFormatReader *) arg)->object.this$));
          }
          static PyObject *t_EGMFormatReader_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, EGMFormatReader::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_EGMFormatReader_init_(t_EGMFormatReader *self, PyObject *args, PyObject *kwds)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 2:
              {
                ::java::lang::String a0((jobject) NULL);
                jboolean a1;
                EGMFormatReader object((jobject) NULL);

                if (!parseArgs(args, "sZ", &a0, &a1))
                {
                  INT_CALL(object = EGMFormatReader(a0, a1));
                  self->object = object;
                  break;
                }
              }
              goto err;
             case 3:
              {
                ::java::lang::String a0((jobject) NULL);
                jboolean a1;
                jboolean a2;
                EGMFormatReader object((jobject) NULL);

                if (!parseArgs(args, "sZZ", &a0, &a1, &a2))
                {
                  INT_CALL(object = EGMFormatReader(a0, a1, a2));
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

          static PyObject *t_EGMFormatReader_getProvider(t_EGMFormatReader *self, PyObject *args)
          {
            jboolean a0;
            jint a1;
            jint a2;
            ::org::orekit::forces::gravity::potential::RawSphericalHarmonicsProvider result((jobject) NULL);

            if (!parseArgs(args, "ZII", &a0, &a1, &a2))
            {
              OBJ_CALL(result = self->object.getProvider(a0, a1, a2));
              return ::org::orekit::forces::gravity::potential::t_RawSphericalHarmonicsProvider::wrap_Object(result);
            }

            return callSuper(PY_TYPE(EGMFormatReader), (PyObject *) self, "getProvider", args, 2);
          }

          static PyObject *t_EGMFormatReader_loadData(t_EGMFormatReader *self, PyObject *args)
          {
            ::java::io::InputStream a0((jobject) NULL);
            ::java::lang::String a1((jobject) NULL);

            if (!parseArgs(args, "ks", ::java::io::InputStream::initializeClass, &a0, &a1))
            {
              OBJ_CALL(self->object.loadData(a0, a1));
              Py_RETURN_NONE;
            }

            return callSuper(PY_TYPE(EGMFormatReader), (PyObject *) self, "loadData", args, 2);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/analysis/CalculusFieldMultivariateVectorFunction.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {

      ::java::lang::Class *CalculusFieldMultivariateVectorFunction::class$ = NULL;
      jmethodID *CalculusFieldMultivariateVectorFunction::mids$ = NULL;
      bool CalculusFieldMultivariateVectorFunction::live$ = false;

      jclass CalculusFieldMultivariateVectorFunction::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/analysis/CalculusFieldMultivariateVectorFunction");

          mids$ = new jmethodID[max_mid];
          mids$[mid_value_38b803e86c0bea36] = env->getMethodID(cls, "value", "([Lorg/hipparchus/CalculusFieldElement;)[Lorg/hipparchus/CalculusFieldElement;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      JArray< ::org::hipparchus::CalculusFieldElement > CalculusFieldMultivariateVectorFunction::value(const JArray< ::org::hipparchus::CalculusFieldElement > & a0) const
      {
        return JArray< ::org::hipparchus::CalculusFieldElement >(env->callObjectMethod(this$, mids$[mid_value_38b803e86c0bea36], a0.this$));
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
      static PyObject *t_CalculusFieldMultivariateVectorFunction_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_CalculusFieldMultivariateVectorFunction_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_CalculusFieldMultivariateVectorFunction_of_(t_CalculusFieldMultivariateVectorFunction *self, PyObject *args);
      static PyObject *t_CalculusFieldMultivariateVectorFunction_value(t_CalculusFieldMultivariateVectorFunction *self, PyObject *arg);
      static PyObject *t_CalculusFieldMultivariateVectorFunction_get__parameters_(t_CalculusFieldMultivariateVectorFunction *self, void *data);
      static PyGetSetDef t_CalculusFieldMultivariateVectorFunction__fields_[] = {
        DECLARE_GET_FIELD(t_CalculusFieldMultivariateVectorFunction, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_CalculusFieldMultivariateVectorFunction__methods_[] = {
        DECLARE_METHOD(t_CalculusFieldMultivariateVectorFunction, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_CalculusFieldMultivariateVectorFunction, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_CalculusFieldMultivariateVectorFunction, of_, METH_VARARGS),
        DECLARE_METHOD(t_CalculusFieldMultivariateVectorFunction, value, METH_O),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(CalculusFieldMultivariateVectorFunction)[] = {
        { Py_tp_methods, t_CalculusFieldMultivariateVectorFunction__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_CalculusFieldMultivariateVectorFunction__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(CalculusFieldMultivariateVectorFunction)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(CalculusFieldMultivariateVectorFunction, t_CalculusFieldMultivariateVectorFunction, CalculusFieldMultivariateVectorFunction);
      PyObject *t_CalculusFieldMultivariateVectorFunction::wrap_Object(const CalculusFieldMultivariateVectorFunction& object, PyTypeObject *p0)
      {
        PyObject *obj = t_CalculusFieldMultivariateVectorFunction::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_CalculusFieldMultivariateVectorFunction *self = (t_CalculusFieldMultivariateVectorFunction *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_CalculusFieldMultivariateVectorFunction::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_CalculusFieldMultivariateVectorFunction::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_CalculusFieldMultivariateVectorFunction *self = (t_CalculusFieldMultivariateVectorFunction *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_CalculusFieldMultivariateVectorFunction::install(PyObject *module)
      {
        installType(&PY_TYPE(CalculusFieldMultivariateVectorFunction), &PY_TYPE_DEF(CalculusFieldMultivariateVectorFunction), module, "CalculusFieldMultivariateVectorFunction", 0);
      }

      void t_CalculusFieldMultivariateVectorFunction::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(CalculusFieldMultivariateVectorFunction), "class_", make_descriptor(CalculusFieldMultivariateVectorFunction::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(CalculusFieldMultivariateVectorFunction), "wrapfn_", make_descriptor(t_CalculusFieldMultivariateVectorFunction::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(CalculusFieldMultivariateVectorFunction), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_CalculusFieldMultivariateVectorFunction_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, CalculusFieldMultivariateVectorFunction::initializeClass, 1)))
          return NULL;
        return t_CalculusFieldMultivariateVectorFunction::wrap_Object(CalculusFieldMultivariateVectorFunction(((t_CalculusFieldMultivariateVectorFunction *) arg)->object.this$));
      }
      static PyObject *t_CalculusFieldMultivariateVectorFunction_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, CalculusFieldMultivariateVectorFunction::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_CalculusFieldMultivariateVectorFunction_of_(t_CalculusFieldMultivariateVectorFunction *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static PyObject *t_CalculusFieldMultivariateVectorFunction_value(t_CalculusFieldMultivariateVectorFunction *self, PyObject *arg)
      {
        JArray< ::org::hipparchus::CalculusFieldElement > a0((jobject) NULL);
        PyTypeObject **p0;
        JArray< ::org::hipparchus::CalculusFieldElement > result((jobject) NULL);

        if (!parseArg(arg, "[K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
        {
          OBJ_CALL(result = self->object.value(a0));
          return JArray<jobject>(result.this$).wrap(::org::hipparchus::t_CalculusFieldElement::wrap_jobject);
        }

        PyErr_SetArgsError((PyObject *) self, "value", arg);
        return NULL;
      }
      static PyObject *t_CalculusFieldMultivariateVectorFunction_get__parameters_(t_CalculusFieldMultivariateVectorFunction *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/measurements/gnss/PythonCycleSlipDetectors.h"
#include "java/util/List.h"
#include "java/lang/Throwable.h"
#include "org/orekit/estimation/measurements/gnss/CycleSlipDetectors.h"
#include "java/lang/Class.h"
#include "org/orekit/files/rinex/observation/ObservationDataSet.h"
#include "org/orekit/estimation/measurements/gnss/CycleSlipDetectorResults.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace gnss {

          ::java::lang::Class *PythonCycleSlipDetectors::class$ = NULL;
          jmethodID *PythonCycleSlipDetectors::mids$ = NULL;
          bool PythonCycleSlipDetectors::live$ = false;

          jclass PythonCycleSlipDetectors::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/gnss/PythonCycleSlipDetectors");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_ff7cb6c242604316] = env->getMethodID(cls, "<init>", "()V");
              mids$[mid_detect_a27502c31bd75a45] = env->getMethodID(cls, "detect", "(Ljava/util/List;)Ljava/util/List;");
              mids$[mid_finalize_ff7cb6c242604316] = env->getMethodID(cls, "finalize", "()V");
              mids$[mid_pythonDecRef_ff7cb6c242604316] = env->getMethodID(cls, "pythonDecRef", "()V");
              mids$[mid_pythonExtension_42c72b98e3c2e08a] = env->getMethodID(cls, "pythonExtension", "()J");
              mids$[mid_pythonExtension_f5bbab7e97879358] = env->getMethodID(cls, "pythonExtension", "(J)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          PythonCycleSlipDetectors::PythonCycleSlipDetectors() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_ff7cb6c242604316)) {}

          void PythonCycleSlipDetectors::finalize() const
          {
            env->callVoidMethod(this$, mids$[mid_finalize_ff7cb6c242604316]);
          }

          jlong PythonCycleSlipDetectors::pythonExtension() const
          {
            return env->callLongMethod(this$, mids$[mid_pythonExtension_42c72b98e3c2e08a]);
          }

          void PythonCycleSlipDetectors::pythonExtension(jlong a0) const
          {
            env->callVoidMethod(this$, mids$[mid_pythonExtension_f5bbab7e97879358], a0);
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
          static PyObject *t_PythonCycleSlipDetectors_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_PythonCycleSlipDetectors_instance_(PyTypeObject *type, PyObject *arg);
          static int t_PythonCycleSlipDetectors_init_(t_PythonCycleSlipDetectors *self, PyObject *args, PyObject *kwds);
          static PyObject *t_PythonCycleSlipDetectors_finalize(t_PythonCycleSlipDetectors *self);
          static PyObject *t_PythonCycleSlipDetectors_pythonExtension(t_PythonCycleSlipDetectors *self, PyObject *args);
          static jobject JNICALL t_PythonCycleSlipDetectors_detect0(JNIEnv *jenv, jobject jobj, jobject a0);
          static void JNICALL t_PythonCycleSlipDetectors_pythonDecRef1(JNIEnv *jenv, jobject jobj);
          static PyObject *t_PythonCycleSlipDetectors_get__self(t_PythonCycleSlipDetectors *self, void *data);
          static PyGetSetDef t_PythonCycleSlipDetectors__fields_[] = {
            DECLARE_GET_FIELD(t_PythonCycleSlipDetectors, self),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_PythonCycleSlipDetectors__methods_[] = {
            DECLARE_METHOD(t_PythonCycleSlipDetectors, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PythonCycleSlipDetectors, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PythonCycleSlipDetectors, finalize, METH_NOARGS),
            DECLARE_METHOD(t_PythonCycleSlipDetectors, pythonExtension, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(PythonCycleSlipDetectors)[] = {
            { Py_tp_methods, t_PythonCycleSlipDetectors__methods_ },
            { Py_tp_init, (void *) t_PythonCycleSlipDetectors_init_ },
            { Py_tp_getset, t_PythonCycleSlipDetectors__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(PythonCycleSlipDetectors)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(PythonCycleSlipDetectors, t_PythonCycleSlipDetectors, PythonCycleSlipDetectors);

          void t_PythonCycleSlipDetectors::install(PyObject *module)
          {
            installType(&PY_TYPE(PythonCycleSlipDetectors), &PY_TYPE_DEF(PythonCycleSlipDetectors), module, "PythonCycleSlipDetectors", 1);
          }

          void t_PythonCycleSlipDetectors::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonCycleSlipDetectors), "class_", make_descriptor(PythonCycleSlipDetectors::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonCycleSlipDetectors), "wrapfn_", make_descriptor(t_PythonCycleSlipDetectors::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonCycleSlipDetectors), "boxfn_", make_descriptor(boxObject));
            jclass cls = env->getClass(PythonCycleSlipDetectors::initializeClass);
            JNINativeMethod methods[] = {
              { "detect", "(Ljava/util/List;)Ljava/util/List;", (void *) t_PythonCycleSlipDetectors_detect0 },
              { "pythonDecRef", "()V", (void *) t_PythonCycleSlipDetectors_pythonDecRef1 },
            };
            env->registerNatives(cls, methods, 2);
          }

          static PyObject *t_PythonCycleSlipDetectors_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, PythonCycleSlipDetectors::initializeClass, 1)))
              return NULL;
            return t_PythonCycleSlipDetectors::wrap_Object(PythonCycleSlipDetectors(((t_PythonCycleSlipDetectors *) arg)->object.this$));
          }
          static PyObject *t_PythonCycleSlipDetectors_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, PythonCycleSlipDetectors::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_PythonCycleSlipDetectors_init_(t_PythonCycleSlipDetectors *self, PyObject *args, PyObject *kwds)
          {
            PythonCycleSlipDetectors object((jobject) NULL);

            INT_CALL(object = PythonCycleSlipDetectors());
            self->object = object;

            Py_INCREF((PyObject *) self);
            self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

            return 0;
          }

          static PyObject *t_PythonCycleSlipDetectors_finalize(t_PythonCycleSlipDetectors *self)
          {
            OBJ_CALL(self->object.finalize());
            Py_RETURN_NONE;
          }

          static PyObject *t_PythonCycleSlipDetectors_pythonExtension(t_PythonCycleSlipDetectors *self, PyObject *args)
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

          static jobject JNICALL t_PythonCycleSlipDetectors_detect0(JNIEnv *jenv, jobject jobj, jobject a0)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonCycleSlipDetectors::mids$[PythonCycleSlipDetectors::mid_pythonExtension_42c72b98e3c2e08a]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            ::java::util::List value((jobject) NULL);
            PyObject *o0 = ::java::util::t_List::wrap_Object(::java::util::List(a0));
            PyObject *result = PyObject_CallMethod(obj, "detect", "O", o0);
            Py_DECREF(o0);
            if (!result)
              throwPythonError();
            else if (parseArg(result, "k", ::java::util::List::initializeClass, &value))
            {
              throwTypeError("detect", result);
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

          static void JNICALL t_PythonCycleSlipDetectors_pythonDecRef1(JNIEnv *jenv, jobject jobj)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonCycleSlipDetectors::mids$[PythonCycleSlipDetectors::mid_pythonExtension_42c72b98e3c2e08a]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

            if (obj != NULL)
            {
              jenv->CallVoidMethod(jobj, PythonCycleSlipDetectors::mids$[PythonCycleSlipDetectors::mid_pythonExtension_f5bbab7e97879358], (jlong) 0);
              env->finalizeObject(jenv, obj);
            }
          }

          static PyObject *t_PythonCycleSlipDetectors_get__self(t_PythonCycleSlipDetectors *self, void *data)
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
#include "org/orekit/models/earth/troposphere/ViennaModelType.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "org/orekit/models/earth/troposphere/ViennaModelType.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace models {
      namespace earth {
        namespace troposphere {

          ::java::lang::Class *ViennaModelType::class$ = NULL;
          jmethodID *ViennaModelType::mids$ = NULL;
          bool ViennaModelType::live$ = false;
          ViennaModelType *ViennaModelType::VIENNA_ONE = NULL;
          ViennaModelType *ViennaModelType::VIENNA_THREE = NULL;

          jclass ViennaModelType::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/models/earth/troposphere/ViennaModelType");

              mids$ = new jmethodID[max_mid];
              mids$[mid_valueOf_7a885eb1c989bb47] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/models/earth/troposphere/ViennaModelType;");
              mids$[mid_values_e6df3b8046caec9e] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/models/earth/troposphere/ViennaModelType;");

              class$ = new ::java::lang::Class(cls);
              cls = (jclass) class$->this$;

              VIENNA_ONE = new ViennaModelType(env->getStaticObjectField(cls, "VIENNA_ONE", "Lorg/orekit/models/earth/troposphere/ViennaModelType;"));
              VIENNA_THREE = new ViennaModelType(env->getStaticObjectField(cls, "VIENNA_THREE", "Lorg/orekit/models/earth/troposphere/ViennaModelType;"));
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          ViennaModelType ViennaModelType::valueOf(const ::java::lang::String & a0)
          {
            jclass cls = env->getClass(initializeClass);
            return ViennaModelType(env->callStaticObjectMethod(cls, mids$[mid_valueOf_7a885eb1c989bb47], a0.this$));
          }

          JArray< ViennaModelType > ViennaModelType::values()
          {
            jclass cls = env->getClass(initializeClass);
            return JArray< ViennaModelType >(env->callStaticObjectMethod(cls, mids$[mid_values_e6df3b8046caec9e]));
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
          static PyObject *t_ViennaModelType_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_ViennaModelType_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_ViennaModelType_of_(t_ViennaModelType *self, PyObject *args);
          static PyObject *t_ViennaModelType_valueOf(PyTypeObject *type, PyObject *args);
          static PyObject *t_ViennaModelType_values(PyTypeObject *type);
          static PyObject *t_ViennaModelType_get__parameters_(t_ViennaModelType *self, void *data);
          static PyGetSetDef t_ViennaModelType__fields_[] = {
            DECLARE_GET_FIELD(t_ViennaModelType, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_ViennaModelType__methods_[] = {
            DECLARE_METHOD(t_ViennaModelType, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_ViennaModelType, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_ViennaModelType, of_, METH_VARARGS),
            DECLARE_METHOD(t_ViennaModelType, valueOf, METH_VARARGS | METH_CLASS),
            DECLARE_METHOD(t_ViennaModelType, values, METH_NOARGS | METH_CLASS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(ViennaModelType)[] = {
            { Py_tp_methods, t_ViennaModelType__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { Py_tp_getset, t_ViennaModelType__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(ViennaModelType)[] = {
            &PY_TYPE_DEF(::java::lang::Enum),
            NULL
          };

          DEFINE_TYPE(ViennaModelType, t_ViennaModelType, ViennaModelType);
          PyObject *t_ViennaModelType::wrap_Object(const ViennaModelType& object, PyTypeObject *p0)
          {
            PyObject *obj = t_ViennaModelType::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_ViennaModelType *self = (t_ViennaModelType *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          PyObject *t_ViennaModelType::wrap_jobject(const jobject& object, PyTypeObject *p0)
          {
            PyObject *obj = t_ViennaModelType::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_ViennaModelType *self = (t_ViennaModelType *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          void t_ViennaModelType::install(PyObject *module)
          {
            installType(&PY_TYPE(ViennaModelType), &PY_TYPE_DEF(ViennaModelType), module, "ViennaModelType", 0);
          }

          void t_ViennaModelType::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(ViennaModelType), "class_", make_descriptor(ViennaModelType::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(ViennaModelType), "wrapfn_", make_descriptor(t_ViennaModelType::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(ViennaModelType), "boxfn_", make_descriptor(boxObject));
            env->getClass(ViennaModelType::initializeClass);
            PyObject_SetAttrString((PyObject *) PY_TYPE(ViennaModelType), "VIENNA_ONE", make_descriptor(t_ViennaModelType::wrap_Object(*ViennaModelType::VIENNA_ONE)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(ViennaModelType), "VIENNA_THREE", make_descriptor(t_ViennaModelType::wrap_Object(*ViennaModelType::VIENNA_THREE)));
          }

          static PyObject *t_ViennaModelType_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, ViennaModelType::initializeClass, 1)))
              return NULL;
            return t_ViennaModelType::wrap_Object(ViennaModelType(((t_ViennaModelType *) arg)->object.this$));
          }
          static PyObject *t_ViennaModelType_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, ViennaModelType::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_ViennaModelType_of_(t_ViennaModelType *self, PyObject *args)
          {
            if (!parseArg(args, "T", 1, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static PyObject *t_ViennaModelType_valueOf(PyTypeObject *type, PyObject *args)
          {
            ::java::lang::String a0((jobject) NULL);
            ViennaModelType result((jobject) NULL);

            if (!parseArgs(args, "s", &a0))
            {
              OBJ_CALL(result = ::org::orekit::models::earth::troposphere::ViennaModelType::valueOf(a0));
              return t_ViennaModelType::wrap_Object(result);
            }

            return callSuper(type, "valueOf", args, 2);
          }

          static PyObject *t_ViennaModelType_values(PyTypeObject *type)
          {
            JArray< ViennaModelType > result((jobject) NULL);
            OBJ_CALL(result = ::org::orekit::models::earth::troposphere::ViennaModelType::values());
            return JArray<jobject>(result.this$).wrap(t_ViennaModelType::wrap_jobject);
          }
          static PyObject *t_ViennaModelType_get__parameters_(t_ViennaModelType *self, void *data)
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
#include "org/orekit/data/SimpleTimeStampedTableParser.h"
#include "java/util/List.h"
#include "java/io/InputStream.h"
#include "java/lang/Class.h"
#include "org/orekit/data/SimpleTimeStampedTableParser$RowConverter.h"
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
          mids$[mid_init$_a7ca83a960d839a4] = env->getMethodID(cls, "<init>", "(ILorg/orekit/data/SimpleTimeStampedTableParser$RowConverter;)V");
          mids$[mid_parse_cf69cc549132f899] = env->getMethodID(cls, "parse", "(Ljava/io/InputStream;Ljava/lang/String;)Ljava/util/List;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      SimpleTimeStampedTableParser::SimpleTimeStampedTableParser(jint a0, const ::org::orekit::data::SimpleTimeStampedTableParser$RowConverter & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_a7ca83a960d839a4, a0, a1.this$)) {}

      ::java::util::List SimpleTimeStampedTableParser::parse(const ::java::io::InputStream & a0, const ::java::lang::String & a1) const
      {
        return ::java::util::List(env->callObjectMethod(this$, mids$[mid_parse_cf69cc549132f899], a0.this$, a1.this$));
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
#include "org/hipparchus/analysis/function/HarmonicOscillator.h"
#include "org/hipparchus/analysis/differentiation/Derivative.h"
#include "org/hipparchus/analysis/differentiation/UnivariateDifferentiableFunction.h"
#include "java/lang/Class.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace function {

        ::java::lang::Class *HarmonicOscillator::class$ = NULL;
        jmethodID *HarmonicOscillator::mids$ = NULL;
        bool HarmonicOscillator::live$ = false;

        jclass HarmonicOscillator::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/function/HarmonicOscillator");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_bd28dc6055dc5bbd] = env->getMethodID(cls, "<init>", "(DDD)V");
            mids$[mid_value_bf28ed64d6e8576b] = env->getMethodID(cls, "value", "(D)D");
            mids$[mid_value_ba85b555c6f0b809] = env->getMethodID(cls, "value", "(Lorg/hipparchus/analysis/differentiation/Derivative;)Lorg/hipparchus/analysis/differentiation/Derivative;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        HarmonicOscillator::HarmonicOscillator(jdouble a0, jdouble a1, jdouble a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_bd28dc6055dc5bbd, a0, a1, a2)) {}

        jdouble HarmonicOscillator::value(jdouble a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_value_bf28ed64d6e8576b], a0);
        }

        ::org::hipparchus::analysis::differentiation::Derivative HarmonicOscillator::value(const ::org::hipparchus::analysis::differentiation::Derivative & a0) const
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
#include "org/hipparchus/analysis/function/HarmonicOscillator$Parametric.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace function {
        static PyObject *t_HarmonicOscillator_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_HarmonicOscillator_instance_(PyTypeObject *type, PyObject *arg);
        static int t_HarmonicOscillator_init_(t_HarmonicOscillator *self, PyObject *args, PyObject *kwds);
        static PyObject *t_HarmonicOscillator_value(t_HarmonicOscillator *self, PyObject *args);

        static PyMethodDef t_HarmonicOscillator__methods_[] = {
          DECLARE_METHOD(t_HarmonicOscillator, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_HarmonicOscillator, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_HarmonicOscillator, value, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(HarmonicOscillator)[] = {
          { Py_tp_methods, t_HarmonicOscillator__methods_ },
          { Py_tp_init, (void *) t_HarmonicOscillator_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(HarmonicOscillator)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(HarmonicOscillator, t_HarmonicOscillator, HarmonicOscillator);

        void t_HarmonicOscillator::install(PyObject *module)
        {
          installType(&PY_TYPE(HarmonicOscillator), &PY_TYPE_DEF(HarmonicOscillator), module, "HarmonicOscillator", 0);
          PyObject_SetAttrString((PyObject *) PY_TYPE(HarmonicOscillator), "Parametric", make_descriptor(&PY_TYPE_DEF(HarmonicOscillator$Parametric)));
        }

        void t_HarmonicOscillator::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(HarmonicOscillator), "class_", make_descriptor(HarmonicOscillator::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(HarmonicOscillator), "wrapfn_", make_descriptor(t_HarmonicOscillator::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(HarmonicOscillator), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_HarmonicOscillator_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, HarmonicOscillator::initializeClass, 1)))
            return NULL;
          return t_HarmonicOscillator::wrap_Object(HarmonicOscillator(((t_HarmonicOscillator *) arg)->object.this$));
        }
        static PyObject *t_HarmonicOscillator_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, HarmonicOscillator::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_HarmonicOscillator_init_(t_HarmonicOscillator *self, PyObject *args, PyObject *kwds)
        {
          jdouble a0;
          jdouble a1;
          jdouble a2;
          HarmonicOscillator object((jobject) NULL);

          if (!parseArgs(args, "DDD", &a0, &a1, &a2))
          {
            INT_CALL(object = HarmonicOscillator(a0, a1, a2));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_HarmonicOscillator_value(t_HarmonicOscillator *self, PyObject *args)
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
#include "java/lang/String.h"
#include "java/lang/StringBuilder.h"
#include "java/lang/StringBuffer.h"
#include "java/lang/Iterable.h"
#include "java/util/Locale.h"
#include "java/util/stream/Stream.h"
#include "java/util/Comparator.h"
#include "java/lang/CharSequence.h"
#include "java/io/Serializable.h"
#include "java/io/UnsupportedEncodingException.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "java/lang/Comparable.h"
#include "JArray.h"

namespace java {
  namespace lang {

    ::java::lang::Class *String::class$ = NULL;
    jmethodID *String::mids$ = NULL;
    bool String::live$ = false;
    ::java::util::Comparator *String::CASE_INSENSITIVE_ORDER = NULL;

    jclass String::initializeClass(bool getOnly)
    {
      if (getOnly)
        return (jclass) (live$ ? class$->this$ : NULL);
      if (class$ == NULL)
      {
        jclass cls = (jclass) env->findClass("java/lang/String");

        mids$ = new jmethodID[max_mid];
        mids$[mid_init$_ff7cb6c242604316] = env->getMethodID(cls, "<init>", "()V");
        mids$[mid_init$_0a9ea6096ddfe2cc] = env->getMethodID(cls, "<init>", "(Ljava/lang/StringBuffer;)V");
        mids$[mid_init$_59d3cc8e4d4cc5c4] = env->getMethodID(cls, "<init>", "(Ljava/lang/StringBuilder;)V");
        mids$[mid_init$_bba2a19638de22ff] = env->getMethodID(cls, "<init>", "([B)V");
        mids$[mid_init$_e22e96b35f4145e4] = env->getMethodID(cls, "<init>", "([C)V");
        mids$[mid_init$_53599daa54a53068] = env->getMethodID(cls, "<init>", "([BLjava/lang/String;)V");
        mids$[mid_init$_20d21be51afdcd58] = env->getMethodID(cls, "<init>", "([BI)V");
        mids$[mid_init$_e4288ba5fbf20d28] = env->getMethodID(cls, "<init>", "([BII)V");
        mids$[mid_init$_6f10578448832e2a] = env->getMethodID(cls, "<init>", "([CII)V");
        mids$[mid_init$_9faac5a856899214] = env->getMethodID(cls, "<init>", "([III)V");
        mids$[mid_init$_bdd9412ce6ca987d] = env->getMethodID(cls, "<init>", "([BIILjava/lang/String;)V");
        mids$[mid_init$_1ad7c6da88120e43] = env->getMethodID(cls, "<init>", "([BIII)V");
        mids$[mid_charAt_80723b5d4f0fdfa2] = env->getMethodID(cls, "charAt", "(I)C");
        mids$[mid_codePointAt_d938fc64e8c6df2d] = env->getMethodID(cls, "codePointAt", "(I)I");
        mids$[mid_codePointBefore_d938fc64e8c6df2d] = env->getMethodID(cls, "codePointBefore", "(I)I");
        mids$[mid_codePointCount_91b9e1e34b2235d5] = env->getMethodID(cls, "codePointCount", "(II)I");
        mids$[mid_compareTo_84fe1f8fbbcb0268] = env->getMethodID(cls, "compareTo", "(Ljava/lang/String;)I");
        mids$[mid_compareToIgnoreCase_84fe1f8fbbcb0268] = env->getMethodID(cls, "compareToIgnoreCase", "(Ljava/lang/String;)I");
        mids$[mid_concat_95277969d373e11f] = env->getMethodID(cls, "concat", "(Ljava/lang/String;)Ljava/lang/String;");
        mids$[mid_contains_6925c1b6417dac5a] = env->getMethodID(cls, "contains", "(Ljava/lang/CharSequence;)Z");
        mids$[mid_contentEquals_8412cb24aad4c2a7] = env->getMethodID(cls, "contentEquals", "(Ljava/lang/StringBuffer;)Z");
        mids$[mid_contentEquals_6925c1b6417dac5a] = env->getMethodID(cls, "contentEquals", "(Ljava/lang/CharSequence;)Z");
        mids$[mid_copyValueOf_8b7706fe569efa7c] = env->getStaticMethodID(cls, "copyValueOf", "([C)Ljava/lang/String;");
        mids$[mid_copyValueOf_8d06f8552b96f415] = env->getStaticMethodID(cls, "copyValueOf", "([CII)Ljava/lang/String;");
        mids$[mid_endsWith_df4c65b2aede5c41] = env->getMethodID(cls, "endsWith", "(Ljava/lang/String;)Z");
        mids$[mid_equals_72faff9b05f5ed5e] = env->getMethodID(cls, "equals", "(Ljava/lang/Object;)Z");
        mids$[mid_equalsIgnoreCase_df4c65b2aede5c41] = env->getMethodID(cls, "equalsIgnoreCase", "(Ljava/lang/String;)Z");
        mids$[mid_format_c9595ebc2d5f5371] = env->getStaticMethodID(cls, "format", "(Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/String;");
        mids$[mid_format_57221315aa959ae0] = env->getStaticMethodID(cls, "format", "(Ljava/util/Locale;Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/String;");
        mids$[mid_getBytes_7b0acd212e47f280] = env->getMethodID(cls, "getBytes", "()[B");
        mids$[mid_getBytes_f72ab673b8410e58] = env->getMethodID(cls, "getBytes", "(Ljava/lang/String;)[B");
        mids$[mid_getBytes_10cd2f0eea9eff04] = env->getMethodID(cls, "getBytes", "(II[BI)V");
        mids$[mid_getChars_58054e664fd79305] = env->getMethodID(cls, "getChars", "(II[CI)V");
        mids$[mid_hashCode_d6ab429752e7c267] = env->getMethodID(cls, "hashCode", "()I");
        mids$[mid_indexOf_84fe1f8fbbcb0268] = env->getMethodID(cls, "indexOf", "(Ljava/lang/String;)I");
        mids$[mid_indexOf_d938fc64e8c6df2d] = env->getMethodID(cls, "indexOf", "(I)I");
        mids$[mid_indexOf_36da4b2d3bc5085f] = env->getMethodID(cls, "indexOf", "(Ljava/lang/String;I)I");
        mids$[mid_indexOf_91b9e1e34b2235d5] = env->getMethodID(cls, "indexOf", "(II)I");
        mids$[mid_intern_d2c8eb4129821f0e] = env->getMethodID(cls, "intern", "()Ljava/lang/String;");
        mids$[mid_isBlank_eee3de00fe971136] = env->getMethodID(cls, "isBlank", "()Z");
        mids$[mid_isEmpty_eee3de00fe971136] = env->getMethodID(cls, "isEmpty", "()Z");
        mids$[mid_join_d8e93d2e0339e49e] = env->getStaticMethodID(cls, "join", "(Ljava/lang/CharSequence;[Ljava/lang/CharSequence;)Ljava/lang/String;");
        mids$[mid_join_021aa3ea429d2850] = env->getStaticMethodID(cls, "join", "(Ljava/lang/CharSequence;Ljava/lang/Iterable;)Ljava/lang/String;");
        mids$[mid_lastIndexOf_84fe1f8fbbcb0268] = env->getMethodID(cls, "lastIndexOf", "(Ljava/lang/String;)I");
        mids$[mid_lastIndexOf_d938fc64e8c6df2d] = env->getMethodID(cls, "lastIndexOf", "(I)I");
        mids$[mid_lastIndexOf_36da4b2d3bc5085f] = env->getMethodID(cls, "lastIndexOf", "(Ljava/lang/String;I)I");
        mids$[mid_lastIndexOf_91b9e1e34b2235d5] = env->getMethodID(cls, "lastIndexOf", "(II)I");
        mids$[mid_length_d6ab429752e7c267] = env->getMethodID(cls, "length", "()I");
        mids$[mid_lines_11e4ca8182c1933d] = env->getMethodID(cls, "lines", "()Ljava/util/stream/Stream;");
        mids$[mid_matches_df4c65b2aede5c41] = env->getMethodID(cls, "matches", "(Ljava/lang/String;)Z");
        mids$[mid_offsetByCodePoints_91b9e1e34b2235d5] = env->getMethodID(cls, "offsetByCodePoints", "(II)I");
        mids$[mid_regionMatches_247919e242b6983c] = env->getMethodID(cls, "regionMatches", "(ILjava/lang/String;II)Z");
        mids$[mid_regionMatches_ea488fcbe6582fe5] = env->getMethodID(cls, "regionMatches", "(ZILjava/lang/String;II)Z");
        mids$[mid_repeat_c81987d6b0e2977a] = env->getMethodID(cls, "repeat", "(I)Ljava/lang/String;");
        mids$[mid_replace_ac77d7ed8c59eb58] = env->getMethodID(cls, "replace", "(CC)Ljava/lang/String;");
        mids$[mid_replace_71fa18b1decd95a9] = env->getMethodID(cls, "replace", "(Ljava/lang/CharSequence;Ljava/lang/CharSequence;)Ljava/lang/String;");
        mids$[mid_replaceAll_91d6dcf90111829e] = env->getMethodID(cls, "replaceAll", "(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;");
        mids$[mid_replaceFirst_91d6dcf90111829e] = env->getMethodID(cls, "replaceFirst", "(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;");
        mids$[mid_split_8e8aaefa3268abcf] = env->getMethodID(cls, "split", "(Ljava/lang/String;)[Ljava/lang/String;");
        mids$[mid_split_cf27dd36351064f2] = env->getMethodID(cls, "split", "(Ljava/lang/String;I)[Ljava/lang/String;");
        mids$[mid_startsWith_df4c65b2aede5c41] = env->getMethodID(cls, "startsWith", "(Ljava/lang/String;)Z");
        mids$[mid_startsWith_ece0a4045ea089c1] = env->getMethodID(cls, "startsWith", "(Ljava/lang/String;I)Z");
        mids$[mid_strip_d2c8eb4129821f0e] = env->getMethodID(cls, "strip", "()Ljava/lang/String;");
        mids$[mid_stripLeading_d2c8eb4129821f0e] = env->getMethodID(cls, "stripLeading", "()Ljava/lang/String;");
        mids$[mid_stripTrailing_d2c8eb4129821f0e] = env->getMethodID(cls, "stripTrailing", "()Ljava/lang/String;");
        mids$[mid_subSequence_b87db528df453723] = env->getMethodID(cls, "subSequence", "(II)Ljava/lang/CharSequence;");
        mids$[mid_substring_c81987d6b0e2977a] = env->getMethodID(cls, "substring", "(I)Ljava/lang/String;");
        mids$[mid_substring_43e3765e4d074a90] = env->getMethodID(cls, "substring", "(II)Ljava/lang/String;");
        mids$[mid_toCharArray_dc85a3bfc14a8b31] = env->getMethodID(cls, "toCharArray", "()[C");
        mids$[mid_toLowerCase_d2c8eb4129821f0e] = env->getMethodID(cls, "toLowerCase", "()Ljava/lang/String;");
        mids$[mid_toLowerCase_5969ecf7afac3dba] = env->getMethodID(cls, "toLowerCase", "(Ljava/util/Locale;)Ljava/lang/String;");
        mids$[mid_toString_d2c8eb4129821f0e] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");
        mids$[mid_toUpperCase_d2c8eb4129821f0e] = env->getMethodID(cls, "toUpperCase", "()Ljava/lang/String;");
        mids$[mid_toUpperCase_5969ecf7afac3dba] = env->getMethodID(cls, "toUpperCase", "(Ljava/util/Locale;)Ljava/lang/String;");
        mids$[mid_trim_d2c8eb4129821f0e] = env->getMethodID(cls, "trim", "()Ljava/lang/String;");
        mids$[mid_valueOf_8b7706fe569efa7c] = env->getStaticMethodID(cls, "valueOf", "([C)Ljava/lang/String;");
        mids$[mid_valueOf_512646e36b2b1871] = env->getStaticMethodID(cls, "valueOf", "(Z)Ljava/lang/String;");
        mids$[mid_valueOf_53bd6cb431dc0332] = env->getStaticMethodID(cls, "valueOf", "(C)Ljava/lang/String;");
        mids$[mid_valueOf_e3ac8af686594d08] = env->getStaticMethodID(cls, "valueOf", "(D)Ljava/lang/String;");
        mids$[mid_valueOf_7e1d4f43ec30f721] = env->getStaticMethodID(cls, "valueOf", "(F)Ljava/lang/String;");
        mids$[mid_valueOf_c81987d6b0e2977a] = env->getStaticMethodID(cls, "valueOf", "(I)Ljava/lang/String;");
        mids$[mid_valueOf_60ee6fc56bffa550] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/Object;)Ljava/lang/String;");
        mids$[mid_valueOf_7fdd1777495672ef] = env->getStaticMethodID(cls, "valueOf", "(J)Ljava/lang/String;");
        mids$[mid_valueOf_8d06f8552b96f415] = env->getStaticMethodID(cls, "valueOf", "([CII)Ljava/lang/String;");

        class$ = new ::java::lang::Class(cls);
        cls = (jclass) class$->this$;

        CASE_INSENSITIVE_ORDER = new ::java::util::Comparator(env->getStaticObjectField(cls, "CASE_INSENSITIVE_ORDER", "Ljava/util/Comparator;"));
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    String::String() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_ff7cb6c242604316)) {}

    String::String(const ::java::lang::StringBuffer & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0a9ea6096ddfe2cc, a0.this$)) {}

    String::String(const ::java::lang::StringBuilder & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_59d3cc8e4d4cc5c4, a0.this$)) {}

    String::String(const JArray< jbyte > & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_bba2a19638de22ff, a0.this$)) {}

    String::String(const JArray< jchar > & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_e22e96b35f4145e4, a0.this$)) {}

    String::String(const JArray< jbyte > & a0, const String & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_53599daa54a53068, a0.this$, a1.this$)) {}

    String::String(const JArray< jbyte > & a0, jint a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_20d21be51afdcd58, a0.this$, a1)) {}

    String::String(const JArray< jbyte > & a0, jint a1, jint a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_e4288ba5fbf20d28, a0.this$, a1, a2)) {}

    String::String(const JArray< jchar > & a0, jint a1, jint a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_6f10578448832e2a, a0.this$, a1, a2)) {}

    String::String(const JArray< jint > & a0, jint a1, jint a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_9faac5a856899214, a0.this$, a1, a2)) {}

    String::String(const JArray< jbyte > & a0, jint a1, jint a2, const String & a3) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_bdd9412ce6ca987d, a0.this$, a1, a2, a3.this$)) {}

    String::String(const JArray< jbyte > & a0, jint a1, jint a2, jint a3) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_1ad7c6da88120e43, a0.this$, a1, a2, a3)) {}

    jchar String::charAt(jint a0) const
    {
      return env->callCharMethod(this$, mids$[mid_charAt_80723b5d4f0fdfa2], a0);
    }

    jint String::codePointAt(jint a0) const
    {
      return env->callIntMethod(this$, mids$[mid_codePointAt_d938fc64e8c6df2d], a0);
    }

    jint String::codePointBefore(jint a0) const
    {
      return env->callIntMethod(this$, mids$[mid_codePointBefore_d938fc64e8c6df2d], a0);
    }

    jint String::codePointCount(jint a0, jint a1) const
    {
      return env->callIntMethod(this$, mids$[mid_codePointCount_91b9e1e34b2235d5], a0, a1);
    }

    jint String::compareTo(const String & a0) const
    {
      return env->callIntMethod(this$, mids$[mid_compareTo_84fe1f8fbbcb0268], a0.this$);
    }

    jint String::compareToIgnoreCase(const String & a0) const
    {
      return env->callIntMethod(this$, mids$[mid_compareToIgnoreCase_84fe1f8fbbcb0268], a0.this$);
    }

    String String::concat(const String & a0) const
    {
      return String(env->callObjectMethod(this$, mids$[mid_concat_95277969d373e11f], a0.this$));
    }

    jboolean String::contains(const ::java::lang::CharSequence & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_contains_6925c1b6417dac5a], a0.this$);
    }

    jboolean String::contentEquals(const ::java::lang::StringBuffer & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_contentEquals_8412cb24aad4c2a7], a0.this$);
    }

    jboolean String::contentEquals(const ::java::lang::CharSequence & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_contentEquals_6925c1b6417dac5a], a0.this$);
    }

    String String::copyValueOf(const JArray< jchar > & a0)
    {
      jclass cls = env->getClass(initializeClass);
      return String(env->callStaticObjectMethod(cls, mids$[mid_copyValueOf_8b7706fe569efa7c], a0.this$));
    }

    String String::copyValueOf(const JArray< jchar > & a0, jint a1, jint a2)
    {
      jclass cls = env->getClass(initializeClass);
      return String(env->callStaticObjectMethod(cls, mids$[mid_copyValueOf_8d06f8552b96f415], a0.this$, a1, a2));
    }

    jboolean String::endsWith(const String & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_endsWith_df4c65b2aede5c41], a0.this$);
    }

    jboolean String::equals(const ::java::lang::Object & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_equals_72faff9b05f5ed5e], a0.this$);
    }

    jboolean String::equalsIgnoreCase(const String & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_equalsIgnoreCase_df4c65b2aede5c41], a0.this$);
    }

    String String::format(const String & a0, const JArray< ::java::lang::Object > & a1)
    {
      jclass cls = env->getClass(initializeClass);
      return String(env->callStaticObjectMethod(cls, mids$[mid_format_c9595ebc2d5f5371], a0.this$, a1.this$));
    }

    String String::format(const ::java::util::Locale & a0, const String & a1, const JArray< ::java::lang::Object > & a2)
    {
      jclass cls = env->getClass(initializeClass);
      return String(env->callStaticObjectMethod(cls, mids$[mid_format_57221315aa959ae0], a0.this$, a1.this$, a2.this$));
    }

    JArray< jbyte > String::getBytes() const
    {
      return JArray< jbyte >(env->callObjectMethod(this$, mids$[mid_getBytes_7b0acd212e47f280]));
    }

    JArray< jbyte > String::getBytes(const String & a0) const
    {
      return JArray< jbyte >(env->callObjectMethod(this$, mids$[mid_getBytes_f72ab673b8410e58], a0.this$));
    }

    void String::getBytes(jint a0, jint a1, const JArray< jbyte > & a2, jint a3) const
    {
      env->callVoidMethod(this$, mids$[mid_getBytes_10cd2f0eea9eff04], a0, a1, a2.this$, a3);
    }

    void String::getChars(jint a0, jint a1, const JArray< jchar > & a2, jint a3) const
    {
      env->callVoidMethod(this$, mids$[mid_getChars_58054e664fd79305], a0, a1, a2.this$, a3);
    }

    jint String::hashCode() const
    {
      return env->callIntMethod(this$, mids$[mid_hashCode_d6ab429752e7c267]);
    }

    jint String::indexOf(const String & a0) const
    {
      return env->callIntMethod(this$, mids$[mid_indexOf_84fe1f8fbbcb0268], a0.this$);
    }

    jint String::indexOf(jint a0) const
    {
      return env->callIntMethod(this$, mids$[mid_indexOf_d938fc64e8c6df2d], a0);
    }

    jint String::indexOf(const String & a0, jint a1) const
    {
      return env->callIntMethod(this$, mids$[mid_indexOf_36da4b2d3bc5085f], a0.this$, a1);
    }

    jint String::indexOf(jint a0, jint a1) const
    {
      return env->callIntMethod(this$, mids$[mid_indexOf_91b9e1e34b2235d5], a0, a1);
    }

    String String::intern() const
    {
      return String(env->callObjectMethod(this$, mids$[mid_intern_d2c8eb4129821f0e]));
    }

    jboolean String::isBlank() const
    {
      return env->callBooleanMethod(this$, mids$[mid_isBlank_eee3de00fe971136]);
    }

    jboolean String::isEmpty() const
    {
      return env->callBooleanMethod(this$, mids$[mid_isEmpty_eee3de00fe971136]);
    }

    String String::join(const ::java::lang::CharSequence & a0, const JArray< ::java::lang::CharSequence > & a1)
    {
      jclass cls = env->getClass(initializeClass);
      return String(env->callStaticObjectMethod(cls, mids$[mid_join_d8e93d2e0339e49e], a0.this$, a1.this$));
    }

    String String::join(const ::java::lang::CharSequence & a0, const ::java::lang::Iterable & a1)
    {
      jclass cls = env->getClass(initializeClass);
      return String(env->callStaticObjectMethod(cls, mids$[mid_join_021aa3ea429d2850], a0.this$, a1.this$));
    }

    jint String::lastIndexOf(const String & a0) const
    {
      return env->callIntMethod(this$, mids$[mid_lastIndexOf_84fe1f8fbbcb0268], a0.this$);
    }

    jint String::lastIndexOf(jint a0) const
    {
      return env->callIntMethod(this$, mids$[mid_lastIndexOf_d938fc64e8c6df2d], a0);
    }

    jint String::lastIndexOf(const String & a0, jint a1) const
    {
      return env->callIntMethod(this$, mids$[mid_lastIndexOf_36da4b2d3bc5085f], a0.this$, a1);
    }

    jint String::lastIndexOf(jint a0, jint a1) const
    {
      return env->callIntMethod(this$, mids$[mid_lastIndexOf_91b9e1e34b2235d5], a0, a1);
    }

    jint String::length() const
    {
      return env->callIntMethod(this$, mids$[mid_length_d6ab429752e7c267]);
    }

    ::java::util::stream::Stream String::lines() const
    {
      return ::java::util::stream::Stream(env->callObjectMethod(this$, mids$[mid_lines_11e4ca8182c1933d]));
    }

    jboolean String::matches(const String & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_matches_df4c65b2aede5c41], a0.this$);
    }

    jint String::offsetByCodePoints(jint a0, jint a1) const
    {
      return env->callIntMethod(this$, mids$[mid_offsetByCodePoints_91b9e1e34b2235d5], a0, a1);
    }

    jboolean String::regionMatches(jint a0, const String & a1, jint a2, jint a3) const
    {
      return env->callBooleanMethod(this$, mids$[mid_regionMatches_247919e242b6983c], a0, a1.this$, a2, a3);
    }

    jboolean String::regionMatches(jboolean a0, jint a1, const String & a2, jint a3, jint a4) const
    {
      return env->callBooleanMethod(this$, mids$[mid_regionMatches_ea488fcbe6582fe5], a0, a1, a2.this$, a3, a4);
    }

    String String::repeat(jint a0) const
    {
      return String(env->callObjectMethod(this$, mids$[mid_repeat_c81987d6b0e2977a], a0));
    }

    String String::replace(jchar a0, jchar a1) const
    {
      return String(env->callObjectMethod(this$, mids$[mid_replace_ac77d7ed8c59eb58], a0, a1));
    }

    String String::replace(const ::java::lang::CharSequence & a0, const ::java::lang::CharSequence & a1) const
    {
      return String(env->callObjectMethod(this$, mids$[mid_replace_71fa18b1decd95a9], a0.this$, a1.this$));
    }

    String String::replaceAll(const String & a0, const String & a1) const
    {
      return String(env->callObjectMethod(this$, mids$[mid_replaceAll_91d6dcf90111829e], a0.this$, a1.this$));
    }

    String String::replaceFirst(const String & a0, const String & a1) const
    {
      return String(env->callObjectMethod(this$, mids$[mid_replaceFirst_91d6dcf90111829e], a0.this$, a1.this$));
    }

    JArray< String > String::split(const String & a0) const
    {
      return JArray< String >(env->callObjectMethod(this$, mids$[mid_split_8e8aaefa3268abcf], a0.this$));
    }

    JArray< String > String::split(const String & a0, jint a1) const
    {
      return JArray< String >(env->callObjectMethod(this$, mids$[mid_split_cf27dd36351064f2], a0.this$, a1));
    }

    jboolean String::startsWith(const String & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_startsWith_df4c65b2aede5c41], a0.this$);
    }

    jboolean String::startsWith(const String & a0, jint a1) const
    {
      return env->callBooleanMethod(this$, mids$[mid_startsWith_ece0a4045ea089c1], a0.this$, a1);
    }

    String String::strip() const
    {
      return String(env->callObjectMethod(this$, mids$[mid_strip_d2c8eb4129821f0e]));
    }

    String String::stripLeading() const
    {
      return String(env->callObjectMethod(this$, mids$[mid_stripLeading_d2c8eb4129821f0e]));
    }

    String String::stripTrailing() const
    {
      return String(env->callObjectMethod(this$, mids$[mid_stripTrailing_d2c8eb4129821f0e]));
    }

    ::java::lang::CharSequence String::subSequence(jint a0, jint a1) const
    {
      return ::java::lang::CharSequence(env->callObjectMethod(this$, mids$[mid_subSequence_b87db528df453723], a0, a1));
    }

    String String::substring(jint a0) const
    {
      return String(env->callObjectMethod(this$, mids$[mid_substring_c81987d6b0e2977a], a0));
    }

    String String::substring(jint a0, jint a1) const
    {
      return String(env->callObjectMethod(this$, mids$[mid_substring_43e3765e4d074a90], a0, a1));
    }

    JArray< jchar > String::toCharArray() const
    {
      return JArray< jchar >(env->callObjectMethod(this$, mids$[mid_toCharArray_dc85a3bfc14a8b31]));
    }

    String String::toLowerCase() const
    {
      return String(env->callObjectMethod(this$, mids$[mid_toLowerCase_d2c8eb4129821f0e]));
    }

    String String::toLowerCase(const ::java::util::Locale & a0) const
    {
      return String(env->callObjectMethod(this$, mids$[mid_toLowerCase_5969ecf7afac3dba], a0.this$));
    }

    String String::toString() const
    {
      return String(env->callObjectMethod(this$, mids$[mid_toString_d2c8eb4129821f0e]));
    }

    String String::toUpperCase() const
    {
      return String(env->callObjectMethod(this$, mids$[mid_toUpperCase_d2c8eb4129821f0e]));
    }

    String String::toUpperCase(const ::java::util::Locale & a0) const
    {
      return String(env->callObjectMethod(this$, mids$[mid_toUpperCase_5969ecf7afac3dba], a0.this$));
    }

    String String::trim() const
    {
      return String(env->callObjectMethod(this$, mids$[mid_trim_d2c8eb4129821f0e]));
    }

    String String::valueOf(const JArray< jchar > & a0)
    {
      jclass cls = env->getClass(initializeClass);
      return String(env->callStaticObjectMethod(cls, mids$[mid_valueOf_8b7706fe569efa7c], a0.this$));
    }

    String String::valueOf(jboolean a0)
    {
      jclass cls = env->getClass(initializeClass);
      return String(env->callStaticObjectMethod(cls, mids$[mid_valueOf_512646e36b2b1871], a0));
    }

    String String::valueOf(jchar a0)
    {
      jclass cls = env->getClass(initializeClass);
      return String(env->callStaticObjectMethod(cls, mids$[mid_valueOf_53bd6cb431dc0332], a0));
    }

    String String::valueOf(jdouble a0)
    {
      jclass cls = env->getClass(initializeClass);
      return String(env->callStaticObjectMethod(cls, mids$[mid_valueOf_e3ac8af686594d08], a0));
    }

    String String::valueOf(jfloat a0)
    {
      jclass cls = env->getClass(initializeClass);
      return String(env->callStaticObjectMethod(cls, mids$[mid_valueOf_7e1d4f43ec30f721], a0));
    }

    String String::valueOf(jint a0)
    {
      jclass cls = env->getClass(initializeClass);
      return String(env->callStaticObjectMethod(cls, mids$[mid_valueOf_c81987d6b0e2977a], a0));
    }

    String String::valueOf(const ::java::lang::Object & a0)
    {
      jclass cls = env->getClass(initializeClass);
      return String(env->callStaticObjectMethod(cls, mids$[mid_valueOf_60ee6fc56bffa550], a0.this$));
    }

    String String::valueOf(jlong a0)
    {
      jclass cls = env->getClass(initializeClass);
      return String(env->callStaticObjectMethod(cls, mids$[mid_valueOf_7fdd1777495672ef], a0));
    }

    String String::valueOf(const JArray< jchar > & a0, jint a1, jint a2)
    {
      jclass cls = env->getClass(initializeClass);
      return String(env->callStaticObjectMethod(cls, mids$[mid_valueOf_8d06f8552b96f415], a0.this$, a1, a2));
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace java {
  namespace lang {
    static PyObject *t_String_cast_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_String_instance_(PyTypeObject *type, PyObject *arg);
    static int t_String_init_(t_String *self, PyObject *args, PyObject *kwds);
    static PyObject *t_String_charAt(t_String *self, PyObject *arg);
    static PyObject *t_String_codePointAt(t_String *self, PyObject *arg);
    static PyObject *t_String_codePointBefore(t_String *self, PyObject *arg);
    static PyObject *t_String_codePointCount(t_String *self, PyObject *args);
    static PyObject *t_String_compareTo(t_String *self, PyObject *arg);
    static PyObject *t_String_compareToIgnoreCase(t_String *self, PyObject *arg);
    static PyObject *t_String_concat(t_String *self, PyObject *arg);
    static PyObject *t_String_contains(t_String *self, PyObject *arg);
    static PyObject *t_String_contentEquals(t_String *self, PyObject *args);
    static PyObject *t_String_copyValueOf(PyTypeObject *type, PyObject *args);
    static PyObject *t_String_endsWith(t_String *self, PyObject *arg);
    static PyObject *t_String_equals(t_String *self, PyObject *args);
    static PyObject *t_String_equalsIgnoreCase(t_String *self, PyObject *arg);
    static PyObject *t_String_format(PyTypeObject *type, PyObject *args);
    static PyObject *t_String_getBytes(t_String *self, PyObject *args);
    static PyObject *t_String_getChars(t_String *self, PyObject *args);
    static PyObject *t_String_hashCode(t_String *self, PyObject *args);
    static PyObject *t_String_indexOf(t_String *self, PyObject *args);
    static PyObject *t_String_intern(t_String *self);
    static PyObject *t_String_isBlank(t_String *self);
    static PyObject *t_String_isEmpty(t_String *self);
    static PyObject *t_String_join(PyTypeObject *type, PyObject *args);
    static PyObject *t_String_lastIndexOf(t_String *self, PyObject *args);
    static PyObject *t_String_length(t_String *self);
    static PyObject *t_String_lines(t_String *self);
    static PyObject *t_String_matches(t_String *self, PyObject *arg);
    static PyObject *t_String_offsetByCodePoints(t_String *self, PyObject *args);
    static PyObject *t_String_regionMatches(t_String *self, PyObject *args);
    static PyObject *t_String_repeat(t_String *self, PyObject *arg);
    static PyObject *t_String_replace(t_String *self, PyObject *args);
    static PyObject *t_String_replaceAll(t_String *self, PyObject *args);
    static PyObject *t_String_replaceFirst(t_String *self, PyObject *args);
    static PyObject *t_String_split(t_String *self, PyObject *args);
    static PyObject *t_String_startsWith(t_String *self, PyObject *args);
    static PyObject *t_String_strip(t_String *self);
    static PyObject *t_String_stripLeading(t_String *self);
    static PyObject *t_String_stripTrailing(t_String *self);
    static PyObject *t_String_subSequence(t_String *self, PyObject *args);
    static PyObject *t_String_substring(t_String *self, PyObject *args);
    static PyObject *t_String_toCharArray(t_String *self);
    static PyObject *t_String_toLowerCase(t_String *self, PyObject *args);
    static PyObject *t_String_toString(t_String *self, PyObject *args);
    static PyObject *t_String_toUpperCase(t_String *self, PyObject *args);
    static PyObject *t_String_trim(t_String *self);
    static PyObject *t_String_valueOf(PyTypeObject *type, PyObject *args);
    static PyObject *t_String_get__blank(t_String *self, void *data);
    static PyObject *t_String_get__bytes(t_String *self, void *data);
    static PyObject *t_String_get__empty(t_String *self, void *data);
    static PyGetSetDef t_String__fields_[] = {
      DECLARE_GET_FIELD(t_String, blank),
      DECLARE_GET_FIELD(t_String, bytes),
      DECLARE_GET_FIELD(t_String, empty),
      { NULL, NULL, NULL, NULL, NULL }
    };

    static PyMethodDef t_String__methods_[] = {
      DECLARE_METHOD(t_String, cast_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_String, instance_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_String, charAt, METH_O),
      DECLARE_METHOD(t_String, codePointAt, METH_O),
      DECLARE_METHOD(t_String, codePointBefore, METH_O),
      DECLARE_METHOD(t_String, codePointCount, METH_VARARGS),
      DECLARE_METHOD(t_String, compareTo, METH_O),
      DECLARE_METHOD(t_String, compareToIgnoreCase, METH_O),
      DECLARE_METHOD(t_String, concat, METH_O),
      DECLARE_METHOD(t_String, contains, METH_O),
      DECLARE_METHOD(t_String, contentEquals, METH_VARARGS),
      DECLARE_METHOD(t_String, copyValueOf, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_String, endsWith, METH_O),
      DECLARE_METHOD(t_String, equals, METH_VARARGS),
      DECLARE_METHOD(t_String, equalsIgnoreCase, METH_O),
      DECLARE_METHOD(t_String, format, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_String, getBytes, METH_VARARGS),
      DECLARE_METHOD(t_String, getChars, METH_VARARGS),
      DECLARE_METHOD(t_String, hashCode, METH_VARARGS),
      DECLARE_METHOD(t_String, indexOf, METH_VARARGS),
      DECLARE_METHOD(t_String, intern, METH_NOARGS),
      DECLARE_METHOD(t_String, isBlank, METH_NOARGS),
      DECLARE_METHOD(t_String, isEmpty, METH_NOARGS),
      DECLARE_METHOD(t_String, join, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_String, lastIndexOf, METH_VARARGS),
      DECLARE_METHOD(t_String, length, METH_NOARGS),
      DECLARE_METHOD(t_String, lines, METH_NOARGS),
      DECLARE_METHOD(t_String, matches, METH_O),
      DECLARE_METHOD(t_String, offsetByCodePoints, METH_VARARGS),
      DECLARE_METHOD(t_String, regionMatches, METH_VARARGS),
      DECLARE_METHOD(t_String, repeat, METH_O),
      DECLARE_METHOD(t_String, replace, METH_VARARGS),
      DECLARE_METHOD(t_String, replaceAll, METH_VARARGS),
      DECLARE_METHOD(t_String, replaceFirst, METH_VARARGS),
      DECLARE_METHOD(t_String, split, METH_VARARGS),
      DECLARE_METHOD(t_String, startsWith, METH_VARARGS),
      DECLARE_METHOD(t_String, strip, METH_NOARGS),
      DECLARE_METHOD(t_String, stripLeading, METH_NOARGS),
      DECLARE_METHOD(t_String, stripTrailing, METH_NOARGS),
      DECLARE_METHOD(t_String, subSequence, METH_VARARGS),
      DECLARE_METHOD(t_String, substring, METH_VARARGS),
      DECLARE_METHOD(t_String, toCharArray, METH_NOARGS),
      DECLARE_METHOD(t_String, toLowerCase, METH_VARARGS),
      DECLARE_METHOD(t_String, toString, METH_VARARGS),
      DECLARE_METHOD(t_String, toUpperCase, METH_VARARGS),
      DECLARE_METHOD(t_String, trim, METH_NOARGS),
      DECLARE_METHOD(t_String, valueOf, METH_VARARGS | METH_CLASS),
      { NULL, NULL, 0, NULL }
    };

    static PyType_Slot PY_TYPE_SLOTS(String)[] = {
      { Py_tp_methods, t_String__methods_ },
      { Py_tp_init, (void *) t_String_init_ },
      { Py_tp_getset, t_String__fields_ },
      { 0, NULL }
    };

    static PyType_Def *PY_TYPE_BASES(String)[] = {
      &PY_TYPE_DEF(::java::lang::Object),
      NULL
    };

    DEFINE_TYPE(String, t_String, String);

    void t_String::install(PyObject *module)
    {
      installType(&PY_TYPE(String), &PY_TYPE_DEF(String), module, "String", 0);
    }

    void t_String::initialize(PyObject *module)
    {
      PyObject_SetAttrString((PyObject *) PY_TYPE(String), "class_", make_descriptor(String::initializeClass, 1));
      PyObject_SetAttrString((PyObject *) PY_TYPE(String), "wrapfn_", make_descriptor(unboxString));
      PyObject_SetAttrString((PyObject *) PY_TYPE(String), "boxfn_", make_descriptor(boxString));
      env->getClass(String::initializeClass);
      PyObject_SetAttrString((PyObject *) PY_TYPE(String), "CASE_INSENSITIVE_ORDER", make_descriptor(::java::util::t_Comparator::wrap_Object(*String::CASE_INSENSITIVE_ORDER)));
    }

    static PyObject *t_String_cast_(PyTypeObject *type, PyObject *arg)
    {
      if (!(arg = castCheck(arg, String::initializeClass, 1)))
        return NULL;
      return t_String::wrap_Object(String(((t_String *) arg)->object.this$));
    }
    static PyObject *t_String_instance_(PyTypeObject *type, PyObject *arg)
    {
      if (!castCheck(arg, String::initializeClass, 0))
        Py_RETURN_FALSE;
      Py_RETURN_TRUE;
    }

    static int t_String_init_(t_String *self, PyObject *args, PyObject *kwds)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 0:
        {
          String object((jobject) NULL);

          INT_CALL(object = String());
          self->object = object;
          break;
        }
       case 1:
        {
          ::java::lang::StringBuffer a0((jobject) NULL);
          String object((jobject) NULL);

          if (!parseArgs(args, "k", ::java::lang::StringBuffer::initializeClass, &a0))
          {
            INT_CALL(object = String(a0));
            self->object = object;
            break;
          }
        }
        {
          ::java::lang::StringBuilder a0((jobject) NULL);
          String object((jobject) NULL);

          if (!parseArgs(args, "k", ::java::lang::StringBuilder::initializeClass, &a0))
          {
            INT_CALL(object = String(a0));
            self->object = object;
            break;
          }
        }
        {
          JArray< jbyte > a0((jobject) NULL);
          String object((jobject) NULL);

          if (!parseArgs(args, "[B", &a0))
          {
            INT_CALL(object = String(a0));
            self->object = object;
            break;
          }
        }
        {
          JArray< jchar > a0((jobject) NULL);
          String object((jobject) NULL);

          if (!parseArgs(args, "[C", &a0))
          {
            INT_CALL(object = String(a0));
            self->object = object;
            break;
          }
        }
        goto err;
       case 2:
        {
          JArray< jbyte > a0((jobject) NULL);
          String a1((jobject) NULL);
          String object((jobject) NULL);

          if (!parseArgs(args, "[Bs", &a0, &a1))
          {
            INT_CALL(object = String(a0, a1));
            self->object = object;
            break;
          }
        }
        {
          JArray< jbyte > a0((jobject) NULL);
          jint a1;
          String object((jobject) NULL);

          if (!parseArgs(args, "[BI", &a0, &a1))
          {
            INT_CALL(object = String(a0, a1));
            self->object = object;
            break;
          }
        }
        goto err;
       case 3:
        {
          JArray< jbyte > a0((jobject) NULL);
          jint a1;
          jint a2;
          String object((jobject) NULL);

          if (!parseArgs(args, "[BII", &a0, &a1, &a2))
          {
            INT_CALL(object = String(a0, a1, a2));
            self->object = object;
            break;
          }
        }
        {
          JArray< jchar > a0((jobject) NULL);
          jint a1;
          jint a2;
          String object((jobject) NULL);

          if (!parseArgs(args, "[CII", &a0, &a1, &a2))
          {
            INT_CALL(object = String(a0, a1, a2));
            self->object = object;
            break;
          }
        }
        {
          JArray< jint > a0((jobject) NULL);
          jint a1;
          jint a2;
          String object((jobject) NULL);

          if (!parseArgs(args, "[III", &a0, &a1, &a2))
          {
            INT_CALL(object = String(a0, a1, a2));
            self->object = object;
            break;
          }
        }
        goto err;
       case 4:
        {
          JArray< jbyte > a0((jobject) NULL);
          jint a1;
          jint a2;
          String a3((jobject) NULL);
          String object((jobject) NULL);

          if (!parseArgs(args, "[BIIs", &a0, &a1, &a2, &a3))
          {
            INT_CALL(object = String(a0, a1, a2, a3));
            self->object = object;
            break;
          }
        }
        {
          JArray< jbyte > a0((jobject) NULL);
          jint a1;
          jint a2;
          jint a3;
          String object((jobject) NULL);

          if (!parseArgs(args, "[BIII", &a0, &a1, &a2, &a3))
          {
            INT_CALL(object = String(a0, a1, a2, a3));
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

    static PyObject *t_String_charAt(t_String *self, PyObject *arg)
    {
      jint a0;
      jchar result;

      if (!parseArg(arg, "I", &a0))
      {
        OBJ_CALL(result = self->object.charAt(a0));
        return c2p(result);
      }

      PyErr_SetArgsError((PyObject *) self, "charAt", arg);
      return NULL;
    }

    static PyObject *t_String_codePointAt(t_String *self, PyObject *arg)
    {
      jint a0;
      jint result;

      if (!parseArg(arg, "I", &a0))
      {
        OBJ_CALL(result = self->object.codePointAt(a0));
        return PyLong_FromLong((long) result);
      }

      PyErr_SetArgsError((PyObject *) self, "codePointAt", arg);
      return NULL;
    }

    static PyObject *t_String_codePointBefore(t_String *self, PyObject *arg)
    {
      jint a0;
      jint result;

      if (!parseArg(arg, "I", &a0))
      {
        OBJ_CALL(result = self->object.codePointBefore(a0));
        return PyLong_FromLong((long) result);
      }

      PyErr_SetArgsError((PyObject *) self, "codePointBefore", arg);
      return NULL;
    }

    static PyObject *t_String_codePointCount(t_String *self, PyObject *args)
    {
      jint a0;
      jint a1;
      jint result;

      if (!parseArgs(args, "II", &a0, &a1))
      {
        OBJ_CALL(result = self->object.codePointCount(a0, a1));
        return PyLong_FromLong((long) result);
      }

      PyErr_SetArgsError((PyObject *) self, "codePointCount", args);
      return NULL;
    }

    static PyObject *t_String_compareTo(t_String *self, PyObject *arg)
    {
      String a0((jobject) NULL);
      jint result;

      if (!parseArg(arg, "s", &a0))
      {
        OBJ_CALL(result = self->object.compareTo(a0));
        return PyLong_FromLong((long) result);
      }

      PyErr_SetArgsError((PyObject *) self, "compareTo", arg);
      return NULL;
    }

    static PyObject *t_String_compareToIgnoreCase(t_String *self, PyObject *arg)
    {
      String a0((jobject) NULL);
      jint result;

      if (!parseArg(arg, "s", &a0))
      {
        OBJ_CALL(result = self->object.compareToIgnoreCase(a0));
        return PyLong_FromLong((long) result);
      }

      PyErr_SetArgsError((PyObject *) self, "compareToIgnoreCase", arg);
      return NULL;
    }

    static PyObject *t_String_concat(t_String *self, PyObject *arg)
    {
      String a0((jobject) NULL);
      String result((jobject) NULL);

      if (!parseArg(arg, "s", &a0))
      {
        OBJ_CALL(result = self->object.concat(a0));
        return j2p(result);
      }

      PyErr_SetArgsError((PyObject *) self, "concat", arg);
      return NULL;
    }

    static PyObject *t_String_contains(t_String *self, PyObject *arg)
    {
      ::java::lang::CharSequence a0((jobject) NULL);
      jboolean result;

      if (!parseArg(arg, "O", ::java::lang::PY_TYPE(CharSequence), &a0))
      {
        OBJ_CALL(result = self->object.contains(a0));
        Py_RETURN_BOOL(result);
      }

      PyErr_SetArgsError((PyObject *) self, "contains", arg);
      return NULL;
    }

    static PyObject *t_String_contentEquals(t_String *self, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 1:
        {
          ::java::lang::StringBuffer a0((jobject) NULL);
          jboolean result;

          if (!parseArgs(args, "k", ::java::lang::StringBuffer::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.contentEquals(a0));
            Py_RETURN_BOOL(result);
          }
        }
        {
          ::java::lang::CharSequence a0((jobject) NULL);
          jboolean result;

          if (!parseArgs(args, "O", ::java::lang::PY_TYPE(CharSequence), &a0))
          {
            OBJ_CALL(result = self->object.contentEquals(a0));
            Py_RETURN_BOOL(result);
          }
        }
      }

      PyErr_SetArgsError((PyObject *) self, "contentEquals", args);
      return NULL;
    }

    static PyObject *t_String_copyValueOf(PyTypeObject *type, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 1:
        {
          JArray< jchar > a0((jobject) NULL);
          String result((jobject) NULL);

          if (!parseArgs(args, "[C", &a0))
          {
            OBJ_CALL(result = ::java::lang::String::copyValueOf(a0));
            return j2p(result);
          }
        }
        break;
       case 3:
        {
          JArray< jchar > a0((jobject) NULL);
          jint a1;
          jint a2;
          String result((jobject) NULL);

          if (!parseArgs(args, "[CII", &a0, &a1, &a2))
          {
            OBJ_CALL(result = ::java::lang::String::copyValueOf(a0, a1, a2));
            return j2p(result);
          }
        }
      }

      PyErr_SetArgsError(type, "copyValueOf", args);
      return NULL;
    }

    static PyObject *t_String_endsWith(t_String *self, PyObject *arg)
    {
      String a0((jobject) NULL);
      jboolean result;

      if (!parseArg(arg, "s", &a0))
      {
        OBJ_CALL(result = self->object.endsWith(a0));
        Py_RETURN_BOOL(result);
      }

      PyErr_SetArgsError((PyObject *) self, "endsWith", arg);
      return NULL;
    }

    static PyObject *t_String_equals(t_String *self, PyObject *args)
    {
      ::java::lang::Object a0((jobject) NULL);
      jboolean result;

      if (!parseArgs(args, "o", &a0))
      {
        OBJ_CALL(result = self->object.equals(a0));
        Py_RETURN_BOOL(result);
      }

      return callSuper(PY_TYPE(String), (PyObject *) self, "equals", args, 2);
    }

    static PyObject *t_String_equalsIgnoreCase(t_String *self, PyObject *arg)
    {
      String a0((jobject) NULL);
      jboolean result;

      if (!parseArg(arg, "s", &a0))
      {
        OBJ_CALL(result = self->object.equalsIgnoreCase(a0));
        Py_RETURN_BOOL(result);
      }

      PyErr_SetArgsError((PyObject *) self, "equalsIgnoreCase", arg);
      return NULL;
    }

    static PyObject *t_String_format(PyTypeObject *type, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 2:
        {
          String a0((jobject) NULL);
          JArray< ::java::lang::Object > a1((jobject) NULL);
          String result((jobject) NULL);

          if (!parseArgs(args, "s[o", &a0, &a1))
          {
            OBJ_CALL(result = ::java::lang::String::format(a0, a1));
            return j2p(result);
          }
        }
        break;
       case 3:
        {
          ::java::util::Locale a0((jobject) NULL);
          String a1((jobject) NULL);
          JArray< ::java::lang::Object > a2((jobject) NULL);
          String result((jobject) NULL);

          if (!parseArgs(args, "ks[o", ::java::util::Locale::initializeClass, &a0, &a1, &a2))
          {
            OBJ_CALL(result = ::java::lang::String::format(a0, a1, a2));
            return j2p(result);
          }
        }
      }

      PyErr_SetArgsError(type, "format", args);
      return NULL;
    }

    static PyObject *t_String_getBytes(t_String *self, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 0:
        {
          JArray< jbyte > result((jobject) NULL);
          OBJ_CALL(result = self->object.getBytes());
          return result.wrap();
        }
        break;
       case 1:
        {
          String a0((jobject) NULL);
          JArray< jbyte > result((jobject) NULL);

          if (!parseArgs(args, "s", &a0))
          {
            OBJ_CALL(result = self->object.getBytes(a0));
            return result.wrap();
          }
        }
        break;
       case 4:
        {
          jint a0;
          jint a1;
          JArray< jbyte > a2((jobject) NULL);
          jint a3;

          if (!parseArgs(args, "II[BI", &a0, &a1, &a2, &a3))
          {
            OBJ_CALL(self->object.getBytes(a0, a1, a2, a3));
            Py_RETURN_NONE;
          }
        }
      }

      PyErr_SetArgsError((PyObject *) self, "getBytes", args);
      return NULL;
    }

    static PyObject *t_String_getChars(t_String *self, PyObject *args)
    {
      jint a0;
      jint a1;
      JArray< jchar > a2((jobject) NULL);
      jint a3;

      if (!parseArgs(args, "II[CI", &a0, &a1, &a2, &a3))
      {
        OBJ_CALL(self->object.getChars(a0, a1, a2, a3));
        Py_RETURN_NONE;
      }

      PyErr_SetArgsError((PyObject *) self, "getChars", args);
      return NULL;
    }

    static PyObject *t_String_hashCode(t_String *self, PyObject *args)
    {
      jint result;

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.hashCode());
        return PyLong_FromLong((long) result);
      }

      return callSuper(PY_TYPE(String), (PyObject *) self, "hashCode", args, 2);
    }

    static PyObject *t_String_indexOf(t_String *self, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 1:
        {
          String a0((jobject) NULL);
          jint result;

          if (!parseArgs(args, "s", &a0))
          {
            OBJ_CALL(result = self->object.indexOf(a0));
            return PyLong_FromLong((long) result);
          }
        }
        {
          jint a0;
          jint result;

          if (!parseArgs(args, "I", &a0))
          {
            OBJ_CALL(result = self->object.indexOf(a0));
            return PyLong_FromLong((long) result);
          }
        }
        break;
       case 2:
        {
          String a0((jobject) NULL);
          jint a1;
          jint result;

          if (!parseArgs(args, "sI", &a0, &a1))
          {
            OBJ_CALL(result = self->object.indexOf(a0, a1));
            return PyLong_FromLong((long) result);
          }
        }
        {
          jint a0;
          jint a1;
          jint result;

          if (!parseArgs(args, "II", &a0, &a1))
          {
            OBJ_CALL(result = self->object.indexOf(a0, a1));
            return PyLong_FromLong((long) result);
          }
        }
      }

      PyErr_SetArgsError((PyObject *) self, "indexOf", args);
      return NULL;
    }

    static PyObject *t_String_intern(t_String *self)
    {
      String result((jobject) NULL);
      OBJ_CALL(result = self->object.intern());
      return j2p(result);
    }

    static PyObject *t_String_isBlank(t_String *self)
    {
      jboolean result;
      OBJ_CALL(result = self->object.isBlank());
      Py_RETURN_BOOL(result);
    }

    static PyObject *t_String_isEmpty(t_String *self)
    {
      jboolean result;
      OBJ_CALL(result = self->object.isEmpty());
      Py_RETURN_BOOL(result);
    }

    static PyObject *t_String_join(PyTypeObject *type, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 2:
        {
          ::java::lang::CharSequence a0((jobject) NULL);
          JArray< ::java::lang::CharSequence > a1((jobject) NULL);
          String result((jobject) NULL);

          if (!parseArgs(args, "O[O", ::java::lang::PY_TYPE(CharSequence), ::java::lang::PY_TYPE(CharSequence), &a0, &a1))
          {
            OBJ_CALL(result = ::java::lang::String::join(a0, a1));
            return j2p(result);
          }
        }
        {
          ::java::lang::CharSequence a0((jobject) NULL);
          ::java::lang::Iterable a1((jobject) NULL);
          PyTypeObject **p1;
          String result((jobject) NULL);

          if (!parseArgs(args, "OK", ::java::lang::PY_TYPE(CharSequence), ::java::lang::Iterable::initializeClass, &a0, &a1, &p1, ::java::lang::t_Iterable::parameters_))
          {
            OBJ_CALL(result = ::java::lang::String::join(a0, a1));
            return j2p(result);
          }
        }
      }

      PyErr_SetArgsError(type, "join", args);
      return NULL;
    }

    static PyObject *t_String_lastIndexOf(t_String *self, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 1:
        {
          String a0((jobject) NULL);
          jint result;

          if (!parseArgs(args, "s", &a0))
          {
            OBJ_CALL(result = self->object.lastIndexOf(a0));
            return PyLong_FromLong((long) result);
          }
        }
        {
          jint a0;
          jint result;

          if (!parseArgs(args, "I", &a0))
          {
            OBJ_CALL(result = self->object.lastIndexOf(a0));
            return PyLong_FromLong((long) result);
          }
        }
        break;
       case 2:
        {
          String a0((jobject) NULL);
          jint a1;
          jint result;

          if (!parseArgs(args, "sI", &a0, &a1))
          {
            OBJ_CALL(result = self->object.lastIndexOf(a0, a1));
            return PyLong_FromLong((long) result);
          }
        }
        {
          jint a0;
          jint a1;
          jint result;

          if (!parseArgs(args, "II", &a0, &a1))
          {
            OBJ_CALL(result = self->object.lastIndexOf(a0, a1));
            return PyLong_FromLong((long) result);
          }
        }
      }

      PyErr_SetArgsError((PyObject *) self, "lastIndexOf", args);
      return NULL;
    }

    static PyObject *t_String_length(t_String *self)
    {
      jint result;
      OBJ_CALL(result = self->object.length());
      return PyLong_FromLong((long) result);
    }

    static PyObject *t_String_lines(t_String *self)
    {
      ::java::util::stream::Stream result((jobject) NULL);
      OBJ_CALL(result = self->object.lines());
      return ::java::util::stream::t_Stream::wrap_Object(result, ::java::lang::PY_TYPE(String));
    }

    static PyObject *t_String_matches(t_String *self, PyObject *arg)
    {
      String a0((jobject) NULL);
      jboolean result;

      if (!parseArg(arg, "s", &a0))
      {
        OBJ_CALL(result = self->object.matches(a0));
        Py_RETURN_BOOL(result);
      }

      PyErr_SetArgsError((PyObject *) self, "matches", arg);
      return NULL;
    }

    static PyObject *t_String_offsetByCodePoints(t_String *self, PyObject *args)
    {
      jint a0;
      jint a1;
      jint result;

      if (!parseArgs(args, "II", &a0, &a1))
      {
        OBJ_CALL(result = self->object.offsetByCodePoints(a0, a1));
        return PyLong_FromLong((long) result);
      }

      PyErr_SetArgsError((PyObject *) self, "offsetByCodePoints", args);
      return NULL;
    }

    static PyObject *t_String_regionMatches(t_String *self, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 4:
        {
          jint a0;
          String a1((jobject) NULL);
          jint a2;
          jint a3;
          jboolean result;

          if (!parseArgs(args, "IsII", &a0, &a1, &a2, &a3))
          {
            OBJ_CALL(result = self->object.regionMatches(a0, a1, a2, a3));
            Py_RETURN_BOOL(result);
          }
        }
        break;
       case 5:
        {
          jboolean a0;
          jint a1;
          String a2((jobject) NULL);
          jint a3;
          jint a4;
          jboolean result;

          if (!parseArgs(args, "ZIsII", &a0, &a1, &a2, &a3, &a4))
          {
            OBJ_CALL(result = self->object.regionMatches(a0, a1, a2, a3, a4));
            Py_RETURN_BOOL(result);
          }
        }
      }

      PyErr_SetArgsError((PyObject *) self, "regionMatches", args);
      return NULL;
    }

    static PyObject *t_String_repeat(t_String *self, PyObject *arg)
    {
      jint a0;
      String result((jobject) NULL);

      if (!parseArg(arg, "I", &a0))
      {
        OBJ_CALL(result = self->object.repeat(a0));
        return j2p(result);
      }

      PyErr_SetArgsError((PyObject *) self, "repeat", arg);
      return NULL;
    }

    static PyObject *t_String_replace(t_String *self, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 2:
        {
          jchar a0;
          jchar a1;
          String result((jobject) NULL);

          if (!parseArgs(args, "CC", &a0, &a1))
          {
            OBJ_CALL(result = self->object.replace(a0, a1));
            return j2p(result);
          }
        }
        {
          ::java::lang::CharSequence a0((jobject) NULL);
          ::java::lang::CharSequence a1((jobject) NULL);
          String result((jobject) NULL);

          if (!parseArgs(args, "OO", ::java::lang::PY_TYPE(CharSequence), ::java::lang::PY_TYPE(CharSequence), &a0, &a1))
          {
            OBJ_CALL(result = self->object.replace(a0, a1));
            return j2p(result);
          }
        }
      }

      PyErr_SetArgsError((PyObject *) self, "replace", args);
      return NULL;
    }

    static PyObject *t_String_replaceAll(t_String *self, PyObject *args)
    {
      String a0((jobject) NULL);
      String a1((jobject) NULL);
      String result((jobject) NULL);

      if (!parseArgs(args, "ss", &a0, &a1))
      {
        OBJ_CALL(result = self->object.replaceAll(a0, a1));
        return j2p(result);
      }

      PyErr_SetArgsError((PyObject *) self, "replaceAll", args);
      return NULL;
    }

    static PyObject *t_String_replaceFirst(t_String *self, PyObject *args)
    {
      String a0((jobject) NULL);
      String a1((jobject) NULL);
      String result((jobject) NULL);

      if (!parseArgs(args, "ss", &a0, &a1))
      {
        OBJ_CALL(result = self->object.replaceFirst(a0, a1));
        return j2p(result);
      }

      PyErr_SetArgsError((PyObject *) self, "replaceFirst", args);
      return NULL;
    }

    static PyObject *t_String_split(t_String *self, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 1:
        {
          String a0((jobject) NULL);
          JArray< String > result((jobject) NULL);

          if (!parseArgs(args, "s", &a0))
          {
            OBJ_CALL(result = self->object.split(a0));
            return JArray<jstring>(result.this$).wrap();
          }
        }
        break;
       case 2:
        {
          String a0((jobject) NULL);
          jint a1;
          JArray< String > result((jobject) NULL);

          if (!parseArgs(args, "sI", &a0, &a1))
          {
            OBJ_CALL(result = self->object.split(a0, a1));
            return JArray<jstring>(result.this$).wrap();
          }
        }
      }

      PyErr_SetArgsError((PyObject *) self, "split", args);
      return NULL;
    }

    static PyObject *t_String_startsWith(t_String *self, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 1:
        {
          String a0((jobject) NULL);
          jboolean result;

          if (!parseArgs(args, "s", &a0))
          {
            OBJ_CALL(result = self->object.startsWith(a0));
            Py_RETURN_BOOL(result);
          }
        }
        break;
       case 2:
        {
          String a0((jobject) NULL);
          jint a1;
          jboolean result;

          if (!parseArgs(args, "sI", &a0, &a1))
          {
            OBJ_CALL(result = self->object.startsWith(a0, a1));
            Py_RETURN_BOOL(result);
          }
        }
      }

      PyErr_SetArgsError((PyObject *) self, "startsWith", args);
      return NULL;
    }

    static PyObject *t_String_strip(t_String *self)
    {
      String result((jobject) NULL);
      OBJ_CALL(result = self->object.strip());
      return j2p(result);
    }

    static PyObject *t_String_stripLeading(t_String *self)
    {
      String result((jobject) NULL);
      OBJ_CALL(result = self->object.stripLeading());
      return j2p(result);
    }

    static PyObject *t_String_stripTrailing(t_String *self)
    {
      String result((jobject) NULL);
      OBJ_CALL(result = self->object.stripTrailing());
      return j2p(result);
    }

    static PyObject *t_String_subSequence(t_String *self, PyObject *args)
    {
      jint a0;
      jint a1;
      ::java::lang::CharSequence result((jobject) NULL);

      if (!parseArgs(args, "II", &a0, &a1))
      {
        OBJ_CALL(result = self->object.subSequence(a0, a1));
        return ::java::lang::t_CharSequence::wrap_Object(result);
      }

      PyErr_SetArgsError((PyObject *) self, "subSequence", args);
      return NULL;
    }

    static PyObject *t_String_substring(t_String *self, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 1:
        {
          jint a0;
          String result((jobject) NULL);

          if (!parseArgs(args, "I", &a0))
          {
            OBJ_CALL(result = self->object.substring(a0));
            return j2p(result);
          }
        }
        break;
       case 2:
        {
          jint a0;
          jint a1;
          String result((jobject) NULL);

          if (!parseArgs(args, "II", &a0, &a1))
          {
            OBJ_CALL(result = self->object.substring(a0, a1));
            return j2p(result);
          }
        }
      }

      PyErr_SetArgsError((PyObject *) self, "substring", args);
      return NULL;
    }

    static PyObject *t_String_toCharArray(t_String *self)
    {
      JArray< jchar > result((jobject) NULL);
      OBJ_CALL(result = self->object.toCharArray());
      return result.wrap();
    }

    static PyObject *t_String_toLowerCase(t_String *self, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 0:
        {
          String result((jobject) NULL);
          OBJ_CALL(result = self->object.toLowerCase());
          return j2p(result);
        }
        break;
       case 1:
        {
          ::java::util::Locale a0((jobject) NULL);
          String result((jobject) NULL);

          if (!parseArgs(args, "k", ::java::util::Locale::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.toLowerCase(a0));
            return j2p(result);
          }
        }
      }

      PyErr_SetArgsError((PyObject *) self, "toLowerCase", args);
      return NULL;
    }

    static PyObject *t_String_toString(t_String *self, PyObject *args)
    {
      String result((jobject) NULL);

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.toString());
        return j2p(result);
      }

      return callSuper(PY_TYPE(String), (PyObject *) self, "toString", args, 2);
    }

    static PyObject *t_String_toUpperCase(t_String *self, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 0:
        {
          String result((jobject) NULL);
          OBJ_CALL(result = self->object.toUpperCase());
          return j2p(result);
        }
        break;
       case 1:
        {
          ::java::util::Locale a0((jobject) NULL);
          String result((jobject) NULL);

          if (!parseArgs(args, "k", ::java::util::Locale::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.toUpperCase(a0));
            return j2p(result);
          }
        }
      }

      PyErr_SetArgsError((PyObject *) self, "toUpperCase", args);
      return NULL;
    }

    static PyObject *t_String_trim(t_String *self)
    {
      String result((jobject) NULL);
      OBJ_CALL(result = self->object.trim());
      return j2p(result);
    }

    static PyObject *t_String_valueOf(PyTypeObject *type, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 1:
        {
          JArray< jchar > a0((jobject) NULL);
          String result((jobject) NULL);

          if (!parseArgs(args, "[C", &a0))
          {
            OBJ_CALL(result = ::java::lang::String::valueOf(a0));
            return j2p(result);
          }
        }
        {
          jboolean a0;
          String result((jobject) NULL);

          if (!parseArgs(args, "Z", &a0))
          {
            OBJ_CALL(result = ::java::lang::String::valueOf(a0));
            return j2p(result);
          }
        }
        {
          jchar a0;
          String result((jobject) NULL);

          if (!parseArgs(args, "C", &a0))
          {
            OBJ_CALL(result = ::java::lang::String::valueOf(a0));
            return j2p(result);
          }
        }
        {
          jdouble a0;
          String result((jobject) NULL);

          if (!parseArgs(args, "D", &a0))
          {
            OBJ_CALL(result = ::java::lang::String::valueOf(a0));
            return j2p(result);
          }
        }
        {
          jfloat a0;
          String result((jobject) NULL);

          if (!parseArgs(args, "F", &a0))
          {
            OBJ_CALL(result = ::java::lang::String::valueOf(a0));
            return j2p(result);
          }
        }
        {
          jint a0;
          String result((jobject) NULL);

          if (!parseArgs(args, "I", &a0))
          {
            OBJ_CALL(result = ::java::lang::String::valueOf(a0));
            return j2p(result);
          }
        }
        {
          ::java::lang::Object a0((jobject) NULL);
          String result((jobject) NULL);

          if (!parseArgs(args, "o", &a0))
          {
            OBJ_CALL(result = ::java::lang::String::valueOf(a0));
            return j2p(result);
          }
        }
        {
          jlong a0;
          String result((jobject) NULL);

          if (!parseArgs(args, "J", &a0))
          {
            OBJ_CALL(result = ::java::lang::String::valueOf(a0));
            return j2p(result);
          }
        }
        break;
       case 3:
        {
          JArray< jchar > a0((jobject) NULL);
          jint a1;
          jint a2;
          String result((jobject) NULL);

          if (!parseArgs(args, "[CII", &a0, &a1, &a2))
          {
            OBJ_CALL(result = ::java::lang::String::valueOf(a0, a1, a2));
            return j2p(result);
          }
        }
      }

      PyErr_SetArgsError(type, "valueOf", args);
      return NULL;
    }

    static PyObject *t_String_get__blank(t_String *self, void *data)
    {
      jboolean value;
      OBJ_CALL(value = self->object.isBlank());
      Py_RETURN_BOOL(value);
    }

    static PyObject *t_String_get__bytes(t_String *self, void *data)
    {
      JArray< jbyte > value((jobject) NULL);
      OBJ_CALL(value = self->object.getBytes());
      return value.wrap();
    }

    static PyObject *t_String_get__empty(t_String *self, void *data)
    {
      jboolean value;
      OBJ_CALL(value = self->object.isEmpty());
      Py_RETURN_BOOL(value);
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/events/LongitudeExtremumDetector.h"
#include "org/orekit/bodies/BodyShape.h"
#include "org/orekit/bodies/OneAxisEllipsoid.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/events/LongitudeExtremumDetector.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace events {

        ::java::lang::Class *LongitudeExtremumDetector::class$ = NULL;
        jmethodID *LongitudeExtremumDetector::mids$ = NULL;
        bool LongitudeExtremumDetector::live$ = false;

        jclass LongitudeExtremumDetector::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/events/LongitudeExtremumDetector");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_b708ea6c2876a9ef] = env->getMethodID(cls, "<init>", "(Lorg/orekit/bodies/OneAxisEllipsoid;)V");
            mids$[mid_init$_953aae78749ecde5] = env->getMethodID(cls, "<init>", "(DDLorg/orekit/bodies/OneAxisEllipsoid;)V");
            mids$[mid_g_b443ba1cc794b916] = env->getMethodID(cls, "g", "(Lorg/orekit/propagation/SpacecraftState;)D");
            mids$[mid_getBody_6f2d25f6f71d01ca] = env->getMethodID(cls, "getBody", "()Lorg/orekit/bodies/BodyShape;");
            mids$[mid_create_6bfb2d76764e4fd0] = env->getMethodID(cls, "create", "(Lorg/orekit/propagation/events/AdaptableInterval;DILorg/orekit/propagation/events/handlers/EventHandler;)Lorg/orekit/propagation/events/LongitudeExtremumDetector;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        LongitudeExtremumDetector::LongitudeExtremumDetector(const ::org::orekit::bodies::OneAxisEllipsoid & a0) : ::org::orekit::propagation::events::AbstractDetector(env->newObject(initializeClass, &mids$, mid_init$_b708ea6c2876a9ef, a0.this$)) {}

        LongitudeExtremumDetector::LongitudeExtremumDetector(jdouble a0, jdouble a1, const ::org::orekit::bodies::OneAxisEllipsoid & a2) : ::org::orekit::propagation::events::AbstractDetector(env->newObject(initializeClass, &mids$, mid_init$_953aae78749ecde5, a0, a1, a2.this$)) {}

        jdouble LongitudeExtremumDetector::g(const ::org::orekit::propagation::SpacecraftState & a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_g_b443ba1cc794b916], a0.this$);
        }

        ::org::orekit::bodies::BodyShape LongitudeExtremumDetector::getBody() const
        {
          return ::org::orekit::bodies::BodyShape(env->callObjectMethod(this$, mids$[mid_getBody_6f2d25f6f71d01ca]));
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
        static PyObject *t_LongitudeExtremumDetector_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_LongitudeExtremumDetector_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_LongitudeExtremumDetector_of_(t_LongitudeExtremumDetector *self, PyObject *args);
        static int t_LongitudeExtremumDetector_init_(t_LongitudeExtremumDetector *self, PyObject *args, PyObject *kwds);
        static PyObject *t_LongitudeExtremumDetector_g(t_LongitudeExtremumDetector *self, PyObject *args);
        static PyObject *t_LongitudeExtremumDetector_getBody(t_LongitudeExtremumDetector *self);
        static PyObject *t_LongitudeExtremumDetector_get__body(t_LongitudeExtremumDetector *self, void *data);
        static PyObject *t_LongitudeExtremumDetector_get__parameters_(t_LongitudeExtremumDetector *self, void *data);
        static PyGetSetDef t_LongitudeExtremumDetector__fields_[] = {
          DECLARE_GET_FIELD(t_LongitudeExtremumDetector, body),
          DECLARE_GET_FIELD(t_LongitudeExtremumDetector, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_LongitudeExtremumDetector__methods_[] = {
          DECLARE_METHOD(t_LongitudeExtremumDetector, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_LongitudeExtremumDetector, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_LongitudeExtremumDetector, of_, METH_VARARGS),
          DECLARE_METHOD(t_LongitudeExtremumDetector, g, METH_VARARGS),
          DECLARE_METHOD(t_LongitudeExtremumDetector, getBody, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(LongitudeExtremumDetector)[] = {
          { Py_tp_methods, t_LongitudeExtremumDetector__methods_ },
          { Py_tp_init, (void *) t_LongitudeExtremumDetector_init_ },
          { Py_tp_getset, t_LongitudeExtremumDetector__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(LongitudeExtremumDetector)[] = {
          &PY_TYPE_DEF(::org::orekit::propagation::events::AbstractDetector),
          NULL
        };

        DEFINE_TYPE(LongitudeExtremumDetector, t_LongitudeExtremumDetector, LongitudeExtremumDetector);
        PyObject *t_LongitudeExtremumDetector::wrap_Object(const LongitudeExtremumDetector& object, PyTypeObject *p0)
        {
          PyObject *obj = t_LongitudeExtremumDetector::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_LongitudeExtremumDetector *self = (t_LongitudeExtremumDetector *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_LongitudeExtremumDetector::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_LongitudeExtremumDetector::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_LongitudeExtremumDetector *self = (t_LongitudeExtremumDetector *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_LongitudeExtremumDetector::install(PyObject *module)
        {
          installType(&PY_TYPE(LongitudeExtremumDetector), &PY_TYPE_DEF(LongitudeExtremumDetector), module, "LongitudeExtremumDetector", 0);
        }

        void t_LongitudeExtremumDetector::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(LongitudeExtremumDetector), "class_", make_descriptor(LongitudeExtremumDetector::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(LongitudeExtremumDetector), "wrapfn_", make_descriptor(t_LongitudeExtremumDetector::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(LongitudeExtremumDetector), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_LongitudeExtremumDetector_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, LongitudeExtremumDetector::initializeClass, 1)))
            return NULL;
          return t_LongitudeExtremumDetector::wrap_Object(LongitudeExtremumDetector(((t_LongitudeExtremumDetector *) arg)->object.this$));
        }
        static PyObject *t_LongitudeExtremumDetector_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, LongitudeExtremumDetector::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_LongitudeExtremumDetector_of_(t_LongitudeExtremumDetector *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_LongitudeExtremumDetector_init_(t_LongitudeExtremumDetector *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              ::org::orekit::bodies::OneAxisEllipsoid a0((jobject) NULL);
              LongitudeExtremumDetector object((jobject) NULL);

              if (!parseArgs(args, "k", ::org::orekit::bodies::OneAxisEllipsoid::initializeClass, &a0))
              {
                INT_CALL(object = LongitudeExtremumDetector(a0));
                self->object = object;
                self->parameters[0] = ::org::orekit::propagation::events::PY_TYPE(LongitudeExtremumDetector);
                break;
              }
            }
            goto err;
           case 3:
            {
              jdouble a0;
              jdouble a1;
              ::org::orekit::bodies::OneAxisEllipsoid a2((jobject) NULL);
              LongitudeExtremumDetector object((jobject) NULL);

              if (!parseArgs(args, "DDk", ::org::orekit::bodies::OneAxisEllipsoid::initializeClass, &a0, &a1, &a2))
              {
                INT_CALL(object = LongitudeExtremumDetector(a0, a1, a2));
                self->object = object;
                self->parameters[0] = ::org::orekit::propagation::events::PY_TYPE(LongitudeExtremumDetector);
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

        static PyObject *t_LongitudeExtremumDetector_g(t_LongitudeExtremumDetector *self, PyObject *args)
        {
          ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
          jdouble result;

          if (!parseArgs(args, "k", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.g(a0));
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(LongitudeExtremumDetector), (PyObject *) self, "g", args, 2);
        }

        static PyObject *t_LongitudeExtremumDetector_getBody(t_LongitudeExtremumDetector *self)
        {
          ::org::orekit::bodies::BodyShape result((jobject) NULL);
          OBJ_CALL(result = self->object.getBody());
          return ::org::orekit::bodies::t_BodyShape::wrap_Object(result);
        }
        static PyObject *t_LongitudeExtremumDetector_get__parameters_(t_LongitudeExtremumDetector *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_LongitudeExtremumDetector_get__body(t_LongitudeExtremumDetector *self, void *data)
        {
          ::org::orekit::bodies::BodyShape value((jobject) NULL);
          OBJ_CALL(value = self->object.getBody());
          return ::org::orekit::bodies::t_BodyShape::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/forces/maneuvers/trigger/PythonAbstractManeuverTriggers.h"
#include "java/util/stream/Stream.h"
#include "org/orekit/propagation/events/FieldEventDetector.h"
#include "java/util/List.h"
#include "java/lang/Throwable.h"
#include "org/hipparchus/Field.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "org/orekit/propagation/events/EventDetector.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace forces {
      namespace maneuvers {
        namespace trigger {

          ::java::lang::Class *PythonAbstractManeuverTriggers::class$ = NULL;
          jmethodID *PythonAbstractManeuverTriggers::mids$ = NULL;
          bool PythonAbstractManeuverTriggers::live$ = false;

          jclass PythonAbstractManeuverTriggers::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/forces/maneuvers/trigger/PythonAbstractManeuverTriggers");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_ff7cb6c242604316] = env->getMethodID(cls, "<init>", "()V");
              mids$[mid_finalize_ff7cb6c242604316] = env->getMethodID(cls, "finalize", "()V");
              mids$[mid_getEventDetectors_11e4ca8182c1933d] = env->getMethodID(cls, "getEventDetectors", "()Ljava/util/stream/Stream;");
              mids$[mid_getFieldEventDetectors_d3db121d9deb0312] = env->getMethodID(cls, "getFieldEventDetectors", "(Lorg/hipparchus/Field;)Ljava/util/stream/Stream;");
              mids$[mid_getParametersDrivers_d751c1a57012b438] = env->getMethodID(cls, "getParametersDrivers", "()Ljava/util/List;");
              mids$[mid_isFiringOnInitialState_145801f71fbbc869] = env->getMethodID(cls, "isFiringOnInitialState", "(Lorg/orekit/propagation/SpacecraftState;Z)Z");
              mids$[mid_pythonDecRef_ff7cb6c242604316] = env->getMethodID(cls, "pythonDecRef", "()V");
              mids$[mid_pythonExtension_42c72b98e3c2e08a] = env->getMethodID(cls, "pythonExtension", "()J");
              mids$[mid_pythonExtension_f5bbab7e97879358] = env->getMethodID(cls, "pythonExtension", "(J)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          PythonAbstractManeuverTriggers::PythonAbstractManeuverTriggers() : ::org::orekit::forces::maneuvers::trigger::AbstractManeuverTriggers(env->newObject(initializeClass, &mids$, mid_init$_ff7cb6c242604316)) {}

          void PythonAbstractManeuverTriggers::finalize() const
          {
            env->callVoidMethod(this$, mids$[mid_finalize_ff7cb6c242604316]);
          }

          jlong PythonAbstractManeuverTriggers::pythonExtension() const
          {
            return env->callLongMethod(this$, mids$[mid_pythonExtension_42c72b98e3c2e08a]);
          }

          void PythonAbstractManeuverTriggers::pythonExtension(jlong a0) const
          {
            env->callVoidMethod(this$, mids$[mid_pythonExtension_f5bbab7e97879358], a0);
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
        namespace trigger {
          static PyObject *t_PythonAbstractManeuverTriggers_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_PythonAbstractManeuverTriggers_instance_(PyTypeObject *type, PyObject *arg);
          static int t_PythonAbstractManeuverTriggers_init_(t_PythonAbstractManeuverTriggers *self, PyObject *args, PyObject *kwds);
          static PyObject *t_PythonAbstractManeuverTriggers_finalize(t_PythonAbstractManeuverTriggers *self);
          static PyObject *t_PythonAbstractManeuverTriggers_pythonExtension(t_PythonAbstractManeuverTriggers *self, PyObject *args);
          static jobject JNICALL t_PythonAbstractManeuverTriggers_getEventDetectors0(JNIEnv *jenv, jobject jobj);
          static jobject JNICALL t_PythonAbstractManeuverTriggers_getFieldEventDetectors1(JNIEnv *jenv, jobject jobj, jobject a0);
          static jobject JNICALL t_PythonAbstractManeuverTriggers_getParametersDrivers2(JNIEnv *jenv, jobject jobj);
          static jboolean JNICALL t_PythonAbstractManeuverTriggers_isFiringOnInitialState3(JNIEnv *jenv, jobject jobj, jobject a0, jboolean a1);
          static void JNICALL t_PythonAbstractManeuverTriggers_pythonDecRef4(JNIEnv *jenv, jobject jobj);
          static PyObject *t_PythonAbstractManeuverTriggers_get__self(t_PythonAbstractManeuverTriggers *self, void *data);
          static PyGetSetDef t_PythonAbstractManeuverTriggers__fields_[] = {
            DECLARE_GET_FIELD(t_PythonAbstractManeuverTriggers, self),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_PythonAbstractManeuverTriggers__methods_[] = {
            DECLARE_METHOD(t_PythonAbstractManeuverTriggers, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PythonAbstractManeuverTriggers, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PythonAbstractManeuverTriggers, finalize, METH_NOARGS),
            DECLARE_METHOD(t_PythonAbstractManeuverTriggers, pythonExtension, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(PythonAbstractManeuverTriggers)[] = {
            { Py_tp_methods, t_PythonAbstractManeuverTriggers__methods_ },
            { Py_tp_init, (void *) t_PythonAbstractManeuverTriggers_init_ },
            { Py_tp_getset, t_PythonAbstractManeuverTriggers__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(PythonAbstractManeuverTriggers)[] = {
            &PY_TYPE_DEF(::org::orekit::forces::maneuvers::trigger::AbstractManeuverTriggers),
            NULL
          };

          DEFINE_TYPE(PythonAbstractManeuverTriggers, t_PythonAbstractManeuverTriggers, PythonAbstractManeuverTriggers);

          void t_PythonAbstractManeuverTriggers::install(PyObject *module)
          {
            installType(&PY_TYPE(PythonAbstractManeuverTriggers), &PY_TYPE_DEF(PythonAbstractManeuverTriggers), module, "PythonAbstractManeuverTriggers", 1);
          }

          void t_PythonAbstractManeuverTriggers::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAbstractManeuverTriggers), "class_", make_descriptor(PythonAbstractManeuverTriggers::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAbstractManeuverTriggers), "wrapfn_", make_descriptor(t_PythonAbstractManeuverTriggers::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAbstractManeuverTriggers), "boxfn_", make_descriptor(boxObject));
            jclass cls = env->getClass(PythonAbstractManeuverTriggers::initializeClass);
            JNINativeMethod methods[] = {
              { "getEventDetectors", "()Ljava/util/stream/Stream;", (void *) t_PythonAbstractManeuverTriggers_getEventDetectors0 },
              { "getFieldEventDetectors", "(Lorg/hipparchus/Field;)Ljava/util/stream/Stream;", (void *) t_PythonAbstractManeuverTriggers_getFieldEventDetectors1 },
              { "getParametersDrivers", "()Ljava/util/List;", (void *) t_PythonAbstractManeuverTriggers_getParametersDrivers2 },
              { "isFiringOnInitialState", "(Lorg/orekit/propagation/SpacecraftState;Z)Z", (void *) t_PythonAbstractManeuverTriggers_isFiringOnInitialState3 },
              { "pythonDecRef", "()V", (void *) t_PythonAbstractManeuverTriggers_pythonDecRef4 },
            };
            env->registerNatives(cls, methods, 5);
          }

          static PyObject *t_PythonAbstractManeuverTriggers_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, PythonAbstractManeuverTriggers::initializeClass, 1)))
              return NULL;
            return t_PythonAbstractManeuverTriggers::wrap_Object(PythonAbstractManeuverTriggers(((t_PythonAbstractManeuverTriggers *) arg)->object.this$));
          }
          static PyObject *t_PythonAbstractManeuverTriggers_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, PythonAbstractManeuverTriggers::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_PythonAbstractManeuverTriggers_init_(t_PythonAbstractManeuverTriggers *self, PyObject *args, PyObject *kwds)
          {
            PythonAbstractManeuverTriggers object((jobject) NULL);

            INT_CALL(object = PythonAbstractManeuverTriggers());
            self->object = object;

            Py_INCREF((PyObject *) self);
            self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

            return 0;
          }

          static PyObject *t_PythonAbstractManeuverTriggers_finalize(t_PythonAbstractManeuverTriggers *self)
          {
            OBJ_CALL(self->object.finalize());
            Py_RETURN_NONE;
          }

          static PyObject *t_PythonAbstractManeuverTriggers_pythonExtension(t_PythonAbstractManeuverTriggers *self, PyObject *args)
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

          static jobject JNICALL t_PythonAbstractManeuverTriggers_getEventDetectors0(JNIEnv *jenv, jobject jobj)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractManeuverTriggers::mids$[PythonAbstractManeuverTriggers::mid_pythonExtension_42c72b98e3c2e08a]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            ::java::util::stream::Stream value((jobject) NULL);
            PyObject *result = PyObject_CallMethod(obj, "getEventDetectors", "");
            if (!result)
              throwPythonError();
            else if (parseArg(result, "k", ::java::util::stream::Stream::initializeClass, &value))
            {
              throwTypeError("getEventDetectors", result);
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

          static jobject JNICALL t_PythonAbstractManeuverTriggers_getFieldEventDetectors1(JNIEnv *jenv, jobject jobj, jobject a0)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractManeuverTriggers::mids$[PythonAbstractManeuverTriggers::mid_pythonExtension_42c72b98e3c2e08a]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            ::java::util::stream::Stream value((jobject) NULL);
            PyObject *o0 = ::org::hipparchus::t_Field::wrap_Object(::org::hipparchus::Field(a0));
            PyObject *result = PyObject_CallMethod(obj, "getFieldEventDetectors", "O", o0);
            Py_DECREF(o0);
            if (!result)
              throwPythonError();
            else if (parseArg(result, "k", ::java::util::stream::Stream::initializeClass, &value))
            {
              throwTypeError("getFieldEventDetectors", result);
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

          static jobject JNICALL t_PythonAbstractManeuverTriggers_getParametersDrivers2(JNIEnv *jenv, jobject jobj)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractManeuverTriggers::mids$[PythonAbstractManeuverTriggers::mid_pythonExtension_42c72b98e3c2e08a]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            ::java::util::List value((jobject) NULL);
            PyObject *result = PyObject_CallMethod(obj, "getParametersDrivers", "");
            if (!result)
              throwPythonError();
            else if (parseArg(result, "k", ::java::util::List::initializeClass, &value))
            {
              throwTypeError("getParametersDrivers", result);
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

          static jboolean JNICALL t_PythonAbstractManeuverTriggers_isFiringOnInitialState3(JNIEnv *jenv, jobject jobj, jobject a0, jboolean a1)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractManeuverTriggers::mids$[PythonAbstractManeuverTriggers::mid_pythonExtension_42c72b98e3c2e08a]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            jboolean value;
            PyObject *o0 = ::org::orekit::propagation::t_SpacecraftState::wrap_Object(::org::orekit::propagation::SpacecraftState(a0));
            PyObject *o1 = (a1 ? Py_True : Py_False);
            PyObject *result = PyObject_CallMethod(obj, "isFiringOnInitialState", "OO", o0, o1);
            Py_DECREF(o0);
            if (!result)
              throwPythonError();
            else if (parseArg(result, "Z", &value))
            {
              throwTypeError("isFiringOnInitialState", result);
              Py_DECREF(result);
            }
            else
            {
              Py_DECREF(result);
              return value;
            }

            return (jboolean) 0;
          }

          static void JNICALL t_PythonAbstractManeuverTriggers_pythonDecRef4(JNIEnv *jenv, jobject jobj)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractManeuverTriggers::mids$[PythonAbstractManeuverTriggers::mid_pythonExtension_42c72b98e3c2e08a]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

            if (obj != NULL)
            {
              jenv->CallVoidMethod(jobj, PythonAbstractManeuverTriggers::mids$[PythonAbstractManeuverTriggers::mid_pythonExtension_f5bbab7e97879358], (jlong) 0);
              env->finalizeObject(jenv, obj);
            }
          }

          static PyObject *t_PythonAbstractManeuverTriggers_get__self(t_PythonAbstractManeuverTriggers *self, void *data)
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
#include "org/hipparchus/geometry/euclidean/threed/Vector3DFormat.h"
#include "java/util/Locale.h"
#include "java/lang/StringBuffer.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3DFormat.h"
#include "org/hipparchus/geometry/Vector.h"
#include "java/text/FieldPosition.h"
#include "java/text/NumberFormat.h"
#include "org/hipparchus/geometry/euclidean/threed/Euclidean3D.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "java/lang/Class.h"
#include "java/text/ParsePosition.h"
#include "org/hipparchus/exception/MathIllegalStateException.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace geometry {
      namespace euclidean {
        namespace threed {

          ::java::lang::Class *Vector3DFormat::class$ = NULL;
          jmethodID *Vector3DFormat::mids$ = NULL;
          bool Vector3DFormat::live$ = false;

          jclass Vector3DFormat::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/hipparchus/geometry/euclidean/threed/Vector3DFormat");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_ff7cb6c242604316] = env->getMethodID(cls, "<init>", "()V");
              mids$[mid_init$_327b6d3ae10b544b] = env->getMethodID(cls, "<init>", "(Ljava/text/NumberFormat;)V");
              mids$[mid_init$_56b987237c71cdbb] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V");
              mids$[mid_init$_21a024496acf58f0] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/text/NumberFormat;)V");
              mids$[mid_format_dbd94d7f7c5c0aa8] = env->getMethodID(cls, "format", "(Lorg/hipparchus/geometry/Vector;Ljava/lang/StringBuffer;Ljava/text/FieldPosition;)Ljava/lang/StringBuffer;");
              mids$[mid_getVector3DFormat_f033d7c67942c06b] = env->getStaticMethodID(cls, "getVector3DFormat", "()Lorg/hipparchus/geometry/euclidean/threed/Vector3DFormat;");
              mids$[mid_getVector3DFormat_22cf7c08b192af51] = env->getStaticMethodID(cls, "getVector3DFormat", "(Ljava/util/Locale;)Lorg/hipparchus/geometry/euclidean/threed/Vector3DFormat;");
              mids$[mid_parse_e4728cd839ec795a] = env->getMethodID(cls, "parse", "(Ljava/lang/String;)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
              mids$[mid_parse_d99e3f3b7dc9d7dc] = env->getMethodID(cls, "parse", "(Ljava/lang/String;Ljava/text/ParsePosition;)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          Vector3DFormat::Vector3DFormat() : ::org::hipparchus::geometry::VectorFormat(env->newObject(initializeClass, &mids$, mid_init$_ff7cb6c242604316)) {}

          Vector3DFormat::Vector3DFormat(const ::java::text::NumberFormat & a0) : ::org::hipparchus::geometry::VectorFormat(env->newObject(initializeClass, &mids$, mid_init$_327b6d3ae10b544b, a0.this$)) {}

          Vector3DFormat::Vector3DFormat(const ::java::lang::String & a0, const ::java::lang::String & a1, const ::java::lang::String & a2) : ::org::hipparchus::geometry::VectorFormat(env->newObject(initializeClass, &mids$, mid_init$_56b987237c71cdbb, a0.this$, a1.this$, a2.this$)) {}

          Vector3DFormat::Vector3DFormat(const ::java::lang::String & a0, const ::java::lang::String & a1, const ::java::lang::String & a2, const ::java::text::NumberFormat & a3) : ::org::hipparchus::geometry::VectorFormat(env->newObject(initializeClass, &mids$, mid_init$_21a024496acf58f0, a0.this$, a1.this$, a2.this$, a3.this$)) {}

          ::java::lang::StringBuffer Vector3DFormat::format(const ::org::hipparchus::geometry::Vector & a0, const ::java::lang::StringBuffer & a1, const ::java::text::FieldPosition & a2) const
          {
            return ::java::lang::StringBuffer(env->callObjectMethod(this$, mids$[mid_format_dbd94d7f7c5c0aa8], a0.this$, a1.this$, a2.this$));
          }

          Vector3DFormat Vector3DFormat::getVector3DFormat()
          {
            jclass cls = env->getClass(initializeClass);
            return Vector3DFormat(env->callStaticObjectMethod(cls, mids$[mid_getVector3DFormat_f033d7c67942c06b]));
          }

          Vector3DFormat Vector3DFormat::getVector3DFormat(const ::java::util::Locale & a0)
          {
            jclass cls = env->getClass(initializeClass);
            return Vector3DFormat(env->callStaticObjectMethod(cls, mids$[mid_getVector3DFormat_22cf7c08b192af51], a0.this$));
          }

          ::org::hipparchus::geometry::euclidean::threed::Vector3D Vector3DFormat::parse(const ::java::lang::String & a0) const
          {
            return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_parse_e4728cd839ec795a], a0.this$));
          }

          ::org::hipparchus::geometry::euclidean::threed::Vector3D Vector3DFormat::parse(const ::java::lang::String & a0, const ::java::text::ParsePosition & a1) const
          {
            return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_parse_d99e3f3b7dc9d7dc], a0.this$, a1.this$));
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
    namespace geometry {
      namespace euclidean {
        namespace threed {
          static PyObject *t_Vector3DFormat_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_Vector3DFormat_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_Vector3DFormat_of_(t_Vector3DFormat *self, PyObject *args);
          static int t_Vector3DFormat_init_(t_Vector3DFormat *self, PyObject *args, PyObject *kwds);
          static PyObject *t_Vector3DFormat_format(t_Vector3DFormat *self, PyObject *args);
          static PyObject *t_Vector3DFormat_getVector3DFormat(PyTypeObject *type, PyObject *args);
          static PyObject *t_Vector3DFormat_parse(t_Vector3DFormat *self, PyObject *args);
          static PyObject *t_Vector3DFormat_get__vector3DFormat(t_Vector3DFormat *self, void *data);
          static PyObject *t_Vector3DFormat_get__parameters_(t_Vector3DFormat *self, void *data);
          static PyGetSetDef t_Vector3DFormat__fields_[] = {
            DECLARE_GET_FIELD(t_Vector3DFormat, vector3DFormat),
            DECLARE_GET_FIELD(t_Vector3DFormat, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_Vector3DFormat__methods_[] = {
            DECLARE_METHOD(t_Vector3DFormat, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_Vector3DFormat, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_Vector3DFormat, of_, METH_VARARGS),
            DECLARE_METHOD(t_Vector3DFormat, format, METH_VARARGS),
            DECLARE_METHOD(t_Vector3DFormat, getVector3DFormat, METH_VARARGS | METH_CLASS),
            DECLARE_METHOD(t_Vector3DFormat, parse, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(Vector3DFormat)[] = {
            { Py_tp_methods, t_Vector3DFormat__methods_ },
            { Py_tp_init, (void *) t_Vector3DFormat_init_ },
            { Py_tp_getset, t_Vector3DFormat__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(Vector3DFormat)[] = {
            &PY_TYPE_DEF(::org::hipparchus::geometry::VectorFormat),
            NULL
          };

          DEFINE_TYPE(Vector3DFormat, t_Vector3DFormat, Vector3DFormat);
          PyObject *t_Vector3DFormat::wrap_Object(const Vector3DFormat& object, PyTypeObject *p0, PyTypeObject *p1)
          {
            PyObject *obj = t_Vector3DFormat::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_Vector3DFormat *self = (t_Vector3DFormat *) obj;
              self->parameters[0] = p0;
              self->parameters[1] = p1;
            }
            return obj;
          }

          PyObject *t_Vector3DFormat::wrap_jobject(const jobject& object, PyTypeObject *p0, PyTypeObject *p1)
          {
            PyObject *obj = t_Vector3DFormat::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_Vector3DFormat *self = (t_Vector3DFormat *) obj;
              self->parameters[0] = p0;
              self->parameters[1] = p1;
            }
            return obj;
          }

          void t_Vector3DFormat::install(PyObject *module)
          {
            installType(&PY_TYPE(Vector3DFormat), &PY_TYPE_DEF(Vector3DFormat), module, "Vector3DFormat", 0);
          }

          void t_Vector3DFormat::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(Vector3DFormat), "class_", make_descriptor(Vector3DFormat::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Vector3DFormat), "wrapfn_", make_descriptor(t_Vector3DFormat::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Vector3DFormat), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_Vector3DFormat_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, Vector3DFormat::initializeClass, 1)))
              return NULL;
            return t_Vector3DFormat::wrap_Object(Vector3DFormat(((t_Vector3DFormat *) arg)->object.this$));
          }
          static PyObject *t_Vector3DFormat_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, Vector3DFormat::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_Vector3DFormat_of_(t_Vector3DFormat *self, PyObject *args)
          {
            if (!parseArg(args, "T", 2, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static int t_Vector3DFormat_init_(t_Vector3DFormat *self, PyObject *args, PyObject *kwds)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 0:
              {
                Vector3DFormat object((jobject) NULL);

                INT_CALL(object = Vector3DFormat());
                self->object = object;
                self->parameters[0] = ::org::hipparchus::geometry::euclidean::threed::PY_TYPE(Euclidean3D);
                self->parameters[1] = ::org::hipparchus::geometry::euclidean::threed::PY_TYPE(Vector3D);
                break;
              }
             case 1:
              {
                ::java::text::NumberFormat a0((jobject) NULL);
                Vector3DFormat object((jobject) NULL);

                if (!parseArgs(args, "k", ::java::text::NumberFormat::initializeClass, &a0))
                {
                  INT_CALL(object = Vector3DFormat(a0));
                  self->object = object;
                  self->parameters[0] = ::org::hipparchus::geometry::euclidean::threed::PY_TYPE(Euclidean3D);
                  self->parameters[1] = ::org::hipparchus::geometry::euclidean::threed::PY_TYPE(Vector3D);
                  break;
                }
              }
              goto err;
             case 3:
              {
                ::java::lang::String a0((jobject) NULL);
                ::java::lang::String a1((jobject) NULL);
                ::java::lang::String a2((jobject) NULL);
                Vector3DFormat object((jobject) NULL);

                if (!parseArgs(args, "sss", &a0, &a1, &a2))
                {
                  INT_CALL(object = Vector3DFormat(a0, a1, a2));
                  self->object = object;
                  self->parameters[0] = ::org::hipparchus::geometry::euclidean::threed::PY_TYPE(Euclidean3D);
                  self->parameters[1] = ::org::hipparchus::geometry::euclidean::threed::PY_TYPE(Vector3D);
                  break;
                }
              }
              goto err;
             case 4:
              {
                ::java::lang::String a0((jobject) NULL);
                ::java::lang::String a1((jobject) NULL);
                ::java::lang::String a2((jobject) NULL);
                ::java::text::NumberFormat a3((jobject) NULL);
                Vector3DFormat object((jobject) NULL);

                if (!parseArgs(args, "sssk", ::java::text::NumberFormat::initializeClass, &a0, &a1, &a2, &a3))
                {
                  INT_CALL(object = Vector3DFormat(a0, a1, a2, a3));
                  self->object = object;
                  self->parameters[0] = ::org::hipparchus::geometry::euclidean::threed::PY_TYPE(Euclidean3D);
                  self->parameters[1] = ::org::hipparchus::geometry::euclidean::threed::PY_TYPE(Vector3D);
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

          static PyObject *t_Vector3DFormat_format(t_Vector3DFormat *self, PyObject *args)
          {
            ::org::hipparchus::geometry::Vector a0((jobject) NULL);
            PyTypeObject **p0;
            ::java::lang::StringBuffer a1((jobject) NULL);
            ::java::text::FieldPosition a2((jobject) NULL);
            ::java::lang::StringBuffer result((jobject) NULL);

            if (!parseArgs(args, "Kkk", ::org::hipparchus::geometry::Vector::initializeClass, ::java::lang::StringBuffer::initializeClass, ::java::text::FieldPosition::initializeClass, &a0, &p0, ::org::hipparchus::geometry::t_Vector::parameters_, &a1, &a2))
            {
              OBJ_CALL(result = self->object.format(a0, a1, a2));
              return ::java::lang::t_StringBuffer::wrap_Object(result);
            }

            return callSuper(PY_TYPE(Vector3DFormat), (PyObject *) self, "format", args, 2);
          }

          static PyObject *t_Vector3DFormat_getVector3DFormat(PyTypeObject *type, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 0:
              {
                Vector3DFormat result((jobject) NULL);
                OBJ_CALL(result = ::org::hipparchus::geometry::euclidean::threed::Vector3DFormat::getVector3DFormat());
                return t_Vector3DFormat::wrap_Object(result);
              }
              break;
             case 1:
              {
                ::java::util::Locale a0((jobject) NULL);
                Vector3DFormat result((jobject) NULL);

                if (!parseArgs(args, "k", ::java::util::Locale::initializeClass, &a0))
                {
                  OBJ_CALL(result = ::org::hipparchus::geometry::euclidean::threed::Vector3DFormat::getVector3DFormat(a0));
                  return t_Vector3DFormat::wrap_Object(result);
                }
              }
            }

            PyErr_SetArgsError(type, "getVector3DFormat", args);
            return NULL;
          }

          static PyObject *t_Vector3DFormat_parse(t_Vector3DFormat *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 1:
              {
                ::java::lang::String a0((jobject) NULL);
                ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);

                if (!parseArgs(args, "s", &a0))
                {
                  OBJ_CALL(result = self->object.parse(a0));
                  return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
                }
              }
              break;
             case 2:
              {
                ::java::lang::String a0((jobject) NULL);
                ::java::text::ParsePosition a1((jobject) NULL);
                ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);

                if (!parseArgs(args, "sk", ::java::text::ParsePosition::initializeClass, &a0, &a1))
                {
                  OBJ_CALL(result = self->object.parse(a0, a1));
                  return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
                }
              }
            }

            return callSuper(PY_TYPE(Vector3DFormat), (PyObject *) self, "parse", args, 2);
          }
          static PyObject *t_Vector3DFormat_get__parameters_(t_Vector3DFormat *self, void *data)
          {
            return typeParameters(self->parameters, sizeof(self->parameters));
          }

          static PyObject *t_Vector3DFormat_get__vector3DFormat(t_Vector3DFormat *self, void *data)
          {
            Vector3DFormat value((jobject) NULL);
            OBJ_CALL(value = self->object.getVector3DFormat());
            return t_Vector3DFormat::wrap_Object(value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/rinex/navigation/TimeSystemCorrection.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace rinex {
        namespace navigation {

          ::java::lang::Class *TimeSystemCorrection::class$ = NULL;
          jmethodID *TimeSystemCorrection::mids$ = NULL;
          bool TimeSystemCorrection::live$ = false;

          jclass TimeSystemCorrection::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/files/rinex/navigation/TimeSystemCorrection");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_77cd201a04ebdacb] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;Lorg/orekit/time/AbsoluteDate;DD)V");
              mids$[mid_getReferenceDate_80e11148db499dda] = env->getMethodID(cls, "getReferenceDate", "()Lorg/orekit/time/AbsoluteDate;");
              mids$[mid_getTimeSystemCorrectionA0_9981f74b2d109da6] = env->getMethodID(cls, "getTimeSystemCorrectionA0", "()D");
              mids$[mid_getTimeSystemCorrectionA1_9981f74b2d109da6] = env->getMethodID(cls, "getTimeSystemCorrectionA1", "()D");
              mids$[mid_getTimeSystemCorrectionType_d2c8eb4129821f0e] = env->getMethodID(cls, "getTimeSystemCorrectionType", "()Ljava/lang/String;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          TimeSystemCorrection::TimeSystemCorrection(const ::java::lang::String & a0, const ::org::orekit::time::AbsoluteDate & a1, jdouble a2, jdouble a3) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_77cd201a04ebdacb, a0.this$, a1.this$, a2, a3)) {}

          ::org::orekit::time::AbsoluteDate TimeSystemCorrection::getReferenceDate() const
          {
            return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getReferenceDate_80e11148db499dda]));
          }

          jdouble TimeSystemCorrection::getTimeSystemCorrectionA0() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getTimeSystemCorrectionA0_9981f74b2d109da6]);
          }

          jdouble TimeSystemCorrection::getTimeSystemCorrectionA1() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getTimeSystemCorrectionA1_9981f74b2d109da6]);
          }

          ::java::lang::String TimeSystemCorrection::getTimeSystemCorrectionType() const
          {
            return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getTimeSystemCorrectionType_d2c8eb4129821f0e]));
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
        namespace navigation {
          static PyObject *t_TimeSystemCorrection_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_TimeSystemCorrection_instance_(PyTypeObject *type, PyObject *arg);
          static int t_TimeSystemCorrection_init_(t_TimeSystemCorrection *self, PyObject *args, PyObject *kwds);
          static PyObject *t_TimeSystemCorrection_getReferenceDate(t_TimeSystemCorrection *self);
          static PyObject *t_TimeSystemCorrection_getTimeSystemCorrectionA0(t_TimeSystemCorrection *self);
          static PyObject *t_TimeSystemCorrection_getTimeSystemCorrectionA1(t_TimeSystemCorrection *self);
          static PyObject *t_TimeSystemCorrection_getTimeSystemCorrectionType(t_TimeSystemCorrection *self);
          static PyObject *t_TimeSystemCorrection_get__referenceDate(t_TimeSystemCorrection *self, void *data);
          static PyObject *t_TimeSystemCorrection_get__timeSystemCorrectionA0(t_TimeSystemCorrection *self, void *data);
          static PyObject *t_TimeSystemCorrection_get__timeSystemCorrectionA1(t_TimeSystemCorrection *self, void *data);
          static PyObject *t_TimeSystemCorrection_get__timeSystemCorrectionType(t_TimeSystemCorrection *self, void *data);
          static PyGetSetDef t_TimeSystemCorrection__fields_[] = {
            DECLARE_GET_FIELD(t_TimeSystemCorrection, referenceDate),
            DECLARE_GET_FIELD(t_TimeSystemCorrection, timeSystemCorrectionA0),
            DECLARE_GET_FIELD(t_TimeSystemCorrection, timeSystemCorrectionA1),
            DECLARE_GET_FIELD(t_TimeSystemCorrection, timeSystemCorrectionType),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_TimeSystemCorrection__methods_[] = {
            DECLARE_METHOD(t_TimeSystemCorrection, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_TimeSystemCorrection, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_TimeSystemCorrection, getReferenceDate, METH_NOARGS),
            DECLARE_METHOD(t_TimeSystemCorrection, getTimeSystemCorrectionA0, METH_NOARGS),
            DECLARE_METHOD(t_TimeSystemCorrection, getTimeSystemCorrectionA1, METH_NOARGS),
            DECLARE_METHOD(t_TimeSystemCorrection, getTimeSystemCorrectionType, METH_NOARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(TimeSystemCorrection)[] = {
            { Py_tp_methods, t_TimeSystemCorrection__methods_ },
            { Py_tp_init, (void *) t_TimeSystemCorrection_init_ },
            { Py_tp_getset, t_TimeSystemCorrection__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(TimeSystemCorrection)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(TimeSystemCorrection, t_TimeSystemCorrection, TimeSystemCorrection);

          void t_TimeSystemCorrection::install(PyObject *module)
          {
            installType(&PY_TYPE(TimeSystemCorrection), &PY_TYPE_DEF(TimeSystemCorrection), module, "TimeSystemCorrection", 0);
          }

          void t_TimeSystemCorrection::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(TimeSystemCorrection), "class_", make_descriptor(TimeSystemCorrection::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(TimeSystemCorrection), "wrapfn_", make_descriptor(t_TimeSystemCorrection::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(TimeSystemCorrection), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_TimeSystemCorrection_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, TimeSystemCorrection::initializeClass, 1)))
              return NULL;
            return t_TimeSystemCorrection::wrap_Object(TimeSystemCorrection(((t_TimeSystemCorrection *) arg)->object.this$));
          }
          static PyObject *t_TimeSystemCorrection_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, TimeSystemCorrection::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_TimeSystemCorrection_init_(t_TimeSystemCorrection *self, PyObject *args, PyObject *kwds)
          {
            ::java::lang::String a0((jobject) NULL);
            ::org::orekit::time::AbsoluteDate a1((jobject) NULL);
            jdouble a2;
            jdouble a3;
            TimeSystemCorrection object((jobject) NULL);

            if (!parseArgs(args, "skDD", ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1, &a2, &a3))
            {
              INT_CALL(object = TimeSystemCorrection(a0, a1, a2, a3));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_TimeSystemCorrection_getReferenceDate(t_TimeSystemCorrection *self)
          {
            ::org::orekit::time::AbsoluteDate result((jobject) NULL);
            OBJ_CALL(result = self->object.getReferenceDate());
            return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
          }

          static PyObject *t_TimeSystemCorrection_getTimeSystemCorrectionA0(t_TimeSystemCorrection *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getTimeSystemCorrectionA0());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_TimeSystemCorrection_getTimeSystemCorrectionA1(t_TimeSystemCorrection *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getTimeSystemCorrectionA1());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_TimeSystemCorrection_getTimeSystemCorrectionType(t_TimeSystemCorrection *self)
          {
            ::java::lang::String result((jobject) NULL);
            OBJ_CALL(result = self->object.getTimeSystemCorrectionType());
            return j2p(result);
          }

          static PyObject *t_TimeSystemCorrection_get__referenceDate(t_TimeSystemCorrection *self, void *data)
          {
            ::org::orekit::time::AbsoluteDate value((jobject) NULL);
            OBJ_CALL(value = self->object.getReferenceDate());
            return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
          }

          static PyObject *t_TimeSystemCorrection_get__timeSystemCorrectionA0(t_TimeSystemCorrection *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getTimeSystemCorrectionA0());
            return PyFloat_FromDouble((double) value);
          }

          static PyObject *t_TimeSystemCorrection_get__timeSystemCorrectionA1(t_TimeSystemCorrection *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getTimeSystemCorrectionA1());
            return PyFloat_FromDouble((double) value);
          }

          static PyObject *t_TimeSystemCorrection_get__timeSystemCorrectionType(t_TimeSystemCorrection *self, void *data)
          {
            ::java::lang::String value((jobject) NULL);
            OBJ_CALL(value = self->object.getTimeSystemCorrectionType());
            return j2p(value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "java/io/ObjectInputStream.h"
#include "java/io/ObjectInputFilter.h"
#include "java/io/IOException.h"
#include "java/lang/ClassNotFoundException.h"
#include "java/io/ObjectInput.h"
#include "java/io/InvalidObjectException.h"
#include "java/lang/Class.h"
#include "java/io/ObjectInputStream$GetField.h"
#include "java/lang/Object.h"
#include "java/io/ObjectInputValidation.h"
#include "java/io/NotActiveException.h"
#include "java/lang/String.h"
#include "java/io/ObjectStreamConstants.h"
#include "JArray.h"

namespace java {
  namespace io {

    ::java::lang::Class *ObjectInputStream::class$ = NULL;
    jmethodID *ObjectInputStream::mids$ = NULL;
    bool ObjectInputStream::live$ = false;

    jclass ObjectInputStream::initializeClass(bool getOnly)
    {
      if (getOnly)
        return (jclass) (live$ ? class$->this$ : NULL);
      if (class$ == NULL)
      {
        jclass cls = (jclass) env->findClass("java/io/ObjectInputStream");

        mids$ = new jmethodID[max_mid];
        mids$[mid_init$_8f4bef0679d2f8d5] = env->getMethodID(cls, "<init>", "(Ljava/io/InputStream;)V");
        mids$[mid_available_d6ab429752e7c267] = env->getMethodID(cls, "available", "()I");
        mids$[mid_close_ff7cb6c242604316] = env->getMethodID(cls, "close", "()V");
        mids$[mid_defaultReadObject_ff7cb6c242604316] = env->getMethodID(cls, "defaultReadObject", "()V");
        mids$[mid_getObjectInputFilter_cbabae5c581a3f60] = env->getMethodID(cls, "getObjectInputFilter", "()Ljava/io/ObjectInputFilter;");
        mids$[mid_read_d6ab429752e7c267] = env->getMethodID(cls, "read", "()I");
        mids$[mid_read_1351cbafe5a435a7] = env->getMethodID(cls, "read", "([BII)I");
        mids$[mid_readBoolean_eee3de00fe971136] = env->getMethodID(cls, "readBoolean", "()Z");
        mids$[mid_readByte_5bc9c54e4a4e6e3f] = env->getMethodID(cls, "readByte", "()B");
        mids$[mid_readChar_153df32fe8b51cb6] = env->getMethodID(cls, "readChar", "()C");
        mids$[mid_readDouble_9981f74b2d109da6] = env->getMethodID(cls, "readDouble", "()D");
        mids$[mid_readFields_4bf4994849ee3af3] = env->getMethodID(cls, "readFields", "()Ljava/io/ObjectInputStream$GetField;");
        mids$[mid_readFloat_0e3b995f823d65ff] = env->getMethodID(cls, "readFloat", "()F");
        mids$[mid_readFully_bba2a19638de22ff] = env->getMethodID(cls, "readFully", "([B)V");
        mids$[mid_readFully_e4288ba5fbf20d28] = env->getMethodID(cls, "readFully", "([BII)V");
        mids$[mid_readInt_d6ab429752e7c267] = env->getMethodID(cls, "readInt", "()I");
        mids$[mid_readLine_d2c8eb4129821f0e] = env->getMethodID(cls, "readLine", "()Ljava/lang/String;");
        mids$[mid_readLong_42c72b98e3c2e08a] = env->getMethodID(cls, "readLong", "()J");
        mids$[mid_readObject_704a5bee58538972] = env->getMethodID(cls, "readObject", "()Ljava/lang/Object;");
        mids$[mid_readShort_5067fec74ceda473] = env->getMethodID(cls, "readShort", "()S");
        mids$[mid_readUTF_d2c8eb4129821f0e] = env->getMethodID(cls, "readUTF", "()Ljava/lang/String;");
        mids$[mid_readUnshared_704a5bee58538972] = env->getMethodID(cls, "readUnshared", "()Ljava/lang/Object;");
        mids$[mid_readUnsignedByte_d6ab429752e7c267] = env->getMethodID(cls, "readUnsignedByte", "()I");
        mids$[mid_readUnsignedShort_d6ab429752e7c267] = env->getMethodID(cls, "readUnsignedShort", "()I");
        mids$[mid_registerValidation_c10a52e9d0d47389] = env->getMethodID(cls, "registerValidation", "(Ljava/io/ObjectInputValidation;I)V");
        mids$[mid_setObjectInputFilter_a980436ee9bfb980] = env->getMethodID(cls, "setObjectInputFilter", "(Ljava/io/ObjectInputFilter;)V");
        mids$[mid_skipBytes_d938fc64e8c6df2d] = env->getMethodID(cls, "skipBytes", "(I)I");
        mids$[mid_readObjectOverride_704a5bee58538972] = env->getMethodID(cls, "readObjectOverride", "()Ljava/lang/Object;");
        mids$[mid_resolveProxyClass_82a7d5c3e9692571] = env->getMethodID(cls, "resolveProxyClass", "([Ljava/lang/String;)Ljava/lang/Class;");
        mids$[mid_resolveObject_05290476c26136d7] = env->getMethodID(cls, "resolveObject", "(Ljava/lang/Object;)Ljava/lang/Object;");
        mids$[mid_enableResolveObject_80aaf3d99b4df682] = env->getMethodID(cls, "enableResolveObject", "(Z)Z");
        mids$[mid_readStreamHeader_ff7cb6c242604316] = env->getMethodID(cls, "readStreamHeader", "()V");
        mids$[mid_readClassDescriptor_bd13c6c1b9563bca] = env->getMethodID(cls, "readClassDescriptor", "()Ljava/io/ObjectStreamClass;");
        mids$[mid_resolveClass_490f3fb6e078c1cd] = env->getMethodID(cls, "resolveClass", "(Ljava/io/ObjectStreamClass;)Ljava/lang/Class;");

        class$ = new ::java::lang::Class(cls);
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    ObjectInputStream::ObjectInputStream(const ::java::io::InputStream & a0) : ::java::io::InputStream(env->newObject(initializeClass, &mids$, mid_init$_8f4bef0679d2f8d5, a0.this$)) {}

    jint ObjectInputStream::available() const
    {
      return env->callIntMethod(this$, mids$[mid_available_d6ab429752e7c267]);
    }

    void ObjectInputStream::close() const
    {
      env->callVoidMethod(this$, mids$[mid_close_ff7cb6c242604316]);
    }

    void ObjectInputStream::defaultReadObject() const
    {
      env->callVoidMethod(this$, mids$[mid_defaultReadObject_ff7cb6c242604316]);
    }

    ::java::io::ObjectInputFilter ObjectInputStream::getObjectInputFilter() const
    {
      return ::java::io::ObjectInputFilter(env->callObjectMethod(this$, mids$[mid_getObjectInputFilter_cbabae5c581a3f60]));
    }

    jint ObjectInputStream::read() const
    {
      return env->callIntMethod(this$, mids$[mid_read_d6ab429752e7c267]);
    }

    jint ObjectInputStream::read(const JArray< jbyte > & a0, jint a1, jint a2) const
    {
      return env->callIntMethod(this$, mids$[mid_read_1351cbafe5a435a7], a0.this$, a1, a2);
    }

    jboolean ObjectInputStream::readBoolean() const
    {
      return env->callBooleanMethod(this$, mids$[mid_readBoolean_eee3de00fe971136]);
    }

    jbyte ObjectInputStream::readByte() const
    {
      return env->callByteMethod(this$, mids$[mid_readByte_5bc9c54e4a4e6e3f]);
    }

    jchar ObjectInputStream::readChar() const
    {
      return env->callCharMethod(this$, mids$[mid_readChar_153df32fe8b51cb6]);
    }

    jdouble ObjectInputStream::readDouble() const
    {
      return env->callDoubleMethod(this$, mids$[mid_readDouble_9981f74b2d109da6]);
    }

    ::java::io::ObjectInputStream$GetField ObjectInputStream::readFields() const
    {
      return ::java::io::ObjectInputStream$GetField(env->callObjectMethod(this$, mids$[mid_readFields_4bf4994849ee3af3]));
    }

    jfloat ObjectInputStream::readFloat() const
    {
      return env->callFloatMethod(this$, mids$[mid_readFloat_0e3b995f823d65ff]);
    }

    void ObjectInputStream::readFully(const JArray< jbyte > & a0) const
    {
      env->callVoidMethod(this$, mids$[mid_readFully_bba2a19638de22ff], a0.this$);
    }

    void ObjectInputStream::readFully(const JArray< jbyte > & a0, jint a1, jint a2) const
    {
      env->callVoidMethod(this$, mids$[mid_readFully_e4288ba5fbf20d28], a0.this$, a1, a2);
    }

    jint ObjectInputStream::readInt() const
    {
      return env->callIntMethod(this$, mids$[mid_readInt_d6ab429752e7c267]);
    }

    ::java::lang::String ObjectInputStream::readLine() const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_readLine_d2c8eb4129821f0e]));
    }

    jlong ObjectInputStream::readLong() const
    {
      return env->callLongMethod(this$, mids$[mid_readLong_42c72b98e3c2e08a]);
    }

    ::java::lang::Object ObjectInputStream::readObject() const
    {
      return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_readObject_704a5bee58538972]));
    }

    jshort ObjectInputStream::readShort() const
    {
      return env->callShortMethod(this$, mids$[mid_readShort_5067fec74ceda473]);
    }

    ::java::lang::String ObjectInputStream::readUTF() const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_readUTF_d2c8eb4129821f0e]));
    }

    ::java::lang::Object ObjectInputStream::readUnshared() const
    {
      return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_readUnshared_704a5bee58538972]));
    }

    jint ObjectInputStream::readUnsignedByte() const
    {
      return env->callIntMethod(this$, mids$[mid_readUnsignedByte_d6ab429752e7c267]);
    }

    jint ObjectInputStream::readUnsignedShort() const
    {
      return env->callIntMethod(this$, mids$[mid_readUnsignedShort_d6ab429752e7c267]);
    }

    void ObjectInputStream::registerValidation(const ::java::io::ObjectInputValidation & a0, jint a1) const
    {
      env->callVoidMethod(this$, mids$[mid_registerValidation_c10a52e9d0d47389], a0.this$, a1);
    }

    void ObjectInputStream::setObjectInputFilter(const ::java::io::ObjectInputFilter & a0) const
    {
      env->callVoidMethod(this$, mids$[mid_setObjectInputFilter_a980436ee9bfb980], a0.this$);
    }

    jint ObjectInputStream::skipBytes(jint a0) const
    {
      return env->callIntMethod(this$, mids$[mid_skipBytes_d938fc64e8c6df2d], a0);
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace java {
  namespace io {
    static PyObject *t_ObjectInputStream_cast_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_ObjectInputStream_instance_(PyTypeObject *type, PyObject *arg);
    static int t_ObjectInputStream_init_(t_ObjectInputStream *self, PyObject *args, PyObject *kwds);
    static PyObject *t_ObjectInputStream_available(t_ObjectInputStream *self, PyObject *args);
    static PyObject *t_ObjectInputStream_close(t_ObjectInputStream *self, PyObject *args);
    static PyObject *t_ObjectInputStream_defaultReadObject(t_ObjectInputStream *self);
    static PyObject *t_ObjectInputStream_getObjectInputFilter(t_ObjectInputStream *self);
    static PyObject *t_ObjectInputStream_read(t_ObjectInputStream *self, PyObject *args);
    static PyObject *t_ObjectInputStream_readBoolean(t_ObjectInputStream *self);
    static PyObject *t_ObjectInputStream_readByte(t_ObjectInputStream *self);
    static PyObject *t_ObjectInputStream_readChar(t_ObjectInputStream *self);
    static PyObject *t_ObjectInputStream_readDouble(t_ObjectInputStream *self);
    static PyObject *t_ObjectInputStream_readFields(t_ObjectInputStream *self);
    static PyObject *t_ObjectInputStream_readFloat(t_ObjectInputStream *self);
    static PyObject *t_ObjectInputStream_readFully(t_ObjectInputStream *self, PyObject *args);
    static PyObject *t_ObjectInputStream_readInt(t_ObjectInputStream *self);
    static PyObject *t_ObjectInputStream_readLine(t_ObjectInputStream *self);
    static PyObject *t_ObjectInputStream_readLong(t_ObjectInputStream *self);
    static PyObject *t_ObjectInputStream_readObject(t_ObjectInputStream *self);
    static PyObject *t_ObjectInputStream_readShort(t_ObjectInputStream *self);
    static PyObject *t_ObjectInputStream_readUTF(t_ObjectInputStream *self);
    static PyObject *t_ObjectInputStream_readUnshared(t_ObjectInputStream *self);
    static PyObject *t_ObjectInputStream_readUnsignedByte(t_ObjectInputStream *self);
    static PyObject *t_ObjectInputStream_readUnsignedShort(t_ObjectInputStream *self);
    static PyObject *t_ObjectInputStream_registerValidation(t_ObjectInputStream *self, PyObject *args);
    static PyObject *t_ObjectInputStream_setObjectInputFilter(t_ObjectInputStream *self, PyObject *arg);
    static PyObject *t_ObjectInputStream_skipBytes(t_ObjectInputStream *self, PyObject *arg);
    static PyObject *t_ObjectInputStream_get__objectInputFilter(t_ObjectInputStream *self, void *data);
    static int t_ObjectInputStream_set__objectInputFilter(t_ObjectInputStream *self, PyObject *arg, void *data);
    static PyGetSetDef t_ObjectInputStream__fields_[] = {
      DECLARE_GETSET_FIELD(t_ObjectInputStream, objectInputFilter),
      { NULL, NULL, NULL, NULL, NULL }
    };

    static PyMethodDef t_ObjectInputStream__methods_[] = {
      DECLARE_METHOD(t_ObjectInputStream, cast_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_ObjectInputStream, instance_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_ObjectInputStream, available, METH_VARARGS),
      DECLARE_METHOD(t_ObjectInputStream, close, METH_VARARGS),
      DECLARE_METHOD(t_ObjectInputStream, defaultReadObject, METH_NOARGS),
      DECLARE_METHOD(t_ObjectInputStream, getObjectInputFilter, METH_NOARGS),
      DECLARE_METHOD(t_ObjectInputStream, read, METH_VARARGS),
      DECLARE_METHOD(t_ObjectInputStream, readBoolean, METH_NOARGS),
      DECLARE_METHOD(t_ObjectInputStream, readByte, METH_NOARGS),
      DECLARE_METHOD(t_ObjectInputStream, readChar, METH_NOARGS),
      DECLARE_METHOD(t_ObjectInputStream, readDouble, METH_NOARGS),
      DECLARE_METHOD(t_ObjectInputStream, readFields, METH_NOARGS),
      DECLARE_METHOD(t_ObjectInputStream, readFloat, METH_NOARGS),
      DECLARE_METHOD(t_ObjectInputStream, readFully, METH_VARARGS),
      DECLARE_METHOD(t_ObjectInputStream, readInt, METH_NOARGS),
      DECLARE_METHOD(t_ObjectInputStream, readLine, METH_NOARGS),
      DECLARE_METHOD(t_ObjectInputStream, readLong, METH_NOARGS),
      DECLARE_METHOD(t_ObjectInputStream, readObject, METH_NOARGS),
      DECLARE_METHOD(t_ObjectInputStream, readShort, METH_NOARGS),
      DECLARE_METHOD(t_ObjectInputStream, readUTF, METH_NOARGS),
      DECLARE_METHOD(t_ObjectInputStream, readUnshared, METH_NOARGS),
      DECLARE_METHOD(t_ObjectInputStream, readUnsignedByte, METH_NOARGS),
      DECLARE_METHOD(t_ObjectInputStream, readUnsignedShort, METH_NOARGS),
      DECLARE_METHOD(t_ObjectInputStream, registerValidation, METH_VARARGS),
      DECLARE_METHOD(t_ObjectInputStream, setObjectInputFilter, METH_O),
      DECLARE_METHOD(t_ObjectInputStream, skipBytes, METH_O),
      { NULL, NULL, 0, NULL }
    };

    static PyType_Slot PY_TYPE_SLOTS(ObjectInputStream)[] = {
      { Py_tp_methods, t_ObjectInputStream__methods_ },
      { Py_tp_init, (void *) t_ObjectInputStream_init_ },
      { Py_tp_getset, t_ObjectInputStream__fields_ },
      { 0, NULL }
    };

    static PyType_Def *PY_TYPE_BASES(ObjectInputStream)[] = {
      &PY_TYPE_DEF(::java::io::InputStream),
      NULL
    };

    DEFINE_TYPE(ObjectInputStream, t_ObjectInputStream, ObjectInputStream);

    void t_ObjectInputStream::install(PyObject *module)
    {
      installType(&PY_TYPE(ObjectInputStream), &PY_TYPE_DEF(ObjectInputStream), module, "ObjectInputStream", 0);
      PyObject_SetAttrString((PyObject *) PY_TYPE(ObjectInputStream), "GetField", make_descriptor(&PY_TYPE_DEF(ObjectInputStream$GetField)));
    }

    void t_ObjectInputStream::initialize(PyObject *module)
    {
      PyObject_SetAttrString((PyObject *) PY_TYPE(ObjectInputStream), "class_", make_descriptor(ObjectInputStream::initializeClass, 1));
      PyObject_SetAttrString((PyObject *) PY_TYPE(ObjectInputStream), "wrapfn_", make_descriptor(t_ObjectInputStream::wrap_jobject));
      PyObject_SetAttrString((PyObject *) PY_TYPE(ObjectInputStream), "boxfn_", make_descriptor(boxObject));
    }

    static PyObject *t_ObjectInputStream_cast_(PyTypeObject *type, PyObject *arg)
    {
      if (!(arg = castCheck(arg, ObjectInputStream::initializeClass, 1)))
        return NULL;
      return t_ObjectInputStream::wrap_Object(ObjectInputStream(((t_ObjectInputStream *) arg)->object.this$));
    }
    static PyObject *t_ObjectInputStream_instance_(PyTypeObject *type, PyObject *arg)
    {
      if (!castCheck(arg, ObjectInputStream::initializeClass, 0))
        Py_RETURN_FALSE;
      Py_RETURN_TRUE;
    }

    static int t_ObjectInputStream_init_(t_ObjectInputStream *self, PyObject *args, PyObject *kwds)
    {
      ::java::io::InputStream a0((jobject) NULL);
      ObjectInputStream object((jobject) NULL);

      if (!parseArgs(args, "k", ::java::io::InputStream::initializeClass, &a0))
      {
        INT_CALL(object = ObjectInputStream(a0));
        self->object = object;
      }
      else
      {
        PyErr_SetArgsError((PyObject *) self, "__init__", args);
        return -1;
      }

      return 0;
    }

    static PyObject *t_ObjectInputStream_available(t_ObjectInputStream *self, PyObject *args)
    {
      jint result;

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.available());
        return PyLong_FromLong((long) result);
      }

      return callSuper(PY_TYPE(ObjectInputStream), (PyObject *) self, "available", args, 2);
    }

    static PyObject *t_ObjectInputStream_close(t_ObjectInputStream *self, PyObject *args)
    {

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(self->object.close());
        Py_RETURN_NONE;
      }

      return callSuper(PY_TYPE(ObjectInputStream), (PyObject *) self, "close", args, 2);
    }

    static PyObject *t_ObjectInputStream_defaultReadObject(t_ObjectInputStream *self)
    {
      OBJ_CALL(self->object.defaultReadObject());
      Py_RETURN_NONE;
    }

    static PyObject *t_ObjectInputStream_getObjectInputFilter(t_ObjectInputStream *self)
    {
      ::java::io::ObjectInputFilter result((jobject) NULL);
      OBJ_CALL(result = self->object.getObjectInputFilter());
      return ::java::io::t_ObjectInputFilter::wrap_Object(result);
    }

    static PyObject *t_ObjectInputStream_read(t_ObjectInputStream *self, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 0:
        {
          jint result;
          OBJ_CALL(result = self->object.read());
          return PyLong_FromLong((long) result);
        }
        break;
       case 3:
        {
          JArray< jbyte > a0((jobject) NULL);
          jint a1;
          jint a2;
          jint result;

          if (!parseArgs(args, "[BII", &a0, &a1, &a2))
          {
            OBJ_CALL(result = self->object.read(a0, a1, a2));
            return PyLong_FromLong((long) result);
          }
        }
      }

      return callSuper(PY_TYPE(ObjectInputStream), (PyObject *) self, "read", args, 2);
    }

    static PyObject *t_ObjectInputStream_readBoolean(t_ObjectInputStream *self)
    {
      jboolean result;
      OBJ_CALL(result = self->object.readBoolean());
      Py_RETURN_BOOL(result);
    }

    static PyObject *t_ObjectInputStream_readByte(t_ObjectInputStream *self)
    {
      jbyte result;
      OBJ_CALL(result = self->object.readByte());
      return PyLong_FromLong((long) result);
    }

    static PyObject *t_ObjectInputStream_readChar(t_ObjectInputStream *self)
    {
      jchar result;
      OBJ_CALL(result = self->object.readChar());
      return c2p(result);
    }

    static PyObject *t_ObjectInputStream_readDouble(t_ObjectInputStream *self)
    {
      jdouble result;
      OBJ_CALL(result = self->object.readDouble());
      return PyFloat_FromDouble((double) result);
    }

    static PyObject *t_ObjectInputStream_readFields(t_ObjectInputStream *self)
    {
      ::java::io::ObjectInputStream$GetField result((jobject) NULL);
      OBJ_CALL(result = self->object.readFields());
      return ::java::io::t_ObjectInputStream$GetField::wrap_Object(result);
    }

    static PyObject *t_ObjectInputStream_readFloat(t_ObjectInputStream *self)
    {
      jfloat result;
      OBJ_CALL(result = self->object.readFloat());
      return PyFloat_FromDouble((double) result);
    }

    static PyObject *t_ObjectInputStream_readFully(t_ObjectInputStream *self, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 1:
        {
          JArray< jbyte > a0((jobject) NULL);

          if (!parseArgs(args, "[B", &a0))
          {
            OBJ_CALL(self->object.readFully(a0));
            Py_RETURN_NONE;
          }
        }
        break;
       case 3:
        {
          JArray< jbyte > a0((jobject) NULL);
          jint a1;
          jint a2;

          if (!parseArgs(args, "[BII", &a0, &a1, &a2))
          {
            OBJ_CALL(self->object.readFully(a0, a1, a2));
            Py_RETURN_NONE;
          }
        }
      }

      PyErr_SetArgsError((PyObject *) self, "readFully", args);
      return NULL;
    }

    static PyObject *t_ObjectInputStream_readInt(t_ObjectInputStream *self)
    {
      jint result;
      OBJ_CALL(result = self->object.readInt());
      return PyLong_FromLong((long) result);
    }

    static PyObject *t_ObjectInputStream_readLine(t_ObjectInputStream *self)
    {
      ::java::lang::String result((jobject) NULL);
      OBJ_CALL(result = self->object.readLine());
      return j2p(result);
    }

    static PyObject *t_ObjectInputStream_readLong(t_ObjectInputStream *self)
    {
      jlong result;
      OBJ_CALL(result = self->object.readLong());
      return PyLong_FromLongLong((PY_LONG_LONG) result);
    }

    static PyObject *t_ObjectInputStream_readObject(t_ObjectInputStream *self)
    {
      ::java::lang::Object result((jobject) NULL);
      OBJ_CALL(result = self->object.readObject());
      return ::java::lang::t_Object::wrap_Object(result);
    }

    static PyObject *t_ObjectInputStream_readShort(t_ObjectInputStream *self)
    {
      jshort result;
      OBJ_CALL(result = self->object.readShort());
      return PyLong_FromLong((long) result);
    }

    static PyObject *t_ObjectInputStream_readUTF(t_ObjectInputStream *self)
    {
      ::java::lang::String result((jobject) NULL);
      OBJ_CALL(result = self->object.readUTF());
      return j2p(result);
    }

    static PyObject *t_ObjectInputStream_readUnshared(t_ObjectInputStream *self)
    {
      ::java::lang::Object result((jobject) NULL);
      OBJ_CALL(result = self->object.readUnshared());
      return ::java::lang::t_Object::wrap_Object(result);
    }

    static PyObject *t_ObjectInputStream_readUnsignedByte(t_ObjectInputStream *self)
    {
      jint result;
      OBJ_CALL(result = self->object.readUnsignedByte());
      return PyLong_FromLong((long) result);
    }

    static PyObject *t_ObjectInputStream_readUnsignedShort(t_ObjectInputStream *self)
    {
      jint result;
      OBJ_CALL(result = self->object.readUnsignedShort());
      return PyLong_FromLong((long) result);
    }

    static PyObject *t_ObjectInputStream_registerValidation(t_ObjectInputStream *self, PyObject *args)
    {
      ::java::io::ObjectInputValidation a0((jobject) NULL);
      jint a1;

      if (!parseArgs(args, "kI", ::java::io::ObjectInputValidation::initializeClass, &a0, &a1))
      {
        OBJ_CALL(self->object.registerValidation(a0, a1));
        Py_RETURN_NONE;
      }

      PyErr_SetArgsError((PyObject *) self, "registerValidation", args);
      return NULL;
    }

    static PyObject *t_ObjectInputStream_setObjectInputFilter(t_ObjectInputStream *self, PyObject *arg)
    {
      ::java::io::ObjectInputFilter a0((jobject) NULL);

      if (!parseArg(arg, "k", ::java::io::ObjectInputFilter::initializeClass, &a0))
      {
        OBJ_CALL(self->object.setObjectInputFilter(a0));
        Py_RETURN_NONE;
      }

      PyErr_SetArgsError((PyObject *) self, "setObjectInputFilter", arg);
      return NULL;
    }

    static PyObject *t_ObjectInputStream_skipBytes(t_ObjectInputStream *self, PyObject *arg)
    {
      jint a0;
      jint result;

      if (!parseArg(arg, "I", &a0))
      {
        OBJ_CALL(result = self->object.skipBytes(a0));
        return PyLong_FromLong((long) result);
      }

      PyErr_SetArgsError((PyObject *) self, "skipBytes", arg);
      return NULL;
    }

    static PyObject *t_ObjectInputStream_get__objectInputFilter(t_ObjectInputStream *self, void *data)
    {
      ::java::io::ObjectInputFilter value((jobject) NULL);
      OBJ_CALL(value = self->object.getObjectInputFilter());
      return ::java::io::t_ObjectInputFilter::wrap_Object(value);
    }
    static int t_ObjectInputStream_set__objectInputFilter(t_ObjectInputStream *self, PyObject *arg, void *data)
    {
      {
        ::java::io::ObjectInputFilter value((jobject) NULL);
        if (!parseArg(arg, "k", ::java::io::ObjectInputFilter::initializeClass, &value))
        {
          INT_CALL(self->object.setObjectInputFilter(value));
          return 0;
        }
      }
      PyErr_SetArgsError((PyObject *) self, "objectInputFilter", arg);
      return -1;
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/forces/gravity/NewtonianAttraction.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldVector3D.h"
#include "java/util/List.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/propagation/numerical/FieldTimeDerivativesEquations.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/hipparchus/Field.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "java/lang/String.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/orekit/propagation/numerical/TimeDerivativesEquations.h"
#include "org/orekit/forces/ForceModel.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace forces {
      namespace gravity {

        ::java::lang::Class *NewtonianAttraction::class$ = NULL;
        jmethodID *NewtonianAttraction::mids$ = NULL;
        bool NewtonianAttraction::live$ = false;
        ::java::lang::String *NewtonianAttraction::CENTRAL_ATTRACTION_COEFFICIENT = NULL;

        jclass NewtonianAttraction::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/forces/gravity/NewtonianAttraction");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_1ad26e8c8c0cd65b] = env->getMethodID(cls, "<init>", "(D)V");
            mids$[mid_acceleration_9816b8f76e94356a] = env->getMethodID(cls, "acceleration", "(Lorg/orekit/propagation/FieldSpacecraftState;[Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
            mids$[mid_acceleration_5e147f44c28a35c9] = env->getMethodID(cls, "acceleration", "(Lorg/orekit/propagation/SpacecraftState;[D)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
            mids$[mid_addContribution_05bb906f491bab6b] = env->getMethodID(cls, "addContribution", "(Lorg/orekit/propagation/FieldSpacecraftState;Lorg/orekit/propagation/numerical/FieldTimeDerivativesEquations;)V");
            mids$[mid_addContribution_2fcaaed225365615] = env->getMethodID(cls, "addContribution", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/propagation/numerical/TimeDerivativesEquations;)V");
            mids$[mid_dependsOnPositionOnly_eee3de00fe971136] = env->getMethodID(cls, "dependsOnPositionOnly", "()Z");
            mids$[mid_getMu_209f08246d708042] = env->getMethodID(cls, "getMu", "(Lorg/orekit/time/AbsoluteDate;)D");
            mids$[mid_getMu_a50c21714c368030] = env->getMethodID(cls, "getMu", "(Lorg/hipparchus/Field;Lorg/orekit/time/FieldAbsoluteDate;)Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_getParametersDrivers_d751c1a57012b438] = env->getMethodID(cls, "getParametersDrivers", "()Ljava/util/List;");

            class$ = new ::java::lang::Class(cls);
            cls = (jclass) class$->this$;

            CENTRAL_ATTRACTION_COEFFICIENT = new ::java::lang::String(env->getStaticObjectField(cls, "CENTRAL_ATTRACTION_COEFFICIENT", "Ljava/lang/String;"));
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        NewtonianAttraction::NewtonianAttraction(jdouble a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_1ad26e8c8c0cd65b, a0)) {}

        ::org::hipparchus::geometry::euclidean::threed::FieldVector3D NewtonianAttraction::acceleration(const ::org::orekit::propagation::FieldSpacecraftState & a0, const JArray< ::org::hipparchus::CalculusFieldElement > & a1) const
        {
          return ::org::hipparchus::geometry::euclidean::threed::FieldVector3D(env->callObjectMethod(this$, mids$[mid_acceleration_9816b8f76e94356a], a0.this$, a1.this$));
        }

        ::org::hipparchus::geometry::euclidean::threed::Vector3D NewtonianAttraction::acceleration(const ::org::orekit::propagation::SpacecraftState & a0, const JArray< jdouble > & a1) const
        {
          return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_acceleration_5e147f44c28a35c9], a0.this$, a1.this$));
        }

        void NewtonianAttraction::addContribution(const ::org::orekit::propagation::FieldSpacecraftState & a0, const ::org::orekit::propagation::numerical::FieldTimeDerivativesEquations & a1) const
        {
          env->callVoidMethod(this$, mids$[mid_addContribution_05bb906f491bab6b], a0.this$, a1.this$);
        }

        void NewtonianAttraction::addContribution(const ::org::orekit::propagation::SpacecraftState & a0, const ::org::orekit::propagation::numerical::TimeDerivativesEquations & a1) const
        {
          env->callVoidMethod(this$, mids$[mid_addContribution_2fcaaed225365615], a0.this$, a1.this$);
        }

        jboolean NewtonianAttraction::dependsOnPositionOnly() const
        {
          return env->callBooleanMethod(this$, mids$[mid_dependsOnPositionOnly_eee3de00fe971136]);
        }

        jdouble NewtonianAttraction::getMu(const ::org::orekit::time::AbsoluteDate & a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_getMu_209f08246d708042], a0.this$);
        }

        ::org::hipparchus::CalculusFieldElement NewtonianAttraction::getMu(const ::org::hipparchus::Field & a0, const ::org::orekit::time::FieldAbsoluteDate & a1) const
        {
          return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getMu_a50c21714c368030], a0.this$, a1.this$));
        }

        ::java::util::List NewtonianAttraction::getParametersDrivers() const
        {
          return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getParametersDrivers_d751c1a57012b438]));
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
        static PyObject *t_NewtonianAttraction_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_NewtonianAttraction_instance_(PyTypeObject *type, PyObject *arg);
        static int t_NewtonianAttraction_init_(t_NewtonianAttraction *self, PyObject *args, PyObject *kwds);
        static PyObject *t_NewtonianAttraction_acceleration(t_NewtonianAttraction *self, PyObject *args);
        static PyObject *t_NewtonianAttraction_addContribution(t_NewtonianAttraction *self, PyObject *args);
        static PyObject *t_NewtonianAttraction_dependsOnPositionOnly(t_NewtonianAttraction *self);
        static PyObject *t_NewtonianAttraction_getMu(t_NewtonianAttraction *self, PyObject *args);
        static PyObject *t_NewtonianAttraction_getParametersDrivers(t_NewtonianAttraction *self);
        static PyObject *t_NewtonianAttraction_get__parametersDrivers(t_NewtonianAttraction *self, void *data);
        static PyGetSetDef t_NewtonianAttraction__fields_[] = {
          DECLARE_GET_FIELD(t_NewtonianAttraction, parametersDrivers),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_NewtonianAttraction__methods_[] = {
          DECLARE_METHOD(t_NewtonianAttraction, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_NewtonianAttraction, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_NewtonianAttraction, acceleration, METH_VARARGS),
          DECLARE_METHOD(t_NewtonianAttraction, addContribution, METH_VARARGS),
          DECLARE_METHOD(t_NewtonianAttraction, dependsOnPositionOnly, METH_NOARGS),
          DECLARE_METHOD(t_NewtonianAttraction, getMu, METH_VARARGS),
          DECLARE_METHOD(t_NewtonianAttraction, getParametersDrivers, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(NewtonianAttraction)[] = {
          { Py_tp_methods, t_NewtonianAttraction__methods_ },
          { Py_tp_init, (void *) t_NewtonianAttraction_init_ },
          { Py_tp_getset, t_NewtonianAttraction__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(NewtonianAttraction)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(NewtonianAttraction, t_NewtonianAttraction, NewtonianAttraction);

        void t_NewtonianAttraction::install(PyObject *module)
        {
          installType(&PY_TYPE(NewtonianAttraction), &PY_TYPE_DEF(NewtonianAttraction), module, "NewtonianAttraction", 0);
        }

        void t_NewtonianAttraction::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(NewtonianAttraction), "class_", make_descriptor(NewtonianAttraction::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(NewtonianAttraction), "wrapfn_", make_descriptor(t_NewtonianAttraction::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(NewtonianAttraction), "boxfn_", make_descriptor(boxObject));
          env->getClass(NewtonianAttraction::initializeClass);
          PyObject_SetAttrString((PyObject *) PY_TYPE(NewtonianAttraction), "CENTRAL_ATTRACTION_COEFFICIENT", make_descriptor(j2p(*NewtonianAttraction::CENTRAL_ATTRACTION_COEFFICIENT)));
        }

        static PyObject *t_NewtonianAttraction_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, NewtonianAttraction::initializeClass, 1)))
            return NULL;
          return t_NewtonianAttraction::wrap_Object(NewtonianAttraction(((t_NewtonianAttraction *) arg)->object.this$));
        }
        static PyObject *t_NewtonianAttraction_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, NewtonianAttraction::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_NewtonianAttraction_init_(t_NewtonianAttraction *self, PyObject *args, PyObject *kwds)
        {
          jdouble a0;
          NewtonianAttraction object((jobject) NULL);

          if (!parseArgs(args, "D", &a0))
          {
            INT_CALL(object = NewtonianAttraction(a0));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_NewtonianAttraction_acceleration(t_NewtonianAttraction *self, PyObject *args)
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

          PyErr_SetArgsError((PyObject *) self, "acceleration", args);
          return NULL;
        }

        static PyObject *t_NewtonianAttraction_addContribution(t_NewtonianAttraction *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 2:
            {
              ::org::orekit::propagation::FieldSpacecraftState a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::orekit::propagation::numerical::FieldTimeDerivativesEquations a1((jobject) NULL);
              PyTypeObject **p1;

              if (!parseArgs(args, "KK", ::org::orekit::propagation::FieldSpacecraftState::initializeClass, ::org::orekit::propagation::numerical::FieldTimeDerivativesEquations::initializeClass, &a0, &p0, ::org::orekit::propagation::t_FieldSpacecraftState::parameters_, &a1, &p1, ::org::orekit::propagation::numerical::t_FieldTimeDerivativesEquations::parameters_))
              {
                OBJ_CALL(self->object.addContribution(a0, a1));
                Py_RETURN_NONE;
              }
            }
            {
              ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
              ::org::orekit::propagation::numerical::TimeDerivativesEquations a1((jobject) NULL);

              if (!parseArgs(args, "kk", ::org::orekit::propagation::SpacecraftState::initializeClass, ::org::orekit::propagation::numerical::TimeDerivativesEquations::initializeClass, &a0, &a1))
              {
                OBJ_CALL(self->object.addContribution(a0, a1));
                Py_RETURN_NONE;
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "addContribution", args);
          return NULL;
        }

        static PyObject *t_NewtonianAttraction_dependsOnPositionOnly(t_NewtonianAttraction *self)
        {
          jboolean result;
          OBJ_CALL(result = self->object.dependsOnPositionOnly());
          Py_RETURN_BOOL(result);
        }

        static PyObject *t_NewtonianAttraction_getMu(t_NewtonianAttraction *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
              jdouble result;

              if (!parseArgs(args, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
              {
                OBJ_CALL(result = self->object.getMu(a0));
                return PyFloat_FromDouble((double) result);
              }
            }
            break;
           case 2:
            {
              ::org::hipparchus::Field a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::orekit::time::FieldAbsoluteDate a1((jobject) NULL);
              PyTypeObject **p1;
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

              if (!parseArgs(args, "KK", ::org::hipparchus::Field::initializeClass, ::org::orekit::time::FieldAbsoluteDate::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1, &p1, ::org::orekit::time::t_FieldAbsoluteDate::parameters_))
              {
                OBJ_CALL(result = self->object.getMu(a0, a1));
                return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "getMu", args);
          return NULL;
        }

        static PyObject *t_NewtonianAttraction_getParametersDrivers(t_NewtonianAttraction *self)
        {
          ::java::util::List result((jobject) NULL);
          OBJ_CALL(result = self->object.getParametersDrivers());
          return ::java::util::t_List::wrap_Object(result, ::org::orekit::utils::PY_TYPE(ParameterDriver));
        }

        static PyObject *t_NewtonianAttraction_get__parametersDrivers(t_NewtonianAttraction *self, void *data)
        {
          ::java::util::List value((jobject) NULL);
          OBJ_CALL(value = self->object.getParametersDrivers());
          return ::java::util::t_List::wrap_Object(value);
        }
      }
    }
  }
}
