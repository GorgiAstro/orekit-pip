#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/utils/generation/XmlGenerator.h"
#include "java/io/IOException.h"
#include "java/util/List.h"
#include "java/lang/Appendable.h"
#include "org/orekit/utils/units/Unit.h"
#include "java/lang/Class.h"
#include "org/orekit/files/ccsds/utils/FileFormat.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace utils {
          namespace generation {

            ::java::lang::Class *XmlGenerator::class$ = NULL;
            jmethodID *XmlGenerator::mids$ = NULL;
            bool XmlGenerator::live$ = false;
            jint XmlGenerator::DEFAULT_INDENT = (jint) 0;
            ::java::lang::String *XmlGenerator::NDM_XML_V3_SCHEMA_LOCATION = NULL;
            ::java::lang::String *XmlGenerator::UNITS = NULL;

            jclass XmlGenerator::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/utils/generation/XmlGenerator");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_eb20efd9b3374001] = env->getMethodID(cls, "<init>", "(Ljava/lang/Appendable;ILjava/lang/String;DZLjava/lang/String;)V");
                mids$[mid_endMessage_f5ffdf29129ef90a] = env->getMethodID(cls, "endMessage", "(Ljava/lang/String;)V");
                mids$[mid_enterSection_f5ffdf29129ef90a] = env->getMethodID(cls, "enterSection", "(Ljava/lang/String;)V");
                mids$[mid_exitSection_3cffd47377eca18a] = env->getMethodID(cls, "exitSection", "()Ljava/lang/String;");
                mids$[mid_getFormat_c3a4c5f37e67a25e] = env->getMethodID(cls, "getFormat", "()Lorg/orekit/files/ccsds/utils/FileFormat;");
                mids$[mid_startMessage_9547058464ed819e] = env->getMethodID(cls, "startMessage", "(Ljava/lang/String;Ljava/lang/String;D)V");
                mids$[mid_writeComments_4ccaedadb068bdeb] = env->getMethodID(cls, "writeComments", "(Ljava/util/List;)V");
                mids$[mid_writeEntry_a717407bcf2f477f] = env->getMethodID(cls, "writeEntry", "(Ljava/lang/String;Ljava/lang/String;Lorg/orekit/utils/units/Unit;Z)V");
                mids$[mid_writeOneAttributeElement_31dd4a79e86cd8aa] = env->getMethodID(cls, "writeOneAttributeElement", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V");
                mids$[mid_writeTwoAttributesElement_7ef3cb05fa691170] = env->getMethodID(cls, "writeTwoAttributesElement", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V");

                class$ = new ::java::lang::Class(cls);
                cls = (jclass) class$->this$;

                DEFAULT_INDENT = env->getStaticIntField(cls, "DEFAULT_INDENT");
                NDM_XML_V3_SCHEMA_LOCATION = new ::java::lang::String(env->getStaticObjectField(cls, "NDM_XML_V3_SCHEMA_LOCATION", "Ljava/lang/String;"));
                UNITS = new ::java::lang::String(env->getStaticObjectField(cls, "UNITS", "Ljava/lang/String;"));
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            XmlGenerator::XmlGenerator(const ::java::lang::Appendable & a0, jint a1, const ::java::lang::String & a2, jdouble a3, jboolean a4, const ::java::lang::String & a5) : ::org::orekit::files::ccsds::utils::generation::AbstractGenerator(env->newObject(initializeClass, &mids$, mid_init$_eb20efd9b3374001, a0.this$, a1, a2.this$, a3, a4, a5.this$)) {}

            void XmlGenerator::endMessage(const ::java::lang::String & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_endMessage_f5ffdf29129ef90a], a0.this$);
            }

            void XmlGenerator::enterSection(const ::java::lang::String & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_enterSection_f5ffdf29129ef90a], a0.this$);
            }

            ::java::lang::String XmlGenerator::exitSection() const
            {
              return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_exitSection_3cffd47377eca18a]));
            }

            ::org::orekit::files::ccsds::utils::FileFormat XmlGenerator::getFormat() const
            {
              return ::org::orekit::files::ccsds::utils::FileFormat(env->callObjectMethod(this$, mids$[mid_getFormat_c3a4c5f37e67a25e]));
            }

            void XmlGenerator::startMessage(const ::java::lang::String & a0, const ::java::lang::String & a1, jdouble a2) const
            {
              env->callVoidMethod(this$, mids$[mid_startMessage_9547058464ed819e], a0.this$, a1.this$, a2);
            }

            void XmlGenerator::writeComments(const ::java::util::List & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_writeComments_4ccaedadb068bdeb], a0.this$);
            }

            void XmlGenerator::writeEntry(const ::java::lang::String & a0, const ::java::lang::String & a1, const ::org::orekit::utils::units::Unit & a2, jboolean a3) const
            {
              env->callVoidMethod(this$, mids$[mid_writeEntry_a717407bcf2f477f], a0.this$, a1.this$, a2.this$, a3);
            }

            void XmlGenerator::writeOneAttributeElement(const ::java::lang::String & a0, const ::java::lang::String & a1, const ::java::lang::String & a2, const ::java::lang::String & a3) const
            {
              env->callVoidMethod(this$, mids$[mid_writeOneAttributeElement_31dd4a79e86cd8aa], a0.this$, a1.this$, a2.this$, a3.this$);
            }

            void XmlGenerator::writeTwoAttributesElement(const ::java::lang::String & a0, const ::java::lang::String & a1, const ::java::lang::String & a2, const ::java::lang::String & a3, const ::java::lang::String & a4, const ::java::lang::String & a5) const
            {
              env->callVoidMethod(this$, mids$[mid_writeTwoAttributesElement_7ef3cb05fa691170], a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$);
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
            static PyObject *t_XmlGenerator_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_XmlGenerator_instance_(PyTypeObject *type, PyObject *arg);
            static int t_XmlGenerator_init_(t_XmlGenerator *self, PyObject *args, PyObject *kwds);
            static PyObject *t_XmlGenerator_endMessage(t_XmlGenerator *self, PyObject *args);
            static PyObject *t_XmlGenerator_enterSection(t_XmlGenerator *self, PyObject *args);
            static PyObject *t_XmlGenerator_exitSection(t_XmlGenerator *self, PyObject *args);
            static PyObject *t_XmlGenerator_getFormat(t_XmlGenerator *self, PyObject *args);
            static PyObject *t_XmlGenerator_startMessage(t_XmlGenerator *self, PyObject *args);
            static PyObject *t_XmlGenerator_writeComments(t_XmlGenerator *self, PyObject *args);
            static PyObject *t_XmlGenerator_writeEntry(t_XmlGenerator *self, PyObject *args);
            static PyObject *t_XmlGenerator_writeOneAttributeElement(t_XmlGenerator *self, PyObject *args);
            static PyObject *t_XmlGenerator_writeTwoAttributesElement(t_XmlGenerator *self, PyObject *args);
            static PyObject *t_XmlGenerator_get__format(t_XmlGenerator *self, void *data);
            static PyGetSetDef t_XmlGenerator__fields_[] = {
              DECLARE_GET_FIELD(t_XmlGenerator, format),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_XmlGenerator__methods_[] = {
              DECLARE_METHOD(t_XmlGenerator, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_XmlGenerator, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_XmlGenerator, endMessage, METH_VARARGS),
              DECLARE_METHOD(t_XmlGenerator, enterSection, METH_VARARGS),
              DECLARE_METHOD(t_XmlGenerator, exitSection, METH_VARARGS),
              DECLARE_METHOD(t_XmlGenerator, getFormat, METH_VARARGS),
              DECLARE_METHOD(t_XmlGenerator, startMessage, METH_VARARGS),
              DECLARE_METHOD(t_XmlGenerator, writeComments, METH_VARARGS),
              DECLARE_METHOD(t_XmlGenerator, writeEntry, METH_VARARGS),
              DECLARE_METHOD(t_XmlGenerator, writeOneAttributeElement, METH_VARARGS),
              DECLARE_METHOD(t_XmlGenerator, writeTwoAttributesElement, METH_VARARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(XmlGenerator)[] = {
              { Py_tp_methods, t_XmlGenerator__methods_ },
              { Py_tp_init, (void *) t_XmlGenerator_init_ },
              { Py_tp_getset, t_XmlGenerator__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(XmlGenerator)[] = {
              &PY_TYPE_DEF(::org::orekit::files::ccsds::utils::generation::AbstractGenerator),
              NULL
            };

            DEFINE_TYPE(XmlGenerator, t_XmlGenerator, XmlGenerator);

            void t_XmlGenerator::install(PyObject *module)
            {
              installType(&PY_TYPE(XmlGenerator), &PY_TYPE_DEF(XmlGenerator), module, "XmlGenerator", 0);
            }

            void t_XmlGenerator::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(XmlGenerator), "class_", make_descriptor(XmlGenerator::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(XmlGenerator), "wrapfn_", make_descriptor(t_XmlGenerator::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(XmlGenerator), "boxfn_", make_descriptor(boxObject));
              env->getClass(XmlGenerator::initializeClass);
              PyObject_SetAttrString((PyObject *) PY_TYPE(XmlGenerator), "DEFAULT_INDENT", make_descriptor(XmlGenerator::DEFAULT_INDENT));
              PyObject_SetAttrString((PyObject *) PY_TYPE(XmlGenerator), "NDM_XML_V3_SCHEMA_LOCATION", make_descriptor(j2p(*XmlGenerator::NDM_XML_V3_SCHEMA_LOCATION)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(XmlGenerator), "UNITS", make_descriptor(j2p(*XmlGenerator::UNITS)));
            }

            static PyObject *t_XmlGenerator_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, XmlGenerator::initializeClass, 1)))
                return NULL;
              return t_XmlGenerator::wrap_Object(XmlGenerator(((t_XmlGenerator *) arg)->object.this$));
            }
            static PyObject *t_XmlGenerator_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, XmlGenerator::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static int t_XmlGenerator_init_(t_XmlGenerator *self, PyObject *args, PyObject *kwds)
            {
              ::java::lang::Appendable a0((jobject) NULL);
              jint a1;
              ::java::lang::String a2((jobject) NULL);
              jdouble a3;
              jboolean a4;
              ::java::lang::String a5((jobject) NULL);
              XmlGenerator object((jobject) NULL);

              if (!parseArgs(args, "kIsDZs", ::java::lang::Appendable::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5))
              {
                INT_CALL(object = XmlGenerator(a0, a1, a2, a3, a4, a5));
                self->object = object;
              }
              else
              {
                PyErr_SetArgsError((PyObject *) self, "__init__", args);
                return -1;
              }

              return 0;
            }

            static PyObject *t_XmlGenerator_endMessage(t_XmlGenerator *self, PyObject *args)
            {
              ::java::lang::String a0((jobject) NULL);

              if (!parseArgs(args, "s", &a0))
              {
                OBJ_CALL(self->object.endMessage(a0));
                Py_RETURN_NONE;
              }

              return callSuper(PY_TYPE(XmlGenerator), (PyObject *) self, "endMessage", args, 2);
            }

            static PyObject *t_XmlGenerator_enterSection(t_XmlGenerator *self, PyObject *args)
            {
              ::java::lang::String a0((jobject) NULL);

              if (!parseArgs(args, "s", &a0))
              {
                OBJ_CALL(self->object.enterSection(a0));
                Py_RETURN_NONE;
              }

              return callSuper(PY_TYPE(XmlGenerator), (PyObject *) self, "enterSection", args, 2);
            }

            static PyObject *t_XmlGenerator_exitSection(t_XmlGenerator *self, PyObject *args)
            {
              ::java::lang::String result((jobject) NULL);

              if (!parseArgs(args, ""))
              {
                OBJ_CALL(result = self->object.exitSection());
                return j2p(result);
              }

              return callSuper(PY_TYPE(XmlGenerator), (PyObject *) self, "exitSection", args, 2);
            }

            static PyObject *t_XmlGenerator_getFormat(t_XmlGenerator *self, PyObject *args)
            {
              ::org::orekit::files::ccsds::utils::FileFormat result((jobject) NULL);

              if (!parseArgs(args, ""))
              {
                OBJ_CALL(result = self->object.getFormat());
                return ::org::orekit::files::ccsds::utils::t_FileFormat::wrap_Object(result);
              }

              return callSuper(PY_TYPE(XmlGenerator), (PyObject *) self, "getFormat", args, 2);
            }

            static PyObject *t_XmlGenerator_startMessage(t_XmlGenerator *self, PyObject *args)
            {
              ::java::lang::String a0((jobject) NULL);
              ::java::lang::String a1((jobject) NULL);
              jdouble a2;

              if (!parseArgs(args, "ssD", &a0, &a1, &a2))
              {
                OBJ_CALL(self->object.startMessage(a0, a1, a2));
                Py_RETURN_NONE;
              }

              return callSuper(PY_TYPE(XmlGenerator), (PyObject *) self, "startMessage", args, 2);
            }

            static PyObject *t_XmlGenerator_writeComments(t_XmlGenerator *self, PyObject *args)
            {
              ::java::util::List a0((jobject) NULL);
              PyTypeObject **p0;

              if (!parseArgs(args, "K", ::java::util::List::initializeClass, &a0, &p0, ::java::util::t_List::parameters_))
              {
                OBJ_CALL(self->object.writeComments(a0));
                Py_RETURN_NONE;
              }

              return callSuper(PY_TYPE(XmlGenerator), (PyObject *) self, "writeComments", args, 2);
            }

            static PyObject *t_XmlGenerator_writeEntry(t_XmlGenerator *self, PyObject *args)
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

              return callSuper(PY_TYPE(XmlGenerator), (PyObject *) self, "writeEntry", args, 2);
            }

            static PyObject *t_XmlGenerator_writeOneAttributeElement(t_XmlGenerator *self, PyObject *args)
            {
              ::java::lang::String a0((jobject) NULL);
              ::java::lang::String a1((jobject) NULL);
              ::java::lang::String a2((jobject) NULL);
              ::java::lang::String a3((jobject) NULL);

              if (!parseArgs(args, "ssss", &a0, &a1, &a2, &a3))
              {
                OBJ_CALL(self->object.writeOneAttributeElement(a0, a1, a2, a3));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "writeOneAttributeElement", args);
              return NULL;
            }

            static PyObject *t_XmlGenerator_writeTwoAttributesElement(t_XmlGenerator *self, PyObject *args)
            {
              ::java::lang::String a0((jobject) NULL);
              ::java::lang::String a1((jobject) NULL);
              ::java::lang::String a2((jobject) NULL);
              ::java::lang::String a3((jobject) NULL);
              ::java::lang::String a4((jobject) NULL);
              ::java::lang::String a5((jobject) NULL);

              if (!parseArgs(args, "ssssss", &a0, &a1, &a2, &a3, &a4, &a5))
              {
                OBJ_CALL(self->object.writeTwoAttributesElement(a0, a1, a2, a3, a4, a5));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "writeTwoAttributesElement", args);
              return NULL;
            }

            static PyObject *t_XmlGenerator_get__format(t_XmlGenerator *self, void *data)
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
#include "org/orekit/geometry/fov/PythonAbstractFieldOfView.h"
#include "java/util/List.h"
#include "java/lang/Throwable.h"
#include "org/orekit/frames/Transform.h"
#include "org/orekit/bodies/GeodeticPoint.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "java/lang/Class.h"
#include "org/orekit/bodies/OneAxisEllipsoid.h"
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
            mids$[mid_init$_10f281d777284cea] = env->getMethodID(cls, "<init>", "(D)V");
            mids$[mid_finalize_0640e6acf969ed28] = env->getMethodID(cls, "finalize", "()V");
            mids$[mid_getFootprint_37f5cab3ae6d781a] = env->getMethodID(cls, "getFootprint", "(Lorg/orekit/frames/Transform;Lorg/orekit/bodies/OneAxisEllipsoid;D)Ljava/util/List;");
            mids$[mid_offsetFromBoundary_d0bb3aecf00cc465] = env->getMethodID(cls, "offsetFromBoundary", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;DLorg/orekit/propagation/events/VisibilityTrigger;)D");
            mids$[mid_projectToBoundary_b48aa9aef740fa79] = env->getMethodID(cls, "projectToBoundary", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
            mids$[mid_pythonDecRef_0640e6acf969ed28] = env->getMethodID(cls, "pythonDecRef", "()V");
            mids$[mid_pythonExtension_9e26256fb0d384a2] = env->getMethodID(cls, "pythonExtension", "()J");
            mids$[mid_pythonExtension_3cd6a6b354c6aa22] = env->getMethodID(cls, "pythonExtension", "(J)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        PythonAbstractFieldOfView::PythonAbstractFieldOfView(jdouble a0) : ::org::orekit::geometry::fov::AbstractFieldOfView(env->newObject(initializeClass, &mids$, mid_init$_10f281d777284cea, a0)) {}

        void PythonAbstractFieldOfView::finalize() const
        {
          env->callVoidMethod(this$, mids$[mid_finalize_0640e6acf969ed28]);
        }

        jlong PythonAbstractFieldOfView::pythonExtension() const
        {
          return env->callLongMethod(this$, mids$[mid_pythonExtension_9e26256fb0d384a2]);
        }

        void PythonAbstractFieldOfView::pythonExtension(jlong a0) const
        {
          env->callVoidMethod(this$, mids$[mid_pythonExtension_3cd6a6b354c6aa22], a0);
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
          jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractFieldOfView::mids$[PythonAbstractFieldOfView::mid_pythonExtension_9e26256fb0d384a2]);
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
          jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractFieldOfView::mids$[PythonAbstractFieldOfView::mid_pythonExtension_9e26256fb0d384a2]);
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
          jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractFieldOfView::mids$[PythonAbstractFieldOfView::mid_pythonExtension_9e26256fb0d384a2]);
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
          jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractFieldOfView::mids$[PythonAbstractFieldOfView::mid_pythonExtension_9e26256fb0d384a2]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

          if (obj != NULL)
          {
            jenv->CallVoidMethod(jobj, PythonAbstractFieldOfView::mids$[PythonAbstractFieldOfView::mid_pythonExtension_3cd6a6b354c6aa22], (jlong) 0);
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
#include "org/orekit/bodies/CelestialBodyLoader.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "org/orekit/bodies/CelestialBody.h"
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
          mids$[mid_loadCelestialBody_47d89fc2b3d16fd5] = env->getMethodID(cls, "loadCelestialBody", "(Ljava/lang/String;)Lorg/orekit/bodies/CelestialBody;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ::org::orekit::bodies::CelestialBody CelestialBodyLoader::loadCelestialBody(const ::java::lang::String & a0) const
      {
        return ::org::orekit::bodies::CelestialBody(env->callObjectMethod(this$, mids$[mid_loadCelestialBody_47d89fc2b3d16fd5], a0.this$));
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
#include "org/orekit/propagation/semianalytical/dsst/utilities/FieldFixedNumberInterpolationGrid.h"
#include "org/orekit/propagation/semianalytical/dsst/utilities/FieldInterpolationGrid.h"
#include "java/lang/Class.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/hipparchus/Field.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace semianalytical {
        namespace dsst {
          namespace utilities {

            ::java::lang::Class *FieldFixedNumberInterpolationGrid::class$ = NULL;
            jmethodID *FieldFixedNumberInterpolationGrid::mids$ = NULL;
            bool FieldFixedNumberInterpolationGrid::live$ = false;

            jclass FieldFixedNumberInterpolationGrid::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/propagation/semianalytical/dsst/utilities/FieldFixedNumberInterpolationGrid");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_f89bf3117923cd08] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/Field;I)V");
                mids$[mid_getGridPoints_4a8c729a6fb08a74] = env->getMethodID(cls, "getGridPoints", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;)[Lorg/hipparchus/CalculusFieldElement;");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            FieldFixedNumberInterpolationGrid::FieldFixedNumberInterpolationGrid(const ::org::hipparchus::Field & a0, jint a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_f89bf3117923cd08, a0.this$, a1)) {}

            JArray< ::org::hipparchus::CalculusFieldElement > FieldFixedNumberInterpolationGrid::getGridPoints(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::hipparchus::CalculusFieldElement & a1) const
            {
              return JArray< ::org::hipparchus::CalculusFieldElement >(env->callObjectMethod(this$, mids$[mid_getGridPoints_4a8c729a6fb08a74], a0.this$, a1.this$));
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
            static PyObject *t_FieldFixedNumberInterpolationGrid_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_FieldFixedNumberInterpolationGrid_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_FieldFixedNumberInterpolationGrid_of_(t_FieldFixedNumberInterpolationGrid *self, PyObject *args);
            static int t_FieldFixedNumberInterpolationGrid_init_(t_FieldFixedNumberInterpolationGrid *self, PyObject *args, PyObject *kwds);
            static PyObject *t_FieldFixedNumberInterpolationGrid_getGridPoints(t_FieldFixedNumberInterpolationGrid *self, PyObject *args);
            static PyObject *t_FieldFixedNumberInterpolationGrid_get__parameters_(t_FieldFixedNumberInterpolationGrid *self, void *data);
            static PyGetSetDef t_FieldFixedNumberInterpolationGrid__fields_[] = {
              DECLARE_GET_FIELD(t_FieldFixedNumberInterpolationGrid, parameters_),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_FieldFixedNumberInterpolationGrid__methods_[] = {
              DECLARE_METHOD(t_FieldFixedNumberInterpolationGrid, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_FieldFixedNumberInterpolationGrid, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_FieldFixedNumberInterpolationGrid, of_, METH_VARARGS),
              DECLARE_METHOD(t_FieldFixedNumberInterpolationGrid, getGridPoints, METH_VARARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(FieldFixedNumberInterpolationGrid)[] = {
              { Py_tp_methods, t_FieldFixedNumberInterpolationGrid__methods_ },
              { Py_tp_init, (void *) t_FieldFixedNumberInterpolationGrid_init_ },
              { Py_tp_getset, t_FieldFixedNumberInterpolationGrid__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(FieldFixedNumberInterpolationGrid)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(FieldFixedNumberInterpolationGrid, t_FieldFixedNumberInterpolationGrid, FieldFixedNumberInterpolationGrid);
            PyObject *t_FieldFixedNumberInterpolationGrid::wrap_Object(const FieldFixedNumberInterpolationGrid& object, PyTypeObject *p0)
            {
              PyObject *obj = t_FieldFixedNumberInterpolationGrid::wrap_Object(object);
              if (obj != NULL && obj != Py_None)
              {
                t_FieldFixedNumberInterpolationGrid *self = (t_FieldFixedNumberInterpolationGrid *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            PyObject *t_FieldFixedNumberInterpolationGrid::wrap_jobject(const jobject& object, PyTypeObject *p0)
            {
              PyObject *obj = t_FieldFixedNumberInterpolationGrid::wrap_jobject(object);
              if (obj != NULL && obj != Py_None)
              {
                t_FieldFixedNumberInterpolationGrid *self = (t_FieldFixedNumberInterpolationGrid *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            void t_FieldFixedNumberInterpolationGrid::install(PyObject *module)
            {
              installType(&PY_TYPE(FieldFixedNumberInterpolationGrid), &PY_TYPE_DEF(FieldFixedNumberInterpolationGrid), module, "FieldFixedNumberInterpolationGrid", 0);
            }

            void t_FieldFixedNumberInterpolationGrid::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(FieldFixedNumberInterpolationGrid), "class_", make_descriptor(FieldFixedNumberInterpolationGrid::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(FieldFixedNumberInterpolationGrid), "wrapfn_", make_descriptor(t_FieldFixedNumberInterpolationGrid::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(FieldFixedNumberInterpolationGrid), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_FieldFixedNumberInterpolationGrid_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, FieldFixedNumberInterpolationGrid::initializeClass, 1)))
                return NULL;
              return t_FieldFixedNumberInterpolationGrid::wrap_Object(FieldFixedNumberInterpolationGrid(((t_FieldFixedNumberInterpolationGrid *) arg)->object.this$));
            }
            static PyObject *t_FieldFixedNumberInterpolationGrid_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, FieldFixedNumberInterpolationGrid::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_FieldFixedNumberInterpolationGrid_of_(t_FieldFixedNumberInterpolationGrid *self, PyObject *args)
            {
              if (!parseArg(args, "T", 1, &(self->parameters)))
                Py_RETURN_SELF;
              return PyErr_SetArgsError((PyObject *) self, "of_", args);
            }

            static int t_FieldFixedNumberInterpolationGrid_init_(t_FieldFixedNumberInterpolationGrid *self, PyObject *args, PyObject *kwds)
            {
              ::org::hipparchus::Field a0((jobject) NULL);
              PyTypeObject **p0;
              jint a1;
              FieldFixedNumberInterpolationGrid object((jobject) NULL);

              if (!parseArgs(args, "KI", ::org::hipparchus::Field::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1))
              {
                INT_CALL(object = FieldFixedNumberInterpolationGrid(a0, a1));
                self->object = object;
              }
              else
              {
                PyErr_SetArgsError((PyObject *) self, "__init__", args);
                return -1;
              }

              return 0;
            }

            static PyObject *t_FieldFixedNumberInterpolationGrid_getGridPoints(t_FieldFixedNumberInterpolationGrid *self, PyObject *args)
            {
              ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
              PyTypeObject **p1;
              JArray< ::org::hipparchus::CalculusFieldElement > result((jobject) NULL);

              if (!parseArgs(args, "KK", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_))
              {
                OBJ_CALL(result = self->object.getGridPoints(a0, a1));
                return JArray<jobject>(result.this$).wrap(::org::hipparchus::t_CalculusFieldElement::wrap_jobject);
              }

              PyErr_SetArgsError((PyObject *) self, "getGridPoints", args);
              return NULL;
            }
            static PyObject *t_FieldFixedNumberInterpolationGrid_get__parameters_(t_FieldFixedNumberInterpolationGrid *self, void *data)
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
#include "org/orekit/ssa/collision/shorttermencounter/probability/twod/Alfriend1999.h"
#include "java/lang/Class.h"
#include "org/orekit/ssa/collision/shorttermencounter/probability/twod/ShortTermEncounter2DPOCMethodType.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace ssa {
      namespace collision {
        namespace shorttermencounter {
          namespace probability {
            namespace twod {

              ::java::lang::Class *Alfriend1999::class$ = NULL;
              jmethodID *Alfriend1999::mids$ = NULL;
              bool Alfriend1999::live$ = false;

              jclass Alfriend1999::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/ssa/collision/shorttermencounter/probability/twod/Alfriend1999");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_init$_0640e6acf969ed28] = env->getMethodID(cls, "<init>", "()V");
                  mids$[mid_getType_4b8bf2bb84f7480e] = env->getMethodID(cls, "getType", "()Lorg/orekit/ssa/collision/shorttermencounter/probability/twod/ShortTermEncounter2DPOCMethodType;");
                  mids$[mid_isAMaximumProbabilityOfCollisionMethod_89b302893bdbe1f1] = env->getMethodID(cls, "isAMaximumProbabilityOfCollisionMethod", "()Z");

                  class$ = new ::java::lang::Class(cls);
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              Alfriend1999::Alfriend1999() : ::org::orekit::ssa::collision::shorttermencounter::probability::twod::AbstractAlfriend1999(env->newObject(initializeClass, &mids$, mid_init$_0640e6acf969ed28)) {}

              ::org::orekit::ssa::collision::shorttermencounter::probability::twod::ShortTermEncounter2DPOCMethodType Alfriend1999::getType() const
              {
                return ::org::orekit::ssa::collision::shorttermencounter::probability::twod::ShortTermEncounter2DPOCMethodType(env->callObjectMethod(this$, mids$[mid_getType_4b8bf2bb84f7480e]));
              }

              jboolean Alfriend1999::isAMaximumProbabilityOfCollisionMethod() const
              {
                return env->callBooleanMethod(this$, mids$[mid_isAMaximumProbabilityOfCollisionMethod_89b302893bdbe1f1]);
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
              static PyObject *t_Alfriend1999_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_Alfriend1999_instance_(PyTypeObject *type, PyObject *arg);
              static int t_Alfriend1999_init_(t_Alfriend1999 *self, PyObject *args, PyObject *kwds);
              static PyObject *t_Alfriend1999_getType(t_Alfriend1999 *self, PyObject *args);
              static PyObject *t_Alfriend1999_isAMaximumProbabilityOfCollisionMethod(t_Alfriend1999 *self, PyObject *args);
              static PyObject *t_Alfriend1999_get__aMaximumProbabilityOfCollisionMethod(t_Alfriend1999 *self, void *data);
              static PyObject *t_Alfriend1999_get__type(t_Alfriend1999 *self, void *data);
              static PyGetSetDef t_Alfriend1999__fields_[] = {
                DECLARE_GET_FIELD(t_Alfriend1999, aMaximumProbabilityOfCollisionMethod),
                DECLARE_GET_FIELD(t_Alfriend1999, type),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_Alfriend1999__methods_[] = {
                DECLARE_METHOD(t_Alfriend1999, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_Alfriend1999, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_Alfriend1999, getType, METH_VARARGS),
                DECLARE_METHOD(t_Alfriend1999, isAMaximumProbabilityOfCollisionMethod, METH_VARARGS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(Alfriend1999)[] = {
                { Py_tp_methods, t_Alfriend1999__methods_ },
                { Py_tp_init, (void *) t_Alfriend1999_init_ },
                { Py_tp_getset, t_Alfriend1999__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(Alfriend1999)[] = {
                &PY_TYPE_DEF(::org::orekit::ssa::collision::shorttermencounter::probability::twod::AbstractAlfriend1999),
                NULL
              };

              DEFINE_TYPE(Alfriend1999, t_Alfriend1999, Alfriend1999);

              void t_Alfriend1999::install(PyObject *module)
              {
                installType(&PY_TYPE(Alfriend1999), &PY_TYPE_DEF(Alfriend1999), module, "Alfriend1999", 0);
              }

              void t_Alfriend1999::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(Alfriend1999), "class_", make_descriptor(Alfriend1999::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(Alfriend1999), "wrapfn_", make_descriptor(t_Alfriend1999::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(Alfriend1999), "boxfn_", make_descriptor(boxObject));
              }

              static PyObject *t_Alfriend1999_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, Alfriend1999::initializeClass, 1)))
                  return NULL;
                return t_Alfriend1999::wrap_Object(Alfriend1999(((t_Alfriend1999 *) arg)->object.this$));
              }
              static PyObject *t_Alfriend1999_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, Alfriend1999::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static int t_Alfriend1999_init_(t_Alfriend1999 *self, PyObject *args, PyObject *kwds)
              {
                Alfriend1999 object((jobject) NULL);

                INT_CALL(object = Alfriend1999());
                self->object = object;

                return 0;
              }

              static PyObject *t_Alfriend1999_getType(t_Alfriend1999 *self, PyObject *args)
              {
                ::org::orekit::ssa::collision::shorttermencounter::probability::twod::ShortTermEncounter2DPOCMethodType result((jobject) NULL);

                if (!parseArgs(args, ""))
                {
                  OBJ_CALL(result = self->object.getType());
                  return ::org::orekit::ssa::collision::shorttermencounter::probability::twod::t_ShortTermEncounter2DPOCMethodType::wrap_Object(result);
                }

                return callSuper(PY_TYPE(Alfriend1999), (PyObject *) self, "getType", args, 2);
              }

              static PyObject *t_Alfriend1999_isAMaximumProbabilityOfCollisionMethod(t_Alfriend1999 *self, PyObject *args)
              {
                jboolean result;

                if (!parseArgs(args, ""))
                {
                  OBJ_CALL(result = self->object.isAMaximumProbabilityOfCollisionMethod());
                  Py_RETURN_BOOL(result);
                }

                return callSuper(PY_TYPE(Alfriend1999), (PyObject *) self, "isAMaximumProbabilityOfCollisionMethod", args, 2);
              }

              static PyObject *t_Alfriend1999_get__aMaximumProbabilityOfCollisionMethod(t_Alfriend1999 *self, void *data)
              {
                jboolean value;
                OBJ_CALL(value = self->object.isAMaximumProbabilityOfCollisionMethod());
                Py_RETURN_BOOL(value);
              }

              static PyObject *t_Alfriend1999_get__type(t_Alfriend1999 *self, void *data)
              {
                ::org::orekit::ssa::collision::shorttermencounter::probability::twod::ShortTermEncounter2DPOCMethodType value((jobject) NULL);
                OBJ_CALL(value = self->object.getType());
                return ::org::orekit::ssa::collision::shorttermencounter::probability::twod::t_ShortTermEncounter2DPOCMethodType::wrap_Object(value);
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
#include "org/hipparchus/util/CombinatoricsUtils.h"
#include "java/util/Iterator.h"
#include "java/util/List.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "org/hipparchus/exception/MathRuntimeException.h"
#include "java/lang/Class.h"
#include "java/util/stream/Stream.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace util {

      ::java::lang::Class *CombinatoricsUtils::class$ = NULL;
      jmethodID *CombinatoricsUtils::mids$ = NULL;
      bool CombinatoricsUtils::live$ = false;
      jint CombinatoricsUtils::MAX_BELL = (jint) 0;

      jclass CombinatoricsUtils::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/util/CombinatoricsUtils");

          mids$ = new jmethodID[max_mid];
          mids$[mid_bellNumber_4f6383d3e31ab417] = env->getStaticMethodID(cls, "bellNumber", "(I)J");
          mids$[mid_binomialCoefficient_1fba9172e7658368] = env->getStaticMethodID(cls, "binomialCoefficient", "(II)J");
          mids$[mid_binomialCoefficientDouble_21b81d54c06b64b0] = env->getStaticMethodID(cls, "binomialCoefficientDouble", "(II)D");
          mids$[mid_binomialCoefficientLog_21b81d54c06b64b0] = env->getStaticMethodID(cls, "binomialCoefficientLog", "(II)D");
          mids$[mid_checkBinomial_a84c9a223722150c] = env->getStaticMethodID(cls, "checkBinomial", "(II)V");
          mids$[mid_combinationsIterator_cbfaf52b19a80000] = env->getStaticMethodID(cls, "combinationsIterator", "(II)Ljava/util/Iterator;");
          mids$[mid_factorial_4f6383d3e31ab417] = env->getStaticMethodID(cls, "factorial", "(I)J");
          mids$[mid_factorialDouble_69cfb132c661aca4] = env->getStaticMethodID(cls, "factorialDouble", "(I)D");
          mids$[mid_factorialLog_69cfb132c661aca4] = env->getStaticMethodID(cls, "factorialLog", "(I)D");
          mids$[mid_partitions_525f259082364af5] = env->getStaticMethodID(cls, "partitions", "(Ljava/util/List;)Ljava/util/stream/Stream;");
          mids$[mid_permutations_525f259082364af5] = env->getStaticMethodID(cls, "permutations", "(Ljava/util/List;)Ljava/util/stream/Stream;");
          mids$[mid_stirlingS2_1fba9172e7658368] = env->getStaticMethodID(cls, "stirlingS2", "(II)J");

          class$ = new ::java::lang::Class(cls);
          cls = (jclass) class$->this$;

          MAX_BELL = env->getStaticIntField(cls, "MAX_BELL");
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      jlong CombinatoricsUtils::bellNumber(jint a0)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticLongMethod(cls, mids$[mid_bellNumber_4f6383d3e31ab417], a0);
      }

      jlong CombinatoricsUtils::binomialCoefficient(jint a0, jint a1)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticLongMethod(cls, mids$[mid_binomialCoefficient_1fba9172e7658368], a0, a1);
      }

      jdouble CombinatoricsUtils::binomialCoefficientDouble(jint a0, jint a1)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticDoubleMethod(cls, mids$[mid_binomialCoefficientDouble_21b81d54c06b64b0], a0, a1);
      }

      jdouble CombinatoricsUtils::binomialCoefficientLog(jint a0, jint a1)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticDoubleMethod(cls, mids$[mid_binomialCoefficientLog_21b81d54c06b64b0], a0, a1);
      }

      void CombinatoricsUtils::checkBinomial(jint a0, jint a1)
      {
        jclass cls = env->getClass(initializeClass);
        env->callStaticVoidMethod(cls, mids$[mid_checkBinomial_a84c9a223722150c], a0, a1);
      }

      ::java::util::Iterator CombinatoricsUtils::combinationsIterator(jint a0, jint a1)
      {
        jclass cls = env->getClass(initializeClass);
        return ::java::util::Iterator(env->callStaticObjectMethod(cls, mids$[mid_combinationsIterator_cbfaf52b19a80000], a0, a1));
      }

      jlong CombinatoricsUtils::factorial(jint a0)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticLongMethod(cls, mids$[mid_factorial_4f6383d3e31ab417], a0);
      }

      jdouble CombinatoricsUtils::factorialDouble(jint a0)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticDoubleMethod(cls, mids$[mid_factorialDouble_69cfb132c661aca4], a0);
      }

      jdouble CombinatoricsUtils::factorialLog(jint a0)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticDoubleMethod(cls, mids$[mid_factorialLog_69cfb132c661aca4], a0);
      }

      ::java::util::stream::Stream CombinatoricsUtils::partitions(const ::java::util::List & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return ::java::util::stream::Stream(env->callStaticObjectMethod(cls, mids$[mid_partitions_525f259082364af5], a0.this$));
      }

      ::java::util::stream::Stream CombinatoricsUtils::permutations(const ::java::util::List & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return ::java::util::stream::Stream(env->callStaticObjectMethod(cls, mids$[mid_permutations_525f259082364af5], a0.this$));
      }

      jlong CombinatoricsUtils::stirlingS2(jint a0, jint a1)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticLongMethod(cls, mids$[mid_stirlingS2_1fba9172e7658368], a0, a1);
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"
#include "org/hipparchus/util/CombinatoricsUtils$FactorialLog.h"

namespace org {
  namespace hipparchus {
    namespace util {
      static PyObject *t_CombinatoricsUtils_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_CombinatoricsUtils_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_CombinatoricsUtils_bellNumber(PyTypeObject *type, PyObject *arg);
      static PyObject *t_CombinatoricsUtils_binomialCoefficient(PyTypeObject *type, PyObject *args);
      static PyObject *t_CombinatoricsUtils_binomialCoefficientDouble(PyTypeObject *type, PyObject *args);
      static PyObject *t_CombinatoricsUtils_binomialCoefficientLog(PyTypeObject *type, PyObject *args);
      static PyObject *t_CombinatoricsUtils_checkBinomial(PyTypeObject *type, PyObject *args);
      static PyObject *t_CombinatoricsUtils_combinationsIterator(PyTypeObject *type, PyObject *args);
      static PyObject *t_CombinatoricsUtils_factorial(PyTypeObject *type, PyObject *arg);
      static PyObject *t_CombinatoricsUtils_factorialDouble(PyTypeObject *type, PyObject *arg);
      static PyObject *t_CombinatoricsUtils_factorialLog(PyTypeObject *type, PyObject *arg);
      static PyObject *t_CombinatoricsUtils_partitions(PyTypeObject *type, PyObject *arg);
      static PyObject *t_CombinatoricsUtils_permutations(PyTypeObject *type, PyObject *arg);
      static PyObject *t_CombinatoricsUtils_stirlingS2(PyTypeObject *type, PyObject *args);

      static PyMethodDef t_CombinatoricsUtils__methods_[] = {
        DECLARE_METHOD(t_CombinatoricsUtils, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_CombinatoricsUtils, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_CombinatoricsUtils, bellNumber, METH_O | METH_CLASS),
        DECLARE_METHOD(t_CombinatoricsUtils, binomialCoefficient, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_CombinatoricsUtils, binomialCoefficientDouble, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_CombinatoricsUtils, binomialCoefficientLog, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_CombinatoricsUtils, checkBinomial, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_CombinatoricsUtils, combinationsIterator, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_CombinatoricsUtils, factorial, METH_O | METH_CLASS),
        DECLARE_METHOD(t_CombinatoricsUtils, factorialDouble, METH_O | METH_CLASS),
        DECLARE_METHOD(t_CombinatoricsUtils, factorialLog, METH_O | METH_CLASS),
        DECLARE_METHOD(t_CombinatoricsUtils, partitions, METH_O | METH_CLASS),
        DECLARE_METHOD(t_CombinatoricsUtils, permutations, METH_O | METH_CLASS),
        DECLARE_METHOD(t_CombinatoricsUtils, stirlingS2, METH_VARARGS | METH_CLASS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(CombinatoricsUtils)[] = {
        { Py_tp_methods, t_CombinatoricsUtils__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(CombinatoricsUtils)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(CombinatoricsUtils, t_CombinatoricsUtils, CombinatoricsUtils);

      void t_CombinatoricsUtils::install(PyObject *module)
      {
        installType(&PY_TYPE(CombinatoricsUtils), &PY_TYPE_DEF(CombinatoricsUtils), module, "CombinatoricsUtils", 0);
        PyObject_SetAttrString((PyObject *) PY_TYPE(CombinatoricsUtils), "FactorialLog", make_descriptor(&PY_TYPE_DEF(CombinatoricsUtils$FactorialLog)));
      }

      void t_CombinatoricsUtils::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(CombinatoricsUtils), "class_", make_descriptor(CombinatoricsUtils::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(CombinatoricsUtils), "wrapfn_", make_descriptor(t_CombinatoricsUtils::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(CombinatoricsUtils), "boxfn_", make_descriptor(boxObject));
        env->getClass(CombinatoricsUtils::initializeClass);
        PyObject_SetAttrString((PyObject *) PY_TYPE(CombinatoricsUtils), "MAX_BELL", make_descriptor(CombinatoricsUtils::MAX_BELL));
      }

      static PyObject *t_CombinatoricsUtils_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, CombinatoricsUtils::initializeClass, 1)))
          return NULL;
        return t_CombinatoricsUtils::wrap_Object(CombinatoricsUtils(((t_CombinatoricsUtils *) arg)->object.this$));
      }
      static PyObject *t_CombinatoricsUtils_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, CombinatoricsUtils::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_CombinatoricsUtils_bellNumber(PyTypeObject *type, PyObject *arg)
      {
        jint a0;
        jlong result;

        if (!parseArg(arg, "I", &a0))
        {
          OBJ_CALL(result = ::org::hipparchus::util::CombinatoricsUtils::bellNumber(a0));
          return PyLong_FromLongLong((PY_LONG_LONG) result);
        }

        PyErr_SetArgsError(type, "bellNumber", arg);
        return NULL;
      }

      static PyObject *t_CombinatoricsUtils_binomialCoefficient(PyTypeObject *type, PyObject *args)
      {
        jint a0;
        jint a1;
        jlong result;

        if (!parseArgs(args, "II", &a0, &a1))
        {
          OBJ_CALL(result = ::org::hipparchus::util::CombinatoricsUtils::binomialCoefficient(a0, a1));
          return PyLong_FromLongLong((PY_LONG_LONG) result);
        }

        PyErr_SetArgsError(type, "binomialCoefficient", args);
        return NULL;
      }

      static PyObject *t_CombinatoricsUtils_binomialCoefficientDouble(PyTypeObject *type, PyObject *args)
      {
        jint a0;
        jint a1;
        jdouble result;

        if (!parseArgs(args, "II", &a0, &a1))
        {
          OBJ_CALL(result = ::org::hipparchus::util::CombinatoricsUtils::binomialCoefficientDouble(a0, a1));
          return PyFloat_FromDouble((double) result);
        }

        PyErr_SetArgsError(type, "binomialCoefficientDouble", args);
        return NULL;
      }

      static PyObject *t_CombinatoricsUtils_binomialCoefficientLog(PyTypeObject *type, PyObject *args)
      {
        jint a0;
        jint a1;
        jdouble result;

        if (!parseArgs(args, "II", &a0, &a1))
        {
          OBJ_CALL(result = ::org::hipparchus::util::CombinatoricsUtils::binomialCoefficientLog(a0, a1));
          return PyFloat_FromDouble((double) result);
        }

        PyErr_SetArgsError(type, "binomialCoefficientLog", args);
        return NULL;
      }

      static PyObject *t_CombinatoricsUtils_checkBinomial(PyTypeObject *type, PyObject *args)
      {
        jint a0;
        jint a1;

        if (!parseArgs(args, "II", &a0, &a1))
        {
          OBJ_CALL(::org::hipparchus::util::CombinatoricsUtils::checkBinomial(a0, a1));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError(type, "checkBinomial", args);
        return NULL;
      }

      static PyObject *t_CombinatoricsUtils_combinationsIterator(PyTypeObject *type, PyObject *args)
      {
        jint a0;
        jint a1;
        ::java::util::Iterator result((jobject) NULL);

        if (!parseArgs(args, "II", &a0, &a1))
        {
          OBJ_CALL(result = ::org::hipparchus::util::CombinatoricsUtils::combinationsIterator(a0, a1));
          return ::java::util::t_Iterator::wrap_Object(result, ::java::lang::PY_TYPE(Object));
        }

        PyErr_SetArgsError(type, "combinationsIterator", args);
        return NULL;
      }

      static PyObject *t_CombinatoricsUtils_factorial(PyTypeObject *type, PyObject *arg)
      {
        jint a0;
        jlong result;

        if (!parseArg(arg, "I", &a0))
        {
          OBJ_CALL(result = ::org::hipparchus::util::CombinatoricsUtils::factorial(a0));
          return PyLong_FromLongLong((PY_LONG_LONG) result);
        }

        PyErr_SetArgsError(type, "factorial", arg);
        return NULL;
      }

      static PyObject *t_CombinatoricsUtils_factorialDouble(PyTypeObject *type, PyObject *arg)
      {
        jint a0;
        jdouble result;

        if (!parseArg(arg, "I", &a0))
        {
          OBJ_CALL(result = ::org::hipparchus::util::CombinatoricsUtils::factorialDouble(a0));
          return PyFloat_FromDouble((double) result);
        }

        PyErr_SetArgsError(type, "factorialDouble", arg);
        return NULL;
      }

      static PyObject *t_CombinatoricsUtils_factorialLog(PyTypeObject *type, PyObject *arg)
      {
        jint a0;
        jdouble result;

        if (!parseArg(arg, "I", &a0))
        {
          OBJ_CALL(result = ::org::hipparchus::util::CombinatoricsUtils::factorialLog(a0));
          return PyFloat_FromDouble((double) result);
        }

        PyErr_SetArgsError(type, "factorialLog", arg);
        return NULL;
      }

      static PyObject *t_CombinatoricsUtils_partitions(PyTypeObject *type, PyObject *arg)
      {
        ::java::util::List a0((jobject) NULL);
        PyTypeObject **p0;
        ::java::util::stream::Stream result((jobject) NULL);

        if (!parseArg(arg, "K", ::java::util::List::initializeClass, &a0, &p0, ::java::util::t_List::parameters_))
        {
          OBJ_CALL(result = ::org::hipparchus::util::CombinatoricsUtils::partitions(a0));
          return ::java::util::stream::t_Stream::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "partitions", arg);
        return NULL;
      }

      static PyObject *t_CombinatoricsUtils_permutations(PyTypeObject *type, PyObject *arg)
      {
        ::java::util::List a0((jobject) NULL);
        PyTypeObject **p0;
        ::java::util::stream::Stream result((jobject) NULL);

        if (!parseArg(arg, "K", ::java::util::List::initializeClass, &a0, &p0, ::java::util::t_List::parameters_))
        {
          OBJ_CALL(result = ::org::hipparchus::util::CombinatoricsUtils::permutations(a0));
          return ::java::util::stream::t_Stream::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "permutations", arg);
        return NULL;
      }

      static PyObject *t_CombinatoricsUtils_stirlingS2(PyTypeObject *type, PyObject *args)
      {
        jint a0;
        jint a1;
        jlong result;

        if (!parseArgs(args, "II", &a0, &a1))
        {
          OBJ_CALL(result = ::org::hipparchus::util::CombinatoricsUtils::stirlingS2(a0, a1));
          return PyLong_FromLongLong((PY_LONG_LONG) result);
        }

        PyErr_SetArgsError(type, "stirlingS2", args);
        return NULL;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/Field.h"
#include "org/hipparchus/FieldElement.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {

    ::java::lang::Class *Field::class$ = NULL;
    jmethodID *Field::mids$ = NULL;
    bool Field::live$ = false;

    jclass Field::initializeClass(bool getOnly)
    {
      if (getOnly)
        return (jclass) (live$ ? class$->this$ : NULL);
      if (class$ == NULL)
      {
        jclass cls = (jclass) env->findClass("org/hipparchus/Field");

        mids$ = new jmethodID[max_mid];
        mids$[mid_getOne_ce0470d468f80a56] = env->getMethodID(cls, "getOne", "()Lorg/hipparchus/FieldElement;");
        mids$[mid_getRuntimeClass_d4b191ff8147475d] = env->getMethodID(cls, "getRuntimeClass", "()Ljava/lang/Class;");
        mids$[mid_getZero_ce0470d468f80a56] = env->getMethodID(cls, "getZero", "()Lorg/hipparchus/FieldElement;");

        class$ = new ::java::lang::Class(cls);
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    ::org::hipparchus::FieldElement Field::getOne() const
    {
      return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_getOne_ce0470d468f80a56]));
    }

    ::java::lang::Class Field::getRuntimeClass() const
    {
      return ::java::lang::Class(env->callObjectMethod(this$, mids$[mid_getRuntimeClass_d4b191ff8147475d]));
    }

    ::org::hipparchus::FieldElement Field::getZero() const
    {
      return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_getZero_ce0470d468f80a56]));
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace hipparchus {
    static PyObject *t_Field_cast_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Field_instance_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Field_of_(t_Field *self, PyObject *args);
    static PyObject *t_Field_getOne(t_Field *self);
    static PyObject *t_Field_getRuntimeClass(t_Field *self);
    static PyObject *t_Field_getZero(t_Field *self);
    static PyObject *t_Field_get__one(t_Field *self, void *data);
    static PyObject *t_Field_get__runtimeClass(t_Field *self, void *data);
    static PyObject *t_Field_get__zero(t_Field *self, void *data);
    static PyObject *t_Field_get__parameters_(t_Field *self, void *data);
    static PyGetSetDef t_Field__fields_[] = {
      DECLARE_GET_FIELD(t_Field, one),
      DECLARE_GET_FIELD(t_Field, runtimeClass),
      DECLARE_GET_FIELD(t_Field, zero),
      DECLARE_GET_FIELD(t_Field, parameters_),
      { NULL, NULL, NULL, NULL, NULL }
    };

    static PyMethodDef t_Field__methods_[] = {
      DECLARE_METHOD(t_Field, cast_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Field, instance_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Field, of_, METH_VARARGS),
      DECLARE_METHOD(t_Field, getOne, METH_NOARGS),
      DECLARE_METHOD(t_Field, getRuntimeClass, METH_NOARGS),
      DECLARE_METHOD(t_Field, getZero, METH_NOARGS),
      { NULL, NULL, 0, NULL }
    };

    static PyType_Slot PY_TYPE_SLOTS(Field)[] = {
      { Py_tp_methods, t_Field__methods_ },
      { Py_tp_init, (void *) abstract_init },
      { Py_tp_getset, t_Field__fields_ },
      { 0, NULL }
    };

    static PyType_Def *PY_TYPE_BASES(Field)[] = {
      &PY_TYPE_DEF(::java::lang::Object),
      NULL
    };

    DEFINE_TYPE(Field, t_Field, Field);
    PyObject *t_Field::wrap_Object(const Field& object, PyTypeObject *p0)
    {
      PyObject *obj = t_Field::wrap_Object(object);
      if (obj != NULL && obj != Py_None)
      {
        t_Field *self = (t_Field *) obj;
        self->parameters[0] = p0;
      }
      return obj;
    }

    PyObject *t_Field::wrap_jobject(const jobject& object, PyTypeObject *p0)
    {
      PyObject *obj = t_Field::wrap_jobject(object);
      if (obj != NULL && obj != Py_None)
      {
        t_Field *self = (t_Field *) obj;
        self->parameters[0] = p0;
      }
      return obj;
    }

    void t_Field::install(PyObject *module)
    {
      installType(&PY_TYPE(Field), &PY_TYPE_DEF(Field), module, "Field", 0);
    }

    void t_Field::initialize(PyObject *module)
    {
      PyObject_SetAttrString((PyObject *) PY_TYPE(Field), "class_", make_descriptor(Field::initializeClass, 1));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Field), "wrapfn_", make_descriptor(t_Field::wrap_jobject));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Field), "boxfn_", make_descriptor(boxObject));
    }

    static PyObject *t_Field_cast_(PyTypeObject *type, PyObject *arg)
    {
      if (!(arg = castCheck(arg, Field::initializeClass, 1)))
        return NULL;
      return t_Field::wrap_Object(Field(((t_Field *) arg)->object.this$));
    }
    static PyObject *t_Field_instance_(PyTypeObject *type, PyObject *arg)
    {
      if (!castCheck(arg, Field::initializeClass, 0))
        Py_RETURN_FALSE;
      Py_RETURN_TRUE;
    }

    static PyObject *t_Field_of_(t_Field *self, PyObject *args)
    {
      if (!parseArg(args, "T", 1, &(self->parameters)))
        Py_RETURN_SELF;
      return PyErr_SetArgsError((PyObject *) self, "of_", args);
    }

    static PyObject *t_Field_getOne(t_Field *self)
    {
      ::org::hipparchus::FieldElement result((jobject) NULL);
      OBJ_CALL(result = self->object.getOne());
      return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_FieldElement::wrap_Object(result);
    }

    static PyObject *t_Field_getRuntimeClass(t_Field *self)
    {
      ::java::lang::Class result((jobject) NULL);
      OBJ_CALL(result = self->object.getRuntimeClass());
      return ::java::lang::t_Class::wrap_Object(result, self->parameters[0]);
    }

    static PyObject *t_Field_getZero(t_Field *self)
    {
      ::org::hipparchus::FieldElement result((jobject) NULL);
      OBJ_CALL(result = self->object.getZero());
      return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_FieldElement::wrap_Object(result);
    }
    static PyObject *t_Field_get__parameters_(t_Field *self, void *data)
    {
      return typeParameters(self->parameters, sizeof(self->parameters));
    }

    static PyObject *t_Field_get__one(t_Field *self, void *data)
    {
      ::org::hipparchus::FieldElement value((jobject) NULL);
      OBJ_CALL(value = self->object.getOne());
      return ::org::hipparchus::t_FieldElement::wrap_Object(value);
    }

    static PyObject *t_Field_get__runtimeClass(t_Field *self, void *data)
    {
      ::java::lang::Class value((jobject) NULL);
      OBJ_CALL(value = self->object.getRuntimeClass());
      return ::java::lang::t_Class::wrap_Object(value);
    }

    static PyObject *t_Field_get__zero(t_Field *self, void *data)
    {
      ::org::hipparchus::FieldElement value((jobject) NULL);
      OBJ_CALL(value = self->object.getZero());
      return ::org::hipparchus::t_FieldElement::wrap_Object(value);
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/measurements/modifiers/BistaticRangeTroposphericDelayModifier.h"
#include "org/orekit/estimation/measurements/BistaticRange.h"
#include "org/orekit/models/earth/troposphere/DiscreteTroposphericModel.h"
#include "org/orekit/estimation/measurements/EstimatedMeasurement.h"
#include "org/orekit/estimation/measurements/EstimatedMeasurementBase.h"
#include "java/lang/Class.h"
#include "org/orekit/estimation/measurements/EstimationModifier.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace modifiers {

          ::java::lang::Class *BistaticRangeTroposphericDelayModifier::class$ = NULL;
          jmethodID *BistaticRangeTroposphericDelayModifier::mids$ = NULL;
          bool BistaticRangeTroposphericDelayModifier::live$ = false;

          jclass BistaticRangeTroposphericDelayModifier::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/modifiers/BistaticRangeTroposphericDelayModifier");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_b6cf54f3c9220bc7] = env->getMethodID(cls, "<init>", "(Lorg/orekit/models/earth/troposphere/DiscreteTroposphericModel;)V");
              mids$[mid_modify_0054a497255e8220] = env->getMethodID(cls, "modify", "(Lorg/orekit/estimation/measurements/EstimatedMeasurement;)V");
              mids$[mid_modifyWithoutDerivatives_e471490df8741b73] = env->getMethodID(cls, "modifyWithoutDerivatives", "(Lorg/orekit/estimation/measurements/EstimatedMeasurementBase;)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          BistaticRangeTroposphericDelayModifier::BistaticRangeTroposphericDelayModifier(const ::org::orekit::models::earth::troposphere::DiscreteTroposphericModel & a0) : ::org::orekit::estimation::measurements::modifiers::BaseRangeTroposphericDelayModifier(env->newObject(initializeClass, &mids$, mid_init$_b6cf54f3c9220bc7, a0.this$)) {}

          void BistaticRangeTroposphericDelayModifier::modify(const ::org::orekit::estimation::measurements::EstimatedMeasurement & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_modify_0054a497255e8220], a0.this$);
          }

          void BistaticRangeTroposphericDelayModifier::modifyWithoutDerivatives(const ::org::orekit::estimation::measurements::EstimatedMeasurementBase & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_modifyWithoutDerivatives_e471490df8741b73], a0.this$);
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
          static PyObject *t_BistaticRangeTroposphericDelayModifier_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_BistaticRangeTroposphericDelayModifier_instance_(PyTypeObject *type, PyObject *arg);
          static int t_BistaticRangeTroposphericDelayModifier_init_(t_BistaticRangeTroposphericDelayModifier *self, PyObject *args, PyObject *kwds);
          static PyObject *t_BistaticRangeTroposphericDelayModifier_modify(t_BistaticRangeTroposphericDelayModifier *self, PyObject *arg);
          static PyObject *t_BistaticRangeTroposphericDelayModifier_modifyWithoutDerivatives(t_BistaticRangeTroposphericDelayModifier *self, PyObject *arg);

          static PyMethodDef t_BistaticRangeTroposphericDelayModifier__methods_[] = {
            DECLARE_METHOD(t_BistaticRangeTroposphericDelayModifier, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_BistaticRangeTroposphericDelayModifier, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_BistaticRangeTroposphericDelayModifier, modify, METH_O),
            DECLARE_METHOD(t_BistaticRangeTroposphericDelayModifier, modifyWithoutDerivatives, METH_O),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(BistaticRangeTroposphericDelayModifier)[] = {
            { Py_tp_methods, t_BistaticRangeTroposphericDelayModifier__methods_ },
            { Py_tp_init, (void *) t_BistaticRangeTroposphericDelayModifier_init_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(BistaticRangeTroposphericDelayModifier)[] = {
            &PY_TYPE_DEF(::org::orekit::estimation::measurements::modifiers::BaseRangeTroposphericDelayModifier),
            NULL
          };

          DEFINE_TYPE(BistaticRangeTroposphericDelayModifier, t_BistaticRangeTroposphericDelayModifier, BistaticRangeTroposphericDelayModifier);

          void t_BistaticRangeTroposphericDelayModifier::install(PyObject *module)
          {
            installType(&PY_TYPE(BistaticRangeTroposphericDelayModifier), &PY_TYPE_DEF(BistaticRangeTroposphericDelayModifier), module, "BistaticRangeTroposphericDelayModifier", 0);
          }

          void t_BistaticRangeTroposphericDelayModifier::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(BistaticRangeTroposphericDelayModifier), "class_", make_descriptor(BistaticRangeTroposphericDelayModifier::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(BistaticRangeTroposphericDelayModifier), "wrapfn_", make_descriptor(t_BistaticRangeTroposphericDelayModifier::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(BistaticRangeTroposphericDelayModifier), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_BistaticRangeTroposphericDelayModifier_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, BistaticRangeTroposphericDelayModifier::initializeClass, 1)))
              return NULL;
            return t_BistaticRangeTroposphericDelayModifier::wrap_Object(BistaticRangeTroposphericDelayModifier(((t_BistaticRangeTroposphericDelayModifier *) arg)->object.this$));
          }
          static PyObject *t_BistaticRangeTroposphericDelayModifier_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, BistaticRangeTroposphericDelayModifier::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_BistaticRangeTroposphericDelayModifier_init_(t_BistaticRangeTroposphericDelayModifier *self, PyObject *args, PyObject *kwds)
          {
            ::org::orekit::models::earth::troposphere::DiscreteTroposphericModel a0((jobject) NULL);
            BistaticRangeTroposphericDelayModifier object((jobject) NULL);

            if (!parseArgs(args, "k", ::org::orekit::models::earth::troposphere::DiscreteTroposphericModel::initializeClass, &a0))
            {
              INT_CALL(object = BistaticRangeTroposphericDelayModifier(a0));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_BistaticRangeTroposphericDelayModifier_modify(t_BistaticRangeTroposphericDelayModifier *self, PyObject *arg)
          {
            ::org::orekit::estimation::measurements::EstimatedMeasurement a0((jobject) NULL);
            PyTypeObject **p0;

            if (!parseArg(arg, "K", ::org::orekit::estimation::measurements::EstimatedMeasurement::initializeClass, &a0, &p0, ::org::orekit::estimation::measurements::t_EstimatedMeasurement::parameters_))
            {
              OBJ_CALL(self->object.modify(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "modify", arg);
            return NULL;
          }

          static PyObject *t_BistaticRangeTroposphericDelayModifier_modifyWithoutDerivatives(t_BistaticRangeTroposphericDelayModifier *self, PyObject *arg)
          {
            ::org::orekit::estimation::measurements::EstimatedMeasurementBase a0((jobject) NULL);
            PyTypeObject **p0;

            if (!parseArg(arg, "K", ::org::orekit::estimation::measurements::EstimatedMeasurementBase::initializeClass, &a0, &p0, ::org::orekit::estimation::measurements::t_EstimatedMeasurementBase::parameters_))
            {
              OBJ_CALL(self->object.modifyWithoutDerivatives(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "modifyWithoutDerivatives", arg);
            return NULL;
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/measurements/gnss/MeasurementCombination.h"
#include "org/orekit/estimation/measurements/gnss/CombinedObservationDataSet.h"
#include "org/orekit/files/rinex/observation/ObservationDataSet.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace gnss {

          ::java::lang::Class *MeasurementCombination::class$ = NULL;
          jmethodID *MeasurementCombination::mids$ = NULL;
          bool MeasurementCombination::live$ = false;

          jclass MeasurementCombination::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/gnss/MeasurementCombination");

              mids$ = new jmethodID[max_mid];
              mids$[mid_combine_82c5de1a9cc4c5da] = env->getMethodID(cls, "combine", "(Lorg/orekit/files/rinex/observation/ObservationDataSet;)Lorg/orekit/estimation/measurements/gnss/CombinedObservationDataSet;");
              mids$[mid_getName_3cffd47377eca18a] = env->getMethodID(cls, "getName", "()Ljava/lang/String;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          ::org::orekit::estimation::measurements::gnss::CombinedObservationDataSet MeasurementCombination::combine(const ::org::orekit::files::rinex::observation::ObservationDataSet & a0) const
          {
            return ::org::orekit::estimation::measurements::gnss::CombinedObservationDataSet(env->callObjectMethod(this$, mids$[mid_combine_82c5de1a9cc4c5da], a0.this$));
          }

          ::java::lang::String MeasurementCombination::getName() const
          {
            return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getName_3cffd47377eca18a]));
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
          static PyObject *t_MeasurementCombination_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_MeasurementCombination_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_MeasurementCombination_combine(t_MeasurementCombination *self, PyObject *arg);
          static PyObject *t_MeasurementCombination_getName(t_MeasurementCombination *self);
          static PyObject *t_MeasurementCombination_get__name(t_MeasurementCombination *self, void *data);
          static PyGetSetDef t_MeasurementCombination__fields_[] = {
            DECLARE_GET_FIELD(t_MeasurementCombination, name),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_MeasurementCombination__methods_[] = {
            DECLARE_METHOD(t_MeasurementCombination, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_MeasurementCombination, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_MeasurementCombination, combine, METH_O),
            DECLARE_METHOD(t_MeasurementCombination, getName, METH_NOARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(MeasurementCombination)[] = {
            { Py_tp_methods, t_MeasurementCombination__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { Py_tp_getset, t_MeasurementCombination__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(MeasurementCombination)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(MeasurementCombination, t_MeasurementCombination, MeasurementCombination);

          void t_MeasurementCombination::install(PyObject *module)
          {
            installType(&PY_TYPE(MeasurementCombination), &PY_TYPE_DEF(MeasurementCombination), module, "MeasurementCombination", 0);
          }

          void t_MeasurementCombination::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(MeasurementCombination), "class_", make_descriptor(MeasurementCombination::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(MeasurementCombination), "wrapfn_", make_descriptor(t_MeasurementCombination::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(MeasurementCombination), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_MeasurementCombination_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, MeasurementCombination::initializeClass, 1)))
              return NULL;
            return t_MeasurementCombination::wrap_Object(MeasurementCombination(((t_MeasurementCombination *) arg)->object.this$));
          }
          static PyObject *t_MeasurementCombination_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, MeasurementCombination::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_MeasurementCombination_combine(t_MeasurementCombination *self, PyObject *arg)
          {
            ::org::orekit::files::rinex::observation::ObservationDataSet a0((jobject) NULL);
            ::org::orekit::estimation::measurements::gnss::CombinedObservationDataSet result((jobject) NULL);

            if (!parseArg(arg, "k", ::org::orekit::files::rinex::observation::ObservationDataSet::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.combine(a0));
              return ::org::orekit::estimation::measurements::gnss::t_CombinedObservationDataSet::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "combine", arg);
            return NULL;
          }

          static PyObject *t_MeasurementCombination_getName(t_MeasurementCombination *self)
          {
            ::java::lang::String result((jobject) NULL);
            OBJ_CALL(result = self->object.getName());
            return j2p(result);
          }

          static PyObject *t_MeasurementCombination_get__name(t_MeasurementCombination *self, void *data)
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
#include "org/orekit/rugged/utils/MaxSelector.h"
#include "org/orekit/rugged/utils/MaxSelector.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace rugged {
      namespace utils {

        ::java::lang::Class *MaxSelector::class$ = NULL;
        jmethodID *MaxSelector::mids$ = NULL;
        bool MaxSelector::live$ = false;

        jclass MaxSelector::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/rugged/utils/MaxSelector");

            mids$ = new jmethodID[max_mid];
            mids$[mid_getInstance_dea02f2400e8d564] = env->getStaticMethodID(cls, "getInstance", "()Lorg/orekit/rugged/utils/MaxSelector;");
            mids$[mid_selectFirst_41fce65646328eb2] = env->getMethodID(cls, "selectFirst", "(DD)Z");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        MaxSelector MaxSelector::getInstance()
        {
          jclass cls = env->getClass(initializeClass);
          return MaxSelector(env->callStaticObjectMethod(cls, mids$[mid_getInstance_dea02f2400e8d564]));
        }

        jboolean MaxSelector::selectFirst(jdouble a0, jdouble a1) const
        {
          return env->callBooleanMethod(this$, mids$[mid_selectFirst_41fce65646328eb2], a0, a1);
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
        static PyObject *t_MaxSelector_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_MaxSelector_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_MaxSelector_getInstance(PyTypeObject *type);
        static PyObject *t_MaxSelector_selectFirst(t_MaxSelector *self, PyObject *args);
        static PyObject *t_MaxSelector_get__instance(t_MaxSelector *self, void *data);
        static PyGetSetDef t_MaxSelector__fields_[] = {
          DECLARE_GET_FIELD(t_MaxSelector, instance),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_MaxSelector__methods_[] = {
          DECLARE_METHOD(t_MaxSelector, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_MaxSelector, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_MaxSelector, getInstance, METH_NOARGS | METH_CLASS),
          DECLARE_METHOD(t_MaxSelector, selectFirst, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(MaxSelector)[] = {
          { Py_tp_methods, t_MaxSelector__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_MaxSelector__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(MaxSelector)[] = {
          &PY_TYPE_DEF(::org::orekit::rugged::utils::Selector),
          NULL
        };

        DEFINE_TYPE(MaxSelector, t_MaxSelector, MaxSelector);

        void t_MaxSelector::install(PyObject *module)
        {
          installType(&PY_TYPE(MaxSelector), &PY_TYPE_DEF(MaxSelector), module, "MaxSelector", 0);
        }

        void t_MaxSelector::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(MaxSelector), "class_", make_descriptor(MaxSelector::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(MaxSelector), "wrapfn_", make_descriptor(t_MaxSelector::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(MaxSelector), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_MaxSelector_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, MaxSelector::initializeClass, 1)))
            return NULL;
          return t_MaxSelector::wrap_Object(MaxSelector(((t_MaxSelector *) arg)->object.this$));
        }
        static PyObject *t_MaxSelector_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, MaxSelector::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_MaxSelector_getInstance(PyTypeObject *type)
        {
          MaxSelector result((jobject) NULL);
          OBJ_CALL(result = ::org::orekit::rugged::utils::MaxSelector::getInstance());
          return t_MaxSelector::wrap_Object(result);
        }

        static PyObject *t_MaxSelector_selectFirst(t_MaxSelector *self, PyObject *args)
        {
          jdouble a0;
          jdouble a1;
          jboolean result;

          if (!parseArgs(args, "DD", &a0, &a1))
          {
            OBJ_CALL(result = self->object.selectFirst(a0, a1));
            Py_RETURN_BOOL(result);
          }

          return callSuper(PY_TYPE(MaxSelector), (PyObject *) self, "selectFirst", args, 2);
        }

        static PyObject *t_MaxSelector_get__instance(t_MaxSelector *self, void *data)
        {
          MaxSelector value((jobject) NULL);
          OBJ_CALL(value = self->object.getInstance());
          return t_MaxSelector::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/forces/gravity/potential/GravityFieldFactory.h"
#include "java/util/List.h"
#include "org/orekit/forces/gravity/potential/TideSystem.h"
#include "org/orekit/forces/gravity/potential/UnnormalizedSphericalHarmonicsProvider.h"
#include "org/orekit/forces/gravity/potential/OceanTidesReader.h"
#include "org/orekit/forces/gravity/potential/OceanTidesWave.h"
#include "org/orekit/forces/gravity/potential/PotentialCoefficientsReader.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/forces/gravity/potential/NormalizedSphericalHarmonicsProvider.h"
#include "org/orekit/forces/gravity/potential/LazyLoadedGravityFields.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "org/orekit/forces/gravity/potential/OceanLoadDeformationCoefficients.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace forces {
      namespace gravity {
        namespace potential {

          ::java::lang::Class *GravityFieldFactory::class$ = NULL;
          jmethodID *GravityFieldFactory::mids$ = NULL;
          bool GravityFieldFactory::live$ = false;
          ::java::lang::String *GravityFieldFactory::EGM_FILENAME = NULL;
          ::java::lang::String *GravityFieldFactory::FES_CHAT_EPSILON_FILENAME = NULL;
          ::java::lang::String *GravityFieldFactory::FES_CNM_SNM_FILENAME = NULL;
          ::java::lang::String *GravityFieldFactory::FES_HF_FILENAME = NULL;
          ::java::lang::String *GravityFieldFactory::GRGS_FILENAME = NULL;
          ::java::lang::String *GravityFieldFactory::ICGEM_FILENAME = NULL;
          ::java::lang::String *GravityFieldFactory::SHM_FILENAME = NULL;

          jclass GravityFieldFactory::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/forces/gravity/potential/GravityFieldFactory");

              mids$ = new jmethodID[max_mid];
              mids$[mid_addDefaultOceanTidesReaders_0640e6acf969ed28] = env->getStaticMethodID(cls, "addDefaultOceanTidesReaders", "()V");
              mids$[mid_addDefaultPotentialCoefficientsReaders_0640e6acf969ed28] = env->getStaticMethodID(cls, "addDefaultPotentialCoefficientsReaders", "()V");
              mids$[mid_addOceanTidesReader_53a9275b0b397970] = env->getStaticMethodID(cls, "addOceanTidesReader", "(Lorg/orekit/forces/gravity/potential/OceanTidesReader;)V");
              mids$[mid_addPotentialCoefficientsReader_5853b49c202b050b] = env->getStaticMethodID(cls, "addPotentialCoefficientsReader", "(Lorg/orekit/forces/gravity/potential/PotentialCoefficientsReader;)V");
              mids$[mid_clearOceanTidesReaders_0640e6acf969ed28] = env->getStaticMethodID(cls, "clearOceanTidesReaders", "()V");
              mids$[mid_clearPotentialCoefficientsReaders_0640e6acf969ed28] = env->getStaticMethodID(cls, "clearPotentialCoefficientsReaders", "()V");
              mids$[mid_configureOceanLoadDeformationCoefficients_48fb5ba519b6ce93] = env->getStaticMethodID(cls, "configureOceanLoadDeformationCoefficients", "(Lorg/orekit/forces/gravity/potential/OceanLoadDeformationCoefficients;)V");
              mids$[mid_getConstantNormalizedProvider_0c77c94a83049da8] = env->getStaticMethodID(cls, "getConstantNormalizedProvider", "(IILorg/orekit/time/AbsoluteDate;)Lorg/orekit/forces/gravity/potential/NormalizedSphericalHarmonicsProvider;");
              mids$[mid_getConstantUnnormalizedProvider_eb1ce3dfed700512] = env->getStaticMethodID(cls, "getConstantUnnormalizedProvider", "(IILorg/orekit/time/AbsoluteDate;)Lorg/orekit/forces/gravity/potential/UnnormalizedSphericalHarmonicsProvider;");
              mids$[mid_getGravityFields_0d8a4be514230626] = env->getStaticMethodID(cls, "getGravityFields", "()Lorg/orekit/forces/gravity/potential/LazyLoadedGravityFields;");
              mids$[mid_getNormalizedProvider_003cf918a8e938f4] = env->getStaticMethodID(cls, "getNormalizedProvider", "(Lorg/orekit/forces/gravity/potential/UnnormalizedSphericalHarmonicsProvider;)Lorg/orekit/forces/gravity/potential/NormalizedSphericalHarmonicsProvider;");
              mids$[mid_getNormalizedProvider_79759f2115f6836e] = env->getStaticMethodID(cls, "getNormalizedProvider", "(II)Lorg/orekit/forces/gravity/potential/NormalizedSphericalHarmonicsProvider;");
              mids$[mid_getNormalizedProvider_9108cf7f45bb896a] = env->getStaticMethodID(cls, "getNormalizedProvider", "(DDLorg/orekit/forces/gravity/potential/TideSystem;[[D[[D)Lorg/orekit/forces/gravity/potential/NormalizedSphericalHarmonicsProvider;");
              mids$[mid_getOceanLoadDeformationCoefficients_5e90d7425c16a9f8] = env->getStaticMethodID(cls, "getOceanLoadDeformationCoefficients", "()Lorg/orekit/forces/gravity/potential/OceanLoadDeformationCoefficients;");
              mids$[mid_getOceanTidesWaves_db6a96225c690c76] = env->getStaticMethodID(cls, "getOceanTidesWaves", "(II)Ljava/util/List;");
              mids$[mid_getUnnormalizationFactors_c5a249365f81f631] = env->getStaticMethodID(cls, "getUnnormalizationFactors", "(II)[[D");
              mids$[mid_getUnnormalizedProvider_d395c492ef90bcf1] = env->getStaticMethodID(cls, "getUnnormalizedProvider", "(Lorg/orekit/forces/gravity/potential/NormalizedSphericalHarmonicsProvider;)Lorg/orekit/forces/gravity/potential/UnnormalizedSphericalHarmonicsProvider;");
              mids$[mid_getUnnormalizedProvider_2609e3e741b941bf] = env->getStaticMethodID(cls, "getUnnormalizedProvider", "(II)Lorg/orekit/forces/gravity/potential/UnnormalizedSphericalHarmonicsProvider;");
              mids$[mid_getUnnormalizedProvider_016911f22f84e125] = env->getStaticMethodID(cls, "getUnnormalizedProvider", "(DDLorg/orekit/forces/gravity/potential/TideSystem;[[D[[D)Lorg/orekit/forces/gravity/potential/UnnormalizedSphericalHarmonicsProvider;");
              mids$[mid_readGravityField_88cf88e8bd59d4fa] = env->getStaticMethodID(cls, "readGravityField", "(II)Lorg/orekit/forces/gravity/potential/PotentialCoefficientsReader;");

              class$ = new ::java::lang::Class(cls);
              cls = (jclass) class$->this$;

              EGM_FILENAME = new ::java::lang::String(env->getStaticObjectField(cls, "EGM_FILENAME", "Ljava/lang/String;"));
              FES_CHAT_EPSILON_FILENAME = new ::java::lang::String(env->getStaticObjectField(cls, "FES_CHAT_EPSILON_FILENAME", "Ljava/lang/String;"));
              FES_CNM_SNM_FILENAME = new ::java::lang::String(env->getStaticObjectField(cls, "FES_CNM_SNM_FILENAME", "Ljava/lang/String;"));
              FES_HF_FILENAME = new ::java::lang::String(env->getStaticObjectField(cls, "FES_HF_FILENAME", "Ljava/lang/String;"));
              GRGS_FILENAME = new ::java::lang::String(env->getStaticObjectField(cls, "GRGS_FILENAME", "Ljava/lang/String;"));
              ICGEM_FILENAME = new ::java::lang::String(env->getStaticObjectField(cls, "ICGEM_FILENAME", "Ljava/lang/String;"));
              SHM_FILENAME = new ::java::lang::String(env->getStaticObjectField(cls, "SHM_FILENAME", "Ljava/lang/String;"));
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          void GravityFieldFactory::addDefaultOceanTidesReaders()
          {
            jclass cls = env->getClass(initializeClass);
            env->callStaticVoidMethod(cls, mids$[mid_addDefaultOceanTidesReaders_0640e6acf969ed28]);
          }

          void GravityFieldFactory::addDefaultPotentialCoefficientsReaders()
          {
            jclass cls = env->getClass(initializeClass);
            env->callStaticVoidMethod(cls, mids$[mid_addDefaultPotentialCoefficientsReaders_0640e6acf969ed28]);
          }

          void GravityFieldFactory::addOceanTidesReader(const ::org::orekit::forces::gravity::potential::OceanTidesReader & a0)
          {
            jclass cls = env->getClass(initializeClass);
            env->callStaticVoidMethod(cls, mids$[mid_addOceanTidesReader_53a9275b0b397970], a0.this$);
          }

          void GravityFieldFactory::addPotentialCoefficientsReader(const ::org::orekit::forces::gravity::potential::PotentialCoefficientsReader & a0)
          {
            jclass cls = env->getClass(initializeClass);
            env->callStaticVoidMethod(cls, mids$[mid_addPotentialCoefficientsReader_5853b49c202b050b], a0.this$);
          }

          void GravityFieldFactory::clearOceanTidesReaders()
          {
            jclass cls = env->getClass(initializeClass);
            env->callStaticVoidMethod(cls, mids$[mid_clearOceanTidesReaders_0640e6acf969ed28]);
          }

          void GravityFieldFactory::clearPotentialCoefficientsReaders()
          {
            jclass cls = env->getClass(initializeClass);
            env->callStaticVoidMethod(cls, mids$[mid_clearPotentialCoefficientsReaders_0640e6acf969ed28]);
          }

          void GravityFieldFactory::configureOceanLoadDeformationCoefficients(const ::org::orekit::forces::gravity::potential::OceanLoadDeformationCoefficients & a0)
          {
            jclass cls = env->getClass(initializeClass);
            env->callStaticVoidMethod(cls, mids$[mid_configureOceanLoadDeformationCoefficients_48fb5ba519b6ce93], a0.this$);
          }

          ::org::orekit::forces::gravity::potential::NormalizedSphericalHarmonicsProvider GravityFieldFactory::getConstantNormalizedProvider(jint a0, jint a1, const ::org::orekit::time::AbsoluteDate & a2)
          {
            jclass cls = env->getClass(initializeClass);
            return ::org::orekit::forces::gravity::potential::NormalizedSphericalHarmonicsProvider(env->callStaticObjectMethod(cls, mids$[mid_getConstantNormalizedProvider_0c77c94a83049da8], a0, a1, a2.this$));
          }

          ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider GravityFieldFactory::getConstantUnnormalizedProvider(jint a0, jint a1, const ::org::orekit::time::AbsoluteDate & a2)
          {
            jclass cls = env->getClass(initializeClass);
            return ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider(env->callStaticObjectMethod(cls, mids$[mid_getConstantUnnormalizedProvider_eb1ce3dfed700512], a0, a1, a2.this$));
          }

          ::org::orekit::forces::gravity::potential::LazyLoadedGravityFields GravityFieldFactory::getGravityFields()
          {
            jclass cls = env->getClass(initializeClass);
            return ::org::orekit::forces::gravity::potential::LazyLoadedGravityFields(env->callStaticObjectMethod(cls, mids$[mid_getGravityFields_0d8a4be514230626]));
          }

          ::org::orekit::forces::gravity::potential::NormalizedSphericalHarmonicsProvider GravityFieldFactory::getNormalizedProvider(const ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider & a0)
          {
            jclass cls = env->getClass(initializeClass);
            return ::org::orekit::forces::gravity::potential::NormalizedSphericalHarmonicsProvider(env->callStaticObjectMethod(cls, mids$[mid_getNormalizedProvider_003cf918a8e938f4], a0.this$));
          }

          ::org::orekit::forces::gravity::potential::NormalizedSphericalHarmonicsProvider GravityFieldFactory::getNormalizedProvider(jint a0, jint a1)
          {
            jclass cls = env->getClass(initializeClass);
            return ::org::orekit::forces::gravity::potential::NormalizedSphericalHarmonicsProvider(env->callStaticObjectMethod(cls, mids$[mid_getNormalizedProvider_79759f2115f6836e], a0, a1));
          }

          ::org::orekit::forces::gravity::potential::NormalizedSphericalHarmonicsProvider GravityFieldFactory::getNormalizedProvider(jdouble a0, jdouble a1, const ::org::orekit::forces::gravity::potential::TideSystem & a2, const JArray< JArray< jdouble > > & a3, const JArray< JArray< jdouble > > & a4)
          {
            jclass cls = env->getClass(initializeClass);
            return ::org::orekit::forces::gravity::potential::NormalizedSphericalHarmonicsProvider(env->callStaticObjectMethod(cls, mids$[mid_getNormalizedProvider_9108cf7f45bb896a], a0, a1, a2.this$, a3.this$, a4.this$));
          }

          ::org::orekit::forces::gravity::potential::OceanLoadDeformationCoefficients GravityFieldFactory::getOceanLoadDeformationCoefficients()
          {
            jclass cls = env->getClass(initializeClass);
            return ::org::orekit::forces::gravity::potential::OceanLoadDeformationCoefficients(env->callStaticObjectMethod(cls, mids$[mid_getOceanLoadDeformationCoefficients_5e90d7425c16a9f8]));
          }

          ::java::util::List GravityFieldFactory::getOceanTidesWaves(jint a0, jint a1)
          {
            jclass cls = env->getClass(initializeClass);
            return ::java::util::List(env->callStaticObjectMethod(cls, mids$[mid_getOceanTidesWaves_db6a96225c690c76], a0, a1));
          }

          JArray< JArray< jdouble > > GravityFieldFactory::getUnnormalizationFactors(jint a0, jint a1)
          {
            jclass cls = env->getClass(initializeClass);
            return JArray< JArray< jdouble > >(env->callStaticObjectMethod(cls, mids$[mid_getUnnormalizationFactors_c5a249365f81f631], a0, a1));
          }

          ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider GravityFieldFactory::getUnnormalizedProvider(const ::org::orekit::forces::gravity::potential::NormalizedSphericalHarmonicsProvider & a0)
          {
            jclass cls = env->getClass(initializeClass);
            return ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider(env->callStaticObjectMethod(cls, mids$[mid_getUnnormalizedProvider_d395c492ef90bcf1], a0.this$));
          }

          ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider GravityFieldFactory::getUnnormalizedProvider(jint a0, jint a1)
          {
            jclass cls = env->getClass(initializeClass);
            return ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider(env->callStaticObjectMethod(cls, mids$[mid_getUnnormalizedProvider_2609e3e741b941bf], a0, a1));
          }

          ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider GravityFieldFactory::getUnnormalizedProvider(jdouble a0, jdouble a1, const ::org::orekit::forces::gravity::potential::TideSystem & a2, const JArray< JArray< jdouble > > & a3, const JArray< JArray< jdouble > > & a4)
          {
            jclass cls = env->getClass(initializeClass);
            return ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider(env->callStaticObjectMethod(cls, mids$[mid_getUnnormalizedProvider_016911f22f84e125], a0, a1, a2.this$, a3.this$, a4.this$));
          }

          ::org::orekit::forces::gravity::potential::PotentialCoefficientsReader GravityFieldFactory::readGravityField(jint a0, jint a1)
          {
            jclass cls = env->getClass(initializeClass);
            return ::org::orekit::forces::gravity::potential::PotentialCoefficientsReader(env->callStaticObjectMethod(cls, mids$[mid_readGravityField_88cf88e8bd59d4fa], a0, a1));
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
          static PyObject *t_GravityFieldFactory_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_GravityFieldFactory_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_GravityFieldFactory_addDefaultOceanTidesReaders(PyTypeObject *type);
          static PyObject *t_GravityFieldFactory_addDefaultPotentialCoefficientsReaders(PyTypeObject *type);
          static PyObject *t_GravityFieldFactory_addOceanTidesReader(PyTypeObject *type, PyObject *arg);
          static PyObject *t_GravityFieldFactory_addPotentialCoefficientsReader(PyTypeObject *type, PyObject *arg);
          static PyObject *t_GravityFieldFactory_clearOceanTidesReaders(PyTypeObject *type);
          static PyObject *t_GravityFieldFactory_clearPotentialCoefficientsReaders(PyTypeObject *type);
          static PyObject *t_GravityFieldFactory_configureOceanLoadDeformationCoefficients(PyTypeObject *type, PyObject *arg);
          static PyObject *t_GravityFieldFactory_getConstantNormalizedProvider(PyTypeObject *type, PyObject *args);
          static PyObject *t_GravityFieldFactory_getConstantUnnormalizedProvider(PyTypeObject *type, PyObject *args);
          static PyObject *t_GravityFieldFactory_getGravityFields(PyTypeObject *type);
          static PyObject *t_GravityFieldFactory_getNormalizedProvider(PyTypeObject *type, PyObject *args);
          static PyObject *t_GravityFieldFactory_getOceanLoadDeformationCoefficients(PyTypeObject *type);
          static PyObject *t_GravityFieldFactory_getOceanTidesWaves(PyTypeObject *type, PyObject *args);
          static PyObject *t_GravityFieldFactory_getUnnormalizationFactors(PyTypeObject *type, PyObject *args);
          static PyObject *t_GravityFieldFactory_getUnnormalizedProvider(PyTypeObject *type, PyObject *args);
          static PyObject *t_GravityFieldFactory_readGravityField(PyTypeObject *type, PyObject *args);
          static PyObject *t_GravityFieldFactory_get__gravityFields(t_GravityFieldFactory *self, void *data);
          static PyObject *t_GravityFieldFactory_get__oceanLoadDeformationCoefficients(t_GravityFieldFactory *self, void *data);
          static PyGetSetDef t_GravityFieldFactory__fields_[] = {
            DECLARE_GET_FIELD(t_GravityFieldFactory, gravityFields),
            DECLARE_GET_FIELD(t_GravityFieldFactory, oceanLoadDeformationCoefficients),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_GravityFieldFactory__methods_[] = {
            DECLARE_METHOD(t_GravityFieldFactory, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_GravityFieldFactory, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_GravityFieldFactory, addDefaultOceanTidesReaders, METH_NOARGS | METH_CLASS),
            DECLARE_METHOD(t_GravityFieldFactory, addDefaultPotentialCoefficientsReaders, METH_NOARGS | METH_CLASS),
            DECLARE_METHOD(t_GravityFieldFactory, addOceanTidesReader, METH_O | METH_CLASS),
            DECLARE_METHOD(t_GravityFieldFactory, addPotentialCoefficientsReader, METH_O | METH_CLASS),
            DECLARE_METHOD(t_GravityFieldFactory, clearOceanTidesReaders, METH_NOARGS | METH_CLASS),
            DECLARE_METHOD(t_GravityFieldFactory, clearPotentialCoefficientsReaders, METH_NOARGS | METH_CLASS),
            DECLARE_METHOD(t_GravityFieldFactory, configureOceanLoadDeformationCoefficients, METH_O | METH_CLASS),
            DECLARE_METHOD(t_GravityFieldFactory, getConstantNormalizedProvider, METH_VARARGS | METH_CLASS),
            DECLARE_METHOD(t_GravityFieldFactory, getConstantUnnormalizedProvider, METH_VARARGS | METH_CLASS),
            DECLARE_METHOD(t_GravityFieldFactory, getGravityFields, METH_NOARGS | METH_CLASS),
            DECLARE_METHOD(t_GravityFieldFactory, getNormalizedProvider, METH_VARARGS | METH_CLASS),
            DECLARE_METHOD(t_GravityFieldFactory, getOceanLoadDeformationCoefficients, METH_NOARGS | METH_CLASS),
            DECLARE_METHOD(t_GravityFieldFactory, getOceanTidesWaves, METH_VARARGS | METH_CLASS),
            DECLARE_METHOD(t_GravityFieldFactory, getUnnormalizationFactors, METH_VARARGS | METH_CLASS),
            DECLARE_METHOD(t_GravityFieldFactory, getUnnormalizedProvider, METH_VARARGS | METH_CLASS),
            DECLARE_METHOD(t_GravityFieldFactory, readGravityField, METH_VARARGS | METH_CLASS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(GravityFieldFactory)[] = {
            { Py_tp_methods, t_GravityFieldFactory__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { Py_tp_getset, t_GravityFieldFactory__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(GravityFieldFactory)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(GravityFieldFactory, t_GravityFieldFactory, GravityFieldFactory);

          void t_GravityFieldFactory::install(PyObject *module)
          {
            installType(&PY_TYPE(GravityFieldFactory), &PY_TYPE_DEF(GravityFieldFactory), module, "GravityFieldFactory", 0);
          }

          void t_GravityFieldFactory::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(GravityFieldFactory), "class_", make_descriptor(GravityFieldFactory::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(GravityFieldFactory), "wrapfn_", make_descriptor(t_GravityFieldFactory::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(GravityFieldFactory), "boxfn_", make_descriptor(boxObject));
            env->getClass(GravityFieldFactory::initializeClass);
            PyObject_SetAttrString((PyObject *) PY_TYPE(GravityFieldFactory), "EGM_FILENAME", make_descriptor(j2p(*GravityFieldFactory::EGM_FILENAME)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(GravityFieldFactory), "FES_CHAT_EPSILON_FILENAME", make_descriptor(j2p(*GravityFieldFactory::FES_CHAT_EPSILON_FILENAME)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(GravityFieldFactory), "FES_CNM_SNM_FILENAME", make_descriptor(j2p(*GravityFieldFactory::FES_CNM_SNM_FILENAME)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(GravityFieldFactory), "FES_HF_FILENAME", make_descriptor(j2p(*GravityFieldFactory::FES_HF_FILENAME)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(GravityFieldFactory), "GRGS_FILENAME", make_descriptor(j2p(*GravityFieldFactory::GRGS_FILENAME)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(GravityFieldFactory), "ICGEM_FILENAME", make_descriptor(j2p(*GravityFieldFactory::ICGEM_FILENAME)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(GravityFieldFactory), "SHM_FILENAME", make_descriptor(j2p(*GravityFieldFactory::SHM_FILENAME)));
          }

          static PyObject *t_GravityFieldFactory_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, GravityFieldFactory::initializeClass, 1)))
              return NULL;
            return t_GravityFieldFactory::wrap_Object(GravityFieldFactory(((t_GravityFieldFactory *) arg)->object.this$));
          }
          static PyObject *t_GravityFieldFactory_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, GravityFieldFactory::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_GravityFieldFactory_addDefaultOceanTidesReaders(PyTypeObject *type)
          {
            OBJ_CALL(::org::orekit::forces::gravity::potential::GravityFieldFactory::addDefaultOceanTidesReaders());
            Py_RETURN_NONE;
          }

          static PyObject *t_GravityFieldFactory_addDefaultPotentialCoefficientsReaders(PyTypeObject *type)
          {
            OBJ_CALL(::org::orekit::forces::gravity::potential::GravityFieldFactory::addDefaultPotentialCoefficientsReaders());
            Py_RETURN_NONE;
          }

          static PyObject *t_GravityFieldFactory_addOceanTidesReader(PyTypeObject *type, PyObject *arg)
          {
            ::org::orekit::forces::gravity::potential::OceanTidesReader a0((jobject) NULL);

            if (!parseArg(arg, "k", ::org::orekit::forces::gravity::potential::OceanTidesReader::initializeClass, &a0))
            {
              OBJ_CALL(::org::orekit::forces::gravity::potential::GravityFieldFactory::addOceanTidesReader(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError(type, "addOceanTidesReader", arg);
            return NULL;
          }

          static PyObject *t_GravityFieldFactory_addPotentialCoefficientsReader(PyTypeObject *type, PyObject *arg)
          {
            ::org::orekit::forces::gravity::potential::PotentialCoefficientsReader a0((jobject) NULL);

            if (!parseArg(arg, "k", ::org::orekit::forces::gravity::potential::PotentialCoefficientsReader::initializeClass, &a0))
            {
              OBJ_CALL(::org::orekit::forces::gravity::potential::GravityFieldFactory::addPotentialCoefficientsReader(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError(type, "addPotentialCoefficientsReader", arg);
            return NULL;
          }

          static PyObject *t_GravityFieldFactory_clearOceanTidesReaders(PyTypeObject *type)
          {
            OBJ_CALL(::org::orekit::forces::gravity::potential::GravityFieldFactory::clearOceanTidesReaders());
            Py_RETURN_NONE;
          }

          static PyObject *t_GravityFieldFactory_clearPotentialCoefficientsReaders(PyTypeObject *type)
          {
            OBJ_CALL(::org::orekit::forces::gravity::potential::GravityFieldFactory::clearPotentialCoefficientsReaders());
            Py_RETURN_NONE;
          }

          static PyObject *t_GravityFieldFactory_configureOceanLoadDeformationCoefficients(PyTypeObject *type, PyObject *arg)
          {
            ::org::orekit::forces::gravity::potential::OceanLoadDeformationCoefficients a0((jobject) NULL);
            PyTypeObject **p0;

            if (!parseArg(arg, "K", ::org::orekit::forces::gravity::potential::OceanLoadDeformationCoefficients::initializeClass, &a0, &p0, ::org::orekit::forces::gravity::potential::t_OceanLoadDeformationCoefficients::parameters_))
            {
              OBJ_CALL(::org::orekit::forces::gravity::potential::GravityFieldFactory::configureOceanLoadDeformationCoefficients(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError(type, "configureOceanLoadDeformationCoefficients", arg);
            return NULL;
          }

          static PyObject *t_GravityFieldFactory_getConstantNormalizedProvider(PyTypeObject *type, PyObject *args)
          {
            jint a0;
            jint a1;
            ::org::orekit::time::AbsoluteDate a2((jobject) NULL);
            ::org::orekit::forces::gravity::potential::NormalizedSphericalHarmonicsProvider result((jobject) NULL);

            if (!parseArgs(args, "IIk", ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1, &a2))
            {
              OBJ_CALL(result = ::org::orekit::forces::gravity::potential::GravityFieldFactory::getConstantNormalizedProvider(a0, a1, a2));
              return ::org::orekit::forces::gravity::potential::t_NormalizedSphericalHarmonicsProvider::wrap_Object(result);
            }

            PyErr_SetArgsError(type, "getConstantNormalizedProvider", args);
            return NULL;
          }

          static PyObject *t_GravityFieldFactory_getConstantUnnormalizedProvider(PyTypeObject *type, PyObject *args)
          {
            jint a0;
            jint a1;
            ::org::orekit::time::AbsoluteDate a2((jobject) NULL);
            ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider result((jobject) NULL);

            if (!parseArgs(args, "IIk", ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1, &a2))
            {
              OBJ_CALL(result = ::org::orekit::forces::gravity::potential::GravityFieldFactory::getConstantUnnormalizedProvider(a0, a1, a2));
              return ::org::orekit::forces::gravity::potential::t_UnnormalizedSphericalHarmonicsProvider::wrap_Object(result);
            }

            PyErr_SetArgsError(type, "getConstantUnnormalizedProvider", args);
            return NULL;
          }

          static PyObject *t_GravityFieldFactory_getGravityFields(PyTypeObject *type)
          {
            ::org::orekit::forces::gravity::potential::LazyLoadedGravityFields result((jobject) NULL);
            OBJ_CALL(result = ::org::orekit::forces::gravity::potential::GravityFieldFactory::getGravityFields());
            return ::org::orekit::forces::gravity::potential::t_LazyLoadedGravityFields::wrap_Object(result);
          }

          static PyObject *t_GravityFieldFactory_getNormalizedProvider(PyTypeObject *type, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 1:
              {
                ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider a0((jobject) NULL);
                ::org::orekit::forces::gravity::potential::NormalizedSphericalHarmonicsProvider result((jobject) NULL);

                if (!parseArgs(args, "k", ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider::initializeClass, &a0))
                {
                  OBJ_CALL(result = ::org::orekit::forces::gravity::potential::GravityFieldFactory::getNormalizedProvider(a0));
                  return ::org::orekit::forces::gravity::potential::t_NormalizedSphericalHarmonicsProvider::wrap_Object(result);
                }
              }
              break;
             case 2:
              {
                jint a0;
                jint a1;
                ::org::orekit::forces::gravity::potential::NormalizedSphericalHarmonicsProvider result((jobject) NULL);

                if (!parseArgs(args, "II", &a0, &a1))
                {
                  OBJ_CALL(result = ::org::orekit::forces::gravity::potential::GravityFieldFactory::getNormalizedProvider(a0, a1));
                  return ::org::orekit::forces::gravity::potential::t_NormalizedSphericalHarmonicsProvider::wrap_Object(result);
                }
              }
              break;
             case 5:
              {
                jdouble a0;
                jdouble a1;
                ::org::orekit::forces::gravity::potential::TideSystem a2((jobject) NULL);
                PyTypeObject **p2;
                JArray< JArray< jdouble > > a3((jobject) NULL);
                JArray< JArray< jdouble > > a4((jobject) NULL);
                ::org::orekit::forces::gravity::potential::NormalizedSphericalHarmonicsProvider result((jobject) NULL);

                if (!parseArgs(args, "DDK[[D[[D", ::org::orekit::forces::gravity::potential::TideSystem::initializeClass, &a0, &a1, &a2, &p2, ::org::orekit::forces::gravity::potential::t_TideSystem::parameters_, &a3, &a4))
                {
                  OBJ_CALL(result = ::org::orekit::forces::gravity::potential::GravityFieldFactory::getNormalizedProvider(a0, a1, a2, a3, a4));
                  return ::org::orekit::forces::gravity::potential::t_NormalizedSphericalHarmonicsProvider::wrap_Object(result);
                }
              }
            }

            PyErr_SetArgsError(type, "getNormalizedProvider", args);
            return NULL;
          }

          static PyObject *t_GravityFieldFactory_getOceanLoadDeformationCoefficients(PyTypeObject *type)
          {
            ::org::orekit::forces::gravity::potential::OceanLoadDeformationCoefficients result((jobject) NULL);
            OBJ_CALL(result = ::org::orekit::forces::gravity::potential::GravityFieldFactory::getOceanLoadDeformationCoefficients());
            return ::org::orekit::forces::gravity::potential::t_OceanLoadDeformationCoefficients::wrap_Object(result);
          }

          static PyObject *t_GravityFieldFactory_getOceanTidesWaves(PyTypeObject *type, PyObject *args)
          {
            jint a0;
            jint a1;
            ::java::util::List result((jobject) NULL);

            if (!parseArgs(args, "II", &a0, &a1))
            {
              OBJ_CALL(result = ::org::orekit::forces::gravity::potential::GravityFieldFactory::getOceanTidesWaves(a0, a1));
              return ::java::util::t_List::wrap_Object(result, ::org::orekit::forces::gravity::potential::PY_TYPE(OceanTidesWave));
            }

            PyErr_SetArgsError(type, "getOceanTidesWaves", args);
            return NULL;
          }

          static PyObject *t_GravityFieldFactory_getUnnormalizationFactors(PyTypeObject *type, PyObject *args)
          {
            jint a0;
            jint a1;
            JArray< JArray< jdouble > > result((jobject) NULL);

            if (!parseArgs(args, "II", &a0, &a1))
            {
              OBJ_CALL(result = ::org::orekit::forces::gravity::potential::GravityFieldFactory::getUnnormalizationFactors(a0, a1));
              return JArray<jobject>(result.this$).wrap(NULL);
            }

            PyErr_SetArgsError(type, "getUnnormalizationFactors", args);
            return NULL;
          }

          static PyObject *t_GravityFieldFactory_getUnnormalizedProvider(PyTypeObject *type, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 1:
              {
                ::org::orekit::forces::gravity::potential::NormalizedSphericalHarmonicsProvider a0((jobject) NULL);
                ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider result((jobject) NULL);

                if (!parseArgs(args, "k", ::org::orekit::forces::gravity::potential::NormalizedSphericalHarmonicsProvider::initializeClass, &a0))
                {
                  OBJ_CALL(result = ::org::orekit::forces::gravity::potential::GravityFieldFactory::getUnnormalizedProvider(a0));
                  return ::org::orekit::forces::gravity::potential::t_UnnormalizedSphericalHarmonicsProvider::wrap_Object(result);
                }
              }
              break;
             case 2:
              {
                jint a0;
                jint a1;
                ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider result((jobject) NULL);

                if (!parseArgs(args, "II", &a0, &a1))
                {
                  OBJ_CALL(result = ::org::orekit::forces::gravity::potential::GravityFieldFactory::getUnnormalizedProvider(a0, a1));
                  return ::org::orekit::forces::gravity::potential::t_UnnormalizedSphericalHarmonicsProvider::wrap_Object(result);
                }
              }
              break;
             case 5:
              {
                jdouble a0;
                jdouble a1;
                ::org::orekit::forces::gravity::potential::TideSystem a2((jobject) NULL);
                PyTypeObject **p2;
                JArray< JArray< jdouble > > a3((jobject) NULL);
                JArray< JArray< jdouble > > a4((jobject) NULL);
                ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider result((jobject) NULL);

                if (!parseArgs(args, "DDK[[D[[D", ::org::orekit::forces::gravity::potential::TideSystem::initializeClass, &a0, &a1, &a2, &p2, ::org::orekit::forces::gravity::potential::t_TideSystem::parameters_, &a3, &a4))
                {
                  OBJ_CALL(result = ::org::orekit::forces::gravity::potential::GravityFieldFactory::getUnnormalizedProvider(a0, a1, a2, a3, a4));
                  return ::org::orekit::forces::gravity::potential::t_UnnormalizedSphericalHarmonicsProvider::wrap_Object(result);
                }
              }
            }

            PyErr_SetArgsError(type, "getUnnormalizedProvider", args);
            return NULL;
          }

          static PyObject *t_GravityFieldFactory_readGravityField(PyTypeObject *type, PyObject *args)
          {
            jint a0;
            jint a1;
            ::org::orekit::forces::gravity::potential::PotentialCoefficientsReader result((jobject) NULL);

            if (!parseArgs(args, "II", &a0, &a1))
            {
              OBJ_CALL(result = ::org::orekit::forces::gravity::potential::GravityFieldFactory::readGravityField(a0, a1));
              return ::org::orekit::forces::gravity::potential::t_PotentialCoefficientsReader::wrap_Object(result);
            }

            PyErr_SetArgsError(type, "readGravityField", args);
            return NULL;
          }

          static PyObject *t_GravityFieldFactory_get__gravityFields(t_GravityFieldFactory *self, void *data)
          {
            ::org::orekit::forces::gravity::potential::LazyLoadedGravityFields value((jobject) NULL);
            OBJ_CALL(value = self->object.getGravityFields());
            return ::org::orekit::forces::gravity::potential::t_LazyLoadedGravityFields::wrap_Object(value);
          }

          static PyObject *t_GravityFieldFactory_get__oceanLoadDeformationCoefficients(t_GravityFieldFactory *self, void *data)
          {
            ::org::orekit::forces::gravity::potential::OceanLoadDeformationCoefficients value((jobject) NULL);
            OBJ_CALL(value = self->object.getOceanLoadDeformationCoefficients());
            return ::org::orekit::forces::gravity::potential::t_OceanLoadDeformationCoefficients::wrap_Object(value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/measurements/filtering/ResidualFilter.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "org/orekit/estimation/measurements/ObservedMeasurement.h"
#include "java/lang/Class.h"
#include "org/orekit/estimation/measurements/filtering/MeasurementFilter.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace filtering {

          ::java::lang::Class *ResidualFilter::class$ = NULL;
          jmethodID *ResidualFilter::mids$ = NULL;
          bool ResidualFilter::live$ = false;

          jclass ResidualFilter::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/filtering/ResidualFilter");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_10f281d777284cea] = env->getMethodID(cls, "<init>", "(D)V");
              mids$[mid_filter_87933cc299a70778] = env->getMethodID(cls, "filter", "(Lorg/orekit/estimation/measurements/ObservedMeasurement;Lorg/orekit/propagation/SpacecraftState;)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          ResidualFilter::ResidualFilter(jdouble a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_10f281d777284cea, a0)) {}

          void ResidualFilter::filter(const ::org::orekit::estimation::measurements::ObservedMeasurement & a0, const ::org::orekit::propagation::SpacecraftState & a1) const
          {
            env->callVoidMethod(this$, mids$[mid_filter_87933cc299a70778], a0.this$, a1.this$);
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
          static PyObject *t_ResidualFilter_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_ResidualFilter_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_ResidualFilter_of_(t_ResidualFilter *self, PyObject *args);
          static int t_ResidualFilter_init_(t_ResidualFilter *self, PyObject *args, PyObject *kwds);
          static PyObject *t_ResidualFilter_filter(t_ResidualFilter *self, PyObject *args);
          static PyObject *t_ResidualFilter_get__parameters_(t_ResidualFilter *self, void *data);
          static PyGetSetDef t_ResidualFilter__fields_[] = {
            DECLARE_GET_FIELD(t_ResidualFilter, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_ResidualFilter__methods_[] = {
            DECLARE_METHOD(t_ResidualFilter, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_ResidualFilter, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_ResidualFilter, of_, METH_VARARGS),
            DECLARE_METHOD(t_ResidualFilter, filter, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(ResidualFilter)[] = {
            { Py_tp_methods, t_ResidualFilter__methods_ },
            { Py_tp_init, (void *) t_ResidualFilter_init_ },
            { Py_tp_getset, t_ResidualFilter__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(ResidualFilter)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(ResidualFilter, t_ResidualFilter, ResidualFilter);
          PyObject *t_ResidualFilter::wrap_Object(const ResidualFilter& object, PyTypeObject *p0)
          {
            PyObject *obj = t_ResidualFilter::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_ResidualFilter *self = (t_ResidualFilter *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          PyObject *t_ResidualFilter::wrap_jobject(const jobject& object, PyTypeObject *p0)
          {
            PyObject *obj = t_ResidualFilter::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_ResidualFilter *self = (t_ResidualFilter *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          void t_ResidualFilter::install(PyObject *module)
          {
            installType(&PY_TYPE(ResidualFilter), &PY_TYPE_DEF(ResidualFilter), module, "ResidualFilter", 0);
          }

          void t_ResidualFilter::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(ResidualFilter), "class_", make_descriptor(ResidualFilter::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(ResidualFilter), "wrapfn_", make_descriptor(t_ResidualFilter::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(ResidualFilter), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_ResidualFilter_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, ResidualFilter::initializeClass, 1)))
              return NULL;
            return t_ResidualFilter::wrap_Object(ResidualFilter(((t_ResidualFilter *) arg)->object.this$));
          }
          static PyObject *t_ResidualFilter_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, ResidualFilter::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_ResidualFilter_of_(t_ResidualFilter *self, PyObject *args)
          {
            if (!parseArg(args, "T", 1, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static int t_ResidualFilter_init_(t_ResidualFilter *self, PyObject *args, PyObject *kwds)
          {
            jdouble a0;
            ResidualFilter object((jobject) NULL);

            if (!parseArgs(args, "D", &a0))
            {
              INT_CALL(object = ResidualFilter(a0));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_ResidualFilter_filter(t_ResidualFilter *self, PyObject *args)
          {
            ::org::orekit::estimation::measurements::ObservedMeasurement a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::propagation::SpacecraftState a1((jobject) NULL);

            if (!parseArgs(args, "Kk", ::org::orekit::estimation::measurements::ObservedMeasurement::initializeClass, ::org::orekit::propagation::SpacecraftState::initializeClass, &a0, &p0, ::org::orekit::estimation::measurements::t_ObservedMeasurement::parameters_, &a1))
            {
              OBJ_CALL(self->object.filter(a0, a1));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "filter", args);
            return NULL;
          }
          static PyObject *t_ResidualFilter_get__parameters_(t_ResidualFilter *self, void *data)
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
#include "org/orekit/forces/maneuvers/propulsion/ThrustPropulsionModel.h"
#include "org/orekit/attitudes/Attitude.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldVector3D.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "java/lang/Class.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/orekit/attitudes/FieldAttitude.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace forces {
      namespace maneuvers {
        namespace propulsion {

          ::java::lang::Class *ThrustPropulsionModel::class$ = NULL;
          jmethodID *ThrustPropulsionModel::mids$ = NULL;
          bool ThrustPropulsionModel::live$ = false;

          jclass ThrustPropulsionModel::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/forces/maneuvers/propulsion/ThrustPropulsionModel");

              mids$ = new jmethodID[max_mid];
              mids$[mid_getAcceleration_28694fea3dbf2005] = env->getMethodID(cls, "getAcceleration", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/attitudes/Attitude;[D)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
              mids$[mid_getAcceleration_53d7cdec4a9e3cd4] = env->getMethodID(cls, "getAcceleration", "(Lorg/orekit/propagation/FieldSpacecraftState;Lorg/orekit/attitudes/FieldAttitude;[Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
              mids$[mid_getDirection_3fff8c49d4e2dc6b] = env->getMethodID(cls, "getDirection", "(Lorg/orekit/propagation/SpacecraftState;)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
              mids$[mid_getFlowRate_1bbf81d80c47ecdd] = env->getMethodID(cls, "getFlowRate", "(Lorg/orekit/propagation/SpacecraftState;)D");
              mids$[mid_getFlowRate_4ad317f7598a10a9] = env->getMethodID(cls, "getFlowRate", "(Lorg/orekit/propagation/FieldSpacecraftState;[Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_getFlowRate_810dcb8f9f5d191a] = env->getMethodID(cls, "getFlowRate", "(Lorg/orekit/propagation/SpacecraftState;[D)D");
              mids$[mid_getIsp_1bbf81d80c47ecdd] = env->getMethodID(cls, "getIsp", "(Lorg/orekit/propagation/SpacecraftState;)D");
              mids$[mid_getMassDerivatives_4ad317f7598a10a9] = env->getMethodID(cls, "getMassDerivatives", "(Lorg/orekit/propagation/FieldSpacecraftState;[Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_getMassDerivatives_810dcb8f9f5d191a] = env->getMethodID(cls, "getMassDerivatives", "(Lorg/orekit/propagation/SpacecraftState;[D)D");
              mids$[mid_getThrustVector_3fff8c49d4e2dc6b] = env->getMethodID(cls, "getThrustVector", "(Lorg/orekit/propagation/SpacecraftState;)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
              mids$[mid_getThrustVector_61944e27a39e8290] = env->getMethodID(cls, "getThrustVector", "(Lorg/orekit/propagation/SpacecraftState;[D)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
              mids$[mid_getThrustVector_b61fb59a041240c6] = env->getMethodID(cls, "getThrustVector", "(Lorg/orekit/propagation/FieldSpacecraftState;[Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          ::org::hipparchus::geometry::euclidean::threed::Vector3D ThrustPropulsionModel::getAcceleration(const ::org::orekit::propagation::SpacecraftState & a0, const ::org::orekit::attitudes::Attitude & a1, const JArray< jdouble > & a2) const
          {
            return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getAcceleration_28694fea3dbf2005], a0.this$, a1.this$, a2.this$));
          }

          ::org::hipparchus::geometry::euclidean::threed::FieldVector3D ThrustPropulsionModel::getAcceleration(const ::org::orekit::propagation::FieldSpacecraftState & a0, const ::org::orekit::attitudes::FieldAttitude & a1, const JArray< ::org::hipparchus::CalculusFieldElement > & a2) const
          {
            return ::org::hipparchus::geometry::euclidean::threed::FieldVector3D(env->callObjectMethod(this$, mids$[mid_getAcceleration_53d7cdec4a9e3cd4], a0.this$, a1.this$, a2.this$));
          }

          ::org::hipparchus::geometry::euclidean::threed::Vector3D ThrustPropulsionModel::getDirection(const ::org::orekit::propagation::SpacecraftState & a0) const
          {
            return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getDirection_3fff8c49d4e2dc6b], a0.this$));
          }

          jdouble ThrustPropulsionModel::getFlowRate(const ::org::orekit::propagation::SpacecraftState & a0) const
          {
            return env->callDoubleMethod(this$, mids$[mid_getFlowRate_1bbf81d80c47ecdd], a0.this$);
          }

          ::org::hipparchus::CalculusFieldElement ThrustPropulsionModel::getFlowRate(const ::org::orekit::propagation::FieldSpacecraftState & a0, const JArray< ::org::hipparchus::CalculusFieldElement > & a1) const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getFlowRate_4ad317f7598a10a9], a0.this$, a1.this$));
          }

          jdouble ThrustPropulsionModel::getFlowRate(const ::org::orekit::propagation::SpacecraftState & a0, const JArray< jdouble > & a1) const
          {
            return env->callDoubleMethod(this$, mids$[mid_getFlowRate_810dcb8f9f5d191a], a0.this$, a1.this$);
          }

          jdouble ThrustPropulsionModel::getIsp(const ::org::orekit::propagation::SpacecraftState & a0) const
          {
            return env->callDoubleMethod(this$, mids$[mid_getIsp_1bbf81d80c47ecdd], a0.this$);
          }

          ::org::hipparchus::CalculusFieldElement ThrustPropulsionModel::getMassDerivatives(const ::org::orekit::propagation::FieldSpacecraftState & a0, const JArray< ::org::hipparchus::CalculusFieldElement > & a1) const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getMassDerivatives_4ad317f7598a10a9], a0.this$, a1.this$));
          }

          jdouble ThrustPropulsionModel::getMassDerivatives(const ::org::orekit::propagation::SpacecraftState & a0, const JArray< jdouble > & a1) const
          {
            return env->callDoubleMethod(this$, mids$[mid_getMassDerivatives_810dcb8f9f5d191a], a0.this$, a1.this$);
          }

          ::org::hipparchus::geometry::euclidean::threed::Vector3D ThrustPropulsionModel::getThrustVector(const ::org::orekit::propagation::SpacecraftState & a0) const
          {
            return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getThrustVector_3fff8c49d4e2dc6b], a0.this$));
          }

          ::org::hipparchus::geometry::euclidean::threed::Vector3D ThrustPropulsionModel::getThrustVector(const ::org::orekit::propagation::SpacecraftState & a0, const JArray< jdouble > & a1) const
          {
            return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getThrustVector_61944e27a39e8290], a0.this$, a1.this$));
          }

          ::org::hipparchus::geometry::euclidean::threed::FieldVector3D ThrustPropulsionModel::getThrustVector(const ::org::orekit::propagation::FieldSpacecraftState & a0, const JArray< ::org::hipparchus::CalculusFieldElement > & a1) const
          {
            return ::org::hipparchus::geometry::euclidean::threed::FieldVector3D(env->callObjectMethod(this$, mids$[mid_getThrustVector_b61fb59a041240c6], a0.this$, a1.this$));
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
        namespace propulsion {
          static PyObject *t_ThrustPropulsionModel_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_ThrustPropulsionModel_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_ThrustPropulsionModel_getAcceleration(t_ThrustPropulsionModel *self, PyObject *args);
          static PyObject *t_ThrustPropulsionModel_getDirection(t_ThrustPropulsionModel *self, PyObject *arg);
          static PyObject *t_ThrustPropulsionModel_getFlowRate(t_ThrustPropulsionModel *self, PyObject *args);
          static PyObject *t_ThrustPropulsionModel_getIsp(t_ThrustPropulsionModel *self, PyObject *arg);
          static PyObject *t_ThrustPropulsionModel_getMassDerivatives(t_ThrustPropulsionModel *self, PyObject *args);
          static PyObject *t_ThrustPropulsionModel_getThrustVector(t_ThrustPropulsionModel *self, PyObject *args);

          static PyMethodDef t_ThrustPropulsionModel__methods_[] = {
            DECLARE_METHOD(t_ThrustPropulsionModel, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_ThrustPropulsionModel, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_ThrustPropulsionModel, getAcceleration, METH_VARARGS),
            DECLARE_METHOD(t_ThrustPropulsionModel, getDirection, METH_O),
            DECLARE_METHOD(t_ThrustPropulsionModel, getFlowRate, METH_VARARGS),
            DECLARE_METHOD(t_ThrustPropulsionModel, getIsp, METH_O),
            DECLARE_METHOD(t_ThrustPropulsionModel, getMassDerivatives, METH_VARARGS),
            DECLARE_METHOD(t_ThrustPropulsionModel, getThrustVector, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(ThrustPropulsionModel)[] = {
            { Py_tp_methods, t_ThrustPropulsionModel__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(ThrustPropulsionModel)[] = {
            &PY_TYPE_DEF(::org::orekit::forces::maneuvers::propulsion::PropulsionModel),
            NULL
          };

          DEFINE_TYPE(ThrustPropulsionModel, t_ThrustPropulsionModel, ThrustPropulsionModel);

          void t_ThrustPropulsionModel::install(PyObject *module)
          {
            installType(&PY_TYPE(ThrustPropulsionModel), &PY_TYPE_DEF(ThrustPropulsionModel), module, "ThrustPropulsionModel", 0);
          }

          void t_ThrustPropulsionModel::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(ThrustPropulsionModel), "class_", make_descriptor(ThrustPropulsionModel::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(ThrustPropulsionModel), "wrapfn_", make_descriptor(t_ThrustPropulsionModel::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(ThrustPropulsionModel), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_ThrustPropulsionModel_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, ThrustPropulsionModel::initializeClass, 1)))
              return NULL;
            return t_ThrustPropulsionModel::wrap_Object(ThrustPropulsionModel(((t_ThrustPropulsionModel *) arg)->object.this$));
          }
          static PyObject *t_ThrustPropulsionModel_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, ThrustPropulsionModel::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_ThrustPropulsionModel_getAcceleration(t_ThrustPropulsionModel *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 3:
              {
                ::org::orekit::propagation::FieldSpacecraftState a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::orekit::attitudes::FieldAttitude a1((jobject) NULL);
                PyTypeObject **p1;
                JArray< ::org::hipparchus::CalculusFieldElement > a2((jobject) NULL);
                PyTypeObject **p2;
                ::org::hipparchus::geometry::euclidean::threed::FieldVector3D result((jobject) NULL);

                if (!parseArgs(args, "KK[K", ::org::orekit::propagation::FieldSpacecraftState::initializeClass, ::org::orekit::attitudes::FieldAttitude::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::orekit::propagation::t_FieldSpacecraftState::parameters_, &a1, &p1, ::org::orekit::attitudes::t_FieldAttitude::parameters_, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_))
                {
                  OBJ_CALL(result = self->object.getAcceleration(a0, a1, a2));
                  return ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(result);
                }
              }
              {
                ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
                ::org::orekit::attitudes::Attitude a1((jobject) NULL);
                JArray< jdouble > a2((jobject) NULL);
                ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);

                if (!parseArgs(args, "kk[D", ::org::orekit::propagation::SpacecraftState::initializeClass, ::org::orekit::attitudes::Attitude::initializeClass, &a0, &a1, &a2))
                {
                  OBJ_CALL(result = self->object.getAcceleration(a0, a1, a2));
                  return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
                }
              }
            }

            return callSuper(PY_TYPE(ThrustPropulsionModel), (PyObject *) self, "getAcceleration", args, 2);
          }

          static PyObject *t_ThrustPropulsionModel_getDirection(t_ThrustPropulsionModel *self, PyObject *arg)
          {
            ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
            ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);

            if (!parseArg(arg, "k", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.getDirection(a0));
              return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "getDirection", arg);
            return NULL;
          }

          static PyObject *t_ThrustPropulsionModel_getFlowRate(t_ThrustPropulsionModel *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 1:
              {
                ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
                jdouble result;

                if (!parseArgs(args, "k", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0))
                {
                  OBJ_CALL(result = self->object.getFlowRate(a0));
                  return PyFloat_FromDouble((double) result);
                }
              }
              break;
             case 2:
              {
                ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
                JArray< jdouble > a1((jobject) NULL);
                jdouble result;

                if (!parseArgs(args, "k[D", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0, &a1))
                {
                  OBJ_CALL(result = self->object.getFlowRate(a0, a1));
                  return PyFloat_FromDouble((double) result);
                }
              }
              {
                ::org::orekit::propagation::FieldSpacecraftState a0((jobject) NULL);
                PyTypeObject **p0;
                JArray< ::org::hipparchus::CalculusFieldElement > a1((jobject) NULL);
                PyTypeObject **p1;
                ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                if (!parseArgs(args, "K[K", ::org::orekit::propagation::FieldSpacecraftState::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::orekit::propagation::t_FieldSpacecraftState::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_))
                {
                  OBJ_CALL(result = self->object.getFlowRate(a0, a1));
                  return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                }
              }
            }

            PyErr_SetArgsError((PyObject *) self, "getFlowRate", args);
            return NULL;
          }

          static PyObject *t_ThrustPropulsionModel_getIsp(t_ThrustPropulsionModel *self, PyObject *arg)
          {
            ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
            jdouble result;

            if (!parseArg(arg, "k", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.getIsp(a0));
              return PyFloat_FromDouble((double) result);
            }

            PyErr_SetArgsError((PyObject *) self, "getIsp", arg);
            return NULL;
          }

          static PyObject *t_ThrustPropulsionModel_getMassDerivatives(t_ThrustPropulsionModel *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 2:
              {
                ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
                JArray< jdouble > a1((jobject) NULL);
                jdouble result;

                if (!parseArgs(args, "k[D", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0, &a1))
                {
                  OBJ_CALL(result = self->object.getMassDerivatives(a0, a1));
                  return PyFloat_FromDouble((double) result);
                }
              }
              {
                ::org::orekit::propagation::FieldSpacecraftState a0((jobject) NULL);
                PyTypeObject **p0;
                JArray< ::org::hipparchus::CalculusFieldElement > a1((jobject) NULL);
                PyTypeObject **p1;
                ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                if (!parseArgs(args, "K[K", ::org::orekit::propagation::FieldSpacecraftState::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::orekit::propagation::t_FieldSpacecraftState::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_))
                {
                  OBJ_CALL(result = self->object.getMassDerivatives(a0, a1));
                  return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                }
              }
            }

            return callSuper(PY_TYPE(ThrustPropulsionModel), (PyObject *) self, "getMassDerivatives", args, 2);
          }

          static PyObject *t_ThrustPropulsionModel_getThrustVector(t_ThrustPropulsionModel *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 1:
              {
                ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
                ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);

                if (!parseArgs(args, "k", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0))
                {
                  OBJ_CALL(result = self->object.getThrustVector(a0));
                  return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
                }
              }
              break;
             case 2:
              {
                ::org::orekit::propagation::FieldSpacecraftState a0((jobject) NULL);
                PyTypeObject **p0;
                JArray< ::org::hipparchus::CalculusFieldElement > a1((jobject) NULL);
                PyTypeObject **p1;
                ::org::hipparchus::geometry::euclidean::threed::FieldVector3D result((jobject) NULL);

                if (!parseArgs(args, "K[K", ::org::orekit::propagation::FieldSpacecraftState::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::orekit::propagation::t_FieldSpacecraftState::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_))
                {
                  OBJ_CALL(result = self->object.getThrustVector(a0, a1));
                  return ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(result);
                }
              }
              {
                ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
                JArray< jdouble > a1((jobject) NULL);
                ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);

                if (!parseArgs(args, "k[D", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0, &a1))
                {
                  OBJ_CALL(result = self->object.getThrustVector(a0, a1));
                  return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
                }
              }
            }

            PyErr_SetArgsError((PyObject *) self, "getThrustVector", args);
            return NULL;
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/semianalytical/dsst/utilities/CjSjCoefficient.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace semianalytical {
        namespace dsst {
          namespace utilities {

            ::java::lang::Class *CjSjCoefficient::class$ = NULL;
            jmethodID *CjSjCoefficient::mids$ = NULL;
            bool CjSjCoefficient::live$ = false;

            jclass CjSjCoefficient::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/propagation/semianalytical/dsst/utilities/CjSjCoefficient");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_ab23f4ae0fb33968] = env->getMethodID(cls, "<init>", "(DD)V");
                mids$[mid_getCj_69cfb132c661aca4] = env->getMethodID(cls, "getCj", "(I)D");
                mids$[mid_getDcjDh_69cfb132c661aca4] = env->getMethodID(cls, "getDcjDh", "(I)D");
                mids$[mid_getDcjDk_69cfb132c661aca4] = env->getMethodID(cls, "getDcjDk", "(I)D");
                mids$[mid_getDsjDh_69cfb132c661aca4] = env->getMethodID(cls, "getDsjDh", "(I)D");
                mids$[mid_getDsjDk_69cfb132c661aca4] = env->getMethodID(cls, "getDsjDk", "(I)D");
                mids$[mid_getSj_69cfb132c661aca4] = env->getMethodID(cls, "getSj", "(I)D");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            CjSjCoefficient::CjSjCoefficient(jdouble a0, jdouble a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_ab23f4ae0fb33968, a0, a1)) {}

            jdouble CjSjCoefficient::getCj(jint a0) const
            {
              return env->callDoubleMethod(this$, mids$[mid_getCj_69cfb132c661aca4], a0);
            }

            jdouble CjSjCoefficient::getDcjDh(jint a0) const
            {
              return env->callDoubleMethod(this$, mids$[mid_getDcjDh_69cfb132c661aca4], a0);
            }

            jdouble CjSjCoefficient::getDcjDk(jint a0) const
            {
              return env->callDoubleMethod(this$, mids$[mid_getDcjDk_69cfb132c661aca4], a0);
            }

            jdouble CjSjCoefficient::getDsjDh(jint a0) const
            {
              return env->callDoubleMethod(this$, mids$[mid_getDsjDh_69cfb132c661aca4], a0);
            }

            jdouble CjSjCoefficient::getDsjDk(jint a0) const
            {
              return env->callDoubleMethod(this$, mids$[mid_getDsjDk_69cfb132c661aca4], a0);
            }

            jdouble CjSjCoefficient::getSj(jint a0) const
            {
              return env->callDoubleMethod(this$, mids$[mid_getSj_69cfb132c661aca4], a0);
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
            static PyObject *t_CjSjCoefficient_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_CjSjCoefficient_instance_(PyTypeObject *type, PyObject *arg);
            static int t_CjSjCoefficient_init_(t_CjSjCoefficient *self, PyObject *args, PyObject *kwds);
            static PyObject *t_CjSjCoefficient_getCj(t_CjSjCoefficient *self, PyObject *arg);
            static PyObject *t_CjSjCoefficient_getDcjDh(t_CjSjCoefficient *self, PyObject *arg);
            static PyObject *t_CjSjCoefficient_getDcjDk(t_CjSjCoefficient *self, PyObject *arg);
            static PyObject *t_CjSjCoefficient_getDsjDh(t_CjSjCoefficient *self, PyObject *arg);
            static PyObject *t_CjSjCoefficient_getDsjDk(t_CjSjCoefficient *self, PyObject *arg);
            static PyObject *t_CjSjCoefficient_getSj(t_CjSjCoefficient *self, PyObject *arg);

            static PyMethodDef t_CjSjCoefficient__methods_[] = {
              DECLARE_METHOD(t_CjSjCoefficient, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_CjSjCoefficient, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_CjSjCoefficient, getCj, METH_O),
              DECLARE_METHOD(t_CjSjCoefficient, getDcjDh, METH_O),
              DECLARE_METHOD(t_CjSjCoefficient, getDcjDk, METH_O),
              DECLARE_METHOD(t_CjSjCoefficient, getDsjDh, METH_O),
              DECLARE_METHOD(t_CjSjCoefficient, getDsjDk, METH_O),
              DECLARE_METHOD(t_CjSjCoefficient, getSj, METH_O),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(CjSjCoefficient)[] = {
              { Py_tp_methods, t_CjSjCoefficient__methods_ },
              { Py_tp_init, (void *) t_CjSjCoefficient_init_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(CjSjCoefficient)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(CjSjCoefficient, t_CjSjCoefficient, CjSjCoefficient);

            void t_CjSjCoefficient::install(PyObject *module)
            {
              installType(&PY_TYPE(CjSjCoefficient), &PY_TYPE_DEF(CjSjCoefficient), module, "CjSjCoefficient", 0);
            }

            void t_CjSjCoefficient::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(CjSjCoefficient), "class_", make_descriptor(CjSjCoefficient::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CjSjCoefficient), "wrapfn_", make_descriptor(t_CjSjCoefficient::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CjSjCoefficient), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_CjSjCoefficient_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, CjSjCoefficient::initializeClass, 1)))
                return NULL;
              return t_CjSjCoefficient::wrap_Object(CjSjCoefficient(((t_CjSjCoefficient *) arg)->object.this$));
            }
            static PyObject *t_CjSjCoefficient_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, CjSjCoefficient::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static int t_CjSjCoefficient_init_(t_CjSjCoefficient *self, PyObject *args, PyObject *kwds)
            {
              jdouble a0;
              jdouble a1;
              CjSjCoefficient object((jobject) NULL);

              if (!parseArgs(args, "DD", &a0, &a1))
              {
                INT_CALL(object = CjSjCoefficient(a0, a1));
                self->object = object;
              }
              else
              {
                PyErr_SetArgsError((PyObject *) self, "__init__", args);
                return -1;
              }

              return 0;
            }

            static PyObject *t_CjSjCoefficient_getCj(t_CjSjCoefficient *self, PyObject *arg)
            {
              jint a0;
              jdouble result;

              if (!parseArg(arg, "I", &a0))
              {
                OBJ_CALL(result = self->object.getCj(a0));
                return PyFloat_FromDouble((double) result);
              }

              PyErr_SetArgsError((PyObject *) self, "getCj", arg);
              return NULL;
            }

            static PyObject *t_CjSjCoefficient_getDcjDh(t_CjSjCoefficient *self, PyObject *arg)
            {
              jint a0;
              jdouble result;

              if (!parseArg(arg, "I", &a0))
              {
                OBJ_CALL(result = self->object.getDcjDh(a0));
                return PyFloat_FromDouble((double) result);
              }

              PyErr_SetArgsError((PyObject *) self, "getDcjDh", arg);
              return NULL;
            }

            static PyObject *t_CjSjCoefficient_getDcjDk(t_CjSjCoefficient *self, PyObject *arg)
            {
              jint a0;
              jdouble result;

              if (!parseArg(arg, "I", &a0))
              {
                OBJ_CALL(result = self->object.getDcjDk(a0));
                return PyFloat_FromDouble((double) result);
              }

              PyErr_SetArgsError((PyObject *) self, "getDcjDk", arg);
              return NULL;
            }

            static PyObject *t_CjSjCoefficient_getDsjDh(t_CjSjCoefficient *self, PyObject *arg)
            {
              jint a0;
              jdouble result;

              if (!parseArg(arg, "I", &a0))
              {
                OBJ_CALL(result = self->object.getDsjDh(a0));
                return PyFloat_FromDouble((double) result);
              }

              PyErr_SetArgsError((PyObject *) self, "getDsjDh", arg);
              return NULL;
            }

            static PyObject *t_CjSjCoefficient_getDsjDk(t_CjSjCoefficient *self, PyObject *arg)
            {
              jint a0;
              jdouble result;

              if (!parseArg(arg, "I", &a0))
              {
                OBJ_CALL(result = self->object.getDsjDk(a0));
                return PyFloat_FromDouble((double) result);
              }

              PyErr_SetArgsError((PyObject *) self, "getDsjDk", arg);
              return NULL;
            }

            static PyObject *t_CjSjCoefficient_getSj(t_CjSjCoefficient *self, PyObject *arg)
            {
              jint a0;
              jdouble result;

              if (!parseArg(arg, "I", &a0))
              {
                OBJ_CALL(result = self->object.getSj(a0));
                return PyFloat_FromDouble((double) result);
              }

              PyErr_SetArgsError((PyObject *) self, "getSj", arg);
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
#include "org/orekit/estimation/sequential/KalmanEstimation.h"
#include "org/orekit/utils/ParameterDriversList.h"
#include "org/orekit/estimation/measurements/EstimatedMeasurement.h"
#include "org/hipparchus/linear/RealMatrix.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/hipparchus/linear/RealVector.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace sequential {

        ::java::lang::Class *KalmanEstimation::class$ = NULL;
        jmethodID *KalmanEstimation::mids$ = NULL;
        bool KalmanEstimation::live$ = false;

        jclass KalmanEstimation::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/estimation/sequential/KalmanEstimation");

            mids$ = new jmethodID[max_mid];
            mids$[mid_getCorrectedMeasurement_95a396fe45ccbbc0] = env->getMethodID(cls, "getCorrectedMeasurement", "()Lorg/orekit/estimation/measurements/EstimatedMeasurement;");
            mids$[mid_getCorrectedSpacecraftStates_5dccf571345671af] = env->getMethodID(cls, "getCorrectedSpacecraftStates", "()[Lorg/orekit/propagation/SpacecraftState;");
            mids$[mid_getCurrentDate_7a97f7e149e79afb] = env->getMethodID(cls, "getCurrentDate", "()Lorg/orekit/time/AbsoluteDate;");
            mids$[mid_getCurrentMeasurementNumber_412668abc8d889e9] = env->getMethodID(cls, "getCurrentMeasurementNumber", "()I");
            mids$[mid_getEstimatedMeasurementsParameters_467d574a7997e53a] = env->getMethodID(cls, "getEstimatedMeasurementsParameters", "()Lorg/orekit/utils/ParameterDriversList;");
            mids$[mid_getEstimatedOrbitalParameters_467d574a7997e53a] = env->getMethodID(cls, "getEstimatedOrbitalParameters", "()Lorg/orekit/utils/ParameterDriversList;");
            mids$[mid_getEstimatedPropagationParameters_467d574a7997e53a] = env->getMethodID(cls, "getEstimatedPropagationParameters", "()Lorg/orekit/utils/ParameterDriversList;");
            mids$[mid_getPhysicalEstimatedCovarianceMatrix_70a207fcbc031df2] = env->getMethodID(cls, "getPhysicalEstimatedCovarianceMatrix", "()Lorg/hipparchus/linear/RealMatrix;");
            mids$[mid_getPhysicalEstimatedState_75d50d73180655b4] = env->getMethodID(cls, "getPhysicalEstimatedState", "()Lorg/hipparchus/linear/RealVector;");
            mids$[mid_getPhysicalInnovationCovarianceMatrix_70a207fcbc031df2] = env->getMethodID(cls, "getPhysicalInnovationCovarianceMatrix", "()Lorg/hipparchus/linear/RealMatrix;");
            mids$[mid_getPhysicalKalmanGain_70a207fcbc031df2] = env->getMethodID(cls, "getPhysicalKalmanGain", "()Lorg/hipparchus/linear/RealMatrix;");
            mids$[mid_getPhysicalMeasurementJacobian_70a207fcbc031df2] = env->getMethodID(cls, "getPhysicalMeasurementJacobian", "()Lorg/hipparchus/linear/RealMatrix;");
            mids$[mid_getPhysicalStateTransitionMatrix_70a207fcbc031df2] = env->getMethodID(cls, "getPhysicalStateTransitionMatrix", "()Lorg/hipparchus/linear/RealMatrix;");
            mids$[mid_getPredictedMeasurement_95a396fe45ccbbc0] = env->getMethodID(cls, "getPredictedMeasurement", "()Lorg/orekit/estimation/measurements/EstimatedMeasurement;");
            mids$[mid_getPredictedSpacecraftStates_5dccf571345671af] = env->getMethodID(cls, "getPredictedSpacecraftStates", "()[Lorg/orekit/propagation/SpacecraftState;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ::org::orekit::estimation::measurements::EstimatedMeasurement KalmanEstimation::getCorrectedMeasurement() const
        {
          return ::org::orekit::estimation::measurements::EstimatedMeasurement(env->callObjectMethod(this$, mids$[mid_getCorrectedMeasurement_95a396fe45ccbbc0]));
        }

        JArray< ::org::orekit::propagation::SpacecraftState > KalmanEstimation::getCorrectedSpacecraftStates() const
        {
          return JArray< ::org::orekit::propagation::SpacecraftState >(env->callObjectMethod(this$, mids$[mid_getCorrectedSpacecraftStates_5dccf571345671af]));
        }

        ::org::orekit::time::AbsoluteDate KalmanEstimation::getCurrentDate() const
        {
          return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getCurrentDate_7a97f7e149e79afb]));
        }

        jint KalmanEstimation::getCurrentMeasurementNumber() const
        {
          return env->callIntMethod(this$, mids$[mid_getCurrentMeasurementNumber_412668abc8d889e9]);
        }

        ::org::orekit::utils::ParameterDriversList KalmanEstimation::getEstimatedMeasurementsParameters() const
        {
          return ::org::orekit::utils::ParameterDriversList(env->callObjectMethod(this$, mids$[mid_getEstimatedMeasurementsParameters_467d574a7997e53a]));
        }

        ::org::orekit::utils::ParameterDriversList KalmanEstimation::getEstimatedOrbitalParameters() const
        {
          return ::org::orekit::utils::ParameterDriversList(env->callObjectMethod(this$, mids$[mid_getEstimatedOrbitalParameters_467d574a7997e53a]));
        }

        ::org::orekit::utils::ParameterDriversList KalmanEstimation::getEstimatedPropagationParameters() const
        {
          return ::org::orekit::utils::ParameterDriversList(env->callObjectMethod(this$, mids$[mid_getEstimatedPropagationParameters_467d574a7997e53a]));
        }

        ::org::hipparchus::linear::RealMatrix KalmanEstimation::getPhysicalEstimatedCovarianceMatrix() const
        {
          return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_getPhysicalEstimatedCovarianceMatrix_70a207fcbc031df2]));
        }

        ::org::hipparchus::linear::RealVector KalmanEstimation::getPhysicalEstimatedState() const
        {
          return ::org::hipparchus::linear::RealVector(env->callObjectMethod(this$, mids$[mid_getPhysicalEstimatedState_75d50d73180655b4]));
        }

        ::org::hipparchus::linear::RealMatrix KalmanEstimation::getPhysicalInnovationCovarianceMatrix() const
        {
          return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_getPhysicalInnovationCovarianceMatrix_70a207fcbc031df2]));
        }

        ::org::hipparchus::linear::RealMatrix KalmanEstimation::getPhysicalKalmanGain() const
        {
          return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_getPhysicalKalmanGain_70a207fcbc031df2]));
        }

        ::org::hipparchus::linear::RealMatrix KalmanEstimation::getPhysicalMeasurementJacobian() const
        {
          return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_getPhysicalMeasurementJacobian_70a207fcbc031df2]));
        }

        ::org::hipparchus::linear::RealMatrix KalmanEstimation::getPhysicalStateTransitionMatrix() const
        {
          return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_getPhysicalStateTransitionMatrix_70a207fcbc031df2]));
        }

        ::org::orekit::estimation::measurements::EstimatedMeasurement KalmanEstimation::getPredictedMeasurement() const
        {
          return ::org::orekit::estimation::measurements::EstimatedMeasurement(env->callObjectMethod(this$, mids$[mid_getPredictedMeasurement_95a396fe45ccbbc0]));
        }

        JArray< ::org::orekit::propagation::SpacecraftState > KalmanEstimation::getPredictedSpacecraftStates() const
        {
          return JArray< ::org::orekit::propagation::SpacecraftState >(env->callObjectMethod(this$, mids$[mid_getPredictedSpacecraftStates_5dccf571345671af]));
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
      namespace sequential {
        static PyObject *t_KalmanEstimation_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_KalmanEstimation_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_KalmanEstimation_getCorrectedMeasurement(t_KalmanEstimation *self);
        static PyObject *t_KalmanEstimation_getCorrectedSpacecraftStates(t_KalmanEstimation *self);
        static PyObject *t_KalmanEstimation_getCurrentDate(t_KalmanEstimation *self);
        static PyObject *t_KalmanEstimation_getCurrentMeasurementNumber(t_KalmanEstimation *self);
        static PyObject *t_KalmanEstimation_getEstimatedMeasurementsParameters(t_KalmanEstimation *self);
        static PyObject *t_KalmanEstimation_getEstimatedOrbitalParameters(t_KalmanEstimation *self);
        static PyObject *t_KalmanEstimation_getEstimatedPropagationParameters(t_KalmanEstimation *self);
        static PyObject *t_KalmanEstimation_getPhysicalEstimatedCovarianceMatrix(t_KalmanEstimation *self);
        static PyObject *t_KalmanEstimation_getPhysicalEstimatedState(t_KalmanEstimation *self);
        static PyObject *t_KalmanEstimation_getPhysicalInnovationCovarianceMatrix(t_KalmanEstimation *self);
        static PyObject *t_KalmanEstimation_getPhysicalKalmanGain(t_KalmanEstimation *self);
        static PyObject *t_KalmanEstimation_getPhysicalMeasurementJacobian(t_KalmanEstimation *self);
        static PyObject *t_KalmanEstimation_getPhysicalStateTransitionMatrix(t_KalmanEstimation *self);
        static PyObject *t_KalmanEstimation_getPredictedMeasurement(t_KalmanEstimation *self);
        static PyObject *t_KalmanEstimation_getPredictedSpacecraftStates(t_KalmanEstimation *self);
        static PyObject *t_KalmanEstimation_get__correctedMeasurement(t_KalmanEstimation *self, void *data);
        static PyObject *t_KalmanEstimation_get__correctedSpacecraftStates(t_KalmanEstimation *self, void *data);
        static PyObject *t_KalmanEstimation_get__currentDate(t_KalmanEstimation *self, void *data);
        static PyObject *t_KalmanEstimation_get__currentMeasurementNumber(t_KalmanEstimation *self, void *data);
        static PyObject *t_KalmanEstimation_get__estimatedMeasurementsParameters(t_KalmanEstimation *self, void *data);
        static PyObject *t_KalmanEstimation_get__estimatedOrbitalParameters(t_KalmanEstimation *self, void *data);
        static PyObject *t_KalmanEstimation_get__estimatedPropagationParameters(t_KalmanEstimation *self, void *data);
        static PyObject *t_KalmanEstimation_get__physicalEstimatedCovarianceMatrix(t_KalmanEstimation *self, void *data);
        static PyObject *t_KalmanEstimation_get__physicalEstimatedState(t_KalmanEstimation *self, void *data);
        static PyObject *t_KalmanEstimation_get__physicalInnovationCovarianceMatrix(t_KalmanEstimation *self, void *data);
        static PyObject *t_KalmanEstimation_get__physicalKalmanGain(t_KalmanEstimation *self, void *data);
        static PyObject *t_KalmanEstimation_get__physicalMeasurementJacobian(t_KalmanEstimation *self, void *data);
        static PyObject *t_KalmanEstimation_get__physicalStateTransitionMatrix(t_KalmanEstimation *self, void *data);
        static PyObject *t_KalmanEstimation_get__predictedMeasurement(t_KalmanEstimation *self, void *data);
        static PyObject *t_KalmanEstimation_get__predictedSpacecraftStates(t_KalmanEstimation *self, void *data);
        static PyGetSetDef t_KalmanEstimation__fields_[] = {
          DECLARE_GET_FIELD(t_KalmanEstimation, correctedMeasurement),
          DECLARE_GET_FIELD(t_KalmanEstimation, correctedSpacecraftStates),
          DECLARE_GET_FIELD(t_KalmanEstimation, currentDate),
          DECLARE_GET_FIELD(t_KalmanEstimation, currentMeasurementNumber),
          DECLARE_GET_FIELD(t_KalmanEstimation, estimatedMeasurementsParameters),
          DECLARE_GET_FIELD(t_KalmanEstimation, estimatedOrbitalParameters),
          DECLARE_GET_FIELD(t_KalmanEstimation, estimatedPropagationParameters),
          DECLARE_GET_FIELD(t_KalmanEstimation, physicalEstimatedCovarianceMatrix),
          DECLARE_GET_FIELD(t_KalmanEstimation, physicalEstimatedState),
          DECLARE_GET_FIELD(t_KalmanEstimation, physicalInnovationCovarianceMatrix),
          DECLARE_GET_FIELD(t_KalmanEstimation, physicalKalmanGain),
          DECLARE_GET_FIELD(t_KalmanEstimation, physicalMeasurementJacobian),
          DECLARE_GET_FIELD(t_KalmanEstimation, physicalStateTransitionMatrix),
          DECLARE_GET_FIELD(t_KalmanEstimation, predictedMeasurement),
          DECLARE_GET_FIELD(t_KalmanEstimation, predictedSpacecraftStates),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_KalmanEstimation__methods_[] = {
          DECLARE_METHOD(t_KalmanEstimation, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_KalmanEstimation, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_KalmanEstimation, getCorrectedMeasurement, METH_NOARGS),
          DECLARE_METHOD(t_KalmanEstimation, getCorrectedSpacecraftStates, METH_NOARGS),
          DECLARE_METHOD(t_KalmanEstimation, getCurrentDate, METH_NOARGS),
          DECLARE_METHOD(t_KalmanEstimation, getCurrentMeasurementNumber, METH_NOARGS),
          DECLARE_METHOD(t_KalmanEstimation, getEstimatedMeasurementsParameters, METH_NOARGS),
          DECLARE_METHOD(t_KalmanEstimation, getEstimatedOrbitalParameters, METH_NOARGS),
          DECLARE_METHOD(t_KalmanEstimation, getEstimatedPropagationParameters, METH_NOARGS),
          DECLARE_METHOD(t_KalmanEstimation, getPhysicalEstimatedCovarianceMatrix, METH_NOARGS),
          DECLARE_METHOD(t_KalmanEstimation, getPhysicalEstimatedState, METH_NOARGS),
          DECLARE_METHOD(t_KalmanEstimation, getPhysicalInnovationCovarianceMatrix, METH_NOARGS),
          DECLARE_METHOD(t_KalmanEstimation, getPhysicalKalmanGain, METH_NOARGS),
          DECLARE_METHOD(t_KalmanEstimation, getPhysicalMeasurementJacobian, METH_NOARGS),
          DECLARE_METHOD(t_KalmanEstimation, getPhysicalStateTransitionMatrix, METH_NOARGS),
          DECLARE_METHOD(t_KalmanEstimation, getPredictedMeasurement, METH_NOARGS),
          DECLARE_METHOD(t_KalmanEstimation, getPredictedSpacecraftStates, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(KalmanEstimation)[] = {
          { Py_tp_methods, t_KalmanEstimation__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_KalmanEstimation__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(KalmanEstimation)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(KalmanEstimation, t_KalmanEstimation, KalmanEstimation);

        void t_KalmanEstimation::install(PyObject *module)
        {
          installType(&PY_TYPE(KalmanEstimation), &PY_TYPE_DEF(KalmanEstimation), module, "KalmanEstimation", 0);
        }

        void t_KalmanEstimation::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(KalmanEstimation), "class_", make_descriptor(KalmanEstimation::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(KalmanEstimation), "wrapfn_", make_descriptor(t_KalmanEstimation::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(KalmanEstimation), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_KalmanEstimation_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, KalmanEstimation::initializeClass, 1)))
            return NULL;
          return t_KalmanEstimation::wrap_Object(KalmanEstimation(((t_KalmanEstimation *) arg)->object.this$));
        }
        static PyObject *t_KalmanEstimation_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, KalmanEstimation::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_KalmanEstimation_getCorrectedMeasurement(t_KalmanEstimation *self)
        {
          ::org::orekit::estimation::measurements::EstimatedMeasurement result((jobject) NULL);
          OBJ_CALL(result = self->object.getCorrectedMeasurement());
          return ::org::orekit::estimation::measurements::t_EstimatedMeasurement::wrap_Object(result);
        }

        static PyObject *t_KalmanEstimation_getCorrectedSpacecraftStates(t_KalmanEstimation *self)
        {
          JArray< ::org::orekit::propagation::SpacecraftState > result((jobject) NULL);
          OBJ_CALL(result = self->object.getCorrectedSpacecraftStates());
          return JArray<jobject>(result.this$).wrap(::org::orekit::propagation::t_SpacecraftState::wrap_jobject);
        }

        static PyObject *t_KalmanEstimation_getCurrentDate(t_KalmanEstimation *self)
        {
          ::org::orekit::time::AbsoluteDate result((jobject) NULL);
          OBJ_CALL(result = self->object.getCurrentDate());
          return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
        }

        static PyObject *t_KalmanEstimation_getCurrentMeasurementNumber(t_KalmanEstimation *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getCurrentMeasurementNumber());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_KalmanEstimation_getEstimatedMeasurementsParameters(t_KalmanEstimation *self)
        {
          ::org::orekit::utils::ParameterDriversList result((jobject) NULL);
          OBJ_CALL(result = self->object.getEstimatedMeasurementsParameters());
          return ::org::orekit::utils::t_ParameterDriversList::wrap_Object(result);
        }

        static PyObject *t_KalmanEstimation_getEstimatedOrbitalParameters(t_KalmanEstimation *self)
        {
          ::org::orekit::utils::ParameterDriversList result((jobject) NULL);
          OBJ_CALL(result = self->object.getEstimatedOrbitalParameters());
          return ::org::orekit::utils::t_ParameterDriversList::wrap_Object(result);
        }

        static PyObject *t_KalmanEstimation_getEstimatedPropagationParameters(t_KalmanEstimation *self)
        {
          ::org::orekit::utils::ParameterDriversList result((jobject) NULL);
          OBJ_CALL(result = self->object.getEstimatedPropagationParameters());
          return ::org::orekit::utils::t_ParameterDriversList::wrap_Object(result);
        }

        static PyObject *t_KalmanEstimation_getPhysicalEstimatedCovarianceMatrix(t_KalmanEstimation *self)
        {
          ::org::hipparchus::linear::RealMatrix result((jobject) NULL);
          OBJ_CALL(result = self->object.getPhysicalEstimatedCovarianceMatrix());
          return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
        }

        static PyObject *t_KalmanEstimation_getPhysicalEstimatedState(t_KalmanEstimation *self)
        {
          ::org::hipparchus::linear::RealVector result((jobject) NULL);
          OBJ_CALL(result = self->object.getPhysicalEstimatedState());
          return ::org::hipparchus::linear::t_RealVector::wrap_Object(result);
        }

        static PyObject *t_KalmanEstimation_getPhysicalInnovationCovarianceMatrix(t_KalmanEstimation *self)
        {
          ::org::hipparchus::linear::RealMatrix result((jobject) NULL);
          OBJ_CALL(result = self->object.getPhysicalInnovationCovarianceMatrix());
          return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
        }

        static PyObject *t_KalmanEstimation_getPhysicalKalmanGain(t_KalmanEstimation *self)
        {
          ::org::hipparchus::linear::RealMatrix result((jobject) NULL);
          OBJ_CALL(result = self->object.getPhysicalKalmanGain());
          return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
        }

        static PyObject *t_KalmanEstimation_getPhysicalMeasurementJacobian(t_KalmanEstimation *self)
        {
          ::org::hipparchus::linear::RealMatrix result((jobject) NULL);
          OBJ_CALL(result = self->object.getPhysicalMeasurementJacobian());
          return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
        }

        static PyObject *t_KalmanEstimation_getPhysicalStateTransitionMatrix(t_KalmanEstimation *self)
        {
          ::org::hipparchus::linear::RealMatrix result((jobject) NULL);
          OBJ_CALL(result = self->object.getPhysicalStateTransitionMatrix());
          return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
        }

        static PyObject *t_KalmanEstimation_getPredictedMeasurement(t_KalmanEstimation *self)
        {
          ::org::orekit::estimation::measurements::EstimatedMeasurement result((jobject) NULL);
          OBJ_CALL(result = self->object.getPredictedMeasurement());
          return ::org::orekit::estimation::measurements::t_EstimatedMeasurement::wrap_Object(result);
        }

        static PyObject *t_KalmanEstimation_getPredictedSpacecraftStates(t_KalmanEstimation *self)
        {
          JArray< ::org::orekit::propagation::SpacecraftState > result((jobject) NULL);
          OBJ_CALL(result = self->object.getPredictedSpacecraftStates());
          return JArray<jobject>(result.this$).wrap(::org::orekit::propagation::t_SpacecraftState::wrap_jobject);
        }

        static PyObject *t_KalmanEstimation_get__correctedMeasurement(t_KalmanEstimation *self, void *data)
        {
          ::org::orekit::estimation::measurements::EstimatedMeasurement value((jobject) NULL);
          OBJ_CALL(value = self->object.getCorrectedMeasurement());
          return ::org::orekit::estimation::measurements::t_EstimatedMeasurement::wrap_Object(value);
        }

        static PyObject *t_KalmanEstimation_get__correctedSpacecraftStates(t_KalmanEstimation *self, void *data)
        {
          JArray< ::org::orekit::propagation::SpacecraftState > value((jobject) NULL);
          OBJ_CALL(value = self->object.getCorrectedSpacecraftStates());
          return JArray<jobject>(value.this$).wrap(::org::orekit::propagation::t_SpacecraftState::wrap_jobject);
        }

        static PyObject *t_KalmanEstimation_get__currentDate(t_KalmanEstimation *self, void *data)
        {
          ::org::orekit::time::AbsoluteDate value((jobject) NULL);
          OBJ_CALL(value = self->object.getCurrentDate());
          return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
        }

        static PyObject *t_KalmanEstimation_get__currentMeasurementNumber(t_KalmanEstimation *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getCurrentMeasurementNumber());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_KalmanEstimation_get__estimatedMeasurementsParameters(t_KalmanEstimation *self, void *data)
        {
          ::org::orekit::utils::ParameterDriversList value((jobject) NULL);
          OBJ_CALL(value = self->object.getEstimatedMeasurementsParameters());
          return ::org::orekit::utils::t_ParameterDriversList::wrap_Object(value);
        }

        static PyObject *t_KalmanEstimation_get__estimatedOrbitalParameters(t_KalmanEstimation *self, void *data)
        {
          ::org::orekit::utils::ParameterDriversList value((jobject) NULL);
          OBJ_CALL(value = self->object.getEstimatedOrbitalParameters());
          return ::org::orekit::utils::t_ParameterDriversList::wrap_Object(value);
        }

        static PyObject *t_KalmanEstimation_get__estimatedPropagationParameters(t_KalmanEstimation *self, void *data)
        {
          ::org::orekit::utils::ParameterDriversList value((jobject) NULL);
          OBJ_CALL(value = self->object.getEstimatedPropagationParameters());
          return ::org::orekit::utils::t_ParameterDriversList::wrap_Object(value);
        }

        static PyObject *t_KalmanEstimation_get__physicalEstimatedCovarianceMatrix(t_KalmanEstimation *self, void *data)
        {
          ::org::hipparchus::linear::RealMatrix value((jobject) NULL);
          OBJ_CALL(value = self->object.getPhysicalEstimatedCovarianceMatrix());
          return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(value);
        }

        static PyObject *t_KalmanEstimation_get__physicalEstimatedState(t_KalmanEstimation *self, void *data)
        {
          ::org::hipparchus::linear::RealVector value((jobject) NULL);
          OBJ_CALL(value = self->object.getPhysicalEstimatedState());
          return ::org::hipparchus::linear::t_RealVector::wrap_Object(value);
        }

        static PyObject *t_KalmanEstimation_get__physicalInnovationCovarianceMatrix(t_KalmanEstimation *self, void *data)
        {
          ::org::hipparchus::linear::RealMatrix value((jobject) NULL);
          OBJ_CALL(value = self->object.getPhysicalInnovationCovarianceMatrix());
          return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(value);
        }

        static PyObject *t_KalmanEstimation_get__physicalKalmanGain(t_KalmanEstimation *self, void *data)
        {
          ::org::hipparchus::linear::RealMatrix value((jobject) NULL);
          OBJ_CALL(value = self->object.getPhysicalKalmanGain());
          return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(value);
        }

        static PyObject *t_KalmanEstimation_get__physicalMeasurementJacobian(t_KalmanEstimation *self, void *data)
        {
          ::org::hipparchus::linear::RealMatrix value((jobject) NULL);
          OBJ_CALL(value = self->object.getPhysicalMeasurementJacobian());
          return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(value);
        }

        static PyObject *t_KalmanEstimation_get__physicalStateTransitionMatrix(t_KalmanEstimation *self, void *data)
        {
          ::org::hipparchus::linear::RealMatrix value((jobject) NULL);
          OBJ_CALL(value = self->object.getPhysicalStateTransitionMatrix());
          return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(value);
        }

        static PyObject *t_KalmanEstimation_get__predictedMeasurement(t_KalmanEstimation *self, void *data)
        {
          ::org::orekit::estimation::measurements::EstimatedMeasurement value((jobject) NULL);
          OBJ_CALL(value = self->object.getPredictedMeasurement());
          return ::org::orekit::estimation::measurements::t_EstimatedMeasurement::wrap_Object(value);
        }

        static PyObject *t_KalmanEstimation_get__predictedSpacecraftStates(t_KalmanEstimation *self, void *data)
        {
          JArray< ::org::orekit::propagation::SpacecraftState > value((jobject) NULL);
          OBJ_CALL(value = self->object.getPredictedSpacecraftStates());
          return JArray<jobject>(value.this$).wrap(::org::orekit::propagation::t_SpacecraftState::wrap_jobject);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/measurements/generation/AngularRaDecBuilder.h"
#include "org/hipparchus/random/CorrelatedRandomVectorGenerator.h"
#include "org/orekit/propagation/sampling/OrekitStepInterpolator.h"
#include "java/util/Map.h"
#include "org/orekit/estimation/measurements/ObservableSatellite.h"
#include "org/orekit/estimation/measurements/GroundStation.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/orekit/estimation/measurements/AngularRaDec.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace generation {

          ::java::lang::Class *AngularRaDecBuilder::class$ = NULL;
          jmethodID *AngularRaDecBuilder::mids$ = NULL;
          bool AngularRaDecBuilder::live$ = false;

          jclass AngularRaDecBuilder::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/generation/AngularRaDecBuilder");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_33dc93b5248673a7] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/random/CorrelatedRandomVectorGenerator;Lorg/orekit/estimation/measurements/GroundStation;Lorg/orekit/frames/Frame;[D[DLorg/orekit/estimation/measurements/ObservableSatellite;)V");
              mids$[mid_build_4797158990a89f89] = env->getMethodID(cls, "build", "(Lorg/orekit/time/AbsoluteDate;Ljava/util/Map;)Lorg/orekit/estimation/measurements/AngularRaDec;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          AngularRaDecBuilder::AngularRaDecBuilder(const ::org::hipparchus::random::CorrelatedRandomVectorGenerator & a0, const ::org::orekit::estimation::measurements::GroundStation & a1, const ::org::orekit::frames::Frame & a2, const JArray< jdouble > & a3, const JArray< jdouble > & a4, const ::org::orekit::estimation::measurements::ObservableSatellite & a5) : ::org::orekit::estimation::measurements::generation::AbstractMeasurementBuilder(env->newObject(initializeClass, &mids$, mid_init$_33dc93b5248673a7, a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$)) {}

          ::org::orekit::estimation::measurements::AngularRaDec AngularRaDecBuilder::build(const ::org::orekit::time::AbsoluteDate & a0, const ::java::util::Map & a1) const
          {
            return ::org::orekit::estimation::measurements::AngularRaDec(env->callObjectMethod(this$, mids$[mid_build_4797158990a89f89], a0.this$, a1.this$));
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
        namespace generation {
          static PyObject *t_AngularRaDecBuilder_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_AngularRaDecBuilder_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_AngularRaDecBuilder_of_(t_AngularRaDecBuilder *self, PyObject *args);
          static int t_AngularRaDecBuilder_init_(t_AngularRaDecBuilder *self, PyObject *args, PyObject *kwds);
          static PyObject *t_AngularRaDecBuilder_build(t_AngularRaDecBuilder *self, PyObject *args);
          static PyObject *t_AngularRaDecBuilder_get__parameters_(t_AngularRaDecBuilder *self, void *data);
          static PyGetSetDef t_AngularRaDecBuilder__fields_[] = {
            DECLARE_GET_FIELD(t_AngularRaDecBuilder, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_AngularRaDecBuilder__methods_[] = {
            DECLARE_METHOD(t_AngularRaDecBuilder, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_AngularRaDecBuilder, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_AngularRaDecBuilder, of_, METH_VARARGS),
            DECLARE_METHOD(t_AngularRaDecBuilder, build, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(AngularRaDecBuilder)[] = {
            { Py_tp_methods, t_AngularRaDecBuilder__methods_ },
            { Py_tp_init, (void *) t_AngularRaDecBuilder_init_ },
            { Py_tp_getset, t_AngularRaDecBuilder__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(AngularRaDecBuilder)[] = {
            &PY_TYPE_DEF(::org::orekit::estimation::measurements::generation::AbstractMeasurementBuilder),
            NULL
          };

          DEFINE_TYPE(AngularRaDecBuilder, t_AngularRaDecBuilder, AngularRaDecBuilder);
          PyObject *t_AngularRaDecBuilder::wrap_Object(const AngularRaDecBuilder& object, PyTypeObject *p0)
          {
            PyObject *obj = t_AngularRaDecBuilder::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_AngularRaDecBuilder *self = (t_AngularRaDecBuilder *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          PyObject *t_AngularRaDecBuilder::wrap_jobject(const jobject& object, PyTypeObject *p0)
          {
            PyObject *obj = t_AngularRaDecBuilder::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_AngularRaDecBuilder *self = (t_AngularRaDecBuilder *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          void t_AngularRaDecBuilder::install(PyObject *module)
          {
            installType(&PY_TYPE(AngularRaDecBuilder), &PY_TYPE_DEF(AngularRaDecBuilder), module, "AngularRaDecBuilder", 0);
          }

          void t_AngularRaDecBuilder::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(AngularRaDecBuilder), "class_", make_descriptor(AngularRaDecBuilder::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(AngularRaDecBuilder), "wrapfn_", make_descriptor(t_AngularRaDecBuilder::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(AngularRaDecBuilder), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_AngularRaDecBuilder_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, AngularRaDecBuilder::initializeClass, 1)))
              return NULL;
            return t_AngularRaDecBuilder::wrap_Object(AngularRaDecBuilder(((t_AngularRaDecBuilder *) arg)->object.this$));
          }
          static PyObject *t_AngularRaDecBuilder_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, AngularRaDecBuilder::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_AngularRaDecBuilder_of_(t_AngularRaDecBuilder *self, PyObject *args)
          {
            if (!parseArg(args, "T", 1, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static int t_AngularRaDecBuilder_init_(t_AngularRaDecBuilder *self, PyObject *args, PyObject *kwds)
          {
            ::org::hipparchus::random::CorrelatedRandomVectorGenerator a0((jobject) NULL);
            ::org::orekit::estimation::measurements::GroundStation a1((jobject) NULL);
            ::org::orekit::frames::Frame a2((jobject) NULL);
            JArray< jdouble > a3((jobject) NULL);
            JArray< jdouble > a4((jobject) NULL);
            ::org::orekit::estimation::measurements::ObservableSatellite a5((jobject) NULL);
            AngularRaDecBuilder object((jobject) NULL);

            if (!parseArgs(args, "kkk[D[Dk", ::org::hipparchus::random::CorrelatedRandomVectorGenerator::initializeClass, ::org::orekit::estimation::measurements::GroundStation::initializeClass, ::org::orekit::frames::Frame::initializeClass, ::org::orekit::estimation::measurements::ObservableSatellite::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5))
            {
              INT_CALL(object = AngularRaDecBuilder(a0, a1, a2, a3, a4, a5));
              self->object = object;
              self->parameters[0] = ::org::orekit::estimation::measurements::PY_TYPE(AngularRaDec);
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_AngularRaDecBuilder_build(t_AngularRaDecBuilder *self, PyObject *args)
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            ::java::util::Map a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::orekit::estimation::measurements::AngularRaDec result((jobject) NULL);

            if (!parseArgs(args, "kK", ::org::orekit::time::AbsoluteDate::initializeClass, ::java::util::Map::initializeClass, &a0, &a1, &p1, ::java::util::t_Map::parameters_))
            {
              OBJ_CALL(result = self->object.build(a0, a1));
              return ::org::orekit::estimation::measurements::t_AngularRaDec::wrap_Object(result);
            }

            return callSuper(PY_TYPE(AngularRaDecBuilder), (PyObject *) self, "build", args, 2);
          }
          static PyObject *t_AngularRaDecBuilder_get__parameters_(t_AngularRaDecBuilder *self, void *data)
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
#include "org/hipparchus/linear/IterativeLinearSolver.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "org/hipparchus/exception/NullArgumentException.h"
#include "org/hipparchus/util/IterationManager.h"
#include "org/hipparchus/linear/RealVector.h"
#include "org/hipparchus/exception/MathIllegalStateException.h"
#include "java/lang/Class.h"
#include "org/hipparchus/linear/RealLinearOperator.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace linear {

      ::java::lang::Class *IterativeLinearSolver::class$ = NULL;
      jmethodID *IterativeLinearSolver::mids$ = NULL;
      bool IterativeLinearSolver::live$ = false;

      jclass IterativeLinearSolver::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/linear/IterativeLinearSolver");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_5620df2219299797] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/util/IterationManager;)V");
          mids$[mid_init$_a3da1a935cb37f7b] = env->getMethodID(cls, "<init>", "(I)V");
          mids$[mid_getIterationManager_93f814e538fc8778] = env->getMethodID(cls, "getIterationManager", "()Lorg/hipparchus/util/IterationManager;");
          mids$[mid_solve_6b479a0f30bd3d0f] = env->getMethodID(cls, "solve", "(Lorg/hipparchus/linear/RealLinearOperator;Lorg/hipparchus/linear/RealVector;)Lorg/hipparchus/linear/RealVector;");
          mids$[mid_solve_2afa71936b186c26] = env->getMethodID(cls, "solve", "(Lorg/hipparchus/linear/RealLinearOperator;Lorg/hipparchus/linear/RealVector;Lorg/hipparchus/linear/RealVector;)Lorg/hipparchus/linear/RealVector;");
          mids$[mid_solveInPlace_2afa71936b186c26] = env->getMethodID(cls, "solveInPlace", "(Lorg/hipparchus/linear/RealLinearOperator;Lorg/hipparchus/linear/RealVector;Lorg/hipparchus/linear/RealVector;)Lorg/hipparchus/linear/RealVector;");
          mids$[mid_checkParameters_a268619231ff7cd6] = env->getStaticMethodID(cls, "checkParameters", "(Lorg/hipparchus/linear/RealLinearOperator;Lorg/hipparchus/linear/RealVector;Lorg/hipparchus/linear/RealVector;)V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      IterativeLinearSolver::IterativeLinearSolver(const ::org::hipparchus::util::IterationManager & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_5620df2219299797, a0.this$)) {}

      IterativeLinearSolver::IterativeLinearSolver(jint a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_a3da1a935cb37f7b, a0)) {}

      ::org::hipparchus::util::IterationManager IterativeLinearSolver::getIterationManager() const
      {
        return ::org::hipparchus::util::IterationManager(env->callObjectMethod(this$, mids$[mid_getIterationManager_93f814e538fc8778]));
      }

      ::org::hipparchus::linear::RealVector IterativeLinearSolver::solve(const ::org::hipparchus::linear::RealLinearOperator & a0, const ::org::hipparchus::linear::RealVector & a1) const
      {
        return ::org::hipparchus::linear::RealVector(env->callObjectMethod(this$, mids$[mid_solve_6b479a0f30bd3d0f], a0.this$, a1.this$));
      }

      ::org::hipparchus::linear::RealVector IterativeLinearSolver::solve(const ::org::hipparchus::linear::RealLinearOperator & a0, const ::org::hipparchus::linear::RealVector & a1, const ::org::hipparchus::linear::RealVector & a2) const
      {
        return ::org::hipparchus::linear::RealVector(env->callObjectMethod(this$, mids$[mid_solve_2afa71936b186c26], a0.this$, a1.this$, a2.this$));
      }

      ::org::hipparchus::linear::RealVector IterativeLinearSolver::solveInPlace(const ::org::hipparchus::linear::RealLinearOperator & a0, const ::org::hipparchus::linear::RealVector & a1, const ::org::hipparchus::linear::RealVector & a2) const
      {
        return ::org::hipparchus::linear::RealVector(env->callObjectMethod(this$, mids$[mid_solveInPlace_2afa71936b186c26], a0.this$, a1.this$, a2.this$));
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
      static PyObject *t_IterativeLinearSolver_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_IterativeLinearSolver_instance_(PyTypeObject *type, PyObject *arg);
      static int t_IterativeLinearSolver_init_(t_IterativeLinearSolver *self, PyObject *args, PyObject *kwds);
      static PyObject *t_IterativeLinearSolver_getIterationManager(t_IterativeLinearSolver *self);
      static PyObject *t_IterativeLinearSolver_solve(t_IterativeLinearSolver *self, PyObject *args);
      static PyObject *t_IterativeLinearSolver_solveInPlace(t_IterativeLinearSolver *self, PyObject *args);
      static PyObject *t_IterativeLinearSolver_get__iterationManager(t_IterativeLinearSolver *self, void *data);
      static PyGetSetDef t_IterativeLinearSolver__fields_[] = {
        DECLARE_GET_FIELD(t_IterativeLinearSolver, iterationManager),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_IterativeLinearSolver__methods_[] = {
        DECLARE_METHOD(t_IterativeLinearSolver, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_IterativeLinearSolver, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_IterativeLinearSolver, getIterationManager, METH_NOARGS),
        DECLARE_METHOD(t_IterativeLinearSolver, solve, METH_VARARGS),
        DECLARE_METHOD(t_IterativeLinearSolver, solveInPlace, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(IterativeLinearSolver)[] = {
        { Py_tp_methods, t_IterativeLinearSolver__methods_ },
        { Py_tp_init, (void *) t_IterativeLinearSolver_init_ },
        { Py_tp_getset, t_IterativeLinearSolver__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(IterativeLinearSolver)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(IterativeLinearSolver, t_IterativeLinearSolver, IterativeLinearSolver);

      void t_IterativeLinearSolver::install(PyObject *module)
      {
        installType(&PY_TYPE(IterativeLinearSolver), &PY_TYPE_DEF(IterativeLinearSolver), module, "IterativeLinearSolver", 0);
      }

      void t_IterativeLinearSolver::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(IterativeLinearSolver), "class_", make_descriptor(IterativeLinearSolver::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(IterativeLinearSolver), "wrapfn_", make_descriptor(t_IterativeLinearSolver::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(IterativeLinearSolver), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_IterativeLinearSolver_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, IterativeLinearSolver::initializeClass, 1)))
          return NULL;
        return t_IterativeLinearSolver::wrap_Object(IterativeLinearSolver(((t_IterativeLinearSolver *) arg)->object.this$));
      }
      static PyObject *t_IterativeLinearSolver_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, IterativeLinearSolver::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_IterativeLinearSolver_init_(t_IterativeLinearSolver *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::hipparchus::util::IterationManager a0((jobject) NULL);
            IterativeLinearSolver object((jobject) NULL);

            if (!parseArgs(args, "k", ::org::hipparchus::util::IterationManager::initializeClass, &a0))
            {
              INT_CALL(object = IterativeLinearSolver(a0));
              self->object = object;
              break;
            }
          }
          {
            jint a0;
            IterativeLinearSolver object((jobject) NULL);

            if (!parseArgs(args, "I", &a0))
            {
              INT_CALL(object = IterativeLinearSolver(a0));
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

      static PyObject *t_IterativeLinearSolver_getIterationManager(t_IterativeLinearSolver *self)
      {
        ::org::hipparchus::util::IterationManager result((jobject) NULL);
        OBJ_CALL(result = self->object.getIterationManager());
        return ::org::hipparchus::util::t_IterationManager::wrap_Object(result);
      }

      static PyObject *t_IterativeLinearSolver_solve(t_IterativeLinearSolver *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 2:
          {
            ::org::hipparchus::linear::RealLinearOperator a0((jobject) NULL);
            ::org::hipparchus::linear::RealVector a1((jobject) NULL);
            ::org::hipparchus::linear::RealVector result((jobject) NULL);

            if (!parseArgs(args, "kk", ::org::hipparchus::linear::RealLinearOperator::initializeClass, ::org::hipparchus::linear::RealVector::initializeClass, &a0, &a1))
            {
              OBJ_CALL(result = self->object.solve(a0, a1));
              return ::org::hipparchus::linear::t_RealVector::wrap_Object(result);
            }
          }
          break;
         case 3:
          {
            ::org::hipparchus::linear::RealLinearOperator a0((jobject) NULL);
            ::org::hipparchus::linear::RealVector a1((jobject) NULL);
            ::org::hipparchus::linear::RealVector a2((jobject) NULL);
            ::org::hipparchus::linear::RealVector result((jobject) NULL);

            if (!parseArgs(args, "kkk", ::org::hipparchus::linear::RealLinearOperator::initializeClass, ::org::hipparchus::linear::RealVector::initializeClass, ::org::hipparchus::linear::RealVector::initializeClass, &a0, &a1, &a2))
            {
              OBJ_CALL(result = self->object.solve(a0, a1, a2));
              return ::org::hipparchus::linear::t_RealVector::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "solve", args);
        return NULL;
      }

      static PyObject *t_IterativeLinearSolver_solveInPlace(t_IterativeLinearSolver *self, PyObject *args)
      {
        ::org::hipparchus::linear::RealLinearOperator a0((jobject) NULL);
        ::org::hipparchus::linear::RealVector a1((jobject) NULL);
        ::org::hipparchus::linear::RealVector a2((jobject) NULL);
        ::org::hipparchus::linear::RealVector result((jobject) NULL);

        if (!parseArgs(args, "kkk", ::org::hipparchus::linear::RealLinearOperator::initializeClass, ::org::hipparchus::linear::RealVector::initializeClass, ::org::hipparchus::linear::RealVector::initializeClass, &a0, &a1, &a2))
        {
          OBJ_CALL(result = self->object.solveInPlace(a0, a1, a2));
          return ::org::hipparchus::linear::t_RealVector::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "solveInPlace", args);
        return NULL;
      }

      static PyObject *t_IterativeLinearSolver_get__iterationManager(t_IterativeLinearSolver *self, void *data)
      {
        ::org::hipparchus::util::IterationManager value((jobject) NULL);
        OBJ_CALL(value = self->object.getIterationManager());
        return ::org::hipparchus::util::t_IterationManager::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/gnss/metric/messages/ssr/igm/SsrIgm04Data.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace metric {
        namespace messages {
          namespace ssr {
            namespace igm {

              ::java::lang::Class *SsrIgm04Data::class$ = NULL;
              jmethodID *SsrIgm04Data::mids$ = NULL;
              bool SsrIgm04Data::live$ = false;

              jclass SsrIgm04Data::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/gnss/metric/messages/ssr/igm/SsrIgm04Data");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_init$_0640e6acf969ed28] = env->getMethodID(cls, "<init>", "()V");
                  mids$[mid_getHighRateClockCorrection_557b8123390d8d0c] = env->getMethodID(cls, "getHighRateClockCorrection", "()D");
                  mids$[mid_setHighRateClockCorrection_10f281d777284cea] = env->getMethodID(cls, "setHighRateClockCorrection", "(D)V");

                  class$ = new ::java::lang::Class(cls);
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              SsrIgm04Data::SsrIgm04Data() : ::org::orekit::gnss::metric::messages::ssr::igm::SsrIgmData(env->newObject(initializeClass, &mids$, mid_init$_0640e6acf969ed28)) {}

              jdouble SsrIgm04Data::getHighRateClockCorrection() const
              {
                return env->callDoubleMethod(this$, mids$[mid_getHighRateClockCorrection_557b8123390d8d0c]);
              }

              void SsrIgm04Data::setHighRateClockCorrection(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setHighRateClockCorrection_10f281d777284cea], a0);
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
              static PyObject *t_SsrIgm04Data_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_SsrIgm04Data_instance_(PyTypeObject *type, PyObject *arg);
              static int t_SsrIgm04Data_init_(t_SsrIgm04Data *self, PyObject *args, PyObject *kwds);
              static PyObject *t_SsrIgm04Data_getHighRateClockCorrection(t_SsrIgm04Data *self);
              static PyObject *t_SsrIgm04Data_setHighRateClockCorrection(t_SsrIgm04Data *self, PyObject *arg);
              static PyObject *t_SsrIgm04Data_get__highRateClockCorrection(t_SsrIgm04Data *self, void *data);
              static int t_SsrIgm04Data_set__highRateClockCorrection(t_SsrIgm04Data *self, PyObject *arg, void *data);
              static PyGetSetDef t_SsrIgm04Data__fields_[] = {
                DECLARE_GETSET_FIELD(t_SsrIgm04Data, highRateClockCorrection),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_SsrIgm04Data__methods_[] = {
                DECLARE_METHOD(t_SsrIgm04Data, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_SsrIgm04Data, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_SsrIgm04Data, getHighRateClockCorrection, METH_NOARGS),
                DECLARE_METHOD(t_SsrIgm04Data, setHighRateClockCorrection, METH_O),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(SsrIgm04Data)[] = {
                { Py_tp_methods, t_SsrIgm04Data__methods_ },
                { Py_tp_init, (void *) t_SsrIgm04Data_init_ },
                { Py_tp_getset, t_SsrIgm04Data__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(SsrIgm04Data)[] = {
                &PY_TYPE_DEF(::org::orekit::gnss::metric::messages::ssr::igm::SsrIgmData),
                NULL
              };

              DEFINE_TYPE(SsrIgm04Data, t_SsrIgm04Data, SsrIgm04Data);

              void t_SsrIgm04Data::install(PyObject *module)
              {
                installType(&PY_TYPE(SsrIgm04Data), &PY_TYPE_DEF(SsrIgm04Data), module, "SsrIgm04Data", 0);
              }

              void t_SsrIgm04Data::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(SsrIgm04Data), "class_", make_descriptor(SsrIgm04Data::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(SsrIgm04Data), "wrapfn_", make_descriptor(t_SsrIgm04Data::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(SsrIgm04Data), "boxfn_", make_descriptor(boxObject));
              }

              static PyObject *t_SsrIgm04Data_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, SsrIgm04Data::initializeClass, 1)))
                  return NULL;
                return t_SsrIgm04Data::wrap_Object(SsrIgm04Data(((t_SsrIgm04Data *) arg)->object.this$));
              }
              static PyObject *t_SsrIgm04Data_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, SsrIgm04Data::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static int t_SsrIgm04Data_init_(t_SsrIgm04Data *self, PyObject *args, PyObject *kwds)
              {
                SsrIgm04Data object((jobject) NULL);

                INT_CALL(object = SsrIgm04Data());
                self->object = object;

                return 0;
              }

              static PyObject *t_SsrIgm04Data_getHighRateClockCorrection(t_SsrIgm04Data *self)
              {
                jdouble result;
                OBJ_CALL(result = self->object.getHighRateClockCorrection());
                return PyFloat_FromDouble((double) result);
              }

              static PyObject *t_SsrIgm04Data_setHighRateClockCorrection(t_SsrIgm04Data *self, PyObject *arg)
              {
                jdouble a0;

                if (!parseArg(arg, "D", &a0))
                {
                  OBJ_CALL(self->object.setHighRateClockCorrection(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setHighRateClockCorrection", arg);
                return NULL;
              }

              static PyObject *t_SsrIgm04Data_get__highRateClockCorrection(t_SsrIgm04Data *self, void *data)
              {
                jdouble value;
                OBJ_CALL(value = self->object.getHighRateClockCorrection());
                return PyFloat_FromDouble((double) value);
              }
              static int t_SsrIgm04Data_set__highRateClockCorrection(t_SsrIgm04Data *self, PyObject *arg, void *data)
              {
                {
                  jdouble value;
                  if (!parseArg(arg, "D", &value))
                  {
                    INT_CALL(self->object.setHighRateClockCorrection(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "highRateClockCorrection", arg);
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
#include "org/hipparchus/ode/ExpandableODE.h"
#include "org/hipparchus/ode/ODEState.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "org/hipparchus/ode/EquationsMapper.h"
#include "org/hipparchus/exception/MathIllegalStateException.h"
#include "java/lang/Class.h"
#include "org/hipparchus/ode/OrdinaryDifferentialEquation.h"
#include "org/hipparchus/ode/SecondaryODE.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace ode {

      ::java::lang::Class *ExpandableODE::class$ = NULL;
      jmethodID *ExpandableODE::mids$ = NULL;
      bool ExpandableODE::live$ = false;

      jclass ExpandableODE::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/ode/ExpandableODE");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_28d0dab69f2e282c] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/ode/OrdinaryDifferentialEquation;)V");
          mids$[mid_addSecondaryEquations_95d0971981220a69] = env->getMethodID(cls, "addSecondaryEquations", "(Lorg/hipparchus/ode/SecondaryODE;)I");
          mids$[mid_computeDerivatives_31b9a2982d73e37a] = env->getMethodID(cls, "computeDerivatives", "(D[D)[D");
          mids$[mid_getMapper_ac224193cab69474] = env->getMethodID(cls, "getMapper", "()Lorg/hipparchus/ode/EquationsMapper;");
          mids$[mid_getPrimary_7732629ab518c1bf] = env->getMethodID(cls, "getPrimary", "()Lorg/hipparchus/ode/OrdinaryDifferentialEquation;");
          mids$[mid_init_4d28f529380c21e7] = env->getMethodID(cls, "init", "(Lorg/hipparchus/ode/ODEState;D)V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ExpandableODE::ExpandableODE(const ::org::hipparchus::ode::OrdinaryDifferentialEquation & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_28d0dab69f2e282c, a0.this$)) {}

      jint ExpandableODE::addSecondaryEquations(const ::org::hipparchus::ode::SecondaryODE & a0) const
      {
        return env->callIntMethod(this$, mids$[mid_addSecondaryEquations_95d0971981220a69], a0.this$);
      }

      JArray< jdouble > ExpandableODE::computeDerivatives(jdouble a0, const JArray< jdouble > & a1) const
      {
        return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_computeDerivatives_31b9a2982d73e37a], a0, a1.this$));
      }

      ::org::hipparchus::ode::EquationsMapper ExpandableODE::getMapper() const
      {
        return ::org::hipparchus::ode::EquationsMapper(env->callObjectMethod(this$, mids$[mid_getMapper_ac224193cab69474]));
      }

      ::org::hipparchus::ode::OrdinaryDifferentialEquation ExpandableODE::getPrimary() const
      {
        return ::org::hipparchus::ode::OrdinaryDifferentialEquation(env->callObjectMethod(this$, mids$[mid_getPrimary_7732629ab518c1bf]));
      }

      void ExpandableODE::init(const ::org::hipparchus::ode::ODEState & a0, jdouble a1) const
      {
        env->callVoidMethod(this$, mids$[mid_init_4d28f529380c21e7], a0.this$, a1);
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
      static PyObject *t_ExpandableODE_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_ExpandableODE_instance_(PyTypeObject *type, PyObject *arg);
      static int t_ExpandableODE_init_(t_ExpandableODE *self, PyObject *args, PyObject *kwds);
      static PyObject *t_ExpandableODE_addSecondaryEquations(t_ExpandableODE *self, PyObject *arg);
      static PyObject *t_ExpandableODE_computeDerivatives(t_ExpandableODE *self, PyObject *args);
      static PyObject *t_ExpandableODE_getMapper(t_ExpandableODE *self);
      static PyObject *t_ExpandableODE_getPrimary(t_ExpandableODE *self);
      static PyObject *t_ExpandableODE_init(t_ExpandableODE *self, PyObject *args);
      static PyObject *t_ExpandableODE_get__mapper(t_ExpandableODE *self, void *data);
      static PyObject *t_ExpandableODE_get__primary(t_ExpandableODE *self, void *data);
      static PyGetSetDef t_ExpandableODE__fields_[] = {
        DECLARE_GET_FIELD(t_ExpandableODE, mapper),
        DECLARE_GET_FIELD(t_ExpandableODE, primary),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_ExpandableODE__methods_[] = {
        DECLARE_METHOD(t_ExpandableODE, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_ExpandableODE, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_ExpandableODE, addSecondaryEquations, METH_O),
        DECLARE_METHOD(t_ExpandableODE, computeDerivatives, METH_VARARGS),
        DECLARE_METHOD(t_ExpandableODE, getMapper, METH_NOARGS),
        DECLARE_METHOD(t_ExpandableODE, getPrimary, METH_NOARGS),
        DECLARE_METHOD(t_ExpandableODE, init, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(ExpandableODE)[] = {
        { Py_tp_methods, t_ExpandableODE__methods_ },
        { Py_tp_init, (void *) t_ExpandableODE_init_ },
        { Py_tp_getset, t_ExpandableODE__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(ExpandableODE)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(ExpandableODE, t_ExpandableODE, ExpandableODE);

      void t_ExpandableODE::install(PyObject *module)
      {
        installType(&PY_TYPE(ExpandableODE), &PY_TYPE_DEF(ExpandableODE), module, "ExpandableODE", 0);
      }

      void t_ExpandableODE::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(ExpandableODE), "class_", make_descriptor(ExpandableODE::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ExpandableODE), "wrapfn_", make_descriptor(t_ExpandableODE::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ExpandableODE), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_ExpandableODE_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, ExpandableODE::initializeClass, 1)))
          return NULL;
        return t_ExpandableODE::wrap_Object(ExpandableODE(((t_ExpandableODE *) arg)->object.this$));
      }
      static PyObject *t_ExpandableODE_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, ExpandableODE::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_ExpandableODE_init_(t_ExpandableODE *self, PyObject *args, PyObject *kwds)
      {
        ::org::hipparchus::ode::OrdinaryDifferentialEquation a0((jobject) NULL);
        ExpandableODE object((jobject) NULL);

        if (!parseArgs(args, "k", ::org::hipparchus::ode::OrdinaryDifferentialEquation::initializeClass, &a0))
        {
          INT_CALL(object = ExpandableODE(a0));
          self->object = object;
        }
        else
        {
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_ExpandableODE_addSecondaryEquations(t_ExpandableODE *self, PyObject *arg)
      {
        ::org::hipparchus::ode::SecondaryODE a0((jobject) NULL);
        jint result;

        if (!parseArg(arg, "k", ::org::hipparchus::ode::SecondaryODE::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.addSecondaryEquations(a0));
          return PyLong_FromLong((long) result);
        }

        PyErr_SetArgsError((PyObject *) self, "addSecondaryEquations", arg);
        return NULL;
      }

      static PyObject *t_ExpandableODE_computeDerivatives(t_ExpandableODE *self, PyObject *args)
      {
        jdouble a0;
        JArray< jdouble > a1((jobject) NULL);
        JArray< jdouble > result((jobject) NULL);

        if (!parseArgs(args, "D[D", &a0, &a1))
        {
          OBJ_CALL(result = self->object.computeDerivatives(a0, a1));
          return result.wrap();
        }

        PyErr_SetArgsError((PyObject *) self, "computeDerivatives", args);
        return NULL;
      }

      static PyObject *t_ExpandableODE_getMapper(t_ExpandableODE *self)
      {
        ::org::hipparchus::ode::EquationsMapper result((jobject) NULL);
        OBJ_CALL(result = self->object.getMapper());
        return ::org::hipparchus::ode::t_EquationsMapper::wrap_Object(result);
      }

      static PyObject *t_ExpandableODE_getPrimary(t_ExpandableODE *self)
      {
        ::org::hipparchus::ode::OrdinaryDifferentialEquation result((jobject) NULL);
        OBJ_CALL(result = self->object.getPrimary());
        return ::org::hipparchus::ode::t_OrdinaryDifferentialEquation::wrap_Object(result);
      }

      static PyObject *t_ExpandableODE_init(t_ExpandableODE *self, PyObject *args)
      {
        ::org::hipparchus::ode::ODEState a0((jobject) NULL);
        jdouble a1;

        if (!parseArgs(args, "kD", ::org::hipparchus::ode::ODEState::initializeClass, &a0, &a1))
        {
          OBJ_CALL(self->object.init(a0, a1));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "init", args);
        return NULL;
      }

      static PyObject *t_ExpandableODE_get__mapper(t_ExpandableODE *self, void *data)
      {
        ::org::hipparchus::ode::EquationsMapper value((jobject) NULL);
        OBJ_CALL(value = self->object.getMapper());
        return ::org::hipparchus::ode::t_EquationsMapper::wrap_Object(value);
      }

      static PyObject *t_ExpandableODE_get__primary(t_ExpandableODE *self, void *data)
      {
        ::org::hipparchus::ode::OrdinaryDifferentialEquation value((jobject) NULL);
        OBJ_CALL(value = self->object.getPrimary());
        return ::org::hipparchus::ode::t_OrdinaryDifferentialEquation::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/measurements/filtering/HatchFilter.h"
#include "java/util/ArrayList.h"
#include "java/lang/Class.h"
#include "java/lang/Double.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace filtering {

          ::java::lang::Class *HatchFilter::class$ = NULL;
          jmethodID *HatchFilter::mids$ = NULL;
          bool HatchFilter::live$ = false;

          jclass HatchFilter::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/filtering/HatchFilter");

              mids$ = new jmethodID[max_mid];
              mids$[mid_addToCodeHistory_10f281d777284cea] = env->getMethodID(cls, "addToCodeHistory", "(D)V");
              mids$[mid_addToSmoothedCodeHistory_10f281d777284cea] = env->getMethodID(cls, "addToSmoothedCodeHistory", "(D)V");
              mids$[mid_getCodeHistory_897d94db124f72e1] = env->getMethodID(cls, "getCodeHistory", "()Ljava/util/ArrayList;");
              mids$[mid_getSmoothedCodeHistory_897d94db124f72e1] = env->getMethodID(cls, "getSmoothedCodeHistory", "()Ljava/util/ArrayList;");
              mids$[mid_getThreshold_557b8123390d8d0c] = env->getMethodID(cls, "getThreshold", "()D");
              mids$[mid_resetFilterNext_10f281d777284cea] = env->getMethodID(cls, "resetFilterNext", "(D)V");
              mids$[mid_updatePreviousSmoothedCode_10f281d777284cea] = env->getMethodID(cls, "updatePreviousSmoothedCode", "(D)V");
              mids$[mid_updatePreviousSmoothingValue_10f281d777284cea] = env->getMethodID(cls, "updatePreviousSmoothingValue", "(D)V");
              mids$[mid_resetNextBoolean_0640e6acf969ed28] = env->getMethodID(cls, "resetNextBoolean", "()V");
              mids$[mid_resetK_0640e6acf969ed28] = env->getMethodID(cls, "resetK", "()V");
              mids$[mid_smoothedCode_2268d18be49a6087] = env->getMethodID(cls, "smoothedCode", "(DD)D");
              mids$[mid_checkValidData_ef17307f2586a186] = env->getMethodID(cls, "checkValidData", "(DDZ)D");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          void HatchFilter::addToCodeHistory(jdouble a0) const
          {
            env->callVoidMethod(this$, mids$[mid_addToCodeHistory_10f281d777284cea], a0);
          }

          void HatchFilter::addToSmoothedCodeHistory(jdouble a0) const
          {
            env->callVoidMethod(this$, mids$[mid_addToSmoothedCodeHistory_10f281d777284cea], a0);
          }

          ::java::util::ArrayList HatchFilter::getCodeHistory() const
          {
            return ::java::util::ArrayList(env->callObjectMethod(this$, mids$[mid_getCodeHistory_897d94db124f72e1]));
          }

          ::java::util::ArrayList HatchFilter::getSmoothedCodeHistory() const
          {
            return ::java::util::ArrayList(env->callObjectMethod(this$, mids$[mid_getSmoothedCodeHistory_897d94db124f72e1]));
          }

          jdouble HatchFilter::getThreshold() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getThreshold_557b8123390d8d0c]);
          }

          void HatchFilter::resetFilterNext(jdouble a0) const
          {
            env->callVoidMethod(this$, mids$[mid_resetFilterNext_10f281d777284cea], a0);
          }

          void HatchFilter::updatePreviousSmoothedCode(jdouble a0) const
          {
            env->callVoidMethod(this$, mids$[mid_updatePreviousSmoothedCode_10f281d777284cea], a0);
          }

          void HatchFilter::updatePreviousSmoothingValue(jdouble a0) const
          {
            env->callVoidMethod(this$, mids$[mid_updatePreviousSmoothingValue_10f281d777284cea], a0);
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
          static PyObject *t_HatchFilter_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_HatchFilter_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_HatchFilter_addToCodeHistory(t_HatchFilter *self, PyObject *arg);
          static PyObject *t_HatchFilter_addToSmoothedCodeHistory(t_HatchFilter *self, PyObject *arg);
          static PyObject *t_HatchFilter_getCodeHistory(t_HatchFilter *self);
          static PyObject *t_HatchFilter_getSmoothedCodeHistory(t_HatchFilter *self);
          static PyObject *t_HatchFilter_getThreshold(t_HatchFilter *self);
          static PyObject *t_HatchFilter_resetFilterNext(t_HatchFilter *self, PyObject *arg);
          static PyObject *t_HatchFilter_updatePreviousSmoothedCode(t_HatchFilter *self, PyObject *arg);
          static PyObject *t_HatchFilter_updatePreviousSmoothingValue(t_HatchFilter *self, PyObject *arg);
          static PyObject *t_HatchFilter_get__codeHistory(t_HatchFilter *self, void *data);
          static PyObject *t_HatchFilter_get__smoothedCodeHistory(t_HatchFilter *self, void *data);
          static PyObject *t_HatchFilter_get__threshold(t_HatchFilter *self, void *data);
          static PyGetSetDef t_HatchFilter__fields_[] = {
            DECLARE_GET_FIELD(t_HatchFilter, codeHistory),
            DECLARE_GET_FIELD(t_HatchFilter, smoothedCodeHistory),
            DECLARE_GET_FIELD(t_HatchFilter, threshold),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_HatchFilter__methods_[] = {
            DECLARE_METHOD(t_HatchFilter, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_HatchFilter, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_HatchFilter, addToCodeHistory, METH_O),
            DECLARE_METHOD(t_HatchFilter, addToSmoothedCodeHistory, METH_O),
            DECLARE_METHOD(t_HatchFilter, getCodeHistory, METH_NOARGS),
            DECLARE_METHOD(t_HatchFilter, getSmoothedCodeHistory, METH_NOARGS),
            DECLARE_METHOD(t_HatchFilter, getThreshold, METH_NOARGS),
            DECLARE_METHOD(t_HatchFilter, resetFilterNext, METH_O),
            DECLARE_METHOD(t_HatchFilter, updatePreviousSmoothedCode, METH_O),
            DECLARE_METHOD(t_HatchFilter, updatePreviousSmoothingValue, METH_O),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(HatchFilter)[] = {
            { Py_tp_methods, t_HatchFilter__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { Py_tp_getset, t_HatchFilter__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(HatchFilter)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(HatchFilter, t_HatchFilter, HatchFilter);

          void t_HatchFilter::install(PyObject *module)
          {
            installType(&PY_TYPE(HatchFilter), &PY_TYPE_DEF(HatchFilter), module, "HatchFilter", 0);
          }

          void t_HatchFilter::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(HatchFilter), "class_", make_descriptor(HatchFilter::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(HatchFilter), "wrapfn_", make_descriptor(t_HatchFilter::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(HatchFilter), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_HatchFilter_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, HatchFilter::initializeClass, 1)))
              return NULL;
            return t_HatchFilter::wrap_Object(HatchFilter(((t_HatchFilter *) arg)->object.this$));
          }
          static PyObject *t_HatchFilter_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, HatchFilter::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_HatchFilter_addToCodeHistory(t_HatchFilter *self, PyObject *arg)
          {
            jdouble a0;

            if (!parseArg(arg, "D", &a0))
            {
              OBJ_CALL(self->object.addToCodeHistory(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "addToCodeHistory", arg);
            return NULL;
          }

          static PyObject *t_HatchFilter_addToSmoothedCodeHistory(t_HatchFilter *self, PyObject *arg)
          {
            jdouble a0;

            if (!parseArg(arg, "D", &a0))
            {
              OBJ_CALL(self->object.addToSmoothedCodeHistory(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "addToSmoothedCodeHistory", arg);
            return NULL;
          }

          static PyObject *t_HatchFilter_getCodeHistory(t_HatchFilter *self)
          {
            ::java::util::ArrayList result((jobject) NULL);
            OBJ_CALL(result = self->object.getCodeHistory());
            return ::java::util::t_ArrayList::wrap_Object(result, ::java::lang::PY_TYPE(Double));
          }

          static PyObject *t_HatchFilter_getSmoothedCodeHistory(t_HatchFilter *self)
          {
            ::java::util::ArrayList result((jobject) NULL);
            OBJ_CALL(result = self->object.getSmoothedCodeHistory());
            return ::java::util::t_ArrayList::wrap_Object(result, ::java::lang::PY_TYPE(Double));
          }

          static PyObject *t_HatchFilter_getThreshold(t_HatchFilter *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getThreshold());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_HatchFilter_resetFilterNext(t_HatchFilter *self, PyObject *arg)
          {
            jdouble a0;

            if (!parseArg(arg, "D", &a0))
            {
              OBJ_CALL(self->object.resetFilterNext(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "resetFilterNext", arg);
            return NULL;
          }

          static PyObject *t_HatchFilter_updatePreviousSmoothedCode(t_HatchFilter *self, PyObject *arg)
          {
            jdouble a0;

            if (!parseArg(arg, "D", &a0))
            {
              OBJ_CALL(self->object.updatePreviousSmoothedCode(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "updatePreviousSmoothedCode", arg);
            return NULL;
          }

          static PyObject *t_HatchFilter_updatePreviousSmoothingValue(t_HatchFilter *self, PyObject *arg)
          {
            jdouble a0;

            if (!parseArg(arg, "D", &a0))
            {
              OBJ_CALL(self->object.updatePreviousSmoothingValue(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "updatePreviousSmoothingValue", arg);
            return NULL;
          }

          static PyObject *t_HatchFilter_get__codeHistory(t_HatchFilter *self, void *data)
          {
            ::java::util::ArrayList value((jobject) NULL);
            OBJ_CALL(value = self->object.getCodeHistory());
            return ::java::util::t_ArrayList::wrap_Object(value);
          }

          static PyObject *t_HatchFilter_get__smoothedCodeHistory(t_HatchFilter *self, void *data)
          {
            ::java::util::ArrayList value((jobject) NULL);
            OBJ_CALL(value = self->object.getSmoothedCodeHistory());
            return ::java::util::t_ArrayList::wrap_Object(value);
          }

          static PyObject *t_HatchFilter_get__threshold(t_HatchFilter *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getThreshold());
            return PyFloat_FromDouble((double) value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/analysis/interpolation/InterpolatingMicrosphere2D.h"
#include "org/hipparchus/analysis/interpolation/InterpolatingMicrosphere2D.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace interpolation {

        ::java::lang::Class *InterpolatingMicrosphere2D::class$ = NULL;
        jmethodID *InterpolatingMicrosphere2D::mids$ = NULL;
        bool InterpolatingMicrosphere2D::live$ = false;

        jclass InterpolatingMicrosphere2D::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/interpolation/InterpolatingMicrosphere2D");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_c4eb928bd0dae600] = env->getMethodID(cls, "<init>", "(IDDD)V");
            mids$[mid_copy_d9b2fb455c013e7e] = env->getMethodID(cls, "copy", "()Lorg/hipparchus/analysis/interpolation/InterpolatingMicrosphere2D;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        InterpolatingMicrosphere2D::InterpolatingMicrosphere2D(jint a0, jdouble a1, jdouble a2, jdouble a3) : ::org::hipparchus::analysis::interpolation::InterpolatingMicrosphere(env->newObject(initializeClass, &mids$, mid_init$_c4eb928bd0dae600, a0, a1, a2, a3)) {}

        InterpolatingMicrosphere2D InterpolatingMicrosphere2D::copy() const
        {
          return InterpolatingMicrosphere2D(env->callObjectMethod(this$, mids$[mid_copy_d9b2fb455c013e7e]));
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
        static PyObject *t_InterpolatingMicrosphere2D_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_InterpolatingMicrosphere2D_instance_(PyTypeObject *type, PyObject *arg);
        static int t_InterpolatingMicrosphere2D_init_(t_InterpolatingMicrosphere2D *self, PyObject *args, PyObject *kwds);
        static PyObject *t_InterpolatingMicrosphere2D_copy(t_InterpolatingMicrosphere2D *self, PyObject *args);

        static PyMethodDef t_InterpolatingMicrosphere2D__methods_[] = {
          DECLARE_METHOD(t_InterpolatingMicrosphere2D, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_InterpolatingMicrosphere2D, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_InterpolatingMicrosphere2D, copy, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(InterpolatingMicrosphere2D)[] = {
          { Py_tp_methods, t_InterpolatingMicrosphere2D__methods_ },
          { Py_tp_init, (void *) t_InterpolatingMicrosphere2D_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(InterpolatingMicrosphere2D)[] = {
          &PY_TYPE_DEF(::org::hipparchus::analysis::interpolation::InterpolatingMicrosphere),
          NULL
        };

        DEFINE_TYPE(InterpolatingMicrosphere2D, t_InterpolatingMicrosphere2D, InterpolatingMicrosphere2D);

        void t_InterpolatingMicrosphere2D::install(PyObject *module)
        {
          installType(&PY_TYPE(InterpolatingMicrosphere2D), &PY_TYPE_DEF(InterpolatingMicrosphere2D), module, "InterpolatingMicrosphere2D", 0);
        }

        void t_InterpolatingMicrosphere2D::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(InterpolatingMicrosphere2D), "class_", make_descriptor(InterpolatingMicrosphere2D::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(InterpolatingMicrosphere2D), "wrapfn_", make_descriptor(t_InterpolatingMicrosphere2D::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(InterpolatingMicrosphere2D), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_InterpolatingMicrosphere2D_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, InterpolatingMicrosphere2D::initializeClass, 1)))
            return NULL;
          return t_InterpolatingMicrosphere2D::wrap_Object(InterpolatingMicrosphere2D(((t_InterpolatingMicrosphere2D *) arg)->object.this$));
        }
        static PyObject *t_InterpolatingMicrosphere2D_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, InterpolatingMicrosphere2D::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_InterpolatingMicrosphere2D_init_(t_InterpolatingMicrosphere2D *self, PyObject *args, PyObject *kwds)
        {
          jint a0;
          jdouble a1;
          jdouble a2;
          jdouble a3;
          InterpolatingMicrosphere2D object((jobject) NULL);

          if (!parseArgs(args, "IDDD", &a0, &a1, &a2, &a3))
          {
            INT_CALL(object = InterpolatingMicrosphere2D(a0, a1, a2, a3));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_InterpolatingMicrosphere2D_copy(t_InterpolatingMicrosphere2D *self, PyObject *args)
        {
          InterpolatingMicrosphere2D result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.copy());
            return t_InterpolatingMicrosphere2D::wrap_Object(result);
          }

          return callSuper(PY_TYPE(InterpolatingMicrosphere2D), (PyObject *) self, "copy", args, 2);
        }
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
            mids$[mid_init$_0640e6acf969ed28] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_init$_10f281d777284cea] = env->getMethodID(cls, "<init>", "(D)V");
            mids$[mid_init$_ab23f4ae0fb33968] = env->getMethodID(cls, "<init>", "(DD)V");
            mids$[mid_init$_87096e3fd8086100] = env->getMethodID(cls, "<init>", "(DDD)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        PegasusSolver::PegasusSolver() : ::org::hipparchus::analysis::solvers::BaseSecantSolver(env->newObject(initializeClass, &mids$, mid_init$_0640e6acf969ed28)) {}

        PegasusSolver::PegasusSolver(jdouble a0) : ::org::hipparchus::analysis::solvers::BaseSecantSolver(env->newObject(initializeClass, &mids$, mid_init$_10f281d777284cea, a0)) {}

        PegasusSolver::PegasusSolver(jdouble a0, jdouble a1) : ::org::hipparchus::analysis::solvers::BaseSecantSolver(env->newObject(initializeClass, &mids$, mid_init$_ab23f4ae0fb33968, a0, a1)) {}

        PegasusSolver::PegasusSolver(jdouble a0, jdouble a1, jdouble a2) : ::org::hipparchus::analysis::solvers::BaseSecantSolver(env->newObject(initializeClass, &mids$, mid_init$_87096e3fd8086100, a0, a1, a2)) {}
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
#include "org/hipparchus/analysis/function/Ceil.h"
#include "org/hipparchus/analysis/differentiation/UnivariateDifferentiableFunction.h"
#include "org/hipparchus/analysis/differentiation/Derivative.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace function {

        ::java::lang::Class *Ceil::class$ = NULL;
        jmethodID *Ceil::mids$ = NULL;
        bool Ceil::live$ = false;

        jclass Ceil::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/function/Ceil");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_0640e6acf969ed28] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_value_7e960cd6eee376d8] = env->getMethodID(cls, "value", "(D)D");
            mids$[mid_value_3eb2b84dba0ab7d2] = env->getMethodID(cls, "value", "(Lorg/hipparchus/analysis/differentiation/Derivative;)Lorg/hipparchus/analysis/differentiation/Derivative;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        Ceil::Ceil() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0640e6acf969ed28)) {}

        jdouble Ceil::value(jdouble a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_value_7e960cd6eee376d8], a0);
        }

        ::org::hipparchus::analysis::differentiation::Derivative Ceil::value(const ::org::hipparchus::analysis::differentiation::Derivative & a0) const
        {
          return ::org::hipparchus::analysis::differentiation::Derivative(env->callObjectMethod(this$, mids$[mid_value_3eb2b84dba0ab7d2], a0.this$));
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
        static PyObject *t_Ceil_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_Ceil_instance_(PyTypeObject *type, PyObject *arg);
        static int t_Ceil_init_(t_Ceil *self, PyObject *args, PyObject *kwds);
        static PyObject *t_Ceil_value(t_Ceil *self, PyObject *args);

        static PyMethodDef t_Ceil__methods_[] = {
          DECLARE_METHOD(t_Ceil, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Ceil, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Ceil, value, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(Ceil)[] = {
          { Py_tp_methods, t_Ceil__methods_ },
          { Py_tp_init, (void *) t_Ceil_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(Ceil)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(Ceil, t_Ceil, Ceil);

        void t_Ceil::install(PyObject *module)
        {
          installType(&PY_TYPE(Ceil), &PY_TYPE_DEF(Ceil), module, "Ceil", 0);
        }

        void t_Ceil::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(Ceil), "class_", make_descriptor(Ceil::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Ceil), "wrapfn_", make_descriptor(t_Ceil::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Ceil), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_Ceil_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, Ceil::initializeClass, 1)))
            return NULL;
          return t_Ceil::wrap_Object(Ceil(((t_Ceil *) arg)->object.this$));
        }
        static PyObject *t_Ceil_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, Ceil::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_Ceil_init_(t_Ceil *self, PyObject *args, PyObject *kwds)
        {
          Ceil object((jobject) NULL);

          INT_CALL(object = Ceil());
          self->object = object;

          return 0;
        }

        static PyObject *t_Ceil_value(t_Ceil *self, PyObject *args)
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
#include "org/orekit/orbits/FieldCircularOrbit.h"
#include "org/orekit/orbits/FieldCircularOrbit.h"
#include "org/orekit/utils/TimeStampedFieldPVCoordinates.h"
#include "org/orekit/orbits/Orbit.h"
#include "org/orekit/utils/FieldPVCoordinates.h"
#include "org/orekit/orbits/PositionAngleBased.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/orekit/orbits/PositionAngleType.h"
#include "org/orekit/orbits/CircularOrbit.h"
#include "org/orekit/orbits/OrbitType.h"
#include "org/orekit/frames/Frame.h"
#include "java/lang/Class.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/hipparchus/Field.h"
#include "java/lang/IllegalArgumentException.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace orbits {

      ::java::lang::Class *FieldCircularOrbit::class$ = NULL;
      jmethodID *FieldCircularOrbit::mids$ = NULL;
      bool FieldCircularOrbit::live$ = false;

      jclass FieldCircularOrbit::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/orbits/FieldCircularOrbit");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_8c98afebb6212490] = env->getMethodID(cls, "<init>", "(Lorg/orekit/orbits/FieldOrbit;)V");
          mids$[mid_init$_6ef9a4973f2d7592] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/Field;Lorg/orekit/orbits/CircularOrbit;)V");
          mids$[mid_init$_7568a622582bbb9f] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/Field;Lorg/orekit/orbits/Orbit;)V");
          mids$[mid_init$_b2c573ad66dbbf4e] = env->getMethodID(cls, "<init>", "(Lorg/orekit/utils/TimeStampedFieldPVCoordinates;Lorg/orekit/frames/Frame;Lorg/hipparchus/CalculusFieldElement;)V");
          mids$[mid_init$_2003571c0e8d33c1] = env->getMethodID(cls, "<init>", "(Lorg/orekit/utils/FieldPVCoordinates;Lorg/orekit/frames/Frame;Lorg/orekit/time/FieldAbsoluteDate;Lorg/hipparchus/CalculusFieldElement;)V");
          mids$[mid_init$_5ef84f89b3c0d68c] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/orbits/PositionAngleType;Lorg/orekit/frames/Frame;Lorg/orekit/time/FieldAbsoluteDate;Lorg/hipparchus/CalculusFieldElement;)V");
          mids$[mid_init$_1ffb1b4106e68722] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/orbits/PositionAngleType;Lorg/orekit/frames/Frame;Lorg/orekit/time/FieldAbsoluteDate;Lorg/hipparchus/CalculusFieldElement;)V");
          mids$[mid_addKeplerContribution_442a44d8b8481234] = env->getMethodID(cls, "addKeplerContribution", "(Lorg/orekit/orbits/PositionAngleType;Lorg/hipparchus/CalculusFieldElement;[Lorg/hipparchus/CalculusFieldElement;)V");
          mids$[mid_eccentricToMean_d181e731358aa045] = env->getStaticMethodID(cls, "eccentricToMean", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_eccentricToTrue_d181e731358aa045] = env->getStaticMethodID(cls, "eccentricToTrue", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getA_613c8f46c659f636] = env->getMethodID(cls, "getA", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getADot_613c8f46c659f636] = env->getMethodID(cls, "getADot", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getAlpha_1c32e6b4d15c6c38] = env->getMethodID(cls, "getAlpha", "(Lorg/orekit/orbits/PositionAngleType;)Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getAlphaDot_1c32e6b4d15c6c38] = env->getMethodID(cls, "getAlphaDot", "(Lorg/orekit/orbits/PositionAngleType;)Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getAlphaE_613c8f46c659f636] = env->getMethodID(cls, "getAlphaE", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getAlphaEDot_613c8f46c659f636] = env->getMethodID(cls, "getAlphaEDot", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getAlphaM_613c8f46c659f636] = env->getMethodID(cls, "getAlphaM", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getAlphaMDot_613c8f46c659f636] = env->getMethodID(cls, "getAlphaMDot", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getAlphaV_613c8f46c659f636] = env->getMethodID(cls, "getAlphaV", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getAlphaVDot_613c8f46c659f636] = env->getMethodID(cls, "getAlphaVDot", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getCachedPositionAngleType_f4984aee71df4c19] = env->getMethodID(cls, "getCachedPositionAngleType", "()Lorg/orekit/orbits/PositionAngleType;");
          mids$[mid_getCircularEx_613c8f46c659f636] = env->getMethodID(cls, "getCircularEx", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getCircularExDot_613c8f46c659f636] = env->getMethodID(cls, "getCircularExDot", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getCircularEy_613c8f46c659f636] = env->getMethodID(cls, "getCircularEy", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getCircularEyDot_613c8f46c659f636] = env->getMethodID(cls, "getCircularEyDot", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getE_613c8f46c659f636] = env->getMethodID(cls, "getE", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getEDot_613c8f46c659f636] = env->getMethodID(cls, "getEDot", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getEquinoctialEx_613c8f46c659f636] = env->getMethodID(cls, "getEquinoctialEx", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getEquinoctialExDot_613c8f46c659f636] = env->getMethodID(cls, "getEquinoctialExDot", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getEquinoctialEy_613c8f46c659f636] = env->getMethodID(cls, "getEquinoctialEy", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getEquinoctialEyDot_613c8f46c659f636] = env->getMethodID(cls, "getEquinoctialEyDot", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getHx_613c8f46c659f636] = env->getMethodID(cls, "getHx", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getHxDot_613c8f46c659f636] = env->getMethodID(cls, "getHxDot", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getHy_613c8f46c659f636] = env->getMethodID(cls, "getHy", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getHyDot_613c8f46c659f636] = env->getMethodID(cls, "getHyDot", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getI_613c8f46c659f636] = env->getMethodID(cls, "getI", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getIDot_613c8f46c659f636] = env->getMethodID(cls, "getIDot", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getLE_613c8f46c659f636] = env->getMethodID(cls, "getLE", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getLEDot_613c8f46c659f636] = env->getMethodID(cls, "getLEDot", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getLM_613c8f46c659f636] = env->getMethodID(cls, "getLM", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getLMDot_613c8f46c659f636] = env->getMethodID(cls, "getLMDot", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getLv_613c8f46c659f636] = env->getMethodID(cls, "getLv", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getLvDot_613c8f46c659f636] = env->getMethodID(cls, "getLvDot", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getRightAscensionOfAscendingNode_613c8f46c659f636] = env->getMethodID(cls, "getRightAscensionOfAscendingNode", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getRightAscensionOfAscendingNodeDot_613c8f46c659f636] = env->getMethodID(cls, "getRightAscensionOfAscendingNodeDot", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getType_2cea2a2cb3e02091] = env->getMethodID(cls, "getType", "()Lorg/orekit/orbits/OrbitType;");
          mids$[mid_hasDerivatives_89b302893bdbe1f1] = env->getMethodID(cls, "hasDerivatives", "()Z");
          mids$[mid_hasRates_89b302893bdbe1f1] = env->getMethodID(cls, "hasRates", "()Z");
          mids$[mid_meanToEccentric_d181e731358aa045] = env->getStaticMethodID(cls, "meanToEccentric", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_removeRates_f7f79630984e0b9b] = env->getMethodID(cls, "removeRates", "()Lorg/orekit/orbits/FieldCircularOrbit;");
          mids$[mid_shiftedBy_d8ef34e39b7f1655] = env->getMethodID(cls, "shiftedBy", "(D)Lorg/orekit/orbits/FieldCircularOrbit;");
          mids$[mid_shiftedBy_00d1c79b858999ca] = env->getMethodID(cls, "shiftedBy", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/orekit/orbits/FieldCircularOrbit;");
          mids$[mid_toOrbit_42c1cf938d8b491c] = env->getMethodID(cls, "toOrbit", "()Lorg/orekit/orbits/CircularOrbit;");
          mids$[mid_toString_3cffd47377eca18a] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");
          mids$[mid_trueToEccentric_d181e731358aa045] = env->getStaticMethodID(cls, "trueToEccentric", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_initPVCoordinates_232470f1b769250c] = env->getMethodID(cls, "initPVCoordinates", "()Lorg/orekit/utils/TimeStampedFieldPVCoordinates;");
          mids$[mid_initPosition_2d64addf4c3391d9] = env->getMethodID(cls, "initPosition", "()Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
          mids$[mid_computeJacobianMeanWrtCartesian_f180d140dce78d62] = env->getMethodID(cls, "computeJacobianMeanWrtCartesian", "()[[Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_computeJacobianEccentricWrtCartesian_f180d140dce78d62] = env->getMethodID(cls, "computeJacobianEccentricWrtCartesian", "()[[Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_computeJacobianTrueWrtCartesian_f180d140dce78d62] = env->getMethodID(cls, "computeJacobianTrueWrtCartesian", "()[[Lorg/hipparchus/CalculusFieldElement;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      FieldCircularOrbit::FieldCircularOrbit(const ::org::orekit::orbits::FieldOrbit & a0) : ::org::orekit::orbits::FieldOrbit(env->newObject(initializeClass, &mids$, mid_init$_8c98afebb6212490, a0.this$)) {}

      FieldCircularOrbit::FieldCircularOrbit(const ::org::hipparchus::Field & a0, const ::org::orekit::orbits::CircularOrbit & a1) : ::org::orekit::orbits::FieldOrbit(env->newObject(initializeClass, &mids$, mid_init$_6ef9a4973f2d7592, a0.this$, a1.this$)) {}

      FieldCircularOrbit::FieldCircularOrbit(const ::org::hipparchus::Field & a0, const ::org::orekit::orbits::Orbit & a1) : ::org::orekit::orbits::FieldOrbit(env->newObject(initializeClass, &mids$, mid_init$_7568a622582bbb9f, a0.this$, a1.this$)) {}

      FieldCircularOrbit::FieldCircularOrbit(const ::org::orekit::utils::TimeStampedFieldPVCoordinates & a0, const ::org::orekit::frames::Frame & a1, const ::org::hipparchus::CalculusFieldElement & a2) : ::org::orekit::orbits::FieldOrbit(env->newObject(initializeClass, &mids$, mid_init$_b2c573ad66dbbf4e, a0.this$, a1.this$, a2.this$)) {}

      FieldCircularOrbit::FieldCircularOrbit(const ::org::orekit::utils::FieldPVCoordinates & a0, const ::org::orekit::frames::Frame & a1, const ::org::orekit::time::FieldAbsoluteDate & a2, const ::org::hipparchus::CalculusFieldElement & a3) : ::org::orekit::orbits::FieldOrbit(env->newObject(initializeClass, &mids$, mid_init$_2003571c0e8d33c1, a0.this$, a1.this$, a2.this$, a3.this$)) {}

      FieldCircularOrbit::FieldCircularOrbit(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::hipparchus::CalculusFieldElement & a1, const ::org::hipparchus::CalculusFieldElement & a2, const ::org::hipparchus::CalculusFieldElement & a3, const ::org::hipparchus::CalculusFieldElement & a4, const ::org::hipparchus::CalculusFieldElement & a5, const ::org::orekit::orbits::PositionAngleType & a6, const ::org::orekit::frames::Frame & a7, const ::org::orekit::time::FieldAbsoluteDate & a8, const ::org::hipparchus::CalculusFieldElement & a9) : ::org::orekit::orbits::FieldOrbit(env->newObject(initializeClass, &mids$, mid_init$_5ef84f89b3c0d68c, a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$, a6.this$, a7.this$, a8.this$, a9.this$)) {}

      FieldCircularOrbit::FieldCircularOrbit(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::hipparchus::CalculusFieldElement & a1, const ::org::hipparchus::CalculusFieldElement & a2, const ::org::hipparchus::CalculusFieldElement & a3, const ::org::hipparchus::CalculusFieldElement & a4, const ::org::hipparchus::CalculusFieldElement & a5, const ::org::hipparchus::CalculusFieldElement & a6, const ::org::hipparchus::CalculusFieldElement & a7, const ::org::hipparchus::CalculusFieldElement & a8, const ::org::hipparchus::CalculusFieldElement & a9, const ::org::hipparchus::CalculusFieldElement & a10, const ::org::hipparchus::CalculusFieldElement & a11, const ::org::orekit::orbits::PositionAngleType & a12, const ::org::orekit::frames::Frame & a13, const ::org::orekit::time::FieldAbsoluteDate & a14, const ::org::hipparchus::CalculusFieldElement & a15) : ::org::orekit::orbits::FieldOrbit(env->newObject(initializeClass, &mids$, mid_init$_1ffb1b4106e68722, a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$, a6.this$, a7.this$, a8.this$, a9.this$, a10.this$, a11.this$, a12.this$, a13.this$, a14.this$, a15.this$)) {}

      void FieldCircularOrbit::addKeplerContribution(const ::org::orekit::orbits::PositionAngleType & a0, const ::org::hipparchus::CalculusFieldElement & a1, const JArray< ::org::hipparchus::CalculusFieldElement > & a2) const
      {
        env->callVoidMethod(this$, mids$[mid_addKeplerContribution_442a44d8b8481234], a0.this$, a1.this$, a2.this$);
      }

      ::org::hipparchus::CalculusFieldElement FieldCircularOrbit::eccentricToMean(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::hipparchus::CalculusFieldElement & a1, const ::org::hipparchus::CalculusFieldElement & a2)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::CalculusFieldElement(env->callStaticObjectMethod(cls, mids$[mid_eccentricToMean_d181e731358aa045], a0.this$, a1.this$, a2.this$));
      }

      ::org::hipparchus::CalculusFieldElement FieldCircularOrbit::eccentricToTrue(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::hipparchus::CalculusFieldElement & a1, const ::org::hipparchus::CalculusFieldElement & a2)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::CalculusFieldElement(env->callStaticObjectMethod(cls, mids$[mid_eccentricToTrue_d181e731358aa045], a0.this$, a1.this$, a2.this$));
      }

      ::org::hipparchus::CalculusFieldElement FieldCircularOrbit::getA() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getA_613c8f46c659f636]));
      }

      ::org::hipparchus::CalculusFieldElement FieldCircularOrbit::getADot() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getADot_613c8f46c659f636]));
      }

      ::org::hipparchus::CalculusFieldElement FieldCircularOrbit::getAlpha(const ::org::orekit::orbits::PositionAngleType & a0) const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getAlpha_1c32e6b4d15c6c38], a0.this$));
      }

      ::org::hipparchus::CalculusFieldElement FieldCircularOrbit::getAlphaDot(const ::org::orekit::orbits::PositionAngleType & a0) const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getAlphaDot_1c32e6b4d15c6c38], a0.this$));
      }

      ::org::hipparchus::CalculusFieldElement FieldCircularOrbit::getAlphaE() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getAlphaE_613c8f46c659f636]));
      }

      ::org::hipparchus::CalculusFieldElement FieldCircularOrbit::getAlphaEDot() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getAlphaEDot_613c8f46c659f636]));
      }

      ::org::hipparchus::CalculusFieldElement FieldCircularOrbit::getAlphaM() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getAlphaM_613c8f46c659f636]));
      }

      ::org::hipparchus::CalculusFieldElement FieldCircularOrbit::getAlphaMDot() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getAlphaMDot_613c8f46c659f636]));
      }

      ::org::hipparchus::CalculusFieldElement FieldCircularOrbit::getAlphaV() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getAlphaV_613c8f46c659f636]));
      }

      ::org::hipparchus::CalculusFieldElement FieldCircularOrbit::getAlphaVDot() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getAlphaVDot_613c8f46c659f636]));
      }

      ::org::orekit::orbits::PositionAngleType FieldCircularOrbit::getCachedPositionAngleType() const
      {
        return ::org::orekit::orbits::PositionAngleType(env->callObjectMethod(this$, mids$[mid_getCachedPositionAngleType_f4984aee71df4c19]));
      }

      ::org::hipparchus::CalculusFieldElement FieldCircularOrbit::getCircularEx() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getCircularEx_613c8f46c659f636]));
      }

      ::org::hipparchus::CalculusFieldElement FieldCircularOrbit::getCircularExDot() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getCircularExDot_613c8f46c659f636]));
      }

      ::org::hipparchus::CalculusFieldElement FieldCircularOrbit::getCircularEy() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getCircularEy_613c8f46c659f636]));
      }

      ::org::hipparchus::CalculusFieldElement FieldCircularOrbit::getCircularEyDot() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getCircularEyDot_613c8f46c659f636]));
      }

      ::org::hipparchus::CalculusFieldElement FieldCircularOrbit::getE() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getE_613c8f46c659f636]));
      }

      ::org::hipparchus::CalculusFieldElement FieldCircularOrbit::getEDot() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getEDot_613c8f46c659f636]));
      }

      ::org::hipparchus::CalculusFieldElement FieldCircularOrbit::getEquinoctialEx() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getEquinoctialEx_613c8f46c659f636]));
      }

      ::org::hipparchus::CalculusFieldElement FieldCircularOrbit::getEquinoctialExDot() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getEquinoctialExDot_613c8f46c659f636]));
      }

      ::org::hipparchus::CalculusFieldElement FieldCircularOrbit::getEquinoctialEy() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getEquinoctialEy_613c8f46c659f636]));
      }

      ::org::hipparchus::CalculusFieldElement FieldCircularOrbit::getEquinoctialEyDot() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getEquinoctialEyDot_613c8f46c659f636]));
      }

      ::org::hipparchus::CalculusFieldElement FieldCircularOrbit::getHx() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getHx_613c8f46c659f636]));
      }

      ::org::hipparchus::CalculusFieldElement FieldCircularOrbit::getHxDot() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getHxDot_613c8f46c659f636]));
      }

      ::org::hipparchus::CalculusFieldElement FieldCircularOrbit::getHy() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getHy_613c8f46c659f636]));
      }

      ::org::hipparchus::CalculusFieldElement FieldCircularOrbit::getHyDot() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getHyDot_613c8f46c659f636]));
      }

      ::org::hipparchus::CalculusFieldElement FieldCircularOrbit::getI() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getI_613c8f46c659f636]));
      }

      ::org::hipparchus::CalculusFieldElement FieldCircularOrbit::getIDot() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getIDot_613c8f46c659f636]));
      }

      ::org::hipparchus::CalculusFieldElement FieldCircularOrbit::getLE() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getLE_613c8f46c659f636]));
      }

      ::org::hipparchus::CalculusFieldElement FieldCircularOrbit::getLEDot() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getLEDot_613c8f46c659f636]));
      }

      ::org::hipparchus::CalculusFieldElement FieldCircularOrbit::getLM() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getLM_613c8f46c659f636]));
      }

      ::org::hipparchus::CalculusFieldElement FieldCircularOrbit::getLMDot() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getLMDot_613c8f46c659f636]));
      }

      ::org::hipparchus::CalculusFieldElement FieldCircularOrbit::getLv() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getLv_613c8f46c659f636]));
      }

      ::org::hipparchus::CalculusFieldElement FieldCircularOrbit::getLvDot() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getLvDot_613c8f46c659f636]));
      }

      ::org::hipparchus::CalculusFieldElement FieldCircularOrbit::getRightAscensionOfAscendingNode() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getRightAscensionOfAscendingNode_613c8f46c659f636]));
      }

      ::org::hipparchus::CalculusFieldElement FieldCircularOrbit::getRightAscensionOfAscendingNodeDot() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getRightAscensionOfAscendingNodeDot_613c8f46c659f636]));
      }

      ::org::orekit::orbits::OrbitType FieldCircularOrbit::getType() const
      {
        return ::org::orekit::orbits::OrbitType(env->callObjectMethod(this$, mids$[mid_getType_2cea2a2cb3e02091]));
      }

      jboolean FieldCircularOrbit::hasDerivatives() const
      {
        return env->callBooleanMethod(this$, mids$[mid_hasDerivatives_89b302893bdbe1f1]);
      }

      jboolean FieldCircularOrbit::hasRates() const
      {
        return env->callBooleanMethod(this$, mids$[mid_hasRates_89b302893bdbe1f1]);
      }

      ::org::hipparchus::CalculusFieldElement FieldCircularOrbit::meanToEccentric(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::hipparchus::CalculusFieldElement & a1, const ::org::hipparchus::CalculusFieldElement & a2)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::CalculusFieldElement(env->callStaticObjectMethod(cls, mids$[mid_meanToEccentric_d181e731358aa045], a0.this$, a1.this$, a2.this$));
      }

      FieldCircularOrbit FieldCircularOrbit::removeRates() const
      {
        return FieldCircularOrbit(env->callObjectMethod(this$, mids$[mid_removeRates_f7f79630984e0b9b]));
      }

      FieldCircularOrbit FieldCircularOrbit::shiftedBy(jdouble a0) const
      {
        return FieldCircularOrbit(env->callObjectMethod(this$, mids$[mid_shiftedBy_d8ef34e39b7f1655], a0));
      }

      FieldCircularOrbit FieldCircularOrbit::shiftedBy(const ::org::hipparchus::CalculusFieldElement & a0) const
      {
        return FieldCircularOrbit(env->callObjectMethod(this$, mids$[mid_shiftedBy_00d1c79b858999ca], a0.this$));
      }

      ::org::orekit::orbits::CircularOrbit FieldCircularOrbit::toOrbit() const
      {
        return ::org::orekit::orbits::CircularOrbit(env->callObjectMethod(this$, mids$[mid_toOrbit_42c1cf938d8b491c]));
      }

      ::java::lang::String FieldCircularOrbit::toString() const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_3cffd47377eca18a]));
      }

      ::org::hipparchus::CalculusFieldElement FieldCircularOrbit::trueToEccentric(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::hipparchus::CalculusFieldElement & a1, const ::org::hipparchus::CalculusFieldElement & a2)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::CalculusFieldElement(env->callStaticObjectMethod(cls, mids$[mid_trueToEccentric_d181e731358aa045], a0.this$, a1.this$, a2.this$));
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
      static PyObject *t_FieldCircularOrbit_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldCircularOrbit_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldCircularOrbit_of_(t_FieldCircularOrbit *self, PyObject *args);
      static int t_FieldCircularOrbit_init_(t_FieldCircularOrbit *self, PyObject *args, PyObject *kwds);
      static PyObject *t_FieldCircularOrbit_addKeplerContribution(t_FieldCircularOrbit *self, PyObject *args);
      static PyObject *t_FieldCircularOrbit_eccentricToMean(PyTypeObject *type, PyObject *args);
      static PyObject *t_FieldCircularOrbit_eccentricToTrue(PyTypeObject *type, PyObject *args);
      static PyObject *t_FieldCircularOrbit_getA(t_FieldCircularOrbit *self, PyObject *args);
      static PyObject *t_FieldCircularOrbit_getADot(t_FieldCircularOrbit *self, PyObject *args);
      static PyObject *t_FieldCircularOrbit_getAlpha(t_FieldCircularOrbit *self, PyObject *arg);
      static PyObject *t_FieldCircularOrbit_getAlphaDot(t_FieldCircularOrbit *self, PyObject *arg);
      static PyObject *t_FieldCircularOrbit_getAlphaE(t_FieldCircularOrbit *self);
      static PyObject *t_FieldCircularOrbit_getAlphaEDot(t_FieldCircularOrbit *self);
      static PyObject *t_FieldCircularOrbit_getAlphaM(t_FieldCircularOrbit *self);
      static PyObject *t_FieldCircularOrbit_getAlphaMDot(t_FieldCircularOrbit *self);
      static PyObject *t_FieldCircularOrbit_getAlphaV(t_FieldCircularOrbit *self);
      static PyObject *t_FieldCircularOrbit_getAlphaVDot(t_FieldCircularOrbit *self);
      static PyObject *t_FieldCircularOrbit_getCachedPositionAngleType(t_FieldCircularOrbit *self);
      static PyObject *t_FieldCircularOrbit_getCircularEx(t_FieldCircularOrbit *self);
      static PyObject *t_FieldCircularOrbit_getCircularExDot(t_FieldCircularOrbit *self);
      static PyObject *t_FieldCircularOrbit_getCircularEy(t_FieldCircularOrbit *self);
      static PyObject *t_FieldCircularOrbit_getCircularEyDot(t_FieldCircularOrbit *self);
      static PyObject *t_FieldCircularOrbit_getE(t_FieldCircularOrbit *self, PyObject *args);
      static PyObject *t_FieldCircularOrbit_getEDot(t_FieldCircularOrbit *self, PyObject *args);
      static PyObject *t_FieldCircularOrbit_getEquinoctialEx(t_FieldCircularOrbit *self, PyObject *args);
      static PyObject *t_FieldCircularOrbit_getEquinoctialExDot(t_FieldCircularOrbit *self, PyObject *args);
      static PyObject *t_FieldCircularOrbit_getEquinoctialEy(t_FieldCircularOrbit *self, PyObject *args);
      static PyObject *t_FieldCircularOrbit_getEquinoctialEyDot(t_FieldCircularOrbit *self, PyObject *args);
      static PyObject *t_FieldCircularOrbit_getHx(t_FieldCircularOrbit *self, PyObject *args);
      static PyObject *t_FieldCircularOrbit_getHxDot(t_FieldCircularOrbit *self, PyObject *args);
      static PyObject *t_FieldCircularOrbit_getHy(t_FieldCircularOrbit *self, PyObject *args);
      static PyObject *t_FieldCircularOrbit_getHyDot(t_FieldCircularOrbit *self, PyObject *args);
      static PyObject *t_FieldCircularOrbit_getI(t_FieldCircularOrbit *self, PyObject *args);
      static PyObject *t_FieldCircularOrbit_getIDot(t_FieldCircularOrbit *self, PyObject *args);
      static PyObject *t_FieldCircularOrbit_getLE(t_FieldCircularOrbit *self, PyObject *args);
      static PyObject *t_FieldCircularOrbit_getLEDot(t_FieldCircularOrbit *self, PyObject *args);
      static PyObject *t_FieldCircularOrbit_getLM(t_FieldCircularOrbit *self, PyObject *args);
      static PyObject *t_FieldCircularOrbit_getLMDot(t_FieldCircularOrbit *self, PyObject *args);
      static PyObject *t_FieldCircularOrbit_getLv(t_FieldCircularOrbit *self, PyObject *args);
      static PyObject *t_FieldCircularOrbit_getLvDot(t_FieldCircularOrbit *self, PyObject *args);
      static PyObject *t_FieldCircularOrbit_getRightAscensionOfAscendingNode(t_FieldCircularOrbit *self);
      static PyObject *t_FieldCircularOrbit_getRightAscensionOfAscendingNodeDot(t_FieldCircularOrbit *self);
      static PyObject *t_FieldCircularOrbit_getType(t_FieldCircularOrbit *self, PyObject *args);
      static PyObject *t_FieldCircularOrbit_hasDerivatives(t_FieldCircularOrbit *self, PyObject *args);
      static PyObject *t_FieldCircularOrbit_hasRates(t_FieldCircularOrbit *self);
      static PyObject *t_FieldCircularOrbit_meanToEccentric(PyTypeObject *type, PyObject *args);
      static PyObject *t_FieldCircularOrbit_removeRates(t_FieldCircularOrbit *self);
      static PyObject *t_FieldCircularOrbit_shiftedBy(t_FieldCircularOrbit *self, PyObject *args);
      static PyObject *t_FieldCircularOrbit_toOrbit(t_FieldCircularOrbit *self, PyObject *args);
      static PyObject *t_FieldCircularOrbit_toString(t_FieldCircularOrbit *self, PyObject *args);
      static PyObject *t_FieldCircularOrbit_trueToEccentric(PyTypeObject *type, PyObject *args);
      static PyObject *t_FieldCircularOrbit_get__a(t_FieldCircularOrbit *self, void *data);
      static PyObject *t_FieldCircularOrbit_get__aDot(t_FieldCircularOrbit *self, void *data);
      static PyObject *t_FieldCircularOrbit_get__alphaE(t_FieldCircularOrbit *self, void *data);
      static PyObject *t_FieldCircularOrbit_get__alphaEDot(t_FieldCircularOrbit *self, void *data);
      static PyObject *t_FieldCircularOrbit_get__alphaM(t_FieldCircularOrbit *self, void *data);
      static PyObject *t_FieldCircularOrbit_get__alphaMDot(t_FieldCircularOrbit *self, void *data);
      static PyObject *t_FieldCircularOrbit_get__alphaV(t_FieldCircularOrbit *self, void *data);
      static PyObject *t_FieldCircularOrbit_get__alphaVDot(t_FieldCircularOrbit *self, void *data);
      static PyObject *t_FieldCircularOrbit_get__cachedPositionAngleType(t_FieldCircularOrbit *self, void *data);
      static PyObject *t_FieldCircularOrbit_get__circularEx(t_FieldCircularOrbit *self, void *data);
      static PyObject *t_FieldCircularOrbit_get__circularExDot(t_FieldCircularOrbit *self, void *data);
      static PyObject *t_FieldCircularOrbit_get__circularEy(t_FieldCircularOrbit *self, void *data);
      static PyObject *t_FieldCircularOrbit_get__circularEyDot(t_FieldCircularOrbit *self, void *data);
      static PyObject *t_FieldCircularOrbit_get__e(t_FieldCircularOrbit *self, void *data);
      static PyObject *t_FieldCircularOrbit_get__eDot(t_FieldCircularOrbit *self, void *data);
      static PyObject *t_FieldCircularOrbit_get__equinoctialEx(t_FieldCircularOrbit *self, void *data);
      static PyObject *t_FieldCircularOrbit_get__equinoctialExDot(t_FieldCircularOrbit *self, void *data);
      static PyObject *t_FieldCircularOrbit_get__equinoctialEy(t_FieldCircularOrbit *self, void *data);
      static PyObject *t_FieldCircularOrbit_get__equinoctialEyDot(t_FieldCircularOrbit *self, void *data);
      static PyObject *t_FieldCircularOrbit_get__hx(t_FieldCircularOrbit *self, void *data);
      static PyObject *t_FieldCircularOrbit_get__hxDot(t_FieldCircularOrbit *self, void *data);
      static PyObject *t_FieldCircularOrbit_get__hy(t_FieldCircularOrbit *self, void *data);
      static PyObject *t_FieldCircularOrbit_get__hyDot(t_FieldCircularOrbit *self, void *data);
      static PyObject *t_FieldCircularOrbit_get__i(t_FieldCircularOrbit *self, void *data);
      static PyObject *t_FieldCircularOrbit_get__iDot(t_FieldCircularOrbit *self, void *data);
      static PyObject *t_FieldCircularOrbit_get__lE(t_FieldCircularOrbit *self, void *data);
      static PyObject *t_FieldCircularOrbit_get__lEDot(t_FieldCircularOrbit *self, void *data);
      static PyObject *t_FieldCircularOrbit_get__lM(t_FieldCircularOrbit *self, void *data);
      static PyObject *t_FieldCircularOrbit_get__lMDot(t_FieldCircularOrbit *self, void *data);
      static PyObject *t_FieldCircularOrbit_get__lv(t_FieldCircularOrbit *self, void *data);
      static PyObject *t_FieldCircularOrbit_get__lvDot(t_FieldCircularOrbit *self, void *data);
      static PyObject *t_FieldCircularOrbit_get__rightAscensionOfAscendingNode(t_FieldCircularOrbit *self, void *data);
      static PyObject *t_FieldCircularOrbit_get__rightAscensionOfAscendingNodeDot(t_FieldCircularOrbit *self, void *data);
      static PyObject *t_FieldCircularOrbit_get__type(t_FieldCircularOrbit *self, void *data);
      static PyObject *t_FieldCircularOrbit_get__parameters_(t_FieldCircularOrbit *self, void *data);
      static PyGetSetDef t_FieldCircularOrbit__fields_[] = {
        DECLARE_GET_FIELD(t_FieldCircularOrbit, a),
        DECLARE_GET_FIELD(t_FieldCircularOrbit, aDot),
        DECLARE_GET_FIELD(t_FieldCircularOrbit, alphaE),
        DECLARE_GET_FIELD(t_FieldCircularOrbit, alphaEDot),
        DECLARE_GET_FIELD(t_FieldCircularOrbit, alphaM),
        DECLARE_GET_FIELD(t_FieldCircularOrbit, alphaMDot),
        DECLARE_GET_FIELD(t_FieldCircularOrbit, alphaV),
        DECLARE_GET_FIELD(t_FieldCircularOrbit, alphaVDot),
        DECLARE_GET_FIELD(t_FieldCircularOrbit, cachedPositionAngleType),
        DECLARE_GET_FIELD(t_FieldCircularOrbit, circularEx),
        DECLARE_GET_FIELD(t_FieldCircularOrbit, circularExDot),
        DECLARE_GET_FIELD(t_FieldCircularOrbit, circularEy),
        DECLARE_GET_FIELD(t_FieldCircularOrbit, circularEyDot),
        DECLARE_GET_FIELD(t_FieldCircularOrbit, e),
        DECLARE_GET_FIELD(t_FieldCircularOrbit, eDot),
        DECLARE_GET_FIELD(t_FieldCircularOrbit, equinoctialEx),
        DECLARE_GET_FIELD(t_FieldCircularOrbit, equinoctialExDot),
        DECLARE_GET_FIELD(t_FieldCircularOrbit, equinoctialEy),
        DECLARE_GET_FIELD(t_FieldCircularOrbit, equinoctialEyDot),
        DECLARE_GET_FIELD(t_FieldCircularOrbit, hx),
        DECLARE_GET_FIELD(t_FieldCircularOrbit, hxDot),
        DECLARE_GET_FIELD(t_FieldCircularOrbit, hy),
        DECLARE_GET_FIELD(t_FieldCircularOrbit, hyDot),
        DECLARE_GET_FIELD(t_FieldCircularOrbit, i),
        DECLARE_GET_FIELD(t_FieldCircularOrbit, iDot),
        DECLARE_GET_FIELD(t_FieldCircularOrbit, lE),
        DECLARE_GET_FIELD(t_FieldCircularOrbit, lEDot),
        DECLARE_GET_FIELD(t_FieldCircularOrbit, lM),
        DECLARE_GET_FIELD(t_FieldCircularOrbit, lMDot),
        DECLARE_GET_FIELD(t_FieldCircularOrbit, lv),
        DECLARE_GET_FIELD(t_FieldCircularOrbit, lvDot),
        DECLARE_GET_FIELD(t_FieldCircularOrbit, rightAscensionOfAscendingNode),
        DECLARE_GET_FIELD(t_FieldCircularOrbit, rightAscensionOfAscendingNodeDot),
        DECLARE_GET_FIELD(t_FieldCircularOrbit, type),
        DECLARE_GET_FIELD(t_FieldCircularOrbit, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_FieldCircularOrbit__methods_[] = {
        DECLARE_METHOD(t_FieldCircularOrbit, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldCircularOrbit, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldCircularOrbit, of_, METH_VARARGS),
        DECLARE_METHOD(t_FieldCircularOrbit, addKeplerContribution, METH_VARARGS),
        DECLARE_METHOD(t_FieldCircularOrbit, eccentricToMean, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_FieldCircularOrbit, eccentricToTrue, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_FieldCircularOrbit, getA, METH_VARARGS),
        DECLARE_METHOD(t_FieldCircularOrbit, getADot, METH_VARARGS),
        DECLARE_METHOD(t_FieldCircularOrbit, getAlpha, METH_O),
        DECLARE_METHOD(t_FieldCircularOrbit, getAlphaDot, METH_O),
        DECLARE_METHOD(t_FieldCircularOrbit, getAlphaE, METH_NOARGS),
        DECLARE_METHOD(t_FieldCircularOrbit, getAlphaEDot, METH_NOARGS),
        DECLARE_METHOD(t_FieldCircularOrbit, getAlphaM, METH_NOARGS),
        DECLARE_METHOD(t_FieldCircularOrbit, getAlphaMDot, METH_NOARGS),
        DECLARE_METHOD(t_FieldCircularOrbit, getAlphaV, METH_NOARGS),
        DECLARE_METHOD(t_FieldCircularOrbit, getAlphaVDot, METH_NOARGS),
        DECLARE_METHOD(t_FieldCircularOrbit, getCachedPositionAngleType, METH_NOARGS),
        DECLARE_METHOD(t_FieldCircularOrbit, getCircularEx, METH_NOARGS),
        DECLARE_METHOD(t_FieldCircularOrbit, getCircularExDot, METH_NOARGS),
        DECLARE_METHOD(t_FieldCircularOrbit, getCircularEy, METH_NOARGS),
        DECLARE_METHOD(t_FieldCircularOrbit, getCircularEyDot, METH_NOARGS),
        DECLARE_METHOD(t_FieldCircularOrbit, getE, METH_VARARGS),
        DECLARE_METHOD(t_FieldCircularOrbit, getEDot, METH_VARARGS),
        DECLARE_METHOD(t_FieldCircularOrbit, getEquinoctialEx, METH_VARARGS),
        DECLARE_METHOD(t_FieldCircularOrbit, getEquinoctialExDot, METH_VARARGS),
        DECLARE_METHOD(t_FieldCircularOrbit, getEquinoctialEy, METH_VARARGS),
        DECLARE_METHOD(t_FieldCircularOrbit, getEquinoctialEyDot, METH_VARARGS),
        DECLARE_METHOD(t_FieldCircularOrbit, getHx, METH_VARARGS),
        DECLARE_METHOD(t_FieldCircularOrbit, getHxDot, METH_VARARGS),
        DECLARE_METHOD(t_FieldCircularOrbit, getHy, METH_VARARGS),
        DECLARE_METHOD(t_FieldCircularOrbit, getHyDot, METH_VARARGS),
        DECLARE_METHOD(t_FieldCircularOrbit, getI, METH_VARARGS),
        DECLARE_METHOD(t_FieldCircularOrbit, getIDot, METH_VARARGS),
        DECLARE_METHOD(t_FieldCircularOrbit, getLE, METH_VARARGS),
        DECLARE_METHOD(t_FieldCircularOrbit, getLEDot, METH_VARARGS),
        DECLARE_METHOD(t_FieldCircularOrbit, getLM, METH_VARARGS),
        DECLARE_METHOD(t_FieldCircularOrbit, getLMDot, METH_VARARGS),
        DECLARE_METHOD(t_FieldCircularOrbit, getLv, METH_VARARGS),
        DECLARE_METHOD(t_FieldCircularOrbit, getLvDot, METH_VARARGS),
        DECLARE_METHOD(t_FieldCircularOrbit, getRightAscensionOfAscendingNode, METH_NOARGS),
        DECLARE_METHOD(t_FieldCircularOrbit, getRightAscensionOfAscendingNodeDot, METH_NOARGS),
        DECLARE_METHOD(t_FieldCircularOrbit, getType, METH_VARARGS),
        DECLARE_METHOD(t_FieldCircularOrbit, hasDerivatives, METH_VARARGS),
        DECLARE_METHOD(t_FieldCircularOrbit, hasRates, METH_NOARGS),
        DECLARE_METHOD(t_FieldCircularOrbit, meanToEccentric, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_FieldCircularOrbit, removeRates, METH_NOARGS),
        DECLARE_METHOD(t_FieldCircularOrbit, shiftedBy, METH_VARARGS),
        DECLARE_METHOD(t_FieldCircularOrbit, toOrbit, METH_VARARGS),
        DECLARE_METHOD(t_FieldCircularOrbit, toString, METH_VARARGS),
        DECLARE_METHOD(t_FieldCircularOrbit, trueToEccentric, METH_VARARGS | METH_CLASS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(FieldCircularOrbit)[] = {
        { Py_tp_methods, t_FieldCircularOrbit__methods_ },
        { Py_tp_init, (void *) t_FieldCircularOrbit_init_ },
        { Py_tp_getset, t_FieldCircularOrbit__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(FieldCircularOrbit)[] = {
        &PY_TYPE_DEF(::org::orekit::orbits::FieldOrbit),
        NULL
      };

      DEFINE_TYPE(FieldCircularOrbit, t_FieldCircularOrbit, FieldCircularOrbit);
      PyObject *t_FieldCircularOrbit::wrap_Object(const FieldCircularOrbit& object, PyTypeObject *p0)
      {
        PyObject *obj = t_FieldCircularOrbit::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_FieldCircularOrbit *self = (t_FieldCircularOrbit *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_FieldCircularOrbit::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_FieldCircularOrbit::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_FieldCircularOrbit *self = (t_FieldCircularOrbit *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_FieldCircularOrbit::install(PyObject *module)
      {
        installType(&PY_TYPE(FieldCircularOrbit), &PY_TYPE_DEF(FieldCircularOrbit), module, "FieldCircularOrbit", 0);
      }

      void t_FieldCircularOrbit::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldCircularOrbit), "class_", make_descriptor(FieldCircularOrbit::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldCircularOrbit), "wrapfn_", make_descriptor(t_FieldCircularOrbit::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldCircularOrbit), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_FieldCircularOrbit_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, FieldCircularOrbit::initializeClass, 1)))
          return NULL;
        return t_FieldCircularOrbit::wrap_Object(FieldCircularOrbit(((t_FieldCircularOrbit *) arg)->object.this$));
      }
      static PyObject *t_FieldCircularOrbit_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, FieldCircularOrbit::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_FieldCircularOrbit_of_(t_FieldCircularOrbit *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static int t_FieldCircularOrbit_init_(t_FieldCircularOrbit *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::orekit::orbits::FieldOrbit a0((jobject) NULL);
            PyTypeObject **p0;
            FieldCircularOrbit object((jobject) NULL);

            if (!parseArgs(args, "K", ::org::orekit::orbits::FieldOrbit::initializeClass, &a0, &p0, ::org::orekit::orbits::t_FieldOrbit::parameters_))
            {
              INT_CALL(object = FieldCircularOrbit(a0));
              self->object = object;
              break;
            }
          }
          goto err;
         case 2:
          {
            ::org::hipparchus::Field a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::orbits::CircularOrbit a1((jobject) NULL);
            FieldCircularOrbit object((jobject) NULL);

            if (!parseArgs(args, "Kk", ::org::hipparchus::Field::initializeClass, ::org::orekit::orbits::CircularOrbit::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1))
            {
              INT_CALL(object = FieldCircularOrbit(a0, a1));
              self->object = object;
              break;
            }
          }
          {
            ::org::hipparchus::Field a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::orbits::Orbit a1((jobject) NULL);
            FieldCircularOrbit object((jobject) NULL);

            if (!parseArgs(args, "Kk", ::org::hipparchus::Field::initializeClass, ::org::orekit::orbits::Orbit::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1))
            {
              INT_CALL(object = FieldCircularOrbit(a0, a1));
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
            FieldCircularOrbit object((jobject) NULL);

            if (!parseArgs(args, "KkK", ::org::orekit::utils::TimeStampedFieldPVCoordinates::initializeClass, ::org::orekit::frames::Frame::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::orekit::utils::t_TimeStampedFieldPVCoordinates::parameters_, &a1, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_))
            {
              INT_CALL(object = FieldCircularOrbit(a0, a1, a2));
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
            FieldCircularOrbit object((jobject) NULL);

            if (!parseArgs(args, "KkKK", ::org::orekit::utils::FieldPVCoordinates::initializeClass, ::org::orekit::frames::Frame::initializeClass, ::org::orekit::time::FieldAbsoluteDate::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::orekit::utils::t_FieldPVCoordinates::parameters_, &a1, &a2, &p2, ::org::orekit::time::t_FieldAbsoluteDate::parameters_, &a3, &p3, ::org::hipparchus::t_CalculusFieldElement::parameters_))
            {
              INT_CALL(object = FieldCircularOrbit(a0, a1, a2, a3));
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
            FieldCircularOrbit object((jobject) NULL);

            if (!parseArgs(args, "KKKKKKKkKK", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::orekit::orbits::PositionAngleType::initializeClass, ::org::orekit::frames::Frame::initializeClass, ::org::orekit::time::FieldAbsoluteDate::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a3, &p3, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a4, &p4, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a5, &p5, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a6, &p6, ::org::orekit::orbits::t_PositionAngleType::parameters_, &a7, &a8, &p8, ::org::orekit::time::t_FieldAbsoluteDate::parameters_, &a9, &p9, ::org::hipparchus::t_CalculusFieldElement::parameters_))
            {
              INT_CALL(object = FieldCircularOrbit(a0, a1, a2, a3, a4, a5, a6, a7, a8, a9));
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
            FieldCircularOrbit object((jobject) NULL);

            if (!parseArgs(args, "KKKKKKKKKKKKKkKK", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::orekit::orbits::PositionAngleType::initializeClass, ::org::orekit::frames::Frame::initializeClass, ::org::orekit::time::FieldAbsoluteDate::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a3, &p3, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a4, &p4, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a5, &p5, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a6, &p6, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a7, &p7, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a8, &p8, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a9, &p9, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a10, &p10, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a11, &p11, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a12, &p12, ::org::orekit::orbits::t_PositionAngleType::parameters_, &a13, &a14, &p14, ::org::orekit::time::t_FieldAbsoluteDate::parameters_, &a15, &p15, ::org::hipparchus::t_CalculusFieldElement::parameters_))
            {
              INT_CALL(object = FieldCircularOrbit(a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15));
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

      static PyObject *t_FieldCircularOrbit_addKeplerContribution(t_FieldCircularOrbit *self, PyObject *args)
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

        return callSuper(PY_TYPE(FieldCircularOrbit), (PyObject *) self, "addKeplerContribution", args, 2);
      }

      static PyObject *t_FieldCircularOrbit_eccentricToMean(PyTypeObject *type, PyObject *args)
      {
        ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
        PyTypeObject **p0;
        ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
        PyTypeObject **p1;
        ::org::hipparchus::CalculusFieldElement a2((jobject) NULL);
        PyTypeObject **p2;
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

        if (!parseArgs(args, "KKK", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_))
        {
          OBJ_CALL(result = ::org::orekit::orbits::FieldCircularOrbit::eccentricToMean(a0, a1, a2));
          return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "eccentricToMean", args);
        return NULL;
      }

      static PyObject *t_FieldCircularOrbit_eccentricToTrue(PyTypeObject *type, PyObject *args)
      {
        ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
        PyTypeObject **p0;
        ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
        PyTypeObject **p1;
        ::org::hipparchus::CalculusFieldElement a2((jobject) NULL);
        PyTypeObject **p2;
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

        if (!parseArgs(args, "KKK", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_))
        {
          OBJ_CALL(result = ::org::orekit::orbits::FieldCircularOrbit::eccentricToTrue(a0, a1, a2));
          return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "eccentricToTrue", args);
        return NULL;
      }

      static PyObject *t_FieldCircularOrbit_getA(t_FieldCircularOrbit *self, PyObject *args)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getA());
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        return callSuper(PY_TYPE(FieldCircularOrbit), (PyObject *) self, "getA", args, 2);
      }

      static PyObject *t_FieldCircularOrbit_getADot(t_FieldCircularOrbit *self, PyObject *args)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getADot());
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        return callSuper(PY_TYPE(FieldCircularOrbit), (PyObject *) self, "getADot", args, 2);
      }

      static PyObject *t_FieldCircularOrbit_getAlpha(t_FieldCircularOrbit *self, PyObject *arg)
      {
        ::org::orekit::orbits::PositionAngleType a0((jobject) NULL);
        PyTypeObject **p0;
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

        if (!parseArg(arg, "K", ::org::orekit::orbits::PositionAngleType::initializeClass, &a0, &p0, ::org::orekit::orbits::t_PositionAngleType::parameters_))
        {
          OBJ_CALL(result = self->object.getAlpha(a0));
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "getAlpha", arg);
        return NULL;
      }

      static PyObject *t_FieldCircularOrbit_getAlphaDot(t_FieldCircularOrbit *self, PyObject *arg)
      {
        ::org::orekit::orbits::PositionAngleType a0((jobject) NULL);
        PyTypeObject **p0;
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

        if (!parseArg(arg, "K", ::org::orekit::orbits::PositionAngleType::initializeClass, &a0, &p0, ::org::orekit::orbits::t_PositionAngleType::parameters_))
        {
          OBJ_CALL(result = self->object.getAlphaDot(a0));
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "getAlphaDot", arg);
        return NULL;
      }

      static PyObject *t_FieldCircularOrbit_getAlphaE(t_FieldCircularOrbit *self)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
        OBJ_CALL(result = self->object.getAlphaE());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
      }

      static PyObject *t_FieldCircularOrbit_getAlphaEDot(t_FieldCircularOrbit *self)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
        OBJ_CALL(result = self->object.getAlphaEDot());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
      }

      static PyObject *t_FieldCircularOrbit_getAlphaM(t_FieldCircularOrbit *self)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
        OBJ_CALL(result = self->object.getAlphaM());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
      }

      static PyObject *t_FieldCircularOrbit_getAlphaMDot(t_FieldCircularOrbit *self)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
        OBJ_CALL(result = self->object.getAlphaMDot());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
      }

      static PyObject *t_FieldCircularOrbit_getAlphaV(t_FieldCircularOrbit *self)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
        OBJ_CALL(result = self->object.getAlphaV());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
      }

      static PyObject *t_FieldCircularOrbit_getAlphaVDot(t_FieldCircularOrbit *self)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
        OBJ_CALL(result = self->object.getAlphaVDot());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
      }

      static PyObject *t_FieldCircularOrbit_getCachedPositionAngleType(t_FieldCircularOrbit *self)
      {
        ::org::orekit::orbits::PositionAngleType result((jobject) NULL);
        OBJ_CALL(result = self->object.getCachedPositionAngleType());
        return ::org::orekit::orbits::t_PositionAngleType::wrap_Object(result);
      }

      static PyObject *t_FieldCircularOrbit_getCircularEx(t_FieldCircularOrbit *self)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
        OBJ_CALL(result = self->object.getCircularEx());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
      }

      static PyObject *t_FieldCircularOrbit_getCircularExDot(t_FieldCircularOrbit *self)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
        OBJ_CALL(result = self->object.getCircularExDot());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
      }

      static PyObject *t_FieldCircularOrbit_getCircularEy(t_FieldCircularOrbit *self)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
        OBJ_CALL(result = self->object.getCircularEy());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
      }

      static PyObject *t_FieldCircularOrbit_getCircularEyDot(t_FieldCircularOrbit *self)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
        OBJ_CALL(result = self->object.getCircularEyDot());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
      }

      static PyObject *t_FieldCircularOrbit_getE(t_FieldCircularOrbit *self, PyObject *args)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getE());
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        return callSuper(PY_TYPE(FieldCircularOrbit), (PyObject *) self, "getE", args, 2);
      }

      static PyObject *t_FieldCircularOrbit_getEDot(t_FieldCircularOrbit *self, PyObject *args)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getEDot());
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        return callSuper(PY_TYPE(FieldCircularOrbit), (PyObject *) self, "getEDot", args, 2);
      }

      static PyObject *t_FieldCircularOrbit_getEquinoctialEx(t_FieldCircularOrbit *self, PyObject *args)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getEquinoctialEx());
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        return callSuper(PY_TYPE(FieldCircularOrbit), (PyObject *) self, "getEquinoctialEx", args, 2);
      }

      static PyObject *t_FieldCircularOrbit_getEquinoctialExDot(t_FieldCircularOrbit *self, PyObject *args)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getEquinoctialExDot());
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        return callSuper(PY_TYPE(FieldCircularOrbit), (PyObject *) self, "getEquinoctialExDot", args, 2);
      }

      static PyObject *t_FieldCircularOrbit_getEquinoctialEy(t_FieldCircularOrbit *self, PyObject *args)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getEquinoctialEy());
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        return callSuper(PY_TYPE(FieldCircularOrbit), (PyObject *) self, "getEquinoctialEy", args, 2);
      }

      static PyObject *t_FieldCircularOrbit_getEquinoctialEyDot(t_FieldCircularOrbit *self, PyObject *args)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getEquinoctialEyDot());
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        return callSuper(PY_TYPE(FieldCircularOrbit), (PyObject *) self, "getEquinoctialEyDot", args, 2);
      }

      static PyObject *t_FieldCircularOrbit_getHx(t_FieldCircularOrbit *self, PyObject *args)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getHx());
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        return callSuper(PY_TYPE(FieldCircularOrbit), (PyObject *) self, "getHx", args, 2);
      }

      static PyObject *t_FieldCircularOrbit_getHxDot(t_FieldCircularOrbit *self, PyObject *args)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getHxDot());
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        return callSuper(PY_TYPE(FieldCircularOrbit), (PyObject *) self, "getHxDot", args, 2);
      }

      static PyObject *t_FieldCircularOrbit_getHy(t_FieldCircularOrbit *self, PyObject *args)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getHy());
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        return callSuper(PY_TYPE(FieldCircularOrbit), (PyObject *) self, "getHy", args, 2);
      }

      static PyObject *t_FieldCircularOrbit_getHyDot(t_FieldCircularOrbit *self, PyObject *args)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getHyDot());
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        return callSuper(PY_TYPE(FieldCircularOrbit), (PyObject *) self, "getHyDot", args, 2);
      }

      static PyObject *t_FieldCircularOrbit_getI(t_FieldCircularOrbit *self, PyObject *args)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getI());
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        return callSuper(PY_TYPE(FieldCircularOrbit), (PyObject *) self, "getI", args, 2);
      }

      static PyObject *t_FieldCircularOrbit_getIDot(t_FieldCircularOrbit *self, PyObject *args)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getIDot());
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        return callSuper(PY_TYPE(FieldCircularOrbit), (PyObject *) self, "getIDot", args, 2);
      }

      static PyObject *t_FieldCircularOrbit_getLE(t_FieldCircularOrbit *self, PyObject *args)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getLE());
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        return callSuper(PY_TYPE(FieldCircularOrbit), (PyObject *) self, "getLE", args, 2);
      }

      static PyObject *t_FieldCircularOrbit_getLEDot(t_FieldCircularOrbit *self, PyObject *args)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getLEDot());
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        return callSuper(PY_TYPE(FieldCircularOrbit), (PyObject *) self, "getLEDot", args, 2);
      }

      static PyObject *t_FieldCircularOrbit_getLM(t_FieldCircularOrbit *self, PyObject *args)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getLM());
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        return callSuper(PY_TYPE(FieldCircularOrbit), (PyObject *) self, "getLM", args, 2);
      }

      static PyObject *t_FieldCircularOrbit_getLMDot(t_FieldCircularOrbit *self, PyObject *args)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getLMDot());
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        return callSuper(PY_TYPE(FieldCircularOrbit), (PyObject *) self, "getLMDot", args, 2);
      }

      static PyObject *t_FieldCircularOrbit_getLv(t_FieldCircularOrbit *self, PyObject *args)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getLv());
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        return callSuper(PY_TYPE(FieldCircularOrbit), (PyObject *) self, "getLv", args, 2);
      }

      static PyObject *t_FieldCircularOrbit_getLvDot(t_FieldCircularOrbit *self, PyObject *args)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getLvDot());
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        return callSuper(PY_TYPE(FieldCircularOrbit), (PyObject *) self, "getLvDot", args, 2);
      }

      static PyObject *t_FieldCircularOrbit_getRightAscensionOfAscendingNode(t_FieldCircularOrbit *self)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
        OBJ_CALL(result = self->object.getRightAscensionOfAscendingNode());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
      }

      static PyObject *t_FieldCircularOrbit_getRightAscensionOfAscendingNodeDot(t_FieldCircularOrbit *self)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
        OBJ_CALL(result = self->object.getRightAscensionOfAscendingNodeDot());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
      }

      static PyObject *t_FieldCircularOrbit_getType(t_FieldCircularOrbit *self, PyObject *args)
      {
        ::org::orekit::orbits::OrbitType result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getType());
          return ::org::orekit::orbits::t_OrbitType::wrap_Object(result);
        }

        return callSuper(PY_TYPE(FieldCircularOrbit), (PyObject *) self, "getType", args, 2);
      }

      static PyObject *t_FieldCircularOrbit_hasDerivatives(t_FieldCircularOrbit *self, PyObject *args)
      {
        jboolean result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.hasDerivatives());
          Py_RETURN_BOOL(result);
        }

        return callSuper(PY_TYPE(FieldCircularOrbit), (PyObject *) self, "hasDerivatives", args, 2);
      }

      static PyObject *t_FieldCircularOrbit_hasRates(t_FieldCircularOrbit *self)
      {
        jboolean result;
        OBJ_CALL(result = self->object.hasRates());
        Py_RETURN_BOOL(result);
      }

      static PyObject *t_FieldCircularOrbit_meanToEccentric(PyTypeObject *type, PyObject *args)
      {
        ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
        PyTypeObject **p0;
        ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
        PyTypeObject **p1;
        ::org::hipparchus::CalculusFieldElement a2((jobject) NULL);
        PyTypeObject **p2;
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

        if (!parseArgs(args, "KKK", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_))
        {
          OBJ_CALL(result = ::org::orekit::orbits::FieldCircularOrbit::meanToEccentric(a0, a1, a2));
          return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "meanToEccentric", args);
        return NULL;
      }

      static PyObject *t_FieldCircularOrbit_removeRates(t_FieldCircularOrbit *self)
      {
        FieldCircularOrbit result((jobject) NULL);
        OBJ_CALL(result = self->object.removeRates());
        return t_FieldCircularOrbit::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_FieldCircularOrbit_shiftedBy(t_FieldCircularOrbit *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            jdouble a0;
            FieldCircularOrbit result((jobject) NULL);

            if (!parseArgs(args, "D", &a0))
            {
              OBJ_CALL(result = self->object.shiftedBy(a0));
              return t_FieldCircularOrbit::wrap_Object(result, self->parameters[0]);
            }
          }
          {
            ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
            PyTypeObject **p0;
            FieldCircularOrbit result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
            {
              OBJ_CALL(result = self->object.shiftedBy(a0));
              return t_FieldCircularOrbit::wrap_Object(result, self->parameters[0]);
            }
          }
        }

        return callSuper(PY_TYPE(FieldCircularOrbit), (PyObject *) self, "shiftedBy", args, 2);
      }

      static PyObject *t_FieldCircularOrbit_toOrbit(t_FieldCircularOrbit *self, PyObject *args)
      {
        ::org::orekit::orbits::CircularOrbit result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.toOrbit());
          return ::org::orekit::orbits::t_CircularOrbit::wrap_Object(result);
        }

        return callSuper(PY_TYPE(FieldCircularOrbit), (PyObject *) self, "toOrbit", args, 2);
      }

      static PyObject *t_FieldCircularOrbit_toString(t_FieldCircularOrbit *self, PyObject *args)
      {
        ::java::lang::String result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.toString());
          return j2p(result);
        }

        return callSuper(PY_TYPE(FieldCircularOrbit), (PyObject *) self, "toString", args, 2);
      }

      static PyObject *t_FieldCircularOrbit_trueToEccentric(PyTypeObject *type, PyObject *args)
      {
        ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
        PyTypeObject **p0;
        ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
        PyTypeObject **p1;
        ::org::hipparchus::CalculusFieldElement a2((jobject) NULL);
        PyTypeObject **p2;
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

        if (!parseArgs(args, "KKK", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_))
        {
          OBJ_CALL(result = ::org::orekit::orbits::FieldCircularOrbit::trueToEccentric(a0, a1, a2));
          return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "trueToEccentric", args);
        return NULL;
      }
      static PyObject *t_FieldCircularOrbit_get__parameters_(t_FieldCircularOrbit *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }

      static PyObject *t_FieldCircularOrbit_get__a(t_FieldCircularOrbit *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getA());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldCircularOrbit_get__aDot(t_FieldCircularOrbit *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getADot());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldCircularOrbit_get__alphaE(t_FieldCircularOrbit *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getAlphaE());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldCircularOrbit_get__alphaEDot(t_FieldCircularOrbit *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getAlphaEDot());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldCircularOrbit_get__alphaM(t_FieldCircularOrbit *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getAlphaM());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldCircularOrbit_get__alphaMDot(t_FieldCircularOrbit *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getAlphaMDot());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldCircularOrbit_get__alphaV(t_FieldCircularOrbit *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getAlphaV());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldCircularOrbit_get__alphaVDot(t_FieldCircularOrbit *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getAlphaVDot());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldCircularOrbit_get__cachedPositionAngleType(t_FieldCircularOrbit *self, void *data)
      {
        ::org::orekit::orbits::PositionAngleType value((jobject) NULL);
        OBJ_CALL(value = self->object.getCachedPositionAngleType());
        return ::org::orekit::orbits::t_PositionAngleType::wrap_Object(value);
      }

      static PyObject *t_FieldCircularOrbit_get__circularEx(t_FieldCircularOrbit *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getCircularEx());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldCircularOrbit_get__circularExDot(t_FieldCircularOrbit *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getCircularExDot());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldCircularOrbit_get__circularEy(t_FieldCircularOrbit *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getCircularEy());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldCircularOrbit_get__circularEyDot(t_FieldCircularOrbit *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getCircularEyDot());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldCircularOrbit_get__e(t_FieldCircularOrbit *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getE());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldCircularOrbit_get__eDot(t_FieldCircularOrbit *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getEDot());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldCircularOrbit_get__equinoctialEx(t_FieldCircularOrbit *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getEquinoctialEx());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldCircularOrbit_get__equinoctialExDot(t_FieldCircularOrbit *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getEquinoctialExDot());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldCircularOrbit_get__equinoctialEy(t_FieldCircularOrbit *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getEquinoctialEy());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldCircularOrbit_get__equinoctialEyDot(t_FieldCircularOrbit *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getEquinoctialEyDot());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldCircularOrbit_get__hx(t_FieldCircularOrbit *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getHx());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldCircularOrbit_get__hxDot(t_FieldCircularOrbit *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getHxDot());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldCircularOrbit_get__hy(t_FieldCircularOrbit *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getHy());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldCircularOrbit_get__hyDot(t_FieldCircularOrbit *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getHyDot());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldCircularOrbit_get__i(t_FieldCircularOrbit *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getI());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldCircularOrbit_get__iDot(t_FieldCircularOrbit *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getIDot());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldCircularOrbit_get__lE(t_FieldCircularOrbit *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getLE());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldCircularOrbit_get__lEDot(t_FieldCircularOrbit *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getLEDot());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldCircularOrbit_get__lM(t_FieldCircularOrbit *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getLM());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldCircularOrbit_get__lMDot(t_FieldCircularOrbit *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getLMDot());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldCircularOrbit_get__lv(t_FieldCircularOrbit *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getLv());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldCircularOrbit_get__lvDot(t_FieldCircularOrbit *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getLvDot());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldCircularOrbit_get__rightAscensionOfAscendingNode(t_FieldCircularOrbit *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getRightAscensionOfAscendingNode());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldCircularOrbit_get__rightAscensionOfAscendingNodeDot(t_FieldCircularOrbit *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getRightAscensionOfAscendingNodeDot());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldCircularOrbit_get__type(t_FieldCircularOrbit *self, void *data)
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
#include "org/hipparchus/ode/sampling/FieldODEStepHandler.h"
#include "org/hipparchus/ode/FieldODEStateAndDerivative.h"
#include "java/lang/Class.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/hipparchus/ode/sampling/FieldODEStateInterpolator.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace ode {
      namespace sampling {

        ::java::lang::Class *FieldODEStepHandler::class$ = NULL;
        jmethodID *FieldODEStepHandler::mids$ = NULL;
        bool FieldODEStepHandler::live$ = false;

        jclass FieldODEStepHandler::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/ode/sampling/FieldODEStepHandler");

            mids$ = new jmethodID[max_mid];
            mids$[mid_finish_747fee420c9ba889] = env->getMethodID(cls, "finish", "(Lorg/hipparchus/ode/FieldODEStateAndDerivative;)V");
            mids$[mid_handleStep_e7d5f5a81e2a2b8e] = env->getMethodID(cls, "handleStep", "(Lorg/hipparchus/ode/sampling/FieldODEStateInterpolator;)V");
            mids$[mid_init_f808a4f21f8be825] = env->getMethodID(cls, "init", "(Lorg/hipparchus/ode/FieldODEStateAndDerivative;Lorg/hipparchus/CalculusFieldElement;)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        void FieldODEStepHandler::finish(const ::org::hipparchus::ode::FieldODEStateAndDerivative & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_finish_747fee420c9ba889], a0.this$);
        }

        void FieldODEStepHandler::handleStep(const ::org::hipparchus::ode::sampling::FieldODEStateInterpolator & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_handleStep_e7d5f5a81e2a2b8e], a0.this$);
        }

        void FieldODEStepHandler::init(const ::org::hipparchus::ode::FieldODEStateAndDerivative & a0, const ::org::hipparchus::CalculusFieldElement & a1) const
        {
          env->callVoidMethod(this$, mids$[mid_init_f808a4f21f8be825], a0.this$, a1.this$);
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
        static PyObject *t_FieldODEStepHandler_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldODEStepHandler_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldODEStepHandler_of_(t_FieldODEStepHandler *self, PyObject *args);
        static PyObject *t_FieldODEStepHandler_finish(t_FieldODEStepHandler *self, PyObject *arg);
        static PyObject *t_FieldODEStepHandler_handleStep(t_FieldODEStepHandler *self, PyObject *arg);
        static PyObject *t_FieldODEStepHandler_init(t_FieldODEStepHandler *self, PyObject *args);
        static PyObject *t_FieldODEStepHandler_get__parameters_(t_FieldODEStepHandler *self, void *data);
        static PyGetSetDef t_FieldODEStepHandler__fields_[] = {
          DECLARE_GET_FIELD(t_FieldODEStepHandler, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_FieldODEStepHandler__methods_[] = {
          DECLARE_METHOD(t_FieldODEStepHandler, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldODEStepHandler, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldODEStepHandler, of_, METH_VARARGS),
          DECLARE_METHOD(t_FieldODEStepHandler, finish, METH_O),
          DECLARE_METHOD(t_FieldODEStepHandler, handleStep, METH_O),
          DECLARE_METHOD(t_FieldODEStepHandler, init, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(FieldODEStepHandler)[] = {
          { Py_tp_methods, t_FieldODEStepHandler__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_FieldODEStepHandler__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(FieldODEStepHandler)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(FieldODEStepHandler, t_FieldODEStepHandler, FieldODEStepHandler);
        PyObject *t_FieldODEStepHandler::wrap_Object(const FieldODEStepHandler& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FieldODEStepHandler::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldODEStepHandler *self = (t_FieldODEStepHandler *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_FieldODEStepHandler::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FieldODEStepHandler::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldODEStepHandler *self = (t_FieldODEStepHandler *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_FieldODEStepHandler::install(PyObject *module)
        {
          installType(&PY_TYPE(FieldODEStepHandler), &PY_TYPE_DEF(FieldODEStepHandler), module, "FieldODEStepHandler", 0);
        }

        void t_FieldODEStepHandler::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldODEStepHandler), "class_", make_descriptor(FieldODEStepHandler::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldODEStepHandler), "wrapfn_", make_descriptor(t_FieldODEStepHandler::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldODEStepHandler), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_FieldODEStepHandler_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, FieldODEStepHandler::initializeClass, 1)))
            return NULL;
          return t_FieldODEStepHandler::wrap_Object(FieldODEStepHandler(((t_FieldODEStepHandler *) arg)->object.this$));
        }
        static PyObject *t_FieldODEStepHandler_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, FieldODEStepHandler::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_FieldODEStepHandler_of_(t_FieldODEStepHandler *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static PyObject *t_FieldODEStepHandler_finish(t_FieldODEStepHandler *self, PyObject *arg)
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

        static PyObject *t_FieldODEStepHandler_handleStep(t_FieldODEStepHandler *self, PyObject *arg)
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

        static PyObject *t_FieldODEStepHandler_init(t_FieldODEStepHandler *self, PyObject *args)
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
        static PyObject *t_FieldODEStepHandler_get__parameters_(t_FieldODEStepHandler *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/models/earth/ionosphere/SsrVtecIonosphericModel.h"
#include "java/util/List.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "java/lang/Class.h"
#include "org/orekit/gnss/metric/messages/ssr/subtype/SsrIm201.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "org/orekit/models/earth/ionosphere/IonosphericModel.h"
#include "org/orekit/frames/TopocentricFrame.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace models {
      namespace earth {
        namespace ionosphere {

          ::java::lang::Class *SsrVtecIonosphericModel::class$ = NULL;
          jmethodID *SsrVtecIonosphericModel::mids$ = NULL;
          bool SsrVtecIonosphericModel::live$ = false;

          jclass SsrVtecIonosphericModel::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/models/earth/ionosphere/SsrVtecIonosphericModel");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_8fbd7e828f9b51c3] = env->getMethodID(cls, "<init>", "(Lorg/orekit/gnss/metric/messages/ssr/subtype/SsrIm201;)V");
              mids$[mid_getParametersDrivers_0d9551367f7ecdef] = env->getMethodID(cls, "getParametersDrivers", "()Ljava/util/List;");
              mids$[mid_pathDelay_e09499dc3d690830] = env->getMethodID(cls, "pathDelay", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/frames/TopocentricFrame;D[D)D");
              mids$[mid_pathDelay_8fbdb07bb0b935f0] = env->getMethodID(cls, "pathDelay", "(Lorg/orekit/propagation/FieldSpacecraftState;Lorg/orekit/frames/TopocentricFrame;D[Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          SsrVtecIonosphericModel::SsrVtecIonosphericModel(const ::org::orekit::gnss::metric::messages::ssr::subtype::SsrIm201 & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_8fbd7e828f9b51c3, a0.this$)) {}

          ::java::util::List SsrVtecIonosphericModel::getParametersDrivers() const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getParametersDrivers_0d9551367f7ecdef]));
          }

          jdouble SsrVtecIonosphericModel::pathDelay(const ::org::orekit::propagation::SpacecraftState & a0, const ::org::orekit::frames::TopocentricFrame & a1, jdouble a2, const JArray< jdouble > & a3) const
          {
            return env->callDoubleMethod(this$, mids$[mid_pathDelay_e09499dc3d690830], a0.this$, a1.this$, a2, a3.this$);
          }

          ::org::hipparchus::CalculusFieldElement SsrVtecIonosphericModel::pathDelay(const ::org::orekit::propagation::FieldSpacecraftState & a0, const ::org::orekit::frames::TopocentricFrame & a1, jdouble a2, const JArray< ::org::hipparchus::CalculusFieldElement > & a3) const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_pathDelay_8fbdb07bb0b935f0], a0.this$, a1.this$, a2, a3.this$));
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
        namespace ionosphere {
          static PyObject *t_SsrVtecIonosphericModel_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_SsrVtecIonosphericModel_instance_(PyTypeObject *type, PyObject *arg);
          static int t_SsrVtecIonosphericModel_init_(t_SsrVtecIonosphericModel *self, PyObject *args, PyObject *kwds);
          static PyObject *t_SsrVtecIonosphericModel_getParametersDrivers(t_SsrVtecIonosphericModel *self);
          static PyObject *t_SsrVtecIonosphericModel_pathDelay(t_SsrVtecIonosphericModel *self, PyObject *args);
          static PyObject *t_SsrVtecIonosphericModel_get__parametersDrivers(t_SsrVtecIonosphericModel *self, void *data);
          static PyGetSetDef t_SsrVtecIonosphericModel__fields_[] = {
            DECLARE_GET_FIELD(t_SsrVtecIonosphericModel, parametersDrivers),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_SsrVtecIonosphericModel__methods_[] = {
            DECLARE_METHOD(t_SsrVtecIonosphericModel, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_SsrVtecIonosphericModel, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_SsrVtecIonosphericModel, getParametersDrivers, METH_NOARGS),
            DECLARE_METHOD(t_SsrVtecIonosphericModel, pathDelay, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(SsrVtecIonosphericModel)[] = {
            { Py_tp_methods, t_SsrVtecIonosphericModel__methods_ },
            { Py_tp_init, (void *) t_SsrVtecIonosphericModel_init_ },
            { Py_tp_getset, t_SsrVtecIonosphericModel__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(SsrVtecIonosphericModel)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(SsrVtecIonosphericModel, t_SsrVtecIonosphericModel, SsrVtecIonosphericModel);

          void t_SsrVtecIonosphericModel::install(PyObject *module)
          {
            installType(&PY_TYPE(SsrVtecIonosphericModel), &PY_TYPE_DEF(SsrVtecIonosphericModel), module, "SsrVtecIonosphericModel", 0);
          }

          void t_SsrVtecIonosphericModel::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(SsrVtecIonosphericModel), "class_", make_descriptor(SsrVtecIonosphericModel::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(SsrVtecIonosphericModel), "wrapfn_", make_descriptor(t_SsrVtecIonosphericModel::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(SsrVtecIonosphericModel), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_SsrVtecIonosphericModel_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, SsrVtecIonosphericModel::initializeClass, 1)))
              return NULL;
            return t_SsrVtecIonosphericModel::wrap_Object(SsrVtecIonosphericModel(((t_SsrVtecIonosphericModel *) arg)->object.this$));
          }
          static PyObject *t_SsrVtecIonosphericModel_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, SsrVtecIonosphericModel::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_SsrVtecIonosphericModel_init_(t_SsrVtecIonosphericModel *self, PyObject *args, PyObject *kwds)
          {
            ::org::orekit::gnss::metric::messages::ssr::subtype::SsrIm201 a0((jobject) NULL);
            PyTypeObject **p0;
            SsrVtecIonosphericModel object((jobject) NULL);

            if (!parseArgs(args, "K", ::org::orekit::gnss::metric::messages::ssr::subtype::SsrIm201::initializeClass, &a0, &p0, ::org::orekit::gnss::metric::messages::ssr::subtype::t_SsrIm201::parameters_))
            {
              INT_CALL(object = SsrVtecIonosphericModel(a0));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_SsrVtecIonosphericModel_getParametersDrivers(t_SsrVtecIonosphericModel *self)
          {
            ::java::util::List result((jobject) NULL);
            OBJ_CALL(result = self->object.getParametersDrivers());
            return ::java::util::t_List::wrap_Object(result, ::org::orekit::utils::PY_TYPE(ParameterDriver));
          }

          static PyObject *t_SsrVtecIonosphericModel_pathDelay(t_SsrVtecIonosphericModel *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 4:
              {
                ::org::orekit::propagation::FieldSpacecraftState a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::orekit::frames::TopocentricFrame a1((jobject) NULL);
                jdouble a2;
                JArray< ::org::hipparchus::CalculusFieldElement > a3((jobject) NULL);
                PyTypeObject **p3;
                ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                if (!parseArgs(args, "KkD[K", ::org::orekit::propagation::FieldSpacecraftState::initializeClass, ::org::orekit::frames::TopocentricFrame::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::orekit::propagation::t_FieldSpacecraftState::parameters_, &a1, &a2, &a3, &p3, ::org::hipparchus::t_CalculusFieldElement::parameters_))
                {
                  OBJ_CALL(result = self->object.pathDelay(a0, a1, a2, a3));
                  return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                }
              }
              {
                ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
                ::org::orekit::frames::TopocentricFrame a1((jobject) NULL);
                jdouble a2;
                JArray< jdouble > a3((jobject) NULL);
                jdouble result;

                if (!parseArgs(args, "kkD[D", ::org::orekit::propagation::SpacecraftState::initializeClass, ::org::orekit::frames::TopocentricFrame::initializeClass, &a0, &a1, &a2, &a3))
                {
                  OBJ_CALL(result = self->object.pathDelay(a0, a1, a2, a3));
                  return PyFloat_FromDouble((double) result);
                }
              }
            }

            PyErr_SetArgsError((PyObject *) self, "pathDelay", args);
            return NULL;
          }

          static PyObject *t_SsrVtecIonosphericModel_get__parametersDrivers(t_SsrVtecIonosphericModel *self, void *data)
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
#include "org/orekit/propagation/analytical/gnss/data/BeidouAlmanac.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace analytical {
        namespace gnss {
          namespace data {

            ::java::lang::Class *BeidouAlmanac::class$ = NULL;
            jmethodID *BeidouAlmanac::mids$ = NULL;
            bool BeidouAlmanac::live$ = false;

            jclass BeidouAlmanac::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/propagation/analytical/gnss/data/BeidouAlmanac");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_0640e6acf969ed28] = env->getMethodID(cls, "<init>", "()V");
                mids$[mid_getHealth_412668abc8d889e9] = env->getMethodID(cls, "getHealth", "()I");
                mids$[mid_setHealth_a3da1a935cb37f7b] = env->getMethodID(cls, "setHealth", "(I)V");
                mids$[mid_setI0_ab23f4ae0fb33968] = env->getMethodID(cls, "setI0", "(DD)V");
                mids$[mid_setSqrtA_10f281d777284cea] = env->getMethodID(cls, "setSqrtA", "(D)V");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            BeidouAlmanac::BeidouAlmanac() : ::org::orekit::propagation::analytical::gnss::data::AbstractAlmanac(env->newObject(initializeClass, &mids$, mid_init$_0640e6acf969ed28)) {}

            jint BeidouAlmanac::getHealth() const
            {
              return env->callIntMethod(this$, mids$[mid_getHealth_412668abc8d889e9]);
            }

            void BeidouAlmanac::setHealth(jint a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setHealth_a3da1a935cb37f7b], a0);
            }

            void BeidouAlmanac::setI0(jdouble a0, jdouble a1) const
            {
              env->callVoidMethod(this$, mids$[mid_setI0_ab23f4ae0fb33968], a0, a1);
            }

            void BeidouAlmanac::setSqrtA(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setSqrtA_10f281d777284cea], a0);
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
            static PyObject *t_BeidouAlmanac_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_BeidouAlmanac_instance_(PyTypeObject *type, PyObject *arg);
            static int t_BeidouAlmanac_init_(t_BeidouAlmanac *self, PyObject *args, PyObject *kwds);
            static PyObject *t_BeidouAlmanac_getHealth(t_BeidouAlmanac *self);
            static PyObject *t_BeidouAlmanac_setHealth(t_BeidouAlmanac *self, PyObject *arg);
            static PyObject *t_BeidouAlmanac_setI0(t_BeidouAlmanac *self, PyObject *args);
            static PyObject *t_BeidouAlmanac_setSqrtA(t_BeidouAlmanac *self, PyObject *arg);
            static PyObject *t_BeidouAlmanac_get__health(t_BeidouAlmanac *self, void *data);
            static int t_BeidouAlmanac_set__health(t_BeidouAlmanac *self, PyObject *arg, void *data);
            static int t_BeidouAlmanac_set__sqrtA(t_BeidouAlmanac *self, PyObject *arg, void *data);
            static PyGetSetDef t_BeidouAlmanac__fields_[] = {
              DECLARE_GETSET_FIELD(t_BeidouAlmanac, health),
              DECLARE_SET_FIELD(t_BeidouAlmanac, sqrtA),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_BeidouAlmanac__methods_[] = {
              DECLARE_METHOD(t_BeidouAlmanac, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_BeidouAlmanac, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_BeidouAlmanac, getHealth, METH_NOARGS),
              DECLARE_METHOD(t_BeidouAlmanac, setHealth, METH_O),
              DECLARE_METHOD(t_BeidouAlmanac, setI0, METH_VARARGS),
              DECLARE_METHOD(t_BeidouAlmanac, setSqrtA, METH_O),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(BeidouAlmanac)[] = {
              { Py_tp_methods, t_BeidouAlmanac__methods_ },
              { Py_tp_init, (void *) t_BeidouAlmanac_init_ },
              { Py_tp_getset, t_BeidouAlmanac__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(BeidouAlmanac)[] = {
              &PY_TYPE_DEF(::org::orekit::propagation::analytical::gnss::data::AbstractAlmanac),
              NULL
            };

            DEFINE_TYPE(BeidouAlmanac, t_BeidouAlmanac, BeidouAlmanac);

            void t_BeidouAlmanac::install(PyObject *module)
            {
              installType(&PY_TYPE(BeidouAlmanac), &PY_TYPE_DEF(BeidouAlmanac), module, "BeidouAlmanac", 0);
            }

            void t_BeidouAlmanac::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(BeidouAlmanac), "class_", make_descriptor(BeidouAlmanac::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(BeidouAlmanac), "wrapfn_", make_descriptor(t_BeidouAlmanac::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(BeidouAlmanac), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_BeidouAlmanac_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, BeidouAlmanac::initializeClass, 1)))
                return NULL;
              return t_BeidouAlmanac::wrap_Object(BeidouAlmanac(((t_BeidouAlmanac *) arg)->object.this$));
            }
            static PyObject *t_BeidouAlmanac_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, BeidouAlmanac::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static int t_BeidouAlmanac_init_(t_BeidouAlmanac *self, PyObject *args, PyObject *kwds)
            {
              BeidouAlmanac object((jobject) NULL);

              INT_CALL(object = BeidouAlmanac());
              self->object = object;

              return 0;
            }

            static PyObject *t_BeidouAlmanac_getHealth(t_BeidouAlmanac *self)
            {
              jint result;
              OBJ_CALL(result = self->object.getHealth());
              return PyLong_FromLong((long) result);
            }

            static PyObject *t_BeidouAlmanac_setHealth(t_BeidouAlmanac *self, PyObject *arg)
            {
              jint a0;

              if (!parseArg(arg, "I", &a0))
              {
                OBJ_CALL(self->object.setHealth(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setHealth", arg);
              return NULL;
            }

            static PyObject *t_BeidouAlmanac_setI0(t_BeidouAlmanac *self, PyObject *args)
            {
              jdouble a0;
              jdouble a1;

              if (!parseArgs(args, "DD", &a0, &a1))
              {
                OBJ_CALL(self->object.setI0(a0, a1));
                Py_RETURN_NONE;
              }

              return callSuper(PY_TYPE(BeidouAlmanac), (PyObject *) self, "setI0", args, 2);
            }

            static PyObject *t_BeidouAlmanac_setSqrtA(t_BeidouAlmanac *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setSqrtA(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setSqrtA", arg);
              return NULL;
            }

            static PyObject *t_BeidouAlmanac_get__health(t_BeidouAlmanac *self, void *data)
            {
              jint value;
              OBJ_CALL(value = self->object.getHealth());
              return PyLong_FromLong((long) value);
            }
            static int t_BeidouAlmanac_set__health(t_BeidouAlmanac *self, PyObject *arg, void *data)
            {
              {
                jint value;
                if (!parseArg(arg, "I", &value))
                {
                  INT_CALL(self->object.setHealth(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "health", arg);
              return -1;
            }

            static int t_BeidouAlmanac_set__sqrtA(t_BeidouAlmanac *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setSqrtA(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "sqrtA", arg);
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
#include "org/orekit/models/earth/ionosphere/EstimatedIonosphericModel.h"
#include "org/orekit/models/earth/ionosphere/IonosphericMappingFunction.h"
#include "java/util/List.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "java/lang/Class.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "org/orekit/models/earth/ionosphere/IonosphericModel.h"
#include "java/lang/String.h"
#include "org/orekit/frames/TopocentricFrame.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace models {
      namespace earth {
        namespace ionosphere {

          ::java::lang::Class *EstimatedIonosphericModel::class$ = NULL;
          jmethodID *EstimatedIonosphericModel::mids$ = NULL;
          bool EstimatedIonosphericModel::live$ = false;
          ::java::lang::String *EstimatedIonosphericModel::VERTICAL_TOTAL_ELECTRON_CONTENT = NULL;

          jclass EstimatedIonosphericModel::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/models/earth/ionosphere/EstimatedIonosphericModel");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_c633345812d89e69] = env->getMethodID(cls, "<init>", "(Lorg/orekit/models/earth/ionosphere/IonosphericMappingFunction;D)V");
              mids$[mid_getParametersDrivers_0d9551367f7ecdef] = env->getMethodID(cls, "getParametersDrivers", "()Ljava/util/List;");
              mids$[mid_pathDelay_2c22e006b3b11c35] = env->getMethodID(cls, "pathDelay", "(DD[D)D");
              mids$[mid_pathDelay_da32eccdf871125c] = env->getMethodID(cls, "pathDelay", "(Lorg/hipparchus/CalculusFieldElement;D[Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_pathDelay_e09499dc3d690830] = env->getMethodID(cls, "pathDelay", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/frames/TopocentricFrame;D[D)D");
              mids$[mid_pathDelay_8fbdb07bb0b935f0] = env->getMethodID(cls, "pathDelay", "(Lorg/orekit/propagation/FieldSpacecraftState;Lorg/orekit/frames/TopocentricFrame;D[Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");

              class$ = new ::java::lang::Class(cls);
              cls = (jclass) class$->this$;

              VERTICAL_TOTAL_ELECTRON_CONTENT = new ::java::lang::String(env->getStaticObjectField(cls, "VERTICAL_TOTAL_ELECTRON_CONTENT", "Ljava/lang/String;"));
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          EstimatedIonosphericModel::EstimatedIonosphericModel(const ::org::orekit::models::earth::ionosphere::IonosphericMappingFunction & a0, jdouble a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_c633345812d89e69, a0.this$, a1)) {}

          ::java::util::List EstimatedIonosphericModel::getParametersDrivers() const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getParametersDrivers_0d9551367f7ecdef]));
          }

          jdouble EstimatedIonosphericModel::pathDelay(jdouble a0, jdouble a1, const JArray< jdouble > & a2) const
          {
            return env->callDoubleMethod(this$, mids$[mid_pathDelay_2c22e006b3b11c35], a0, a1, a2.this$);
          }

          ::org::hipparchus::CalculusFieldElement EstimatedIonosphericModel::pathDelay(const ::org::hipparchus::CalculusFieldElement & a0, jdouble a1, const JArray< ::org::hipparchus::CalculusFieldElement > & a2) const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_pathDelay_da32eccdf871125c], a0.this$, a1, a2.this$));
          }

          jdouble EstimatedIonosphericModel::pathDelay(const ::org::orekit::propagation::SpacecraftState & a0, const ::org::orekit::frames::TopocentricFrame & a1, jdouble a2, const JArray< jdouble > & a3) const
          {
            return env->callDoubleMethod(this$, mids$[mid_pathDelay_e09499dc3d690830], a0.this$, a1.this$, a2, a3.this$);
          }

          ::org::hipparchus::CalculusFieldElement EstimatedIonosphericModel::pathDelay(const ::org::orekit::propagation::FieldSpacecraftState & a0, const ::org::orekit::frames::TopocentricFrame & a1, jdouble a2, const JArray< ::org::hipparchus::CalculusFieldElement > & a3) const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_pathDelay_8fbdb07bb0b935f0], a0.this$, a1.this$, a2, a3.this$));
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
        namespace ionosphere {
          static PyObject *t_EstimatedIonosphericModel_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_EstimatedIonosphericModel_instance_(PyTypeObject *type, PyObject *arg);
          static int t_EstimatedIonosphericModel_init_(t_EstimatedIonosphericModel *self, PyObject *args, PyObject *kwds);
          static PyObject *t_EstimatedIonosphericModel_getParametersDrivers(t_EstimatedIonosphericModel *self);
          static PyObject *t_EstimatedIonosphericModel_pathDelay(t_EstimatedIonosphericModel *self, PyObject *args);
          static PyObject *t_EstimatedIonosphericModel_get__parametersDrivers(t_EstimatedIonosphericModel *self, void *data);
          static PyGetSetDef t_EstimatedIonosphericModel__fields_[] = {
            DECLARE_GET_FIELD(t_EstimatedIonosphericModel, parametersDrivers),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_EstimatedIonosphericModel__methods_[] = {
            DECLARE_METHOD(t_EstimatedIonosphericModel, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_EstimatedIonosphericModel, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_EstimatedIonosphericModel, getParametersDrivers, METH_NOARGS),
            DECLARE_METHOD(t_EstimatedIonosphericModel, pathDelay, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(EstimatedIonosphericModel)[] = {
            { Py_tp_methods, t_EstimatedIonosphericModel__methods_ },
            { Py_tp_init, (void *) t_EstimatedIonosphericModel_init_ },
            { Py_tp_getset, t_EstimatedIonosphericModel__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(EstimatedIonosphericModel)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(EstimatedIonosphericModel, t_EstimatedIonosphericModel, EstimatedIonosphericModel);

          void t_EstimatedIonosphericModel::install(PyObject *module)
          {
            installType(&PY_TYPE(EstimatedIonosphericModel), &PY_TYPE_DEF(EstimatedIonosphericModel), module, "EstimatedIonosphericModel", 0);
          }

          void t_EstimatedIonosphericModel::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(EstimatedIonosphericModel), "class_", make_descriptor(EstimatedIonosphericModel::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(EstimatedIonosphericModel), "wrapfn_", make_descriptor(t_EstimatedIonosphericModel::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(EstimatedIonosphericModel), "boxfn_", make_descriptor(boxObject));
            env->getClass(EstimatedIonosphericModel::initializeClass);
            PyObject_SetAttrString((PyObject *) PY_TYPE(EstimatedIonosphericModel), "VERTICAL_TOTAL_ELECTRON_CONTENT", make_descriptor(j2p(*EstimatedIonosphericModel::VERTICAL_TOTAL_ELECTRON_CONTENT)));
          }

          static PyObject *t_EstimatedIonosphericModel_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, EstimatedIonosphericModel::initializeClass, 1)))
              return NULL;
            return t_EstimatedIonosphericModel::wrap_Object(EstimatedIonosphericModel(((t_EstimatedIonosphericModel *) arg)->object.this$));
          }
          static PyObject *t_EstimatedIonosphericModel_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, EstimatedIonosphericModel::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_EstimatedIonosphericModel_init_(t_EstimatedIonosphericModel *self, PyObject *args, PyObject *kwds)
          {
            ::org::orekit::models::earth::ionosphere::IonosphericMappingFunction a0((jobject) NULL);
            jdouble a1;
            EstimatedIonosphericModel object((jobject) NULL);

            if (!parseArgs(args, "kD", ::org::orekit::models::earth::ionosphere::IonosphericMappingFunction::initializeClass, &a0, &a1))
            {
              INT_CALL(object = EstimatedIonosphericModel(a0, a1));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_EstimatedIonosphericModel_getParametersDrivers(t_EstimatedIonosphericModel *self)
          {
            ::java::util::List result((jobject) NULL);
            OBJ_CALL(result = self->object.getParametersDrivers());
            return ::java::util::t_List::wrap_Object(result, ::org::orekit::utils::PY_TYPE(ParameterDriver));
          }

          static PyObject *t_EstimatedIonosphericModel_pathDelay(t_EstimatedIonosphericModel *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 3:
              {
                jdouble a0;
                jdouble a1;
                JArray< jdouble > a2((jobject) NULL);
                jdouble result;

                if (!parseArgs(args, "DD[D", &a0, &a1, &a2))
                {
                  OBJ_CALL(result = self->object.pathDelay(a0, a1, a2));
                  return PyFloat_FromDouble((double) result);
                }
              }
              {
                ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
                PyTypeObject **p0;
                jdouble a1;
                JArray< ::org::hipparchus::CalculusFieldElement > a2((jobject) NULL);
                PyTypeObject **p2;
                ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                if (!parseArgs(args, "KD[K", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_))
                {
                  OBJ_CALL(result = self->object.pathDelay(a0, a1, a2));
                  return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                }
              }
              break;
             case 4:
              {
                ::org::orekit::propagation::FieldSpacecraftState a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::orekit::frames::TopocentricFrame a1((jobject) NULL);
                jdouble a2;
                JArray< ::org::hipparchus::CalculusFieldElement > a3((jobject) NULL);
                PyTypeObject **p3;
                ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                if (!parseArgs(args, "KkD[K", ::org::orekit::propagation::FieldSpacecraftState::initializeClass, ::org::orekit::frames::TopocentricFrame::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::orekit::propagation::t_FieldSpacecraftState::parameters_, &a1, &a2, &a3, &p3, ::org::hipparchus::t_CalculusFieldElement::parameters_))
                {
                  OBJ_CALL(result = self->object.pathDelay(a0, a1, a2, a3));
                  return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                }
              }
              {
                ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
                ::org::orekit::frames::TopocentricFrame a1((jobject) NULL);
                jdouble a2;
                JArray< jdouble > a3((jobject) NULL);
                jdouble result;

                if (!parseArgs(args, "kkD[D", ::org::orekit::propagation::SpacecraftState::initializeClass, ::org::orekit::frames::TopocentricFrame::initializeClass, &a0, &a1, &a2, &a3))
                {
                  OBJ_CALL(result = self->object.pathDelay(a0, a1, a2, a3));
                  return PyFloat_FromDouble((double) result);
                }
              }
            }

            PyErr_SetArgsError((PyObject *) self, "pathDelay", args);
            return NULL;
          }

          static PyObject *t_EstimatedIonosphericModel_get__parametersDrivers(t_EstimatedIonosphericModel *self, void *data)
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
#include "org/orekit/propagation/conversion/AbstractFieldIntegratorBuilder.h"
#include "org/orekit/orbits/Orbit.h"
#include "org/orekit/propagation/conversion/FieldODEIntegratorBuilder.h"
#include "org/orekit/orbits/OrbitType.h"
#include "java/lang/Class.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/hipparchus/Field.h"
#include "org/hipparchus/ode/AbstractFieldIntegrator.h"
#include "org/orekit/orbits/FieldOrbit.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace conversion {

        ::java::lang::Class *AbstractFieldIntegratorBuilder::class$ = NULL;
        jmethodID *AbstractFieldIntegratorBuilder::mids$ = NULL;
        bool AbstractFieldIntegratorBuilder::live$ = false;

        jclass AbstractFieldIntegratorBuilder::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/conversion/AbstractFieldIntegratorBuilder");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_0640e6acf969ed28] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_buildIntegrator_da5761494991d7f4] = env->getMethodID(cls, "buildIntegrator", "(Lorg/orekit/orbits/FieldOrbit;Lorg/orekit/orbits/OrbitType;)Lorg/hipparchus/ode/AbstractFieldIntegrator;");
            mids$[mid_buildIntegrator_3a1ee7ebe4f0e344] = env->getMethodID(cls, "buildIntegrator", "(Lorg/hipparchus/Field;Lorg/orekit/orbits/Orbit;Lorg/orekit/orbits/OrbitType;)Lorg/hipparchus/ode/AbstractFieldIntegrator;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        AbstractFieldIntegratorBuilder::AbstractFieldIntegratorBuilder() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0640e6acf969ed28)) {}

        ::org::hipparchus::ode::AbstractFieldIntegrator AbstractFieldIntegratorBuilder::buildIntegrator(const ::org::orekit::orbits::FieldOrbit & a0, const ::org::orekit::orbits::OrbitType & a1) const
        {
          return ::org::hipparchus::ode::AbstractFieldIntegrator(env->callObjectMethod(this$, mids$[mid_buildIntegrator_da5761494991d7f4], a0.this$, a1.this$));
        }

        ::org::hipparchus::ode::AbstractFieldIntegrator AbstractFieldIntegratorBuilder::buildIntegrator(const ::org::hipparchus::Field & a0, const ::org::orekit::orbits::Orbit & a1, const ::org::orekit::orbits::OrbitType & a2) const
        {
          return ::org::hipparchus::ode::AbstractFieldIntegrator(env->callObjectMethod(this$, mids$[mid_buildIntegrator_3a1ee7ebe4f0e344], a0.this$, a1.this$, a2.this$));
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
        static PyObject *t_AbstractFieldIntegratorBuilder_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_AbstractFieldIntegratorBuilder_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_AbstractFieldIntegratorBuilder_of_(t_AbstractFieldIntegratorBuilder *self, PyObject *args);
        static int t_AbstractFieldIntegratorBuilder_init_(t_AbstractFieldIntegratorBuilder *self, PyObject *args, PyObject *kwds);
        static PyObject *t_AbstractFieldIntegratorBuilder_buildIntegrator(t_AbstractFieldIntegratorBuilder *self, PyObject *args);
        static PyObject *t_AbstractFieldIntegratorBuilder_get__parameters_(t_AbstractFieldIntegratorBuilder *self, void *data);
        static PyGetSetDef t_AbstractFieldIntegratorBuilder__fields_[] = {
          DECLARE_GET_FIELD(t_AbstractFieldIntegratorBuilder, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_AbstractFieldIntegratorBuilder__methods_[] = {
          DECLARE_METHOD(t_AbstractFieldIntegratorBuilder, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AbstractFieldIntegratorBuilder, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AbstractFieldIntegratorBuilder, of_, METH_VARARGS),
          DECLARE_METHOD(t_AbstractFieldIntegratorBuilder, buildIntegrator, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(AbstractFieldIntegratorBuilder)[] = {
          { Py_tp_methods, t_AbstractFieldIntegratorBuilder__methods_ },
          { Py_tp_init, (void *) t_AbstractFieldIntegratorBuilder_init_ },
          { Py_tp_getset, t_AbstractFieldIntegratorBuilder__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(AbstractFieldIntegratorBuilder)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(AbstractFieldIntegratorBuilder, t_AbstractFieldIntegratorBuilder, AbstractFieldIntegratorBuilder);
        PyObject *t_AbstractFieldIntegratorBuilder::wrap_Object(const AbstractFieldIntegratorBuilder& object, PyTypeObject *p0)
        {
          PyObject *obj = t_AbstractFieldIntegratorBuilder::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_AbstractFieldIntegratorBuilder *self = (t_AbstractFieldIntegratorBuilder *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_AbstractFieldIntegratorBuilder::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_AbstractFieldIntegratorBuilder::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_AbstractFieldIntegratorBuilder *self = (t_AbstractFieldIntegratorBuilder *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_AbstractFieldIntegratorBuilder::install(PyObject *module)
        {
          installType(&PY_TYPE(AbstractFieldIntegratorBuilder), &PY_TYPE_DEF(AbstractFieldIntegratorBuilder), module, "AbstractFieldIntegratorBuilder", 0);
        }

        void t_AbstractFieldIntegratorBuilder::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractFieldIntegratorBuilder), "class_", make_descriptor(AbstractFieldIntegratorBuilder::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractFieldIntegratorBuilder), "wrapfn_", make_descriptor(t_AbstractFieldIntegratorBuilder::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractFieldIntegratorBuilder), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_AbstractFieldIntegratorBuilder_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, AbstractFieldIntegratorBuilder::initializeClass, 1)))
            return NULL;
          return t_AbstractFieldIntegratorBuilder::wrap_Object(AbstractFieldIntegratorBuilder(((t_AbstractFieldIntegratorBuilder *) arg)->object.this$));
        }
        static PyObject *t_AbstractFieldIntegratorBuilder_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, AbstractFieldIntegratorBuilder::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_AbstractFieldIntegratorBuilder_of_(t_AbstractFieldIntegratorBuilder *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_AbstractFieldIntegratorBuilder_init_(t_AbstractFieldIntegratorBuilder *self, PyObject *args, PyObject *kwds)
        {
          AbstractFieldIntegratorBuilder object((jobject) NULL);

          INT_CALL(object = AbstractFieldIntegratorBuilder());
          self->object = object;

          return 0;
        }

        static PyObject *t_AbstractFieldIntegratorBuilder_buildIntegrator(t_AbstractFieldIntegratorBuilder *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 2:
            {
              ::org::orekit::orbits::FieldOrbit a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::orekit::orbits::OrbitType a1((jobject) NULL);
              PyTypeObject **p1;
              ::org::hipparchus::ode::AbstractFieldIntegrator result((jobject) NULL);

              if (!parseArgs(args, "KK", ::org::orekit::orbits::FieldOrbit::initializeClass, ::org::orekit::orbits::OrbitType::initializeClass, &a0, &p0, ::org::orekit::orbits::t_FieldOrbit::parameters_, &a1, &p1, ::org::orekit::orbits::t_OrbitType::parameters_))
              {
                OBJ_CALL(result = self->object.buildIntegrator(a0, a1));
                return ::org::hipparchus::ode::t_AbstractFieldIntegrator::wrap_Object(result, self->parameters[0]);
              }
            }
            break;
           case 3:
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
            }
          }

          PyErr_SetArgsError((PyObject *) self, "buildIntegrator", args);
          return NULL;
        }
        static PyObject *t_AbstractFieldIntegratorBuilder_get__parameters_(t_AbstractFieldIntegratorBuilder *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/gnss/metric/parser/RtcmMessagesParser.h"
#include "java/util/List.h"
#include "java/lang/Class.h"
#include "java/lang/Integer.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace metric {
        namespace parser {

          ::java::lang::Class *RtcmMessagesParser::class$ = NULL;
          jmethodID *RtcmMessagesParser::mids$ = NULL;
          bool RtcmMessagesParser::live$ = false;

          jclass RtcmMessagesParser::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/gnss/metric/parser/RtcmMessagesParser");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_4ccaedadb068bdeb] = env->getMethodID(cls, "<init>", "(Ljava/util/List;)V");
              mids$[mid_getMessageType_ceeebd64fcb1f2de] = env->getMethodID(cls, "getMessageType", "(Ljava/lang/String;)Lorg/orekit/gnss/metric/parser/MessageType;");
              mids$[mid_parseMessageNumber_2ab051b27e6414f5] = env->getMethodID(cls, "parseMessageNumber", "(Lorg/orekit/gnss/metric/parser/EncodedMessage;)Ljava/lang/String;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          RtcmMessagesParser::RtcmMessagesParser(const ::java::util::List & a0) : ::org::orekit::gnss::metric::parser::MessagesParser(env->newObject(initializeClass, &mids$, mid_init$_4ccaedadb068bdeb, a0.this$)) {}
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
          static PyObject *t_RtcmMessagesParser_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_RtcmMessagesParser_instance_(PyTypeObject *type, PyObject *arg);
          static int t_RtcmMessagesParser_init_(t_RtcmMessagesParser *self, PyObject *args, PyObject *kwds);

          static PyMethodDef t_RtcmMessagesParser__methods_[] = {
            DECLARE_METHOD(t_RtcmMessagesParser, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_RtcmMessagesParser, instance_, METH_O | METH_CLASS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(RtcmMessagesParser)[] = {
            { Py_tp_methods, t_RtcmMessagesParser__methods_ },
            { Py_tp_init, (void *) t_RtcmMessagesParser_init_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(RtcmMessagesParser)[] = {
            &PY_TYPE_DEF(::org::orekit::gnss::metric::parser::MessagesParser),
            NULL
          };

          DEFINE_TYPE(RtcmMessagesParser, t_RtcmMessagesParser, RtcmMessagesParser);

          void t_RtcmMessagesParser::install(PyObject *module)
          {
            installType(&PY_TYPE(RtcmMessagesParser), &PY_TYPE_DEF(RtcmMessagesParser), module, "RtcmMessagesParser", 0);
          }

          void t_RtcmMessagesParser::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmMessagesParser), "class_", make_descriptor(RtcmMessagesParser::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmMessagesParser), "wrapfn_", make_descriptor(t_RtcmMessagesParser::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmMessagesParser), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_RtcmMessagesParser_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, RtcmMessagesParser::initializeClass, 1)))
              return NULL;
            return t_RtcmMessagesParser::wrap_Object(RtcmMessagesParser(((t_RtcmMessagesParser *) arg)->object.this$));
          }
          static PyObject *t_RtcmMessagesParser_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, RtcmMessagesParser::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_RtcmMessagesParser_init_(t_RtcmMessagesParser *self, PyObject *args, PyObject *kwds)
          {
            ::java::util::List a0((jobject) NULL);
            PyTypeObject **p0;
            RtcmMessagesParser object((jobject) NULL);

            if (!parseArgs(args, "K", ::java::util::List::initializeClass, &a0, &p0, ::java::util::t_List::parameters_))
            {
              INT_CALL(object = RtcmMessagesParser(a0));
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
#include "org/hipparchus/complex/ComplexFormat.h"
#include "java/text/ParsePosition.h"
#include "java/util/Locale.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "org/hipparchus/exception/NullArgumentException.h"
#include "org/hipparchus/complex/Complex.h"
#include "org/hipparchus/complex/ComplexFormat.h"
#include "java/lang/Double.h"
#include "java/text/NumberFormat.h"
#include "org/hipparchus/exception/MathIllegalStateException.h"
#include "java/lang/Class.h"
#include "java/lang/StringBuffer.h"
#include "java/text/FieldPosition.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace complex {

      ::java::lang::Class *ComplexFormat::class$ = NULL;
      jmethodID *ComplexFormat::mids$ = NULL;
      bool ComplexFormat::live$ = false;

      jclass ComplexFormat::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/complex/ComplexFormat");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_0640e6acf969ed28] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_init$_d53859bd7ba1b247] = env->getMethodID(cls, "<init>", "(Ljava/text/NumberFormat;)V");
          mids$[mid_init$_f5ffdf29129ef90a] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;)V");
          mids$[mid_init$_3190c52142e043eb] = env->getMethodID(cls, "<init>", "(Ljava/text/NumberFormat;Ljava/text/NumberFormat;)V");
          mids$[mid_init$_f8346b669961714d] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;Ljava/text/NumberFormat;)V");
          mids$[mid_init$_11201179d5af1746] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;Ljava/text/NumberFormat;Ljava/text/NumberFormat;)V");
          mids$[mid_format_ca2cdf8fc9022e15] = env->getMethodID(cls, "format", "(Ljava/lang/Double;)Ljava/lang/String;");
          mids$[mid_format_5d64c3cb4ee44c91] = env->getMethodID(cls, "format", "(Lorg/hipparchus/complex/Complex;)Ljava/lang/String;");
          mids$[mid_format_3891bf712b0a97e9] = env->getMethodID(cls, "format", "(Lorg/hipparchus/complex/Complex;Ljava/lang/StringBuffer;Ljava/text/FieldPosition;)Ljava/lang/StringBuffer;");
          mids$[mid_format_60ec49fc2ad8aa0e] = env->getMethodID(cls, "format", "(Ljava/lang/Object;Ljava/lang/StringBuffer;Ljava/text/FieldPosition;)Ljava/lang/StringBuffer;");
          mids$[mid_getAvailableLocales_85ff0d07ca843902] = env->getStaticMethodID(cls, "getAvailableLocales", "()[Ljava/util/Locale;");
          mids$[mid_getComplexFormat_dd63ef9c6b55c846] = env->getStaticMethodID(cls, "getComplexFormat", "()Lorg/hipparchus/complex/ComplexFormat;");
          mids$[mid_getComplexFormat_88ba113ef3e3cc4d] = env->getStaticMethodID(cls, "getComplexFormat", "(Ljava/util/Locale;)Lorg/hipparchus/complex/ComplexFormat;");
          mids$[mid_getComplexFormat_451577ae69011247] = env->getStaticMethodID(cls, "getComplexFormat", "(Ljava/lang/String;Ljava/util/Locale;)Lorg/hipparchus/complex/ComplexFormat;");
          mids$[mid_getImaginaryCharacter_3cffd47377eca18a] = env->getMethodID(cls, "getImaginaryCharacter", "()Ljava/lang/String;");
          mids$[mid_getImaginaryFormat_001645e916bd626d] = env->getMethodID(cls, "getImaginaryFormat", "()Ljava/text/NumberFormat;");
          mids$[mid_getRealFormat_001645e916bd626d] = env->getMethodID(cls, "getRealFormat", "()Ljava/text/NumberFormat;");
          mids$[mid_parse_086aa5c20f9f9f57] = env->getMethodID(cls, "parse", "(Ljava/lang/String;)Lorg/hipparchus/complex/Complex;");
          mids$[mid_parse_7b7750207000a556] = env->getMethodID(cls, "parse", "(Ljava/lang/String;Ljava/text/ParsePosition;)Lorg/hipparchus/complex/Complex;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ComplexFormat::ComplexFormat() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0640e6acf969ed28)) {}

      ComplexFormat::ComplexFormat(const ::java::text::NumberFormat & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_d53859bd7ba1b247, a0.this$)) {}

      ComplexFormat::ComplexFormat(const ::java::lang::String & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_f5ffdf29129ef90a, a0.this$)) {}

      ComplexFormat::ComplexFormat(const ::java::text::NumberFormat & a0, const ::java::text::NumberFormat & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_3190c52142e043eb, a0.this$, a1.this$)) {}

      ComplexFormat::ComplexFormat(const ::java::lang::String & a0, const ::java::text::NumberFormat & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_f8346b669961714d, a0.this$, a1.this$)) {}

      ComplexFormat::ComplexFormat(const ::java::lang::String & a0, const ::java::text::NumberFormat & a1, const ::java::text::NumberFormat & a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_11201179d5af1746, a0.this$, a1.this$, a2.this$)) {}

      ::java::lang::String ComplexFormat::format(const ::java::lang::Double & a0) const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_format_ca2cdf8fc9022e15], a0.this$));
      }

      ::java::lang::String ComplexFormat::format(const ::org::hipparchus::complex::Complex & a0) const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_format_5d64c3cb4ee44c91], a0.this$));
      }

      ::java::lang::StringBuffer ComplexFormat::format(const ::org::hipparchus::complex::Complex & a0, const ::java::lang::StringBuffer & a1, const ::java::text::FieldPosition & a2) const
      {
        return ::java::lang::StringBuffer(env->callObjectMethod(this$, mids$[mid_format_3891bf712b0a97e9], a0.this$, a1.this$, a2.this$));
      }

      ::java::lang::StringBuffer ComplexFormat::format(const ::java::lang::Object & a0, const ::java::lang::StringBuffer & a1, const ::java::text::FieldPosition & a2) const
      {
        return ::java::lang::StringBuffer(env->callObjectMethod(this$, mids$[mid_format_60ec49fc2ad8aa0e], a0.this$, a1.this$, a2.this$));
      }

      JArray< ::java::util::Locale > ComplexFormat::getAvailableLocales()
      {
        jclass cls = env->getClass(initializeClass);
        return JArray< ::java::util::Locale >(env->callStaticObjectMethod(cls, mids$[mid_getAvailableLocales_85ff0d07ca843902]));
      }

      ComplexFormat ComplexFormat::getComplexFormat()
      {
        jclass cls = env->getClass(initializeClass);
        return ComplexFormat(env->callStaticObjectMethod(cls, mids$[mid_getComplexFormat_dd63ef9c6b55c846]));
      }

      ComplexFormat ComplexFormat::getComplexFormat(const ::java::util::Locale & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return ComplexFormat(env->callStaticObjectMethod(cls, mids$[mid_getComplexFormat_88ba113ef3e3cc4d], a0.this$));
      }

      ComplexFormat ComplexFormat::getComplexFormat(const ::java::lang::String & a0, const ::java::util::Locale & a1)
      {
        jclass cls = env->getClass(initializeClass);
        return ComplexFormat(env->callStaticObjectMethod(cls, mids$[mid_getComplexFormat_451577ae69011247], a0.this$, a1.this$));
      }

      ::java::lang::String ComplexFormat::getImaginaryCharacter() const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getImaginaryCharacter_3cffd47377eca18a]));
      }

      ::java::text::NumberFormat ComplexFormat::getImaginaryFormat() const
      {
        return ::java::text::NumberFormat(env->callObjectMethod(this$, mids$[mid_getImaginaryFormat_001645e916bd626d]));
      }

      ::java::text::NumberFormat ComplexFormat::getRealFormat() const
      {
        return ::java::text::NumberFormat(env->callObjectMethod(this$, mids$[mid_getRealFormat_001645e916bd626d]));
      }

      ::org::hipparchus::complex::Complex ComplexFormat::parse(const ::java::lang::String & a0) const
      {
        return ::org::hipparchus::complex::Complex(env->callObjectMethod(this$, mids$[mid_parse_086aa5c20f9f9f57], a0.this$));
      }

      ::org::hipparchus::complex::Complex ComplexFormat::parse(const ::java::lang::String & a0, const ::java::text::ParsePosition & a1) const
      {
        return ::org::hipparchus::complex::Complex(env->callObjectMethod(this$, mids$[mid_parse_7b7750207000a556], a0.this$, a1.this$));
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace hipparchus {
    namespace complex {
      static PyObject *t_ComplexFormat_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_ComplexFormat_instance_(PyTypeObject *type, PyObject *arg);
      static int t_ComplexFormat_init_(t_ComplexFormat *self, PyObject *args, PyObject *kwds);
      static PyObject *t_ComplexFormat_format(t_ComplexFormat *self, PyObject *args);
      static PyObject *t_ComplexFormat_getAvailableLocales(PyTypeObject *type);
      static PyObject *t_ComplexFormat_getComplexFormat(PyTypeObject *type, PyObject *args);
      static PyObject *t_ComplexFormat_getImaginaryCharacter(t_ComplexFormat *self);
      static PyObject *t_ComplexFormat_getImaginaryFormat(t_ComplexFormat *self);
      static PyObject *t_ComplexFormat_getRealFormat(t_ComplexFormat *self);
      static PyObject *t_ComplexFormat_parse(t_ComplexFormat *self, PyObject *args);
      static PyObject *t_ComplexFormat_get__availableLocales(t_ComplexFormat *self, void *data);
      static PyObject *t_ComplexFormat_get__complexFormat(t_ComplexFormat *self, void *data);
      static PyObject *t_ComplexFormat_get__imaginaryCharacter(t_ComplexFormat *self, void *data);
      static PyObject *t_ComplexFormat_get__imaginaryFormat(t_ComplexFormat *self, void *data);
      static PyObject *t_ComplexFormat_get__realFormat(t_ComplexFormat *self, void *data);
      static PyGetSetDef t_ComplexFormat__fields_[] = {
        DECLARE_GET_FIELD(t_ComplexFormat, availableLocales),
        DECLARE_GET_FIELD(t_ComplexFormat, complexFormat),
        DECLARE_GET_FIELD(t_ComplexFormat, imaginaryCharacter),
        DECLARE_GET_FIELD(t_ComplexFormat, imaginaryFormat),
        DECLARE_GET_FIELD(t_ComplexFormat, realFormat),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_ComplexFormat__methods_[] = {
        DECLARE_METHOD(t_ComplexFormat, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_ComplexFormat, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_ComplexFormat, format, METH_VARARGS),
        DECLARE_METHOD(t_ComplexFormat, getAvailableLocales, METH_NOARGS | METH_CLASS),
        DECLARE_METHOD(t_ComplexFormat, getComplexFormat, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_ComplexFormat, getImaginaryCharacter, METH_NOARGS),
        DECLARE_METHOD(t_ComplexFormat, getImaginaryFormat, METH_NOARGS),
        DECLARE_METHOD(t_ComplexFormat, getRealFormat, METH_NOARGS),
        DECLARE_METHOD(t_ComplexFormat, parse, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(ComplexFormat)[] = {
        { Py_tp_methods, t_ComplexFormat__methods_ },
        { Py_tp_init, (void *) t_ComplexFormat_init_ },
        { Py_tp_getset, t_ComplexFormat__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(ComplexFormat)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(ComplexFormat, t_ComplexFormat, ComplexFormat);

      void t_ComplexFormat::install(PyObject *module)
      {
        installType(&PY_TYPE(ComplexFormat), &PY_TYPE_DEF(ComplexFormat), module, "ComplexFormat", 0);
      }

      void t_ComplexFormat::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(ComplexFormat), "class_", make_descriptor(ComplexFormat::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ComplexFormat), "wrapfn_", make_descriptor(t_ComplexFormat::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ComplexFormat), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_ComplexFormat_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, ComplexFormat::initializeClass, 1)))
          return NULL;
        return t_ComplexFormat::wrap_Object(ComplexFormat(((t_ComplexFormat *) arg)->object.this$));
      }
      static PyObject *t_ComplexFormat_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, ComplexFormat::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_ComplexFormat_init_(t_ComplexFormat *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 0:
          {
            ComplexFormat object((jobject) NULL);

            INT_CALL(object = ComplexFormat());
            self->object = object;
            break;
          }
         case 1:
          {
            ::java::text::NumberFormat a0((jobject) NULL);
            ComplexFormat object((jobject) NULL);

            if (!parseArgs(args, "k", ::java::text::NumberFormat::initializeClass, &a0))
            {
              INT_CALL(object = ComplexFormat(a0));
              self->object = object;
              break;
            }
          }
          {
            ::java::lang::String a0((jobject) NULL);
            ComplexFormat object((jobject) NULL);

            if (!parseArgs(args, "s", &a0))
            {
              INT_CALL(object = ComplexFormat(a0));
              self->object = object;
              break;
            }
          }
          goto err;
         case 2:
          {
            ::java::text::NumberFormat a0((jobject) NULL);
            ::java::text::NumberFormat a1((jobject) NULL);
            ComplexFormat object((jobject) NULL);

            if (!parseArgs(args, "kk", ::java::text::NumberFormat::initializeClass, ::java::text::NumberFormat::initializeClass, &a0, &a1))
            {
              INT_CALL(object = ComplexFormat(a0, a1));
              self->object = object;
              break;
            }
          }
          {
            ::java::lang::String a0((jobject) NULL);
            ::java::text::NumberFormat a1((jobject) NULL);
            ComplexFormat object((jobject) NULL);

            if (!parseArgs(args, "sk", ::java::text::NumberFormat::initializeClass, &a0, &a1))
            {
              INT_CALL(object = ComplexFormat(a0, a1));
              self->object = object;
              break;
            }
          }
          goto err;
         case 3:
          {
            ::java::lang::String a0((jobject) NULL);
            ::java::text::NumberFormat a1((jobject) NULL);
            ::java::text::NumberFormat a2((jobject) NULL);
            ComplexFormat object((jobject) NULL);

            if (!parseArgs(args, "skk", ::java::text::NumberFormat::initializeClass, ::java::text::NumberFormat::initializeClass, &a0, &a1, &a2))
            {
              INT_CALL(object = ComplexFormat(a0, a1, a2));
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

      static PyObject *t_ComplexFormat_format(t_ComplexFormat *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::java::lang::Double a0((jobject) NULL);
            ::java::lang::String result((jobject) NULL);

            if (!parseArgs(args, "O", ::java::lang::PY_TYPE(Double), &a0))
            {
              OBJ_CALL(result = self->object.format(a0));
              return j2p(result);
            }
          }
          {
            ::org::hipparchus::complex::Complex a0((jobject) NULL);
            ::java::lang::String result((jobject) NULL);

            if (!parseArgs(args, "k", ::org::hipparchus::complex::Complex::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.format(a0));
              return j2p(result);
            }
          }
          break;
         case 3:
          {
            ::org::hipparchus::complex::Complex a0((jobject) NULL);
            ::java::lang::StringBuffer a1((jobject) NULL);
            ::java::text::FieldPosition a2((jobject) NULL);
            ::java::lang::StringBuffer result((jobject) NULL);

            if (!parseArgs(args, "kkk", ::org::hipparchus::complex::Complex::initializeClass, ::java::lang::StringBuffer::initializeClass, ::java::text::FieldPosition::initializeClass, &a0, &a1, &a2))
            {
              OBJ_CALL(result = self->object.format(a0, a1, a2));
              return ::java::lang::t_StringBuffer::wrap_Object(result);
            }
          }
          {
            ::java::lang::Object a0((jobject) NULL);
            ::java::lang::StringBuffer a1((jobject) NULL);
            ::java::text::FieldPosition a2((jobject) NULL);
            ::java::lang::StringBuffer result((jobject) NULL);

            if (!parseArgs(args, "okk", ::java::lang::StringBuffer::initializeClass, ::java::text::FieldPosition::initializeClass, &a0, &a1, &a2))
            {
              OBJ_CALL(result = self->object.format(a0, a1, a2));
              return ::java::lang::t_StringBuffer::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "format", args);
        return NULL;
      }

      static PyObject *t_ComplexFormat_getAvailableLocales(PyTypeObject *type)
      {
        JArray< ::java::util::Locale > result((jobject) NULL);
        OBJ_CALL(result = ::org::hipparchus::complex::ComplexFormat::getAvailableLocales());
        return JArray<jobject>(result.this$).wrap(::java::util::t_Locale::wrap_jobject);
      }

      static PyObject *t_ComplexFormat_getComplexFormat(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 0:
          {
            ComplexFormat result((jobject) NULL);
            OBJ_CALL(result = ::org::hipparchus::complex::ComplexFormat::getComplexFormat());
            return t_ComplexFormat::wrap_Object(result);
          }
          break;
         case 1:
          {
            ::java::util::Locale a0((jobject) NULL);
            ComplexFormat result((jobject) NULL);

            if (!parseArgs(args, "k", ::java::util::Locale::initializeClass, &a0))
            {
              OBJ_CALL(result = ::org::hipparchus::complex::ComplexFormat::getComplexFormat(a0));
              return t_ComplexFormat::wrap_Object(result);
            }
          }
          break;
         case 2:
          {
            ::java::lang::String a0((jobject) NULL);
            ::java::util::Locale a1((jobject) NULL);
            ComplexFormat result((jobject) NULL);

            if (!parseArgs(args, "sk", ::java::util::Locale::initializeClass, &a0, &a1))
            {
              OBJ_CALL(result = ::org::hipparchus::complex::ComplexFormat::getComplexFormat(a0, a1));
              return t_ComplexFormat::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError(type, "getComplexFormat", args);
        return NULL;
      }

      static PyObject *t_ComplexFormat_getImaginaryCharacter(t_ComplexFormat *self)
      {
        ::java::lang::String result((jobject) NULL);
        OBJ_CALL(result = self->object.getImaginaryCharacter());
        return j2p(result);
      }

      static PyObject *t_ComplexFormat_getImaginaryFormat(t_ComplexFormat *self)
      {
        ::java::text::NumberFormat result((jobject) NULL);
        OBJ_CALL(result = self->object.getImaginaryFormat());
        return ::java::text::t_NumberFormat::wrap_Object(result);
      }

      static PyObject *t_ComplexFormat_getRealFormat(t_ComplexFormat *self)
      {
        ::java::text::NumberFormat result((jobject) NULL);
        OBJ_CALL(result = self->object.getRealFormat());
        return ::java::text::t_NumberFormat::wrap_Object(result);
      }

      static PyObject *t_ComplexFormat_parse(t_ComplexFormat *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::java::lang::String a0((jobject) NULL);
            ::org::hipparchus::complex::Complex result((jobject) NULL);

            if (!parseArgs(args, "s", &a0))
            {
              OBJ_CALL(result = self->object.parse(a0));
              return ::org::hipparchus::complex::t_Complex::wrap_Object(result);
            }
          }
          break;
         case 2:
          {
            ::java::lang::String a0((jobject) NULL);
            ::java::text::ParsePosition a1((jobject) NULL);
            ::org::hipparchus::complex::Complex result((jobject) NULL);

            if (!parseArgs(args, "sk", ::java::text::ParsePosition::initializeClass, &a0, &a1))
            {
              OBJ_CALL(result = self->object.parse(a0, a1));
              return ::org::hipparchus::complex::t_Complex::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "parse", args);
        return NULL;
      }

      static PyObject *t_ComplexFormat_get__availableLocales(t_ComplexFormat *self, void *data)
      {
        JArray< ::java::util::Locale > value((jobject) NULL);
        OBJ_CALL(value = self->object.getAvailableLocales());
        return JArray<jobject>(value.this$).wrap(::java::util::t_Locale::wrap_jobject);
      }

      static PyObject *t_ComplexFormat_get__complexFormat(t_ComplexFormat *self, void *data)
      {
        ComplexFormat value((jobject) NULL);
        OBJ_CALL(value = self->object.getComplexFormat());
        return t_ComplexFormat::wrap_Object(value);
      }

      static PyObject *t_ComplexFormat_get__imaginaryCharacter(t_ComplexFormat *self, void *data)
      {
        ::java::lang::String value((jobject) NULL);
        OBJ_CALL(value = self->object.getImaginaryCharacter());
        return j2p(value);
      }

      static PyObject *t_ComplexFormat_get__imaginaryFormat(t_ComplexFormat *self, void *data)
      {
        ::java::text::NumberFormat value((jobject) NULL);
        OBJ_CALL(value = self->object.getImaginaryFormat());
        return ::java::text::t_NumberFormat::wrap_Object(value);
      }

      static PyObject *t_ComplexFormat_get__realFormat(t_ComplexFormat *self, void *data)
      {
        ::java::text::NumberFormat value((jobject) NULL);
        OBJ_CALL(value = self->object.getRealFormat());
        return ::java::text::t_NumberFormat::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/geometry/fov/EllipticalFieldOfView.h"
#include "org/orekit/propagation/events/VisibilityTrigger.h"
#include "java/lang/Class.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace geometry {
      namespace fov {

        ::java::lang::Class *EllipticalFieldOfView::class$ = NULL;
        jmethodID *EllipticalFieldOfView::mids$ = NULL;
        bool EllipticalFieldOfView::live$ = false;

        jclass EllipticalFieldOfView::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/geometry/fov/EllipticalFieldOfView");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_498dcf63319448e7] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;DDD)V");
            mids$[mid_getFocus1_f88961cca75a2c0a] = env->getMethodID(cls, "getFocus1", "()Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
            mids$[mid_getFocus2_f88961cca75a2c0a] = env->getMethodID(cls, "getFocus2", "()Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
            mids$[mid_getHalfApertureAlongX_557b8123390d8d0c] = env->getMethodID(cls, "getHalfApertureAlongX", "()D");
            mids$[mid_getHalfApertureAlongY_557b8123390d8d0c] = env->getMethodID(cls, "getHalfApertureAlongY", "()D");
            mids$[mid_offsetFromBoundary_d0bb3aecf00cc465] = env->getMethodID(cls, "offsetFromBoundary", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;DLorg/orekit/propagation/events/VisibilityTrigger;)D");
            mids$[mid_projectToBoundary_b48aa9aef740fa79] = env->getMethodID(cls, "projectToBoundary", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
            mids$[mid_directionAt_20de5f9d51c6611f] = env->getMethodID(cls, "directionAt", "(D)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        EllipticalFieldOfView::EllipticalFieldOfView(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a1, jdouble a2, jdouble a3, jdouble a4) : ::org::orekit::geometry::fov::SmoothFieldOfView(env->newObject(initializeClass, &mids$, mid_init$_498dcf63319448e7, a0.this$, a1.this$, a2, a3, a4)) {}

        ::org::hipparchus::geometry::euclidean::threed::Vector3D EllipticalFieldOfView::getFocus1() const
        {
          return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getFocus1_f88961cca75a2c0a]));
        }

        ::org::hipparchus::geometry::euclidean::threed::Vector3D EllipticalFieldOfView::getFocus2() const
        {
          return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getFocus2_f88961cca75a2c0a]));
        }

        jdouble EllipticalFieldOfView::getHalfApertureAlongX() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getHalfApertureAlongX_557b8123390d8d0c]);
        }

        jdouble EllipticalFieldOfView::getHalfApertureAlongY() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getHalfApertureAlongY_557b8123390d8d0c]);
        }

        jdouble EllipticalFieldOfView::offsetFromBoundary(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0, jdouble a1, const ::org::orekit::propagation::events::VisibilityTrigger & a2) const
        {
          return env->callDoubleMethod(this$, mids$[mid_offsetFromBoundary_d0bb3aecf00cc465], a0.this$, a1, a2.this$);
        }

        ::org::hipparchus::geometry::euclidean::threed::Vector3D EllipticalFieldOfView::projectToBoundary(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0) const
        {
          return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_projectToBoundary_b48aa9aef740fa79], a0.this$));
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
        static PyObject *t_EllipticalFieldOfView_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_EllipticalFieldOfView_instance_(PyTypeObject *type, PyObject *arg);
        static int t_EllipticalFieldOfView_init_(t_EllipticalFieldOfView *self, PyObject *args, PyObject *kwds);
        static PyObject *t_EllipticalFieldOfView_getFocus1(t_EllipticalFieldOfView *self);
        static PyObject *t_EllipticalFieldOfView_getFocus2(t_EllipticalFieldOfView *self);
        static PyObject *t_EllipticalFieldOfView_getHalfApertureAlongX(t_EllipticalFieldOfView *self);
        static PyObject *t_EllipticalFieldOfView_getHalfApertureAlongY(t_EllipticalFieldOfView *self);
        static PyObject *t_EllipticalFieldOfView_offsetFromBoundary(t_EllipticalFieldOfView *self, PyObject *args);
        static PyObject *t_EllipticalFieldOfView_projectToBoundary(t_EllipticalFieldOfView *self, PyObject *args);
        static PyObject *t_EllipticalFieldOfView_get__focus1(t_EllipticalFieldOfView *self, void *data);
        static PyObject *t_EllipticalFieldOfView_get__focus2(t_EllipticalFieldOfView *self, void *data);
        static PyObject *t_EllipticalFieldOfView_get__halfApertureAlongX(t_EllipticalFieldOfView *self, void *data);
        static PyObject *t_EllipticalFieldOfView_get__halfApertureAlongY(t_EllipticalFieldOfView *self, void *data);
        static PyGetSetDef t_EllipticalFieldOfView__fields_[] = {
          DECLARE_GET_FIELD(t_EllipticalFieldOfView, focus1),
          DECLARE_GET_FIELD(t_EllipticalFieldOfView, focus2),
          DECLARE_GET_FIELD(t_EllipticalFieldOfView, halfApertureAlongX),
          DECLARE_GET_FIELD(t_EllipticalFieldOfView, halfApertureAlongY),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_EllipticalFieldOfView__methods_[] = {
          DECLARE_METHOD(t_EllipticalFieldOfView, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_EllipticalFieldOfView, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_EllipticalFieldOfView, getFocus1, METH_NOARGS),
          DECLARE_METHOD(t_EllipticalFieldOfView, getFocus2, METH_NOARGS),
          DECLARE_METHOD(t_EllipticalFieldOfView, getHalfApertureAlongX, METH_NOARGS),
          DECLARE_METHOD(t_EllipticalFieldOfView, getHalfApertureAlongY, METH_NOARGS),
          DECLARE_METHOD(t_EllipticalFieldOfView, offsetFromBoundary, METH_VARARGS),
          DECLARE_METHOD(t_EllipticalFieldOfView, projectToBoundary, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(EllipticalFieldOfView)[] = {
          { Py_tp_methods, t_EllipticalFieldOfView__methods_ },
          { Py_tp_init, (void *) t_EllipticalFieldOfView_init_ },
          { Py_tp_getset, t_EllipticalFieldOfView__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(EllipticalFieldOfView)[] = {
          &PY_TYPE_DEF(::org::orekit::geometry::fov::SmoothFieldOfView),
          NULL
        };

        DEFINE_TYPE(EllipticalFieldOfView, t_EllipticalFieldOfView, EllipticalFieldOfView);

        void t_EllipticalFieldOfView::install(PyObject *module)
        {
          installType(&PY_TYPE(EllipticalFieldOfView), &PY_TYPE_DEF(EllipticalFieldOfView), module, "EllipticalFieldOfView", 0);
        }

        void t_EllipticalFieldOfView::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(EllipticalFieldOfView), "class_", make_descriptor(EllipticalFieldOfView::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(EllipticalFieldOfView), "wrapfn_", make_descriptor(t_EllipticalFieldOfView::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(EllipticalFieldOfView), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_EllipticalFieldOfView_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, EllipticalFieldOfView::initializeClass, 1)))
            return NULL;
          return t_EllipticalFieldOfView::wrap_Object(EllipticalFieldOfView(((t_EllipticalFieldOfView *) arg)->object.this$));
        }
        static PyObject *t_EllipticalFieldOfView_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, EllipticalFieldOfView::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_EllipticalFieldOfView_init_(t_EllipticalFieldOfView *self, PyObject *args, PyObject *kwds)
        {
          ::org::hipparchus::geometry::euclidean::threed::Vector3D a0((jobject) NULL);
          ::org::hipparchus::geometry::euclidean::threed::Vector3D a1((jobject) NULL);
          jdouble a2;
          jdouble a3;
          jdouble a4;
          EllipticalFieldOfView object((jobject) NULL);

          if (!parseArgs(args, "kkDDD", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0, &a1, &a2, &a3, &a4))
          {
            INT_CALL(object = EllipticalFieldOfView(a0, a1, a2, a3, a4));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_EllipticalFieldOfView_getFocus1(t_EllipticalFieldOfView *self)
        {
          ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);
          OBJ_CALL(result = self->object.getFocus1());
          return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
        }

        static PyObject *t_EllipticalFieldOfView_getFocus2(t_EllipticalFieldOfView *self)
        {
          ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);
          OBJ_CALL(result = self->object.getFocus2());
          return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
        }

        static PyObject *t_EllipticalFieldOfView_getHalfApertureAlongX(t_EllipticalFieldOfView *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getHalfApertureAlongX());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_EllipticalFieldOfView_getHalfApertureAlongY(t_EllipticalFieldOfView *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getHalfApertureAlongY());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_EllipticalFieldOfView_offsetFromBoundary(t_EllipticalFieldOfView *self, PyObject *args)
        {
          ::org::hipparchus::geometry::euclidean::threed::Vector3D a0((jobject) NULL);
          jdouble a1;
          ::org::orekit::propagation::events::VisibilityTrigger a2((jobject) NULL);
          PyTypeObject **p2;
          jdouble result;

          if (!parseArgs(args, "kDK", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::orekit::propagation::events::VisibilityTrigger::initializeClass, &a0, &a1, &a2, &p2, ::org::orekit::propagation::events::t_VisibilityTrigger::parameters_))
          {
            OBJ_CALL(result = self->object.offsetFromBoundary(a0, a1, a2));
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(EllipticalFieldOfView), (PyObject *) self, "offsetFromBoundary", args, 2);
        }

        static PyObject *t_EllipticalFieldOfView_projectToBoundary(t_EllipticalFieldOfView *self, PyObject *args)
        {
          ::org::hipparchus::geometry::euclidean::threed::Vector3D a0((jobject) NULL);
          ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);

          if (!parseArgs(args, "k", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.projectToBoundary(a0));
            return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
          }

          return callSuper(PY_TYPE(EllipticalFieldOfView), (PyObject *) self, "projectToBoundary", args, 2);
        }

        static PyObject *t_EllipticalFieldOfView_get__focus1(t_EllipticalFieldOfView *self, void *data)
        {
          ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
          OBJ_CALL(value = self->object.getFocus1());
          return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(value);
        }

        static PyObject *t_EllipticalFieldOfView_get__focus2(t_EllipticalFieldOfView *self, void *data)
        {
          ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
          OBJ_CALL(value = self->object.getFocus2());
          return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(value);
        }

        static PyObject *t_EllipticalFieldOfView_get__halfApertureAlongX(t_EllipticalFieldOfView *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getHalfApertureAlongX());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_EllipticalFieldOfView_get__halfApertureAlongY(t_EllipticalFieldOfView *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getHalfApertureAlongY());
          return PyFloat_FromDouble((double) value);
        }
      }
    }
  }
}
